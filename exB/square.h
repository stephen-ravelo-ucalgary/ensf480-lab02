/*
 * File Name: square.h
 * Assignment: Lab 1 Exercise B
 * Lab Section: B02
 * Completed by: Stephen Ravelo, Aaron Lauang
 * Submission Date: September 20, 2025
 */

#ifndef SQUARE_H
#define SQUARE_H

#include "shape.h"

class Square : public Shape
{
protected:
    Square(double x, double y, double side_a, char &shapeName);

    double get_side_a() const;
    void set_side_a(double side_a);

    double area() const;
    double perimeter() const;
    void display() const;

private:
    double side_aM;
};

#endif