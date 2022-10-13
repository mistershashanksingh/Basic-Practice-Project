#include<iostream>
                   
using namespace std;
int main(int argc, char const *argv[])
{
    /*code of pattern printing*/
    cout<<"Enter number for horizontal pyramid:";
    int n;
    cin>>n;
    for (int i = 0; i <n; i++)
    {
        /* code */
        for (int j = 0 ; j < i; j++)
        {
            /* code */
            cout<<"*";
        }
        cout<<"\n";
    }
    for (int i = n-1; i >=0 ; i--)
    {
        /* code */
        for (int j = 0; j <=i; j++)
       {
           /* code */
            cout<<"*";
       }
       cout<<"\n";
    }
 
    return 0;
}