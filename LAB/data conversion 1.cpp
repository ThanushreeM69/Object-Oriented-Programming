#include<iostream>
using namespace std;
class abc
{
	int a;
	public:
		abc(int x)
		{
			a=x;
		}
		void getdata()
		{
			cout << "Value of a:" <<a<<endl;
		}
		//conversion operator (class to basic type)
		operator int ()
		{
			return a;
		}
};
int main()
{
	abc obj1(10);
	obj1.getdata();
	
	int x;
	x=obj1;  // class type converted to int 
	cout << "Class to basic: "<<x<<endl;
	return 0;
	
}
