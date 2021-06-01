/** REad FILE INPUT 
 * and allocate memory using malloc for sequence access
 * return Pointer 
 * after workdone you need to free memory ,its a good practice
 * **/

#include<bits/stdc++.h>
using namespace std;

struct VECTOR{
	int data;
	int *ptr;
};

void makepointer(){
	VECTOR myvector;
	myvector.data=5;
	myvector.ptr=(int*) malloc(sizeof(int)*myvector.data);
	for(int i=0;i<myvector.data;i++){
		int data;
		cin>>data;
		myvector.ptr[i]=data;
	}

	for(int i=0;i<myvector.data;i++){
		cout<<myvector.ptr[i]<<endl;
	}
	free(myvector.ptr);
		
}

int main(){
	int inp;
	int* read;
	cin>>inp;
	makepointer();
	return 1;
}

