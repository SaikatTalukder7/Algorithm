#include <bits/stdc++.h>
using namespace std;

struct Activity {
    string name;
    double start;
    double end;
};

// Comparator function to sort activities by end time
bool compare(Activity a, Activity b) {
    return a.end < b.end;
}

int main() {
    int n;
    cout << "Enter number of activities: ";
    cin >> n;

    Activity a[n];

    // Input activities
    for (int i = 0; i < n; i++) {
        cout << "Enter name, start time, and end time of activity " << i + 1 << ": ";
        cin >> a[i].name >> a[i].start >> a[i].end;
    }

    // Sort activities by end time
    sort(a, a + n, compare);

    cout << "\nSelected activities:\n";

    // Select the first activity
    double lastEnd = -1;

    for (int i = 0; i < n; i++) {
        if (a[i].start >= lastEnd) {
            cout << a[i].name << " (" << a[i].start << ", " << a[i].end << ")\n";
            lastEnd = a[i].end;
        }
    }

    return 0;
}
