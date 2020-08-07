// Heap Sort

//   2
//  6 9
// 1 7 3 4
//8 5

#include <stdio.h>

int number = 9;
int heap[9] = {2, 6, 9, 1, 7, 3, 4, 8, 5};

void print()
{
	for (int i = 0; i < 9; i++)
		printf("%d ", heap[i]);
	printf("\n");
}

int main(void)
{
	print();

	// Max-Heap
	for (int i = 1; i < number; i++)
	{
		int c = i;
		do
		{
			int root = (c - 1) / 2;
			if (heap[root] < heap[c])
			{
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			c = root;
		} while (c != 0);
	}

	// Heap Sort & Heapify
	for (int i = number - 1; i >= 0; i--)
	{
		int temp = heap[0];
		heap[0] = heap[i];
		heap[i] = temp;

		int root = 0;
		int c = 1;
		do
		{
			c = 2 * root + 1;
			if (heap[c] < heap[c + 1] && c < i - 1)
			{
				c++;
			}

			if (heap[root] < heap[c] && c < i)
			{
				int temp = heap[root];
				heap[root] = heap[c];
				heap[c] = temp;
			}
			root = c;
		} while (c < i);
	}

	print();

	return 0;
}