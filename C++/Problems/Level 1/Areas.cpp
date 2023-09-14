#include <iostream>
#include <iomanip>
#include "math.h"
#include <numbers>

#define M_PI 3.14159265358979323846

using namespace std;

double rectangle_area(int a, int b)
{
    return (double)a * b;
}

double rectangle_area_through_diagonal(int a, int d)
{
    return (double)a * sqrt(d * d - a * a);
}

double triangle_area(int a, int h)
{
    return (double)0.5 * a * h;
}

double circle_area(int r)
{
    return M_PI * r * r;
}

double circle_area_through_diameter(int d)
{
    // return (M_PI * d * d) / 4;
    return circle_area(d / 2);
}

double circle_area_inside_square(int a)
{
    return (M_PI * a * a) / 4;
}

double circle_area_along_circumference(int l)
{
    return (l * l) / (4 * M_PI);
}

double circle_area_inside_triangle(int a, int b)
{
    return M_PI * (b * b / 4) * (2 * a - b) / (2 * a + b);
}

double circle_area_has_arbitrary_triangle(int a, int b, int c)
{
    double p = (a + b + c) / 2;
    double term = (a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c)));
    return M_PI * term * term;
}

int main()
{
    cout << fixed << setprecision(3) << circle_area_has_arbitrary_triangle(5, 6, 7);

    // cout << fixed << setprecision(3) << circle_area_inside_triangle(20, 10);

    // cout << fixed << setprecision(3) << circle_area_along_circumference(20);

    // cout << fixed << setprecision(2) << circle_area_inside_square(10);

    // cout << fixed << setprecision(2) << circle_area_through_diameter(10);

    // cout << fixed << setprecision(2) << circle_area(5);

    // cout << triangle_area(3, 3);

    // cout << rectangle_area_through_diagonal(5, 40);

    system("pause>0");
    return 0;
}