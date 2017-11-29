#include<vector>
#include<string>
#include<iostream>
using namespace std;

vector<int>* make() {
	vector<int> * vec = new vector<int>;
	return vec;
}
void input(vector<int> * vec) {
	int i;
	while (cin >> i)
		vec->push_back(i);
}
void print(vector<int> * vec) {
	for (auto it = vec->begin(); it != vec->end(); ++it) {
		cout << *it << " ";
	}
	cout << endl;
}
int main() {
	auto ptr = make();
	input(ptr);
	print(ptr);
	delete ptr;
	ptr = nullptr;
	system("pause");
	return 0;
}