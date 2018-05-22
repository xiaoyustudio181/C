//struct Book
//{
//	char  title[50];
//	int   book_id;
//};
typedef struct Book
{
	char  title[50];
	int   book_id;
};
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//指向结构的指针
void printBook_p(struct Book *book)
{
	printf("Book title : %s\n", book->title);
	printf("Book book_id : %d\n", book->book_id);
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void printBook(struct Book book)
{
	printf("Book title : %s\n", book.title);
	printf("Book book_id : %d\n", book.book_id);
}
//+++++++++++++++++++++++++++++++++++++++++++++++++++++++++
void struct1(){
	struct Book Book1;
	strcpy(Book1.title, "C Programming");
	Book1.book_id = 6495407;

	printf("Book title : %s\n", Book1.title);
	printf("Book book_id : %d\n\n", Book1.book_id);

	printBook(Book1);
	printf("\n");
	printBook_p(&Book1);
}