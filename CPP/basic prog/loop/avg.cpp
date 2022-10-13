#include<iostream>
                   
using namespace std;
int main(int argc, char const *argv[])

{
    int n, i;
    float num[100], sum=0.0, average;

    /*code for finding average*/
    system("cls");
    
    cout << "Enter the numbers of data: ";
    cin >> n;

    while (n > 100 || n <= 0)
    {
        cout << "Error! number should in range of (1 to 100)." << endl;
        cout << "Enter the number again: ";
        cin >> n;
    }

    for(i = 1; i < n+1; ++i)
    {
        cout<<"Enter number "<<i<<"->" ; cin >> num[i];
        sum += num[i];
    }
    cout<<"The sum of Entered Number ="<<sum;
    average = sum / n;
    cout << "\nAverage of Enterd Number = " << average;

    return 0;
}