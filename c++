c++


Implementation of unordered set 

#include<bits/stdc++.h>

using namespace std;

int main() {
  
  unordered_set <int> s;
  s.insert(1);
  s.insert(2);
  s.insert(3);
  for (auto  i = s.begin(); i != s.end(); i++) {
    cout << * i << " ";

    cout<<s.size();
}

}

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

}

