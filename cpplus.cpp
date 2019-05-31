#include <iostream>
#include <fstream>
using namespace std;

double getY(double x)
{
    double x_a, y_a, x_b, y_b, y;
    x_a = 2;
    y_a = 5;
    x_b = 8;
    y_b = 10;
    
    y = ( (y_a-y_b)/(x_a-x_b)*x + (y_a - (y_a-y_b)/(x_a-x_b)*x_a) );
    
    return y;
}

int main()
{
    double x_a, y_a, x_b, y_b, x_c, y_c;
    x_a = 2;
    y_a = 5;
    x_b = 8;
    y_b = 10;
    
    x_c = 4;

    cout << "1. Wartosc wspolrzednej y punktu C(4, y) dla A(2,5), B(8,10): " << getY(x_c) << endl;
    cout << "2. Podaj wspolrzedne punktow A i B" << endl;
    
    cout << "Ax: ";
    cin >> x_a;
    cout << "Ay: ";
    cin >> y_a;
    
    cout << "Bx: ";
    cin >> x_b;
    cout << "By: ";
    cin >> y_b;
    
    int n;
    cout << "Dla ilu punktow obliczyc y?: ";
    cin >> n;
    
    double x_values[n], y_values[n];
    ofstream outfile;
    outfile.open("points.csv");
    
    for (int i=0; i<n; i++)
    {
        cout << "Podaj x nr " << i << ": ";
        cin >> x_values[i];
        y_values[i] = getY(x_values[i]);
        cout << "y[" << i << "] = " << y_values[i] << endl;
        outfile << x_values[i] << "," << y_values[i] << endl;
    
    }
    
    outfile.close();
   
    return 0;
}
