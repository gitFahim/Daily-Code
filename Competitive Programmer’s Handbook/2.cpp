//maximum subarray sum
#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	int arr[10] = {-1, 2, 4 ,-3, 5, 2, -5, 2};
	int best = INT_MIN, sum = 0;
	for(int k=0; k<7; k++){
        sum = max(arr[k], sum+arr[k]);
        best = max(best, sum);
	}
	cout<<best<<'\n';
}

