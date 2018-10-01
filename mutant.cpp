#include <iostream>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
	ifstream ifile;
	ifile.open(argv[1]);

	if(ifile.fail())
	{
		cout << "error opening file" << endl;
		return 1;
	}

	int K;
	ifile >> K;

	for (int i = 1; i <= K; i++)
	{
		int n,k;
		ifile >> n >> k;

		char mytraits[100];

		char trait;

		for (int j = 0; j < k; j++)
		{
			ifile >> trait;
			mytraits[j] = trait;
		}

		bool same_traits[100];
		for (int t = 0; t < k; t++)
		{
			same_traits[t] = false;
		}

		for (int s = 0; s < n; s++)
		{
			for (int r = 0; r < k; r++)
			{
				ifile >> trait;
				if (trait == mytraits[r])
				{
					same_traits[r] = true;
				}
			}
		}

		int mutations = 0;
		for (int f = 0; f < k; f++)
		{
			if (same_traits[f]==false)
			{
				mutations++;
			}

		}

		cout << "Data Set " << i << ':' << endl;
		cout << mutations << "/" << k << endl;
		cout << endl;

	}
	return 0;
}