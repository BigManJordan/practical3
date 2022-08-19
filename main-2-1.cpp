//
//  main-2-1.cpp
//  practical3
//
//  Created by Jordan Le on 19/8/2022.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
extern void multiples_of_seven(int *nums,int length);

int main(void){
  
  int array[5] = {7,5,0,2,14};
  int *ptr = array;
  
  multiples_of_seven(ptr,5);
}
