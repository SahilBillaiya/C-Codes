#include<bits/stdc++.h>

using namespace std;

void find2ndMax(int arr[], int n)
{
    int max = INT_MIN , secondMax = INT_MIN;
    for(int i = 0; i<n; i++)
    {
        if(arr[i]>max)
        {
            secondMax = max;
            max = arr[i];
        }
        else if(arr[i] > secondMax && arr[i]!= max)
            secondMax = arr[i];
    }
    if(secondMax != INT_MIN){
            cout<< secondMax;
    }
        else{
            cout<<"does not exist";
        }    
}
int main() {
    int arr[] = {1,3,5,8,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    find2ndMax(arr, n);
    
    return 0;
}
