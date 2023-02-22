// Somatório com o for
#include <iostream>

using std::cout;
using std::endl;

int main() {
    int sum = 0;

    for (int number = 2; number <= 100; number += 2)
        sum += number;

    cout << "A soma é " << sum << endl;

    // uma alternativa, não recomendada por prejudicar a leitura
    sum = 0;

    for (int num = 2; num <= 100; sum += num, num += 2);

    cout << "A soma é " << sum << endl;

    return 0;
}
