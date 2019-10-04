#include<iostream>
#include<fstream>
#include <string>
using namespace std;
int main(int argc, const char** argv) {
    ifstream file;
	double buffer,number,data[50],t1,t2;
	int count = 0;
    double*s,*b;
    file.open("input.txt");
    if (file.is_open())
      while (file >> buffer){
		data[count] = buffer;
		count++;
	}
   else
    cout << "closed" << endl;
    s=&data[0];
    b=&data[1];
    cout<<"please guess an intenger number between"<<*s<<"and"<<*b<<endl;
    cin>>number;
    if(number!=data[2]){
        while(number>*b||number<*s){
        cout <<"重新輸入"<<endl;
        cin>>number;
    }
     while (number!=data[2]){
            if(number>data[2]&&number>*b){
                cout <<"重新輸入"<<endl;
                cin>>number;
                }
            else if (number>data[2]&&number<=*b){
                t1=number;
                b=&t1;
                cout<<"please guess an intenger number between"<<*s<<"and"<<*b<<endl;
                cin>>number;
            }
            else if (number<data[2]&&number<*s){
                cout <<"重新輸入"<<endl;
                cin>>number;
            }
            else if (number<data[2]&&number>=*s)
            {
                t2=number;
                s=&t2;
                cout<<"please guess an intenger number between"<<*s<<"and"<<*b<<endl;
                cin>>number;
            }
        }
        }
        cout<<"bingo!!"<<endl;
        return 0;
    }