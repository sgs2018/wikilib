//mydata gcc.desktop.2011.str 2011gcc cpp.5.5sec js.3.5sec  amd64.cpu@xmphone.0.7sec


//https://stackoverflow.com/questions/8310039/why-do-stdstring-operations-perform-poorly
//https://wap.zol.com.cn/208/207583/index.html core2 cpu  https://www.zdnet.com/product/dell-optiplex-960/ 2009.3.sell




#include <iostream>
#include <string>
using namespace std;
void test()
{
    int x = 0;
    int limit = 102 * 1024;
    string s("");
    for (; s.size() < limit;) {
        s += "X";
        if (s.find("ABCDEFGHIJKLMNOPQRSTUVWXYZ", 0) != string::npos)
            cout << "Find!" << endl;
    }
    cout << "x's length = " << s.size() << endl;
}

int main()
{
    test();
}
