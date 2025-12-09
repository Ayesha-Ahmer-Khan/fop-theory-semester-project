#include <iostream>
#include <string>
using namespace std;

//struct defs
struct Habit {
    string name;
    int streak;
    float minutes;
};
struct Task {
    string title;
    string deadline;
    bool completed;
};
string userName="User";


//function prototypes
bool login();
void dashboard();

//task 
void addTask(Task tasks[], int &totalTasks);
void viewTasks(Task tasks[], int totalTasks);
void markTaskDone(Task tasks[], int totalTasks);

//productivity
void logStudyHours(int study[7][3]);
void showStudyReport(int study[7][3]);

//progress calculator 
float calculateScore(Task tasks[], int taskTotal);

void line();

//main function
int main() {
    if (login()) {
        cout<<"\nLogin successful! Welcome.\n";
        dashboard();
    } 
	else {
        cout<<"\nToo many attempts. Access denied.\n";
    }
    return 0;
}

//login
bool login(){
    string username, password;
    for(int i = 1; i <= 3; i++){
        cout <<"Enter username: ";
        cin >> username;
        cout <<"Enter password: ";
        cin >> password;

        if (username=="fop" && password=="1234") return true;
        cout<<"Incorrect! Attempts left: "<<(3 - i)<<endl;
    }
    return false;
}

//dashboard menu
void dashboard() {
    Task tasks[5];
    int totalTasks=0;

    int study[7][3] = {0};  //[day][session]

    int choice;

    do {
        line(); 
        cout << "AI PERSONAL PLANNER & HABIT TRACKER\n";
        line();
        cout<<"1. Add Task"<<endl;
        cout<<"2. View Tasks"<<endl;
        cout<<"3. Mark Task Completed"<<endl;
        cout<<"4. Log Study Hours"<<endl;
        cout<<"5. Weekly Study Report"<<endl;
        cout<<"6. Productivity Score"<<endl;
        cout<<"7. Exit"<<endl;
        cout<<"Enter choice: ";
        cin>>choice;

        switch(choice){
            case 1: 
				addTask(tasks, totalTasks); 
				break;
            case 2: 
				viewTasks(tasks, totalTasks); 
				break;
            case 3: 
				markTaskDone(tasks, totalTasks); 
				break;
            case 4: 
				logStudyHours(study); 
				break;
            case 5: 
				showStudyReport(study); 
				break;
            case 6:
                cout<<"Your Productivity Score: "<<calculateScore(tasks, totalTasks)<<endl;
                break;
            case 7:
                cout<<"Goodbye and Welldone!"<<endl;
                break;
            default:
                cout<<"Invalid Choice!"<<endl;
        }
    } 
	while(choice!=7);
}

//task function
void addTask(Task tasks[], int &totalTasks){
    cout<<"Enter task title: ";
    cin>>tasks[totalTasks].title;
    cout<<"Enter deadline (DD/MM): ";
    cin>>tasks[totalTasks].deadline;

    tasks[totalTasks].completed=false;
    totalTasks++;

    cout<<"Task added!"<<endl;
}

void viewTasks(Task tasks[], int totalTasks){
    if (totalTasks==0){
        cout<<"No tasks available"<<endl;
        return;
    }

    cout<<"Your Tasks:"<<endl;
    for(int i=0; i<totalTasks; i++){
        cout<<i+1<<". "<<tasks[i].title<<" | Deadline: "<<tasks[i].deadline<<" | "<<(tasks[i].completed?"Completed":"Pending")<<endl;
    }
}

void markTaskDone(Task tasks[], int totalTasks) {
    int index;
    cout<<"Enter task number to mark completed: ";
    cin>>index;

    if(index<1 || index>totalTasks){
        cout<<"Invalid task!"<<endl;
        return;
    }

    tasks[index-1].completed=true;

    cout << "Task marked as completed!\n";
}

//study log
void logStudyHours(int study[7][3]){
    cout<<"Log Study Hours (Mon-Sun, 3 sessions)";
    for(int i=0; i<7; i++){
        cout<<"Day "<<i+1<<":"<<endl;
        for(int j=0; j<3; j++){
            cout<<"  Session "<<j+1<<": ";
            cin>>study[i][j];
        }
    }
}

void showStudyReport(int study[7][3]) {
    cout<<"Weekly Study Report: "<<endl;

    for(int i=0; i<7; i++){
        int total=0; 
        for(int j=0; j<3; j++){
        	total+=study[i][j];
		}
        
        cout<<"Day "<<i+1<<" total: "<<total<<" minutes"<<endl;
    }
}

//productivity calculator
float calculateScore(Task tasks[], int taskTotal){
    int completed=0;
    for (int i = 0; i<taskTotal; i++)
        if (tasks[i].completed){
        	completed++;
		}
    float score = (completed * 5);

    return (score > 100 ? 100 : score); // conditional operator example
}

void line() {
    cout << "----------------------------------------\n";
}

