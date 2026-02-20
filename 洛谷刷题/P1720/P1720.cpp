#include<bits/stdc++.h>
using namespace std;
double n;
int main(){
	scanf("%lf",&n);
	printf("%0.2lf",(pow((1+sqrt(5))/2,n)-pow((1-sqrt(5))/2,n))/sqrt(5));
	return 0;
}
