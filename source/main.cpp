#include <string.h>
#include <stdio.h>
#include <dirent.h>
#include <stdlib.h>
#include <unistd.h>

#include <switch.h>

#include "mp3.h"
#include "util.h"

//bool onboot = false;

#define ERPT_SAVE_ID 0x80000000000000D1
#define TITLE_ID 0x00FF0000000002AA
#define INNER_HEAP_SIZE 0x40000
size_t nx_inner_heap_size = INNER_HEAP_SIZE;
char   nx_inner_heap[INNER_HEAP_SIZE];

extern "C"
{
    void __libnx_initheap(void)
{
	void*  addr = nx_inner_heap;
	size_t size = nx_inner_heap_size;

	// Newlib
	extern char* fake_heap_start;
	extern char* fake_heap_end;

	fake_heap_start = (char*)addr;
	fake_heap_end   = (char*)addr + size;
}

// Init/exit services, update as needed.
void __attribute__((weak)) __appInit(void)
{
    Result rc;

    // Initialize default services.
    rc = smInitialize();
    //if (R_FAILED(rc))
        //fatalSimple(MAKERESULT(Module_Libnx, LibnxError_InitFail_SM));

    // Enable this if you want to use HID.
    rc = hidInitialize();
    //if (R_FAILED(rc))
        //fatalSimple(MAKERESULT(Module_Libnx, LibnxError_InitFail_HID));

    //Enable this if you want to use time.
    /*rc = timeInitialize();
    if (R_FAILED(rc))
        fatalLater(MAKERESULT(Module_Libnx, LibnxError_InitFail_Time));
    __libnx_init_time();*/

    rc = fsInitialize();
    //if (R_FAILED(rc))
        //fatalSimple(MAKERESULT(Module_Libnx, LibnxError_InitFail_FS));

    fsdevMountSdmc();
}

void __attribute__((weak)) userAppExit(void);

void __attribute__((weak)) __appExit(void)
{
    // Cleanup default services.
    fsdevUnmountAll();
    fsExit();
    //timeExit();//Enable this if you want to use time.
    hidExit();// Enable this if you want to use HID.
    smExit();
}
}

// Main program entrypoint
int main(int argc, char* argv[])
{
    FILE * Soundfile = fopen ("sdmc://config/BootSoundNX/sound/bootsound.mp3","r+");
    
    if (Soundfile != NULL)
    {
        playMp3("sdmc://config/BootSoundNX/sound/bootsound.mp3");
        fclose (Soundfile);
    }
    return 0;
}