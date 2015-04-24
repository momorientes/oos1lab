#pragma once
#include <string>

class Point {
    public:
        Point(double x = 0, double y = 0);
        double getX();
        double getY();
        void setX(double x);
        void setY(double y);
        void move(double dx, double dy);
        void print(bool endl=true);
        std::string toString();
    private:
        double x,y;

};
