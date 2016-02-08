//
// Created by dragon5hoarder on 2/7/2016.
//

#include <tgmath.h>
#include <stdlib.h>
#include <cmath>

#include "Point.h"

double computeArea(const Point &a, const Point &b, const Point &c){
    double DistanceX1 = (a.getX() - b.getX());
    double DistanceX2 = (b.getX() - c.getX());
    double DistanceX3 = (c.getX() - a.getX());
    double DistanceY1 = (a.getY() - b.getY());
    double DistanceY2 = (b.getY() - c.getY());
    double DistanceY3 = (c.getY() - a.getY());
    double DistanceZ1 = (a.getZ() - b.getZ());
    double DistanceZ2 = (b.getZ() - c.getZ());
    double DistanceZ3 = (c.getZ() - a.getZ());
    double length1;
    double length2;
    double length3;


    //calc each dist
    length1 = sqrt((DistanceX1 * DistanceX1) + (DistanceY1 * DistanceY1) +(DistanceZ1 * DistanceZ1));
    length2 = sqrt((DistanceX2 * DistanceX2) + (DistanceY2 * DistanceY2) +(DistanceZ2 * DistanceZ2));
    length3 = sqrt((DistanceX3 * DistanceX3) + (DistanceY3 * DistanceY3) +(DistanceZ3 * DistanceZ3));

    double A = sqrt ((length1 + length2 + length3) * (-length1 + length2 + length3) * (length1 - length2 + length3) * (length1 + length2 - length3))/4;

    return A;

//  A=\frac{1}{4}\sqrt{(a+b+c)(-a+b+c)(a-b+c)(a+b-c)}
//    Point s = (a + b + c)/2;
//    Point A= sqrt(s(s-a)(s-b)(s-c));

    //A = \sqrt{s(s-a)(s-b)(s-c)},

    // try and figure out the lenghts of triable
    //use to ceate formula
    //pythag form


    //abs of x 1, x2 sqrd... y1 y2 sqrd...
    //add together sq rt
    // = length
    //do the heron formula

    //return pythag therom


}