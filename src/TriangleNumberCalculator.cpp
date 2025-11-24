
#include "TriangleNumberCalculator.hpp"

int TriangleNumberCalculator::value(int n) {
    return n * (n + 1) / 2;
}

int TriangleNumberCalculator::add(int n, int m) {
    return value(n) + value(m);
}

int TriangleNumberCalculator::subtract(int n, int m) {
    return value(n) - value(m);
}

