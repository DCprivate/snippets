// point3.h: Separate compilation for the Point class
// Note: No `using namespace std;`

// Include Guards:
#ifndef POINT3_H
#define POINT3_H

#include <iostream>

class Point {
    double x;
    double y;
    Point diff(const Point& p2) const;

public:
    Point(double = 0, double = 0);

    // Accessors (declarations/prototypes only)
    double get_x() const;
    double get_y() const;
    double distance(const Point& p2) const;
    double slope(const Point& p2) const;
};

std::ostream& operator<<(std::ostream& os, const Point& p);
#endif

