#include <iostream>
using namespace std;

void nForest() {
    int N;
	cout<<"Enter N"<<endl;
	cin>>N;
    int i,j;
	for(i=1;i<=N;i++){
		for(j=1;j<=i;j++){
			cout<<j;
		}
		cout<<endl;

	}
}
int main(){
	nForest();
}
