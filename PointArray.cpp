#include <iostream>
#include "PointArray.h"
using namespace std;

PointArray::PointArray()
{
    this->size = 0;
    this->points = new Point[size];
}

PointArray::PointArray(const Point pts[], const int size) {
    this->size = size;
    this->points = new Point[size];
    for(int i = 0; i < size; i++)
        points[i] = pts[i];
}

PointArray::PointArray(PointArray &o){
    this->size = o.size;
    this->points = new Point[size];
    for(int i = 0; i < size; i++)
        points[i] = o.points[i];
}

int PointArray::getSize(){
    return size;
}

