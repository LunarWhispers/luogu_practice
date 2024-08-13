#include "iostream"

using namespace std;

int main() {
    int a, b, c, d, e, f, g, h, i, j, cm;
    int count = 0;
    cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j;
    cin >> cm;
    int num[10] ={a,b,c,d,e,f,g,h,i,j};
    cm = cm + 30;
    for (int k = 0; k < 10; ++k) {
        if (num[k] <= cm){
            count++;
        }
    }
    cout << count <<endl;
    return 0;
}
