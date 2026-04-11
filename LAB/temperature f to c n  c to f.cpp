//Convert tempertaure into fahrenheit to celsius n celsius to fahrenheit
#include <iostream>
using namespace std;
float ftoc(float f)
{
	return (f - 32)*5.0/9.0;
}
float ctof(float c)
{
	return (c *9.0/5.0)+32;
}
int main()
{
	float f, c;
	cout<<"Enter the temperature in fahrenheit: ";
	cin>>f;
	cout<<"Temperature in centigrade: "<< ftoc(f) << endl;
	
	cout<<"Enter the temperature in centigrade: ";
	cin>>c;
	cout<<"Temperature in fahrenheit: "<< ctof(c) << endl;
	return 0;
	
}
	

