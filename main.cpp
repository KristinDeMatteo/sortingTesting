//
//  main.cpp
//  matrix
//
//  Created by Amor Wang on 3/27/23.
//

#include <iostream>
#include "helper.hpp"

int main(int arg, const char ** argv) {
    std::cout << "Starting program.\n";
    const char* argument = argv[1];
    char* result = static_cast<char*>(malloc(1000));
    char* result;
    bubbleSort(result, argument);


    return 0;
}
