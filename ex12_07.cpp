#include<iostream>
#include<vector>
#include<string>
#include<memory>

using namespace std;

shared_ptr<vector<int>> make() {
	auto vec = make_shared< vector<int>>();
	return vec;
}
void input(shared_ptr<vector<int>> vec) {
	int i;
	while (cin >> i)
		vec->push_back(i);
}
void print(const shared_ptr<vector<int>> vec) {
	for (const auto & v: *vec) {
		cout << v << " ";
	}
	cout << endl;
}
int main() {
	auto ptr = make();
	input(ptr);
	print(ptr);
	system("pause");
	return 0;
}