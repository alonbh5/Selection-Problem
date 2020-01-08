#include "Selection.h"


int Partition(Person A[], int left, int right, int& NumComp)
{
    int pivot = A[left].getId();

    while (left != right)
    {
        NumComp++;
        if (A[left].getId() > A[right].getId())
            std::swap(A[left], A[right]);
        if (pivot == A[left].getId())
            right--;
        else // Pivot == arr[right]
            left++;
    }
    return left;
}

const Person RandSelection(Person A[], int left, int right, int k, int& NumComp)
{
    int pivot, leftpart;

    srand((unsigned)time(nullptr));
    int i = rand() % right + left;
    std::swap(A[i], A[left]);

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

const Person BST(Person arr[], int size, int k, int& NumComp)
{
    BSTree newtree(nullptr);
    int num = k;
    
    for (int i = 0; i < size; i++)
        newtree.Insert(arr[i].getId(), arr[i].getname());

    

    Person res;
    newtree.getroot()->FindkNumber(num, NumComp, res);

    //if res = nullptr there bad value fix it
    return (res);
    
        
}
