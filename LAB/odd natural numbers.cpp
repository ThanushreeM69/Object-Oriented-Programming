#include<iostream>
using namespace std;

int main(){

int n,sum =0;
cout <<"Enter the number of terms: ";
cin >> n;

cout << "First " << n << " ODD Natural Numbers Are: ";
for(int i=0; i < n; i++)
{
	int oddNum=2 * i + 1;
	cout << oddNum << " ";4
	sum += oddNum;
	
}

cout << "\nSum of these ODD numbers are: " << sum << endl;
return 0;
}
