#include<stdio.h>
int main()
{
int n,a[110],b[110],i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
	{
	scanf("%d %d",&a[i],&b[i]);
	}
for(i=0;i<n;i++)
	{
	for(j=i+1;j<n;j++)
		{
		if(a[i]+b[i]==a[j]&&b[i]+b[j]==0)
			{printf("YES");return 0;}
		}
	}
printf("NO");
return 0;
}