/*
 * File Name: shape.h
 * Assignment: Lab 1 Exercise B
 * Lab Section: B02
 * Completed by: Stephen Ravelo, Aaron Lauang
 * Submission Date: September 20, 2025
 */

#ifndef SHAPE_H
#define SHAPE_H

#include "point.h"

class Shape
{
protected:
    Shape(double x, double y, char *shapeName);
    ~Shape();

    const Point &getOrigin() const;
    char *getName();

    void display() const;
    double distance(Point &other);
    static double distance(Point &p1, Point &p2);
    void move(double dx, double dy);

private:
    Point originM;
    char *shapeNameM;
};

#endif