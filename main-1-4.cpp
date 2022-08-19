//
//  main-1-4.cpp
//  practical3
//
//  Created by Jordan Le on 19/8/2022.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
extern void copy_doubles(double *old_array,double *new_array,int length);

int main(void){
  
  double array1[3] = {1.1,2.2,3.3};
  double array2[3];
  
  copy_doubles(array1, array2, 3);
}
