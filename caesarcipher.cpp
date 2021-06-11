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

//This will only shift English letters. It will ignore all other characters and letters.
//This shifts both uppercase letters (ascii = 65-90) and lowercase letters (ascii = 97-122).

    for (i=0; i < sizeof(output); i++) {
        if ((int(input[i]) >= 65 && int(input[i]<= 90) || (int(input[i]) >= 97 && int(input[i]) <= 122))){
            output[i] = int(input[i]+shift);
            std::cout << output[i];
        }
        else{
            output[i] = input[i];
            std::cout << output[i];
        }
    }

    std::cout << std::endl;
    return 0;
}