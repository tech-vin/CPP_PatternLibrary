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
    return 0;
    
}


