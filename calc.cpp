#include<iostream>
using namespace std;

int main()
{
    int num1,num2;
    cout<<"enter 2 numbers: ";
    cin >> num1 >> num2; 

    char n;
    cout<<"enter the operator";
    cin >> n;

    switch (n)
    {
    case '+':
        cout << num1 + num2 << endl;
        break;

    case '-':
        cout <<num1-num2<< endl;
        break;

    case '*':
        cout <<num1*num2 <<endl;
        break;
    
    case '/':
        cout<<num1/num2<<endl;
        break;
    
    default:
        break;
    }

    return 0;
}