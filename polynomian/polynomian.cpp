#include <iostream>

using namespace std;

// wielomian n1 4x^4-8x^3+x^2-6x+10
// wielomian n2 9x^4-2x^3+4x^2-x-3

// dodawanie
int add()
{
    cout << endl << "Wynik dodawania dwoch wielomianow to ";
    double n1[5] = { 4, -8, 1, -6, 10};
    double n2[5] = { 9, -2, 4, -1, -3};
    int i;
    for( i = 0; i < 3; i++ )
    {
        if( i > 0 && n1[i] + n2[i] > 0 )
            cout << "+";
        cout << n1[i] + n2[i] << "x^" << 4-i;
    }
    cout << n1[i] + n2[i] << "x";
    if( i > 0 && n1[i] + n2[i] < 0 )
            cout << "+";
    i++;
    cout << n1[i] + n2[i] << endl;

    return 0;
}

// odejmowanie
int sub()
{
    cout << endl << "Wynik odejmowania dwoch wielomianow to ";
    double n1[5] = { 4, -8, 1, -6, 10};
    double n2[5] = { 9, -2, 4, -1, -3};
    int i;
    for( i = 0; i < 3; i++)
    {
        if( i > 0 && n1[i] - n2[i] > 0)
            cout << "+";
        cout << n1[i] - n2[i] << "x^" << 4-i;
    }
    cout << n1[i] - n2[i] << "x";
    i++;
    if( n1[i] - n2[i] > 0)
            cout << "+";
    cout << n1[i] - n2[i] << endl;

    return 0;
}

//mnożenia
int mul()
{
    cout << endl << "Wynik mnozenia dwoch wielomianow to ";
    double n1[5] = { 4, -8, 1, -6, 10};
    double n2[5] = { 9, -2, 4, -1, -3};
    double n3[9] = {0, 0, 0, 0, 0, 0, 0, 0, 0};
    int i, j, a;
    for( i = 0; i < 5; i++)
        for( j = 0; j < 5; j++)
        {
            n3[i+j] = n3[i+j] + (n1[i] * n2[j]);
        }

    for( a = 0; a < 7; a++)
    {
        if( a > 0 && n3[a] > 0)
            cout << "+";
        cout << n3[a] << "x^" << 8-a;
    }
    if( a > 0 && n3[a] > 0)
            cout << "+";
    cout << n3[a] << "x";
    a++;
    if( n3[a] > 0)
            cout << "+";
    cout << n3[a];
    
    return 0;
}