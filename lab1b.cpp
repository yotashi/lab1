#include<iostream>
using namespace std;
int main()
{
	int enumber=0;
	cin >> enumber;
	cout << enumber << " ";
	while(enumber  > 1){

			if(enumber % 2 == 1 && enumber != 1)
			{
			enumber = enumber*3+1;
			cout << enumber;
			cout << " ";
			}
		if(enumber % 2 == 0)
			{	
		enumber = enumber/2;
		cout << enumber;
		cout << " ";
			}
		
		}
return 0;
}
