/*
What is C++ STL?

C++ is one of the most popular high-level programming languages and has been
used extensively for a long time by developers. It is especially loved by
competitive programmers because of its fast execution time.

STL (Standard Template Library) is one of the most powerful features of C++.
It provides a collection of pre-defined templates for containers, iterators,
algorithms, and functors, allowing programmers to implement complex data
structures easily without worrying about low-level details or time-space
complexities.

To deeply understand STL, one should understand templates, which are one of
the most powerful tools in C++. However, in this tutorial we focus on the most
commonly used STL containers and algorithms used in day-to-day programming.

Covered Topics:
- vector
- list
- deque
- stack
- queue
- priority_queue (max & min heap)
- set
- multiset
- unordered_set
- map
- multimap
- unordered_map
- sorting with custom comparator
- next_permutation
- __builtin_popcount
- min_element / max_element
*/

#include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <map>
// #include <set>
// #include <queue>
// #include <stack>
// #include <deque>
// #include <list>
// #include <unordered_map>
// #include <unordered_set>
// #include <string>
using namespace std;

/* =========================================================
   PAIR
   ---------------------------------------------------------
   Pair is used to store two values together.
   Access elements using .first and .second
   ========================================================= */
void explainPair() {
    pair<int,int> p = {1,3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int,int>> p2 = {1,{3,4}};
    cout << p2.first << " "
         << p2.second.first << " "
         << p2.second.second << endl;
}

/* =========================================================
   VECTOR
   ---------------------------------------------------------
   Dynamic array.
   Fast random access, slow insertion in middle.
   ========================================================= */
void explainVector() {
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int,int>> vp;
    vp.emplace_back(1,2);
}

/* =========================================================
   VECTOR ITERATORS
   ---------------------------------------------------------
   Iterators allow traversal like pointers.
   Supports both iterator and range-based loops.
   ========================================================= */
void explainIterators() {
    vector<int> v = {10,20,12,23,35};

    for(auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << endl;

    for(auto x : v)
        cout << x << " ";
    cout << endl;
}

/* =========================================================
   VECTOR OPERATIONS
   ---------------------------------------------------------
   erase, insert, size, pop_back, clear, swap
   ========================================================= */
void explainVectorOperations() {
    vector<int> v = {10,20,12,23,35};

    v.erase(v.begin()+2, v.begin()+4);

    vector<int> temp(2,100);
    temp.insert(temp.begin(),300);
    temp.insert(temp.begin()+1,2,10);

    vector<int> copy(2,50);
    temp.insert(temp.begin(), copy.begin(), copy.end());

    temp.pop_back();
    cout << temp.size() << endl;
}

/* =========================================================
   LIST
   ---------------------------------------------------------
   Doubly linked list.
   Fast insertion & deletion anywhere.
   No random access.
   ========================================================= */
void explainList() {
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front();
}

/* =========================================================
   DEQUE
   ---------------------------------------------------------
   Double-ended queue.
   Fast insertion/removal at both ends.
   ========================================================= */
void explainDeque() {
    deque<int> dq;
    dq.push_back(1);
    dq.emplace_back(2);
    dq.push_front(4);
    dq.emplace_front(3);
    dq.pop_back();
    dq.pop_front();
}

/* =========================================================
   STACK
   ---------------------------------------------------------
   LIFO (Last In First Out).
   Access only top element.
   ========================================================= */
void explainStack() {
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.emplace(5);

    cout << st.top() << endl;
    st.pop();
}

/* =========================================================
   QUEUE
   ---------------------------------------------------------
   FIFO (First In First Out).
   Access front & back.
   ========================================================= */
void explainQueue() {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.emplace(4);

    q.back() += 5;
    cout << q.back() << endl;
    q.pop();
}

/* =========================================================
   PRIORITY QUEUE
   ---------------------------------------------------------
   Heap-based structure.
   Default: Max Heap
   Can be converted to Min Heap.
   ========================================================= */
void explainPQ() {
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.emplace(10);

    cout << pq.top() << endl;
    pq.pop();

    priority_queue<int, vector<int>, greater<int>> minpq;
    minpq.push(5);
    minpq.push(2);
    minpq.push(8);
    minpq.emplace(10);

    cout << minpq.top() << endl;
}

/* =========================================================
   SET
   ---------------------------------------------------------
   Stores unique elements in sorted order.
   All operations are O(log n).
   ========================================================= */
void explainSet() {
    set<int> st;
    st.insert(1);
    st.emplace(2);
    st.insert(4);
    st.insert(3);

    auto it = st.find(3);
    if(it != st.end()) st.erase(it);

    int cnt = st.count(1);

    auto lb = st.lower_bound(2);
    auto ub = st.upper_bound(3);
}

/* =========================================================
   MULTISET
   ---------------------------------------------------------
   Similar to set but allows duplicate elements.
   ========================================================= */
void explainMultiSet() {
    multiset<int> ms;
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);

    ms.erase(1);          // removes all 1s
    ms.insert(1);
    ms.erase(ms.find(1)); // removes one occurrence
}

/* =========================================================
   UNORDERED SET
   ---------------------------------------------------------
   Hash table based.
   No ordering.
   Average O(1) operations.
   ========================================================= */
void explainUSet() {
    unordered_set<int> st;
    st.insert(1);
    st.insert(2);
}

/* =========================================================
   MAP
   ---------------------------------------------------------
   Stores key-value pairs in sorted order.
   Keys are unique.
   ========================================================= */
void explainMap() {
    map<int,int> mpp;
    mpp[1] = 2;
    mpp.emplace(3,1);
    mpp.insert({2,4});

    for(auto it : mpp)
        cout << it.first << " " << it.second << endl;

    auto lb = mpp.lower_bound(2);
    auto ub = mpp.upper_bound(3);
}

/* =========================================================
   MULTIMAP
   ---------------------------------------------------------
   Same as map but allows duplicate keys.
   ========================================================= */
void explainMultimap() {
    multimap<int,int> mp;
    mp.insert({1,10});
    mp.insert({1,20});
    mp.insert({2,30});
}

/* =========================================================
   UNORDERED MAP
   ---------------------------------------------------------
   Hash table based key-value storage.
   Faster than map on average.
   ========================================================= */
void explainUnorderedMap() {
    unordered_map<int,int> mp;
    mp[1] = 10;
    mp[2] = 20;
}

/* =========================================================
   CUSTOM COMPARATOR
   ---------------------------------------------------------
   Used to define custom sorting logic.
   ========================================================= */
bool comp(pair<int,int> p1, pair<int,int> p2) {
    if(p1.second < p2.second) return true;
    if(p1.second == p2.second)
        return p1.first > p2.first;
    return false;
}

/* =========================================================
   EXTRA STL ALGORITHMS
   ---------------------------------------------------------
   sort, next_permutation, builtin_popcount,
   min_element, max_element
   ========================================================= */
void explainExtra() {

    int a[] = {1,5,2,4,3};
    int n = 5;

    sort(a, a+n);
    sort(a, a+n, greater<int>());

    pair<int,int> p[] = {{1,2},{2,1},{4,1}};
    sort(p, p+3, comp);

    int num = 7;
    cout << __builtin_popcount(num) << endl;

    long long big = 165786578687;
    cout << __builtin_popcountll(big) << endl;

    string s = "123";
    do {
        cout << s << endl;
    } while(next_permutation(s.begin(), s.end()));

    cout << *max_element(a, a+n) << endl;
    cout << *min_element(a, a+n) << endl;
}

int main() {
    explainPair();
    explainVector();
    explainIterators();
    explainVectorOperations();
    explainList();
    explainDeque();
    explainStack();
    explainQueue();
    explainPQ();
    explainSet();
    explainMultiSet();
    explainUSet();
    explainMap();
    explainMultimap();
    explainUnorderedMap();
    explainExtra();
    return 0;
}
