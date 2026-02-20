#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[2];
	scanf("%d%d%d",&a[0],&a[1],&a[2]);
	sort(a,a+3);
	for (int i=2;i<=a[0];i++)
	 while (a[0]%i==0&&a[2]%i==0){
	 	a[0]/=i;a[2]/=i;
	 }
	printf("%d/%d",a[0],a[2]);//   cout << a / __gcd(a, c) << "/" << c / __gcd(a, c); // 约分这个也行 
	return 0;
} 
