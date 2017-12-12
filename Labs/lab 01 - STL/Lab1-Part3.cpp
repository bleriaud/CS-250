/* #include <iostream>
#include <queue> 
#include <string > 
using namespace std;

int main()
{
	 float balance = 0.0;
	 queue<float> transactions;
	 
	 transactions.push(100.42);
	 transactions.push(-85.23);
	 transactions.push(450.86);
	 transactions.push(-150.72);
	 transactions.push(89.48);
	 while (!transactions.empty())
	 {
		 float transaction = transactions.front();
		 cout << transaction << " pushed to account" << endl;
		 balance += transaction;
		 transactions.pop();
	 }
     cout << endl << "Final balance : $" << balance << endl;

	
	while (true);
	return 0;
} */
