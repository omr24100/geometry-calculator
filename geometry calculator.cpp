// geometry calculator.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
File name: Geography Calculator
Github URL:
Date: 2/27/25
Programmer: Olivia Ruiz
Requiremnts: write a program that displays the following menu:
1. Calculate the area of a circle, 2. Calculate the Area of a rectangle, 3. Calculate the Area of a triangle, 
4.Quit. Enter your choice(1-4): If the user enters 1 the program should ask for the radius of the circle then display its area. 
Use area=pier^2. Use 3.14159 for pie and the radius of the circle for r. If the user enters 2, the program should ask for the length and width pf the rectangle,
then display the rectangles area use area=length*width. If the user enters 3, the program should ask for the length of the triangles base and its height, then display its area. 
Use the follow area=base*height*.5. If the user enter 4 the program should end
*/

#include <iostream>
using namespace std;

const double PI = 3.14159;

void calculateCircleArea() {
    double radius;
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    double area = PI * radius * radius;
    cout << "The area of the circle is: " << area << endl;
}

void calculateRectangleArea() {
    double length, width;
    cout << "Enter the length of the rectangle: ";
    cin >> length;
    cout << "Enter the width of the rectangle: ";
    cin >> width;
    double area = length * width;
    cout << "The area of the rectangle is: " << area << endl;
}

void calculateTriangleArea() {
    double base, height;
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    double area = base * height * 0.5;
    cout << "The area of the triangle is: " << area << endl;
}

int main() {
    int choice;

    do {
       
        cout << "----------------------------\n";
        cout << "1. Calculate the area of a circle\n";
        cout << "2. Calculate the area of a rectangle\n";
        cout << "3. Calculate the area of a triangle\n";
        cout << "4. Quit\n";
        cout << "----------------------------\n";
        cout << "Enter your choice (1-4): ";
        cin >> choice;

        
        switch (choice) {
        case 1:
            calculateCircleArea();
            break;
        case 2:
            calculateRectangleArea();
            break;
        case 3:
            calculateTriangleArea();
            break;
        case 4:
            cout << "Exiting the program...\n";
            break;
        default:
            cout << "Invalid choice! Please enter a number between 1 and 4.\n";
            break;
        }
    } while (choice != 4); 

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
