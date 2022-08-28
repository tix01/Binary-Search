#include<iostream>
#include<vector>
int BinarySearch(int value, std::vector<int> vec) {
	int l = 0;
	int r = vec.size();
	int i =(l+r)/2;
	while (vec[i] != value) {
		if (vec[i] > value) {
			r = i-1;
			i = ((l + r) / 2);
		}
		else if (vec[i] < value) {
			l = i+1;
			i = ((l + r) / 2);
		}
	
	}
	return vec[i];

}
int main(){

	return 0;
}