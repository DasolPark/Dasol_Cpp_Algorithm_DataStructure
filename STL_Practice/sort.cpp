// Default
// template <class RandomAccessIterator>
// void sort (RandomAccessIterator first, RandomAccessIterator last);

// Custom
// template <class RandomAccessIterator, class Compare>
// void sort(RandomAccessIterator first, RandomAccessIterator last, Compare comp);

#include <iostream>
#include <algorithm>

using namespace std;

int main(void)
{
    int arr[10] = {9, 3, 5, 4, 1, 10, 8, 6, 7, 2};

    sort(arr, arr + 10);

    for (int i = 0; i < 10; i++)
        cout << arr[i] << ' ';

    return 0;
}

// *With function(descending)
// #include <iostream>
// #include <algorithm>

// using namespace std;

// bool compare(int a, int b){
// 	return a > b;
// }

// int main(void)
// {
//   int arr[10] = {9, 3, 5, 4, 1, 0, 8, 6, 7, 2};

//   sort(arr, arr + 10, compare);

//   for (int i = 0; i < 10; i++)
//     cout << arr[i] << ' ';
//   cout << "\n";

//   return 0;
// }

// *데이터를 묶어서 정렬하는 방법 with Object
// #include <iostream>
// #include <algorithm>
// #include <string>

// using namespace std;

// class Student
// {
// public:
//   string name;
//   int score;

//   Student(string name, int score)
//   {
//     this->name = name;
//     this->score = score;
//   }

//   // 정렬 기준은 '점수가 작은 순서'
//   bool operator<(Student &student)
//   {
//     return this->score < student.score; // Descending( > )
//   }
// };

// int main(void)
// {
//   Student students[] = {
//       Student("David", 100),
//       Student("Jose", 93),
//       Student("Peter", 80),
//       Student("Pope", 70),
//       Student("Ellie", 55)};

//   sort(students, students + 5);

//   for (int i = 0; i < 5; i++)
//   {
//     cout << students[i].name << ' ';
//     cout << students[i].score << '\n';
//   }

//   return 0;
// }

// *Pair Library
// #include <iostream>
// #include <vector> // or array 효율성에 따라 사용할 것
// #include <algorithm>
// #include <string>

// using namespace std;

// int main(void)
// {
//     vector<pair<int, string>> v;
//     v.push_back(pair<int, string>(90, "David"));
//     v.push_back(pair<int, string>(85, "Jose"));
//     v.push_back(pair<int, string>(82, "Peter"));
//     v.push_back(pair<int, string>(98, "Daisy"));
//     v.push_back(pair<int, string>(70, "James"));

//     sort(v.begin(), v.end());

//     for (int i = 0; i < v.size(); i++)
//         cout << v[i].second << ' ' << v[i].first << '\n';

//     return 0;
// }

// *Pair Library(double pair)
// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <string>

// using namespace std;

// bool compare(pair<string, pair<int, int>> a, pair<string, pair<int, int>> b)
// {
//     if (a.second.first == b.second.first)
//     {
//         return a.second.second > b.second.second;
//     }
//     else
//     {
//         return a.second.first > b.second.first;
//     }
// }

// int main(void)
// {
//     vector<pair<string, pair<int, int>>> v;
//     v.push_back(pair<string, pair<int, int>>("David", pair<int, int>(100, 19890615)));
//     v.push_back(pair<string, pair<int, int>>("Jose", pair<int, int>(90, 19900102)));
//     v.push_back(pair<string, pair<int, int>>("June", pair<int, int>(40, 19580705)));
//     v.push_back(pair<string, pair<int, int>>("James", pair<int, int>(90, 19870405)));
//     v.push_back(pair<string, pair<int, int>>("Peter", pair<int, int>(77, 19890601)));

//     sort(v.begin(), v.end(), compare);

//     for (int i = 0; i < v.size(); i++)
//         cout << v[i].first << ' ' << v[i].second.first << '\n';

//     return 0;
// }