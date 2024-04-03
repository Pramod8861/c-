#include <iostream>
using namespace std;

int firstOccerance(int arr[] , int n ,  int key){
    int s = 0;
    int e = n-1;
    int mid = (s+e) / 2 ;
    int ans = -1 ;
    while (s<=e)
    {
        if (arr[mid]==key)
        {
            ans = mid ;
            e = mid -1 ;
        }
        else if(arr[mid]> key){
            s = mid+1;

        }
        else if(arr[mid]< key ){
            e = mid-1;
        }
        mid = (s+e)/2;
    }
    return ans ;
}
int main(){
    int arr[5]={1,2,2,3,3};
    cout<<"first occerance of 3 is "<< firstOccerance(arr , 5 ,3) <<endl ;
    return 0;
}