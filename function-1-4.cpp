//
//  function-1-4.cpp
//  practical3
//
//  Created by Jordan Le on 19/8/2022.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

void copy_doubles(double *old_array,double *new_array,int length){
  
  double* ptr1 = old_array;
  double* ptr2 = new_array;
  
  for (int i=0; i<length; i++){
    *(ptr2 +i )= *(ptr1 + i);
  }
}
