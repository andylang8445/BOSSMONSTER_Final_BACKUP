#include<stdio.h>
int main()
{
	int arr[3];
	for (int i = 0; i < 3; i++)
		scanf("%d", &arr[i]);
	for (int i = 0; i < 2; i++)
	{
		for (int j = i + 1; j < 3; j++)
		{
			if (arr[i] > arr[j])
			{
				int tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	printf("%d", arr[1]);
	return 0;
}