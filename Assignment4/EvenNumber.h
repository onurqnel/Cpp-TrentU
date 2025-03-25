/*
* Onur Onel
* Student Number: 0865803
* Student Email: onuronel@trentu.ca
* Date: 2025-03-19
*
* This header file defines the EvenNumber class, which represents an even integer.
* The class provides functionality to retrieve the current even number,
* and finds the next and previous even numbers in sequence.
*/

#ifndef EVENNUMBER_H
#define EVENNUMBER_H

/*
 * A class that encapsulates an even integer and provides
 * methods to access its value, as well as retrieve the
 * next and previous even numbers.
 */
class EvenNumber
{
    int value; // Stores an even integer value

public:
    /*
     * Default Constructor Initializes the value to 0 by default.
     */
    EvenNumber();

    /*
     * Parameterized Constructor
     * Initializes the value to the specified even integer.
     */
    EvenNumber(int val);

    /*
     * Returns the current even number stored in the object.
     */
    int getValue() const;

    /*
     * Returns an EvenNumber object that represents the next
     * even number after the current one.
     */
    EvenNumber getNext() const;

    /*
     * Returns an EvenNumber object that represents the previous
     * even number before the current one.
     */
    EvenNumber getPrevious() const;
};

#endif // EVENNUMBER_H
