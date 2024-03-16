#include <iostream>
using namespace std;
int main()
{
  int arr[5] , i , n , item , j;
  cout<<"Enter array elements : \n";

  for(int i=0;i<5;i++)
  {
    cin >> arr[i];
  }

    cout<<"\nEnter Element For Search - ";
    cin>>item;

  while(j < arr[i])
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
