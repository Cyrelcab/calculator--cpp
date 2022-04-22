/*TUTOR,JEMA ROSE*/
#include<iostream>//instructs the preprocessor to include a section of standard C++ code, known as header iostream, that allows to perform standard input and output operations
#include<conio.h>//to clear screen and pause information function
using namespace std;//declarative region that provides a scope of identifiers inside it

int main(){//initiates the declaration of a function and  execution of the program begins with the main function, regardless of where the function is actually located within the code
  char operation, number3;
  double number1, number2, sum1, difference1, product1, quotient1;/*declares the variables*/
  
  cout << "Enter 1st number: ";/*ask user what value of number and  by using cout the content inside the quotation marks will displayed on the screen*/
  cin >> number1 ; /*read or scan the number that user input*/
  cout << "Enter 2nd number: ";/*ask user what value of number should be added or minus or multiply or divide  (+,-,*,/) to the 1st number that has been entered by the user and by using cout the content inside the quotation marks will displayed on the screen*/
  cin >> number2 ;/*read or scan the number that user input*/
  cout<<"Operators:\n" ;/*using cout the content inside the quotation marks is displayed on the screen*/
  cout << "(+)Addition\n";/*using cout the content inside the quotation marks is displayed on the screen*/
  cout << "(-)Subtraction\n";/*using cout the content inside the quotation marks is displayed on the screen*/
  cout << "(*)Multiplication\n";/*using cout the content inside the quotation marks is displayed on the screen*/
  cout << "(/)Division\n";/*using cout the content inside the quotation marks is displayed on the screen*/
  cout << "Choose an operation: "; /* ask user what operator and by using cout the content inside the quotation marks will displayed on the screen*/
  cin >> operation;/*read or scan the number that user input*/
    
 	
    switch(operation) {
  	case '+':/*whenever the user enters "+" the statement for case '+' is executed and program is terminated*/ 
      sum1=number1+number2;/*the number1 and number2 will be added by using the + operator  and stored in sum1 variable*/
      cout << number1 << " + " << number2 << " = " << number1 + number2;/*the sum of the two numbers will be displayed on the screen using cout*/
      break;/*the control comes out of the switch-case body*/

    case '-':/*whenever the user enters "-" the statement for case '-' is executed and program is terminated*/ 
      difference1=number1-number2;/*the number1 and number2 will be subtracted by using the - operator  and stored in difference1 variable*/
      cout<<number1 << " - " << number2 << " = " << number1 - number2;/*the difference of the two numbers will be displayed on the screen using cout*/
      break;/*the control comes out of the switch-case body*/
    case '*':/*whenever the user enters "" the statement for case '*' is executed and program is terminated*/ 
      product1=number1*number2;/*the number1 and number2 will be multiplied by using the * operator  and stored in product1 variable*/
      cout << number1 << " * " << number2 << " = " << number1 * number2;/*the product of the two numbers will be displayed on the screen using cout*/
      break;/*the control comes out of the switch-case body*/
    case '/':/*whenever the user enters "/" the statement for case '/' is executed and program is terminated*/ 
			quotient1=number1/number2;//the number1 will divided by the number2 by using the / operator  and stored in quoient1 variable
			cout<<number1<<" / "<<number2<<" = "<< number1 / number2;/*the quotient of the two numbers will be displayed on the screen using cout*/
      		break;//the control comes out of the switch-case body

    default:
      /* If the operator is other than +, -, * or /, error message is shown*/
      cout <<"Error! operator is not correct";/*using cout error message will be displayed on the screen*/
      break;/*the control comes out of the switch-case body*/
  }
	 
	
	do{
		cout<<"\nDo you want to choose another operation?[Y/N]: " ;//using cout the content inside the quotation marks is displayed on the screen
		cin>> number3;
	
		switch(number3){
			case 'Y':{//states the condition in which if the user enters Y, then the statements for case: 'Y' is executed
				 cout<<"Operators:\n" ;/*using cout the content inside the quotation marks is displayed on the screen*/
  cout << "(+)Addition\n";/*using cout the content inside the quotation marks is displayed on the screen*/
  cout << "(-)Subtraction\n";/*using cout the content inside the quotation marks is displayed on the screen*/
  cout << "(*)Multiplication\n";/*using cout the content inside the quotation marks is displayed on the screen*/
  cout << "(/)Division\n";/*using cout the content inside the quotation marks is displayed on the screen*/
  cout << "Choose an operation: "; /* ask user what operator and by using cout the content inside the quotation marks will displayed on the screen*/
  cin >> operation;/*read or scan the number that user input*/
    		
			    switch(operation) {
  	            case '+':/*whenever the user enters "+" the statement for case '+' is executed and program is terminated*/ 
                sum1=number1+number2;/*the number1 and number2 will be added by using the + operator  and stored in sum1 variable*/
                cout<< number1 << " + " << number2 << " = " << number1 + number2 << endl;/*the sum of the two numbers will be displayed on the screen using cout*/
                break;/*the control comes out of the switch-case body*/

                case '-':/*whenever the user enters "-" the statement for case '-' is executed and program is terminated*/ 
                      cout<<number1 << " - " << number2 << " = " << number1 - number2 << endl;/*the difference of the two numbers will be displayed on the screen using cout*/
               break;/*the control comes out of the switch-case body*/
               case '*':/*whenever the user enters "*" the statement for case '*' is executed and program is terminated*/ 
               product1=number1*number2;/*the number1 and number2 will be multiplied by using the * operator  and stored in product1 variable*/
               cout << number1 << " * " << number2 << " = " << number1 * number2 << endl;/*the product of the two numbers will be displayed on the screen using cout*/
               break;/*the control comes out of the switch-case body*/
               case '/':/*whenever the user enters "/" the statement for case '/' is executed and program is terminated*/ 
	   		quotient1=number1/number2;//the number1 will divided by the number2 by using the / operator  and stored in quoient1 variable
			cout<<number1<<" / "<<number2<<" = "<< number1 / number2 << endl;/*the quotient of the two numbers will be displayed on the screen using cout*/
      		break;//the control comes out of the switch-case body
      default:
      /* If the operator is other than +, -, * or /, error message is shown*/
      cout <<"Error! operator is not correct";/*using cout error message will be displayed on the screen*/
      break;/*the control comes out of the switch-case body*/
  }
			
			}
			case 'N':{//states the condition in which if the user enters N, then the statements for case: 'N' is executed
				break;//the control comes out of the switch-case body
			default: //if the answer doesn't matches any of the two character [Y/N], the default statement is executed
				cout<<"Error! Your answer is not correct.\n";//using cout, error message will be displayed on the screen
			}
		}
	}
	while (number3== 'Y');//this will check the condition, if it is true it will looped back to the beginning and went over until it become false or the the input is not Y
			
    getch ();//to hold the output screen for some time until the user passes a key from the keyboard to exit the console screen.
	return 0 ;// used to indicate successful completion of a program
}
