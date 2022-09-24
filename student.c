#include "student.h"

int squareOfSmallest(int array[], int length)
{
	int min = array[0]; // get first element
	for (int i = 0; i < length; i++)
	{
		if (array[i] < min) // get min when value is smaller
			min = array[i];
	}
	return min * min;
}

int findMin(int *nums, int numsSize)
{
	int min = nums[0];
	for (int i = 0; i < numsSize; i++)
	{
		if (nums[i] < min) // get min when value is smaller
			min = nums[i];
	}
	return min;
}

bool isPalindrome(char str[])
{
	int k = 0;
	int n = strlen(str); // get str length
	for (int i = n - 1; i > 1; i--)
	{
		if (str[i] != str[k]) // check if from head and tail equal
			return false;
		k++;
	}
	return true;
}

int freqOfChar(char str[], char key)
{
	int c = 0;
	int n = strlen(str); // get str length
	for (int i = 0; i < n; i++)
		if (str[i] == key) // count up if there is the char
			c++;
	return c;
}

void sort(int array[], int length)
{
	int temp = 0;
	for (int i = 0; i < length; i++)
		for (int j = i + 1; j < length; j++) // compare the element with all elements
		{
			if (array[i] > array[j])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp; // swap if the element is larger
			}
		}
}

int *twoSum(int *nums, int numsSize, int target)
{
	int *sum = malloc(sizeof(sum)); // assign mem
	for (int i = 0; i < numsSize - 1; i++)
		for (int j = i + 1; j < numsSize; j++) // match the element with all elements
		{
			if (nums[i] + nums[j] == target)
			{
				sum[0] = nums[i];
				sum[1] = nums[j];
				return sum;
			}
		}
	return NULL; // if there is no twosum
}

int *decryptPointer(int array[], int length, int *key[])
{
	int *addrarr = malloc(sizeof(addrarr)); // assign mem
	for (int i = 0; i < length; i++)
	{
		addrarr[i] = array[i] + *key[i]; // add addr and value
	}
	return addrarr;
}
