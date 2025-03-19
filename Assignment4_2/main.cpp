#include <iostream>
#include "Rectangle2D.h"
/*
 * Onur Onel
 * Student Number: 0865803
 * Student Email: onuronel@trentu.ca
 * Date: 2025-03-19
 *
 * Description:
 * This program defines a Rectangle2D class and provides functionality to calculate the bounding rectangle
 * for a given set of points. The program includes functions to determine the minimum and maximum x and y
 * coordinates, and then uses these values to construct a rectangle that encompasses all points.
 * The main function prompts the user to input five points, computes the bounding rectangle, and outputs
 * its center, width, and height.
 */
using namespace std;

// Default constructor initializes the rectangle at (0,0) with width and height of 1
Rectangle2D::Rectangle2D()
{
 x = y = 0;
 width = height = 1;
}

// Parameterized constructor to initialize the rectangle with given values
Rectangle2D::Rectangle2D(const double x, const double y, const double width, const double height)
{
 this->x = x;
 this->y = y;
 this->width = width;
 this->height = height;
}

// Getter for x-coordinate
double Rectangle2D::getX() const
{
 return x;
}

// Getter for y-coordinate
double Rectangle2D::getY() const
{
 return y;
}

// Getter for width
double Rectangle2D::getWidth() const
{
 return width;
}

// Getter for height
double Rectangle2D::getHeight() const
{
 return height;
}

const int SIZE = 2; // Size for 2D point array

// Function to find the minimum x-coordinate from a list of points
double minX(const double points[][SIZE], const int numberOfPoints)
{
 double min_x = points[0][0];
 for (int i = 1; i < numberOfPoints; ++i)
 {
  if (points[i][0] < min_x)
   min_x = points[i][0];
 }
 return min_x;
}

// Function to find the maximum x-coordinate from a list of points
double maxX(const double points[][SIZE], const int numberOfPoints)
{
 double max_x = points[0][0];
 for (int i = 1; i < numberOfPoints; ++i)
 {
  if (points[i][0] > max_x)
   max_x = points[i][0];
 }
 return max_x;
}

// Function to find the minimum y-coordinate from a list of points
double minY(const double points[][SIZE], const int numberOfPoints)
{
 double min_y = points[0][1];
 for (int i = 1; i < numberOfPoints; ++i)
 {
  if (points[i][1] < min_y)
   min_y = points[i][1];
 }
 return min_y;
}

// Function to find the maximum y-coordinate from a list of points
double maxY(const double points[][SIZE], const int numberOfPoints)
{
 double max_y = points[0][1];
 for (int i = 1; i < numberOfPoints; ++i)
 {
  if (points[i][1] > max_y)
   max_y = points[i][1];
 }
 return max_y;
}

// Function that returns a pointer to rectangle
Rectangle2D* getRectanglePointer(const double points[][SIZE], const int numberOfPoints)
{
 double min_x = minX(points, numberOfPoints);
 double min_y = minY(points, numberOfPoints);
 double max_x = maxX(points, numberOfPoints);
 double max_y = maxY(points, numberOfPoints);

 double width = max_x - min_x;
 double height = max_y - min_y;
 double center_x = min_x + width / 2.0;
 double center_y = min_y + height / 2.0;

 return new Rectangle2D(center_x, center_y, width, height);
}

// Function that returns rectangle by value
Rectangle2D getRectangle(const double points[][SIZE], const int numberOfPoints)
{
 double min_x = minX(points, numberOfPoints);
 double min_y = minY(points, numberOfPoints);
 double max_x = maxX(points, numberOfPoints);
 double max_y = maxY(points, numberOfPoints);

 double width = max_x - min_x;
 double height = max_y - min_y;
 double center_x = min_x + width / 2.0;
 double center_y = min_y + height / 2.0;

 return Rectangle2D(center_x, center_y, width, height);
}


int main()
{
 double points[5][2];
 for (int i = 0; i < 5; ++i)
 {
  cout << "Enter the coordinates for point " << i + 1 << " (x y): " << endl;
  cin >> points[i][0] >> points[i][1];
 }
 Rectangle2D boundingRectangle = getRectangle(points, 5);
 cout << "The bounding rectangle's center (" << boundingRectangle.getX() << ", " <<
  boundingRectangle.getY() << "), width " << boundingRectangle.getWidth() <<
  ", height " << boundingRectangle.getHeight() << endl;

 Rectangle2D* boundingRectangleP = getRectanglePointer(points, 5);
 cout << "(Using Pointer) The bounding rectangle's center (" << boundingRectangleP->getX() << ", " <<
  boundingRectangleP->getY() << "), width " << boundingRectangleP->getWidth() <<
  ", height " << boundingRectangleP->getHeight() << endl;
 return 0;
}
