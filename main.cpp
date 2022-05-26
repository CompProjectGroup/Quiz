#include <iostream>
#include <string>

using namespace std;

int answer;
int totalScore;
int nextLevel;

//5 possible answers, correct answer and question score.
class Question{
public:
    void setValues(string,string,string,string,string,string,int int);
    void askQuestion();

private:
    string questionText;
    string answer_1;
    string answer_2;
    string answer_3;
    string answer_4;
    string answer_5;

    int correctSolution;
    int questionScore;
};

int main()
{
    //Displays Welcome message
    std::cout << "WELCOME TO STAT QUIZ 2022\n";

    std::cout << "Press enter to start...\n";
    std::cin.get();

    //Get the student number.
    int  studentnumber;
    std::cout << "Enter your Student Number\n";
    std::cin >> studentnumber;
    std::cout << "\n";

    //Information on how to complete the quiz
    std::cout <<"The quiz consists of 25 mcq questions.Write ONLY the option of your answer e.g(a,b,c or d)"<<"\n";

    //Ask if user wants to start quiz.
    std::string respond;
    std::cout << "Are you ready to start the quiz, " << studentnumber << "? Yes/No.\n";
    std::cin >> respond;

    //If user says yes, the quiz begins.
    if (respond == "Yes" || respond == "yes") {
        std::cout << "\n";
        std::cout << "Good luck!\n";
        std::cout << "\n";
        std::cout << "Press enter to continue.";
        std::cin.get();
        std::cin.ignore();
    }else{
        std::cout << "\n";
        std::cout << "Goodbye!\n";
        std::cin.ignore();
        std::cin.get();
        return 0;
    }

    //Instances of the questions.
    Question question1;
    Question question2;
    Question question3;
    Question question4;
    Question question5;
    Question question6;
    Question question7;
    Question question8;
    Question question9;
    Question question10;
    Question question11;
    Question question12;
    Question question13;
    Question question14;
    Question question15;
    Question question16;
    Question question17;
    Question question18;
  
    //Calling the member function setValues.
    //Question is set, 5 answer choices, the correct char answer, 6 marks per question.
   
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
        
      

    //Calling askQuestion member function.
    question1.askQuestion();
    question2.askQuestion();
    question3.askQuestion();
    question4.askQuestion();
    question5.askQuestion();
    question6.askQuestion();
    question7.askQuestion();
    question8.askQuestion();                            //use vectors??
    question9.askQuestion();
    question10.askQuestion();
    question11.askQuestion();
    question12.askQuestion();
    question13.askQuestion();
    question14.askQuestion();
    question15.askQuestion();
    question16.askQuestion();
    question17.askQuestion();
    question18.askQuestion();


    //Final score displayed when user finishes quiz.
    cout << "Your Total Score is " << totalScore << " out of 100!\n";
    cout << "\n";

    //If the user scores 60 or above  60, user passes the quiz.
    //Display message created with ASCII art generator.
    //Link: http://patorjk.com/software/taag/#p=display&f=Graffiti&t=Type%20Something%20
    if (totalScore >= 60) {
        std::cout << R"(
   _____                            _         _       _   _
  / ____|                          | |       | |     | | (_)
 | |     ___  _ __   __ _ _ __ __ _| |_ _   _| | __ _| |_ _  ___  _ __  ___
 | |    / _ \| '_ \ / _` | '__/ _` | __| | | | |/ _` | __| |/ _ \| '_ \/ __|
 | |___| (_) | | | | (_| | | | (_| | |_| |_| | | (_| | |_| | (_) | | | \__ \
  \_____\___/|_| |_|\__, |_|  \__,_|\__|\__,_|_|\__,_|\__|_|\___/|_| |_|___/
                     __/ |
 __     __          |___/___                       _   _   _   _
 \ \   / /            |  __ \                     | | | | | | | |
  \ \_/ /__  _   _    | |__) |_ _ ___ ___  ___  __| | | | | | | |
   \   / _ \| | | |   |  ___/ _` / __/ __|/ _ \/ _` | | | | | | |
    | | (_) | |_| |   | |  | (_| \__ \__ \  __/ _| | |_| |_| |_|
    |_|\___/ \__,_|   |_|   \__,_|___/___/\___|\__,_| (_) (_) (_)


    )" << "\n";
        std::cout << "\n";
        std::cin.get();
        std::cin.ignore();
        return 0;
    }
    else
    {
        std::cout << "You failed... Sorry, better luck next time.\n";
        std::cout << "\n";
    }
    std::cin.get();
    std::cin.ignore();
    return 0;
}

//Function to set values for the answers
void Question::setValues(string Q,string ans1,string ans2,string ans3,string ans4,string ans5,int ca,int QS)
{
    questionText=Q;
    Answer_1=ans1;
    Answer_2=ans2;
    Answer_3=ans3;
    Answer_4=ans4;
    Answer_5=ans5;
    correctSolution=ca;
    questionScore=QS;

}
//Format for possible answers displayed when program executes.
void Question::askQuestion()
{
    std::cout << "\n";
    std::cout << Question_Text << "\n";
    std::cout << "a. " << answer_1 << "\n";
    std::cout << "b. " << answer_2 << "\n";
    std::cout << "c. " << answer_3 << "\n";
    std::cout << "d. " << answer_4 << "\n";
    std::cout << "\n";

    //User enters their answer.
    std::cout << "What is your answer?" << "\n";
    std::cin >> guess;
    //If their answer is correct, message is displayed and 4 points are added to their score.
    if (guess == correct_answer) {
        std::cout << "\n";
        std::cout << "Correct!!!" << "\n";
        total = total + Question_Score;
        std::cout << "\n";
        std::cout << "Press enter to continue." << "\n";
        std::cin.get();
        std::cin.ignore();
    }
    else //If their answer is incorrect, message is displayed, no points added.
         //Correct answer displayed.
    {
        std::cout << "\n";
        std::cout <<"WRONG!!!"<<"\n";
        std::cout <<"\n";
        std::cout << "The correct answer is " << correct_answer << "." << "\n";
        std::cout << "\n";
        std::cout << "Press enter to continue." << "\n";
        std::cin.get();
        std::cin.ignore();
    }
}
