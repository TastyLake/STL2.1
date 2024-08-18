#include <iostream>
#include <list>
#include <vector>

int main() {

    std::vector<int> vec;
    std::list<int> list;

    int num;
    int i = 0;

    do {
        std::cin >> num;
        vec.push_back(num);
        i++;
    } while (i != 9);

    for (int i = 0; i < 9; i++) {

        list.insert(list.begin(), { vec[i] });
    };

    list.sort();
    list.unique();

    for (const auto& elem : list) {
        std::cout << elem << " ";
    }
}