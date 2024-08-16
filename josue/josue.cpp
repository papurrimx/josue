#include <iostream> 
using namespace std;

int main()
{
    const int Num = 8;
    int nums[Num];
    int total = 0;

    for (size_t i = 0; i < Num; i++) {
        cout << "Ingrese el numero: ";  // Se añadió un espacio después del texto.
        cin >> nums[i];
        total += nums[i];
    }

    cout << "El resultado es: " << total << endl;
    system("pause");
    return 0;
}
