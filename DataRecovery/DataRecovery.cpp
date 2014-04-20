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
 
 
int main(){
	int i,z,j,k,t,h,ans = 0;
	int a,b,c,d;
	int n,m,min,max;
	scanf("%d%d%d%d",&n,&m,&min,&max);
	int a_min = 1000;
	int a_max = -100; 
	int a_temp;

	for(i=0;i<m;i++){
		scanf("%d",&a_temp);
		if( a_temp < a_min )
			a_min = a_temp;
		if( a_temp > a_max )
			a_max = a_temp;
	}

	int how_many_more_needed = 2;
	//How much correct
		if( a_min == min)
			how_many_more_needed--;
		if( a_max == max )
			how_many_more_needed--;

	// if( (n-m) >= how_many_more_needed )
	// 	printf("Correct");
	// else
	// 	printf("Incorrect");

		// cout << "a_min " << a_min << " a_max" << a_max << endl;

		if( (a_min < min) || (a_max > max) )
			printf("Incorrect");
		else if( (n-m) >= how_many_more_needed )
			printf("Correct");
		else
			printf("Incorrect");
	
 
	return 0;
}