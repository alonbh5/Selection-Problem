#ifndef _HEAPMIN_H
#define _HEAPMIN_H


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
    Type Min();
    Type DeleteMin(void);
    void Insert(Type item);
};

#endif // !_HEAPMIN_H