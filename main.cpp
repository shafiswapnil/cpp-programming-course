// #include <iostream>

// int main()
// {
//   std::cout << "Hello World!";
//   return 0;
// }

#include <iostream>

int main()
{
  auto result = (10 <=> 20) > 0;
  std::cout << result << std::endl;
}
