#include<iostream>
using namespace std;
int main(){
	int i,a,k,s=0;
	int n;
	cout<<"Enter number :";cin>>n;
	for(k=1; k<=n; k=k+1){
		cout<<" Process "<<k<<":";
		a=1;
		for(i=1; i<=k; i++){
			a=a*i;
			s=s+a;
			cout<<" Sum "<<s;
		}
	}
	
}
