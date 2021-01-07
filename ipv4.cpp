/*  ipv4 address validation
number range is from 0 to 255
leading zeros not allowed(eg. 001,01,05)
*/

#include <bits/stdc++.h>
using namespace std;
#define DELIM "."

bool valid(char* s)
{
	int n = strlen(s);
	
	if (n > 3)
		return false;
	
	for (int i = 0; i < n; i++)
		if ((s[i] >= '0' && s[i] <= '9') == false)        // check whether it contains digits
			return false;
	string str(s);
	
	if (str.find('0') == 0 && n > 1)                    // checking for leading zeros(001,01)
		return false;
	stringstream ss(str);                               //converting to int
	int x;
	ss >> x;
	
	return ((x >= 0 && x <= 255) ? 1 : 0);
}

int valid_ip(char* ip_str)
{
	if (ip_str == NULL)
		return 0;
	int i, num, dots = 0;
	int len = strlen(ip_str);
	int count = 0;
	
	for (int i = 0; i < len; i++)
		if (ip_str[i] == '.')
			count++;
	if (count != 3)
		return false;

	char *ptr = strtok(ip_str, DELIM);                  //string tokenises-strtok() tokenizes the string (eg. 120.230.40.52 - each ptr =each term ,first ptr=120 then 230...)
	if (ptr == NULL)
		return 0;

	while (ptr) {

		if (valid(ptr)) 
		{
			ptr = strtok(NULL, ".");
			if (ptr != NULL)
				++dots;
		}
		else
			return 0;
	}

	if (dots != 3)
		return 0;
	return 1;
}

int main()
{
	char ip[100];
	cin>>ip;
	valid_ip(ip) ? cout<<"Valid\n" : cout<<"Invalid\n";
	return 0;
}
