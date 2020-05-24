#include <iostream>

using namespace std;
void reverseArray(int [], int);
void removeOdd(int [], int&);
void splitArray(int [], int);
void printArray(int [], int);
int main() {
    //int arr1 [] = { 1, 2 ,3, -3, -2, -1};
    //int size1 = 6;
    //reverseArray(arr1,size1);
    //printArray(arr1,size1);

//    int arr2 [] = {21, 12, 6, 7, 14};
//    int size2 = 5;
//    removeOdd(arr2, size2);
//    printArray(arr2, size2);

    int arr3 [] = {3, 6, 4, 1, 12};
    int size3 = 5;

    splitArray(arr3, size3);
    printArray(arr3,size3);



    return 0;
}

void reverseArray(int  arr[], int size){
    int start = 0;
    int end = size - 1;

    while (start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

void removeOdd( int arr [], int& size){
    int nSize = 0;
    int nIndex = 0;

    // Checks if number is even numbers and increments the new size
    for(int i = 0; i < size; i++){
        if(arr[i] % 2 == 0){
            arr[nIndex] = arr[i];
            nIndex += 1;
            nSize += 1;
        }
    }
    size = nSize;
}

void splitArray(int arr[], int size){
    int nIndex = 0;
    for(int i = 0; i < size; i++){

        // Sets all the odd number to be in the left side of array and all even numbers to be in the right side of arr
        // Order does not matter
        if(arr[i] % 2 != 0){
            int temp = arr[i];
            arr[i] = arr[nIndex];
            arr[nIndex] = temp;
            nIndex += 1;
        }
    }
}

void printArray(int arr[], int size){
    for( int i = 0; i < size; i++)
        cout << arr[i] << " ";
}
