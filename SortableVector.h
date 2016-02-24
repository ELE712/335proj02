/******************************************************
 ** FILE: SortableVector
 **
 ** ABSTRACT:
 ** Sortable vector template to use in bubblesort. Taken from in class example
 **
 **
 ** AUTHOR: Alex Liu
 **
 ** CREATION DATE: 2-23-16
 **
 *******************************************************/

#ifndef SORTABLEVECTOR_H
#define SORTABLEVECTOR_H

class SortableVector{
public:
    virtual unsigned int getSize() const=0;
    virtual bool smaller(int i,int j) const=0;
    virtual void swap(int i,int j)=0;
};

#endif /* SORTABLEVECTOR_H */

