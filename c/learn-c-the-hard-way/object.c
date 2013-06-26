#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "object.h"
#include <assert.h>

//void Object_destroy(void *self)
//{
//	Object *obj = self;
//
//	if(obj) {
//		if(obj->description) free(obj->description);
//		free(obj);
//	}
//
//}

void Object_destroy(void *self)
{
	if(self) {
		if(self->description) free(self->description);
		free(obj);
	}
}

void Object_describe(void *self)
{
	Object *obj = self;
	printf("%s.\n", obj->description);
}

int Object_init(void *self)
{
	// do nothing really
	return 1;
}

void *Object_move(void *self, Direction direction)
{
	printf("You can't go that direction.\n");
	return NULL;
}

int Object_attack(void *self, int damage)
{
	printf("You can't attack that.\n");
	return 0;
}

void *Object_new(size_t size, Object proto, char *description)
{
	// setup the default functions in case they aren't set
	if(!proto.init) proto.init = Object_init;

}
