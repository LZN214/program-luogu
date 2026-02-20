#include<bits/stdc++.h>
using namespace std;
int n,k,x;
int main(){
	scanf("%d",&n);
	n/=364;k=1;
	for (x=100;x>=0;x--)
	 if ((n-x)>0&&(n-x)%3==0){
	 	printf("%d\n%d",x,(n-x)/3);
	 	return 0;
	 }
	return 0;
}
