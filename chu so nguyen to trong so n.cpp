#include<stdio.h>
#include<math.h>
int ktnt(int x)
{
	if (x==1) return 0;
	for (int i=2;i<=sqrt(x);i++)
	  if(x%i==0)
	    return 0;
	return 1;   
}
int main()
{
	int n,k;
	printf("nhap so nguyen duong n: ");
	scanf("%d",&n);
	printf("\ncac chu so nguyen to co trong so do la:   ");
	while(n>0)
	{
		k=n%10;
		n=n/10;
		if (ktnt(k)==1)
			printf("%d\t",k);
	}
}
