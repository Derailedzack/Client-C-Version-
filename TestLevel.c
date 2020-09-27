#include"TestLevel.h"
//void CreateLevel(){

	//data->level_data = level_data;

//}
char* level_data = {'T','T','T','T','0','0','T','T','T','T'};
const char* test = "T";
const char* LoadLevel(){
	//for(int i = 0; i < 90; i++){
	//	assert(strstr(level_data[i],"T") == "TRE");
		if(strstr(level_data[1],'T') != 0 ){
		//printf("%s",strchr(level_data,'T'));
			printf("SOLID");
			return "SOLID";
		}
		//if(strcmp(level_data[i],'0')  != 0 ){
			//		printf("BLANK");
				//	return "BLANK";
				//}
	//}

	//}
}
