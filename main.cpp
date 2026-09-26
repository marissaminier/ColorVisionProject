#include <iostream>
using namespace std;

int main() {
    string color;
    int number;
    int score = 0;

    cout << "Welcome to the colorblind friendly program!\n";
    cout << "I can help give you a general idea of which colors and color combinations are colorblind friendly.\n";
    cout << "How many colors are you working with? (3 maximum): ";
    cin >> number;

    for (int index = 1; index <= number; index++) {
        cout << "\nEnter color " << index << ": ";
        cin >> color;

        if (color == "Orange") {
            score++;
            cout << "Good choice! Orange is typically colorblind friendly.\n"; }
        else if (color == "Pink") {
            score++;
            cout << "Good choice! Pink is typically colorblind friendly.\n"; }
        else if (color == "Purple") {
            score++;
            cout << "Good choice! Purple is typically colorblind friendly.\n"; }
        else {
            cout << color << " is typically not colorblind friendly.\n"; }
    }

    cout << "\nResults:\n";
    switch (score) {
        case 3:
            cout << "Your color/color combination is colorblind friendly!\n";
            break;
        case 2:
            cout << "Your color/color combination is mostly colorblind friendly.\n";
            break;
        case 1:
            cout << "Your color/color combination isn't very colorblind friendly.\n";
            break;
        default:
            cout << "Your color/color combination is not colorblind friendly!\n"; }

    return 0;
}