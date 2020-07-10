// ch_5.5.3_try_this.cpp
//
// Not sure exactly what prompt is asking
// Program not working properly for invalid inputs

#include "../std_lib_facilities.h"

constexpr int frame_width = 2;

int area(int length, int width)
{
    if (length <= 0 || width <= 0) error("non-positive area() argument");
    return length * width;
}

int framed_area(int x, int y)
{
    if (x - frame_width <= 0 || y - frame_width <= 0)
        error("non-positive area() argument");
    return area(x - frame_width, y - frame_width);
}

int main()
{
    int x, y, z = {0};
    cout << "Please provide three integers\n";
    cin >> x >> y >> z;
    int area1 = area(x,y);
    int area2 = framed_area(frame_width + 1,z);
    int area3 = framed_area(y,z);
    double ratio = double(area1)/area3;
    cout << "area of x*y: " << area1 << "; framed area of 1*z: " << area2 << "; framed area of y*z: " << area3 << "; ratio of area1/area3: " << ratio << "\n";
}
