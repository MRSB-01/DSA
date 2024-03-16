#include<iostream>
using namespace std;

int arr[20] , i , j , n , temp;

class A
{
public:

    void sort();
    void getdata();
    void disp();
};

void A :: getdata()
{
    cout<<"Enter How many Elements - ";
    cin>>n;
    cout<<"Enter Elements - \n";

    for(i=1;i<=n;i++)
    {
        cin>>arr[i];
    }
}

void A :: sort()
{
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<=n;j++)
        {
            if(arr[i] > arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

void A :: disp()
{
    cout<<"\nSorted elements using Bubble  sort - \n";

    for(i=1;i<=n;i++)
    {
        cout<<arr[i]<<ends;
    }
}

int main()
{
   A obj;

   obj.getdata();
   obj.sort();
   obj.disp();
}
