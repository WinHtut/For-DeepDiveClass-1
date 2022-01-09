// C++ Program to insert and display data entered by using pointer notation.

#include <iostream>
using namespace std;

void swap(int *x , int *y){

    int temp = *x;  
    *x = *y;
    *y = temp;
}

int main() {
  int x=10;
  int y=20;

  cout<<"Before swapping :"<<endl;
  cout<< "x = :"<<x<<endl;
  cout<< "y = :"<<y<<endl;

  swap(&x ,&y);

    cout<<"After  swapping :"<<endl;
    cout<< "x = :"<<x<<endl;
    cout<< "y = :"<<y<<endl;
    return 0;
}
