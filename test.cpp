#include "iacaMarks.h"
#include <bits/stdc++.h>
using namespace std;

int main() {
	double fact = 1;
	unsigned n = rand()%100;
	IACA_START
	for(int i = 2; i <= n; ++i) {
            fact *= i;
        }
        IACA_END
        cout << fact;
        return 0;
}
