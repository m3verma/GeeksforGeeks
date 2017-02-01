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

	    char s[2];

	    scanf("%s",s);

	    if(s[0]==s[1])

	    printf("DRAW\n");

	    else if(s[0]=='R'&&s[1]=='P')

	    printf("B\n");

	    else if(s[0]=='R'&&s[1]=='S')

	    printf("A\n");

	    else if(s[0]=='P'&&s[1]=='R')

	    printf("A\n");

	    else if(s[0]=='P'&&s[1]=='S')

	    printf("B\n");

	    else if(s[0]=='S'&&s[1]=='R')

	    printf("B\n");

	    else if(s[0]=='S'&&s[1]=='P')

	    printf("A\n");

	}

	return 0;

}
