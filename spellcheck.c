#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define DEBUG false

char **extractContent(FILE *fp);
void freeAll(char **matrix, int size);

int main (void) {

	char book_name[50];
		 tweet_name[20];
	char **dictionary = NULL;
	int n_words = 0;

	scanf(" %s", book_name);
	scanf(" %s", tweet_name);

	FILE *book_f = fopen(book_name, "r"),
		 *tweet_f = fopen(tweet_name, "r");

	dictionary = extractContent(book_f);


	freeAll(dictionary, n_words);
	fclose(book_f);
	fclose(tweet_f);

	return 0;
}

char **extractContent (FILE *fp) {
	char **content = NULL;

	

	return content;
}

int makeDictionary() //vai tirar todas as repeticoes e retornar o numerod e palavras no dicionario. 

void freeAll (char **matrix, int size) {
	
	for (int i = 0; i < size; i++) {
		free(matrix[i]);		
	}
	free(matrix);

	return;
}