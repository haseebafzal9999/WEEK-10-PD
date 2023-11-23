#include<iostream>
using namespace std;
int Fullrotation(string array[], int size);
main()
{
    int size;
    cout<<"Enter the length of the array: ";
    cin>>size;
    string array[size];
    cout<<"Enter the elements of the array(left or right): "<<endl;
    for(int i=0; i<size; i++)
    {
    cin>>array[i];
    }
    cout<<"Number of full rotations: "<<Fullrotation(array , size);
}
int Fullrotation(string array[], int size)
{
    int count1=0;
    int count2=0;
    int result=0;
    for(int j=0; j<size ;j++)
    {
        if(array[j]=="right")
        {
         count1=count1+1;
        }
        if(array[j] == "left")
        {
            count2=count2+1;
        }
    }
    count1=count1*90;
    count2=count2*90;
    if(count1>count2)
    {
        result=count1-count2;
    }
    else
    {
        result=count2-count1;
    }
    if(result<360)
    {
        return 0;
    }
    else{
        return result/360;
    }

}

