#include<iostream>
using namespace std;

int main() {
	// Write your code here
	char c;
	cin>>c;

	if(isupper(c)){
		cout<<"1 \n";
	}

	if(islower(c)) {
		cout<<"0 \n";
	}
	
	if(!isalpha(c)) {
		cout<<"-1 \n";
	}
}