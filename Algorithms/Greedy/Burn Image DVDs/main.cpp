#include <bits/stdc++.h>

#define boost ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define el "\n"
#define ll long long
#define ON(n, k) (n | (1 << k))
#define OFF(n, k) (n & ~(1 << k))
#define isOn(n, k) ((n >> k) & 1)
#define isPowerOfTwo(n) n && !(n & (n - 1))
#define file                          \
    freopen("input.txt", "r", stdin); \
    freopen("output.txt", "w", stdout);
#define interval(arr) arr.begin(), arr.end()
#define forN(n) for (int i = 0; i < n; i++)

using namespace std;

void solve()
{
    int imagesNumber, DVDsNumber;
    double ImageSize, DVDCapacity;
    cin >> imagesNumber >> ImageSize >> DVDsNumber >> DVDCapacity;

    int *images = new int[imagesNumber];
    map<int, int> rank_to_index;

    forN(imagesNumber)
    {
        cin >> images[i];
        rank_to_index[images[i]] = i + 1;
    }

    // sorting the images
    sort(images, images + imagesNumber);

    int DVDCanHave = DVDCapacity / ImageSize;

    // int *result = new int[DVDsNumber];
    map<int, vector<int>> total_ranks_to_images;
    int total_ranks = 0, DVDIndex = 1;
    for (int i = imagesNumber - 1, cnt = 0; i >= 0; i--)
    {
        total_ranks += images[i];
        cnt++;
        total_ranks_to_images[DVDIndex].push_back(rank_to_index[images[i]]);

        if (cnt == DVDCanHave)
        {
            cout << "DVD " << DVDIndex << ": ";
            cout << "total_ranks: " << " " << total_ranks << el;
            cout << "Images: ";
            for (int image : total_ranks_to_images[DVDIndex])
            {
                cout << image << " ";
            }
            cout << el;
            cnt = 0;
            total_ranks = 0;
            DVDIndex++;
        }

        if (DVDIndex > DVDsNumber)
        {
            break;
        }
    }
}

int main()
{
    file;
    boost;
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    // solve();
    return 0;
}