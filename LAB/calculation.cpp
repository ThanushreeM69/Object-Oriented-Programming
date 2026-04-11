//
#include<iostream>
using namespace std;

int add(int a, int b)
{
	return a+b;
}

int subtract(int a,int b)
{
	return a-b;
}

int multiply(int a, int b)
{
	return a*b;
}

float division(int a,int b)
{
	if(b!=0){
		return (float)a/b;
	}
	else{
		cout<<"Error! division by zero.";
		return 0;
	}
}

int Modulus(int a, int b)
{
	return a%b;
}

int main()
{
	int num1, num2;
	char operation;
	cout<<"Enter two numbers:";
	cin>> num1 >> num2;
	
	cout<<"Enter an operator(+,-,*,/,%):";
	cin>>operation;
	
	switch(operation)
	{
		case'+':
		cout <<"Result: "<< add(num1, num2);
		break;
		case'-':
		cout <<"Result: "<< subtract(num1, num2);
		break;
		case'*':
		cout <<"Result: "<< multiply(num1, num2);
		break;
		case'/':
		cout <<"Result: "<< division(num1, num2);
		break;
		case'%':
		cout <<"Result: "<< Modulus(num1, num2);
		break;
		default:
			cout<<"ERROR! INVALID OPERATOR.";
			break;
	}
	return 0;
}


