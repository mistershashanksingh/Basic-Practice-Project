/// A buffer overflow attackware  

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[])
{

    /* code */
    char buf [128];
    if (argc == 1)
    {
        printf("Usage:/s argument;argv[0]");
        exit(1);
        /* code */
    }
    strcpy(buf,argv[1]);
    printf("%s",buf);

    return 0;
}