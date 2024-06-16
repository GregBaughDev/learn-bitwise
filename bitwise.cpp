#include <iostream>
#include <bitset>

int shiftLeft(int number, int bitsToShift);
int shiftRight(int number, int bitsToShift);
int bitsOr(int number1, int number2);
int bitsAnd(int number1, int number2);
int bitsNot(int number);
int promptUser(char *option);

int main()
{
    char *userOption = (char *)malloc(sizeof(char));

    while (*userOption != 'q')
    {
        promptUser(userOption);

        switch (*userOption)
        {
        case 'a':
        {
            int numberToBeShifted;
            int numberOfBits;
            std::cout << "Enter the number to be shifted: " << "\n";
            std::cin >> numberToBeShifted;
            std::cout << "Enter the number of bits to shift" << "\n";
            std::cin >> numberOfBits;
            int shiftedNumber = shiftLeft(numberToBeShifted, numberOfBits);
            std::cout << numberToBeShifted << ": as bits -> " << std::bitset<8>(numberToBeShifted)
                      << ", shifted left by " << numberOfBits << " -> "
                      << shiftedNumber << ", bitset -> " << std::bitset<8>(shiftedNumber) << "\n";
            std::cout << "***********************************\n";
            break;
        }
        case 'b':
        {
            int numberToBeShifted;
            int numberOfBits;
            std::cout << "Enter the number to be shifted: " << "\n";
            std::cin >> numberToBeShifted;
            std::cout << "Enter the number of bits to shift" << "\n";
            std::cin >> numberOfBits;
            int shiftedNumber = shiftRight(numberToBeShifted, numberOfBits);
            std::cout << numberToBeShifted << ": as bits -> " << std::bitset<8>(numberToBeShifted)
                      << ", shifted right by " << numberOfBits << " -> "
                      << shiftedNumber << ", bitset -> " << std::bitset<8>(shiftedNumber) << "\n";
            std::cout << "***********************************\n";
            break;
        }
        case 'c':
        {
            int number1;
            int number2;
            std::cout << "Enter the first number: \n";
            std::cin >> number1;
            std::cout << "Enter the second number: \n";
            std::cin >> number2;
            int orResult = bitsOr(number1, number2);
            std::cout << number1 << "|" << number2 << "\n";
            std::cout << std::bitset<8>(number1) << "|" << std::bitset<8>(number2) << "\n";
            std::cout << "result -> " << orResult << ", bitset-> " << std::bitset<8>(orResult) << "\n";
            std::cout << "***********************************\n";
            break;
        }
        case 'd':
        {
            int number1;
            int number2;
            std::cout << "Enter the first number: \n";
            std::cin >> number1;
            std::cout << "Enter the second number: \n";
            std::cin >> number2;
            int andResult = bitsAnd(number1, number2);
            std::cout << number1 << "&" << number2 << "\n";
            std::cout << std::bitset<8>(number1) << "&" << std::bitset<8>(number2) << "\n";
            std::cout << "result -> " << andResult << ", bitset-> " << std::bitset<8>(andResult) << "\n";
            std::cout << "***********************************\n";
            break;
        }
        case 'e':
        {
            int number1;
            std::cout << "Enter the number: \n";
            std::cin >> number1;
            int andResult = bitsNot(number1);
            std::cout << "~" << number1 << "\n";
            std::cout << "~" << std::bitset<8>(number1) << "\n";
            std::cout << "result -> " << andResult << ", bitset-> " << std::bitset<8>(andResult) << "\n";
            std::cout << "***********************************\n";
            break;
        }
        default:
            break;
        }
    }

    std::cout << "Bye 👋\n";
    return 0;
}
