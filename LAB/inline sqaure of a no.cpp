#include<iostream>
using namespace std ;

inline  int square(int a)
{
	return a * a;
}

int main()
{
	int num;
	cout << "Enter a number to find its square: ";
	cin >> num;
	cout << "Square of " << num << "is: "<< square(num) << endl;
	return 0;
}
