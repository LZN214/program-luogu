#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,i,x,y,mi=1000000000,num;
	scanf("%d",&n);
	for (i=1;i<=3;i++){
		scanf("%d%d",&x,&y);
		if (n%x==0) num=0;
		 else num=1;
		num+=n/x;
		if (num*y<=mi) mi=num*y;
	}
	printf("%d\n",mi);
	return 0;
}
