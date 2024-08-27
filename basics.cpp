#include<bits/stdc++.h>
using namespace std;

void pattern1(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++)
            cout << "*";
        cout << endl;
    }
}

void pattern3(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++)
            cout << i;
        cout << endl;
    }
}

void pattern5(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i+1); j++)
            cout << "*";
        cout << endl;
    }
}

void pattern6(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i+1); j++)
            cout << j;
        cout << endl;
    }
}

void pattern7(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout << " ";
        }
        
        for(int j=1; j<=2*i-1; j++){
            cout << "*";
        }
        
        for(int j=1; j<=(n-i); j++){
            cout << " ";
        }
        
        cout << endl;
    }
}

void pattern8(int n){
    for(int i=0; i<n; i++){
        for(int j=1; j<=i; j++){
            cout << " ";
        }
        for(int j=1; j<=(2*n)-(2*i+1); j++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern9(int n){
    pattern7(n);
    pattern8(n);
}

void pattern10(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=1; i<n; i++){
        for(int j=1; j<=n-i; j++){
            cout << "*";
        }
        cout << endl;
    }
   
}

void pattern11(int n){
    int start = 1;
    for(int i=1; i<=n; i++){
        if (i%2==0) start=0;
        else start=1;
        for(int j=1; j<=i; j++){
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern12(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << j;
        }
        
        for(int j=1; j<=(2*n)-(2*i); j++){
            cout << " ";
        }

        for(int j=i; j>=1; j--){
            cout << j;
        }
        cout << endl;
    }
}

void pattern13(int n){
    int temp=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){ 
            cout << temp;
            temp = 1 + temp;
        }
        cout << endl;
    }
}

void pattern14(int n){
    for(int i=1; i<=n; i++){
        char letter = 'A';
        for(int j=1; j<=i; j++){
            cout << letter << " ";
            letter++;
        }
        cout << endl;
    }
}

void pattern15(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i+1; j++){
            cout << char('A' + j - 1) << " ";
        }
        cout << endl;
    }
}

void pattern16(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout << char('A'+i-1);
        }
    cout << endl;
    }
}

void pattern17(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout << " ";
        }
        char ch = 'A';
        int numberOfCharacters = 2 * i - 1;
        for(int j=1; j<=numberOfCharacters; j++){
            cout << ch;
            if(j<i) ch++;
            else ch--;
        }
    cout << endl;
    }
}

void pattern18(int n){
    for(int i=0; i<=n; i++){
        char ele = 'A'+n-1;
        for(char ch=ele-i; ch<=ele; ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern19(int n){
    for (int i = 0; i < n; i++) {
        int stars = n - abs(n / 2 - i);  // Calculate the number of stars for this row
        int spaces = 2 * (n / 2 - stars / 2);  // Calculate the spaces in the middle

        // Print stars, spaces, and stars
        for (int j = 0; j < stars; j++) cout << "*";
        for (int j = 0; j < spaces; j++) cout << " ";
        for (int j = 0; j < stars; j++) cout << "*";

        cout << endl;
    }
}

void pattern20(int n){
    for (int i = 1; i <= n; i++) {
        // Print left stars
        for (int j = 0; j < i; j++) cout << "*";
        // Print middle spaces
        for (int j = 0; j < 2 * (n - i); j++) cout << " ";
        // Print right stars
        for (int j = 0; j < i; j++) cout << "*";
        cout << endl;
    }

    // Bottom half of the pattern
    for (int i = n - 1; i > 0; i--) {
        // Print left stars
        for (int j = 0; j < i; j++) cout << "*";
        // Print middle spaces
        for (int j = 0; j < 2 * (n - i); j++) cout << " ";
        // Print right stars
        for (int j = 0; j < i; j++) cout << "*";
        cout << endl;
    }
}

void pattern21(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i==0 || i==(n-1) || j==0 || j==n-1){
                cout << "*";
            }
            else cout << " ";
        }
        cout << endl;
    }
}

void pattern22(int n){
    int size = 2 * n - 1;  // Calculate the size of the pattern matrix
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Find the minimum distance from any edge
            int num = n - min(min(i, j), min(size - i - 1, size - j - 1));
            cout << num << " ";
        }
        cout << endl;
    }
}

int main(){
    int n;
    cin >> n;
    pattern1(n);
    cout << endl;
    pattern2(n);
    cout << endl;
    pattern3(n);
    cout << endl;
    pattern4(n);
    cout << endl;
    pattern5(n);
    cout << endl;
    pattern6(n);
    cout << endl;
    pattern7(n);
    cout << endl;
    pattern8(n);
    cout << endl;
    pattern9(n);
    cout << endl;
    pattern10(n);
    cout << endl;
    pattern11(n);
    cout << endl;
    pattern12(n);
    cout << endl;
    pattern13(n);
    cout << endl;
    pattern14(n);
    cout << endl;
    pattern15(n);
    cout << endl;
    pattern16(n);
    cout << endl;
    pattern17(n);
    cout << endl;
    pattern18(n);
    cout << endl;
    pattern19(n);
    cout << endl;
    pattern20(n);
    cout << endl;
    pattern21(n);
    cout << endl;
    pattern22(n);
    cout << endl;
    return 0;
    
}


