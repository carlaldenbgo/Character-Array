#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int char_code;
    string name;
    cout << "What's your name?\n";
    cin >> name;
    cout << name << endl;
	string namehashtag = name;
    for (int i = 1; i < namehashtag.size(); i++) 
    {
        namehashtag = namehashtag.replace(i,1,"#");
    }
    cout << namehashtag << endl;
    
	
	for (int j = 0; j < name.size(); j++)
	{
		char_code = int(name[j]);

		if (char_code == 122)
		{
			name[j] = char(97);
		}
		else if (char_code == 90)
		{
			name[j] = char(65);
		}
		else if (char_code >= 65 && char_code <= 90 || char_code >= 97 && char_code <= 122)
		{
			name[j] = char(char_code + 1);
		}
		else if (char_code >= 33 && char_code <= 47 )
		{
			name[j] = name[j];
		}
	
	}
    cout << name << endl;
    
    
return 0;
}