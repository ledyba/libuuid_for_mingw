/*
 * gen_uuid.c
 *
 *  Created on: 2011/02/13
 *      Author: psi
 */

/**
 *  See also: http://linux.die.net/man/3/uuid_generate
 */

#include "uuid_inner.h"

void uuid_generate(uuid_t out){
	UuidCreateNil((UUID*)out);
	UuidCreate((UUID*)out);
}
void uuid_generate_random(uuid_t out){
	UuidCreateNil((UUID*)out);
	UuidCreate((UUID*)out);
}
void uuid_generate_time(uuid_t out){
	UuidCreateNil((UUID*)out);
	UuidCreate((UUID*)out);
}
