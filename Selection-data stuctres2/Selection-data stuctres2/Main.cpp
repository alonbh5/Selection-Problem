#include "Person.h"

int main()
 {
	int n, tz;
	char name[MAX_SIZE];

	cout << "Enter num of pairs: ";
	cin >> n;
	cout << "\nEnter you pairs, name len max 20, each line pair\n";
	cin >> tz;
	cin.ignore();
	cin.getline(name,MAX_SIZE);



}

/*
#include <iostream>

using namespace std;

#pragma warning (disable:4996)

void printarr(int A[])
{
    for (int i = 0; i < 10; i++)
        cout << A[i] << " ";

    cout << endl;
}

int Partition(int A[], int left, int right)
{
    int pivot = A[left];
    cout<<endl<<"in Partition :"<<endl;
    while (left != right)
    {
        if (A[left] > A[right])
        {
            swap(A[left], A[right]);
        }
        if (pivot == A[left])
            right--;
        else // Pivot == arr[right]
            left++;
        printarr(A);
    }
    return left;
}

int select(int A[], int left, int right, int i)
{
    int pivot, leftpart;

    pivot = Partition(A,left,right);
    cout << endl << "in select pivot is :"<<pivot << endl;
    printarr(A);
    leftpart = pivot - left + 1;

    if (i == leftpart)
        return A[pivot];
    if (i < leftpart)
        return select(A, left, pivot - 1, i);
    else
        return select(A, pivot + 1, right, i - leftpart);
}

void main()
{
    int A[10] = { 45,3,69,97,82,16,73,40,88,32 };
    printarr(A);
    select(A, 0, 9, 6);
}


*/