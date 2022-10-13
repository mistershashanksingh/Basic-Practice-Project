#include<stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    for (int i = 0; i < 10; i++)
    {
        /* code */
        for (int k = 10; k > i; k--)
        {
            /* code */
            printf(" ");
        }
        for (int j = 1; j < i; j++)
        {
            /* code */
            printf("#");
        }
        printf("\n");

    }
    
    return 0;
}
