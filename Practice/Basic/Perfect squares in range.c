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

	    int a,b;

	    scanf("%d %d",&a,&b);

	    printf("%d\n",(int)(floor(sqrt(b))-ceil(sqrt(a))+1));

	}

	return 0;

}

