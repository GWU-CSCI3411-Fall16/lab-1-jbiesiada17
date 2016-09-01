#include <stdio.h>
  struct song_t{//use _t to show type
                char* title;
                char* author;
        };

        struct playlist_t{
                song_t* song;
                playlist_t* next;
        };


void print_playlist(struct playlist* node){
	struct playlist_t* ptr;
	ptr=node;
	while(ptr!=NULL){
		printf("%s by %\n",ptr->song->title,ptr->song->author);
		ptr=ptr->next	
	}
};
int main(int argc, char* argv[]){
	/*requirements for this
		arrays of titles and authors of the songs 
		
	*/
	char* titles={"505", "Hey now you're an allstar","Hello?"};
	char* authors={"Artic Monkeys","SmashMouth","Beetles"};
	
	struct	playlist_t p1,p2, p3;
		
	struct	song_t song1,song2,song3;
		song1.title=&titles[0];
		song2.author=&authors[1];
		song2.title=&titles[1];
                song3.author=&authors[2];
		song3.title=&titles[2];
                song1.author=&authors[0];
		p1.song=song1;
		p2.song=song2;
		p3.song=song3;
		p1.next=p2;
		p2.next=p3;
		p3.next=NULL;
	print_playlist(p1);
	songt_t song;
	int i;
	for(i=0;i<2;i++){
	
		song.title= titles[i];
	        song.author=authors[i];
		
	}


	return 0;
}

