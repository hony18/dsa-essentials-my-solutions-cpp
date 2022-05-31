#include <iostream>
using namespace std;

// function without passing size of array 
//It does not work because array is passed by reference and a here is pointer to the array. sizeof(a) gives 8 
//as it stores address of the first element of the array
// void printArray(int a[]){

// 	int n = sizeof(a)/sizeof(int);

// 	cout << n << endl;

// 	// for(int i=0; i<n; i++){
// 	// 	cout << a[i] << ", ";
// 	// }
// }

void printArray(int * a, int n){
	for(int i=0; i<n; i++){
		cout << a[i] << ", ";
	}
}

int main() {
	// your code goes here

	int arr[] = {1,2,3,4,5,6};

	int n = sizeof(arr)/sizeof(int);

	cout << "In main" << endl;

	for(int i=0; i<n; i++){
		cout << arr[i] << ", ";
	}

	cout << "\nIn function" << endl;

	printArray(arr, n);



	return 0;
}

