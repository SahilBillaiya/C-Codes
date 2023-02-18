#include <iostream>
using namespace std;
int add_digit_by_digit(int x,int y,int z){
    return(x+y+z);
}
int main()
{
    int a=0,b=0,c=0;
    int sum=0;
    cout<<"enter three numbers"<<endl;
    cin >> a >> b >> c;
    sum = add_digit_by_digit(a,b,c);
    cout<<"the sum of"<< a <<","<< b <<"and"<< c << "is"<< sum <<"."<<endl;
}
