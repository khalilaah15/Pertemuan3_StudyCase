#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int kwh;
    double totalTagihan = 0, diskon = 0, totalSetelahDiskon = 0;
    char pilihan;

    do
    {
        totalTagihan = 0;
        diskon = 0;
        totalSetelahDiskon = 0;

        while (true)
        {
            cout << "Masukkan penggunaan listrik (kWh): ";
            cin >> kwh;

            if (kwh >= 0)
            {
                break;
            }
            else
            {
                cout << "Input tidak valid. Silakan masukkan angka yang tidak negatif.\n";
            }
        }

        if (kwh <= 100)
        {
            totalTagihan = kwh * 1500;
        }
        else if (kwh <= 300)
        {
            totalTagihan = (100 * 1500) + ((kwh - 100) * 2000);
        }
        else
        {
            totalTagihan = (100 * 1500) + (200 * 2000) + ((kwh - 300) * 3000);
        }

        if (totalTagihan > 1000000)
        {
            diskon = totalTagihan * 0.10;
        }

        totalSetelahDiskon = totalTagihan - diskon;
        cout << fixed << setprecision(2);
        cout << "\nTotal Penggunaan Listrik: " << kwh << " kWh" << endl;
        cout << "Total Tagihan Sebelum Diskon: Rp" << totalTagihan << endl;
        cout << "Diskon: Rp" << diskon << endl;
        cout << "Total Tagihan Setelah Diskon: Rp" << totalSetelahDiskon << endl;

        cout << "\nIngin menghitung tagihan untuk penggunaan lain? (1 untuk ya, selain itu untuk tidak): ";
        cin >> pilihan;

    } while (pilihan == '1');

    cout << "Program selesai. Terima kasih!\n";

    return 0;
}
