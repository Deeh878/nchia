#include <iostream>
#include <map>
using namespace std;

// Function to add two polynomials
map<int, int> addPolynomials(const map<int, int>& p1, const map<int, int>& p2) {
    map<int, int> result = p1;
    for (const auto& term : p2) {
      result[term.first] += term.second;
    }
    return result;
}

// Function to subtract two polynomials
map<int, int> subtractPolynomials(const map<int, int>& p1, const map<int, int>& p2) {
    map<int, int> result = p1;
    for (const auto& term : p2) {
    	   result[term.first] -= term.second;
    }
    return result;
}// Function to multiply two polynomials
map<int, int> multiplyPolynomials(const map<int, int>& p1, const map<int, int>& p2) {
    map<int, int> result;
     for (const auto& term1 : p1) {
        for (const auto& term2 : p2) {
            int degree = term1.first + term2.first;int coefficient = term1.second * term2.second;
            result[degree] += coefficient;
        } }
    return result;
    
}// Function to display a polynomial
void printPolynomial(const map<int, int>& poly) {
    bool first = true; else if (it->second < 0) cout << " - "; if (it->first > 0) cout << "x";
        if (it->first > 1) cout << "^" << it->first;

        first = false; }
    if (first) cout << "0"; // In case all coefficients are zero
    cout << endl;
    }

int main() {
    // Define polynomials
     map<int, int> p1 = {{2, 3}, {1, 2}, {0, 1}}; // 3x^2 + 2x + 1
    map<int, int> p2 = {{1, 1}, {0, 1}};         // x + 1

    // Add polynomials
     map<int, int> sum = addPolynomials(p1, p2);
    cout << "Addition: ";
    printPolynomial(sum);
      // Subtract polynomials
    map<int, int> diff = subtractPolynomials(p1, p2);
    cout << "Subtraction: ";
    printPolynomial(diff);// Multiply polynomials
    map<int, int> product = multiplyPolynomials(p1, p2);
    cout << "Multiplication: ";
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    

        if (abs(it->second) != 1 || it->first == 0)
            cout << abs(it->second);