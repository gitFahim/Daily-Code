//Page 7, finding factorial of n
#include<bits/stdc++.h>

using namespace std;

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
    long long n,m;
	cin>>n;
	long long x =1;
	for(int i = 2; i<=n; i++) {
        x = (x*i)%m;
	}
	cout<<x%m<<"\n";
}
