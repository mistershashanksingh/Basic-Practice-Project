#include<iostream>
                   
using namespace std;
int add(int a,int b);
int sub(int e,int f);
int mult(int a,int b);
int divi(int e,int f);
void cl(int ch);
int ch;
int main(int argc, char const *argv[])
{
    int a,b,e,f;
    system("cls");
    /*code*/
    add(a,b);
    sub(e,f);
    mult(a,b);
    divi(e,f);
 
    return 0;
}

int add(int a,int b)
{
    int c;
    cout<<"Enter 1st Number = ";
    cin>>a;
    cout<<"Enter 2nd Number = ";
    cin>>b;
    c=a+b;
    cl(ch);
    cout<<"The Addition of "<<a<<" and "<<b<<" = "<<c;
    cl(ch);

    return 0;
}

int sub(int e,int f)
{
    int g;
    cout<<"Enter 1st Number = ";
    cin>>e;
    cout<<"Enter 2nd Number = ";
    cin>>f;
    g=e-f;
    cl(ch);
    cout<<"The Substraction of "<<e<<" and "<<f<<" = "<<g;
    cl(ch);

    return 0;
}
int mult(int a,int b)
{
    int c;
    cout<<"Enter 1st Number = ";
    cin>>a;
    cout<<"Enter 2nd Number = ";
    cin>>b;
    c=a*b;
    cl(ch);
    cout<<"The Multiplication of "<<a<<" and "<<b<<" = "<<c;
    cl(ch);

    return 0;
}

int divi(int e,int f)
{
    int g;
    cout<<"Enter 1st Number = ";
    cin>>e;
    cout<<"Enter 2nd Number = ";
    cin>>f;
    g=e/f;
    cl(ch);
    cout<<"The Divsion of "<<e<<" and "<<f<<" = "<<g;
    cl(ch);


    return 0;
}

void cl(int ch)
{
    cout<<"\n______________________________________________________________________________________________\n\n";
}