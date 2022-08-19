//
//  function-2-1.cpp
//  practical3
//
//  Created by Jordan Le on 19/8/2022.
//

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

void multiples_of_seven(int *nums,int length){
  
  for (int i=0; i<length; i++){
    if (*(nums+i)%7 == 0){
      cout << *(nums+i) << endl;
    }
  }
}
