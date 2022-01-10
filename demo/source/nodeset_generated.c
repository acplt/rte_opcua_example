/**********************************
 * Autogenerated -- do not modify *
 **********************************/

#include "nodeset_generated.h"

/* IdentifierType */
static UA_DataTypeMember IdentifierType_members[2] = {
{
    UA_TYPENAME("IdH") /* .memberName */
    &UA_TYPES[UA_TYPES_UINT32], /* .memberType */
    0, /* .padding */
    false, /* .isArray */
    false  /* .isOptional */
},
{
    UA_TYPENAME("IdL") /* .memberName */
    &UA_TYPES[UA_TYPES_UINT32], /* .memberType */
    offsetof(UA_IdentifierType, idL) - offsetof(UA_IdentifierType, idH) - sizeof(UA_UInt32), /* .padding */
    false, /* .isArray */
    false  /* .isOptional */
},};

/* ActimodeType */
#define ActimodeType_members NULL
const UA_DataType UA_NODESET[UA_NODESET_COUNT] = {
/* IdentifierType */
{
    UA_TYPENAME("IdentifierType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {3LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {4LU}}, /* .binaryEncodingId */
    sizeof(UA_IdentifierType), /* .memSize */
    UA_DATATYPEKIND_STRUCTURE, /* .typeKind */
    true, /* .pointerFree */
    false, /* .overlayable */
    2, /* .membersSize */
    IdentifierType_members  /* .members */
},
/* ActimodeType */
{
    UA_TYPENAME("ActimodeType") /* .typeName */
    {2, UA_NODEIDTYPE_NUMERIC, {2LU}}, /* .typeId */
    {2, UA_NODEIDTYPE_NUMERIC, {0}}, /* .binaryEncodingId */
    sizeof(UA_ActimodeType), /* .memSize */
    UA_DATATYPEKIND_ENUM, /* .typeKind */
    true, /* .pointerFree */
    UA_BINARY_OVERLAYABLE_INTEGER, /* .overlayable */
    0, /* .membersSize */
    ActimodeType_members  /* .members */
},
};
