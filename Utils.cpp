#include "Utils.h"

Utils::Utils()
{
}


std::vector<std::string> Utils::explode(std::string text, std::string str)
{
    int i = 0;
    char ch;

    std::string word;
    std::vector<std::string> words;

    while (ch = text[i++])
    {

        std::stringstream ss;
        std::string s;

        ss << ch;
        ss >> s;

        if (strcmp(s.c_str(), str.c_str()) == 0)
        {
            if (!word.empty())
            {
                words.push_back(word);
            }
            word = "";
        }
        else
        {
            word += ch;
        }
    }
    if (!word.empty())
    {
        words.push_back(word);
    }

    return words;

}
