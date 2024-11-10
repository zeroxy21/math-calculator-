#include <iostream>
#include <cmath>

using namespace std;

int main()
{

string operation;
double number1,number2;
cout <<"enter first number : ";
cin >> number1;
cout << "enter operation (+,-,*,/):";
cin >> operation;
cout <<"enter second number : ";
cin >> number2;

if(operation== "+"){

    cout<< number1+number2;
}
else if(operation== "-"){

    cout<< number1-number2;
}
else if(operation== "*"){

    cout<< number1*number2;
}
else if(operation== "/"){

    cout<< number1/number2;
}
else {
    cout<<"not recognized operation";
}
return 0;
}