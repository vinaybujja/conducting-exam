//quiz question paper display

#include<iostream>
#include<fstream>
// time complexity = 
// space complexity = 

using namespace std;

//To check wheater the answer is true or not 
//And count score
void checkANS(int cans, int gans, int &score)
{
    if (gans == cans)
    {
        cout<<"correct\n"<<endl;
        score++; 
    }
    else
    cout<<"incorrect\n"<<endl; 
}

int main()
{
    fstream Question_file;
    string qus;
    string option[4];
    int ans, canswer; 
    string currect_ans;
    int score = 0;
    Question_file.open("question_paper.txt",ios::in);
    while(getline(Question_file,qus))
    {
        cout<<qus<<endl;
        for(int j = 0; j < int(sizeof(option)/sizeof(option[0]));j++)
        {
            getline(Question_file,option[j]);
            cout<<option[j]<<endl;
        }
        getline(Question_file,currect_ans);
        cin>>ans;
        canswer = stoi(currect_ans);
        checkANS(canswer,ans,score);
    }

    cout<< "score = "<<score<<endl;
    return 0;
}
