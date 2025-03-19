#ifndef RECTANGLE2D_H
#define RECTANGLE2D_H
/*
 * Onur Onel
 * Student Number: 0865803
 * Student Email: onuronel@trentu.ca
 * Date: 2025-03-19
 *
 * Description:
 * This header file declares a Rectangle2D class that models a rectangle in a 2D plane.
 * It defines the rectangle's position (x, y) and its dimensions, width and height.
 * The class includes both a default constructor and a parameterized constructor for initialization,
 * along with getter functions to access the private member variables.
 */
class Rectangle2D
{
    // Private member variables storing the rectangle's properties.
    double x; // The x-coordinate of the rectangle's center.
    double y; // The y-coordinate of the rectangle's center.
    double width; // The width of the rectangle.
    double height; // The height of the rectangle.

public:
    // Default constructor.
    Rectangle2D();

    // Initializes the rectangle with specified x, y, width, and height.
    Rectangle2D(double x, double y, double width, double height);

    // Getter function for the x-coordinate.
    double getX() const;

    // Getter function for the y-coordinate.
    double getY() const;

    // Getter function for the width.
    double getWidth() const;

    // Getter function for the height.
    double getHeight() const;
};

#endif // RECTANGLE2D_H