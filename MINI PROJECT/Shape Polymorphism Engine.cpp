#include <iostream>
#include <string>

using namespace std;


class Shape {
protected:
    string shapeName;

public:
    Shape(string name) : shapeName(name) {}

    
    virtual double calculateArea() = 0;
    virtual double calculatePerimeter() = 0;

    
    virtual ~Shape() {}

    void displayType() {
        cout << "\n--- Shape: " << shapeName << " ---" << endl;
    }
};
class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : Shape("Circle"), radius(r) {}

    double calculateArea() {
        return 3.14159 * radius * radius;
    }

    double calculatePerimeter() {
        return 2 * 3.14159 * radius;
    }
};


class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) : Shape("Rectangle"), length(l), width(w) {}

    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }
};

int main() {
    
    Shape* ptr = NULL; 
    int choice;

    cout << "--- Shape Polymorphism Engine ---" << endl;
    cout << "1. Circle\n2. Rectangle\nEnter Choice: ";
    
    
    if(!(cin >> choice)) {
        cout << "Invalid input type." << endl;
        return 1;
    }

    if (choice == 1) {
        double r;
        cout << "Enter Radius: ";
        cin >> r;
        ptr = new Circle(r);
    } 
    else if (choice == 2) {
        double l, w;
        cout << "Enter Length and Width: ";
        cin >> l >> w;
        ptr = new Rectangle(l, w);
    }

    if (ptr != NULL) {
        ptr->displayType();
        cout << "Area: " << ptr->calculateArea() << endl;
        cout << "Perimeter: " << ptr->calculatePerimeter() << endl;

        delete ptr; 
    } else {
        cout << "Error: No shape created." << endl;
    }

    return 0;
}
