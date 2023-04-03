//
//  helper.hpp
//  matrix
//
//  Created by Amor Wang on 3/27/23.
//  Edited by Kristin DeMatteo 3/29/23
//


#ifndef helper_hpp
#define helper_hpp

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <cstring>

using namespace std;

vector<int> stringToNumberArray(const string& input);
void bubbleSort(int* arr, int size);
// extern "C" void getInput(char* buffer, int inputSize);
// extern "C" void bubbleSort(int* arr, int size);
// extern "C" void asmBubbleSort(int*, int); // Declare the external bubble sort function written in assembly language

#endif /* helper_hpp */
