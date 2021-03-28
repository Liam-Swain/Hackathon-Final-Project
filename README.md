# Hackathon-Final-Project

scrape.py - This file scrapes the stock data from a website, then looks through the data and stores relevant information into a text file

Main.java - This file sorts the new text file into a CSV file to be loaded into the SQL data base

Stock.db - This is the database for all the stocks that we use in the main python program

StockLookup.py - This file queries the Stock database, getting the Stock the user requested by Ticker name

main.py - This is the main file of the program, which generates the Windows where the user will type in the Ticker of the stock. It then loads a graph of the stock, as well as fetches        all relevant information of the stock


FILES NOT USED IN FINAL PROJECT

Stock.h - This was the header file which contains a struct for a Stock and all relevant data members

AVL.h - This was the header file in C for the AVL Tree data structure to store the stocks

AVL.c - This was the source file that inserts Nodes into the Tree, as well as balances the Tree

TreeLoader.c - This was the source fiile that loads the Stock data from a text file into the Tree
