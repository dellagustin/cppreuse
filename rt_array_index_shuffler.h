// Created By: Guilherme Dellagustin
// Created At (dd/mm/aaaa): 07/07/2011
// Original file name: rt_array_index_shuffler.h
// Purpose: Hold the declaration of class CArrayIndexShuffler

#ifndef RT_ARRAY_INDEX_SHUFFLER_H_INCLUDED
#define RT_ARRAY_INDEX_SHUFFLER_H_INCLUDED

#include <vector>

class CArrayIndexShuffler : private std::vector<bool>
{
public:
    CArrayIndexShuffler();
    CArrayIndexShuffler(unsigned int uiArrayLength);

    // Edit methods
public:
    void reset();
    void setArrayLength(unsigned int uiArrayLenght);
    unsigned int nextIndex(bool bResetIfNeeded = false);

private:
    unsigned int m_uiIndexesLeft;
};

#endif // RT_ARRAY_INDEX_SHUFFLER_H_INCLUDED
