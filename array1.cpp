#include <iostream>
using namespace std;
int main()
{
    int largest;
    int arr[6]={1,2,4,5,9,7};
   
     largest=arr[0];
    for(int i=0;i<5;i++)
    {
        if(arr[i]>largest)
        {
           largest=arr[i];
        }
    } 
    cout<<largest;
}