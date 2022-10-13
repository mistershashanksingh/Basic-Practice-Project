#include <stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

int main(int argc, char const *argv[])
{   
    FILE *fptr;

    errno = 0;
    fptr = fopen("nonexistant.txt","r");
    if (fptr == NULL)
    {
        /* code */
        perror("Error");
        fprintf(stderr, "%s\n", strerror(errno));
        exit(EXIT_FAILURE);
    
    }
    fclose(fptr);

    return 0;
}
