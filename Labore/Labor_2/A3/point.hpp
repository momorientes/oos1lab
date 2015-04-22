#pragma once

class Point {
    public:
        Point(double x = 0, double y = 0);
        double getX();
        double getY();
        void setX(double x);
        void setY(double y);
        void move(double dx, double dy);
        void print(bool endl=true);
    private:
        double x,y;

};
