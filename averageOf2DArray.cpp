// Copyright (c) 2021 Crestel Ong All rights reserved
//
// Created by: Crestel Ong
// Created on: October 2021
// This is the average of 2d array program in C++
// this program uses a 2d array

#include <iostream>
#include <random>
#include <cmath>


template <int rows, int cols>
int sumOfNumbers(int (&passedIn2DList)[rows][cols]) {
    // this function finds the averag of allelements in an 2D array

    int total = 0;
    int average = 0;
    int amountOfNumbers;

    for (size_t rowElement = 0; rowElement < rows; ++rowElement) {
        for (size_t columnElement = 0; columnElement < cols; ++columnElement)
            total += passedIn2DList[rowElement][columnElement];
    }
    amountOfNumbers = rows * cols;
    average = total / amountOfNumbers;

    return average;
}


int main() {
    // this function uses a 2D array

    int aSingleRandomNumber = 0;
    int sum = 0;
    const int rows = 3;
    const int columns = 1;
    int a2DArray[rows][columns];
    int amountOfNumbers;
    int averageOfNumb;

    // this gets the random numbers
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(1, 50);

    // input

    // So, ...
    //   In C++ you can't define array's size using variable.
    //   this is why you see const int rows = 2; above,
    //   so the size of the array can never change

    for (int rowElement = 0; rowElement < rows; rowElement++) {
        for ( int columnElement = 0; columnElement
        < columns; columnElement++ ) {
            aSingleRandomNumber = idist(rgen);
            a2DArray[rowElement][columnElement] = aSingleRandomNumber;
            std::cout << aSingleRandomNumber << " ";
        }
        std::cout << std::endl;
    }

    averageOfNumb = sumOfNumbers(a2DArray);
    std::cout << "\nThe average of all the numbers is: "
    << round(averageOfNumb) << std::endl;

    std::cout << "\nDone." << std::endl;
}
