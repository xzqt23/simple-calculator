# include <iostream>

int main()
{

    double num1,num2;
    double output;
    char op;

    std::cout<<"************CALCULATOR************\n";
    std::cout<<"Enter first number:";
    std::cin>>num1;

    while(true){
    std::cout<<"Choose the operator you like ( + - * / ) :";
    std::cin>>op;

       if (op == '+' || op == '-' || op == '*' || op == '/') {
            break;
        }

        std::cout << "Please enter a valid operator.\n";

    }
    
    std::cout<<"Enter second number:";
    std::cin>>num2;

    switch(op){
      case '+':
      output = num1 + num2;
      break;

      case '-':
      output = num1 - num2;
      break;

      case '*':
      output = num1 * num2;
      break;

      case '/':
      output = num1 / num2;
      break;
    }

    std::cout<<"The value is: "<<output;
    return 0;
}
