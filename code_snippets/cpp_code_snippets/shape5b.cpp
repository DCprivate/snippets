// shape5b.cpp: Illustrates the need for virtual destructors

#include <cmath>
#include <iostream>
#include <memory>
#include <sstream>
#include <vector>
using namespace std;

const double PI = 3.141592653;

class Shape {
    inline static int next_id = 1;

protected:
    const int id;

public:
    Shape() : id(next_id++) {}
    virtual double area() const {
        return 0.0;
    }
    virtual string to_string() const {
        ostringstream oss;
        oss << "Shape(id=" << id << ')';
        return oss.str();
    }
    virtual ~Shape() {      // Try removing virtual and observe the difference
        cout << "~Shape\n";
    }
};

class Circle : public Shape {
    double radius;
public:
    Circle(int rad) {
        radius = rad;
    }
    double area() const override {
        return PI*radius*radius;
    }
    string to_string() const override {
        ostringstream oss;
        oss << "Circle(id=" << id << ", radius=" << radius << ')';
        return oss.str();
    }
    ~Circle() {
        cout << "~Circle\n";
    }
};

class Rectangle : public Shape {
    double length;
    double width;
public:
    Rectangle(int len, int wid) {
        length = len;
        width = wid;
    }
    double area() const override {
        return length*width;
    }
    string to_string() const override {
        ostringstream oss;
        oss << "Rectangle(id=" << id << ", length=" 
            << length << ", width=" << width << ')';
        return oss.str();
    }
    ~Rectangle() {
        cout << "~Rectangle\n";
    }
};

class Triangle : public Shape {
    double side_1;
    double side_2;
    double side_3;
public:
    Triangle(double s1, double s2, double s3) {
        side_1 = s1;
        side_2 = s2;
        side_3 = s3;
    }
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
    ~Triangle() {
        cout << "~Triangle\n";
    }
};


int main() {
    vector<unique_ptr<Shape>> shapes;
    shapes.emplace_back(new Circle(2));
    shapes.emplace_back(new Rectangle(2,4));
    shapes.emplace_back(new Triangle(3,4,5));
    for (const auto& ptr: shapes)
        cout << ptr->to_string() << endl;
}

