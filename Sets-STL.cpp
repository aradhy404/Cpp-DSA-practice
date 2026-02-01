#include<bits/stdc++.h>
using namespace std;
void printset(set<string> &s){
    for(auto i =s.begin(); i!=s.end();i++){
        cout<<(*i)<<endl;
    }
}

int main(){
    //sets collection of values
    //it stores values in sorted order
    set<string> s;
    s.insert("abc");
    s.insert("dfd");
    s.insert("etd");
    auto it = s.find("abcd");//O(log(n))
    if(it!=s.end()){
        cout<<(*it);
    }
    //printset(s);
}//multisets can store 2 or more values of same thing
// in multisets there 2 things first if 
/*we use auto it = s.find(str)
and then use s.erase(it);
it will only delete that iterator in case of there are is_same
itetors are present 
but if we use directly s.erase(string) it will delete all the 
itetator of same*/
