#include <iostream>
using namespace std;

bool isRepeatingCycle(int cycleLength);

int arr[500];
int length;

int main()
{
    cout << "Enter the length of the array: ";
    cin >> length;
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < length; i++)
    {
        cin >> arr[i];
    }
    int cycleLength;
    cout << "Enter the cycle length: ";
    cin >> cycleLength;

    if (isRepeatingCycle(cycleLength))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
    return 0;
}

bool isRepeatingCycle(int cycleLength)
{
    bool result;
    if (cycleLength > length)
    {
        result=true;
    }
    else
    {
        for (int i = 0; i < length; i++)
        {
            if (arr[i] != arr[i % cycleLength])
            {
                result=false;
                break;
            }
            else
            {
                result=true;
            }
        }
    }
    return result;
}
