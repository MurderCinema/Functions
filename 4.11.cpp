#include <iostream>

bool even(int k)
{
  return !(k & 1);
}

int main()
{
  int number, count = 0;
  std::cout << "Vvedite 10 chisel:" << std::endl;
  for (int i = 0; i < 10; ++i)
  {
    std::cin >> number;
    if (even(number))
    {
      ++count;
    }
  }
  std::cout << "Even numbers count: " << count << std::endl;
  return 0;
}
