#include "json.hpp"
using json = nlohmann::json;

#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

// json序列化示例1
string func1()
{
    json js;
    js["姓名"] = "afison";
    js["学号"] = 1222034907;
    js["性别"] = "男";
    string sendBuf = js.dump();
    cout << sendBuf.c_str() << endl;
    return sendBuf;
}

// json序列化示例2
string func2()
{
    json js;
    // 直接序列化一个vector容器
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    js["list"] = vec;
    // 直接序列化一个map容器
    map<int, string> m;
    m.insert({1, "小红"});
    m.insert({2, "小明"});
    m.insert({3, "小兰"});
    js["name"] = m;
    cout << js << endl;
    string sendBuf = js.dump();
    cout << sendBuf.c_str() << endl;
    // return js.dump();
}

int main()
{
    string recvBuf = func1();
    //数据的反序列化 
    json jsbuf = json::parse(recvBuf);//反序列化
    cout<<jsbuf["姓名"]<<endl;
    cout<<jsbuf["学号"]<<endl;
    cout<<jsbuf["性别"]<<endl;
    return 0;
}