#include <cstdlib>
#include <cstdio>
#include <locale>
#include <Windows.h>
#include <iostream>

using namespace std;

int main(int argc, char **argv) {
	SetConsoleOutputCP (CP_UTF8);
    int P, R;

    cout << "Digite a posição das portinhas P e R (0 ou 1): ";
    cin >> P >> R;

    if (P == 0) {
        if (R == 0) {
            cout << "A" << endl;
        } else if (R == 1) {
            cout << "B" << endl;
        }
    } else if (P == 1) {
        cout << "C" << endl;
    }

    return 0;
}
