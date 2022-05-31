#include <iostream>
using namespace std;

int linearsearch(int * a, int n, int key){
    for(int i=0; i<n; i++){

        //current element matches with the key
        if(a[i] == key){
            return i;
        }
    }
    //out of the loop
    //scanned all the elements of the array
    return -1;
}


int main() {
	// your code goes here
    int arr[] = {1,8,6,7,9,10,4};

    int n = sizeof(arr)/sizeof(int);
    int key;
    cin >> key;

    int index = linearsearch(arr, n, key);
    cout << index;


	return 0;
}

