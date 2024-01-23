#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
	ifstream pirkiniai("pirkiniai.txt");
	ofstream islaidos("islaidos.txt");

	float viso = 0; float suma; float laikinas;
	int n; int m;
	pirkiniai >> n >> m;

	for(int i = 1; i <= n; i++)
	{
    	suma = 0;
    	for(int o = 1; o <= m; o++)
    	{
        	pirkiniai >> laikinas;
        	suma += laikinas;
    	}
    	islaidos << i << " " << fixed << setprecision(2) << suma << " Eur" << endl;
    	viso += suma;
	}
	islaidos << "Viso isleista: " << fixed << setprecision(2) << viso << " Eur";
	return 0;
}

