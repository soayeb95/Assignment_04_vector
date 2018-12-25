#include <iostream>
#include<vector>

using namespace std;

void fillVector(vector<int>&);
void printVector(const vector<int>&);
void BubbleSort(vector<int>&);

int main()
{
    vector<int>myVector;
    fillVector(myVector);
    cout<<"Before Vector Sorting"<<endl;
    printVector(myVector);
    BubbleSort(myVector);
    cout<<"After Vector Sorting"<<endl;
    printVector(myVector);


    return 0;
}
void fillVector(vector<int>& newMyVector)
{
    cout<<"INPUT THE VALUES HERE AND PRESS -1 TO STOP"<<endl;
    int input;
    cin>>input;

    while(input!=-1)
    {
        newMyVector.push_back(input);
        cin>>input;
    }
}

void printVector(const vector<int>& newMyVector)
{

    for(unsigned int i =0;i<newMyVector.size();i++)
    {
        cout<<newMyVector[i]<<endl;
    }
}
void BubbleSort(vector<int>& newMyVector)
{
    int flag , k , i, temp;
 for( k=1; k<newMyVector.size() ; k++)
 {
  flag = 0;

   for( i=0 ; i<newMyVector.size()-k ; i++)
   {
    if(newMyVector[i] >newMyVector[i+1])
    {
    temp = newMyVector[i];
    newMyVector[i] = newMyVector[i+1];
    newMyVector[i+1] = temp;

    flag = 1;
    }
   }
  if(flag == 0 )
  break;
  }
}
