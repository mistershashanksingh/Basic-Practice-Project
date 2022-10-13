#include<iostream>
                   
using namespace std;
void cl(int ch);
int starcast(int age);
int main(int argc, char const *argv[])

{  
    int age;
    system("cls");
    /* code */
    
    cout<<"Enter your age to check the eligibility = ";
    cin>>age;
    cout<<endl;
    starcast(age);
    return 0;
}

int starcast(int age)
{
    int ch;
    if (age>18)
    {
       /* code */
       cl(ch);
       cout<<"\nyour are eligible\n";
       cl(ch);
    }
    else
    {
        cl(ch);
        cout<<"\nyour age is less then the eligibility criteria\n";
        cl(ch);
    }
    
    return 0;
   
}

void cl(int ch)
{
    cout<<"______________________________________________________________________________";
}