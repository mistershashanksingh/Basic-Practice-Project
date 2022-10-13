#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    /* code condtional statament*/
    int a=30;
    // check condition using ternary operator

    /*a>20 ? cout<<"Smaller" : cout<<"Greater";

    emmet = var>value to whaich we'll apply condtn ?(ask from compiler)
    
    a>20 ? cout<<"True" : cout<<"False";*/

    // check condtn using if else
    if (a<20)
    {
        /* code */
        cout<<"True";
    }
    else if (a=30)
    {
        /* code */
        cout<<"nither true nor false";
    }
    
    else
    {
        cout<<"False";
    }
    

    return 0;
}
