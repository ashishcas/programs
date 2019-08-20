#include <iostream>

using namespace std;

int main()
{
   char s[100];

	cout << "Enter a string: ";
	cin.getline(s,100);
	int k=0,wor=0;

	int words = 0; // Holds number of words

	for(int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ') //Checking for spaces
		{
		 	words++;
		 	k =0;
		}
		k++;
		if(k>20)
        {
            wor = 1;
        }

	}

	cout << "The number of words = " << words+1-wor<< endl;

	return 0;
}
