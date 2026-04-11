#include <iostream>
#include <string>
#include <limits> 

using namespace std;

class Employee {
protected:
    string name;
    int empID;
    double baseSalary;

public:
    Employee(string n, int ID, double salary)
        : name(n), empID(ID), baseSalary(salary) {}

    virtual double calculateSalary() {
        return baseSalary;
    }

    
    friend void displayEmployeeInfo(Employee& emp) {
        cout << "\n--- Employee Details ---" << endl;
        cout << "Name:        " << emp.name << endl;
        cout << "ID:          " << emp.empID << endl;
        cout << "Base Salary: $" << emp.baseSalary << endl;
    }
};

class Manager : public Employee {
private:
    double bonus;

public:
    Manager(string n, int ID, double salary, double b)
        : Employee(n, ID, salary), bonus(b) {}

    double calculateSalary() override {
        return baseSalary + bonus;
    }
};

class Developer : public Employee {
private:
    double overtimePay;

public:
    Developer(string n, int ID, double salary, double op)
        : Employee(n, ID, salary), overtimePay(op) {}

    double calculateSalary() override {
        return baseSalary + overtimePay;
    }
};

int main() {
    string name;
    int id;
    double salary, extra;

    
    cout << "ENTER MANAGER DETAILS" << endl;
    cout << "Name: ";
    getline(cin, name);
    cout << "ID: ";
    cin >> id;
    cout << "Base Salary: ";
    cin >> salary;
    cout << "Annual Bonus: ";
    cin >> extra;
    
    Manager mgr(name, id, salary, extra);
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear buffer for next string input

    cout << "\n----------------------------\n";

  
    cout << "ENTER DEVELOPER DETAILS" << endl;
    cout << "Name: ";
    getline(cin, name);
    cout << "ID: ";
    cin >> id;
    cout << "Base Salary: ";
    cin >> salary;
    cout << "Overtime Pay: ";
    cin >> extra;

    Developer dev(name, id, salary, extra);

    
    cout << "\n============================";
    cout << "\nFINAL PAYROLL SUMMARY";
    cout << "\n============================";

    displayEmployeeInfo(mgr);
    cout << "Total Pay:   $" << mgr.calculateSalary() << endl;

    displayEmployeeInfo(dev);
    cout << "Total Pay:   $" << dev.calculateSalary() << endl;

    return 0;
}
