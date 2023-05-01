#include "Rectangle.h"
#include <iostream>
#include <iomanip>
using namespace std;
Rectangle* sortBySelection(Rectangle rectIn[], int size) {
    Rectangle* rectOut = new Rectangle[size];
    for (int i = 0; i < size; i++) {
        int place = 0;
        for (int j = 0; j < size; j++) {
            if (rectIn[i].getArea() > rectIn[j].getArea()) {
                place++;
            }
        }
        rectOut[place] = rectIn[i];
    }
    return rectOut;
}
#include <iostream>
#include <iomanip>
#include "Rectangle.h"

using namespace std;

int main()
{
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    Rectangle r1(a, b);
    Rectangle r2(c, d);

    cout << fixed << setprecision(2) << "SwapByReference:" << r1.getArea() << " " << r2.getArea() << " to ";
    r1.swapByReference(&r2);
    cout << r1.getArea() << " " << r2.getArea() << endl;

    cout << fixed << setprecision(2) << "SwapByPointer:" << r1.getArea() << " " << r2.getArea() << " to ";
    r1.swapByPointer(r2);
    cout << r1.getArea() << " " << r2.getArea() << endl;

}