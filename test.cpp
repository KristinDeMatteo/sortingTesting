//
//  test.cpp
//  matrix
//
//  Created by Amor Wang on 3/27/23.
//  Edited by Kristin DeMatteo 3/29/23
//

#include <iostream>
#include <cassert>
#include "helper.hpp"

using namespace std;

void testAscendingSort() {
  // Test case 1: Sort an array of integers in ascending order
  int arr1[] = { 3, 1, 4, 2, 5 };
  int n1 = sizeof(arr1) / sizeof(arr1[0]);
  int sorted1[] = { 1, 2, 3, 4, 5 };
  bubbleSort(arr1, n1);
  for (int i = 0; i < n1; i++) {
    assert(arr1[i] == sorted1[i] && "Test case 1 failed.");
  }
}

void testDescendingSort() {
  // Test case 2: Sort an array of integers in descending order
  int arr2[] = { 5, 4, 3, 2, 1 };
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  int sorted2[] = { 1, 2, 3, 4, 5 };
  bubbleSort(arr2, n2);
  for (int i = 0; i < n2; i++) {
    assert(arr2[i] == sorted2[i] && "Test case 2 failed.");
  }
}

void testEmptySort() {
  // Test case 3: Sort an empty array of integers
  int arr3[] = {};
  int n3 = sizeof(arr3) / sizeof(arr3[0]);
  int sorted3[] = {};
  bubbleSort(arr3, n3);
  for (int i = 0; i < n3; i++) {
    assert(arr3[i] == sorted3[i] && "Test case 3 failed.");
  }
}


int main() {
  testAscendingSort();
  testDescendingSort();
  testEmptySort();
  cout << "All tests passed!\n";
  return 0;
}
