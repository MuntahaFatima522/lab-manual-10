#include <iostream>
using namespace std;

void reverseString(string TotalWords[], int length);

int main()
{
    string line;
    cout << "Enter string: ";
    getline(cin, line);
    int space = 0;
    for (int i = 0; line[i] != '\0'; i++)
    {
        if (line[i] == ' ')
        {
            space++;
        }
    }
    int length = space + 1;
    string TotalWords[length];
    int index = 0;
    string separateWord = "";

    for (int i = 0; line[i] != '\0'; i++)
    {
        if (line[i] == ' ')
        {
            TotalWords[index] = separateWord;
            index++;
            separateWord = "";
        }
        else
        {
            separateWord = separateWord + line[i];
        }
    }
    TotalWords[index] = separateWord;
    reverseString(TotalWords, length);
    return 0;
}

void reverseString(string TotalWords[], int length)
{
    int start = 0;
    int end = length - 1;

    while (start < end)
    {
        string temp = TotalWords[start];
        TotalWords[start] = TotalWords[end];
        TotalWords[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < length; i++)
    {
        cout << TotalWords[i] << " ";
    }
}