#include <iostream>
#include <map> 
#include <string > 
using namespace std;

int main()
{
	map<string, string> colors;
	colors["red"] = "FFOOOO";
	colors["green"] = "OOFFOO";
	colors["blue"] = "OOOOFF";
	colors["magenta"] = "FFOOFF";
	colors["yellow"] = "FFFFOO";
	colors["cyan"] = "OOFFFF";


	while (true)
	{
		
		string key;
		cout << "Enter a color, or Quit to stop: ";
		cin >> key;
		cout << "Hex: " << colors[key] << endl <<endl;
		
		if (key == "Quit")
		{
			break;
		}
		

		
	}


	
	return 0;
}
