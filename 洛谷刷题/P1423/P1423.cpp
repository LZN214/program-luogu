#include<bits/stdc++.h>
using namespace std;
double s;
int main(){
	scanf("%lf",&s);
	printf("%d",int(ceil(log(1-s*0.01)/log(0.98))));
	return 0;
}
