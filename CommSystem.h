#include <pthread.h>

pthread_t createCommunication();

void * communicationMain(void *arg);

void sendMessage(int chid, const void *msg, int size);

void disconnectFromChannel(int coid);
