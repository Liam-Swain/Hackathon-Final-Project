#include "BST.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BIGGEST_LINE 50 


int main(){
    
    // Finding Input File 
    FILE *inputFile;
    inputFile = fopen("stockData.txt","r");
    
    if(inputFile==NULL){
        perror("Could not find the stock data text file");
        return 1;
    }
    
    
    
    //Create AVL Tree 
    struct Node  *rootNode = malloc(sizeof(struct Node));
    
    
    
    
    
  
    
        printf("Reading Stock Data . . . \n");
        //process of reading in line and creating Stock structs
        int indexCounter=1;
        int isFirstStockRead=1;
        char str[20];
        
        struct Stock temp;
        
        while (fgets(str, BIGGEST_LINE, inputFile) != NULL){
             
            //New stock started
            if(indexCounter==1){
                 //struct Stock temp=malloc(sizeof(struct Stock));
            }
    
            //Stock Name 
            if(indexCounter==1 )
                {
                    //temp->name=malloc(sizeof(char));
                    strcpy(temp.name,str);
                }
            //Current Price
            if(indexCounter==2 ){
             double readPrice = atoi(str);
             temp.price = readPrice;
            }
            //Change 
            if(indexCounter==3 ){
             //temp->change=malloc(sizeof(char));
             strcpy(temp.change,str);
            }
            //Open 
            if(indexCounter==4 ){
                double readOpen = atoi(str);
                temp.open = readOpen;
            }
            
            //High 
            if(indexCounter==5 ){
                double readHigh = atoi(str);
                temp.high = readHigh;
            }
            
            //Low
            if(indexCounter==6 ){
                double readLow= atoi(str);
                temp.low=readLow;
            }
            
            //Volume 
            if(indexCounter==7 ){
                double readVolume = atoi(str);
                temp.volume = readVolume;
            } 
            
            
            //Add Stock Node to Tree 
            if(isFirstStockRead){
            
                rootNode->sto=temp;
            
            isFirstStockRead=0;
            }
            else{
                rootNode = insertNodeByName(rootNode , temp);
            }
            
           
            
            
            
        //Check if all data for current stock has been read 
           if(indexCounter==7)
                 indexCounter==1;
           else
                 indexCounter++;

            }
            
        
        
 
 
 return 0;   
}