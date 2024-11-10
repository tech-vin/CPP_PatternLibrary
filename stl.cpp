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

void explainVector(){
    // define a vector
    vector<int> vec;

    // add values to the vector
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(8);
    vec.emplace_back(0);
    vec.emplace_back(4);

    // print size of the vector
    cout << vec.size() << endl;

    // print value of vector
    cout << vec[0] << endl;

    // print all the values (improper way)
    for(int i=0; i<vec.size(); i++){
        cout << "values: " << vec[i] << endl;
    }

    // Proper way: Method 1
    vector<int>::iterator begItr = vec.begin();
    vector<int>::iterator endItr = vec.end(); // note: endItr doesn't mean 8, endItr - 1 = 8
    for(vector<int>::iterator i=begItr; i<endItr; i++){ // that is why loop is '<' than not '<='
        cout << "val: " << *i << endl; // 'i' is a reference, so * is mandatory
    }

    // Proper way: Method 2
    auto beg = vec.begin(); // 'auto' automatically assins the datatype of vector assinged on line 20
    auto end = vec.end();

    for(auto i=beg; i<end; i++){
        cout << "v: " << *i << endl;
    }

    // Proper way: Method 3
    for(auto i : vec){
        cout << i << " ";
    }
    cout << endl;

    // reverse Iterator [1, 2, 8]
    auto reverseBegin = vec.rbegin(); // 8
    auto reverseEnd = vec.rend(); // reverseEnd -1 = 1
    for(auto i = reverseBegin; i<reverseEnd; i++){
        cout << *i << " ";
    }
    cout << endl;

    // creating a vector with values
    vector<int> vec1(5);
    vector<int> vec2(5, 6);
    vector<int> vec3 = {7, 8, 3};

    vec2.push_back(1);
    vec2.push_back(4);
    vec3.push_back(0);
    vec3.emplace_back(11);

    vector<int> dupvec(vec.begin()+1, vec.end()-1); // [1,2,8,0,4] start=2, end=0
    for (auto i: dupvec){
        cout << i << " ";
    }
    cout << endl;
    for(auto i: vec1){
        cout << i << " ";
    }
    cout << endl;
    for(auto i: vec2){
        cout << i << " ";
    }
    cout << endl;

    for (auto i : vec) cout << i << " "; // printing original array
    cout << endl;
    cout << "front: " << vec.front() << endl; // returns first value
    cout << "back: " << vec.back() << endl;  // returns last value
    vec.pop_back(); // removes the last element
    for (auto i : vec) cout << i << " "; // printing array post pop
    cout << endl;

    // erase
    for(auto i: vec) cout << i << " "; cout << endl; // 1 2 8 0
    vec.erase(vec.begin()+2, vec.end()); // starts erasing from 8 till 0
    for(auto i: vec) cout << i << " "; cout << endl;

    // clear
    for(auto i:vec2) cout << i; cout << endl;
    vec2.clear();
    for(auto i:vec2) cout << i; cout << endl;

    // swap
    vector<int> v1 = {1, 8};
    vector<int> v2 = {9, 5};
    swap(v1, v2);
    for(auto i: v1) cout << i << " "; cout << endl;

    // insert  (position, value)
    v1.insert(v1.begin(), 7);  // inserting at the beginning
    v1.insert(v1.end(), 4); // insert at the end
    v1.insert(v1.begin()+2, 3); // in the middle
    for(auto i: v1) cout << i << " "; cout << endl;
}

void explainList(){
    // same as vector but that has push_front to add the value at first index
    list<int> ls = {1,6,4};
    ls.push_front(7);
    for(auto i:ls) cout << i << " "; cout << endl; // 7 1 6 4
}

void explainStack(){
    // LIFO
    stack<int> st;
    st.push(1);
    st.push(3);
    st.push(8);

    cout << st.size() << endl;
    cout << st.top() << endl;
    st.pop(); // removes last element 8 in this case
    cout << st.top() << endl;

    // pushing dummy data
    st.push(91);
    st.push(92);
    st.push(88);
    st.push(67);
    st.push(43);

    // inorder to view all the elements we have to pop each element till the last one.
    while(st.empty() == false){
        cout << st.top() << " ";
        st.pop();
    }
}

void explainQueue(){
    // FIFO
    queue<int> q;
    q.push(1);
    q.push(8);
    q.push(6);
    q.push(4);
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

}

void explainPQ(){
    // Priority Queue returns max element
    priority_queue<int> pq;  // returns max
    priority_queue<int, vector<int>, greater<int>> small_pq; // return min
    pq.push(1);
    pq.push(10);
    pq.push(11);
    pq.push(7);

    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;

    small_pq.push(10);
    small_pq.push(10);
    small_pq.push(11);
    small_pq.push(1);
    small_pq.push(7);

    while(!small_pq.empty()){
        cout << small_pq.top() << " ";
        small_pq.pop();
    }
}
int main(){
    explainPair();
    explainVector();
    explainList();
    explainStack();
    explainQueue();
    explainPQ();
    return 0;
}