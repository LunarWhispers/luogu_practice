#include "iostream"

using namespace std;

int main() {

    int road, area;
    int start, end;
    cin >> road >> area;
    int roader[road + 1];
    for (int i = 0; i < road + 1; ++i) {
        roader[i] = 0;
    }
    for (int i = 0; i < area; ++i) {
        cin >> start >> end;
        for (int j = start; j <= end; ++j) {
            roader[j] = 1;
        }
    }
    int num = 0;
    for (int k = 0; k < road + 1; ++k) {
        if (roader[k] != 1) {
            num++;
        }
    }
    cout << num;

    return 0;
}
