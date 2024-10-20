#include<iostream>
#include<string.h>
using namespace std;

class String{
    private:
        char str[100];
    public:
        String(){
            str[0] = '\0';
        }

        String(char s[]){
            strcpy(str, s);
        }

        String operator+(String &s){
            String res;
            strcpy(res.str, str);
            strcat(res.str, s.str); 
            return res;
        }

        String& operator=(String &s){
            strcpy(str, s.str);
            return *this;
        }

        bool operator<=(String &s){
            return strlen(str) <= strlen(s.str);
        }

        void length(){
            cout << "The length of the string is: " << strlen(str) << endl;
        }

        void display(){
            cout << str << endl;
        }

        void tolower(){
            for (int i = 0; str[i] != '\0'; i++){
                str[i] = tolower(str[i]);
            }
        }

        void toupper(){
            for (int i = 0; str[i] != '\0'; i++){
                str[i] = toupper(str[i]);
            }
        }
};

int main(){
    char s1[100], s2[100];

    cout << "Enter the first string: ";
    cin.getline(s1, 100);
    cout << "Enter the second string: ";
    cin.getline(s2, 100);

    String str1(s1), str2(s2), str3;

    str3 = str1 + str2;
    cout << "The concatenated string is: ";
    str3.display();

    if (str1 <= str2) {
        cout << "The smaller or equal length string is: ";
        str1.display();
    } else {
        cout << "The smaller or equal length string is: ";
        str2.display();
    }

    str1.length();
    str2.length();

    return 0;
}
