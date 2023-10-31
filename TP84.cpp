#include <iostream>
#include <vector>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

vector<int> GenerarVector(int n);
bool EsSimetrico(vector<int> a);
void MostrarVector(vector<int> A);

int main()
{
    vector<int> n;
    string msg = "Es simetrico";
    srand(time(NULL));
    int N = 5;
    n = GenerarVector(N);
    MostrarVector(n);
    if (!EsSimetrico(n))
    {
    	msg = "No es simetrico";
	}
    cout<<msg<<endl;
    return 0;
}

vector<int> GenerarVector(int n)
{
    vector<int> V;
    int e;
    for (int i = 0; i < n; i++)
    {
        e = rand() % 10;
        V.push_back(e);
    }
    return V;
}

bool EsSimetrico(vector<int> a)
{
	bool flag = true;
	int e = a.size();
	for (int i = 0; i < e / 2; i++)
	{
		if (a[i] != a[e - 1 - i])
		{
			flag = false;
			i = e / 2;
		}
	}
    return flag;
}

void MostrarVector(vector<int> A)
{
    for (int i = 0; i < A.size(); i++)
    {
        cout << A[i] << "/";
    }
    cout << endl;
}