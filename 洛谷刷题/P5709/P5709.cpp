#include<bits/stdc++.h>
using namespace std;
int main(){
	int m,t,s;
	scanf("%d%d%d",&m,&t,&s);
	if (t==0) printf("0");
	 else if (s%t==0)printf("%d",max(0,m-s/t));
	  else printf("%d",max(0,m-s/t-1));
	return 0;
} 
