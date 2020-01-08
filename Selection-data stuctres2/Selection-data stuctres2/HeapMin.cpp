#include "HeapMin.h"


//C'tor: allocate memory for the heap and make the heap empty.
void Heap::makeEmpty(int max)
{
    data = new Type[max];
    maxSize = max;
    heapSize = 0;
    allocated = 1;
}

//D'tor: delete memory only if allocates by heap
Heap::~Heap()
{
    if (allocated)
        delete[] data;
    data = nullptr;
}

bool Heap::IsEmpty()
{
    return (this->heapSize==0);
}

Type Heap::Min()
{
	return this->data[0];
}


//Private Member functions of Heap class

int Heap::Parent(int node)
{
    return (node - 1) / 2;
}

int Heap::Left(int node)
{
    return (2 * node + 1);
}

int Heap::Right(int node)
{
    return (2 * node + 2);
}

void Heap::FixHeap(int node)    //Fixes the heap that has node as root
{
    int min;
    int left = Left(node);
    int right = Right(node);

    //Find aximu among node, left and right.
    if ((left < heapSize) && (data[left] < data[node]))
        min = left;
    else min = node;
    if ((right < heapSize) && (data[right] < data[min]))
        min = right;

    //Seap values if neccessary, and continue fixing the heap towards the leaves.
    if (min != node)
    {
        std::swap(data[node], data[min]);
            FixHeap(min);
    }
}

//Delete maximum which is found in the root of heap, and fix heap.
Type Heap::DeleteMin(void)
{
	if (heapSize < 1)
	{
		cout << "Error: EMPTY HEAP\n";
		exit(1);
	}

	Type min = data[0];
	heapSize--;
	data[0] = data[heapSize];
	FixHeap(0);
	return (min);
}

//Add a new leaf for item, and swap upwards until item is in its correct position.
void Heap::Insert(Type item)
{
    if (heapSize == maxSize)
    {
        cout << "Error: HEAP FULL\n";
        exit(1);
    }

    int i = heapSize;
    heapSize++;

    while ((i > 0) && (data[Parent(i)] > item))
    {
        data[i] = data[Parent(i)];
        i = Parent(i);
    }
    data[i] = item;
}

//C'tor: convert an array which contains n numbers into a heap.
//Idea: the numbers in places n-1,...,n/2 are leaves.
//Build small heaps starting from leaves, and fix heaps while going towards the root.
Heap::Heap(Type A[], int n)
{
    heapSize = maxSize = n;
    data = A;                   //Assign array A to data pointer
    allocated = 0;              //Memory not allocated by heap

    for (int i = (n / 2) - 1; i >= 0; i--) //flode
        FixHeap(i);
}