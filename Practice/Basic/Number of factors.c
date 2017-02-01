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

	    int n,count=0;

	    scanf("%d",&n);

	    for(int i=1;i<=n;i++)

	    {

	        if(n%i==0)

	        count++;

	    }

	    printf("%d\n",count);

	}

	return 0;

}
