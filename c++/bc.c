#include<stdio.h>
#include<math.h>
int main()
{
int m, n, i, j, flag=0;
int a[10][10];
float sum=0, norm;
printf("Enter the size of matrix");
scanf("%d%d", &m, &n);
printf("Enter the elements of matrix");
for(i=0; i<m; i++)
for(j=0; j<n; j++)
scanf("%d", &a[i][j]);
for(i=0; i<m; i++)
for(j=0; j<n; j++)
sum = sum + a[i][j]*a[i][j];
norm = sqrt(sum);
printf("The normal of matrix is %f\n", norm);
for(i=0; i<m; i++)
for(j=0; j<n; j++)
if(a[i][j]!=a[j][i])
flag=1;
if(flag==0)
printf("The matrix is symmetric\n");
else
printf("The matrix is not symmetric\n");
return 0;}
