#include<iostream>
using namespace std;
main()
{
    int a[100],lr=0,mid,f=0,item,n,i;

    cout<<"Enter Size of Array :";
    cin>>n;

    cout<<"Enter Elements :"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"["<<i<<"]=";
        cin>>a[i];
    }

    cout<<"enter element for search :";
    cin>>item;

    int up=n;
    while(lr < up)
    {
        mid = (lr + up) / 2;

        if(a[mid] == item)
        {
            f=1;
            break;
        }
        if(a[mid] <= item)
            lr = mid + 1;

        else
            up = mid - 1;
    }
    if(f == 1)
        cout<<item<<" item found at position  "<<(mid + 1);
    else
        cout<<"item not found";
}
