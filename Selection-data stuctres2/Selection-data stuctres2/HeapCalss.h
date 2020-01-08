#ifndef _HEAPCALSS_H
#define _HEAPCALSS_H


#include <iostream>

using namespace std;

#pragma warning (disable:4996)

typedef int Type;
class Heap
{
private:
    Type* data;                       //Points to data array
    int maxSize;                      //Max size of heap
    int heapSize;                     //Current size of heap
    int allocated;                    //1 if heap allocated mamory
    static int Left(int node);
    static int Right(int node);
    static int Parent(int node);
    void FixHeap(int node);
public:
    Heap(int max);                   //Allocate memory
    Heap(Type A[], int n);           //Turn A[] into heap
    ~Heap();
    Type Max(void);
    Type DeleteMax(void);
    void Insert(Type item);
};

#endif // !_HEAPCALSS_H