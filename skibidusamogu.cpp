#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
    string x;
    cin>>x;
    x.pop_back();
    x.pop_back();
    x.push_back('i');
    cout<<x<<'\n';
    }

}
