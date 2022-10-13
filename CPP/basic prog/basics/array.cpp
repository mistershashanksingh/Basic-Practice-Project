#include<iostream>
                   
using namespace std;
int main(int argc, char const *argv[])
{
    /*code of an array*/
    // array is data structure type in cpp
    int array[11];
    // This is how we can create an array in cpp
    cout<<"\nEnter 10 digit phone no. to get into an array:";
    for (int i = 0; i < 10; i++)
    {
        /* code */
        cin>>array[i];
    }
    cout<<"\n";
    
    for ( int i = 0; i < 10; i++)
    {
        /* code */
        cout<<array[i];
    }
    
    return 0;
}