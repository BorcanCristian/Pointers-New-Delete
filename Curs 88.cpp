#include <iostream>
#include <array>
#include <vector>

auto init_vector()
{
    int elem_count = 0;
    std::cout << "N = ";
    std::cin >> elem_count;

    auto result = new std::vector<int>{};
    (*result).reserve(elem_count);
    for (int i = 0; i < elem_count; ++i)
    {
        int t = 0;
        std::cout << "v[" << i << "] = ";
        std::cin >> t;
        (*result).push_back(t);
    }
    return result;
}

int main()
{
    auto the_vec = init_vector();

    for (auto v : (*the_vec)
    {
        std::cout << v << ' ';
    }
    std::cout << '\n';

        delete the_vec;
    return 0;
}