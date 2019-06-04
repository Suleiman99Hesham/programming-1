//Assignment2-Programming1-April 27,2017
//The league manager program
//Student's names are: Walied Ahmed Mohammad and Suleiman Hesham Suleiman
//Student's IDs are:   20160284              and    20160310
//Group numbers:         11                   and    12

#include <iostream>
#include <cstring>//operations on strings
#include <cctype>//for functions converting from lowercase to uppercase
#include <iomanip>//for setw function
#include <sstream>//for strings stream manipulation
using namespace std;
int searchname(string editedname,int size_array,string *array_ofnames);//prototype

void arrangement (string *array_ofnames,int *array_ofscores,int size_array);//prototype

int getthebiggest (int *ptr_Bigger , int size_array);//prototype

int main()
{
    int num_ofteams;//Number of teams


    cout <<"\t\t\tThe league manager (TEST VERSION)\a"<<endl<<"\t\t\t\t------------------\n\n"<<endl;//Title to the program

    cout << "Please enter the number of teams: ";
    string Numeric_value;//storing the number in a string then converting it to numeric value if it is not a string of characters
    while (getline(cin,Numeric_value))//Always True,getting the number from the user
    {
		stringstream ss(Numeric_value);
		if (ss >> num_ofteams)
		{
			if(ss.eof())//success
				break;
		}
		cout << "Error. Please enter a number" << endl;
		cout << "Please enter the number of teams: ";
	}
	int *ptrscores, scoreValue = 0;//pointer to array of numbers ,, the variable is to add the scores of each team in it
    string *ptr_namesOfTeams;//pointer to array of strings(the teams the user will enter

    ptrscores = new int [num_ofteams];//preserving memory for the array of numbers equal to the number the user entered
    ptr_namesOfTeams = new string [num_ofteams];//preserving memory for the array of teams the user will enter

    string name;//the name of each team the user will enter
    char result, result1;
    for(int i =0; i<num_ofteams; i++)//for loop for the array of teams
    {
        cout<<"Please enter the name of team no."<<i+1<<": ";//prompting the user for each team name
        cin>>name;//taking name of each team
        ptr_namesOfTeams[i] = name;//inserting each team name in the string of names
        cout << "Please enter the "<<name<<"'s scores: ";
        for (int j = 0; j<num_ofteams-1 ;j++)//,for loop to take the scores of each team
        {
            cin >> result;//taking the score as a one character
            result1 = toupper(result);//capitalize each small character the user enters
            while ( result1 != 'W' && result1 != 'D' && result1 != 'L')//in case the user has put anything except those 3 characters
            {
                cout << "Please enter either W for winning or D for drawing or L for losing."<<endl;
                cin >> result;//taking the result again
                result1 = toupper(result);

            }
            if (result1 == 'W')//if W or w is entered
				scoreValue +=3;//adds 3 to the value of scoreValue
            if (result1 == 'D')
				scoreValue +=1;//adds 1 to the value of scoreValue
            if (result1 == 'L')
				scoreValue +=0;//adds 0 to the value of scoreValue

        }
        ptrscores[i] = scoreValue;//insert each value of the scores collected of each team to the array of scores
        cout << ptr_namesOfTeams[i] << "'s score is " << scoreValue << endl;//printing the score each team has before zeroing it
        scoreValue=0;//the value is zeroed so that it can be used for the team that follows
    }

    int location_name;//the name that is going to be edited
    int location_champion;//the name that will be the Champion
    string editedname;//the name that its scores will be edited
    int  decision;//the number the user will enter to choose either decision from the 4 below
    do{
    cout <<"\n----------------------------------\n";
    cout << "To list all the teams enter (1)\n"
         << "To edit a team's score enter (2)\n"
         << "To show the Champion enter (3)\n"
         << "To edit a team's name enter (4)\n"
         << "To exit the program enter (0)\n";//prompting the user for a choice
    cout <<"Enter the number here: ";
    cin >> decision;
    switch (decision)
    {
        case 1:
            arrangement(ptr_namesOfTeams,ptrscores,num_ofteams);//function of arrangement
            cout << "The teams arranged from the first towards the last: "<<endl;
            for (int s = 0; s < num_ofteams; s++)//printing the list of teams after arrangement
                cout << setw(15) << ptr_namesOfTeams[s] << " Team ---> " <<setw(6)<< ptrscores[s] << endl;
            break;
        case 2:
            cout << "Please enter team name that you want to edit its scores: ";
            cin>>editedname;//variable holds the name that the user want to edit its scores
			location_name=searchname(editedname,num_ofteams,ptr_namesOfTeams);//putting the value the function return to the variable location_name
			if (location_name!=-1){
            cout << "Please enter the new scores: ";//taking newscores the name
            for (int j = 0; j<num_ofteams-1 ;j++)
            {
                cin >> result;
                result1 = toupper(result);
                while ( result1 != 'W' && result1 != 'D' && result1 != 'L')
                {
                    cout << "Please enter either W for winning or D for drawing or L for losing."<<endl;
                    cin >> result;
                    result1 = toupper(result);
                }
                if (result1 == 'W')
                    scoreValue +=3;
                if (result1 == 'D')
                    scoreValue +=1;
                if (result1 == 'L')
                    scoreValue +=0;
            }
            ptrscores[location_name] = scoreValue;//putting the overall score to the array of numbers in the location of name to the array of teams
                                                  //because the are simultaneously connected
            cout << ptr_namesOfTeams[location_name] << "'s new score is " << scoreValue << endl;//printing the new value of the score of the team to the user
            arrangement(ptr_namesOfTeams,ptrscores,num_ofteams);//arranging the array of numbers
            scoreValue=0;}//zeroing the scoreValue variable again
            else if(location_name==-1)//if the function has returned -1 which means it has looked over all the elements of the array and not found the name that the user entered
                cout<<"Sorry the name is not found."<<endl;//printing to the user the name is not found of the array
            break;
        case 3:
            location_champion=getthebiggest(ptrscores,num_ofteams);//get the biggest number of the array of scores
            cout<<"The Champion of league is "<<ptr_namesOfTeams[location_champion]<<" and "
            <<ptr_namesOfTeams[location_champion]<<"'s score is "<<ptrscores[location_champion] << "."<<endl;
            break;
        case 4:
            cout << "Please enter the name of the team to be edited: ";
            cin>>editedname;//the name to be edited
			location_name=searchname(editedname,num_ofteams,ptr_namesOfTeams);//returning the location of the name in the array of team names
                                                                              //and putting it value in the variable location_name
			if (location_name!=-1){//means that it is found in the array
                cout<<"Enter the new name you want: ";
                cin>>ptr_namesOfTeams[location_name];//inserting the new name in the location of the old name
                cout << "The name has been successfully changed to "<<ptr_namesOfTeams[location_name]<<"."<<endl;
			}
			else if (location_name==-1)//the name is not found
                cout<<"Sorry the name is not found."<<endl;
			break;

        default:
            continue;
    }

        }while(decision!=0);

}
int searchname(string editedname,int size_array, string *array_ofnames)//function that takes 3 parameters which are
                                                                       //the name that its scores are going to be changed,
                                                                       //the size of the array of teams,
                                                                       //and the array of teams
{

    if ((size_array-1)<0)//the function terminates when the sizearray-1 is less than 0
        return -1;
    if (editedname == array_ofnames[size_array-1])//comparing the name the user entered with the names of array of teams
        return size_array-1;//returning the location of the name if it is found in the array of teams

    return searchname(editedname, size_array-1, array_ofnames);//calling the function inside of itself(Recursion)

}

void arrangement (string *array_ofnames,int *array_ofscores,int size_array){//Arrangement of the the 2 arrays
                                                                            //by taking the array of names and array of scores
                                                                            //and either one of the 2 sizes
    int temp1;//template to the array of scores
    string temp2;//template to the array of names
    for (int k = size_array; k > 0; k--)
        {
            for (int m =0; m < k; m++)//staring from the first element of the array
            {
                if (array_ofscores[m] < array_ofscores[m+1])//if array[m] is less than array[m+1] because we want to sort from the largest to the smallest
                {   //here we do the swapping process
                    temp1 = array_ofscores[m+1];//putting the value of the second element in temp1(for the array of scores)
                    array_ofscores[m+1] = array_ofscores[m];//putting the value of the first element in the second element
                    array_ofscores[m] = temp1;//putting the value of temp1 in the first element
                    //we do the same for the associated elements in the array of team names because they are associated
                    temp2 = array_ofnames[m+1];
                    array_ofnames[m+1] = array_ofnames[m];
                    array_ofnames[m] = temp2;

                }
            }
        }
    }
int getthebiggest (int *ptr_Bigger , int size_array)//function that gets the biggest number of an array of numbers
                                                    //by passing the array and its size as a parameter
{
    int maxi=size_array-1;//assuming the last elements of the array the biggest
    int real_location=size_array-1;
    if (ptr_Bigger[real_location-1]>=ptr_Bigger[maxi])//comparing the element with the element that precedes it
        maxi=real_location-1;//if it is bigger then making this elements the biggest
    if (real_location==1)//reaching the last element of the array
        return maxi;


    return getthebiggest(ptr_Bigger , real_location);//recursion
}
