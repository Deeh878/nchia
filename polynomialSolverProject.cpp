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
        }