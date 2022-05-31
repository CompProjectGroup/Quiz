#include <iostream>
#include <string>
#include <stdlib.h>
#include <windows.h>
#include <iomanip>
#include <iostream>
#include <unistd.h>

using namespace std;

int answer;
int totalScore;
int nextLevel=1;
int questionNum = 1;

class questions
{
    string questionText;
    string Answer_1;
    string Answer_2;
    string Answer_3;
    string Answer_4;
    string Answer_5;

    int correctSolution;
    int questionScore;

public:
    void setValues(string,string,string,string,string,string,int,int);
    void askQuestion();

};

void questions::setValues(string Q,string ans1,string ans2,string ans3,string ans4,string ans5,int ca,int QS)
{
    //create a class called Question to contain the info below.
    //create a data structure that contains Question objects
    questionText=Q;
    Answer_1=ans1;
    Answer_2=ans2;
    Answer_3=ans3;
    Answer_4=ans4;
    Answer_5=ans5;
    correctSolution=ca;
    questionScore=QS;

}
void questions::askQuestion()
{

    cout<<"  Question : "<<questionNum<<endl;
    questionNum = questionNum + 1;
    cout<<questionText<<"\n"<<endl;
    cout<<endl;
    cout<<"1.  "<<Answer_1<<endl;
    cout<<"2.  "<<Answer_2<<endl;
    cout<<"3.  "<<Answer_3<<endl;
    cout<<"4.  "<<Answer_4<<endl;
    cout<<"5.  "<<Answer_5<<endl;
    cout<<endl;


    cout<<"Choose the correct answer: "<<endl;
    cin>>answer;
    if(answer==correctSolution)
    {
        totalScore= totalScore+questionScore;
        //nextLevel=totalScore; //we don't understand the logic here, can you explain???
        //nextLevel = nextLevel + 1; incremeny by 1 to go to the next level should be the way to move to the next level, dont you think????
        cout<<"Great,you are correct!"<<endl;
        cout<<"Score: "<< questionScore<<" out of "<<questionScore<<endl;
        cout<<endl;
    }else
    {
        cout<<"Score: 0"<<" out of "<<questionScore<<endl;
        cout<<"The correct solution is "<<correctSolution<<endl;
    }
}

int main()
{
     cout << R"(

 _      _____ _     ____  ____  _      _____   _____  ____    ____  _     _  ____    _____ ____  _      _____
/ \  /|/  __// \   /   _\/  _ \/ \__/|/  __/  /__ __\/  _ \  /  _ \/ \ /\/ \/_   \  /  __//  _ \/ \__/|/  __/
| |  |||  \  | |   |  /  | / \|| |\/|||  \      / \  | / \|  | / \|| | ||| | /   /  | |  _| / \|| |\/|||  \
| |/\|||  /_ | |_/\|  \_ | \_/|| |  |||  /_     | |  | \_/|  | \_\|| \_/|| |/   /_  | |_//| |-||| |  |||  /_
\_/  \|\____\\____/\____/\____/\_/  \|\____\    \_/  \____/  \____\\____/\_/\____/  \____\\_/ \|\_/  \|\____\

----------------------------------------------By: Group 6 ---------------------------------------------
 )" << "\n";

    string name;
    string response;

    questions question1;
    questions question2;
    questions question3;
    questions question4;
    questions question5;
    questions question6;
    questions question7;
    questions question8;
    questions question9;
    questions question10;
    questions question11;
    questions question12;
    questions question13;
    questions question14;
    questions question15;
    questions question16;
    questions question17;
    questions question18;

     question1.setValues("The Department of Education was concerned about the schooling in some schools in a particular area.Two hundred(200)students from these schools were randomly choosen to write a standardized test.Theory average tesst mark of 51% was much lower than the national average of 65%",
                        "200-population 51-statistic 65-parameter",
                        "200-statistics  51-parameter  65-population",
                        "200-sample  51-statistic  65-parameter",
                        "200-population  51-parameter  65-statistic",
                        "200-sample  51-parameter  65-statistic",3,2);

    question2.setValues("Which of the following is a discrete variable of the ratio measurement level? ",
                        "The number of rainy days in Durban in a year ",
                        "The length of time between rainy days in the Karoo",
                        "The volume of rain each month in RSA",
                        "The names of all dams in RSA",
                        "The years in which there was a major flooding in KZN",1,6);

    question3.setValues("Complete the following sentence: In stratified sampling ",
                        "each member of the population has an equal chance of being drawn into the sample",
                        "all members of the population are chosen to be in the sample",
                        "The population is divided into groups according to some charecteristic then simple random sampling is perfomed in each group",
                        "every k^th member of the population is selected is selected to be in the sample,where k=N/n",
                        "no member of the population is choosen into the sample",3,2);

    question4.setValues("A systematic sample of 10 peeople was taken from a population of 50 people.The people were labelled 'Person 1' to 'Person 50'.If 'Person 5' was randomly selected to be the first person in the sample ,which person was the 4th person choosen for the sample? ",
                        "Person 20","Person 10","Person 25",
                        "Person 4","Person 15",1,6);

    question5.setValues("The prices(in Rands) for 14 meals at a particular restaurant are [84,68,79,79,80,59,62,65,65,85,74,43,104] What are the average and modal prices for a meal",
                        "x^ = R72.29 , mode = R65",
                        "x^ = R71.00 , mode = R79",
                        "x^ = R72.29 , mode = R71",
                        "x^ = R72.29 , mode = R79",
                        "x^ = R71.00 , mode = R65",1,6);

    question6.setValues("As part of the study,students were  asked to record the number of hours they spent exercising in the week before a short chemistry test.They the wrote the test and their marks(out of 10)were recorded.The information gathered from the students is given as: exercise hours average =3.5,standard deviation =0.5,Testmarks average=6,standard deviation =0.5.Which of the following is true?",
                        "The variability of the data sets is the same because the standard deviations are the same.",
                        "The test data is more variable than the exercise data because its coefficient of variation is smaller than that of exercise data.",
                        "The exercise data is less variable because it has smalller mean than the test data.",
                        "The variability of the two sets of data cannot be compared because they are measured in different units.",
                        "The exercise data is more variable than the test data because it's coefficient of variation is greater than that of test data.",
                        5,6);
   question7.setValues("The daily temperatures in Durban for the summer months were recorded.It was found that the data was bell-shaped with a mean of 28degrees celsius and a standard deviation of 3 degrees celsius.Approximately what percentage of the temperatures is cooler than 25 degrees celsius or warmer than 31 degrees celsius?",
                       "32%","5%","68%","47.5%","none of the above",3,6);

   question8.setValues("Question 9,10,11 are based on this information: A large company has 2000 employees.Of these employees ,72% hold a visa card,25% hold an American Express card and 2% hold both a visa and American Express card.What is the probabilty that a randomly choosen employee holds a visa card,given that he/she holds an American Express card?",
                       "0.03","0.08","0.94","0.47","0.19",2,6);

   question9.setValues("What is the probabilty that an employee chosen at random has only a visa card?",
                        "0.73","0.72","0.47","0.75","0.70",5,6);

   question10.setValues("What is the probability that ba random choosen employee has neither a visa cars nor a American Express card?",
                        "0.98","0.05","0.03","0.95","none of the above",2,6);

   question11.setValues("65 percent of the time a restaurant is full to capacity at lunch time.When the restaurant is full,waiters drop dishes 3% of the time.What is the probability that tomorrow the restaurant will be full at lunch time and waiters will drop dishes?",
                       "0.68","0.97","0.0195","0.6305","none of the above",3,6);

   question12.setValues("Question 13 and 14 are based on the following information: 80% of the people have an allergic reaction to chemical B.A new drug that contains chemical B is being tested on a sample of 10 people.What is the probability that half of the people in the sample have an allergic reaction?",
                        "0.9936","0.0064","0.0264","0.4","0.0328",3,6);

   question13.setValues("What is the probability that atleast 7 people in the sample have an allergic reaction? ",
                        "0.8791","0.7987","0.6778","0.3222","0.1209",1,6);

   question14.setValues("A shipment consists of 15 non-defective and 10 defective electronic devices.Five devices are selected and checked to see if they function.What is the probability that at most 1 of them works correctly?",
                        "0.0001","0.0000","0.0640","0.0166","0.0768",3,6);

   question15.setValues("A bookshelf has on it 8 non-funcyion books and 4 fiction books.The bookshelf breaks and the books all fall on the floor.You offer to help you friend carry the books to a new bookshelf.You randomly select 6 books to carry.What is the probability that you select only one of the fiction books? ",
                        "0.0649","0.0043","none of the above","0.2424","0.1563",4,6);

   question16.setValues("Which of the following statements is true?",
                        "If X~Bin(15;0.5),then X is only defined for values 1,2,3,...,10",
                        "The mean and variance of the Binomial random variable are equal",
                        "For a Binomial Distribution,if the probability of failure if greater than the probability of success ,then the distribution is positively skewed",
                        "If Y~Bin(15;0.5),then P(Y>15)=1",
                        "When the sample size is large and the probability of success is small ,a Binomial random variable can be a good approximation of a poison random variable",
                        3,6);

    question17.setValues("Find the value of c such that the standard normal curve to the left of c is 0.46","0.3228",
                         "-1.44","-0.32","0.6772","-0.10",5,6);

    question18.setValues("Research has shown that 72% of people with internet access use youtube atleast twice a week.If a random sample of 100 people with internet access is selected,what is the probability that the sample proportion of the people that use youtube atleast twice a week differs from the actual proportion by no more than 0.02?",
                         "0.45","0.6779","0.9","0.99","0.3472",5,6);



    cout<<endl;
    cout<<"Press Enter to start the Stat130 Quiz "<<endl;
    cin.get();

    cout<<"What is your name : "<<endl;
    cin>>name;
    cout<<endl;

    cout<<"Are you ready to take the quiz,"<< name << "? Yes/No."<<endl;
    cin>>response;
    cout<<endl;
    system("CLS");

    if(response != "Yes")
    {
        cout<<"Okay,bye"<<"\n"<<endl;
    }
    else
    {
        cout<<"You may proceed, GOODLUCK!!"<<"\n"
        <<endl;
    }
     cout<<"You're on Level 1"<<endl;
    //level 1
    Beep(700,300);
    question1.askQuestion();
    Beep(700,300);
    question2.askQuestion();
    Beep(700,300);
    question3.askQuestion();
    Beep(700,300);
    question4.askQuestion();
    Beep(700,300);
    question5.askQuestion();
    Beep(700,300);
    question6.askQuestion();
    Beep(700,300);
    if(totalScore >= 14){
        nextLevel = nextLevel + 1;
        cout << R"(

__  __               ____                           ____
\ \/ /___  __  __   / __ \____ ______________  ____/ / /
 \  / __ \/ / / /  / /_/ / __ `/ ___/ ___/ _ \/ __  / /
 / / /_/ / /_/ /  / ____/ /_/ (__  |__  )  __/ /_/ /_/
/_/\____/\__,_/  /_/    \__,_/____/____/\___/\__,_(_)

    )" << "\n";
        cout<<"Congratulations!!! you have made it to level "<<nextLevel<<endl;
        cout<<"Your total score is: "<<totalScore<<endl;
        cout<<"I am now sleeping ....."<<endl;
        Sleep(10000);
        cout<<"I am now awake, yeppie!!!"<<endl;
        //level2
        system("CLS");
        cout<<"You're on Level 2"<<endl;
        Beep(700,300);
        question7.askQuestion();
        Beep(700,300);
        question8.askQuestion(); //use vectors??
        Beep(700,300);
        question9.askQuestion();
        Beep(700,300);
        question10.askQuestion();
        Beep(700,300);
        question11.askQuestion();
        Beep(700,300);
        question12.askQuestion();
        Beep(700,300);
        if(totalScore >= 32){
            nextLevel = nextLevel + 1;
            cout << R"(

__  __               ____                           ____
\ \/ /___  __  __   / __ \____ ______________  ____/ / /
 \  / __ \/ / / /  / /_/ / __ `/ ___/ ___/ _ \/ __  / /
 / / /_/ / /_/ /  / ____/ /_/ (__  |__  )  __/ /_/ /_/
/_/\____/\__,_/  /_/    \__,_/____/____/\___/\__,_(_)

    )" << "\n";
            cout<<"Congratulations!!! you have made it to level "<<nextLevel<<endl;
            cout<<"Your total score is: "<<totalScore<<endl;
            cout<<"I am now sleeping ....."<<endl;
            Sleep(10000);
            cout<<"I am now awake, yeppie!!!"<<endl;

            system("CLS");
             cout<<"You're on Level 3";
            //level3
            Beep(700,300);
            question13.askQuestion();
            Beep(700,300);
            question14.askQuestion();
            Beep(700,300);
            question15.askQuestion();
            Beep(700,300);
            question16.askQuestion();
            Beep(700,300);
            question17.askQuestion();
            Beep(700,300);
            question18.askQuestion();
            Beep(700,300);
            if(totalScore >= 82){
              nextLevel = nextLevel + 1;
              cout << R"(

__  __               ____                           ____
\ \/ /___  __  __   / __ \____ ______________  ____/ / /
 \  / __ \/ / / /  / /_/ / __ `/ ___/ ___/ _ \/ __  / /
 / / /_/ / /_/ /  / ____/ /_/ (__  |__  )  __/ /_/ /_/
/_/\____/\__,_/  /_/    \__,_/____/____/\___/\__,_(_)

    )" << "\n";
              cout<<"Congratulations!!! you have completed the quiz:"<<endl;
              cout<<"Your total score is: "<<totalScore<<endl;
            }
            else{
                cout<<endl;
                cout<< R"(
                                                                 ,---.,---.
,--.   ,--.                 ,------.       ,--.,--.          ,--.|   ||   |
 \  `.'  /,---. ,--.,--.    |  .---',--,--.`--'|  | ,---.  ,-|  ||  .'|  .'
  '.    /| .-. ||  ||  |    |  `--,' ,-.  |,--.|  || .-. :' .-. ||  | |  |
    |  | ' '-' ''  ''  '    |  |`  \ '-'  ||  ||  |\   --.\ `-' |`--' `--'
    `--'  `---'  `----'     `--'    `--`--'`--'`--' `----' `---' .--. .--.
                                                                 '--' '--'
            )"<<"\n"<<endl;
                cout<<"Your total score is: "<<totalScore<<" out of 100"<<endl;
                cout<<"You failed, you can't finish the quiz,better luck next time"<<endl;
                cout<<endl;
            }
        }
        else{
         cout<<endl;
         cout<< R"(
                                                                 ,---.,---.
,--.   ,--.                 ,------.       ,--.,--.          ,--.|   ||   |
 \  `.'  /,---. ,--.,--.    |  .---',--,--.`--'|  | ,---.  ,-|  ||  .'|  .'
  '.    /| .-. ||  ||  |    |  `--,' ,-.  |,--.|  || .-. :' .-. ||  | |  |
    |  | ' '-' ''  ''  '    |  |`  \ '-'  ||  ||  |\   --.\ `-' |`--' `--'
    `--'  `---'  `----'     `--'    `--`--'`--'`--' `----' `---' .--. .--.
                                                                 '--' '--'
            )"<<"\n"<<endl;
          cout<<"Your total score is: "<<totalScore<<" out of 64"<<endl;
          cout<<"You failed, you can't proceed to Level 3!,better luck next time"<<endl;
          cout<<endl;
        }
    }

    else{
        cout<<endl;
         cout<< R"(
                                                                 ,---.,---.
,--.   ,--.                 ,------.       ,--.,--.          ,--.|   ||   |
 \  `.'  /,---. ,--.,--.    |  .---',--,--.`--'|  | ,---.  ,-|  ||  .'|  .'
  '.    /| .-. ||  ||  |    |  `--,' ,-.  |,--.|  || .-. :' .-. ||  | |  |
    |  | ' '-' ''  ''  '    |  |`  \ '-'  ||  ||  |\   --.\ `-' |`--' `--'
    `--'  `---'  `----'     `--'    `--`--'`--'`--' `----' `---' .--. .--.
                                                                 '--' '--'
            )"<<"\n"<<endl;
        cout<<"Your total score is: "<<totalScore<<" out of 28"<<endl;
        cout<<"You failed, you can't proceed to Level 2!,better luck next time"<<endl;
        cout<<endl;
    }

   return 0;

}
