//Bubble sort before sorting
#include<bits/stdc++.h>

using namespace std;

int printarr(int *arr, int len) {
    for(int i=0; i<len; i++){
        cout<<arr[i]<<' ';
    }
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);

	int arr[6] = {5,8,8,1,8,9};
    int len = sizeof(arr)/sizeof(arr[0]);
	for(int i=0; i<len; i++) {
        for(int j=0; j<len-1; j++) {
            if(arr[j]>arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
	}
	printarr(arr, len);
}

