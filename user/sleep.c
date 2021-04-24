#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]){
    if(argc<2) {
        fprintf(2,"error:no argument\n");
        exit(1);
    }
    const char * ticksStr=argv[1];
    int ticks=atoi(ticksStr);
    sleep(ticks);
    exit(0);
}