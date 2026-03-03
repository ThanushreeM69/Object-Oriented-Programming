#include<iostream>
using namespace std;

class Student{
	private:
		string name;
		string bloodGroup;
		char gender;
		int age;
		int dob;
		int rollNumber;
		long long  phonenumber;
		
		
		
		public:
			
			Student( string n="Unknown",string bg="Not set",char g = 'U' ,int a = 0,int r = '0',long long p = 0)
			{
			 name=n;
			bloodGroup = bg;
		    gender=g;
		    age=a;
		    rollNumber=r;
		    phonenumber=p;	
			}
			void readStudentInfo() {
				cout << "Enter student's name: ";
			    getline (cin ,name);
			    cout << "Enter bloodGroup: ";
			    cin >> bloodGroup;
			    cout << "Enter gender (M/F): ";
			    cin >> gender;
				cout << "Enter student's age: ";
				cin >> age;
				cout << "Enter student's rollNumber: ";
				cin >> rollNumber;
				cout << "Enter student's phonenumber: ";
				cin >> phonenumber;
			}
			void printStudentInfo()
			{
				cout<<"___________________________________________"<<endl;
	            cout<<"              Student Profile               "<<endl;
	            cout<<"____________________________________________"<<endl;
				
				
				
			cout << "Student's Name: " << name << endl;
			cout << "bloodGroup: " << bloodGroup << endl;
			cout << "Gender: ";
			if (gender=='M'|| gender == 'm')
			{
				cout << "Male" << endl;
			} else if (gender =='F' || gender =='f')
			{
				cout << "Female" << endl;
			}else {
				cout << "Others/Invalid" << endl;
			}
			cout << "Student's Age: "	<< age << endl;
			cout << "Student's Roll Number: " << rollNumber << endl;
			cout << "Student's phonenumber: " << phonenumber << endl;
			}
			
			
};

int main()
{
	char choice;
	do{
	
	Student s1;
	s1.readStudentInfo();
	s1.printStudentInfo();
	
	cout << "\n DO YOU WANT TO TAKE ONE MORE STUDENT ENTRY? (Y/N): ";
	cin >> choice;
	
} while (choice =='y' || choice == 'Y');
    cout << "\nExiting....Thank you for using the Student System!!"	 << endl;
	return 0;
}
