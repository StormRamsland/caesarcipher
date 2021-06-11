#include <iostream>
#include <string>

int main(){
    std::string input;
    int shift;
    int i;

    std::cout << "Whats your message" << std::endl;
    std::getline(std::cin, input);

    char output[input.length()];

    std::cout << "How much do you want the message to shift by?" << std::endl;
    std::cin >> shift;

    shift = shift % 26;

//Works for the time being but it will also shift symbols and other characters
//I will probably just make the input change if it is within the ascii number
//of 65-90 and 97-122, instead of matching the symbol
    for (i=0; i < sizeof(output); i++) {
        if (int(input[i])==32){
            output[i] = input[i];
            std::cout << output[i];
        }
        else{
            output[i] = int(input[i]+shift);
            std::cout << output[i];
        }
    }

    return 0;
}