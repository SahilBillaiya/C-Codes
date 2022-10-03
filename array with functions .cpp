#include<iostream>
using namespace std;

void printArray(int arr[], int size) {

    cout<< " printing the array " << endl;
    for(int i =0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout<< " printing DONE " << endl;
}

int main() {
    int number[4];
    cout << "Value at 3 index " << number[3] << endl;

    int shiv[3] = {5, 7, 11};
    cout << "Value at 2 index " << shiv[2] << endl;

    int third[15] = {2,7};
    int n= 15;
    printArray(third,n);

    int fourth[10] = {0};
    n = 10;
    printArray(fourth,4);

    int fifth[10] = {1};
    n = 10;
    printArray(fifth,n);

}
