#include <iostream>
using namespace std;

class King
{
	public:
		void Pro(int a, int b)
		{
			cout<<a<<b<<endl;
		}
		void Pro(int a, int b, int c, int d, int e)
		{
			cout<<(a + b + c + d + e)<<endl;
		}
};

int main()
{
	King k;
	k.Pro(10,20);
	k.Pro(10,20,5,3,1);
	return 0;
}