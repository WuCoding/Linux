#include "func.h"
//线程函数
void* threadFunc(void* p){
	printf("I am child thread\n");
}

int main(){
	pthread_t pthid;//线程id
	int ret;//返回值
	ret=pthread_create(&pthid,NULL,threadFunc,NULL);
	//成功返回0，失败返回错误码
	if(ret!=0){
		//strerror是将错误码翻译成字符串的函数
		printf("%s:%s\n","pthread_create",strerror(ret));
		return -1;
	}
	printf("I am main thread\n");
	return 0;
}
