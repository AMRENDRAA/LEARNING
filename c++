c++


Implementation of unordered set 

#include <bits/stdc++.h>   // includes all standard libraries
using namespace std;

int main() {
  
  unordered_set<int> s;   // declare an unordered set of integers (stores only unique elements, order not fixed)

  s.insert(1);            // insert element 1
  s.insert(2);            // insert element 2
  s.insert(3);            // insert element 3

  // iterate through unordered_set
  for (auto i = s.begin(); i != s.end(); i++) {
    cout << *i << " ";    // print each element (*i means dereference the iterator to get the value)
    cout << s.size();     // print the current size of the set (number of unique elements stored)
  }




//  // advanced for loop (range-based for loop)
  for (int val : s) {
    cout << val << " ";    // print element
    cout << s.size();      // print set size
  }
}
Key Point: unordered_set → stores unique elements but in no particular order. Lookup, insert, erase are O(1) average.




vectors are dynamic array 

#include<bits/stdc++.h>

using namespace std;

int main() {
  
  vector <int> s;
  for(int i=0;i<10;i++)
  {
  	int a;
  	cin>>a;

  	s.push_back(a);

  }
  cout<<"values in vector are"<<endl;
  for(auto i=s.begin();i<s.end();i++)
  {
  	cout<<*i<<endl;

  }
  cout<<s.size();
   cout<<"size is"<<s.size()<<endl;
  cout<<"first element is"<<s.front()<<endl;
  cout<<"last element "<<s.back()<<end


	  
 // advanced for loop

for( auto &num:s)
{
	cout<<num

}

//sets 
#include<bits/stdc++.h>
using namespace std;
int main()
{

	// cout<<"hello";
	set<int> s;
	s.insert(1);
	s.insert(2);
	for (int i = -1; i <= 10; i++) 
	{
    s.insert(i);
    }

     for (auto it = s.begin(); it != s.end(); it++)
      {
    cout << * it << " ";
       }
       cout<<"size is "<<endl;
       cout<<s.size();


	  // auto (deduces int)
  for (auto val : s) {
    cout << val << " ";
  }
}


//map
#include<bits/stdc++.h>
using namespace std;
int main()
{

	//map
	//in map values are entered in the key value pair
	//
	map <int ,string> m;
	m[1]="abc";
	m[2]="pandit";
	m[3]="abc";
	map <int ,string> ::iterator it;
	for(it=m.begin();it!=m.end();++it)
	{
		cout<<(*it).first<< endl<<" "<<(*it).second;
	}


  // auto (deduces pair<const int, string>)
  for (auto &p : m) {
    cout << p.first << " " << p.second << endl;
  }
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
	
//Given n strings print unique strings in lexiographical order with their order 

map <string,int>m;
int n;
cin>>n;
for (int i=0;i<n;i++)
{
	string s;
	cin>>s;
	m[s]++;
}
for (auto pr :m){
	cout<<pr.first<<" "<<pr.second<<endl;
}
}





for (auto it = countMap.begin(); it != countMap.end(); it++) {
    int number = it->first;       // key
    int occurrence = it->second;  // value
    if (occurrenceSet.count(occurrence)) {
        return false;
    }
    occurrenceSet.insert(occurrence);
}



shortcut to write the above code is 

for (auto &entry : countMap) {
 int occurrence = entry.second;
 if (occurrenceSet.count(occurrence)){
 return false;
 }
 occurrenceSet.insert(occurrence);
 }



