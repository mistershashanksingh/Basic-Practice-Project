#include "iostream"

using namespace std;

 int main(int argc, char const *argv[])
 {
   /* code for finding perfect no. */
   int sum=0, n;
   system("cls");
   cout << "Hey! this is an perfect number project" << '\n';
   cout << "Enter Number To check Weather its a perfect or Not -->"; cin >>n;
   for (int i = 1; i <= n/2; i++)
   {
     /* code */
     if (n%i==0)
     {
       /* code */
       sum+=i;
     }
   }
   if (n==sum)
   {
     /* code */
     cout <<n<<" is a Perfect Number" << '\n';
   }
   else
   {
     cout <<n<<" is Not a Perfect Number" << '\n';
   }

   return 0;
 }
