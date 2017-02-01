/*
###########################################################################
#   Name     : Rohan Verma                                                #
#   Added    : 02/01/2017                                                 #
###########################################################################
*/
#include <stdio.h>

#include<math.h>


int main() 
{
	
	int t;

	scanf("%d",&t);

	while(t-->0)

	{

	    int n,sum=0,temp;

	    scanf("%d",&n);

	    temp=n;

	    while(n>0)

	    {

	        sum=sum+(n%10)*(n%10)*(n%10);

	        n=n/10;

	    }

	    if(sum==temp)

	    printf("Yes\n");

	    else

	    printf("No\n");
	}

	return 0;

}

