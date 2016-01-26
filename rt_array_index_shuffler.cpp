// Created By: Guilherme Dellagustin
// Created At (dd/mm/aaaa): 07/07/2011
// Original file name: rt_array_index_shuffler.h
// Purpose: Hold the definition of class methods for CArrayIndexShuffler

#include <stdlib.h>

#include "rt_array_index_shuffler.h"

CArrayIndexShuffler::CArrayIndexShuffler()
{
    m_uiIndexesLeft = 0;
}

CArrayIndexShuffler::CArrayIndexShuffler(unsigned int uiArrayLength)
{
    setArrayLength(uiArrayLength);
}

void CArrayIndexShuffler::reset()
{
    m_uiIndexesLeft = size();

    unsigned int i;
    for(i = 0; i < size(); i++)
    {
        (*this)[i] = false;
    }
}

void CArrayIndexShuffler::setArrayLength(unsigned int uiArrayLength)
{
    resize(uiArrayLength);

    reset();
}

unsigned int CArrayIndexShuffler::nextIndex(bool bResetIfNeeded)
{
    if(m_uiIndexesLeft == 0)
    {
        if(bResetIfNeeded)
        {
            // an end of loop was reached, start over again
            reset();
        }
        else
        {
            return -1; // this is the maximum unsigned int and means an error occured
        }
    }

    unsigned int uiRetIndex = rand() % m_uiIndexesLeft;

    unsigned int i;
    for(i = 0; i <= uiRetIndex; i++)
    {
        if((*this)[i])
            uiRetIndex++;
    }

    (*this)[uiRetIndex] = true;
    m_uiIndexesLeft--;

    return uiRetIndex;
}
