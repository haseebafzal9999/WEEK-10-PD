#include<iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter the number of Saturday: " ;
    cin>>size;
    int arr[size];
    for(int i=0; i<size ; i++)
    {
        cout<<"Enter miles run for Saturday: "<<i+1;
        cin>>arr[i];
    }
    int count=0;
    for(int j=1; j<size ; j++ )
    {
        if(arr[j]>arr[j-1])
        {
            count++;
        }
    }
    
    cout<<"Total progress days: "<<count;
}