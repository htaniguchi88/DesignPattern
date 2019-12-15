#include <bits/stdc++.h>
#include "StringDisplayImpl.h"
#include "CountDisplay.h"

#define rep(i, n) for(int i=0; i<(n); ++i)
using namespace std;
typedef long long ll;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(false);

    DisplayImpl *impl= new StringDisplayImpl();
    Display display(impl);
    display.Show("Hello Tokyo ");

    CountDisplay countDisplay(impl);
    countDisplay.ShowMultipleTimes(5,"Hello Yokohama ");

    return 0;
}