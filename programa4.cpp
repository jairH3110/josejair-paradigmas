#include <iostream>
using namespace std;
int main(){


cout<<"array of integers"<<endl;
cout<<" =================="<<endl;

int values[3];
values[0] = 88;
values[1] = 123;
values[2] = 7;

cout<< values[0] << endl;
cout<< values[1] << endl;
cout<< values[2] << endl;


cout<<endl << "array of double" << endl;
cout<<"======================="<< endl;

double number[4] = {4.5, 2.4, 7.2,8.1};

for(int i=0; i<4;i++){


cout<< "element at index " <<i<<":"<<number[i]<< endl;
} 

cout<<endl<< "inicializa en valores zero"<< endl;
cout<< "==============================="<<endl;

int numberarray[8] = {};
for(int i =0;i<8;i++){
cout << " elemento del index"<<i<<":"<< numberarray[i]<<endl;

}

cout << endl << "inicializando con los strings"<< endl;
cout<<"===================================="<<endl;


string texts[]= {"apple","banana","naranja"};
for (int i=0;i<3;i++){

cout<< "element at index"<<i<< ":"<<texts[i]<<endl;

}
return 0;


}
