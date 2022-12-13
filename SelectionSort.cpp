#include "SelectionSort.h"

bool descending(const int a, const int b){

return (a < b);
  
}

bool ascending(const int a, const  int b){

return (a >= b);
  
}

void swapValues( int* const a, int* const b){
  int temp;
  temp = *a;
  *a = *b;
  *b  = temp;
}

void selectionSort(int* const numbers, const int n, bool (*order)(const int, const int) ){

int i, j;
int length = n;
int temp;

for (i = 0; i < length-1; i++){
  int min = i;

  for(j = i+1; j < length; j++){
    if((*order)(numbers[j], numbers[min])){
      min = j;
    }
  }
  if(min != i){
    swapValues(&numbers[i], &numbers[min]);
  }
}
  
}
