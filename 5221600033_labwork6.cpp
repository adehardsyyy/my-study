#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  bool again = true;
  string userAnswer;
    while (again == true)
    {
      int input;

      cout << "=============== WELCOME IBU DEA ===============" << endl;
      cout << "==== Program Menghitung Luas dan Keliling ====" << endl;
      cout << "==== 1. Lingkaran" << endl;
      cout << "==== 2. Persegi" << endl;
      cout << "==== 3. Segitiga" << endl;
      cout << "==== 4. Trapesium" << endl;
      cout << "==== 5. Jajar Genjang" << endl;
      cout << "==== 6. Layang-layang" << endl;
      cout << "==== 7. Belah Ketupat" << endl;
      cout << endl;
      
      cout << "Pilih Program yang ingin dijalankan: ";
      cin >> input;

      switch (input)
      {
        // Lingkaran
        case 1 : {
          double phi = 3.14, keliling, luas;
          int r;

          cout << "Menghitung Luas dan Keliling Lingkaran" << endl;
          cout << "Input Jari-jari      : ";
          cin >> r;

          keliling = phi * (2 * r);
          luas = phi * (r * r);

          cout << endl;
          cout << "Keliling             : "  << keliling << endl;
          cout << "Luas                 : "  << luas << endl;
          break;
        }

        // Persegi
        case 2 : {
          int s, keliling, luas;

          cout << "Menghitung Luas dan Keliling Persegi" << endl;
          cout << "Input Sisi          : ";
          cin >> s;

          keliling = s * 4;
          luas = s * s;

          cout << endl;
          cout << "Keliling             : "  << keliling << endl;
          cout << "Luas                 : "  << luas << endl;
          break;
        }

        //segitiga
        case 3 : 
        {
            int a, t, keliling, luas;

            cout << "menghitung luas dan keliling segitiga" <<endl;
            cout << "input alas         : ";
            cin >> a;
            cout << "input tinggi       : ";
            cin >> t;
            
            keliling = a * 3;
            luas = (a * t) /2;

            cout << endl;
            cout << "keliling           : " << keliling << endl;
            cout << "luas               : " << luas << endl;

            break;

        }

        // Trapesium
        case 4 : {
          int j, k, l, m, sisi1, sisi2, t, keliling, luas;

          cout << "Menghitung Luas dan Keliling Trapesium" << endl;
          cout << "Input Sisi j          : ";
          cin >> j;
          cout << "Input Sisi k          : ";
          cin >> k;
          cout << "Input Sisi l          : ";
          cin >> l;
          cout << "Input Sisi m          : ";
          cin >> m;

          sisi1 = j;
          sisi2 = l;
          t = m;

          keliling = j + k + l + m;
          luas = ((sisi1 + sisi2) * t) / 2;

          cout << endl;
          cout << "Keliling              : "  << keliling << endl;
          cout << "Luas                  : "  << luas << endl;
          break;
        }

        //jajar genjang
        case 5 : 
        {
            int sisi1, sisi2, t, keliling, luas;

          cout << "Menghitung Luas dan Keliling Trapesium" << endl;
          cout << "Input Sisi atas       : ";
          cin >> sisi1;
          cout << "Input Sisi bawah      : ";
          cin >> sisi2;
          cout << "Input Sisi tinggi     : ";
          cin >> t;
          
          keliling = 2 * (sisi1 + sisi2);
          luas = sisi1 * t;

          cout << endl;
          cout << "keliling               :" << keliling << endl;
          cout << "luas                   :" << luas << endl;
          break;
        }

        //layang-layang
        case 6 :
        {
            int sisi1, sisi2, diagonal1, diagonal2, keliling, luas;
        
          cout << "menghitung luas dan keliling layang-layang" << endl;
          cout << "input sisi 1             :";
          cin >> sisi1;
          cout << "input sisi2              :";
          cin >> sisi2;
          cout << "input diagonal 1         :";
          cin >> diagonal1;
          cout << "input diagonal 2         :";
          cin >> diagonal2;

          keliling = 2 * (sisi1 + sisi2);
          luas = (diagonal1 * diagonal2) /2;

          cout << endl;
          cout << "keliling                 :" << keliling << endl;
          cout << "luas                     :" << luas << endl;
          break;
        }

        //belah ketupat
        case 7 : 
        {
            int diagonal1, diagonal2, sisi, keliling, luas;
        
             cout << "menghitung luas dan keliling belah ketupat" << endl;
             cout << "input diagonal1         :";
             cin >> diagonal1;
             cout << "input diagonal2         :";
             cin >> diagonal2;

             sisi = ((diagonal1 /2) * (diagonal1 / 2)) + ((diagonal2 /2) * (diagonal2 / 2));
             keliling = sqrt (sisi) * 4;
             luas = (diagonal1 * diagonal2) /2;

             cout << endl;
             cout << "keliling               :" << keliling << endl;
             cout << "luas                   :" << luas << endl;
             break;
        }

        default :
            cout << endl;
            cout << "mohon angka sesuai pilihan yang ada" << endl;
            break;
        }

            cout << endl << "program selesai, apakah anda ingin menjalankan lagi? (yes/no)" << endl;
            cin >> userAnswer;
            if (userAnswer == "yes" || userAnswer == "yes")
        {
          again = true;
          cout << endl << endl;
        }
          else
        {
         again = false;
        }
    }
     return 0;
    }
