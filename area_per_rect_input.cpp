// Copyright (c) 2025 Jack Turcotte All rights reserved.
//
// Created by: Jack Turcotte
// Date: February 20, 2025
// This program calculates the area and perimeter of a rectangle
// based on user input

#include <cmath>  // import the BEST math library
#include <iostream>
#include <string>

int main() {
    float length;
    float width;
    std::cout << "Enter length of the rectangle (cm): " << std::endl;
    std::cin >> length;
    std::cout << "Enter width of the rectangle (cm): " << std::endl;
    std::cin >> width;
    float area = length * width;
    float perimeter = (length * 2) + width * 2;
    std::string prefix1 = "The area of your rectangle is ";
    std::string prefix2 = "The perimeter of your rectangle is ";
    std::cout << prefix1 << area << "cm^2" << std::endl;
    std::cout << prefix2 << perimeter << "cm" << std::endl;
}
