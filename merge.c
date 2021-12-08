#include<stdio.h>
void main()
{
void readarr(int[],int);
void disparr(int[],int);
void merge(int[],int[],int[],int,int);
int s1[50],s2[50],s3[100],n,m;
printf("n.o of elements in first array[1-50]:");
scanf("%d",&n);
printf("enter elements in first array: ");
readarr(s1,n);
printf("n.o of elements in second array[1-50]:");
scanf("%d",&m);
printf("enter elements in second array: ");
readarr(s2,m);
merge(s1,s2,s3,n,m);
printf(" merged array=\n");
disparr(s3,n+m);
printf("\n");
}
                             //fun for reading an array
void readarr(int s[],int n)
{
int i;
 printf("enter n.o in non decreasing order:");
for(i=0;i<n;++i)
scanf("%d",&s[i]);
return;
}
                           //fun for displaying an array
void disparr(int s[],int n)
{
int i;
for(i=0;i<n;++i)
printf("%d  ",s[i]);
return;
}
                                                 //fun for merging array
void merge(int s1[],int s2[],int s3[],int n,int m)
{
int i=0,j=0,k=0;
                 //compare and copy element
while(i<n && j<m)
{
if(s1[i]<s2[j])

{s3[k]=s1[i];
i=i+1;
k=k+1;
}
else
{s3[k]=s2[j];
j=j+1;
k=k+1;
}
}
            //copy remaining from s1
while(i<n)
{
s3[k]=s1[i];
k=k+1;
i=i+1;
}
           //copy remaining from s2
while(j<m)
{
s3[k++]=s2[j++];
}
return;
}





                   





