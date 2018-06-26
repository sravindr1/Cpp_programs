//File name : dynamically_manage_array_size.cpp
#include <iostream>
#include <vector>

using namespace std;

int main(){
	cout<<"Enter the number of elements: ";
	int count, sum = 0;
	cin>>count;
	
	vector<int> arr;	//default size
	arr.resize(count);	//Set resize
	
	for(int j=0; j<arr.size(); j++){
		arr[j] = j;
		sum = sum + arr[j];
		
	}
	
	cout<<"Sum of numbers 0 to " <<count -1 << "\t is \t"<<sum<<endl;
	return 0;
}
