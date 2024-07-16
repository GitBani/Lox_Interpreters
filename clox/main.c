#include "common.h"
#include "chunk.h"
#include <stdio.h>

int main(int argc, const char *argv[])
{
    Chunk chunk;
    initChunk(&chunk);
    writeChunk(&chunk, OP_RETURN);
    freeChunk(&chunk);
    printf("hi\n");
    return 0;
}