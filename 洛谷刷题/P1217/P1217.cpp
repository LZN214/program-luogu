#include<bits/stdc++.h>
using namespace std;
int a[100000000],d1,d2,d3,d4,en,io,x,y,i;
bool check(int io){
	int i;
	for (i=2;i<=int(sqrt(io));i++)
	 if (io%i==0) return false;
	return true;
}
int main(){
    a[0]=5;a[1]=7;a[2]=11;
    en=2;
    for (d1=1;d1<=9;d1+=2){
    	for (d2=0;d2<=9;d2++){
    		io=d1*100+d2*10+d1;
    		if (check(io)){
    			en++;
    			a[en]=io;
			}
		}
	}
    for (d1=1;d1<=9;d1+=2){
    	for (d2=0;d2<=9;d2++){
    		io=d1*1000+d2*110+d1;
    		if (check(io)){
    			en++;
    			a[en]=io;
			}
		}
	}
    for (d1=1;d1<=9;d1+=2){
    	for (d2=0;d2<=9;d2++){
    		for (d3=0;d3<=9;d3++){
    			io=d1*10000+d2*1000+d3*100+d2*10+d1;
    			if (check(io)){
    				en++;
    				a[en]=io;
				}
			}
		}
	}
    for (d1=1;d1<=9;d1+=2){
    	for (d2=0;d2<=9;d2++){
    		for (d3=0;d3<=9;d3++){
    			io=d1*100000+d2*10000+d3*1100+d2*10+d1;
    			if (check(io)){
    				en++;
    				a[en]=io;
				}
			}
		}
	}
    for (d1=1;d1<=9;d1+=2){
    	for (d2=0;d2<=9;d2++){
    		for (d3=0;d3<=9;d3++){
    			for (d4=0;d4<=9;d4++){
    				io=d1*1000000+d2*100000+d3*10000+d4*1000+d3*100+d2*10+d1;
    				if (check(io)){
    				en++;
    				a[en]=io;
				    }
				}
			}
		}
	}
    for (d1=1;d1<=9;d1+=2){
    	for (d2=0;d2<=9;d2++){
    		for (d3=0;d3<=9;d3++){
    			for (d4=0;d4<=9;d4++){
    				io=d1*10000000+d2*1000000+d3*100000+d4*11000+d3*100+d2*10+d1;
    				if (check(io)){
    				en++;
    				a[en]=io;
				    }
				}
			}
		}
	}	
	scanf("%d%d",&x,&y);
	for (i=0;i<=en;i++)
	 if (a[i]>=x&&a[i]<=y) printf("%d\n",a[i]);
	return 0;
} 
