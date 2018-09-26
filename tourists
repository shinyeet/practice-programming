#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, char *argv[]) 
{
    if(argc < 2)
    {
        cout << "Please enter the name of the file to read as an argument" << endl;
        return 1;
    }

    ifstream ifile;
    ifile.open(argv[1]);
    ofstream ofile("output.txt");

  if( ifile.fail() )
  {
    cout << "Unable to open file: " << argv[1] << endl;
    return 1;
  }

    int T; //number of campuses
    int N; //number of attractions
    int K; //number of attractions per visit
    long long V; //number of current visit
    int Case = 0;

    ifile >> T;

    for (int t = 0; t < T; t++)
    {
        Case++;

        ifile >> N >> K >> V;

        string *attractions = new string[N];
        
        for (int i = 0; i < N; i++) 
        {
            ifile >> attractions[i];
        }

        int place = 0;

        long long stops = (V-1) * K;
        place = stops%N;

        ofile <<"Case #" << Case << ": ";

        if (place+K >= N)
        {
            int extra = place + K - N;

            for (int i = 0; i < extra; i++)
            {
                ofile << attractions[i] << " ";
            }

            for (int i = 0; i < K - extra; i++)
            {
                ofile << attractions[place] << " ";
                place++;
            }

        }

        else
        {
            for (int i = 0; i < K; i++) 
            {
                ofile << attractions[place] << " ";
                place++;
            }
        }

        delete [] attractions;

        ofile << endl;

    }

    ifile.close();
    ofile.close();

    return 0;

}

