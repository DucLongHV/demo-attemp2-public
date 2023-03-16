#include<iostream>
#include <map>
#include<vector>
using namespace std;

int main(){
    map<string,int> m1;
    m1["one"] = 1;
    m1["two"] =2;
    m1["three"] = 3;
    m1.insert(pair<string, int> ("four",44));
    auto it = m1.begin();

    while (it != m1.end())
    {
        cout<< "Key: "<< it->first<<", Value: " << it->second <<endl;
        ++it;
    }
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    cout<<v[2]<<endl<<v.size()<<endl;

    v.insert(v.begin()+2,0);
    cout<< v[2]<<endl<<v.size()<<endl;

    return 0;
}