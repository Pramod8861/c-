#include <iostream>
using namespace std;

int firstOccerance(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2; // Calculate mid within the loop
        if (arr[mid] == key) {
            ans = mid;
            e = mid - 1; // Update the end index to continue searching towards left
        }
         else if (arr[mid] < key)
         {
            s = mid + 1; // Update the start index to search in the right half
        } 
        else {
            e = mid - 1; // Update the end index to search in the left half
        }
    }
    return ans;
}


int lastOccerance(int arr[], int n, int key) {
    int s = 0;
    int e = n - 1;
    int ans = -1;
    while (s <= e) {
        int mid = s + (e - s) / 2; // Calculate mid within the loop
        if (arr[mid] == key) {
            ans = mid;
             s= mid + 1; // Update the end index to continue searching towards left
        }
         else if (arr[mid] < key)
         {
            s = mid + 1; // Update the start index to search in the right half
        } 
        else {
            e = mid - 1; // Update the end index to search in the left half
        }
    }
    return ans;
}

    
int main(){
    int arr[7]={1,2,2 ,3 ,4 ,5};
    cout<<"first occerance of 14 is "<< firstOccerance(arr , 7 ,2 ) <<endl ;
    cout<<"last occerance of 14 is "<< lastOccerance(arr , 7,2 ) <<endl ;
    return 0;
}