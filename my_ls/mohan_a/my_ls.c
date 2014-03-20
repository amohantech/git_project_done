#include "my_header.h"

int ls(){

    DIR* rep = NULL;
    rep = opendir(".");

    if (rep == NULL){  
        return(1);      
    	perror("Erreur rep");
    }
    while ((file = readdir(rep))){
		        if (my_strncmp(file->d_name,".",1) != 0 && my_strncmp(file->d_name,"..",1) != 0){
        	my_putstr(file->d_name);
        	my_putstr("  ");
    	}
    }
    my_putstr("  ");
    my_putstr("\n");

    if (file == NULL){
        return(1); 
    	perror("erreur fichier");
    }

    if (closedir(rep) == -1) 
        return(-1);

    return 0;
}

int ls_a(){
    DIR* rep = NULL;
    rep = opendir(".");

    if (rep == NULL){  
        return(1);      
    	perror("Erreur");
    }
    while ((file = readdir(rep))){
		
        my_putstr(file->d_name);
        my_putstr("  ");
    }
    my_putstr("  ");
    my_putstr("\n");
    if (file == NULL){
        return(1); 
    	perror("Erreur");
    }
    if (closedir(rep) == -1) 
        return(-1);

    return 0;
}

int main(int argc, char *argv[]) {
	if (argc == 1){
		ls();
	}else if (argc == 2 && !my_strcmp(argv[1], "-a")) {
		ls_a();
	}
	return (0);
} 

















