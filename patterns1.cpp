#include <iostream>
using namespace std;

void nForest() {
    int N;
	cout<<"Enter N"<<endl;
	cin>>N;
    int i,j;
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			cout<<"*";
		}
		cout<<endl;

	}
}
int main(){
	nForest();
}
