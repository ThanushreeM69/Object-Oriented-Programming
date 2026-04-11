#include <iostream>
using namespace std;

inline int multiply(int a,int b)
{
	return a * b;
}

inline int cube(int z)
{
	return z * z * z;
}

int main()
{
	int num1,num2,num3;
	cout<<"Enter two numbers for multiplication: ";
	cin >>num1 >> num2;
	cout<< "Multiplication of is: " <<multiply(num1, num2) <<endl;
	
	cout <<"Enter a number to find its cube: ";
	cin >> num3;
	cout <<" cube of" << num3 << "is: " << cube(num3) <<endl;
	
	return 0;
}
