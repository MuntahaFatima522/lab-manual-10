#include <iostream>
using namespace std;

int calculateVolume(int arr[], int size);

int main()
{
    int boxes;
    cout << "Enter the number of boxes: ";
    cin >> boxes;
    int size = 3 * boxes;
    int arr[size];
    cout << "Enter the length,width,height of " << boxes << " boxes consecutively : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int result = calculateVolume(arr, size);
    cout << "Total Volume: " << result << endl;
    return 0;
}

int calculateVolume(int arr[], int size)
{
    int sum = 0;
    int j=0;
    while ( j < size)
    {
        int product = 1;
        for(int i=0;i<3;i++)
        {
            product*=arr[j];
            j++;
        }
        sum+=product;
    }
    return sum;
}