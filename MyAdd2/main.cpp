#include <iostream>
#include <vector>
using namespace std;

vector<int>p;
vector<int>p2;
string replacer  (int start , int end , string str){
        string str3 , str4;

            for (int i= 0; i < str.size(); i++){

                if (str[i]== ' ' ){
                p.push_back(i);
                p2.push_back(i);
                continue;
        }
    }

            if (start < 2 && start > 0 && end - 1 <= p.size() && end > start){

                str3 = str.substr(0,(p[start-1]));
                str4 = str.substr(p[end-2]+1,(p[end-1] - p[end-2] -1));

                str = str.replace(0,str3.size(),str4);
                str = str.replace(p[end-2]-(str3.size() - str4.size()-1),str4.size(),str3);

                cout<<"str1 is: "<<str3<<endl;
                cout<<"str2 is: "<<str4<<endl;
    }

            else if ( start >= 2 && end - 1 <= p.size() && end > start){

                str3 = str.substr(p[start-2]+1,(p[start-1] - p[start-2]-1));
                str4 = str.substr(p[end-2]+1,(p[end-1] - p[end-2]-1));

                str = str.replace(p[start-2]+1,str3.size(),str4);
                str = str.replace(p[end-2]-(str3.size() - str4.size()-1),str4.size(),str3);

                cout<<"str1 is: "<<str3<<endl;
                cout<<"str2 is: "<<str4<<endl;


    }
    else {cout<<"out of range"<<endl;}
    return str;
}
string printName(string s){cout<<"your name after modification is: "<<s<<endl; return s;}
int main()
{
    string x = "ahmed samir kaml younes saad ali sayed amin wael khaled";
    printName(replacer(4,5,x));
    return 0;
}
