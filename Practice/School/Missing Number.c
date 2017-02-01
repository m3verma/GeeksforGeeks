/*
###########################################################################
#   Name     : Rohan Verma                                                #
#   Added    : 01/31/2017                                                 #
#   Comments : Used the formula for counting sum of n numbers (n*(n+1))/2 #
###########################################################################
*/
#include <stdio.h>
int main() {
    long long int sum=0,act_sum=0;
    int t,n,i,temp,ans;
    scanf("%d",&t);
    while(t--)
    {
        i=0;
        sum=0;
        scanf("%d",&n);
        for( i=1;i<=n-1;i++)
        {
            scanf("%d",&temp);
            sum=sum+temp;
        }
        act_sum=(n*(n+1))/2;
        ans=act_sum-sum;
        printf("%d\n",ans);
    }
	return 0;
}
