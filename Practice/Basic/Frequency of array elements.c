/*
###########################################################################
#   Name     : Rohan Verma                                                #
#   Added    : 02/01/2017                                                 #
###########################################################################
*/
#include <stdio.h>

int main() {

	int t;
	scanf("%d",&t);
	while(t-->0)
	{
	    int n=0;
	    scanf("%d",&n);
	    int a[200]={0},temp;
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&temp);
	        a[temp]++;
	    }
	    for(int i=1;i<=n;i++)
	    {
	        printf("%d ",a[i]);
	    }
	    printf("\n");
	    
	    
	}
	return 0;
}

