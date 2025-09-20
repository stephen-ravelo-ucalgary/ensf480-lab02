/*
 * File Name: point.h
 * Assignment: Lab 1 Exercise B
 * Lab Section: B02
 * Completed by: Stephen Ravelo, Aaron Lauang
 * Submission Date: September 20, 2025
 */

#ifndef POINT_H
#define POINT_H

class Point
{
private:
    Point(double x, double y);

    double getX() const;
    void setX(double x);
    double getY() const;
    void setY(double y);
    int getID() const;

    void display() const;
    static int counter();
    double distance (Point &other);
    static double distance(Point &p1,Point &p2);

private:
    double x;
    double y;
    const int ID;
    static int count;
};

#endif