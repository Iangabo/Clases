#ifndef POINTARRAY_H
#define POINTARRAY_H

#include "Point.h"

class PointArray
{
    public:
        PointArray();
        PointArray(const Point pts[], const int size);
        PointArray(PointArray &o);
        ~PointArray();

        void print();
        int getSize();
        void push_back(Point &p);
        void insert(const int,const Point &q);
        void remove(int b);

    private:
        int size;
        Point *points;
        void resize(int);
};

#endif // POINTARRAY_H
