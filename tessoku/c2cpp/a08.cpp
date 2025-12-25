#include <iostream>
using namespace std;

int main() {
  int h, w;
  cin >> h >> w;
  int x[1510][1510];
  for (int i = 0; i <= h; i++) {
    for (int j = 0; j <= w; j++) {
      x[i][j] = 0;
    }
  }
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      cin >> x[i][j];
    }
  }
  for (int i = 1; i <= h; i++) {
    for (int j = 1; j <= w; j++) {
      x[i][j] += x[i][j - 1];
    }
  }
  for (int i = 1; i <= w; i++) {
    for (int j = 1; j <= h; j++) {
      x[j][i] += x[j - 1][i];
    }
  }

  int q;
  cin >> q;
  int a[100000], b[100000], c[100000], d[100000];
  for (int i = 0; i < q; i++)
    cin >> a[i] >> b[i] >> c[i] >> d[i];

  for (int i = 0; i < q; i++) {
    cout << x[c[i]][d[i]] + x[a[i] - 1][b[i] - 1] - x[a[i] - 1][d[i]] -
                x[c[i]][b[i] - 1]
         << endl;
  }
  return 0;
}
