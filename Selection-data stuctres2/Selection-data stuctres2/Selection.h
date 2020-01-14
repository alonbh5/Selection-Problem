//#ifndef _SELECTION_H
//#define _SELECTION_H

#include <iostream>
#include <string.h>
#include "Person.h"
#include <stdlib.h>
#include <time.h>
#include "HeapMin.h"
#include "TreeClass.h"

using namespace std;

const Person RandSelection(Person arr[], int left, int right, int k, int& NumComp);
const Person selectHeap(Person arr[], int size, int k, int& NumComp);
const Person BST(Person arr[],int size, int k, int& NumComp);
void runSelection(Person arr[],int size,int k);
void readArr(Person*& arr, int& size, int& k);

//#endif //_SELECTION_H

