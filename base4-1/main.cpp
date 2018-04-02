//
//  main.cpp
//  base4-1
//
//  Created by suchao on 4/2/18.
//  Copyright © 2018 cs.nju. All rights reserved.
//

#include <iostream>
using namespace std;

int factorial(int n){
    int result = 1;
    for(int i=1; i<=n; i++){
        result = result * i;
    }
    return result;
}

int main(int argc, const char * argv[]) {
    // insert code here...
    cout << "input n r:\n";
    int n,r;
    cin >> n >> r;
    cout << n << "C" << r << " = "<< factorial(n) / (factorial(r) * factorial(n-r)) << endl;
    
    return 0;
}
