#include <iostream>


using namespace std;


int searchList(const int list[], int numElems, int value);
int binarySearch(const int array[], int numElems, int value);

int main ()
{

	const int arraySize = 12;
	int a[arraySize] = {0,3,5,7,10,16,18,21,29,34,56,98};
	int number;
	int count = 0;

	cout << "Please pick a number between 1 and 12 to search the index for." << endl;
	cin >> number;

	//Linear Search

	int index = searchList(a, arraySize, number);
	if(index !=-1)
	{
		cout << "The number's element found by linear search is " << index << endl;
		count++;
		cout << "The amount of comparison's used to find the element\nWith linear search is " << count << endl;
	}
	else
		cout << "That is not a valid number within the linear search index" << endl;

	//Binary Search
	index = binarySearch(a, arraySize, number);
	if(index != -1)
	{
		cout << "The number's element found by binary search is " << index << endl;
		count++;
		cout << "The amount of comparison's used to find the element\nWith binary search is " << count << endl;
	}
	else
		cout << "That is not a valid number within the binary search index." << endl;





	return 0;



}

//Linear Search Function
	int searchList(const int list[], int numElems, int value)
	{
		int index = 0;
		int position = -1;
		bool found = false;

		while (index < numElems && !found)
		{
			if (list[index] == value)
			{
				found = true;
				position = index;
			}
			index++;
		}
		return position;
	}

//Binary Search Function
	int binarySearch(const int array[], int size, int value)
	{
		int first = 0,
			last = size - 1,
			middle,
			position = -1;
		bool found = false;

		while (!found && first <= last)
		{
			middle = (first + last) / 2;
			if (array[middle] == value)
			{
				found = true;
				position = middle;
			}
			else if (array[middle] > value)
				last = middle - 1;
			else
				first = middle + 1;
		}
		return position;
	}
