//
//  function-1-3.cpp
//  practical3
//
//  Created by Jordan Le on 19/8/2022.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>

void copy_integers(int old_array[],int new_array[],int length){
  
  int* ptr = &old_array[0];
  
  for (int i=0; i<length; i++){
    ptr = &old_array[i];
    new_array[i] = *ptr;
  }
}
