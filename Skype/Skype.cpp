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
	int i,z,n,j,k,m,t,h;
	int a,b,c,d;
	int mat[20010][15];


	scanf("%d %d %d",&n,&m,&k);

	int ans[20010] = {0};
	int chat_box_messages[11] = {0};


	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){
			scanf("%d",&mat[i][j]);
		}
	}


	int user, chatbox ;

	for(i=0;i<k;i++){
		scanf("%d",&user);
		scanf("%d",&chatbox);
		ans[user]--;
		chat_box_messages[chatbox]++;
	}		



	for(i=1;i<=n;i++){
		for(j=1;j<=m;j++){

			if( mat[i][j] == 1){
				ans[i] += chat_box_messages[j];
			}
		}
		printf("%d ",ans[i]);
	}
		
 
	return 0;
}