#include <iostream>
#include<vector>
using namespace std;
void Swap(int &a, int &b);
void SelectionSorter(vector<int>& newMyVector);


int main()
{
    vector<int>myVector;
    SelectionSorter(myVector);

}

 void Swap(int &a, int &b)
{
    int k = a;
    a = b;
    b = k;
}

void SelectionSorter(vector<int>& newMyVector)
{
    for(int i = 0; i < newMyVector.size() - 1; ++i)
    {
        int min = i;
        for(int j = i+1; j <  newMyVector.size(); ++j)
            if(newMyVector[j] < newMyVector[min])
                min = j;
        Swap(newMyVector[min], newMyVector[i]);
        for(int k=0;k< newMyVector.size();k++) cout<<newMyVector[k]<<" ";
    cout<<endl;
    }
}


