#include <iostream>
using namespace std;
// this is a better insertion sort
void insertionSort(int arr[], int len){
// var i will iterate through whole list.
// var j will be used for swaping and 
// when done with swap will be assigned i to continue
// in outer loop.
	int temp = 0;
	int j;
	for(int i = 1; i < len; ++i){
		j = i;
// j is then assigned when out of the loop
		while(j > 0 && arr[j] < arr[j-1]){
//condition checks that j is not at the 
//front of list and value at left of j
//is less than current position of j
			temp = arr[j-1];
			arr[j-1] = arr[j];
			arr[j] = temp;
			//swap value then decrement j to check
			--j;
		}
	}
	for (int p = 0; p < len; ++p) {
		std::cout << arr[p] << endl;
	} 
		
}

int main(){
	int myArr[] = {5,2,4,6,1,3};
	int len = 6;
	insertionSort(myArr, len);
	return 0;
}