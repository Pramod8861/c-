#include <iostream>
using namespace std;

void printArray(int arr[] , int size ){

  for (int i = 0; i < size ; i++)
   {
    cout <<arr[i] << " " ;
   }
   cout<<endl;
}

int main() {
int arr[6]={1,5,8,87,55,33};
int aar1[3]= {3,4,5};
printArray(aar1 , 3 );
printArray(arr, 6);
int sizeofArray = sizeof(arr) / sizeof(int); 
cout<<sizeofArray ;
}
