#include<iostream>

using namespace std;


int main() {
    //- finding element inside array

    int n;
    cout << "enter size of array: " << endl;
    cin >> n;

    int a[n]; //declaration

    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cout << "enter element to find: " << endl;

    int element;
    cin >> element;

    bool found = false;
    for(int i = 0; i < n; i++)
    {
        if (a[i] == element) {
            found = true;
            break;
        }
    }

    if (found == true) {
        cout << "element was found!"<< endl;
    } else {
        cout << "element was not found!"<< endl;
    }
    
    

    return 0;
}