#ifndef GE_INLINE_H_INCLUDED
#define GE_INLINE_H_INCLUDED

//! Take the square of fValue
//!
//! \paramenter[in] fValue Value to take square.
//! \return Square of fValue.
double ge_square(double fValue);

// Implementation {{

inline double ge_square(double fValue)
{
	 return fValue * fValue;
}

// }} Implementation

#endif // GE_INLINE_H_INCLUDED
