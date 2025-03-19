#ifndef RECTANGLE2D_H
#define RECTANGLE2D_H

class Rectangle2D
{
 double x, y;
 double width, height;

public:
 Rectangle2D();
 Rectangle2D(double x, double y, double width, double height);
 double getX() const;
 double getY() const;
 double getWidth() const;
 double getHeight() const;

};
#endif




Rectangle2D::Rectangle2D()
{
 x = y = 0;
 width = height = 1;
}


Rectangle2D::Rectangle2D(double x, double y, double width, double height)
{
 this->x = x;
 this->y = y;
 this->width = width;
 this->height = height;
}

double Rectangle2D::getX() const
{
 return x;
}

double Rectangle2D::getY() const
{
 return y;
}

double Rectangle2D::getWidth() const
{
 return width;
}

double Rectangle2D::getHeight() const
{
 return height;
}

// MyRectangle2D getRectangle(const double points[][SIZE], int numberOfPoints);
const int SIZE = 2;

double minX(const double points[][SIZE], int numberOfPoints)
{
 // Return the code to return the minimum y-coordinate in points
}

double maxX(const double points[][SIZE], int numberOfPoints)
{
 // Return the code to return the maximum x-coordinate in points
}

double minY(const double points[][SIZE], int numberOfPoints)
{
 // Return the code to return the minimum y-coordinate in points
}

double maxY(const double points[][SIZE], int numberOfPoints)
{
 // Return the code to return the maximum y-coordinate in points
}

Rectangle2D* getRectanglePointer(const double points[][SIZE], int numberOfPoints)
{
 // Write your code to return a point to a Rectangle2D object that is the minimum bounding rectangle for the points
 // Hint: invoke minX, minY, maxX, and maxY to find the minimum x, y and maximum x, y for the bounding rectangle.
}

Rectangle2D getRectangle(const double points[][SIZE], int numberOfPoints)
{
 // Write your code to return a Rectangle2D object that is the minimum bounding rectangle for the points
 // Hint: invoke minX, minY, maxX, and maxY to find the minimum x, y and maximum x, y for the bounding rectangle
}

#include <iostream>
using namespace std;

int main()
{
 double points[5][2];
 cout << "Enter five points: ";
 // Write your code to read five points

 Rectangle2D boundingRectangle = getRectangle(points, 5);
 cout << "The bounding rectangle's center (" << boundingRectangle.getX() << ", " <<
  boundingRectangle.getY() << "), width " << boundingRectangle.getWidth() <<
  ", height " << boundingRectangle.getHeight() << endl;
 Rectangle2D* boundingRectangleP = getRectanglePointer(points, 5);
 cout << "The bounding rectangle's center (" << boundingRectangleP->getX() << ", " <<
  boundingRectangleP->getY() << "), width " << boundingRectangleP->getWidth() <<
  ", height " << boundingRectangleP->getHeight() << endl;
 return 0;
}
