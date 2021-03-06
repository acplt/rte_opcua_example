/**********************************
 * Autogenerated -- do not modify *
 **********************************/

#ifndef NODESET_GENERATED_HANDLING_H_
#define NODESET_GENERATED_HANDLING_H_

#include "nodeset_generated.h"

_UA_BEGIN_DECLS

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wmissing-field-initializers"
# pragma GCC diagnostic ignored "-Wmissing-braces"
#endif


/* IdentifierType */
static UA_INLINE void
UA_IdentifierType_init(UA_IdentifierType *p) {
    memset(p, 0, sizeof(UA_IdentifierType));
}

static UA_INLINE UA_IdentifierType *
UA_IdentifierType_new(void) {
    return (UA_IdentifierType*)UA_new(&UA_NODESET[UA_NODESET_IDENTIFIERTYPE]);
}

static UA_INLINE UA_StatusCode
UA_IdentifierType_copy(const UA_IdentifierType *src, UA_IdentifierType *dst) {
    return UA_copy(src, dst, &UA_NODESET[UA_NODESET_IDENTIFIERTYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_IdentifierType_deleteMembers(UA_IdentifierType *p) {
    UA_clear(p, &UA_NODESET[UA_NODESET_IDENTIFIERTYPE]);
}

static UA_INLINE void
UA_IdentifierType_clear(UA_IdentifierType *p) {
    UA_clear(p, &UA_NODESET[UA_NODESET_IDENTIFIERTYPE]);
}

static UA_INLINE void
UA_IdentifierType_delete(UA_IdentifierType *p) {
    UA_delete(p, &UA_NODESET[UA_NODESET_IDENTIFIERTYPE]);
}

/* ActimodeType */
static UA_INLINE void
UA_ActimodeType_init(UA_ActimodeType *p) {
    memset(p, 0, sizeof(UA_ActimodeType));
}

static UA_INLINE UA_ActimodeType *
UA_ActimodeType_new(void) {
    return (UA_ActimodeType*)UA_new(&UA_NODESET[UA_NODESET_ACTIMODETYPE]);
}

static UA_INLINE UA_StatusCode
UA_ActimodeType_copy(const UA_ActimodeType *src, UA_ActimodeType *dst) {
    return UA_copy(src, dst, &UA_NODESET[UA_NODESET_ACTIMODETYPE]);
}

UA_DEPRECATED static UA_INLINE void
UA_ActimodeType_deleteMembers(UA_ActimodeType *p) {
    UA_clear(p, &UA_NODESET[UA_NODESET_ACTIMODETYPE]);
}

static UA_INLINE void
UA_ActimodeType_clear(UA_ActimodeType *p) {
    UA_clear(p, &UA_NODESET[UA_NODESET_ACTIMODETYPE]);
}

static UA_INLINE void
UA_ActimodeType_delete(UA_ActimodeType *p) {
    UA_delete(p, &UA_NODESET[UA_NODESET_ACTIMODETYPE]);
}

#if defined(__GNUC__) && __GNUC__ >= 4 && __GNUC_MINOR__ >= 6
# pragma GCC diagnostic pop
#endif

_UA_END_DECLS

#endif /* NODESET_GENERATED_HANDLING_H_ */
