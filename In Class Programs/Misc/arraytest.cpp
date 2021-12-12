#include <iostream>
#include <string>

using namespace std;

int main()
{
	string strArray[2] = {"Hip", "Hip"};

	for( auto& x : strArray)
	{
		cout << x << endl;
	}
	return 0;
}