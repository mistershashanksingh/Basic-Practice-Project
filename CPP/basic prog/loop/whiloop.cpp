#include <iostream>
 
 using namespace std;
 int main(int argc, char const *argv[])
 {
     int i=0;
     system("cls");
     /* code of simple while loop*/
     cout<<"Enter Number For Printing Table = ";
     int j;
     cin>>j;
     while ( i<11)
     {
         /* code */
         cout<<j<<" * "<<i<<" = "<<i*j<<"\n";
         i++;
        
     }
     return 0;
 }
 
