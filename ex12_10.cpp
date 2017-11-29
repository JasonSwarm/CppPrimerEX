#include<iostream>
#include<memory>

using namespace std;
shared_ptr<int> process(shared_ptr<int> p) {
	cout << "process: " << p.use_count() << endl;
	return p;
}
int main() {
	shared_ptr<int> p ( new int(42));
	int * x = new int(55);
	//process(shared_ptr<int>(x)); //ex12_12 (d) bad practice
	//cout << *x << endl;
	cout << p.use_count() << endl;
	auto r = process(shared_ptr<int>(p));
	cout << p.use_count() << endl;
	auto q = p;
	cout << p.use_count() << endl;
	system("pause");
	return 0;
}