#include <iostream>

using namespace std;

  int n;              // declaring integer variable to read points

int readAbsoluteData(double data[])  // function to read points and absolute data
{

    cout<<"Enter points:";
    cin>>n;           // reading number of points
    cout<<"Enter Absolute values"<<endl;
    for(int i=0;i<n;i++)   // for loop to read absolute values
    {
        cin>>data[i];
    }
}

void sort(double data[])
{
    int i, j;
    double key;
   for (i = 1; i < n; i++)
   {
       key = data[i];
       j = i-1;                    // using insertion sort to sort the values in array

       /* Move elements of data[0..i-1], that are
          greater than key, to one position ahead
          of their current position */
       while (j >= 0 && data[j] > key)
       {
           data[j+1] = data[j];
           j = j-1;
       }
       data[j+1] = key;
   }

}

double bigsum(double data[],int n)
{
    double sum = 0;
    for(int i=0;i<n;i++)           // using insertion sort to sort the values in array
    {
        if(data[i] > 10 ) // checking the condition values greater than 10
        {
         sum += data[i];
        }

    }
    return sum;
}



int main()
{
   double data[100];
   readAbsoluteData(data); // calling readAbsolute data function
   sort(data);              // calling sort function to sort the values
   cout<<"the values after sorting are"<<endl;
   for(int i=0;i<n;i++)
   {
       cout<<data[i]<<" ";      // displaying the values in array data after sorted
   }
   cout<<endl;
  cout<<"sum of values greater than 10 : "<< bigsum(data,n); // displaying the sum  of values greater rhan 10

    return 0;
}
