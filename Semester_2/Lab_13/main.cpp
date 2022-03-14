// Создайте класс Rational (рациональная дробь)

// TODO:
//* приватные поля для данных
//* конструктор, содержащий значения по умолчанию
//* функции-элементы установки и извлечения значений
//* перегруженные операторы ввода и вывода
//* конструктор копий
//* оператор присваивания
//? указанные в задании перегруженные операции
// +, +=, -, -=, =, ==, !=, >, <, >=, <=, *, *=, /, /=

#include "rational.h"
using namespace std;

int main() {
  Rational test(1, 2);
  printf(
    "%lld / %lld = %f\n",
    test.numerator(),
    test.denominator(),
    test.get_value()
  );

  Rational test2(2, 3);
  cout << test2 << endl;

  test2.denominator() = 42;
  printf("%f\n", test2.get_value());

  test2.numerator() = 42;
  printf("%f\n", test2.get_value());
  
  cout << test << ", " << test2 << endl;

  cin >> test;
  cout << "\n" << test << " = " << test.get_value() << "\n";

  Rational test3(test);
  cout << "\n" << test3 << " = " << test3.get_value() << "\n";

  Rational r1(1, 2);
  Rational r2(1, 3);
  Rational r3(1, 4);
  r1 = r2 = r3; // - 1 / 4
  cout << r1 << ", " << r2 << ", " << r3 << endl;
}
