//tab KnapsacK

#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    int w = 10, n=4;
    int val[4] = {10, 40 , 30 , 50};
    int wt[4] = {5, 4, 6, 3};

    int d2arr[n+1][w+1];

    for(int r = 0; r<w+1; r++) {
        d2arr[0][r] = 0;
    }

    for(int c = 0; c<n+1; c++) {
        d2arr[c][0] = 0;
    }

    for(int item = 1; item <= n; item++) {
        for(int capacity = 1; capacity <= w; capacity++) {
            int maxValWithoutCurr = d2arr[item-1][capacity];
            int maxValWithCurr = 0;

            int weightOfCurr = wt[item -1];
            if(capacity >= weightOfCurr) {
                maxValWithCurr = val[item-1];

                int remainingCapacity = capacity - weightOfCurr;
                maxValWithCurr += d2arr[item - 1][remainingCapacity];
            }

            d2arr[item][capacity] = max(maxValWithoutCurr, maxValWithCurr);
        }
    }
    cout<<d2arr[n][w];
}
