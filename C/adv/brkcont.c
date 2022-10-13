#include <stdio.h>
//#include<stdlib.h>

int main(int argc, char const *argv[])
{
    /* code */

    printf("This is the break and continue statement with loop\n");

    int j,l;

    for (int i = 0; i < 5; i++)
    {
        /* code */
        printf("Enter the no. =");
        scanf("%d",&j);
        if ( j > 33)
        {
            /* code */
            continue;
            printf("Enter Age Between 34 to 70");
        }
        else
        {
            /* code */
            break;
            //exit;
        }        
        
    }
    for (int k = 0; k < 5; k++)
    {
        /* code */
        printf("Enter your age =");
        scanf("%d",&l);
        if (l<18)
        {
            /* code */
            printf("your are not eligible");
            break;
             
        }
        else
        {
            continue;
        }
        
    }

   
    return 0;

}