#pragma once
class Point
{
public:
	Point() {}
	Point(const int id, const float x, const float y, const float z) { setPoint(x, y, z); }
	~Point() {}
	int getId() { return id; }
	float getX() { return x; }
	float getY() { return y; }
	float getZ() { return z; }
	void setId(const int in) { id = in; }
	void setX(const float in) { x = in; }
	void setY(const float in) { y = in; }
	void setZ(const float in) { z = in; }
	void setPoint(const float x, const float y, const float z) { setX(x); setY(y); setZ(z); }
	void setNeighbours() 

private:
	int id;	
	float x, y, z;
	int n[6];	// 6 nearest neighbours in order of increasing distance  

};

