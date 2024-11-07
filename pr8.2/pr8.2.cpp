#include <iostream>

int main() {
    setlocale(0, "ru");
    int sum = 0; 
    int current = 1; 
    std::cout << "Последовательность: ";

    while (current <= 256) {
        std::cout << current << " "; 
        sum += current; 
        current *= 2; 
    }

    std::cout << "\nСумма элементов последовательности: " << sum << std::endl;

    return 0;
}
