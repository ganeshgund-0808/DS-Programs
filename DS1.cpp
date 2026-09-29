#include<iostream>
using namespace std;
int main()
{

  
   int arr[50],n,key;
   bool found = false;


   cout <<"Enter number of elements:";
   cin >>n;
 
   cout <<"Enter element:\n";
   for (int i= 0; i<n; i++)
   cin >>arr[i];
  
   cout << "Enter elments:";
   cin >> key;

   for (int i = 0; i < n; i++)

{
    if (arr[i] ==key)
{
        cout << "Element found at position "<< i + 1;
    
 
         found = true;
         break;
}
}
 
 
   if (!found)
       cout << "Element not found";
    
     return 0;
}
