#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>

using std::cout; using std::endl; using std::string; using std::vector;

int main()
{
    std :: ifstream in("pcldata.txt");
    std::istream_iterator<string> in_iter(in);
    std::istream_iterator<string> eof;
    vector<double> values;
    double d = 0.0;
    int i = 0;
    while (in_iter != eof)
    {
        d = stod(*(in_iter++));
        values.push_back(d);
            
    }

    for (auto v : values) {
        cout << v << " ";
        if ((i++) % 3 == 0)
            cout << endl;
    }
    cout << endl;

    system("pause");
    return 0;
}