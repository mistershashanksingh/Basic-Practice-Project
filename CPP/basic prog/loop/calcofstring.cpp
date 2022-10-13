#include "iostream"

using namespace std;

int main(int argc, char const *argv[]) 
{
  char s[50];
  int c=0,v=0,spa;
  /* code for finding nunbers of vowels and consonent*/
  system("cls");
  cout << "program for counting vowel or consonent in a string" << '\n';
  cin.getline(s,50);
    for (int i = 0; s[i]!='\0'; i++)
    {
      /* code */
       if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U')
        {
            ++v;
        }
        else if((s[i]>='a'&& s[i]<='z') || (s[i]>='A'&& s[i]<='Z'))
        {
            ++c;
        }
        else if(s[i]==' ')
        {
            ++spa;
        }
      
    }

cout<< "Vowels:-" <<v<<"\n";
cout<<"Consonets:-"<<c<<"\n";
cout<<"Spaces:-"<<spa;
  return 0;
}