#ifndef POINT_H
#define POINT_H

class Point
{
    public:
        Point();
        Point(int, int);
        Point(Point &o);

        void offset(int, int);
        void print();
        double getX();
        double getY();
        void setX(double x);
        void setY(double y);

    private:
        double x, y;
};

#endif // POINT_H
