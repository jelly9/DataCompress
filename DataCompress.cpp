
#include <string.h>
#include "DataCompress.h"

void Usage(const char *proc)
{
    printf("Usage: %s [-opt] [-path]\n", proc);
    printf("-opt: hcp, uhcp\n");
}

int main(int argc, char* argv[])
{
    (void)argc;
    (void)argv;
    if(argc != 3){
        Usage(argv[0]);
        return 1;
    }

    if(strcasecmp(argv[1], "-hcp") == 0){
        TestCompress(argv[2]);
    }else if(strcasecmp(argv[1], "-uhcp") == 0){
        TestDeCompress(argv[2]);
    }else{
        Usage(argv[0]);
        return 1;
    }

    return 0;
}
