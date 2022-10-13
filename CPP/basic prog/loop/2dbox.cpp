#include<iostream>
                   
using namespace std;
int main(int argc, char const *argv[])
{
    /*code for nested forloop with cndtnl stsmnt*/
    //cout<<"Enter Size of Box:";
    int n;
    cin>>n;
    for (int i = 0; i < n+1; i++)
    {
        /* code */
        for (int j = 0; j < n+1; j++)
        {
            /* code */
            if (i==0 || i==n || j==0 || j==n)
            {
                /* code */
                cout<<"*";
            }
            else
            {
                /* code */
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    
 
    return 0;
}