#include<bits/stdc++.h>

using namespace std;

#define N 3

int
main() {
  float Matrix[N][N + 1], x[N];
  float temp, s;
  int i, j, k;
  cout << "\n" << setw(7) << "Enter Elements of " << N << " Rows & " << N + 1 << " Columns\n\n";
  cout << fixed;
  for (i = 0; i < N; i++) {
    cout << setw(7) << "Enter Row  " << i + 1 << " & Press Enter\n";
    for (j = 0; j < N + 1; j++)
      cin >> Matrix[i][j];
  }
  for (j = 0; j < N - 1; j++) {
    for (i = j + 1; i < N; i++) {
      temp = Matrix[i][j] / Matrix[j][j];
      for (k = 0; k < N + 1; k++)
        Matrix[i][k] -= Matrix[j][k] * temp;
    }
  }
  cout << "\n ---------------------------------\n";
  cout << setw(7) << "Upper Triangular Matrix is:\n\n";
  for (i = 0; i < N; i++) {
    for (j = 0; j < N + 1; j++)

      cout << setw(7) << setprecision(2) << Matrix[i][j];
      cout << endl;
}
  cout << "\n ---------------------------------\n\n";
  for (i = N - 1; i >= 0; i--)
{
    s = 0;

    for (j = i + 1; j < N; j++)

      s += Matrix[i][j] * x[j];

    x[i] = (Matrix[i][N] - s) / Matrix[i][i];

  }

  cout << setw(7) << "The Solution is:\n\n";

  for (i = 0; i < N; i++)

    cout << setw(7) << "x" << i +
    1 << " = " << setw(3) << setprecision(2) << x[i] << endl << endl;
   cout << "\n   Name: Azizul Hoque\n  ID: C173065\n";
return 0;}
