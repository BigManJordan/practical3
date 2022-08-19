//
//  main-1-1.cpp
//  practical3
//
//  Created by Jordan Le on 19/8/2022.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#include <string>
using namespace std;

extern void string_2d_copy(string first[][2], string second[][2], int n);

int main(void){
  
  string str1[3][2] = {{"AA"},{"BB"},{"CC"}};
  
  string str2[3][2];
  
  string_2d_copy(str1,str2,3);
  
}
