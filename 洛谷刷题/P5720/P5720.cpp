#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,i=0;
	scanf("%d",&a);
	while (a!=1){
		a/=2;i++;
	}
	printf("%d",i+1);
	return 0;
}
