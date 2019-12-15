#include "Display.h"

class CountDisplay : Display
{
public:
    // サブクラスのコンストラクタからスーパークラスのコンストラクタを指定して呼び出す
    CountDisplay(DisplayImpl* impl) : Display(impl)
    {
    }

    void ShowMultipleTimes(int times, const std::string &str)
    {
        Open();
        for(int i=0; i<times; ++i)
        {
            Print(str);
        }
        Close();
    }

};