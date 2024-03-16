// Bubble sort
/*
#include<iostream>
using namespace std;

class A
{
public:

    int a[10] , i , j , temp , n;

    void getdata();
    void sort();
    void disp();


};

void A :: getdata()
{
    cout<<"Enter how many elements - ";
    cin>>n;



    for(i=1; i<=n; i++)
    {
        cout<<"Enter elem - ";
        cin>>a[i];
    }
}

void A :: sort()
{
    for(i=1; i<=n; i++)
    {
        for(j=i+1; j<=n; j++)
        {
            if(a[i] >= a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

void A :: disp()
{
      cout<<"sorted elements are :";

    for(i=1; i<=n; i++)
    {
        cout<<a[i]<<"\t";
    }
}

int main()
{
    A obj;

    obj.getdata();
    obj.sort();
    obj.disp();

}*/



// selection sort (one)
/*
#include<iostream>
using namespace std;

void swapping(int &a, int &b) {         //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}

void selectionSort(int *array, int size) {
   int i, j, imin;
   for(i = 0; i<size-1; i++) {
      imin = i;   //get index of minimum data
      for(j = i+1; j<size; j++)
         if(array[j] < array[imin])
            imin = j;
         //placing in correct position
         swap(array[i], array[imin]);
   }
}
int main() {

   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];           //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }

   //selectionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}
*/


// selection sort (two)

#include<iostream>
using namespace std;

int main()
{

    int a[10] , n;
    int i , j , s , index , temp , min;

    cout<<"Enter a range - ";
    cin>>n;

    cout<<"\nEnter "<<n<<" numbers - "<<"\n\n";

    for(i=0; i<n; i++)
    {
        cout<<"\nEnter Elements - ";
        cin>>a[i];
    }

    for(i=0; i<n-1; i++)
    {
        min = a[i];
        index  = i;

        for(j=i+1; j<n; j++)
        {
            if(min > a[j])
            {
                min = a[j];
                index = j;
            }
        }

        temp = a[i];
        a[i] = a[index];
        a[index] = temp;
    }

    cout<<"\n\nSelection Sotred - ";
    for(i=0; i<n; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\n\n\n  ";
}
