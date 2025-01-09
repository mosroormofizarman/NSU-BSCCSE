import java.util.Scanner;
	public class BankAccount {
		
		int balance;
		int previousTransaction;
		String customerName;
		String customerId;
		
		public BankAccount(String customerName,String customerId)
		{
			this.customerName=customerName;
			this.customerId=customerId;
		}
		
		void showMenu()
		{
			char option = '\0';
			Scanner scanner = new Scanner (System.in);
			
			System.out.println("Welcome: "+customerName);
			System.out.println("Your id is: "+customerId);
			System.out.println();
			System.out.println("A:  Check Balance");
			System.out.println("B:  Deposite");
			System.out.println("C:  Withdraw");
			System.out.println("D:  Previous Transaction");
			System.out.println("E:  Exit");
			System.out.println("F:  Fixed Deposit (Yearly)");
			System.out.println("G:  Credit Card");
			System.out.println("L:   Loan");
			
			do 
			{
				System.out.println("=====================================================================");
				System.out.print("Enter an option: ");
				option = scanner.next().charAt(0);
				System.out.println();
				
				switch(option) 
				{
				    case 'A':
					System.out.println("Your balance is: "+balance);
					System.out.println("Thank you for using our serivice");
					System.out.println();
					break;
					
				    case 'B':
						System.out.print("Enter an amount to deposit: ");
						int amount = scanner.nextInt();
						deposit(amount);
						System.out.println("Thank you for using our serivice");
						System.out.println();
						break;
						
				    case 'C':
						System.out.print("Enter an amount to withdraw: ");
						int amount2 = scanner.nextInt();
						withdraw(amount2);
						System.out.println("Thank you for using our serivice");
						System.out.println();
				    	break;
				    	
				    case 'D':
						getPreviousTransaction();
						System.out.println("Thank you for using our serivice");
						System.out.println();
				    	break;
				    	
				    case 'E':
				    	System.out.println("---------------------------------------------------------------------------------------------------------------------");
				    	break;
				    	
				    case'F':
				    	System.out.println("Sir, we provide 1.2% interest rate for yearly investment");
						System.out.print("Enter your amount for investment: ");
						int amount3 = scanner.nextInt();
						System.out.print("Enter time(In year): ");
						int amount4 = scanner.nextInt();
						 fixedDeposit(amount3,amount4);
						//System.out.println();
				    	break;
				    	
				    case'G':
						System.out.println("Sir we provide 3 types of card, Those are: ");
						System.out.println();
						System.out.println("1. Nexus card");
						System.out.print("Through this card you card withdraw your money from our booth and you can purchase anything");
						System.out.println("Yearly charge for this card is 500 TK");
						System.out.println("2. Master Card");
						System.out.print("Through this card you card withdraw your money from any banks booth and you can purchase anything");
						System.out.println("Yearly charge for this card is 800 TK");
						System.out.println("3. Visa Card");
						System.out.print("Through this card you card withdraw your money from foreign countries booth and you can purchase anything");
						System.out.println("Yearly charge for this card is 1500 TK");
						System.out.print("Enter your option: ");
						int num = scanner.nextInt();
						card(num);
						System.out.println();
				    	break;
				    	
				    case 'L':
				    	System.out.println("We provide loan on monthly 2.2% interest");
				    	System.out.print("Enter your amount: ");
				    	int amount5 = scanner.nextInt();
				    	loan(amount5);
				    	break;
				    	
				    	default:
				    		System.out.println("Invalid Option, Please try again");
				    		break;
				}
					
			}while(option !='E');
			
			System.out.println("Thank you Sir");
			scanner.close();
		}
		
		
		void deposit(int amount) 
		{	
			if(amount!=0)
			{
				balance = balance+amount;
				previousTransaction = balance;
			}
		}
		
		
		void withdraw(int amount) 
		{	
			if(balance==0) 
			{
				System.out.println("Sorry sir, You cant withdraw money becasue your balance is 0");
			}
			else if(amount>balance)
			{
				System.out.println("You cant withdraw because you dont have enough balance");
			}
			else
			{
				balance = balance-amount;
				previousTransaction = -amount;
			}
		}
		
		void getPreviousTransaction() 
		{	
			if(previousTransaction>0)
			{
				System.out.println("Deposited: "+previousTransaction);
			}
			else if(previousTransaction<0)
			{
				System.out.println("Withdrawn: "+Math.abs(previousTransaction));  //absolute method which returns the positive value of a variable
			}
			else
			{
				System.out.println("No transaction occured");
			}
		}
		
		void fixedDeposit(int amount,int year) 
		{
			double total = amount*1.2*year;
			System.out.println("After "+year+" years you will balance will be: "+total);
		}
		
		void card(int num) 
		{
		switch(num) 
		{
		case 1: 
			if(balance>500) 
			{
			balance = balance-500;
			System.out.println("Thank you for ordering Nexus card,After 2 days you can recive it from our main branch");
			System.out.println("We cut 500TK service charge from your balance");
			}
			else
			{
				System.out.println("You dont have sufficient balance to order this card, please deposite 500 tk");
			}
			break;
			
		case 2: 
			if(balance>800) 
			{
			balance = balance-800;
			System.out.println("Thank you for ordering Master card,After 2 days you can recive it from our main branch");
			System.out.println("We cut 800TK service charge from your balance");
			}
			else
			{
				System.out.println("You dont have sufficient balance to order this card, please deposite 800 tk");
			}
			break;
			
		case 3: 
			if(balance>1500) 
			{
			balance = balance-1500;
			System.out.println("Thank you for ordering Visa card,After 2 days you can recive it from our main branch");
			System.out.println("We cut 1500TK service charge from your balance");
			}
			else
			{
				System.out.println("You dont have sufficient balance to order this card, please deposite 1500 tk");
			}
			break;
		}	
		}
		
		void loan(int amount)
		{
			double interest =  (amount*2.5)/100;
			balance = balance+amount;
			System.out.println("Your monthly interest rate is: "+interest);
			
		}

	}
