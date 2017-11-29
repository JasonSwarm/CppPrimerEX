//#include<iostream>
//#include<vector>
//#include<memory>
//#include<string>
//
//using namespace std;
//
//class StrBlob {
//	using vszType = vector<string>::size_type;
//public:
//	StrBlob() :data(make_shared<vector<string>>()) {};
//	StrBlob(initializer_list<string>  il) : data(make_shared<vector<string>>(il)) {}
//	string & front() {check(0, "front on empty StrBlob");return data->front();}
//	const string & front() const {check(0, "front on empty StrBlob");return data->front();}
//	string & back() { check(0, "back on empty StrBlob"); return data->back(); }
//	const string & back() const { check(0, "back on empty StrBlob"); return data->back(); }
//	void pop_back() { check(0, "pop_back on empty StrBlob"); data->pop_back(); }
//	vszType size() const { return data->size(); }
//	void push_back(const string & str) { data->push_back(str); }
//	bool empty() const { return data->empty(); }
//	void show() const { for (auto it = data->cbegin(); it != data->cend(); ++it) cout << *it << " "; cout << endl; }
//private:
//	shared_ptr< vector<string> > data;
//	void check(vszType sz,const string & msg) const{
//		if (sz >= data->size())
//			throw out_of_range(msg);
//	}
//};
#include"ex12_02.h"
using namespace std;
int main() {
	StrBlob b1={ "hello","word","!!" };
	b1.show();
	const StrBlob b2 = b1;
	b2.show();
	cout << b2.size() << endl;
	system("pause");
	return 0;
}