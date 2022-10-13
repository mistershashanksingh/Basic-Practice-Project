#include <iostream>
 
 using namespace std; 
 int main(int argc, char const *argv[])
 {
     /* code for writing table in complete formate*/
     cout<<"Enter Number for print Table:";
     int j;
     cin>>j;
     for (int i=1 ; i < 11 ;)
     {
         /* code */
         cout<<j<<"*"<<i<<"="<<i*j<<"\n";
         i++;
     }
     
     return 0;
 }
 