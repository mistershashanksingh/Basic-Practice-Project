#include<iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int ch,a,b,c;
    system("cls");
    /* code for switch case  */
    cout<<"Enter Number to choice one \n";
    cout<<"__________________________________________________________________________________\n";
    cout<<"\n 1. Addition"<<"\n 2. Substraction"<<"\n 3. Multipication"<<"\n 4. Division";
    cout<<"\n__________________________________________________________________________________\n";
    cout<<"\nEnter your choice = ";
    cin>>ch;
    
    switch (ch)
    {
        /* code */
    case 1: 
        cout<<"Enter value for 1st number =";
        cin>>a;
        cout<<"Enter value for 2nd number =";
        cin>>b;
        c=a+b;
        cout<<"_______________________________________________________________________________\n\n";
        cout<<"Addition of a + b = "<<c<<endl;
        cout<<"_______________________________________________________________________________\n";
        break;
    case 2: 
        cout<<"Enter value for 1st number =";
        cin>>a;
        cout<<"Enter value for 2nd number =";
        cin>>b;
        c=a-b;
        cout<<"_______________________________________________________________________________\n\n";
        cout<<"Substraction of a - b ="<<c<<endl;
        cout<<"_______________________________________________________________________________\n";
        break;
    case 3: 
        cout<<"Enter value for 1st number = ";
        cin>>a;
        cout<<"Enter value for 2nd number = ";
        cin>>b;
        c=a*b;
        cout<<"_______________________________________________________________________________\n\n";
        cout<<"Multipication of a * b = "<<c<<endl;
        cout<<"_______________________________________________________________________________\n";
        break;
    case 4:
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


