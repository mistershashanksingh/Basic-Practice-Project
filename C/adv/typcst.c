#include <stdio.h>

int main(int argc, char const *argv[])
{
    /* code */
    int j;
    
    printf("This is the typecasting\n");//typcasting is procedure to convert its data type to float into int or vice-versa
    
    for (int i = 0 , j = 0; i < 10; i++,j++)
    {
        /* code */
        printf("%d||%f\n",i,(float)j);
    }
    

    return 0;

}
