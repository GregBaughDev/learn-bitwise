int shiftLeft(int number, int bitsToShift) {
    return number << bitsToShift;
}

int shiftRight(int number, int bitsToShift) {
    return number >> bitsToShift;
}

int bitsOr(int number1, int number2) {
    return number1 | number2;
}

int bitsAnd(int number1, int number2) {
    return number1 & number2;
}

int bitsNot(int number) {
    return ~number;
}
