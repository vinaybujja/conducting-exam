//quiz question paper making

#include<iostream>
#include<string>
#include<fstream>
// time complexity = O(n) (n = no of qus)
// space complexity = 

using std::cout;
using std::endl;
using std::cin;
using std::string;
using std::ios;
using std::fstream;

int main()
{
    fstream Question_file;
    int no_of_questions, marks, ans;
    string qus, option[4];
    cout<<"no of questions: ";
    cin>>no_of_questions;
    cout<<"enter max marks: "<<endl;
    cin>>marks;
    Question_file.open("question_paper.txt",ios::out);

    for(int i = 0; i<no_of_questions; i++)
    {
    cin.ignore();
    cout<<"Enter question: "<<i+1<<endl;
    getline(cin, qus);
    Question_file<<i+1<<". "<<qus<<endl;
    
    int j = 0;
    for(string k : option)
    {
        cout<<"enter option "<<j+1<<endl;
        getline(cin, option[j]);
        Question_file<<j+1<<". "<<option[j]<<endl;
        j++;
    }
    cout << " Ans to the question : "<< endl;
    cin>>ans;
    Question_file<<ans<<endl;
    }
    Question_file.close();
cout<<"you entered all the questions!";

    system("pause>0");
}