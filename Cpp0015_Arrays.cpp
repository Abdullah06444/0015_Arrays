#include <iostream>
#define SIZE 50

using namespace std;

void rotate(int a[], int n, int k)
{
	int i = 0;

	for (; i < n; i++)
		cout << a[(i + n - k) % n] << " ";
	for (i = n; a[i] != NULL; i++)
		cout << a[i] << " ";
}

int main()
{

	int size, i;
	cin >> size;
	int array[SIZE];

	for (i = 0; i < size; )
		cin >> array[i++];

	array[i] = NULL;
	int n, k;
	cin >> n >> k;

	rotate(array, n, k);
}