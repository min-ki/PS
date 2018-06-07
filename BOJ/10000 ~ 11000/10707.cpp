#include <iostream>
using namespace std;

int main() {
    int x_price, y_price, c, d, p, x, y;
    
    cin >> x_price >> y_price >> c >> d >> p;
    
    x = x_price * p;
    
    if(p <= c) y = y_price;
    else y = y_price + d * (p - c);
    
    if(x <= y) cout << x << '\n';
    else cout << y << '\n';
    
	return 0;
}
