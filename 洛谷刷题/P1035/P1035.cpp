#include<bits/stdc++.h>
using namespace std;
int n=0;
double ans=0,k;
int main(){
	scanf("%lf",&k);
	while (ans<=k){
	n++;	
	ans+=1.0/n;
	}
	printf("%d",n);
	return 0;
} 
