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

    const Person Bselect = BST(arr, n, k, NumCompBST);

    const Person hselect = selectHeap(arr, n, k, NumCompH);

    cout << rselect.getId() << " " << rselect.getname() << endl << endl;;
    cout << Bselect.getId() << " " << Bselect.getname() << endl << endl;;
    cout << hselect.getId() << " " << hselect.getname() << endl << endl;;
    cout << "RandSelection: " << NumCompR << " comparisons" << endl << endl;
    cout << "selectHeap: " << NumCompH << " comparisons" << endl << endl;
    cout << "BST: " << NumCompBST << " comparisons";
    system("pause");
}

