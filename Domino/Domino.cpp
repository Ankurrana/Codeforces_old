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
 
#define getw getchar_unlocked
#define iterate(n) for(i=0;i<n;i++)
#define d_iterate(p,q) for(int i=p;i<=q;i++)
#define r_iterate(n,z) for(int i=n-1;i>=n-z;i--) /* z number of elements to the left of n */
#define p(n) printf("%d\n",&n);
#define get(n) scanf("%d",&n);
// #define sort(k,q) qsort(k,q,sizeof(*k),comp);
#define print_array(k,n) iterate(n){ p(k[i]);}
#define ps(s) printf("%s\n",s);
#define repeat(n) for (int i = (0); i < n; i++)
#define clear(v) memset((v), 0, sizeof (v))
#define ALL(x) (x).begin(), (x).end()
#define mp make_pair;
#define pb push_back;
// int comp(const void *e1,const void *e2){ return *((const lld *)e1) - *((const lld *)e2);}
 

using namespace std;
 
// struct domino{
// 	lld a;
// 	lld b;
// 	bool state; 
// };
 
 
int main(){
	int i,z,n,j,k,t,h,ans = 0;
	int a,b,c,d;
	int A = 0;
	int B = 0;
	scanf("%d",&n);
	int sum = 0;
	bool flag = 0;
	iterate(n){
		scanf("%d %d",&a,&b);
		// dominos[i].a = a;
		// dominos[i].b = b;
		sum += (a+b);
		A += a;
		B += b;

		if( (a&1) != (b&1) )
				flag = 1;


	}

		if(sum&1)
			printf("-1");
		else{
			if( (A&1) && (B&1) && (flag) )
				printf("1");
			else if( !(A&1) && !(B&1) )
				printf("0");
			else
				printf("-1");
		}

 
	return 0;
}