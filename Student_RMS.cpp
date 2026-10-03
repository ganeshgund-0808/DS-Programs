#include<iostream>
using namespace std;
int main()
{
 int roll[5];
 
  cout << "Enter 5 Student Roll Numbers:\n";
 
  for (int i = 0; i < 5; i++) 
 {
  cin >> roll[i];
 }
 
 cout << "\nStudent Roll Number :\n";
  for (int i = 0; i < 5; i++)
 {
 cout << roll [i] << endl;
 }
 return 0;
}
