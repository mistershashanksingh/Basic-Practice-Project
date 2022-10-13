#include<iostream>
                   
using namespace std;
int main(int argc, char const *argv[])
{
    int n,count=0,mod;
    system("cls");
    /*code*/
    // cout<<"Enter Number for revers = ";
    // cin>>n;

    // while (n!=0)
    // {
    //     /* code */
    //     mod=n%10;
    //     rev=rev*10+mod;
    //     n=n/10;
    // }
    // cout<<"Reverse no = "<<rev<<endl;

    // ___________________________________new program______________________________________________

    // cout<<"Enter number for sum of digit = ";
    // cin>>n;

    // while (n!=0)
    // {
    //     /* code */
    //     mod=n%10;
    //     sum=sum+mod;
    //     n=n/10;
    //  }
    //  cout<<"Sum Of no = "<<sum<<endl;

    // ___________________________________new program______________________________________________


    cout<<"Enter number for  = ";
    cin>>n;

    while (n!=0)
    {
        /* code */
        count++;
        n=n/10;
     }
     cout<<"Counting Of no = "<<count<<endl;
 
    return 0;
}