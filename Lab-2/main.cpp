#include <iostream>

using namespace std;

int addTwo(int a, int b) {
    return a + b;

}
double addTwo(double a, double b) {
    return a + b;
}
int addThree(int a, int b, int c) {
    return a + b + c;
}
int AddThreeOrLess(int a = 0, int b = 0, int c = 0) {
    return a + b + c;
}

void finalMessage();

int main() {
    int a = 10;
    int b = 5;
    int c = addTwo(a,b);
    cout << "The value of c is: " << c << endl;
    // *** add a new variable called d and use the addThree function to set d=a+b+c
    int d = addThree(a,b,c);
    // *** print out the value of your new variable d
    cout << "The value of d is: " << d << endl;
    // *** Now set d=a+b but use the AddThreeOrLess function. Why does this work?
    d = AddThreeOrLess(a,b);
    // *** print out the value of your newly calculated d
    cout << "The value of d is: " << d << endl;

    double num1 = 2.3;
    double num2 = 8.8;
    double num3 = 0;
    // *** set num3 to num1+num2 using the addTwo function. Why does this work?
    num3 = addTwo(num1, num2);
    //*** output num3
    cout << "The value of num3 is: " << num3 << endl;

    // Why does this not work? Figure out how to solve this without moving the finalMessage function
    finalMessage();


} // end of main
void finalMessage() {
    std::cout << "\nThank you for using this program, hope you learned lots!";
}