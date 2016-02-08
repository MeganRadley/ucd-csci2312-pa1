//
// Created by dragon5hoarder on 2/7/2016.
//

#include "Point.h"

Point::Point(){
    x = 0;
    y = 0;
    z = 0;

}                    // default constructor
Point::Point(double newX, double newY, double newZ){
    x = newX;
    y = newY;
    z = newZ;
}    // two-argument constructor



Point::~Point(){

}

void Point::setX(double newX){
    x = newX;

}
void Point::setY(double newY){
    y = newY;
}
void Point:: setZ(double newZ){
    z = newZ;
}

double Point::getX() const{
    return x;
}
double Point:: getY() const{
    return y;
}
double Point:: getZ() const{
    return z;

}
