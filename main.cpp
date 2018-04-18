#include <iostream>
using namespace std;
void swap (int &x, int &y);
void swap (int &x, int &y)
{
int temp;
temp = x;
x = y;
y=temp;
}
int main()
{
  //DO NOT CHANGE WITHIN THIS AREA...
  int red, blue, green;
  cout<<"Enter Red, Green, and Blue values: ";
  cin>>red>>green>>blue;
  //...END OF "DO NOT CHANGE" AREA
if (red < green)
{
swap (red, green);
}
if (red < blue)
{
swap (red, blue);
}
if (green < blue)
{
swap (green,blue);
}

  //DO NOT CHANGE WITHIN THIS AREA...
  cout<<"Rearranged....\n";
  cout<<"RGB: "<<red<<","<<green<<","<<blue<<endl;
  return 0;
  //...END OF "DO NOT CHANGE" AREA
}
