#include <iostream>
using namespace std;

int main ()

{
int num [5];
int*x;
for (int y=0; y<5; y++)
{
cout << "Input integer: ";
cin >> num [y];
} 
cout <<endl;
for (int y=0; y<5;y++)

{
*x = num[y];
cout << "The Integer you input is : "<<*x;
cout <<endl;
x++;

}


}
