#include <iostream>
using namespace std;


int celToCelvin( int celcius ) {
  return celcius * 9 / 5  + 32;
}

int celToFahrenheit( int celcius ) {
  return celcius + 273;
}

int celToReamur( int celcius ) {
  return (4 / 5) * celcius;
}

int main() {

  //soal nomor 1
  int a, y;
  cout << "1. rumusnya adalah Y = A^3 + 7 "<< endl;
  cout << "masukan nilai A =  " ;cin >> a;
  y = ( a * a * a ) + 7;
  cout << y << endl;

  //soal nomor 2
  int x, b, c;
  cout << "2. rumusnya adalah Y = A x X^2 + B x X + C" << endl;
  cout << "masukan nilai A =  " ; cin >> a ;
  cout << "masukan nilai B =  " ; cin >> b ;
  cout << "masukan nilai C =  " ; cin >> c ;
  cout << "masukan nilai X =  " ; cin >> x ;

  y = ( a * ( x * x )) + ( b * x ) + c;
  cout << y << endl;

  //soal nomor 3. A
  int number[4], isAllow;
  float sum, result;
  cout << "3. a. Massukan 5 bilangan angka" << endl;
  for( int i = 0; i <= 4; i++ ) {
    cout << "masukan angka ke-" << i + 1 << " = "; cin >> number[i];
    sum += number[i];
  }
  cout << "Jumlah dari bilangan yang anda inputkan adalah : " << sum << endl;

  //soal nomor 3. B
  cout << "3. b. Apakah anda ingin menggunakan angka sebelumnya? " << endl;
  cout << "ketik 1 untuk ya ketik 0 untuk tidak dan ketik selain 1 dan 0 kalo engga mau! :" ; cin >> isAllow ;

  if( isAllow == 1 ) {
    result = sum / 5;
    cout << "rata rata dari bilangan yang anda inputkan adalah : " << result << endl;
  } else if(isAllow == 0) {
    cout << "3. b. Massukan 5 bilangan angka" << endl;
    sum = 0;
    for( int i = 0; i <= 4; i++ ) {
      cout << "masukan angka ke-" << i + 1 << " = "; cin >> number[i];
      sum += number[i];
    }
    result = sum / 5;
    cout << "Jumlah dari bilangan yang anda inputkan adalah : " << sum << endl;
    cout << "rata rata dari bilangan yang anda inputkan adalah : " << result << endl;
  } else {
    cout << "apalah" << endl;
  }

  // soal nomor 4. A celcius to fahrenheit
  int isContinue = 0;
  int celcius = 0;

  cout << "Celcius to fahrenheit calculator" << endl;
  cout << "masukan nilai celcius : "; cin >> celcius;
  result = celToCelvin(celcius);
  cout << "The result is  " << result << " deg Celvin" << endl;
  cout << "apakah mau lanjutin : "; cin >> isContinue;
  if( isContinue == 1) {
    result = celToFahrenheit(celcius);
    cout << "The result is  " << result << " deg Fahrenheit" << endl;
    result = celToReamur(celcius);
    cout << "The result is  " << result << " deg Reamur" << endl;
  }else{
    //soal nomor 4. B celciuss to kelvin
    cout << "Celcius to kelvin calculator" << endl;
    cout << "masukan nilai celcius : "; cin >> celcius;
    result = celToFahrenheit(celcius);
    cout << "The result is  " << result << " deg Fahrenheit" << endl;

    //soal nomor 4. C celciuss to reamur
    cout << "Celcius to reamur calculator" << endl;
    cout << "masukan nilai celcius : "; cin >> celcius;
    result = celToReamur(celcius);
    cout << "The result is  " << result << " deg Fahrenheit" << endl;
  }

  

  return 0;
}