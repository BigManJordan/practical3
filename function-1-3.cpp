//
//  function-1-3.cpp
//  practical3
//
//  Created by Jordan Le on 19/8/2022.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

void copy_integers(int old_array[],int new_array[],int length){
  
  int* ptr1 = old_array;
  int* ptr2 = new_array;
  
  for (int i=0; i<length; i++){
    *(ptr2 +i )= *(ptr1 + i);
  }
}
