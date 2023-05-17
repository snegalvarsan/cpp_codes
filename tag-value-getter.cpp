#include<iostream>
#include <string>

using namespace std;


void check_value_tag(string content){
    cout << "Enter the tag name:" <<endl;
    string tag_name;
    getline(cin,tag_name);
    string tag_name_start = "<"+tag_name+">";
    string tag_name_end = "</" + tag_name + ">";
    int index = content.find(tag_name_start);
    cout << "Index of tag[start] <"+tag_name+">: " << index << endl;
    int index_end = content.find(tag_name_end);
    cout << "Index of tag[end] </"+tag_name+">: " << index_end << endl;
    int index_diff = index_end-(index+7);
    cout << "The value inside the tag "<<tag_name<<"is:"<<endl;
    cout << content.substr(index+7,index_diff) << endl;

    
}


int main(){
    string content =    "<html>hello</html>";
    //check_for_value_tag(content);

    check_value_tag(content); //will print hello
    return 0;
}