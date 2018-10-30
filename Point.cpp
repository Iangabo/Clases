#include <iostream>
#include "Point.h"

Point::Point(int xh, int yh){
    x = xh;
    y = yh;
}

Point::Point(){
    x = 0;
    y = 0;
}

Point::Point(Point &o){
    x = o.x;
    y = o.y;
}

void Point::print(){
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}

void Point::offset(int nx, int ny){
    x += nx;
    y += ny;
}

double Point::getX(){
    return x;
}

double Point::getY(){
    return y;
}

void Point::setX(double x){
    this->x = x;
}

void Point::setY(double y){
    this->y = y;
}
