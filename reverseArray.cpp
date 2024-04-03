#include <iostream>
using namespace std;
/*
int reverseArray(int arr[] , int size ){
     int start = 0 ;
     int end = size-1;
     while (start<=end)
     {
        swap(arr[start] , arr[end]);
        start ++;
        end -- ;

     }
     
}
int printArray(int arr[] , int size){
    for (int i = 0; i <size; i++)
    {
      cout<<arr[i]<<" ";
    }   
}
int main(){
    int arr[7]= {1,2,4,6,43,66,99};
    reverseArray(arr ,7);
    printArray(arr,7);
}
*/


//QUESTION 2 SWAP ALTERNATE POSITION 

int alternateArray(int arr[] , int size){
    for (int i = 0; i < size ; i=i+2)
    {
    if (i+1<size)
        {
             swap(arr[i] , arr[i+1]) ;  
        }
        
      
        }
    }   

int printArray(int arr[] , int size){
    for (int i = 0; i <size; i++)
    {
      cout<<arr[i]<<" ";
    }   
}

int main(){
    int arr[6]= {1,2,3,4,5,6};
    int arr1[5]= {1,2,3,4,5};

    alternateArray(arr ,6);
    printArray(arr,6);
cout<<endl;
    alternateArray(arr1 ,5);
    printArray(arr1,5);
}
