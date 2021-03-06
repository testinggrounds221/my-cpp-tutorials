#include <iostream>
#include <sstream>
using namespace std;

/*
Enter code for class Student here.
Read statement for specification.
*/

class Student{
    private:
        int age;
        string first_name;
        string last_name;
        int st;
    public:
        set_first_name(string s){
            first_name = s;
        }
        get_first_name(){
            return first_name;
        }

        set_last_name(string s){
            last_name = s;
        }
        get_last_name(){
            return last_name;
        }

        get_age(){
            return age;
        }
        set_age(int a){
            age = a;
        }

        get_standard(){
            return st;
        }
        set_standard(int s){
            st = s;
        }


}

int main() {
    int age, standard;
    string first_name, last_name;

    cin >> age >> first_name >> last_name >> standard;

    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);

    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();

    return 0;
}

