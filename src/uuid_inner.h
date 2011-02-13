/*
 * uuid_inner.h
 *
 *  Created on: 2011/02/13
 *      Author: psi
 */

#ifndef UUID_INNER_H_
#define UUID_INNER_H_

#include <rpc.h>
/* ちょっとトリッキーだけど、共存するためにはしょうがない。 */
#undef uuid_t
#include "../include/uuid/uuid.h"

#endif /* UUID_INNER_H_ */
