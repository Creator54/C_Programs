//numerlas 2 digits conversion:<100
//input other than 0-100 will give unsupported/no value.
#include<stdio.h>
less_than_twenty(int a){
	while (a < 20){
		switch (a){
			case 0:{
				printf("zero");
				break;
			}
			case 1:{
				printf ("one");
				break;
			}
			case 2:{
				printf ("two");
				break;
			}
			case 3:{
				printf ("three");
				break;
			}
			case 4:{
				printf ("four");
				break;
			}
			case 5:{
				printf ("five");
				break;
			}
			case 6:{
				printf ("six");
				break;
			}
			case 7:{
				printf ("seven");
				break;
			}
			case 8:{
				printf ("eight");
				break;
			}
			case 9:{
				printf ("nine");
				break;
			}
			case 10:{
				printf ("ten");
				break;
			}
			case 11:{
				printf ("eleven");
				break;
			}
			case 12:{
				printf ("twelve");
				break;
			}
			case 13:{
				printf ("thirteen");
				break;
			}
			case 14:{
				printf ("fourteen");
				break;
			}
			case 15:{
				printf ("fifteen");
				break;
			}
			case 16:{
				printf ("sixteen");
				break;
			}
			case 17:{
				printf ("seventeen");
				break;
			}
			case 18:{
				printf ("eighteen");
				break;
			}
			case 19:{
				printf ("nineteen");
				break;
			}
			default:{
				printf("unsupported value");
				break;
			}
		}
		break;
	}
}
void main (){
	int i;
	scanf("%d",&i);
	while(i<100){
		while(i<90){
			while(i<80){
				while(i<70){
					while(i<60){
						while(i<50){
							while(i<40){
								while(i<30){
									if(i>=20){
										printf("twenty ");
										if(i%20==0){
											break;
										}
										else{
											i=i%20;
											less_than_twenty(i);
										}
									}
									else{
										less_than_twenty(i);
									}
									break;
								}
								if(i>=30){
									printf("thirty ");
									if(i%30==0){
										break;
									}
									else{
										i=i%30;
										less_than_twenty(i);
									}
								}
								break;
							}
							if(i>=40){
								printf("fourty ");
								if(i%40==0){
									break;
								}
								else{
									i=i%40;
									less_than_twenty(i);
								}
							}
							break;
						}
						if(i>=50){
							printf("fifty ");
							if(i%50==0){
								break;
							}
							else{
								i=i%50;
								less_than_twenty(i);
							}
						}
						break;
					}
					if(i>=60){
						printf("sixty ");
						if(i%60==0){
							break;
						}
						else{
							i=i%60;
							less_than_twenty(i);
						}
					}
					break;
				}
	        	if(i>=70){
	            	printf("seventy ");
	            	if(i%70==0){
	              		break;
	            	}
	            	else{
	                	i=i%70;
	                	less_than_twenty(i);
	            	}
	        	}
				break;
    		}
	    	if(i>=80){
	        	printf("eighty ");
	        	if(i%80==0){
	            	break;
	        	}
	        	else{
	            	i=i%80;
	            	less_than_twenty(i);
	    	    }
	    	}	
			break;
		}
		if(i>=90){
	    	printf("ninty ");
	    	if(i%90==0){
	        	break;
	   		}
	    	else{
	        	i=i%90;
	        	less_than_twenty(i);
	    	}
		}
		break;
	}
}
