#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

struct Point
{
	double x,y;
	
	Point operator+(const Point& other) const
	{
		return{ this->x + other.x, this->y + other.y};
	}
};

class Line
{
private:
Point p1,p2;

public:
Line(Point start, Point end) : p1(start), p2(end){}

double getLength() const
{
	return sqrt(pow(p2.x-p1.x, 2)+ pow(p2.y - p1.y, 2));
	}	
	
	friend ostream& operator<<(ostream& os,const Line& l)
	{
		os << "(" << l.p1.x <<"," << l.p1.y << ") to (" << l.p2.x << ", " << l.p2.y << ")";
		
		return os;
	}
};

int main()
{
	Point p1, p2;
	
	
	cout << "Enter coordinates for point 1(x y): ";
	cin >> p1.x >> p1.y;
	cout << "Enter coordinates for point 2(x y): ";
	cin >> p2.x >> p2.y;
	
	Line myLine(p1, p2);
	
	cout <<  "======================================" << endl;
	cout <<   "              GEOMETRIC PRO           " << endl;
	cout <<  "=======================================" << endl;
	 	
	cout << left << setw(15) << "Geometry" <<  setw(15) << "Details" << endl;
	cout << "------------------------------------------" << endl;
	cout << left << setw(15) << "Line Path" << myLine << endl;
	cout << left << setw(15) << "Length" << myLine.getLength() << endl;
	
	return 0;
}
