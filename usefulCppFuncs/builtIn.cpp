
/*
Built-in useful functions for interview questions

Author: Berke Muftuoglu
*/
#include <imports.h>

using namespace std;

class Functions{
public:
    int main(){ }

/*
SWAP()
*/
void swapExample(){
    int a = 5, b = 10;
    swap(a,b);
}
/*
? operator
*/
void questionOperator(){
    int a = 5, b = 10;
    cout << (a > b ? "TRUE" : "FALSE") << endl;
}

/*
SORT()
*/
void sortExample(){
    int arr[] = {5, 10, 1, 3, 2};
    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

/*
stoi()
*/
void stoiExample(){
    string s = "123";
    int x = stoi(s);
    cout << x << endl;
}


};

