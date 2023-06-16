void main()
{
int n;
int i,j,k;
printf("Enter");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
for(j=1;j<=n;j++)
{
if(j<=i)
printf("%d",j);
else
printf(" ");
}
for(j=n;j>=1;j--)
{
if(j<=i)
printf("%d",j);
else
printf(" ");
}
printf("\n");
}
}
