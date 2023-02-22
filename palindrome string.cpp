#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string str)
{
    int n = str.length();
    int l = 0, r = n-1;
    
    
    while(l < r)
    {
       if( str[l] != str[r] )
           return false;
           l++;
           r--;
    }
    
    
    return true;
}
int main()
{
    string str = "abbccbba";
    if(isPalindrome(str)){
        cout<< str <<"is palindrome"<<endl;;
    }
    else{
        cout<< str <<"is not palindrome"<<endl;;
    }
}
