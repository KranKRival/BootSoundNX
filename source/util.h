#include <switch.h>

/// IPC input header magic
#define SFCI_MAGIC 0x49434653

//void fatalLater(Result err);

void fatalSimple(Result error);
void fatalLater(u64 unsigned_int);