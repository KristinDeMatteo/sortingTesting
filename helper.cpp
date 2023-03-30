//
//  helper.cpp
//  matrix
//
//  Created by Amor Wang on 3/27/23.
//  Edited by Kristin DeMatteo 3/29/23
//

#include "helper.hpp"

using namespace std;

string getUserInput() {
  char buffer[100];
  getInput(buffer, 100);
  return string(buffer);
}

// Bubble Sort implementation
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}