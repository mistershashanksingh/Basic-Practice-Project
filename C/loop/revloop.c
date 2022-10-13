#include<stdio.h>

int main(int argc, char const *argv[])
{
    
    printf("Hello World !\n");
    for (int i = 1; i < 10; i++)
    {
        /* code */
        for (int o = 0; o < i; o++)
        {
            /* code */
            printf(" ");
        }
        for (int j = 10; j > i; j--)
        {
            /* code */
            printf("$");
        }
        
        printf("\n");

            
    }
    
    return 0;
}
