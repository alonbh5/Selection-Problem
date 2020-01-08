#include "Selection.h"


int Partition(Person A[], int left, int right, int& NumComp)
{
    srand((unsigned)time(nullptr));

    int pivot = A[rand() % right + left].getId();

    while (left != right)
    {
        NumComp++;
        if (A[left].getId() > A[right].getId())
            swap(A[left], A[right]);
        if (pivot == A[left].getId())
            right--;
        else // Pivot == arr[right]
            left++;
    }
    return left;
}

const Person& RandSelection(Person A[], int left, int right, int k, int& NumComp)
{
    int pivot, leftpart;
    pivot = Partition(A, left, right, NumComp);
    leftpart = pivot - left + 1;

    if (k == leftpart)
        return A[pivot];
    if (k < leftpart)
        return RandSelection(A, left, pivot - 1, k, NumComp);
    else
        return RandSelection(A, pivot + 1, right, k - leftpart, NumComp);
}

//notice - delete from array ! 
const Person selectHeap(Person arr[], int size, int k, int& NumComp)
{
    Heap MinHeap(arr, size); 
    Person res;

    
    for (int i = 0; i < k; i++)
           res = MinHeap.DeleteMin(NumComp);
                     
    return (res);    
}

const Person& BST(Person arr[], int k, int& NumComp)
{
    // TODO: insert return statement here
}
