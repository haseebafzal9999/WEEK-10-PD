#include<iostream>
using namespace std;
main(){
    int length;
    cout<<"Enter the length of the array: ";
    cin>>length;
    int arr[length];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0; i<length; i++)
    {
        cin>>arr[i];
    }
    bool result=false;
    int count=0;
    int max=0;
    for(int i=0; i<length; i++){
        if(arr[i]>max){
            count++;
        result  =true;
        }
    }
    if(result==false)
    count=-1;
        cout<<"Special value: "<<count;
}