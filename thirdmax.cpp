#include <iostream>
using namespace std;
int main()
{
    int arr[6]={1,4,3,8,12,10};
    int l;
    int sl;
    int tl;
    l=arr[0];
    for(int i=0;i<6;i++)
    {
        if(arr[i]>l)
        {
           l=arr[i];
        }
    }
    cout<<"The largest number is : "<<l<<endl;
    //khtm;
    sl=arr[0];
    for(int i=0;i<6;i++)
    {
        if(arr[i]>sl&&arr[i]!=l)
        {
            sl=arr[i];

        }
    }
    cout<<"The second largest number is : "<<sl<<endl;
    //khtm;
    tl=arr[0];
    for(int i=0;i<6;i++)
    {
        if(arr[i]>tl&&arr[i]!=sl&&arr[i]!=l)
        {
            tl=arr[i];
        }
    }
    cout<<"The third largest element is :"<<tl<<endl;
    return 0;
}