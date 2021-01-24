#include <iostream>

using namespace std;

struct points
{
    int x;
    int y;
};

struct rectangle
{
    struct points upper_left;
    struct points lower_right;
};

int main()
{
    struct rectangle r1;
    cout<<"Enter upper left point of the rectangle: ";
    cin>>r1.upper_left.x >> r1.upper_left.y;
    cout<<"Enter lower right points of the rectangle: ";
    cin>>r1.lower_right.x>>r1.lower_right .y;
    cout<<"Area of thr rectangle is: "<<(r1.lower_right.x-r1.upper_left.x)*(r1.upper_left.y-r1.lower_right.y);
}
