#include<bits/stdc++.h>
using namespace std;
long long a,b,p,mo,b1,a1;
int main(){
	cin>>a>>b>>p;b1=b;a1=a;
	a=a%p;mo=1;
	while (b!=0){
		if (b%2!=0){
			mo=(mo*a)%p;
		};
		a=(a*a)%p;
		b/=2;
	} 
	cout<<a1<<"^"<<b1<<" mod "<<p<<"="<<mo;
	return 0;
}
