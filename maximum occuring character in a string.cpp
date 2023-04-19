#include<iostream>
#include<string>
using namespace std;
char getmaxocccharacter(string s){
    int arr[26] = {0};
    //create an array of count
    for(int i = 0; i<s.length(); i++){
        char ch = s[i];
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    
    int maxi = -1,ans = 0;
    for(int i = 0; i<26; i++){
        if(maxi < arr[i]){
            ans = i;
            maxi = arr[i];
        }
    }
    char finalans = 'a' + ans;
    return finalans;
}
int main(){
    string s;
    cin >> s;
    cout<<getmaxocccharacter(s)<<endl;
    
    return 0;
}
