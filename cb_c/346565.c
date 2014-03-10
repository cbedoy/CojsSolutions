#include<stdio.h>
#include<math.h>
int SumOfDivisors(int num)
{
	int sum=0,i;
	int r=(int)floor(sqrt((double)num));
	if(r*r==num)
	{
		sum += r;
		r -= 1;
	}
	if( num%2 != 0 )
		for(i=1; i<=r; i+=2)
		{
			if(num%i==0)
				sum += i + num/i ;
		}
	else
		for(i=1; i<=r; i+=1)
		{
			if(num%i==0)
				sum += i + num/i ;
		}
	return sum-num;
}
 
 
int main()
{
    int t,i,n,x;
    long long int sum=1;
    scanf("%d",&t);
    while(t--)
    {
        sum=1;
        scanf("%d",&n);
        if(n==1)
        {
           printf("0\n");
            continue;
        }
        if(n==2)
        {
            printf("1\n");
            continue;
        }
        sum=SumOfDivisors(n);
        printf("%lld\n",sum);
 
    }
 
 
return 0;
}
