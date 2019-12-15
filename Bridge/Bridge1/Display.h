class DisplayImpl;

class Display
{
private:
    DisplayImpl* m_Impl;
public:
    Display(DisplayImpl* impl)
    {
        this->m_Impl = impl;
    }

    void Open()
    {
        m_Impl->RawOpen();
    }

    void Print(const std::string& str)
    {
        m_Impl->RawPrint(str);
    }

    void Close()
    {
        m_Impl->RawClose();
    }

    void Show(const std::string &str)
    {
        Open();
        Print(str);
        Close();
    }
};