### Skeleton 
- To use any of the standard library we need to `#include` the header file first.
- Ex for string `string.h` for maths related function `math.h`. 
- To avoid individual declaration of each header file we can justt use
  `#include<bits/stdc++.h>`

C++ mainly contains of 4 types of stl:
- Algorithm
- Containers
- Functions
- Iterations

Berfore we start to learn more about **STL** have a look at `Pairs`


### Pairs
- It is a part of `utility.h` header file
- It is used to declare every variable in a bit different manner by pairing any two of variables
```cpp
void explainpair(){

    pair<int, int> p={1,2};
    cout<<p.first<<" "<<p.second;
    //Output will be (1 2)

    //Nested pair to store more than two variable
    pair<int, pair<int, int>> p={1,{3,4}};
    cout<<p.first<<" "<<p.second,second<<" "<<p.second.first;
    //output will be (1 4 3)

    //Array of pair
    pair<int, int> arr[]={{1,2},{3,4},{5,6}}
    cout<<arr[1].second;
    //output will be (4)
}
```

# Containers/Iterators
 
 ## Vectors

 ### ASSIGNING
 - vector is dynamic in nature
 - It used when we need to increase the size, to insert any nunmber
 - vector stores every value in contigous memory location
 - Syntax: `vector<datatype> NameOfVariable`
 - To insert dynamicaly we can use:
   - `v.push_back(1)` this will -> `v={1}`
   - `v.emplace_back(2)` this will -> v={1,2}
 - Both are nearly same in use of inserting
 - But `V.emplace_back()` is more preferable as it is more faster than `v.push_back()`

 - Declaring vector using **Pairs**
 ```cpp
 vector<pair<int, int>>vec;

 //declaring the vector
 v.push_back({1,2});
 v.emplace_back(1,2); //No nedd to give curly braces
 ```

 - To fill vector whie declaring
 > vector<int>v(5,100) -> v={100,100,100,100,100}

 - To only declare without filling the array
 > vector<int>v(5); -> v={0,0,0,0,0} or any garbage value

 - To copy one container to another
 ```cpp 
  vector<int>v1(5,100);
  vector<int>v2(v1); -> v2={100,100,100,100,100} copies the content of v1 to v2
  ```

 ### ACCESSING
 - You can access vector same as like of accessing arrays
 - You can also use `Iterator` it points to the memory address
 ```cpp
 vector<int>::iterator it = v.begin();
 //Here (it) is just a name can varry as we needed
 ```    
 - It just work same as **Pointer**
 ```cpp
 cout<<(it)<<" "; will address of first element
 cout<<*(it)<<" "; will show value at that address
 ```  
 - There are severale more types of iterators
   - V.end();
   - v.rend();
   - v.rbegin;
 - Ex. ` v={10,20,30,40}; `
  
 ```cpp
  vector<int>::iterator it = v.end();
 ```
 - The iterator ` v.end ` will point to memory which is right afte (40) insted of pointing to end of the vector (40)
 - we will get output (40) if we do [it--]

 ```cpp
  vector<int>::iterator it = v.rend();
 ```
 - The iterator ` v.rend ` will chanage the vector to ` v={40,30,20,10} ` and further it will be functionung same as like ` v.end ` 

 ```cpp
  vector<int>::iterator it = v.rbegin();
 ```
 - The iterator `v.rbegin` will first change the vector as like `v.rend` and to procedd further more accessing we will perform it++
 - In this at start iterator would be pointing to the first element (40)

 ```cpp
  vector<<v.back()<< " ";
 ```
 - This will be pointing to the last element of the vector wwhich is (40)

 ### PRINTING
 1. Using For loop
 ```cpp
 for(vector<int>::iterator it = v.begin();it != v.end();it++){
    cout<<*(it)<<" ";
 }
 ```
 
 2. Using Auto in for loop
 - As Meaning of stl is `Shortcuts` sp instead of wrighting `vector<int>::iterator` we can use `auto`
 - `auto` it auotmatically defines the data type as vector
 ```cpp
	for(vector<int>::iterator it = v.begin(); it!=v.end;it++){
		cout<< *(it) <<" ";>>
	}

	//insted you can write
	for(auto it = v.begin(); it!=v.end;it++){
		cout<< *(it) <<" ";>>
	}
 ```  

 3. using For each loop
 ```cpp
	for(auto it : v){
		cout<<*it<<" ";
	}
 ```  

 ### Deletion
 - using `v.erase` we can delete any any element of of the vector we just have to provide the address of the element te be deleted
 ```cpp
	// v={10,20,12,23}
	v.erase(v.begin()+1);
	// output v={10,12,23}

	// v={12,20,30,40,50,60}
	v.erase(v.begin()+1,v.begin()+4);
	//output v={12,40,50,60}
 ``` 
 - here while using `.erase` for deletion from one memory location to another memory location the ending adderess must be +1 further until we want to erasse
  
 ### Inserting

 1. Inserting an element
 - using `v.insert` we can insert any element to the provided address in thr vector
 ```cpp
	vector<int>v(2,100) //{100,100}
	v.insert(v.begin(),300) //{300,100,100}
	v.insert(v.begin()+1,2,10) //{300,10,10,100,100}
 ``` 
 - In the last line we have inserted `10` at location `v.begin+1` for `2` times

 2. Inserting an vector
 ```cpp
	vector<int> copy(2,50); //{50,50}
	v.insert(v.begin(),copy.begin(),copy.end()); //{50,50,300,10,10,100,100}
 ``` 
 General helping functions
 ```cpp
	//{10,20}
	cout<<v.size(); //{2}

	v.pop_back(); //{10}
	
	//v1 -> {10,20}
	//v2 -> {30,40}
	v1.swap(v2); //v1 -> {30,40} v2 -> {10,20}

	v.clear(); //erase the entire vector

	v.empty(); //If no element in vector gives 1 if there is then 0
 ```
  
  ## Lists
 - Lists is same aslike of Vectors
 ```cpp
	void explanation(){
		lists<int> ls;
		ls.push_back(2); //{2}
		ls.emplace_back(4); //{2,4}

		//Functions different then Vector are
		ls.push_front(5);// {5,2,4}
		ls.emplace_front();// {2,4}
	}
 ``` 
 - The thing different then vector are two new functions 
   1. `ls.push_front()`
   2. `ls.emplace_front()`
 - We can directly any element in starting of the vector
 - In vector we need to use `.insert` function to add any element in start
 - But using `.push/emplace_front()` is more **preferable** on account of time complexity 
 - Remaining every function `.begin, .end, .rbegin, .rend, .clear, .insert, .size, .swap` are same as used inn vector

 ## Deque
 - It is all same as Lists not a single difference 
 ```cpp
	deque<int>dq;
	dq.push_back(1); //{1}
	dq.emplace_back(2); //{1,2}
	dq.push_front(4); //{4,1,,2}
	dq.emplace_front(3); //{3,4,1,2}

	dq.pop_back(); //{3,4,1}
	dq.pop_front(); //{4,1}
 ``` 
 - Remaining every function `.begin, .end, .rbegin, .rend, .clear, .insert, .size, .swap` are same as used inn vector
   
 ## Stack
 - Stack uses **LIFO** LAST COME FIRST OUT
 - We can emagine Stack as an empty container in which we are filling element from the top
 ```cpp
	stack<int> st;
	st.push(1); //{1}
	st.push(2); //{2,1}
	st.push(3); //{3,2,1}
	st.push(3); //{3,3,2,1}
	st.emplace(5); //{5,3,3,2,1}

	cout<<st.top(); //prints 5 "** st[2] is invalid **"

	cout<<st.pop(); //It deletes the element at top {3,3,2,1}

	cout<<st.top(); //prints 3

	cout<<st.size(); //size is 4

	cout<<st.empty(); //False

	stack<int>st1,st2;
	s1.swap(s2);
 ```   

 ## Queue
 - Queue uses **FIFO** FIRST IN FIRST OUT
 - We can emagine a pipe entry from last and exit from start
 ```cpp
	queue<int> q;
	q.push(1); //{1}
	q.push(2); //{1,2}
	q.emplace(4) //{1,2,4}

	q.back() += 5; // in place of 4 now it will be 4+5, back means last element
	cout<<q.back(); // prints 9

	cout<<q.front(); //print 1

	q.pop(); // deletes first element {2,9}

	cout<<q.front(); // prints 2
 ``` 
 - Remaining all functions like `.size, .empty, .swap` are same as Stack

 ## Priority Queue
 - The element who has the largest value stays at the top
 - In all terms like char,integer,string(lexicographic order) the biggest stays at the top 
 - Priority Queue uses **LIFO** LAST COME FIRST OUT
 - It does not store data as other in linear `Linear Data Structure`
 - Priority Queue Stores data structure in `Tree Data Structure`
 ```cpp
	priority_queue<int>pq;

	pq.push(5); // {5}
	pq.push(2); // {5,2}
	pq.push(8); // {8,5,2}
	pq.emplace(10); // {10,8,5,2}

	cout<<pq.top() //prints 10

	pq.pop(); // {8,5,2}

	cout<<pq.top(): //prints 8

	// size, swap, empty, functions same as others

	//Minimum Heap(Minimum value at top)
	priority_queue<int, vector<int>, greater<int>> pq;
	pq.push(5); // {5}
	pq.push(2); // {2,5}
	pq.push(8); // {2,5,8}
	pq.emplace(10); // {2,5,8,10}

	cout<<pq.top(); //Prints 2

 ```   
 - Time Complexicity
   - push -> logn
   - top  -> o(1)
   - pop  -> logn  

 ## Set 
 - In set everything is `Sorted` and `Unique`
 - Set stores data same as `priority_queue` in `Tree Data Structure`
 - It stores data in sorted manner from `Lowest to Highest` at top
 - It stores every element uniquely `No Repetition of any element`
 ```cpp
	set<int>st;
	st.insert(1); // {1}
	st.emplace(2); // {1,2}
	st.insert(2); // {1,2}
	st.insert(3); // {1,2,3}
	st.insert(4); // {1,2,3,4}

	//Functionality of insert in vector
	//can be used also, that only increases
	//efficiency

	//.begin(), .end(), .rbegin(), .rend(), .size(),
	//.empty(), and .swap() are same as those of above

	//{1, 2, 3, 4, 5}
	auto it = st.find(3); 
	// returns a iterator which points towards (3)

	//{1, 2, 3, 4, 5}
	auto it = st.find(6); 
	//if the element is not present in the set then 
	//it gives back an iterator pointing towards 'st.end()'

	//{1, 2, 3, 4, 5}
	st.erase(5); // {1, 2, 3, 4}

	int cnt = st.count(1);
	// As set contains uniqueness, if '1' is present in the
	// set then it will (1) if no then (0)

	auto it = st.find(2);
	st.erase(it); 

	// {1, 2, 3, 4, 5}
	auto it1 = st.find(2);
	auto it2 = st.find(4);
	st.erase(it1. it2); // after erase {1, 4, 5} same as like we do in vectors

	auto it = st.lower_bound(2);

	auto it = st.upper_bound(3);
 ```
- Time complexicity for every function is -> `logn`

 ### Upper bound and Lower bound (*supporting to set*)
 - BINARY SEARCH
 1. Check if whether X exists in the sorted array or not
 ```cpp
	A[] = {1, 4, 5, 8, 9}

	bool res = binary_search(a, a+n, 3);
	//Here a is an iterator pointing towards 1 and
	//a+n is pointing towards ending 9
	//Searches for 3 if exist gives True or if not then False

	bool res = binary_search(a, a+n, 4);
 ```

 2. Lower bound
 ```cpp
	a[] = {1, 4, 5, 6, 9, 9}

	int ind = lower_bound(a, a+n, 4) - a;
	// return a iterator pointing towards 4 -> 1

	int ind = lower_bound(a, a+n, 7) - a;
	// return a iterator pointing towards 7 if exist if not 
	// then it points towards the immediate next greatest number which is 9 -> 4

	int ind = lower_bound(a, a+n, 10) - a;
	// It points towards the .end() -> 6
	// To gest index number we do ( - a )

	int ind = lower_bound(a.begin(), a.end(), a) - a.begin
	// In terms of Vector
 ```

 3. Upper bound
 ```cpp
	a[] = {1, 4, 5, 6, 9, 9}

	int ind = upper_bound(a, a+n, 4) - a;
	// It never points to that element 
	// It will point towards the immediate greater number 5

	int ind = upper_bound(a, a+n, 7) - a;
	// It never points to that element 
	// It will point towards the immediate greater number 9

	int ind = upper_bound(a, a+n, 10) - a;
	// It will point towards the .end();

	int ind = upper_bound(a.begin(), a.end(), a) - a.begin
	// In terms of Vector
 ``` 

 - Some example supporting **upper_bound** and **lower_bound**
 
 ```cpp
	Q1. Find First occurence of X in a sorted array. If it does not exist print -1

	A[] = {1, 4, 4, 4, 4, 9, 9, 10, 11}

	int ind = lower_bound(a, a+n, x) -a;

	if(ind != n && a[ind] == x) cout << ind;
	else cout<<-1;

	Q2. Find the last occurence of a x in a sorted arrat. If  it does not exists, print -1

	A[] = {1, 4, 4, 4, 4, 9, 9, 10, 11}

	int ind = upper_bound(a, a+n, x) -a;
	ind --;

	if(ind >= 0 && a[ind] == x) cout << ind;
	else cout<<-1;

	Q3. Find the largest number smaller than x in a sorted array. If no number exists print -1

	A[] = {1, 4, 4, 4, 4, 9, 9, 10, 11}

	int ind = lower_bound(a, a+n, x) -a;
	ind--;

	if(ind >= 0) cout << a[ind];
	else cout<<-1;

	Q4. Find the smaller number greater than x in a sorted array. If no number exists print -1

	A[] = {1, 4, 4, 4, 4, 9, 9, 10, 11}

	int ind = upper_bound(a, a+n, x) -a;

	if(ind < n ) cout << a[ind];
	else cout<<-1;
 ``` 

 ## MultiSet
 - It work as `Sorted` but not `No Unique` 
 - It stores as many multipples as we need but in a sorted manner
 ```cpp
	multi<int>ms;
	ms.insert(1); //{1}
	ms.insert(1); //{1,1}
	ms.insert(1); //{1,1,1}

	ms.erase(1); // All '1' will be erased from the set {}

	int cnt = ms.count(1); // counts the number of '1' in the multiset

	//To erase just one or selected occurence of any element
	ms.erase(ms.find(1));
	ms.erase(ms.find(1), ms.find(1)+2);

	// rest all is as same as set
 ``` 

 ## Unorderd Set
 - Same as like others but not sorted
 - Works as like `No sorted` but has `Uniqueness`
 - Time complexicity is -> o(1)
 - In worst case, `once in a millenium` Time complexicity -> o(n)
 - Every function are worked same as other except **Lower_bound** and **upper_bound**  

 ## Map
 - Map stores unique keys in sorted order somthing similar to set
 - Map is a container which stores everything in respect of `Key` and `Values`
 - Key can be of any datastructure
 - Map is `Sorted` as well as `Unique`
 - Time complexicity -> `logn`
 ```cpp
	// Declaring map, first is key second is value
	map<int, int> map;
	map<int, pair<int, int>> mapp;
	map<pair<int, int>, int> mpp;

	// Assigning values to kays
	map[1] = 2;
	map.emplace({3,1});
	map.insert({2,4});
	map[{2,3}] = 10;

	{
		{1, 2}
		{2, 4}
		{3, 1}
	}

	// to acces the content we can iterate form begin iterator to end iterator
	for(auto it : map){
		cout<<it.first<<" "<<it.second<<endl;
	}

	cout<<map[1]; // prints 2
	cout<<map[5]; // If somthing that does not present it prints 'null' or '0'

	auto it = map.find(3); //points to '3' key iterator
	cout<<*(it).second;

	auto it = map.find(5); // points to map.end as 5 does not exist

	auto it = map.lower_bound(2);

	auto it = map.upper_bound(3);

	// .erase(), .swap(), .size(), .empty(), are same as above
 ``` 

 ## Multimap
 - Everything same as map, only it can store multiple keys
 - only map[key] cannot be used here
 - Works like `Sorted` but `No unique`

 ## Unordered Map
 - Same as map but not sorted
 - Works like `No Sorted` but `Unique`

# Algorithms
 - `a` is starting element of the arrat and `a + n` is the ending element
 - Can be used in vectors and aarays etc
 - Here `greater<int>` is a comperator
 ```cpp
	sort(a, a + n);
	sort(v.begin(), v.end());

	sort(a+2, a+4);

	sort(a, a+n, greater<int>); //Sorts in a desending order

	int num = 7;
	int cnt = __builtin_popcount(); // It uses binary values of given number
	// It counts no set element in the binary of any number

	long long num = 75385274196385;
	int cnt = __builtin_popcountll(); // in case of Datatype long long

	string s = "123";
	sort(s.begin(), s.end());
	Do {
		cout<<s<<endl;
	} while(next_permutation(s.begin(), s.end()));
	// It permutes until number become mathematicaly descending '321'
	// It is necessary to first sort the given string 

	int max1 = *max_element(a, a+n); // Gives the maximum number present in the array
	int max1 = *min_element(a, a+n); // Gives the minimum number present in the array
 ``` 
 - We can make our own sorting way as we needed naming as `My Way`
 - First we have create our `Comperator` naming `comp`
 ```cpp
	bool comp(pair<int, int> p1, pair<int, int> p2){
		// assuming 'p1' lies before 'p2'
		if(p1.secomd < p2.second) return true;
		if(p1.secomd > p2.second) return false;
		// they are same is the only condition left

		if(p1.first > p2.first) return true;
		return false;
	}
	pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};

	// sort it according to second element
	// if second element is same, then sort
	// it according to first element but in descending oreder

	sort(a, a+n, comp); //Here comp is self comperator
	// We have to declare/create 'comp'  first(boolean function)
	// {4, 1}, {2, 1}, {1, 2}
 ``` 