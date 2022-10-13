#include<iostream>
                   
using namespace std;
int main(int argc, char const *argv[])
{
    /*code for pattern printing*/
    cout<<"Enter The dimond size:";
    int n;
    cin>>n;
    for (int i = 1, d = 0; i < n; i++,d =0)
    {
        /* code */
        for (int j = 0; j < (n-i); j++)
        {
            /* code */
            cout<<" ";
        }
        while (d != (2*i)-1)
        {
            /* code */
            cout<<"*";
            d++;
        }
        cout<<"\n";
       
    }
    for (int i = n-1, d = 0; i >=1 ; i--,d =0)
    {
        /* code */
        for (int j = 0; j <(n-i); j++)
        {
            /* code */
            cout<<" ";
        }
        while (d != (2*i)-1)
        {
            /* code */
            cout<<"*";
            d++;
        }
        cout<<"\n";
               
    }
 
    return 0;
}