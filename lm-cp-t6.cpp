#include <iostream>
using namespace std;

void arrangeInAscending(int arr[], int num);

int main()
{
    int arr[10];
    cout << "Enter the weights of 10 packages: " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }
    arrangeInAscending(arr, 10);
    return 0;
}

void arrangeInAscending(int arr[], int num)
{
    int temp;
    for (int i = num - 1; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < num; i++)
    {
        cout << arr[i] << " , ";
    }
}