#ifndef GE_POINTS_H_INCLUDED
#define GE_POINTS_H_INCLUDED

class CGePoint2d
{
public:
	CGePoint2d();

	// Methods
public:
	double squaredDistanceTo(const CGePoint2d&) const;
	double distanceTo(const CGePoint2d&) const;

	// Operators
	CGePoint2d& operator= (const CGePoint2d& otherPoint);

	// Members
public:
	double m_fx;
	double m_fy;
};

#endif // GE_POINTS_H_INCLUDED
