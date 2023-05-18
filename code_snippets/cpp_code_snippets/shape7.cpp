// shape7.cpp: Illustrates initialization of the base class

#include <cmath>
#include <iostream>
#include <memory>
#include <sstream>
#include <vector>
using namespace std;

const double PI = 3.141592653;

class Shape {
    inline static int next_id = 1;
    double x_coord, y_coord;

protected:
    const int id;

public:
    Shape(double x, double y) : x_coord(x), y_coord(y), id(next_id++) {}
    virtual ~Shape() {cout << "~Shape()\n";}     // or `virtual ~Shape() = default;`
    virtual double area() const = 0;
    virtual string to_string() const  = 0;

    double distance (const Shape& s)  const {
	    double x_dist = x_coord - s.x_coord;
	    double y_dist = y_coord - s.y_coord;
	    return sqrt(x_dist * x_dist + y_dist * y_dist);
    }
    void move (double x, double y) {	// NOT constant
	    x_coord = x;
	    y_coord = y;
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(double x, double y, double rad) : Shape (x, y) {
        radius = rad;
    }
    virtual ~Circle(){cout << "~Circle()\n";}
    double area() const override {
        return PI*radius*radius;
    }
    string to_string() const override {
        ostringstream oss;
        oss << "Circle(id=" << id << ", radius=" << radius << ')';
        return oss.str();
    }
};

class Rectangle : public Shape {
    double length;
    double width;
public:
    Rectangle(double x, double y, int len, int wid) : Shape(x, y) {
        length = len;
        width = wid;
    }
    virtual ~Rectangle(){cout << "~Rectangle()\n";}
    double area() const override {
        return length*width;
    }
    string to_string() const override {
        ostringstream oss;
        oss << "Rectangle(id=" << id << ", length=" 
            << length << ", width=" << width << ')';
        return oss.str();
    }
};

class Triangle : public Shape {
    double side_1;
    double side_2;
    double side_3;
public:
    Triangle(double x, double y, double s1, double s2, double s3) : Shape(x, y) {
        side_1 = s1;
        side_2 = s2;
        side_3 = s3;
    }
    virtual ~Triangle(){cout << "~Triangle()\n";}
    double area() const override {
        double s = (side_1 + side_2 + side_3) / 2.0;
        return sqrt(s*(s-side_1)*(s-side_2)*(s-side_3));
    }
    string to_string() const override {
        ostringstream oss;
        oss << "Triangle(id=" << id << ", s1=" << side_1 
            << ", s2=" << side_2 << ", s3=" << side_3 << ')';
        return oss.str();
    }
};

int main() {
	Circle c1 (5, 3, 4.0);
	Circle c2 (12, -1, 5.0);

	cout << "distance from c1 to c2: " << c1.distance (c2) << endl;
	cout << "distance from c2 to c1: " << c2.distance (c1) << endl;
	cout << "distance from c1 to itself: " << c1.distance (c1) << endl;

}

/* Output
distance from c1 to c2: 8.06226
distance from c2 to c1: 8.06226
distance from c1 to itself: 0
~Circle()
~Shape()
~Circle()
~Shape()
*/
