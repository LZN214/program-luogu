#include<bits/stdc++.h>
using namespace std;
int i,n;
int main(){
	scanf("%d",&n);
	for (i=2;i<=int(sqrt(n));i++)
	 if (n%i==0){
	 	printf("%d",n/i);
	 	return 0;
	 }
	return 0;
}
