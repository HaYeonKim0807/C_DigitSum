#include <stdio.h>
#pragma warning(disable:4996) 

int digit_sum(int);

int main()
{
	int arr[100];
	int n, i, j, _max, in = 0, max = 0;
	scanf("%d", &n);

	for (i = 0; i < n; i++)
		scanf("%d", &arr[i]);

	for (j = 0; j < n; j++)
	{
		_max = digit_sum(arr[j]);

		if (max < _max)
		{
			max = _max;
			in = j;
		}
		else if (max == _max)
		{
			max = (max > arr[j]) ? max : _max;
			in = j;
		}
	}
	printf("%d", arr[in]);
		return 0;
}

int digit_sum(int x)
{
	int sum = 0;
	while (1)
	{
		sum += x % 10;
		x /= 10;
		if (x < 10)
		{
			sum += x;
			return sum;
		}

	}
}