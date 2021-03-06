//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MessageQueue : NSObject
{
    char _buffer[16384];	// 8 = 0x8
    struct SDKWriteBuffer _writeBuffer;	// 16392 = 0x4008
    struct _DataPerSec _dataPerSec;	// 16408 = 0x4018
}

+ (id)sharedInstance;	// IMP=0x00000001011336b4
- (id).cxx_construct;	// IMP=0x000000010113429c
- (void)dealloc;	// IMP=0x0000000101134268
- (void)isFlushBufferToFile:(unsigned long long)arg1;	// IMP=0x0000000101134214
- (void)flushBufferToFile;	// IMP=0x000000010113411c
- (void)pushMessageToGloabelBufferQueue:(unsigned long long)arg1 DataPerSec:(struct _DataPerSec)arg2 isWriteToBuffer:(_Bool)arg3;	// IMP=0x0000000101134008
- (void)pushMessageToGloabelBufferQueue:(struct _Scene)arg1 forceWriteToFile:(_Bool)arg2;	// IMP=0x0000000101133f28
- (int)pushMessageToGloabelBufferQueueType:(unsigned long long)arg1 int8:(BOOL)arg2 int16:(short)arg3 int32:(int)arg4 bytes:(const char *)arg5 bytesLen:(int)arg6;	// IMP=0x0000000101133dcc
- (void)pushMessageToGloabelBufferQueueBytes:(const char *)arg1 bufferLen:(short)arg2;	// IMP=0x0000000101133da0
- (void)pushMessageToGloabelBufferQueueInt64:(long long)arg1;	// IMP=0x0000000101133d9c
- (void)pushMessageToGloabelBufferQueueInt32:(int)arg1;	// IMP=0x0000000101133d74
- (void)pushMessageToGloabelBufferQueueInt16:(short)arg1;	// IMP=0x0000000101133d4c
- (void)pushMessageToGloabelBufferQueueInt8:(BOOL)arg1;	// IMP=0x0000000101133d28
- (void)pushMessageToGloabelBufferQueue:(CDStruct_13d97d58)arg1;	// IMP=0x0000000101133ccc
- (void)pushMessageToGloabelBufferCustomData:(struct _MsgQueueBody)arg1 type:(unsigned long long)arg2;	// IMP=0x0000000101133778
- (id)init;	// IMP=0x000000010113360c

@end

