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

extern "C" void getInput(char* buffer, int inputSize);
extern "C" void bubbleSort(char* output, const char* input);
extern "C" void asmBubbleSort(int*, int); // Declare the external bubble sort function written in assembly language

#endif /* helper_hpp */
