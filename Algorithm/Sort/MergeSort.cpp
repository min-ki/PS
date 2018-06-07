/*
    분할정복 알고리즘
*/

#include <iostream>
using namespace std;

void mergesort(int A[], int left, int right) {
   
   if(left < right) {
       int mid = (left + right) / 2;
       mergesort(A[], left, mid);
       mergesort(A[], mid+1, right);
       merge(A[], left, mid, right);
   }   
}

// 합병을 하기위한 임시 배열 필요
void merge(int A[], int left, int mid, int right) {
    int *temp = new int[8];
    
}

void print(int A[]) {
    
    for(int i=0; i<8; ++i) {
        cout << A[i] << " ";
    }
}

int main() {
    
    int example[] = { 30, 50, 20, 40, 60, 10, 70, 90 };
    mergesort(example, 0, 8);
    print(example);
    
    return 0;
}