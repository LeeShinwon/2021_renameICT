#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <dirent.h>
#include <string.h>


int main(){
    DIR *dir;
    struct dirent *ent;
    dir = opendir ("./");//디렉터리 경로 넣고 열기
    char element[]="w00.aia";
    if (dir != NULL) {
  
        /* print all the files and directories within directory */
        while ((ent = readdir (dir)) != NULL) {//디렉터리 안에 내용읽기(파일이름 읽기)
            printf ("%s\n", ent->d_name);

            if(strstr(ent->d_name, "강동아")){
                element[2]=1;
            }
            else if(strstr(ent->d_name, "경보윤")){
                element[2]='2';
            }
            else if(strstr(ent->d_name, "김성경")){
                element[2]='3';
            }
            else if(strstr(ent->d_name, "김성윤")){
                element[2]='4';
            }
            else if(strstr(ent->d_name, "김소은")){
                element[2]='5';
            }
            else if(strstr(ent->d_name, "김아현")){
                element[2]='6';
            }
            else if(strstr(ent->d_name, "김예림")){
                element[2]='7';
            }
            else if(strstr(ent->d_name, "김유진")){
                element[2]='8';
            }
            else if(strstr(ent->d_name, "김의혁")){
                element[2]='9';
            }
            else if(strstr(ent->d_name, "김지윤")){
                element[1]='1';
                element[2]='0';
            }
            else if(strstr(ent->d_name, "김현지")){
                element[1]='1';
                element[2]='1';
            }
            else if(strstr(ent->d_name, "김호연")){
                element[1]='1';
                element[2]='2';
            }
            else if(strstr(ent->d_name, "민수홍")){
                element[1]='1';
                element[2]='3';
            }
            else if(strstr(ent->d_name, "박서현")){
                element[1]='1';
                element[2]='4';
            }
            else if(strstr(ent->d_name, "박성수")){
                element[1]='1';
                element[2]='5';
            }
            else if(strstr(ent->d_name, "박예은")){
                element[1]='1';
                element[2]='6';
            }
            else if(strstr(ent->d_name, "박진광")){
                element[1]='1';
                element[2]='7';
            }
            else if(strstr(ent->d_name, "박찬미")){
                element[1]='1';
                element[2]='8';
            }
            else if(strstr(ent->d_name, "박현영")){
                element[1]='1';
                element[2]='9';
            }
            else if(strstr(ent->d_name, "배경헌")){
                element[1]='2';
                element[2]='0';
            }
            else if(strstr(ent->d_name, "서유빈")){
                element[1]='2';
                element[2]='1';
            }
            else if(strstr(ent->d_name, "송영은")){
                element[1]='2';
                element[2]='2';
            }
            else if(strstr(ent->d_name, "유수정")){
                element[1]='2';
                element[2]='3';
            }
            else if(strstr(ent->d_name, "육지민")){
                element[1]='2';
                element[2]='4';
            }
            else if(strstr(ent->d_name, "윤정은")){
                element[1]='2';
                element[2]='5';
            }
            else if(strstr(ent->d_name, "이대현")){
                element[1]='2';
                element[2]='6';
            }
            else if(strstr(ent->d_name, "이드림")){
                element[1]='2';
                element[2]='7';
            }
            else if(strstr(ent->d_name, "이민서")){
                element[1]='2';
                element[2]='8';
            }
            else if(strstr(ent->d_name, "이서정")){
                element[1]='2';
                element[2]='9';
            }
            else if(strstr(ent->d_name, "이솔지")){
                element[1]='3';
                element[2]='0';
            }
            else if(strstr(ent->d_name, "이예인")){
                element[1]='3';
                element[2]='1';
            }
            else if(strstr(ent->d_name, "이진아")){
                element[1]='3';
                element[2]='2';
            }
            else if(strstr(ent->d_name, "이하람")){
                element[1]='3';
                element[2]='3';
            }
            else if(strstr(ent->d_name, "임소은")){
                element[1]='3';
                element[2]='4';
            }
            else if(strstr(ent->d_name, "임하람")){
                element[1]='3';
                element[2]='5';
            }
            else if(strstr(ent->d_name, "장지훈")){
                element[1]='3';
                element[2]='6';
            }
            else if(strstr(ent->d_name, "전찬희")){
                element[1]='3';
                element[2]='7';
            }
            else if(strstr(ent->d_name, "정유정")){
                element[1]='3';
                element[2]='8';
            }
            else if(strstr(ent->d_name, "조우진")){
                element[1]='3';
                element[2]='9';
            }
            else if(strstr(ent->d_name, "진주희")){
                element[1]='4';
                element[2]='0';
            }
            else if(strstr(ent->d_name, "최성찬")){
                element[1]='4';
                element[2]='1';
            }
            else if(strstr(ent->d_name, "최은영")){
                element[1]='4';
                element[2]='2';
            }
            else if(strstr(ent->d_name, "최은지")){
                element[1]='4';
                element[2]='3';
            }
            else if(strstr(ent->d_name, "최지민")){
                element[1]='4';
                element[2]='4';
            }
            else if(strstr(ent->d_name, "최지현")){
                element[1]='4';
                element[2]='5';
            }
            else if(strstr(ent->d_name, "최하진")){
                element[1]='4';
                element[2]='6';
            }
            else if(strstr(ent->d_name, "최혁준")){
                element[1]='4';
                element[2]='7';
            }
            else if(strstr(ent->d_name, "한봄")){
                element[1]='4';
                element[2]='8';
            }
            
        if(rename(ent->d_name, element)!=0){
            printf("%c+1(%s)에서 실패\n\n",element[1],ent->d_name);
            //return 0;
        }
    }
    closedir (dir);//디렉터리 닫기
    } else {
         /* could not open directory */
         perror ("");
        return EXIT_FAILURE;
    }

    return 0;
}
/*int allocate(char * name){
    if(strstr(name, "강동아")){
                return 1;
    }
    else if(strstr(name, "경보윤")){
                return 2;
    }
    else if(strstr(name, "김성경")){
                return 3;
    }
    else if(strstr(name, "김성윤")){
                return 4;
    }
    else if(strstr(ent->d_name, "김소은")){
                return '5';
    }
    else if(strstr(ent->d_name, "김아현")){
                return '6';
    }
    else if(strstr(ent->d_name, "김예림")){
                return '7';
    }
    else if(strstr(ent->d_name, "김유진")){
                return '8';
    }
    else if(strstr(ent->d_name, "김의혁")){
                return '9';
    }
    else if(strstr(name->d_name, "김지윤")){
                return '10';
    }
    else if(strstr(name->d_name, "김현지")){
                return '11';
    }
    else if(strstr(name->d_name, "김호연")){
                return '12';
    }
    else if(strstr(name->d_name, "민수홍")){
                return '13';
    }
    else if(strstr(name->d_name, "박서현")){
                return '14';
    }
    else if(strstr(name->d_name, "박성수")){
                return '15';
    }
    else if(strstr(name->d_name, "박예은")){
                return '16';
    }
    else if(strstr(name->d_name, "박진광")){
                return '17';
    }
    else if(strstr(name->d_name, "박찬미")){
                return '18';
    }
    else if(strstr(name->d_name, "박현영")){
                return '19';
    }
    else if(strstr(name->d_name, "배경헌")){
                return '20';
    }
    else if(strstr(name->d_name, "서유빈")){
                return '21';
    }
    else if(strstr(name->d_name, "송영은")){
                return '22';
    }
    else if(strstr(name->d_name, "유수정")){
                return '23';
    }
    else if(strstr(name->d_name, "육지민")){
                return '24';
    }
    else if(strstr(name->d_name, "윤정은")){
                return '25';
    }
    else if(strstr(name->d_name, "이대현")){
                return '26';
    }
    else if(strstr(name->d_name, "이드림")){
                return '27';
    }
    else if(strstr(name->d_name, "이민서")){
                return '28';
    }
    else if(strstr(name->d_name, "이서정")){
                return '29';
    }
    else if(strstr(name->d_name, "이솔지")){
                return '30';
    }
    else if(strstr(name->d_name, "이예인")){
                return '31';
    }
    else if(strstr(name->d_name, "이진아")){
                return '32';
    }
    else if(strstr(name->d_name, "이하람")){
                return '33';
    }
    else if(strstr(name->d_name, "임소은")){
                return '34';
    }
    else if(strstr(name->d_name, "임하람")){
                return '35';
    }
    else if(strstr(name->d_name, "장지훈")){
        return '36';
    }
    else if(strstr(name->d_name, "전찬희")){
                return '37';
    }
    else if(strstr(name->d_name, "정유정")){
                return '38';
    }
    else if(strstr(name->d_name, "조우진")){
                return '39';
    }
    else if(strstr(name->d_name, "진주희")){
                return '40';
    }
    else if(strstr(name->d_name, "최성찬")){
                return '41';
    }
    else if(strstr(name->d_name, "최은영")){
                return '42';
    }
    else if(strstr(name->d_name, "최은지")){
                return '43';
    }
    else if(strstr(name->d_name, "최지민")){
                return '44';
    }
    else if(strstr(name->d_name, "최지현")){
                return '45';
    }
    else if(strstr(name->d_name, "최하진")){
                return '46';
    }
    else if(strstr(name->d_name, "최혁준")){
                return '47';
    }
    else if(strstr(name->d_name, "한봄")){
                return '48';
    }
}*/
