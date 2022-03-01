#include <unistd.h>

int main(void)
{
	char s; // "/"
	char rs;// "\"
	char parenthesisL; //(
	char parenthesisR; //)
	char blank; // " "
	char apostrophe; // '
	char under_score; // _

	s = 47;
	rs = 92;
	parenthesisL = 40;
	parenthesisR = 41;
	blank = 32;
	apostrophe = 96;
	under_score = 95;

	write(1,&rs,1);
	write(1,&blank,1);
	write(1,&blank,1);
	write(1,&blank,1);
	write(1,&blank,1);
	write(1,&s,1);
	write(1,&rs,1);
	write(1,&blank,1);
	write(1,"\n",1);
	write(1,&blank,1);
	write(1,&parenthesisR,1);
	write(1,&blank,1);
	write(1,&blank,1);
	write(1,&parenthesisL,1);
	write(1,&blank,1);
	write(1,"'",1);
	write(1,&parenthesisR,1);
	write(1,&blank,1);
	write(1,"\n",1);
	write(1,&parenthesisL,1);
	write(1,&blank,1);
	write(1,&blank,1);
	write(1,&s,1);
	write(1,&blank,1);
	write(1,&blank,1);
	write(1,&parenthesisR,1);
	write(1,&blank,1);
	write(1,"\n",1);
	write(1,&blank,1);
	write(1,&rs,1);
	write(1,&parenthesisL,1);
	write(1,&under_score,1);
	write(1,&under_score,1);
	write(1,&parenthesisR,1);
	write(1,"|",1);
	return 0;
}
