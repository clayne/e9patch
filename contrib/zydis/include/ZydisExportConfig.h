#ifndef ZYDIS_EXPORT_H
#define ZYDIS_EXPORT_H
#define ZYDIS_EXPORT
#define ZYDIS_NO_EXPORT
#define ZYDIS_DEPRECATED __attribute__ ((__deprecated__))
#define ZYDIS_DEPRECATED_EXPORT ZYDIS_EXPORT ZYDIS_DEPRECATED
#define ZYDIS_DEPRECATED_NO_EXPORT ZYDIS_NO_EXPORT ZYDIS_DEPRECATED
#define ZYDIS_NO_DEPRECATED
#endif