#include<stdio.h>
void sort(int arr[],int low,int mid,int high)
{
 int i,j,k,l,b[100];
 l=low;
 i=low;
 j=mid+1;
 while((l<=mid)&&(j<=high))
   {
    if(arr[l]<=arr[j])
      {
       b[i]=arr[l];
       l++;
      }
    else
      {
       b[i]=arr[j];
       j++;
      }
    i++;
   }
 if(l>mid)
   {
    for(k=j;k<=high;k++)
       {
        b[i]=arr[k];
        i++;
       }
   }
 else
   {
    for(k=l;k<=mid;k++)
       {
        b[i]=arr[k];
        i++;
       }
   }
 for(k=low;k<=high;k++)
    {
     arr[k]=b[k];
    }
}

void partition(int arr[],int low,int high)
{
 int mid;
 if(low<high)
   {
    mid=(low+high)/2;
    partition(arr,low,mid);
    partition(arr,mid+1,high);
    sort(arr,low,mid,high);
   }
}
void putdata(int arr[],int n)
    {
    int i;
    for(i=0;i<n;i++)
        {
        printf("%d ",arr[i]);
        }
    }
int main()
{
long long arr[100000],a[100000],b[100000],i,x,y,n,sum=0;
scanf("%ld",&n);
scanf("%ld",&d);
scanf("%ld",&x);
scanf("%ld",&y);
for(i=0;i<n;i++)
	{
	scanf("%ld",&n);
	scanf("%ld",&n);
	arr[i]=a[i]*x+b[i]*y;
	}
partition(arr,0,n-1);
for(i=0;i<n;i++)
	{
	sum+=arr[i];
	if(arr[i]>d){printf("%ld",i-1);break;}
	}
return 0;
}