#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {10,20,30,40,50} , item , i;
    cout<<"\nEnter Element For Search - ";
    cin>>item;

    while(i < 5)
    {
        if(arr[i] == item)
        {
            cout<<"\nItem Found \n\n";
            break;
            //i++;
        }
            i++;

    }

        cout<<"\nItem Not Found \n\n";

}
