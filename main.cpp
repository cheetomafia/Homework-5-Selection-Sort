  #include <iostream>
#include "SelectionSort.h"
using namespace std;

bool SHOW_PROMPTS = true;

int main() {
  //  Count of numbers to sort
  int n;       

  // Order to sort
  int order;

  // Pointer to dynamic array of integers
  int* numbers;

  if( SHOW_PROMPTS ){
    cout << "Enter number count: ";
  }
  cin >> n;

  if( SHOW_PROMPTS ){
    cout << "Enter sort order (0=ASC, 1=DESC): ";
  }
  cin >> order;

  if( (order != ORDER_ASCENDING) && (order != ORDER_DESCENDING) )
  {
    cout << "Invalid sort order\n";
    return -1;
  }

  // TODO:  Allocate dynamic array
  numbers = new int[n]();
  
  if( SHOW_PROMPTS ){
    cout << "Enter " << n << " numbers: ";
  }
  
  // Read in all the numbers
  // TODO: Read in all the numbers using cin
  for(int i = 0; i < n; i++){
    cin >> numbers[i];
  }
  
  // TODO: Based on order entered call selection sort
  // with the correct (pointer, count, function pointer)
  bool (*functionPtr[])(int, int) = {descending, ascending};

  selectionSort(numbers, n, (*functionPtr[order]));
  
  cout << "Sorted Numbers\n";
  for(int i=0; i<n; ++i)
  {
    cout << numbers[i];
    if( i < (n-1) ){
      cout << " ";
    }
  }
  cout << endl;

  // TODO: Clean up memory
  delete[] numbers;
  
}
