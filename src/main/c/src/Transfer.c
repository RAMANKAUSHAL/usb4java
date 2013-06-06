/*
 * Copyright (C) 2013 Klaus Reimer (k@ailis.de)
 * See COPYING file for copying conditions
 */

#include "Transfer.h"
#include "DeviceHandle.h"

jobject wrapTransfer(JNIEnv* env, struct libusb_transfer* transfer)
{
    WRAP_POINTER(env, transfer, "Transfer", "transferPointer");
}

struct libusb_transfer* unwrapTransfer(JNIEnv *env, jobject obj)
{
    UNWRAP_POINTER(env, obj, struct libusb_transfer*, "transferPointer");
}

void resetTransfer(JNIEnv* env, jobject obj)
{
    RESET_POINTER(env, obj, "transferPointer");
}

/**
 * void setDevHandle(DeviceHandle)
 */
JNIEXPORT void JNICALL METHOD_NAME(Transfer, setDevHandle)
(
    JNIEnv *env, jobject this, jobject handle
)
{
    unwrapTransfer(env, this)->dev_handle = unwrapDeviceHandle(env, handle);
}

/**
 * DeviceHandle getDevHandle()
 */
JNIEXPORT jobject JNICALL METHOD_NAME(Transfer, getDevHandle)
(
    JNIEnv *env, jobject this
)
{
    return wrapDeviceHandle(env, unwrapTransfer(env, this)->dev_handle);
}

/**
 * void setFlags(int)
 */
JNIEXPORT void JNICALL METHOD_NAME(Transfer, setFlags)
(
    JNIEnv *env, jobject this, jint flags
)
{
    unwrapTransfer(env, this)->flags = flags;
}

/**
 * byte getFlags()
 */
JNIEXPORT jbyte JNICALL METHOD_NAME(Transfer, getFlags)
(
    JNIEnv *env, jobject this
)
{
    return unwrapTransfer(env, this)->flags;
}

/**
 * void setEndpoint(int)
 */
JNIEXPORT void JNICALL METHOD_NAME(Transfer, setEndpoint)
(
    JNIEnv *env, jobject this, jint endpoint
)
{
    unwrapTransfer(env, this)->endpoint = endpoint;
}

/**
 * byte getEndpoint()
 */
JNIEXPORT jbyte JNICALL METHOD_NAME(Transfer, getEndpoint)
(
    JNIEnv *env, jobject this
)
{
    return unwrapTransfer(env, this)->endpoint;
}

/**
 * void setType(int)
 */
JNIEXPORT void JNICALL METHOD_NAME(Transfer, setType)
(
    JNIEnv *env, jobject this, jint type
)
{
    unwrapTransfer(env, this)->type = type;
}

/**
 * byte getType()
 */
JNIEXPORT jbyte JNICALL METHOD_NAME(Transfer, getType)
(
    JNIEnv *env, jobject this
)
{
    return unwrapTransfer(env, this)->type;
}

/**
 * void setTimeout(int)
 */
JNIEXPORT void JNICALL METHOD_NAME(Transfer, setTimeout)
(
    JNIEnv *env, jobject this, jint timeout
)
{
    unwrapTransfer(env, this)->timeout = timeout;
}

/**
 * int getTimeout()
 */
JNIEXPORT jint JNICALL METHOD_NAME(Transfer, getTimeout)
(
    JNIEnv *env, jobject this
)
{
    return unwrapTransfer(env, this)->timeout;
}

/**
 * int getStatus()
 */
JNIEXPORT jint JNICALL METHOD_NAME(Transfer, getStatus)
(
    JNIEnv *env, jobject this
)
{
    return unwrapTransfer(env, this)->status;
}

/**
 * void setLength(int)
 */
JNIEXPORT void JNICALL METHOD_NAME(Transfer, setLength)
(
    JNIEnv *env, jobject this, jint length
)
{
    unwrapTransfer(env, this)->length = length;
}

/**
 * int getLength()
 */
JNIEXPORT jint JNICALL METHOD_NAME(Transfer, getLength)
(
    JNIEnv *env, jobject this
)
{
    return unwrapTransfer(env, this)->length;
}

/**
 * int getActualLength()
 */
JNIEXPORT jint JNICALL METHOD_NAME(Transfer, getActualLength)
(
    JNIEnv *env, jobject this
)
{
    return unwrapTransfer(env, this)->actual_length;
}

/**
 * void setNumIsoPackets(int)
 */
JNIEXPORT void JNICALL METHOD_NAME(Transfer, setNumIsoPackets)
(
    JNIEnv *env, jobject this, jint numIsoPackets
)
{
    unwrapTransfer(env, this)->num_iso_packets = numIsoPackets;
}

/**
 * int getNumIsoPackets()
 */
JNIEXPORT jint JNICALL METHOD_NAME(Transfer, getNumIsoPackets)
(
    JNIEnv *env, jobject this
)
{
    return unwrapTransfer(env, this)->num_iso_packets;
}
