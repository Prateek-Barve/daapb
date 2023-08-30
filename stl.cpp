// STL Docs

/*  Containers
    functions
    Algorithms
    iterators    
*/

// -------------------------- Containers and Iterators -------------------------------------------- // 

// pairs
/*  pair<int, int> p = {1, 3};
    pair<int, int> a[]; -> a[2].second ..... array of pairs 
*/

// vectors

/*  vector<int> v;
    v.push_back(3);
    v.emplace_back();
    vector of pairs ({1,3}) or (1,3)
    vector<int> v(5,100);   size 5 storing 100's 
    vector<int> v(n); 
    vector<int> v2(v1);     copy of vector v1 into v2 

    v[1] or v.at(1);
    vector<int>::iterator it = v.begin(); or v.end() or v.rbegin() or v.rend() (r -> reverse)
    it++;
    cout<<*(it);
    v.back();       last element in vector
    use iterator if length of vector is not known 
    v.erase(<address>);
    v.erase(<address>, <end_address>); end not included 
    v.insert(<address>, element);
    v.insert(<address>, <end_address>, element);
    v.insert(<add>, v1.begin(), v1.end());   adding vector into another vector 
    v.size();
    v.pop_back();
    v.swap(v1);
    v.clear();
    v.empty();
*/


// list 

/*  list<int> l;
    l.push_front(12);
    l.emplace-front(23);
*/

// dequeue
/*  same as of list, pop, push in front and back, front, back, emplace in front and back
*/

// stack (LIFO)

/*  stack<int> stk;
    stk.push(1);
    stk.emplace(2);
    stk.top();   last element that went
    stk.pop();
    stk.size();
    stk.empty();
    stk.swap(stk2);  
    all operations are of big-o of 1 (constant)
*/

// queue (FIFO)

/*  queue<int> q;
    q.push(12);
    q.emplace(12);
    q.back();      last element in queue
    q.front();
    q.pop(); 
*/

// priority

/*  priority_queue<int> pq;
    largest element stays at the top (descending order)
    pq.push(5);  in log(n) 
    pq.push(3);
    pq.push(4);  5 will be at the top
    pq.top();
    pq.pop();

    minimum element at the top (ascending order)
    priority_queue<int, vector<int>, greater<int>> pq;
    now if all operations are done they will according to minimum element
*/

// sets

/*  all things are in sorted order
    all elements are unique
    set<int> st;
    st.insert(3);
    st.emplace(3);
    auto it = st.find(3); returns iterator to element 3
    else returns st.end(); if no element found
    st.erase();
    int count = st.count(4); gives 1 if 4 is there else 0
    st.erase(it1, it2);   from start to end address it erases elements
    st.lower_bound(2);
    st.upper_bound(3);

    everything happens in log(n) 
*/

// multisets 
/*  obeys sorted property
    if erase is used, it erases all the occurances
    gives total count
    ms.erase(ms.find(1));   only one occ of 1 is erased
    ms.erase(ms.find(1), ms.find(1)+2); range erase
*/

// unordered set
/*  random storing order, rest all things are same
    everything is in O(1) (worst case is O(n))
*/

// map (key, value)

/*  map<int, int> m;
    value can be pair or anything, so will be key
    m[1] = 2;  store 2 on key 1
    m.emplace({3, 1});
    m.insert({3, 1});
    keys are unique and are in sorted order
    it.first and it.second are keys and values
    cout<<m[5];   prints value of key 5, else NULL
    m.find(3);  iterator of key 3
    value -> *(it).second 
    lower and upper bound
    general -> log(n)
*/

// multimap
/*  duplicate keys but in sorted order
    rest all same
*/

// unordered map
/*  unique keys but not sorted O(1), worst case O(n)
*/

// -------------------------- Functions -------------------------------------------- //
// not important

// -------------------------- Algorithms -------------------------------------------- //

/*  sort(a, a+4);   sort(<start>, <end>)
    sort(v.begin(), v.end(), greater<int>);

    Custom Sorting 
    Eg. for pairs it sorts according to second element, if they are same then desc. order acc to first element 
    sort(a, a+n, comp); 
    here comp is self written comparitor then is boolean function (has to written 1 or 0)

    bool comp(pair<int, int> p1, pair<int, int> p1){
        if(p1.second < p2.second){
            return true;
        }
        else if(p1.second > p2.second){
            return false;
        }
        else if(p1.first > p2.first){
            return true;
        }
        else{
            return false;
        }
    }
*/

/*  __builtin_popcount();  returns the number of 1's in binary equivalent of a number
    __builtin_popcountll(); for long long
*/

/*  all the permutations of a string
    s = "123"
    do{
        cout<<s;
    }
    while(next_permutation(s.begin(), s.end()));

    imp. -> always start with the sorted string to get all the permutations. 
*/

/*  int max = max_element(a, a+n);  max_element(<start>, <end>)
    same for min element
*/