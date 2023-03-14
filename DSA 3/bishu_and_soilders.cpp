#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int soldiers[n];
    
    for (int i = 0; i < n; i++)
        cin >> soldiers[i];
        
    sort(soldiers, soldiers + n);
    
    int prefix_sum[n];
    prefix_sum[0] = soldiers[0];
    
    for (int i = 1; i < n; i++)
        prefix_sum[i] = prefix_sum[i - 1] + soldiers[i];

    int q;
    cin >> q;
    
    while (q--) {
        int power;
        cin >> power;
        
        int index = upper_bound(soldiers, soldiers + n, power) - soldiers - 1;
        
        if (index == -1)
            cout << "0 0" << endl;
            
        else
            cout << index + 1 << " " << prefix_sum[index] << endl;
    }
    
    return 0;
}