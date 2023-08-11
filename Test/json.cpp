#include <iostream>
#include <nlohmann/json.hpp>

using namespace std;
using json = nlohmann::json;

int main() {
    // 创建一个 JSON 对象
    json js;
    js["key"] = "value";
    js["number"] = 42;

    // 将 JSON 对象序列化为字符串
    string serializedJson = js.dump();

    // 修改 JSON 对象
    js["key"] = "new_value";
    js["new_number"] = 100;
    string res = js.dump();
    // 输出修改后的 JSON 对象
    cout << "修改后的JSON对象：" << res << endl;
    // 输出序列化后的 JSON 字符串
    cout << "序列化后的JSON字符串：" << serializedJson << endl;
    return 0;
}
