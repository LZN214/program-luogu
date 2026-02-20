#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,i,ma=-1,pos=0;
	for (i=1;i<=7;i++){
		scanf("%d%d",&a,&b);
		if (ma<a+b) {ma=a+b;pos=i;}
	}
	if (ma>8)printf("%d",pos);
	 else printf("0");
	return 0;
}
