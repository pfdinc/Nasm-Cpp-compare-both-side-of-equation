#include <stdio.h>

int main()
{
	int number;
	int un_max_num;// defined t=integers to be used 
	int s_max_int;

	char nl_ch;
	int array1[10];
	//int* pointer; // Declares a pointer to an int/
	//pointer=&array1[0]; //obtains the address the first element of the array1
	//char mem_ch2;
	__asm {
	read_char:
	};

	char char_prompt[] = "Please input N for the equation: ";
	char char_prompt2[] = "Please input the right-hand of the equation: ";
	//	char out_msg1[] = "The Highest Number Is... ";
	//char out_msg2[] = "' in binary is ";
	char query_msg[] = "Do you want to quit (Y/N): ";





	printf(char_prompt);
	scanf_s("%d", &number); //LNk ERROR was caused by scanf so i chansced it to scanf_s
	printf(char_prompt2);
	
	int i;
	int a = number; // 
	
	__asm {

			mov eax, a				; Move the user input
			mov ecx, eax			; Move the eax into the ECX register
			cmp eax, ecx			; Compare EAX with the EAX
			jle myloop				; mump if less then to myloop


			myloop :
			dec ecx					; decrement ecx by 1
			add eax, ecx			; add the decremented value with eax
			mov un_max_num, eax		; move eax with eax
			cmp ecx, 0				; compare exc with zero
			jnz myloop				; jump if not zero
			jmp Right				; jump to the right

			Right :					; right for the next loop
			sub eax, eax			; intitalie to zero
			sub ebx, ebx			; intitalie to zero
			mov eax, a				; move b value to eax
			mov ebx, eax			; move eax into ebx
			add ebx, 1				; add ebx by 1
			mul ebx					; multiply eax by ebx
			shr eax, 1				; shift right by 1 to devideby 2
			mov ecx, eax			; move the value for the equation into ecx
			mov s_max_int, ecx		; move ecx into s_max_int so it can be printed

	};


	__asm {
	Max:
	}
	printf("\n");
	printf("1+2+3+...N  =   N*(N+1)/2");
	printf("\n");
	printf("\n");
	printf("**Left Number **  \n");
	printf("1 + 2 + 3 + 4... + [ %d ] = [ %d ] \n ", number, un_max_num);
	printf(" \n**Right Number **");
	printf("\n");
	printf("[ %d ] * ([ %d ] + 1) / 2 = [ %d ]", number, number, s_max_int);

	printf("\n");
	printf("\n");
	printf("\n");

	

	__asm
	{

		   cmp		AL, 'Y'
		   je		done
		   cmp		AL, 'y'
			je		done;
		   cmp		AL, 'N'
			je      read_char
			cmp     AL, 'n'
			je      read_char
			cmp		Al, ch
			jne		read_char



	};

	__asm
	{
	done:
	}

}
