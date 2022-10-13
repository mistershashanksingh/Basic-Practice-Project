/* function call  :- 1) By value 
                     2) By address reference */
#include"stdio.h"

void val(int trunc); // function for called by value
void ref(int* fphi, int* mlambda); // functon for called by addess reference
int main(int argc, char const *argv[])
{
    /* code */
   system("cls");
    int idx, chr, fin; // This variable is used in called by value this var are really allocate the memory 
    printf("This is function calls :-\n");
    printf("1.This is function called by value\nEnter number to get fibonacci=");
    scanf("%d", &fin);
    val(fin);
    printf("2.This is function called by refrence\nEnter 1st value for swap=");
    scanf("%d", &idx);
    printf("Enter 2nd value for swap=");
    scanf("%d", &chr);
    printf("value of a = %d and value of b = %d \n", idx, chr);
    ref(&idx, &chr);
    printf("value of a = %d and value of b = %d ", idx, chr);
    return 0;
}
void val(int trunc) // function var virutally allocate momory
// This function is an illustration of loop 
{
    int fib, prid = 0, nxt = 1;
    for (int i = 0; i < trunc; i++)
    {
        /* code */
        printf("%d", prid);
        printf("\n");
        fib = prid + nxt;
        prid = nxt;
        nxt = fib;
    }
    
}
void ref(int* fphi, int* mlambda) //function var called by reference value of memory
// This function is an illustration of recursion
{
    int temp = *mlambda;
    *mlambda = *fphi;
    *fphi =  temp;
    
}
