#include<iostream>
#include<string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    string sentence;
    getline(cin,sentence);
    string letter ;
    getline(cin,letter);
    size_t count =0;
    size_t pos = 0;
    while((pos = sentence.find(letter,pos)) != string::npos){
          count ++;
          pos += letter.length();
          }
          if(count == 0){
            cout<<'letter '<<"is not present"<<endl;
          }
          else{
            cout<< "Occurrences of "<< 'word'<<"in"<<'sentence' <<"= "<<count<<endl;
          }
    }
return 0;}
