#include <iostream>
#include <set>

int main(void)
{
  std::set<int> S;
  int i;
  std::set<int>::iterator j;

  while (std::cin >> i)
  {
    S.insert(i);
  }

  std::cout << "---\n";

  for (j = S.begin(); j != S.end(); ++j)
  {
    std::cout << *j << "\n";
  }

  return 0;
}
