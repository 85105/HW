#include<iostream>
#include<fstream>
#include <string>
using namespace std;
int main(int argc, const char** argv) {
    ifstream file;
	double buffer,number,data[50],t1,t2;
	int count = 0;
    int min,max;
    file.open("input.txt");
    if (file.is_open())
      while (file >> buffer){
		data[count] = buffer;
		count++;
	}
   else
    cout << "closed" << endl;
    min=data[0];
    max=data[1];
    cout<<"please guess an intenger number between"<<min<<"and"<<max<<endl;
    while(true){
        cin>>number;
        if(number==data[2]){
            cout<<"bingo"<<endl;
            break;
        }else if(number>data[2]){
            if(number>max){
                cout<<"重新輸入"<<endl;
                continue;
            }
            max=number;
            cout<<"please guess an intenger number between"<<min<<"and"<<max<<endl;
        }
        else if (number<data[2]){
            if(number<min){
                cout<<"重新輸入"<<endl;
                continue;
            }
            min=number;
            cout<<"please guess an intenger number between"<<min<<"and"<<max<<endl;
        }
    }
}