#include <bits/stdc++.h>
using namespace std;

double discriminante(double a, double b, double c) {
    return b * b - 4.0 * a * c;
}

void solve() {
    double a, b, c;
    cin >> a >> b >> c;

    if (a == 0 && b == 0 && c == 0) {
        cout << "-1\n"; // Soluciones infinitas
        return;
    } 
    
    if (a == 0 && b == 0) {
        cout << "0\n"; // Sin solución
        return;
    } 
    
    if (a == 0) {
        // Caso lineal: bx + c = 0
        cout << "1\n";
        cout << fixed << setprecision(5) << (-c) / b << "\n";
        return;
    }

    double disc = discriminante(a, b, c);
    if (disc < 0) {
        cout << "0\n"; // No hay soluciones reales
    } else if (disc == 0) {
        // Raíz doble
        cout << "1\n";
        cout << fixed << setprecision(5) << -b / (2.0 * a) << "\n";
    } else {
        // Dos raíces reales
        double sqrt_disc = sqrt(disc);
        double root1 = (-b - sqrt_disc) / (2.0 * a);
        double root2 = (-b + sqrt_disc) / (2.0 * a);
        cout << "2\n";
        cout << fixed << setprecision(5) << min(root1, root2) << "\n";
        cout << fixed << setprecision(5) << max(root1, root2) << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    solve();
    return 0;
}
