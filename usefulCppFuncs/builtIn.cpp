
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

/*
stable_partition() 
rearranges the elements according to the given predicate, if true theey are moved to the left
*/
void stable_partition_example(){
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    stable_partition(v.begin(), v.end(), [](int i){return i % 2 == 0;});
    for (auto i : v) {
        cout << i << " ";
    }
    cout << endl;
}



};

