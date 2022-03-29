//Solve problems (1) Chap 2, page 141, problem 13
#include <bits/stdc++.h>
using namespace std;
 
// function to find the slope of a straight line
float slope(float x1, float y1, float x2, float y2)
{
    return (y2 - y1) / (x2 - x1);
}
 
// driver code to check the above function
int main()
{
    cout<<"ener the first pair of the point";

  double x1 , y1 ;
cin>>x1>>y1;

cout<<"ener the 2nd pair of the point";
double x2 , y2 ;
cin>>x2>>y2;

    cout << "Slope is: "
         << slope(x1, y1, x2, y2);
    return 0;
}