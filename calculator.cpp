#include<iostream>
#include<cmath>
using namespace std;

void decimalToBinary(int n){
    if (n == 0) {
        cout<< "0";
        return;
    }
    int binaryNum[32];
    int i = 0;
    while (n > 0) {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        cout<< binaryNum[j];
}
int main()
{
    char op;
    double operand;
    double a;
    double b;
     int choice;
    cout<<"\n                                          SIMPLE CALCULATOR                                          "<<endl<<endl;

    cout<<"1. ADDITION(+)"<<endl;
    cout<<"2. SUBTRACTON(-)"<<endl;
    cout<<"3. MULTIPLICATION(*)"<<endl;
    cout<<"4. DIVISION"<<endl;
    cout<<"5. POWER(^)"<<endl;
    cout<<"6. PERCENTAGE"<<endl;
    cout<<"7. CONVERT TO BINARY\n";
    cout<<"0. EXIT \n\n";
    cout<<"Enter your choice: "<<endl;
    cin>>choice;
   
    switch(choice)
    {
        case 1: 
        cout<<"Enter Two Operands: "<<endl;
        cout<<"  Enter first operand: a= ";
        cin>>a;
        cout<<"  Enter second operand: b= ";
        cin>>b;
        cout<<a<<" + "<<b<<" = "<<a+b<<endl<<endl;
        break;

        case 2:
        cout<<"Enter Two Operands: "<<endl;
        cout<<"  Enter first operand: a= ";
        cin>>a;
        cout<<"  Enter second operand: b= ";
        cin>>b;
        cout<<a<<" - "<<b<<" = "<<a-b<<endl<<endl;
        break;

        case 3:
        cout<<"Enter Two Operands: "<<endl;
        cout<<"  Enter first operand: a= ";
        cin>>a;
        cout<<"  Enter second operand: b= ";
        cin>>b;
        cout<<a<<" * "<<b<<" = "<<a*b<<endl<<endl;
        break;

        case 4:
        cout<<"Enter Two Operands: "<<endl;
        cout<<"  Enter first operand: a= ";
        cin>>a;
        cout<<"  Enter second operand: b= ";
        cin>>b;
        cout<<a<<" / "<<b<<" = "<<double(a/b)<<endl<<endl;
        break;

        case 5:
        double base, exponent, result;
        cout<< "Enter the base: ";
        cin>>base;
        cout << "Enter the exponent: ";
        cin>>exponent;
        result = pow(base, exponent);
        cout<< base << "^" << exponent << " = " << result << endl<<endl;
        break;

        case 6:
        cout<<"Enter Two Operands: "<<endl;
        cout<<"  Enter first operand: a= ";
        cin>>a;
        cout<<"  Enter second operand: b= ";
        cin>>b;
        cout<<a<<" is " <<(double(a) / b)*100<< "% of "<<b<<endl<<endl;
        break;

        case 7:
        int n;
        cout << "Enter a decimal number: ";
        cin >> n;
        cout << n << " in binary is: ";
        decimalToBinary(n);
        cout<<endl<<endl;
        break;
        
        case 0:
        cout<<" EXITING FROM CALCULATOR..."<<endl;
        break;

        default:
        cout<<"INVALID INPUT!   Please Check Input Once.\n";
        exit(0);
        }
    cout<<"Thank you!\n"<<endl;
return 0;
}