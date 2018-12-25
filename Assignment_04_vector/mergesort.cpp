
#include <iostream>
#include<vector>

using namespace std;
void Merger(vector<int>& newMyVector, int lo, int  mi, int hi)
{
    vector<int> temp[hi-lo+1];
    int i = lo, j = mi + 1;//i is for left-hand,j is for right-hand
    int k = 0;//k is for the temporary
    while(i <= mi && j <=hi)
    {
        if(newMyVector[i] <= newMyVector[j])
            temp[k++] = newMyVector[i++];
        else
            temp[k++] = newMyVector[j++];
    }
    //rest elements of left-half
    while(i <= mi)
        temp[k++] = newMyVector[i++];
    //rest elements of right-half
    while(j <= hi)
        temp[k++] = newMyVector[j++];
    //copy the mergered temporary array to the original array
    for(k = 0, i = lo; i <= hi; ++i, ++k)
        newMyVector[i] = temp[k];

    delete []temp;


}

void MergeSortHelper(vector<int>& newMyVector, int lo, int hi)
{
    int mid;
    int length=hi;
    if(lo < hi)
    {
        mid = (lo + hi)  / 2;
        MergeSortHelper(newMyVector, lo, mid);
        MergeSortHelper(newMyVector, mid+1, hi);
        Merger(newMyVector, lo, mid, hi);

    }
     for(int k=0;k<length;k++) cout<<newMyVector[k]<<" ";
        cout<<endl;
}

void MergeSorter(vector<int>& newMyVector)
{
    MergeSortHelper(newMyVector, 0, newMyVector.size()-1);
    for(int k=0;k<newMyVector.size();k++) cout<<newMyVector[k]<<" ";
        cout<<endl;
}

main()
{
    vector<int>myVector{ 10,33,27,14,35,19,48,44 };
    MergeSort(newMyVector);

}
