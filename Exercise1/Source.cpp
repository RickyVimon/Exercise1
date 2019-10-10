#include "Vec3.h"
#include <iostream>

using namespace std;

int main(){
	Vec3 <int> a;
	Vec3 <float> b(1, 0, 1);
	Vec3 <float> c(b);
	Vec3 <float> d = b + c;
	cout << "A: ";
	a.print();
	cout << "B: ";
	b.print();
	cout << "C: ";
	c.print();
	cout << "D: ";
	d.print();
	d.Normalize();
	cout << "D Normalized: ";
	d.print();
	cout << "Distance to b = " << d.distance_to(b);
	return 0;
}