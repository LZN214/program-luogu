#include<bits/stdc++.h>
using namespace std;
int main(){
	double n;
	scanf("%lf",&n);
	if (n<=150) printf("%0.1lf",n*0.4463);
	 else if (n<=400) printf("%0.1f",150*0.4463+(n-150)*0.4663);
	  else printf("%0.1f",150*0.4463+250*0.4663+(n-400)*0.5663);
	return 0;
} 
