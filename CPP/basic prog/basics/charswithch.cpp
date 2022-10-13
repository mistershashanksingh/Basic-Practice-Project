#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    char ch;
    int a,b,c;
    system("cls");
    /* code for switch case  */
    cout<<"Enter Number to choice one \n";
    cout<<"_______________________________________________________________________________\n";
    cout<<"\n +"<<"\n -"<<"\n *"<<"\n /";
    cout<<"\n______________________________________________________________________________\n";
    cout<<"\nEnter your choice = ";
    cin>>ch;
    switch (ch)
    {
        /* code */
    case '+': 
        cout<<"Enter value for 1st number =";
        cin>>a;
        cout<<"Enter value for 2nd number =";
        cin>>b;
        c=a+b;
        cout<<"_______________________________________________________________________________\n";
        cout<<"Addition of a + b = "<<c<<endl;
        cout<<"_______________________________________________________________________________\n";
        break;
    case '-': 
        cout<<"Enter value for 1st number =";
        cin>>a;
        cout<<"Enter value for 2nd number =";
        cin>>b;
        c=a-b;
        cout<<"_______________________________________________________________________________\n\n";
        cout<<"Substraction of a - b ="<<c<<endl;
        cout<<"_______________________________________________________________________________\n";
        break;
    case '*': 
        cout<<"Enter value for 1st number = ";
        cin>>a;
        cout<<"Enter value for 2nd number = ";
        cin>>b;
        c=a*b;
        cout<<"_______________________________________________________________________________\n\n";
        cout<<"Multipication of a * b = "<<c<<endl;
        cout<<"_______________________________________________________________________________\n";
        break;
    case '/':
        cout<<"Enter value for 1st number = ";
        cin>>a;
        cout<<"Enter value for 2nd number = ";
        cin>>b;
        c=a/b;

        cout<<"_______________________________________________________________________________\n\n";
        cout<<"Divison of a / b = "<<c<<endl;
        cout<<"_______________________________________________________________________________\n";
        break;
    default:
        cout<<"_______________________________________________________________________________\n\n";
        cout<<"Enter correct choice\n";
        cout<<"_______________________________________________________________________________\n";
    }
    return 0;
}
