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

	while(t-->0)

	{

	    int n,temp,sum=0;

	    scanf("%d",&n);

	    for(int i=0;i<n;i++)

	    {

	        scanf("%d",&temp);

	        sum=sum+temp;

	    }

	    printf("%d\n",sum);

	}

	return 0;

}
