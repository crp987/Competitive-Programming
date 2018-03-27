#include<stdlib.h>
#include<stdio.h>
int main(){
long int j,c,t,n,d,i;
long long s,a[100001],b[100001],diff,df,sum;
scanf("%ld",&t);
  while(t--)
  {
   scanf("%ld %ld",&n,&d);
   for(i=0;i<n;i++)
   scanf("%lld",&a[i]);

   sum=0;
   for(i=0;i<n;i++)
   sum+=a[i];
  diff=0;
  if(sum%n==0)
  {
 
   for(j=0;j<d;j++)
    {
    s=0;
    c=0;
    for(i=j;i<n;i=i+d)
    {
    s=s+a[i];
    c++;
    }
    for(i=j;i<n;i=i+d)
    b[i]=s/c;
    }

 
    c=1;
  for(i=0;i<(n-1);i++)
  {
    if(b[i]!=b[i+1])
    {
    c=0;
    break;
    }
  }
   if(c==0)
   printf("-1\n");
   else if(c==1)
  {
  for(i=0,j=d;(i+d)<n;i++,j++)
  {
  df=a[i];
  diff+=abs(b[i]-a[i]);
  a[i]=b[i];
  a[j]=a[j]-(b[i]-df);
  }
    printf("%lld\n",diff);
  }
 
  }
  else
  printf("-1\n");
  }
return 0;
}
