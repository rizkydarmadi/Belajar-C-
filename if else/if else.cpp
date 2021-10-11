#include <iostream>
#include <limits>

using namespace std;

int main()
{
	int a,b;
	cin>>a;
	cin>>b;

	if (a <= b)
	{
		cout<<"hore"<<endl;
	}
	else{
		cout<<"try again\n";
	}
	cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');
	cin.get();
	return 0;
}
