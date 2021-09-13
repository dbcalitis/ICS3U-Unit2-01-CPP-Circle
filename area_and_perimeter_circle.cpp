// Copyright (c) 2021 D.B. Calitis All rights reserved
//
// Created by: Daria Bernice Calitis
// Created on: Sept 2021
// This program calculates the area and perimeter of a circle
//    with a radius of 15mm

#include <iostream>
#include <cmath>

int main() {
    // this function calculates the area and perimeter of a circle

    std::cout << "If a circle has a radius of 15mm: \n" << std::endl;
    std::cout << "The area will be " << std::flush;
    std::cout << (M_PI * pow(15, 2)) << " mm²" << std::endl;
    std::cout << "The perimeter will be " << std::flush;
    std::cout << (2 * M_PI * 15) << " mm" << std::endl;
    std::cout << "\nDone" << std::endl;
}
