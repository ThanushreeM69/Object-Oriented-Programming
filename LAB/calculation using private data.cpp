#include<iostream>
using namespace std;

class Add{
	private:
		int num1, num2;
		public:
			void setnumbers(int a, int b)
			{
				num1 = a;
				num2 = b;
			}
			int getSum()
			{
				return num1 + num2;
				
			}
};
 int main(){
 
   Add Addition;
   int a,b;
   cout << "Enter two integer: ";
   cin >> a >> b;
   Addition.setNumbers(a, b);
   cout << "the sum of thr two integer is: " << addition.getSum() << endl;
   return 0;
}
   
