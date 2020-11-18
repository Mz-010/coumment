

#include <iostream>
using namespace std;
int main()
{
	char ch; 
	bool done;
	cout << "Enter the first state ";
	cin >> ch;
	if (ch == '/') {
		cout << "state 1is done ";
		cout << "Enter the next state";
		done = false;

		cin >> ch;//state2
		if (ch == '*') {
			while (!done)
			{
				while (ch != '*')
				{
					cin >> ch;
					cin >> ch;
				}if (ch == '*')
				{
					done = true;
					cout << "state  2 is done";
				}
				//for (int i = 0;i < 10;i++)
				

					cin >> ch;
					if (ch == '/') {
						cout << "all state is done";
						cout << endl;
						cout << "Accept All States";
						cout << endl;
						cout << "MANAR";
					}
			
				cin >> ch;
			}
		

			cout << "ch is not'/'";
		}
			else  cout << "ch is not '*'"; 
			}
		
	
	system("puase");
}


// code for implementation the  first allgorthem of  c++ coument style .
