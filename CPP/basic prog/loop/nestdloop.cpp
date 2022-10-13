#include<iostream>
                   
using namespace std;
int main(int argc, char const *argv[])
{ 
    int n;
    /*code of nested loop*/
    cout<<"Enter No to print star:";
    cin>>n;
    for (int i = 0; i < n+1; i++)
    {
        /* code */
        for ( int j = 0; j < n+1; j++)
        {
            /* code */
            if (j<n+1-i)
            {
                /* code */
                cout<<" ";
            }
            else
            {
                /* code */
                //cout<<" *";// for pyramid
                cout<<"*"; //for ri8 triangle
            }
            
        }
        cout<<"\n";
        
    }
    
 
    return 0;
}