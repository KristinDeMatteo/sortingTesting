//
//  helper.cpp
//  matrix
//
//  Created by Amor Wang on 3/27/23.
//  Edited by Kristin DeMatteo 3/29/23
//

#include "helper.hpp"

using namespace std;

vector<int> stringToNumberArray(const string& input) {
    vector<int> myArray;
    stringstream iss(input);
    
    int number;
    while (iss >> number) {
        myArray.push_back(number);
    }
    
    return myArray;
}

void bubbleSort(int* arr, int size) {
    asm (
        "mov %1, %%ecx\n"          // size -> ecx
        "dec %%ecx\n"              // size -= 1

    "outer_loop:\n"
        "mov %%ecx, %%edi\n"       // i = size - 1
    "inner_loop:\n"
        "xor %%eax, %%eax\n"       // j = 0
        "mov %0, %%ebx\n"          // arr -> ebx
        "mov (%%ebx, %%eax, 4), %%esi\n"
        "mov 4(%%ebx, %%eax, 4), %%edx\n"
        "cmp %%esi, %%edx\n"
        "jle no_swap\n"

        // Swap elements
        "mov %%esi, (%%ebx, %%eax, 4)\n"
        "mov %%edx, 4(%%ebx, %%eax, 4)\n"

    "no_swap:\n"
        "inc %%eax\n"              // j++
        "cmp %%eax, %%edi\n"
        "jl inner_loop\n"          // if j < i, loop

        "dec %%edi\n"              // i--
        "jnz outer_loop\n"
    :
    : "r" (arr), "r" (size)
    : "eax", "ebx", "ecx", "edx", "edi", "esi"
    );
}
