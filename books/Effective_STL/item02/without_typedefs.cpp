#include <algorithm>
#include <vector>
using std::vector;
using std::find;

class Widget {};

bool operator==(const Widget& lhs, const Widget& rhs)
{
    // TODO: make this more meaninfgul???
    return true;
}

int main()
{
    vector<Widget> vw;
    Widget bestWidget;
    
    // Give bestWidget a value.
    
    // Find a Widget with the same value as bestWidget.
    vector<Widget>::iterator i =
        find(vw.begin(), vw.end(), bestWidget);
}