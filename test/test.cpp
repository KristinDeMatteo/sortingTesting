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
#include "sortingInC.hpp"

using namespace std;

void testAscendingSort() {
  // Test case 1: Sort an array of integers in ascending order
  cout << "Test case 1: Sort an array of integers in ascending order" << endl;
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
  cout << "Test case 2: Sort an array of integers in descending order" << endl;
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
  cout << "Test case 3: Sort an empty array of integers" << endl;
  int arr3[] = {};
  int n3 = sizeof(arr3) / sizeof(arr3[0]);
  int sorted3[] = {};
  bubbleSort(arr3, n3);
  for (int i = 0; i < n3; i++) {
    assert(arr3[i] == sorted3[i] && "Test case 3 failed.");
  }
}

void testAsmBubbleSort() {
  // Asm Test Case
  cout << "Asm Test Case" << endl;
  int arr[] = { 5, 3, 9, 1, 7 };
  int n = sizeof(arr) / sizeof(arr[0]);

  bubbleSort(arr, n);

  cout << "Sorted array: ";
  for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
  }
  cout << endl;

  for (int i = 0; i < n - 1; i++) {
      assert(arr[i] <= arr[i + 1] && "Test case failed.");
  }
}

void testSelectionSort_case1(){
  cout << "Test Selection sort case 1: Sort an array of integers in ascending order" << endl;
  int orig_arr[] = { 5, 3, 9, 1, 7 };
  int expected_arr[] = { 1, 3, 5, 7, 9 };
  int n = sizeof(orig_arr) / sizeof(orig_arr[0]);
  selectionSort(orig_arr, n);
  for (int i = 0; i < n ; i++) {
      assert(orig_arr[i] = expected_arr[i] && "Test case failed.");
  }
}

void testSelectionSort_case2(){
  cout << "Test Selection sort case 2: Sort an empty array of integers" << endl;
  int orig_arr[] = {};
  int expected_arr[] = { };
  int n = sizeof(orig_arr) / sizeof(orig_arr[0]);
  selectionSort(orig_arr, n);
  assert(orig_arr[0] = expected_arr[0] && "Test case failed.");
}

int main() {
  testAscendingSort();
  testDescendingSort();
  testEmptySort();
  testSelectionSort_case1();
  testSelectionSort_case2();

  cout << "All tests passed!\n";
  return 0;
}
