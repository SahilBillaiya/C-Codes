#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int count=1;count<=n;count++){
    sum = sum + count;
    }
    cout<<sum;
    return(0);
}
