#include <iostream>

#include<vector>


using namespace std;
void InsertionSorter(vector<int>& newMyVector);

int main()
{

	vector<int>myVector{ 10,33,27,14,35,19,48,44 };
	InsertionSorter(myVector);
}

void InsertionSorter(vector<int>& newMyVector)
{
	if (newMyVector.size() > 1)
	{
		int size = newMyVector.size();
		for (int i  = 1; i < size; ++i)
		{
			int j = i - 1;
			int key = newMyVector[i];
			while (j >= 0 && newMyVector[j] > key)
			{
				newMyVector[j + 1] = newMyVector[j];
				--j;
			}
			newMyVector[j + 1] = key;
			for (int k = 0;k < size;k++) cout << newMyVector[k] << " ";
			cout << endl;
		}
	}
}

