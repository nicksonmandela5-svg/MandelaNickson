
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()
{
    // Fixed point coordinates
    double x = 10.0;
    double y = 20.0;

    // Fixed buffer sizes in kilometres
    double buffers[] = {1.0, 2.0, 5.0};

    // Number of buffer sizes
    int numberOfBuffers = 3;

    // Value of pi
    const double PI = 3.141592653589793;

    cout << "========================================" << endl;
    cout << "        POINT BUFFER PROGRAM" << endl;
    cout << "========================================" << endl;

    // Display the point
    cout << fixed << setprecision(2);
    cout << "Point coordinate: (" << x << ", " << y << ")" << endl;

    cout << "\nBuffer Results:" << endl;

    // Calculate each buffer
    for (int i = 0; i < numberOfBuffers; i++)
    {
        double radius = buffers[i];

        // Calculate buffer area
        double area = PI * radius * radius;

        cout << "\n----------------------------------------" << endl;
        cout << "Buffer " << i + 1 << endl;
        cout << "Centre point : (" << x << ", " << y << ")" << endl;
        cout << "Radius       : " << radius << " km" << endl;
        cout << "Area         : " << area << " km^2" << endl;
        cout << "----------------------------------------" << endl;
    }

    return 0;
}