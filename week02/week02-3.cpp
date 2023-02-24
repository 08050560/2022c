#include <stdio.h>
int main ()
{
	long long int a,b;
	while(scanf("%lld%lld",&a,&b)==2){
		long long int ans =b-a;
		if(a>b) ans=a-b;
		if(a<b) ans=b-a;
		printf("%lld\n",ans);
	}


}
