#include <algorithm>
#include <cctype>
#include <cstdio>
#include <cstring>
#include <functional>
#include <iostream>
#include <unistd.h>
#include <utility>
#include <vector>
#include <map>

using namespace std;
 typedef long long int vl;

 // bool reverse(vl a, vl b){ return b>a; };
int main(){
	int i,z,n,j,k,t,h,ans = 0,m;
	int a,b,c,d;
	vl p[110];
	vl auctioned_p[110];
	bool is_auction[110] = {0};
	cin >> n >> m;
	for(i=1;i<=n;i++){
		cin >> p[i];
	}

	for(i=0;i<m;i++){
		cin >> t; 
			is_auction[t] = 1;
	}

	vl non_sum = 0;

	int count = 0;
	for(i=1;i<=n;i++){
		if( !is_auction[i] )
			non_sum += p[i];
		else
			auctioned_p[count++] = p[i];
	}

	sort(auctioned_p,auctioned_p + m);


	for(i=m-1;i>=0;i--){
		if(non_sum > auctioned_p[i])
			non_sum += non_sum;
		else
			non_sum += auctioned_p[i];

	}
 
 	// printf("%l64d",non_sum);
	cout << non_sum << endl;
	return 0;
}