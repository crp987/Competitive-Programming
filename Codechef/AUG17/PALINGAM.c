#include<string.h>
#include<stdio.h>
int main(){
int t,i,j,b[26],a[26];
char s[501],p[501],c;
 
scanf("%d",&t);
while(t--)
{
getchar();
scanf("%[^\n]",s);
getchar();
scanf("%[^\n]",p);
 
for(i=0;i<26;i++)
{
a[i]=0;
b[i]=0;
}
 
c=0;
 
if(strcmp(s,p)==0)
printf("B\n");
else
{
 
 
 
 
for(i=0;i<strlen(s);i++)
{
a[s[i]-97]++;
}
for(i=0;i<26;i++)
{
if(a[i]>1)
{
for(j=0;j<strlen(p);j++)
{
if(p[j]==(i+97))
{
c=1;
break;
}
}
if(c==1)
break;
else
{
c=2;
break;
}
}
 
}
 
if(c==1)
printf("B\n");
else if(c==2)
printf("A\n");
else if(c==0)
{
 
for(i=0;i<26;i++)
{
if(a[i]==1)
{
for(j=0;j<strlen(p);j++)
{
if(p[j]==(i+97))
{
c=3;
break;
}
}
if(c==3)
break;
}
}
 
if(c==3)
printf("B\n");
else
{
 
 
for(i=0;i<strlen(p);i++)
{
b[p[i]-97]++;
}
 
for(i=0;i<26;i++)
{
if(b[i]>1)
{
for(j=0;j<strlen(s);j++)
{
if(s[j]==(i+97))
{
c=4;
break;
}
}
if(c==4)
break;
else
{
c=5;
break;
}
}
}
 
if(c==4)
printf("A\n");
else if(c==5)
printf("B\n");
else
{
for(i=0;i<26;i++)
{
if(b[i]==1)
{
for(j=0;j<strlen(s);j++)
{
if(s[j]==(i+97))
{
c=6;
break;
}
}
if(c==6)
break;
}
}
if(c==6)
printf("A\n");
else
printf("B\n");
}
 
}
 
}
 
 
 
}
 
}
return 0;
}
