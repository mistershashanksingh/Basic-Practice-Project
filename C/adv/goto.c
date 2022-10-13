#include <stdio.h>

int main(int argc, char const *argv[])
{
    int l;
    /* code */
    
    printf("This is the start of while loop\n");
    for (int i = 0; i < 5; i++)
    {

        /* code */
        for (int j = 0; j < 6; j++)
        
        {
            printf("Enter the no. = ");
            scanf("%d", &l);
            /* code */
            if (l==10)
            {
                /* code */
                goto end;    
                
            }
            
        }
        
    }
    end:

    return 0;

}
