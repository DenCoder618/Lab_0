// Создайте класс Rational (рациональная дробь)

// TODO:
// приватные поля для данных
// конструктор, содержащий значения по умолчанию
// функции-элементы установки и извлечения значений
// перегруженные операторы ввода и вывода
// конструктор копий
// оператор присваивания

// указанные в задании перегруженные операции
// ++ -- -n == != = + += - -= * *= / /= > < >= <=

#include "rational.h"
using namespace std;

// тестирование функций класса
int main() {
  cout << "\n// --- TEST 1 --- //\n\n";
  // тут тестируются:
  // конструкторы, геттеры, сеттеры,
  // вывод, конструктор копий, присваивания

  Rational lol(1, 2), kek = {2, 3};
  cout << "Rational 1 / 2: " << lol << endl;
  cout << "Rational 2 / 3: " << kek << endl;

  Rational temp(618);
  cout << "Int 618 to Rational: " << temp << endl;

  Rational test(42, 618);
  cout << "42 / 618 = " << test << " -> ";

  test.set(618, 42);
  cout << test << " -> ";
  cout << test.numerator() << " / " << test.denominator() << " -> ";

  test.numerator() = 6;
  test.denominator() = 18;
  cout << test << endl;

  Rational test_copy(test);
  cout << test << " = " << test.simplify() << " => copy: " << test_copy << endl;

  lol = kek = temp = test;
  cout << lol << ", " << kek << ", " << temp << endl;

  cout << "\n// --- TEST 2 --- //\n\n";
  // тут тестируются:
  // ++ -- -n + += - -= * *= / /=

  lol = {42, 618};
  kek = {69, 420};
  long long abc = 777;

  cout << "(" << lol << ")++ = (" << ++lol << ")\n";
  cout << "(" << lol << ")-- = (" << --lol << ")\n";
  cout << "-(" << lol << ") = (" << -lol << ")\n";

  cout << "(" << lol << ") + (" << kek << ") = " << lol + kek << endl;
  cout << "(" << lol << ") + (" << abc << ") = " << lol + abc << endl;
  cout << "(" << abc << ") + (" << lol << ") = " << abc + lol << endl;

  cout << "(" << lol << ") - (" << kek << ") = " << lol - kek << endl;
  cout << "(" << lol << ") - (" << abc << ") = " << lol - abc << endl;
  cout << "(" << abc << ") - (" << lol << ") = " << abc - lol << endl;

  cout << "(" << lol << ") * (" << kek << ") = " << lol * kek << endl;
  cout << "(" << lol << ") * (" << abc << ") = " << lol * abc << endl;
  cout << "(" << abc << ") * (" << lol << ") = " << abc * lol << endl;

  cout << "(" << lol << ") / (" << kek << ") = " << lol / kek << endl;
  cout << "(" << lol << ") / (" << abc << ") = " << lol / abc << endl;
  cout << "(" << abc << ") / (" << lol << ") = " << abc / lol << endl;

  lol = {42, 618};
  kek = {69, 420};
  abc = 777;
  cout << "(" << lol << ") += (" << kek << ") -> " << (lol += kek) << endl;
  cout << "(" << lol << ") += (" << abc << ") -> " << (lol += abc) << endl;

  lol = {42, 618};
  kek = {69, 420};
  abc = 777;
  cout << "(" << lol << ") -= (" << kek << ") -> " << (lol -= kek) << endl;
  cout << "(" << lol << ") -= (" << abc << ") -> " << (lol -= abc) << endl;

  lol = {42, 618};
  kek = {69, 420};
  abc = 777;
  cout << "(" << lol << ") *= (" << kek << ") -> " << (lol *= kek) << endl;
  cout << "(" << lol << ") *= (" << abc << ") -> " << (lol *= abc) << endl;

  lol = {42, 618};
  kek = {69, 420};
  abc = 777;
  cout << "(" << lol << ") /= (" << kek << ") -> " << (lol /= kek) << endl;
  cout << "(" << lol << ") /= (" << abc << ") -> " << (lol /= abc) << endl;

  cout << "\n// --- TEST 3 --- //\n\n";

  // тут тестируются:
  // == != > >= < <=

  Rational testA(1, 2);
  Rational testB(1, 2);

  if (testA == testB) cout << "testA == testB" << endl;
  if (testA == testA) cout << "testA == testA" << endl;

  Rational testNew(testA);
  if (testA == testNew) cout << "testA == testNew" << endl;

  cout << ++testNew << ", " << testNew << endl;
  if (testA == testNew) cout << "testA == testNew" << endl;

  cout << testA++ << ", " << testA << endl;
  if (testA == testNew) cout << "testA == testNew" << endl;

  temp = {10, -20};
  cout << temp << ", " << temp.simplify() << ", " << temp << endl;

  lol = {42, 618}, kek = {69, 420};
  cout << lol << " > " << kek << (lol > kek ? " = True" : " = False") << endl;
  cout << lol << " >= " << kek << (lol >= kek ? " = True" : " = False") << endl;
  cout << lol << " < " << kek << (lol < kek ? " = True" : " = False") << endl;
  cout << lol << " <= " << kek << (lol <= kek ? " = True" : " = False") << endl;

  // --- TEST 4 ---
  cout << "\n// --- Summ Test --- //\n\n";

  Rational rr;
  for (int i = 1; i < 30; i++) {
    Rational temp(1, i);
    rr = rr + temp;
    cout << rr << " = " << rr.get_value() << endl;
  }
}