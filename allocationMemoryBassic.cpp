#include <iostream>
using namespace std;

int main(){
    int* ptr = new int;
    *ptr = 10;
    cout << "heap ptr: " << ptr << " " << *ptr << endl;
    delete ptr;

    int *pNum = NULL;
    pNum = new int;
    *pNum = 21;

    cout << "adddress :" << pNum << endl;
    cout << "value: " << *pNum << endl;
    delete pNum;

    char *pGrades = NULL;
    int size;

    cout << "how many grades to enter in?: ";
    cin >> size;

    pGrades = new char[size];
    for(int i=0;  i<size; i++){
        cout <<  "enter grade # " << i + 1 << ": ";
        cin >> pGrades[i];
    }

    for(int i=0; i<size; i++){
        cout << pGrades[i] << " ";
    }
    delete[] pGrades;
    return 0;
}
