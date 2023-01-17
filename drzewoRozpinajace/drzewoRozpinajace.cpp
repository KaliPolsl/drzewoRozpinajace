#include <iostream>
#include <fstream>
#include <sstream> 
#include <vector>
#include <algorithm>


using namespace std;

struct krawedz
{
    int waga1;
    int waga2;
    double dlugosc;
};

vector <krawedz> calyGraf;

bool porwnianie(krawedz a, krawedz b)
{
    if (a.dlugosc < b.dlugosc) return true;
    return false;
}

int main()
{
    /** (doxygen)
        @param NAZWA_PLIKU 
        @param LICZBA_WIERSZY 
        @param LICZBA_KOLUMN

    */


    {
        ifstream plik("graf.txt");
        if (plik)
        {
            string wiersz;
            double liczba;
            int w1;
            int w2;
            krawedz p;
            while (getline(plik, wiersz))
            {
                stringstream ss;
                char znak;
                ss << wiersz; //string
                while (ss >> znak >> w1 >> znak >> w2 >> znak >> liczba >> znak >> znak)
                {
                    krawedz Krawedz;
                    Krawedz.waga1 = w1;
                    Krawedz.waga2 = w2;
                    Krawedz.dlugosc = liczba;
                    calyGraf.push_back(Krawedz);
                }
            }

        }
        else cout << "nie udalo sie otworzyc pliku :(" << endl;

        sort(calyGraf.begin(), calyGraf.end(), porwnianie);

        for (int i = 0; i < calyGraf.size(); i++)
        {
            cout << calyGraf[i].dlugosc << endl;
        }
    }



    return 0;
}

