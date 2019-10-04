#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;
int main(int argc, const char** argv) {
    vector<string> str;
    int number,i;
    string string;
    cout<<"Please input the max number of words to be stored."<<endl;
    cin>>number;
    for(;;){
        cout<<"Please input the word, or command(print/exit) : ";
        cin>>string;
        if(string=="print"){
        sort(str.begin(),str.end());
        for(int i=0;i<str.size();i++){
            cout<<str[i]<<endl;
            }
        continue;
        }
        if(string=="exit")
        break;
        if(str.size()>=number){
            cout<<"full"<<endl;
        }
        str.push_back(string);
        if(str.size()>number)
            str.pop_back();
        if(string.size()>20){
            cout<<"超過20，請重新輸入"<<endl;
            str.pop_back();
        }
    }
    return 0;
}