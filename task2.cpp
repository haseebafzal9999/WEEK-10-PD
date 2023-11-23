#include <iostream>
#include <string>
using namespace std;
main()
{
    int size;
    char letter;
    cout << "Enter how many words you want to Enter: ";
    cin >> size;
    string array[size];
    for (int i = 0; i < size; i++)
    {
        cout << "Enter word " << i + 1 << ":";
        cin >> array[i];
    }
    cout << "Enter the letter you want to count: ";
    cin >> letter;
    int count = 0;
    for (int j = 0; j < size; j++)
    {
        
        for (int k = 0; k < array[j].length(); k++) 
        {
            if (array[j][k] == letter)
            {
                count++;
            }
        }
    }
   
    cout << letter << " shows up " << count << " times in the data.";
    
}