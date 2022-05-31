#include <iostream>
using namespace std;

int main() {
	
    //initialising the array

    int arr[8] = {1,2,3,4,5,6};

    for(int i=0; i<8; i++){
        cout << arr[i] << ", ";
    }

    //output : 1, 2, 3, 4, 5, 6, 0, 0, 
    cout << endl;
    int arr1[8];

    //Taking inputs from user for first 6 values

    for(int i=0; i<6; i++){
        cin >> arr1[i];
    }

    for(int i=0; i<8; i++){
        cout << arr1[i] << ", ";
    }
    //output : 1, 2, 3, 4, 5, 6, garbage value, garbage value 
    
    cout << endl;

    int arr2[8];

    arr2[0] = 0;

    for(int i=1; i<6; i++){
        cin >> arr2[i];
    }

    for(int i=0; i<8; i++){
        cout << arr2[i] << ", ";
    }

    //output  : 0, 1, 2, 3, 4, 5, grbage value, garbage value

    cout << endl;

    /*
    int arr3[8];

    arr3[8] = {1,2,3,4,5,6};

    for(int i=0; i<8; i++){
        cout << arr3[i] << ", ";
    }

    //error in initialisation
    // after declaring the array, values can be assigned to each box only through individual assignment
    */

    return 0;
	
}
