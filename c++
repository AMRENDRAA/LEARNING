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
