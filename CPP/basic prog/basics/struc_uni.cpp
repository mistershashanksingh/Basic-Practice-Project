#include<iostream>
#include<string>
                   
using namespace std;

// struct keywd is use to create a bunch structure of different data typ 
// typdef is keywd is use to define any struc into wd 
typedef struct stu
{
    /* data */
    string id;
    char name[30];
    int roll_no;
    int age;
    float fee; 
}ss;

// union keywd is use to create a group is 
typedef union gndr
{
    /* data */
    char female;
    char male;
    char transgrnd;
}gd;


int main(int argc, char const *argv[])
{
    ss s[4];
    gd g[1];
    system("cls");
    /*code*/
    
    for (int i = 0; i < 1; i++)
    {
        /* code */
        cout<<"Enter Id of student :";
        cin>>s[i].id;
        cout<<"Enter Name of student :";
        cin>>s[i].name;
        cout<<"Enter Age of student :";
        cin>>s[i].age;
        cout<<"Enter Gender of student :";
        cin>>g[i].male;
        cout<<"Enter Roll no. of student :";
        cin>>s[i].roll_no;
        cout<<"Enter fee of student :";
        cin>>s[i].fee;

    }

    cout<<"You Have Entered \n";

    for (int i = 0; i < 1; i++)
    {
        /* code */
        cout<<"Id :"<<s[i].id<<endl;
        cout<<"Name :"<<s[i].name<<endl;
        cout<<"Age :"<<s[i].age<<endl;
        cout<<"Gender :"<<g[i].male<<endl;
        cout<<"Roll no. :"<<s[i].roll_no<<endl;
        cout<<"fee :"<<s[i].fee<<endl;
    }
    
    

    return 0;
}