#include <iostream>
using namespace std;
int CalculateTotalVolume(int numBoxes, int boxes[]);
int main()
{
    int numBoxes;
    cout << "No. of Boxes: ";
    cin >> numBoxes;
    int boxes[numBoxes * 3];
    cout << "Input:" << endl;
    for (int i = 0; i < numBoxes * 3; i++)
    {
        cin >> boxes[i];
    }
        int result = CalculateTotalVolume(numBoxes, boxes);
        cout << "Output: " << result << endl;
        return 0;
}
int CalculateTotalVolume(int numBoxes, int boxes[])
{
    int totalVolume = 0;

    for (int j = 0; j < numBoxes * 3; j=j+3)
    {
        int length = boxes[j];
        int width = boxes[j + 1];
        int height = boxes[j + 2];
        int boxVolume = length * width * height;
        totalVolume= totalVolume + boxVolume;
    }
    return totalVolume;
}


