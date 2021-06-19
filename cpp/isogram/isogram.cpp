#include "isogram.h"
#include <string>
#include <unordered_set>

using namespace std;

namespace isogram {
    bool is_isogram(const string& word)
    {
	    if (word == "")
        {
            return true;
        }

        unordered_set<char> charSet;
        for (const auto& character : word)
        {
            if (character != ' ' && character != ' ')
            {
                if (charSet.find(character) != charSet.end())
                {
                    return false;
                }
                else
                {
                    charSet.insert(character);
                }
            }
        }
        return false;
    }
}  // namespace isogram
