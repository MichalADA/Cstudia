#include <iostream>
#include <string>

struct Question {
    std::string question;
    std::string option1;
    std::string option2;
    std::string option3;
    std::string option4;
    int correctOption;
};

int main() {
    Question questions[3];

    // Inicjalizacja pytań
    questions[0] = {
        "Jak nazywa sie stolica Francji?",
        "Londyn",
        "Paryż",
        "Madryt",
        "Rzym",
        2
    };

    questions[1] = {
        "Który kolor jest pośrednim składnikiem teczy?",
        "Czerwony",
        "Zielony",
        "Żółty",
        "Niebieski",
        4
    };

    questions[2] = {
        "Ile jest dni w roku przestępnym?",
        "365",
        "366",
        "367",
        "364",
        2
    };

    int score = 0;

    // Pytanie 1
    std::cout << "Pytanie 1: " << questions[0].question << std::endl;
    std::cout << "1. " << questions[0].option1 << std::endl;
    std::cout << "2. " << questions[0].option2 << std::endl;
    std::cout << "3. " << questions[0].option3 << std::endl;
    std::cout << "4. " << questions[0].option4 << std::endl;
    int answer1;
    std::cin >> answer1;
    if (answer1 == questions[0].correctOption) {
        score++;
    }

    // Pytanie 2
    std::cout << "Pytanie 2: " << questions[1].question << std::endl;
    std::cout << "1. " << questions[1].option1 << std::endl;
    std::cout << "2. " << questions[1].option2 << std::endl;
    std::cout << "3. " << questions[1].option3 << std::endl;
    std::cout << "4. " << questions[1].option4 << std::endl;
    int answer2;
    std::cin >> answer2;
    if (answer2 == questions[1].correctOption) {
        score++;
    }

    // Pytanie 3
    std::cout << "Pytanie 3: " << questions[2].question << std::endl;
    std::cout << "1. " << questions[2].option1 << std::endl;
    std::cout << "2. " << questions[2].option2 << std::endl;
    std::cout << "3. " << questions[2].option3 << std::endl;
    std::cout << "4. " << questions[2].option4 << std::endl;
    int answer3;
    std::cin >> answer3;
    if (answer3 == questions[2].correctOption) {
        score++;
    }

    // Wyświetlanie wyniku
    std::cout << "Twój wynik: " << score << "/3" << std::endl;

    return 0;
}
