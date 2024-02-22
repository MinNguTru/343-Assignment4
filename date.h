
using namespace std;

class Date
{
public:
    Date(int year, int month);
    ~Date();
    int getYear() const;
    int getMonth() const;

private:
    int year;
    int month;
}