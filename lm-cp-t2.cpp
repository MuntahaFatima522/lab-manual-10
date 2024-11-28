#include<iostream>
using namespace std;

int count(string arr[],int size,char letter);

int main()
{
    int words;
    char letter;
    cout<<"Enter how many words you want to enter: ";
    cin>>words;
    string statement[words];
    for(int i=0;i<words;i++)
    {
        cout<<"Enter word "<<i+1<<" : ";
        cin>>statement[i];
    }
    cout<<"Enter the letter you want to count in: ";
    cin>>letter;
    int result;
    result=count(statement,words,letter);
    cout<<letter<<" shows up "<<result<<" times in the data. "<<endl;
    return 0;
}

int count(string arr[],int size,char letter)
{
    int result=0;
    for(int i=0;i<size;i++)
    {
        string word=arr[i];
        for(int j=0;word[j]!='\0';j++)
        {
            if(word[j]==letter)
            {
                result++;
            }
        }
    }
    return result;
}