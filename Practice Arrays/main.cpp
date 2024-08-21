#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
  // using array of pointers
  int *A[3];
  A[0]=new int [4];
  A[1]=new int [4];
  A[2]=new int [4];
  delete []A;
  *A=nullptr;
  //(dual pointer method)using an array of pointers and arrays both in heap 
  int **B;
  B=new int* [3];
  B[0]=new int [4];
  B[1]=new int [4];
  B[2]=new int [4];

  return 0;
}
