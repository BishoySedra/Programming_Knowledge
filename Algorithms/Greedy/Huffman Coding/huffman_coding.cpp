// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <queue>
// #include <map>

// #define boost ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
// #define el "\n"
// #define ll long long

// using namespace std;

// // A Huffman tree node
// struct MinHeapNode
// {
//     char data;                 // One of the input characters
//     unsigned freq;             // Frequency of the character
//     MinHeapNode *left, *right; // Left and right child

//     MinHeapNode(char data, unsigned freq)
//     {
//         this->data = data;
//         this->freq = freq;
//         left = right = NULL;
//     }
// };

// map<char, int> freq;

// // first, we need a function to calculate the frequency of each character in the input string
// void calcFreq(string text, map<char, int> &freq)
// {
//     for (char letter : text)
//     {
//         freq[letter]++;
//     }
// }

// // a function to select the two nodes with the lowest frequency from the min heap and merge them into a single node with the sum of their frequencies
// MinHeapNode *buildHuffmanTree(string text, int n)
// {
//     calcFreq(text, freq);

//     // create a min heap
//     priority_queue<pair<int, MinHeapNode *>, vector<pair<int, MinHeapNode *>>, greater<pair<int, MinHeapNode *>>> pq;

//     // create a leaf node for each character and add it to the min heap
//     for (auto it : freq)
//     {
//         if (it.second > 0)
//         {
//             pq.push({it.second, new MinHeapNode(it.first, it.second)});
//         }
//     }

//     // do the following until there is more than one node in the queue
//     while (pq.size() != 1)
//     {
//         // remove the two nodes of the highest priority (the lowest frequency) from the min heap
//         pair<int, MinHeapNode *> left = pq.top();
//         pq.pop();

//         pair<int, MinHeapNode *> right = pq.top();
//         pq.pop();

//         // create a new internal node with these two nodes as children and with a frequency equal to the sum of the two nodes' frequencies
//         MinHeapNode *top = new MinHeapNode('$', left.first + right.first);
//         top->left = left.second;
//         top->right = right.second;

//         // add the new node to the min heap
//         pq.push({top->freq, top});
//     }

//     // the remaining node is the root node and the tree is complete
//     return pq.top().second;
// }

// // a function to print the huffman codes from the root of the huffman tree
// void printCodes(MinHeapNode *root, string str)
// {
//     if (!root)
//     {
//         return;
//     }

//     if (root->data != '$')
//     {
//         cout << root->data << ": " << str << el;
//     }

//     printCodes(root->left, str + "0");
//     printCodes(root->right, str + "1");
// }

// void solve()
// {
//     string text = "duke blue devils";
//     int n = text.size();

//     MinHeapNode *root = buildHuffmanTree(text, n);

//     // printing the frequency of each character
//     for (auto it : freq)
//     {
//         if (it.second > 0)
//         {
//             cout << it.first << ": " << it.second << el;
//         }
//     }

//     // printing the Huffman codes
//     cout << "Huffman Codes:" << el;
//     printCodes(root, "");
// }

// int main()
// {
//     boost;
//     solve();
//     return 0;
// }

// C++ Program for Huffman Coding
// using Priority Queue
#include <iostream>
#include <queue>
#include <map>

using namespace std;

int main()
{

    string text = "duke blue devils";
    int n = text.size();

    return 0;
}
