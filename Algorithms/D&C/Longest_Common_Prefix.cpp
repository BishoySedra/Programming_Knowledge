#include <iostream>

using namespace std;

string get_the_right_LCP(string w1, string w2)
{
    string answer = "";
    int size = min(w1.size(), w2.size());

    for (int i = 0; i < size; i++)
    {
        if (w1[i] == w2[i])
        {
            answer += w1[i];
            continue;
        }

        break;
    }

    return answer;
}

string LCP(string words[], int start, int end)
{
    if (start == end)
    {
        return words[start];
    }

    // divide
    int mid = start + (end - start) / 2;

    // conquer
    string first_half_answer = LCP(words, start, mid);
    string second_half_answer = LCP(words, mid + 1, end);

    // combine
    return get_the_right_LCP(first_half_answer, second_half_answer);
}

int main()
{
    string words[] = {"geeksforgeeks", "geeks", "geek", "geezer"};
    int size = sizeof words / sizeof words[0];
    string result = LCP(words, 0, size - 1);
    cout << result << "\n";

    string words_1[] = {"apple", "ape", "april"};
    size = sizeof words_1 / sizeof words_1[0];
    result = LCP(words_1, 0, size - 1);
    cout << result << "\n";

    string words_2[] = {"bishoysedrasabersedra", "bishoysedrasaber"};
    size = sizeof words_2 / sizeof words_2[0];
    result = LCP(words_2, 0, size - 1);
    cout << result << "\n";

    return 0;
}
