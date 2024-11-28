#include <iostream>
using namespace std;

void Peak(int arr[], int size);

int main()
{
    int size;
    cout << "How many elements you want to enter: ";
    cin >> size;
    int arr[size];
    cout << "Enter the numbers one per line: " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    Peak(arr,size);
    return 0;
}

void Peak(int arr[], int size)
{
    int output[100];
    int count = 0;
    for (int i = 0; i < size; i++)
    {   
        if(i==0 || i==size-1)
        {
            continue;
        }
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1])
        {
            output[count] = arr[i];
            count++;
        }
    }
    if (count == 0)
    {
        cout << "No peak found..";
    }
    else
    {
        cout << "Peak values: ";
        for (int i = 0; i < count; i++)
        {
            cout << output[i] << " , ";
        }
    }
}