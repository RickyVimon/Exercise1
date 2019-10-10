#include <iostream>
using namespace std;

template <class T>
class Vec3
{
public:
	T x, y, z;
	Vec3() : x(0), y(0), z(0){}
	Vec3(T a, T b, T c) : x(a), y(b), z(c) {}
	Vec3(const Vec3 &v) : x(v.x), y(v.y), z(v.z){}
	Vec3 operator + (Vec3 const& obj) {
		Vec3 res;
		res.x = x + obj.x;
		res.y = y + obj.y;
		res.z = z + obj.z;
		return res;
	}
	float module = sqrt(x * x + y * y + z * z);

	void print()
	{
		cout << "x = " << x << ", y = " << y << ", z = " << z << ".\n";
	}

	void Normalize() {
		x = x / module;
		y = y / module;
		z = z / module;
	}

	T distance_to(Vec3 v2) {
		Vec3 distance(x = v2.x - x, y = v2.y - y, z = v2.z - z);
		return distance.module;
	}

};