#include <iostream>
#include <climits>
using namespace std;
int search(int arr[] , int size ,  int key){
    for (int i = 0; i < size ; i++)
    {
        if(arr[i]== key){
        return 1 ;
    }
    }
    return 0;
}
int main(){
    int arr[20]={1,64,3,786,33,98,21,10};
    cout<<"enter elements to serach"<< endl;
    int key ;
    cin>>key ;

    int res = search(arr , 20 , key );
    
    if (res == 1 )
    {
      cout<<"key is present"<< endl ;
    }
    else{
        cout<< "key is not present"<< endl ;
    }
    

}