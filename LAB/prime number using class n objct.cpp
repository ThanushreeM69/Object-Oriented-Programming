#include<iostream>
using namespace std;

class Primechecker
{
	private:
		int number;
		public:
			void setNumber(int num){
				number = num;
			}
			bool isPrime()
			{
				return false;
			}
			for(int i = 2; i * i <= number; i++)
			{
				if (number % i ==0){
					return false;
				}
			}
			return true;
		}
};
int main(){
	PrimeChecker checker;
	int num;
	cout << "Enter a number: ";
	cin >> num;
	checker.setNumber(num);
	if(checker.isPrime()) {
		cout << num << "is a prime number. " << endl;
		}
		else
		{
			cout << num << "is not aprime number. " << endl;
			}
			return 0;
	
}

	
	
