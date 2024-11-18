void recurse_forever(int n) {
    cout << "n is now " << n << "." << endl;
    recurse_forever(n + 1);
}