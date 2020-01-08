#include "Person.h"
#include "Selection.h"

int main()
 {
    Person* arr = nullptr;
    int n, k, id;
    int NumCompR = 0, NumCompH = 0, NumCompBST = 0;
	char name[MAX_SIZE];

	cout << "Enter num of persons: ";
	cin >> n;
    arr = new Person[n];
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter you person details, taz and then name(len max 20)\n";
        cin >> id;
        cin.ignore();
        cin.getline(name, MAX_SIZE);
        arr[i].setId(id);
        arr[i].setName(name);
    }

    cout << "Enter value to search: ";
    cin >> k;

    //option 1
    const Person rselect = RandSelection(arr, 0, n-1, k, NumCompR);

    const Person hselect = selectHeap(arr, n, k, NumCompH);
    //cout << NumComp;
}

/*


void main()
{
    int A[10] = { 45,3,69,97,82,16,73,40,88,32 };
    printarr(A);
    select(A, 0, 9, 6);
}


*/