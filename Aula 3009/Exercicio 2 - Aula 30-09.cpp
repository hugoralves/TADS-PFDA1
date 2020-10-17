/***Escreva um trecho de codigo para fazer a criacao
dos novos tipos de dados conforme solicitado abaixo:
	
• Horario: composto de hora, minutos e segundos. 
• Data: composto de dia, mes e ano. 
• Compromisso: composto de uma data, horario e 
               texto que descreve o compromisso
               
*///

typedef struct
{
	int hora; 
	int minuto; 
	int segundos; 
	
}horario;

typedef struct
{
	int dia; 
	int mes; 
	int ano; 
	
}data; 

typedef struct 
{ 
	horario horario; //tipo de horário é horário que eu já criei 
	data data; 
	char texto[1000];
	
}compromisso; 
