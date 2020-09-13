#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 50

void rotate(int a[], int n, int k)
{
	int i=0;

	for (; i < n; i++)
		printf("%d ", a[(i+n-k)%n]);
	for (i = n; a[i] != NULL; i++)
		printf("%d ", a[i]);
}

int main()
{

	int size, i;
	scanf("%d", &size);
	int array[SIZE];

	for (i = 0; i < size; )
		scanf("%d", &array[i++]);

	array[i] = NULL;
	int n, k;
	scanf("%d%d", &n, &k);

	rotate(array, n, k);
}
