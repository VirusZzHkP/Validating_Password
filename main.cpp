// C++ code to validate a password
#include<bits/stdc++.h>
using namespace std;

// A utility function to check
// whether a password is valid or not
bool isValid(string password)
{

	// For checking if password length
	// is between 8 and 15
	if (!((password.length() >= 8) &&
		(password.length() <= 15)))
		return false;

	// To check space
	if (password.find(" ") !=
		std::string::npos)
		return false;

	if (true)
	{
		int count = 0;

		// Check digits from 0 to 9
		for(int i = 0; i <= 9; i++)
		{
			
			// To convert int to string
			string str1 = to_string(i);

			if (password.find(str1) !=
				std::string::npos)
				count = 1;
		}
		if (count == 0)
			return false;
	}

	// For special characters
	if (!((password.find("@") != std::string::npos) ||
		(password.find("#") != std::string::npos) ||
		(password.find("!") != std::string::npos) ||
		(password.find("~") != std::string::npos) ||
		(password.find("$") != std::string::npos) ||
		(password.find("%") != std::string::npos) ||
		(password.find("^") != std::string::npos) ||
		(password.find("&") != std::string::npos) ||
		(password.find("*") != std::string::npos) ||
		(password.find("(") != std::string::npos) ||
		(password.find(")") != std::string::npos) ||
		(password.find("-") != std::string::npos) ||
			(password.find("+") != std::string::npos) ||
		(password.find("/") != std::string::npos) ||
		(password.find(":") != std::string::npos) ||
		(password.find(".") != std::string::npos) ||
		(password.find(",") != std::string::npos) ||
		(password.find("<") != std::string::npos) ||
		(password.find(">") != std::string::npos) ||
		(password.find("?") != std::string::npos) ||
		(password.find("|") != std::string::npos)))
		return false;
	
	if (true)
	{
		int count = 0;

		// Checking capital letters
		for(int i = 65; i <= 90; i++)
		{
			
			// Type casting
			char c = (char)i;
			string str1(1, c);
			
			if (password.find(str1) !=
				std::string::npos)
				count = 1;
		}
		if (count == 0)
			return false;
	}

	if (true)
	{
		int count = 0;

		// Checking small letters
		for(int i = 90; i <= 122; i++)
		{
			
			// Type casting
			char c = (char)i;
			string str1(1, c);

			if (password.find(str1) !=
				std::string::npos)
				count = 1;
		}
		if (count == 0)
			return false;
	}

	// If all conditions fails
	return true;
}

// Driver code
int main()
{
    string password1;
    cout<<"Input Password\n";
    cin>>password1;
	
	if (isValid(password1))
		cout << "Valid Password" << endl;
	else
		cout << "Invalid Password" << endl;
}

