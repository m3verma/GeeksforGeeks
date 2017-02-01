/*
###########################################################################
#   Name     : Rohan Verma                                                #
#   Added    : 02/01/2017                                                 #
###########################################################################
*/
#include <stdio.h>


int main() 
{
	
	
	int t;

	scanf("%d",&t);

	while(t--)

	{

	    int a,b,n;

	    scanf("%d %d %d",&a,&b,&n);

	    int d=b-a;

	    int ans=a+(n-1)*d;

	    printf("%d\n",ans);

	}
	
	return 0;

}
