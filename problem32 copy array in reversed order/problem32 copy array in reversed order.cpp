#include <iostream>
#include <cstdlib>
using namespace std;


int randomNumber(int From, int To)
{
	return rand() % (To - From + 1) + From;
}

void readArray(int arr[100], int &length)
{
	cout << "enter the length of the array?\n";
	cin >> length;

	for (int i = 0; i < length; i++)
	{
		arr[i] = randomNumber(1, 100);
	}
}

void printArray(int arr[100], int length)
{
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << " ";
	}
	cout << "\n";
}

void copyArrayInReversedOrder(int arr1[100], int arr2[100], int length)
{
	/*for (int i = 0; i < length; i++)
	{
		arr2[i] = arr1[(length - 1)-i];
	}*/
	int x = 0;
	for (int i = length-1; i >= 0; i--)
	{
		arr2[x] = arr1[i];
		x++;
	}
}

int main()
{
	srand((unsigned)time(NULL));

	int arr1[100];int arr2[100]; int length;

	readArray(arr1, length);
	copyArrayInReversedOrder(arr1, arr2, length);

	cout << "Original Array "; printArray(arr1, length);
	cout << "Reversed Array "; printArray(arr2, length);


}