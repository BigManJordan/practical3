//
//  main-1-3.cpp
//  practical3
//
//  Created by Jordan Le on 19/8/2022.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
extern void copy_integers(int old_array[],int new_array[],int length);

int main(void){
  
  int array1[3]={1,2,3};
  int *array2 = new int[3];
  
  copy_integers(array1, array2, 3);
}
