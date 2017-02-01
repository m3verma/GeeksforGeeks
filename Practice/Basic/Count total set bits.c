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

	    int N,set_bit=0;

	    scanf("%d",&N);

	    int x=0;

   	    for(int i=0;i<32;i++)

	    {

		    x = 1<<i;

		    for(int j=1;j<=N;j++)

		    {

			    if( j & x)

			    set_bit++;

		    }
	    
	    }

            printf("%d\n",set_bit);

	}

	return 0;

}


	
