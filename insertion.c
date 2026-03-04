#include <stdio.h>
int main (){
	int a[10], i, pos, elem, n=8;
	printf("Enter the elements of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the pos:");
		scanf("%d",&pos);
		printf("Enter the elem:");
		scanf("%d",&elem);
	for(i=n; i>pos-1; i--)
	{
	    a[i]=a[i-1];
	}
	a[pos-1]=elem;
	n++;
	printf("Array after insertion:");
	for(i=0; i<10 ; i++)
	{
	    printf("%d ", a[i]);
	}
	return 0;
}
