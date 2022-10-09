#include <iostream>
using namespace std;
int firstoccurance(int arr[],int size,int key){
    int s=0,e=size - 1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            e = mid - 1;
    }
    else if(arr[mid]<key){
        s= mid + 1;
    }
     else if (arr[mid]>key){
         e= mid -1;
     }
     mid = s+(e-s)/2;
}
    return ans;
}

int lastoccurance(int arr[],int size,int key){
    int s=0,e=size - 1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
            s = mid + 1;
    }
    else if(arr[mid]<key){
        s= mid + 1;
    }
     else if (arr[mid]>key){
         e= mid -1;
     }
     mid = s+(e-s)/2;
}
    return ans;
}
int main(){
    int even[5] = {1,2,3,5,5};
    cout<<"first occurance of 5 is at index"<< firstoccurance(even,5,5) <<endl;
    cout<<"last occurance of 5 is at index"<< lastoccurance(even,5,5) <<endl;
  
    return 0;
}
