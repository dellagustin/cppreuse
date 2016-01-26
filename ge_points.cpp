#include <math.h>

#include "ge_inline.h"

#include "ge_points.h"

// CGePoint2d {{

// Constructor
CGePoint2d::CGePoint2d()
{
	m_fx = 0.0;
	m_fy = 0.0;
}

// Operators {{

CGePoint2d& CGePoint2d::operator= (const CGePoint2d& otherPoint)
{
	m_fx = otherPoint.m_fx;
	m_fy = otherPoint.m_fy;

	return *this;
}

// }} Operators

double CGePoint2d::squaredDistanceTo(const CGePoint2d& otherPoint) const
{
	return ge_square(m_fx - otherPoint.m_fx) + ge_square(m_fy - otherPoint.m_fy);
}

double CGePoint2d::distanceTo(const CGePoint2d& otherPoint) const
{
	return sqrt(squaredDistanceTo(otherPoint));
}

// }} CGePoint2d
