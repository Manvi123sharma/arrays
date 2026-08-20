#include <iostream>
using namespace std;
int main()
{
    int arr[6]={1,7,3,10,11,8};
    int largest;
    int slargest;
    largest=arr[0];
    for(int i=0;i<6;i++)
    {
        if(arr[i]>largest)
        {
            largest=arr[i];
        }
    }
    cout<<"the largest number is "<<largest<<endl;;
    slargest=arr[0];
    for(int i=0;i<6;i++)
    {
    if(arr[i]>slargest&&arr[i]!=largest)
    {
        slargest=arr[i];
    }
}
cout<<"The second learget is "<<slargest<<endl;
return 0;
}