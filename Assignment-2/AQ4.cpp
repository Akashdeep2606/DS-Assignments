#include <iostream>
#include <cstring>   // for strcmp, strcpy
using namespace std;

int main() {
    // (a) Concatenate
    char str1[100], str2[100];
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    int i = 0, j = 0;
    while (str1[i] != '\0') i++;
    while (str2[j] != '\0') str1[i++] = str2[j++];
    str1[i] = '\0';
    cout << "Concatenated: " << str1 << endl << endl;

    // (b) Reverse
    char str3[100];
    cout << "Enter a string to reverse: ";
    cin >> str3;
    int len = 0;
    while (str3[len] != '\0') len++;
    for (int k = 0; k < len / 2; k++) {
        char temp = str3[k];
        str3[k] = str3[len - k - 1];
        str3[len - k - 1] = temp;
    }
    cout << "Reversed: " << str3 << endl << endl;

    // (c) Delete vowels
    char str4[100], result[100];
    cout << "Enter a string to remove vowels: ";
    cin >> str4;
    i = 0; j = 0;
    while (str4[i] != '\0') {
        char c = str4[i];
        if (!(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
              c=='A'||c=='E'||c=='I'||c=='O'||c=='U')) {
            result[j++] = c;
        }
        i++;
    }
    result[j] = '\0';
    cout << "Without vowels: " << result << endl << endl;

    // (d) Sort strings (using strcmp & strcpy)
    int n;
    cout << "Enter number of strings: ";
    cin >> n;
    char arr[10][100];
    cout << "Enter strings:\n";
    for (i = 0; i < n; i++) cin >> arr[i];

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (strcmp(arr[j], arr[j+1]) > 0) {
                char temp[100];
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
    cout << "Sorted strings:\n";
    for (i = 0; i < n; i++) cout << arr[i] << endl;
    cout << endl;

    // (e) Convert whole string to lowercase
    char str5[100];
    cout << "Enter a string in uppercase: ";
    cin >> str5;
    i = 0;
    while (str5[i] != '\0') {
        if (str5[i] >= 'A' && str5[i] <= 'Z')
            str5[i] = str5[i] + 32;
        i++;
    }
    cout << "Lowercase string: " << str5 << endl;

    return 0;
}
