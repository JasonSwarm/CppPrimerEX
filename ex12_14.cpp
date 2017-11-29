#include<iostream>
#include<memory>

using namespace std;

struct destination {};
struct connection {};
connection connect(destination *) { return connection(); }
void disconnect(connection) {};
void end_connection(connection *p) { disconnect(*p); }
void f(destination &p) {
	connection c = connect(&p);
	//shared_ptr<connection> a(&c, end_connection);
	//ex12_15 ÓÃlambda´úÌæend_connectionº¯Êý¡£
	shared_ptr<connection> a(&c, [](connection *p) {disconnect(*p); });
}
int main() {

	system("pause");
	return 0;
}