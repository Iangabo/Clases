#include <iostream>
#include "Point.h"
#include "PointArray.h"

using namespace std;

int main()
{
    Point p(1, 3);
    Point q(3, 3);
    Point r(3, 1);
    Point arr[] = {p, q , r};
    int size = sizeof(arr)/sizeof(arr[0]);

    PointArray pa2(arr, size);

    PointArray pa = pa2;

    //cout << pa.getSize() << endl;
    //pa.push_back(p);
    //pa.print();
    pa.insert(2,q);
    //pa.print();
    pa.remove(2);
    pa.print();
    return 0;
}
