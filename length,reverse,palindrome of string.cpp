#include<iostream>
using namespace std;
char tolowercase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool checkpalindrome(char a[] , int n ){
    int s = 0;
    int e = n - 1;
    
    while(s<=e){
        if(tolowercase(a[s]) != tolowercase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}
void reverse(char name[15],int n){
    int s = 0;
    int e = n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}
int getlength(char name[15]){
    int count = 0;
    for(int i = 0; name[i] != '\0'; i++){
        count++;
    }
    return count;
}
int main(){
    char name[15];
    cout<<"enter your name"<<endl;
    cin>> name ;
    
    int len = getlength(name);
    cout<< "your name is " << name <<endl;
    cout<< "length:" << len << endl;
    reverse(name,len);
    cout << "your name is " << name << endl;
    cout<< "palindrome or not: " << checkpalindrome(name,len) << endl;
    cout << "CHARACTER is " << tolowercase('B') << endl; 
    cout << "CHARACTER is " << tolowercase('c') << endl;
    
    return 0;
}
