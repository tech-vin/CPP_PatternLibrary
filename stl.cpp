// Standard Template and Library (cpp stl)
#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int, int> pr1 = {1, 2};
    cout << pr1.first << " " << pr1.second << endl;

    pair<int, char> pr2 = make_pair(10, 'v');
    cout << pr2.first << " " << pr2.second << endl;

    pair<pair<int, char>, int> pr3 = {{8, 'v'}, 10};
    cout << pr3.first.first << " " << pr3.first.second << endl;
    cout << pr3.second << endl;

}

int main(){
    explainPair();
    return 0;
}