#pragma once
#include <string>

class Point {
    public:
        Point(double x = 0, double y = 0);
        Point(const std::string s);
        double getX() const;
        double getY() const;
        void setX(double x);
        void setY(double y);
        void move(double dx, double dy);
        void print(bool endl=true) const;
        std::string toString() const;
        friend std::ostream& operator<<(std::ostream&, const Point&);

    private:
        double x,y;

};

std::istringstream& operator>>(std::istringstream & is, Point& p);
