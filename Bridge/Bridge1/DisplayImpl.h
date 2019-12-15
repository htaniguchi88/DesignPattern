class DisplayImpl
{
public:
    virtual void RawOpen() = 0;
    virtual void RawPrint(const std::string &str) = 0;
    virtual void RawClose() = 0;
private:
};