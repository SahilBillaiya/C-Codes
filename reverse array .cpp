#include <iostream>
using namespace std;
void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swapalternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
        cout<<endl;
    }
}

int main() {
    int even [8] = {2,4,5,3,7,8,5,9};
    int odd [5] = {3,5,7,6,4};
    
    swapalternate(even,8);
    printarray(even,8);
    
    cout<<endl;
    
    swapalternate(odd,5);
    printarray(odd,5);

    return 0;
}
