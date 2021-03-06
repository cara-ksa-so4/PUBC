//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableArray;

@interface AWSDDLog : NSObject
{
    unsigned long long _logLevel;	// 8 = 0x8
    NSMutableArray *__loggers;	// 16 = 0x10
}

+ (void)setLevel:(unsigned long long)arg1 forClassWithName:(id)arg2;	// IMP=0x0000000100bd54e8
+ (void)setLevel:(unsigned long long)arg1 forClass:(Class)arg2;	// IMP=0x0000000100bd5498
+ (unsigned long long)levelForClassWithName:(id)arg1;	// IMP=0x0000000100bd5464
+ (unsigned long long)levelForClass:(Class)arg1;	// IMP=0x0000000100bd541c
+ (id)registeredClassNames;	// IMP=0x0000000100bd5288
+ (id)registeredClasses;	// IMP=0x0000000100bd5130
+ (_Bool)isRegisteredClass:(Class)arg1;	// IMP=0x0000000100bd5058
+ (void)flushLog;	// IMP=0x0000000100bd4f5c
+ (void)log:(_Bool)arg1 message:(id)arg2;	// IMP=0x0000000100bd4ed0
+ (void)log:(_Bool)arg1 message:(id)arg2 level:(unsigned long long)arg3 flag:(unsigned long long)arg4 context:(long long)arg5 file:(const char *)arg6 function:(const char *)arg7 line:(unsigned long long)arg8 tag:(id)arg9;	// IMP=0x0000000100bd4c84
+ (void)log:(_Bool)arg1 level:(unsigned long long)arg2 flag:(unsigned long long)arg3 context:(long long)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(unsigned long long)arg7 tag:(id)arg8 format:(id)arg9 args:(char *)arg10;	// IMP=0x0000000100bd4abc
+ (void)log:(_Bool)arg1 level:(unsigned long long)arg2 flag:(unsigned long long)arg3 context:(long long)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(unsigned long long)arg7 tag:(id)arg8 format:(id)arg9;	// IMP=0x0000000100bd4884
+ (id)allLoggersWithLevel;	// IMP=0x0000000100bd4548
+ (id)allLoggers;	// IMP=0x0000000100bd435c
+ (void)removeAllLoggers;	// IMP=0x0000000100bd4260
+ (void)removeLogger:(id)arg1;	// IMP=0x0000000100bd40bc
+ (void)addLogger:(id)arg1 withLevel:(unsigned long long)arg2;	// IMP=0x0000000100bd3f08
+ (void)addLogger:(id)arg1;	// IMP=0x0000000100bd3e8c
+ (id)loggingQueue;	// IMP=0x0000000100bd3e74
+ (void)initialize;	// IMP=0x0000000100bd3c8c
+ (id)sharedInstance;	// IMP=0x0000000100bd3bd4
@property(retain, nonatomic) NSMutableArray *_loggers; // @synthesize _loggers=__loggers;
@property(nonatomic) unsigned long long logLevel; // @synthesize logLevel=_logLevel;
- (void).cxx_destruct;	// IMP=0x0000000100bd67d4
- (void)lt_flush;	// IMP=0x0000000100bd6578
- (void)lt_log:(id)arg1;	// IMP=0x0000000100bd6118
- (id)lt_allLoggersWithLevel;	// IMP=0x0000000100bd5f6c
- (id)lt_allLoggers;	// IMP=0x0000000100bd5df4
- (void)lt_removeAllLoggers;	// IMP=0x0000000100bd5bd0
- (void)lt_removeLogger:(id)arg1;	// IMP=0x0000000100bd5978
- (void)lt_addLogger:(id)arg1 level:(unsigned long long)arg2;	// IMP=0x0000000100bd5524
- (void)flushLog;	// IMP=0x0000000100bd4f9c
- (void)log:(_Bool)arg1 message:(id)arg2;	// IMP=0x0000000100bd4f44
- (void)log:(_Bool)arg1 message:(id)arg2 level:(unsigned long long)arg3 flag:(unsigned long long)arg4 context:(long long)arg5 file:(const char *)arg6 function:(const char *)arg7 line:(unsigned long long)arg8 tag:(id)arg9;	// IMP=0x0000000100bd4d5c
- (void)log:(_Bool)arg1 level:(unsigned long long)arg2 flag:(unsigned long long)arg3 context:(long long)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(unsigned long long)arg7 tag:(id)arg8 format:(id)arg9 args:(char *)arg10;	// IMP=0x0000000100bd4b8c
- (void)log:(_Bool)arg1 level:(unsigned long long)arg2 flag:(unsigned long long)arg3 context:(long long)arg4 file:(const char *)arg5 function:(const char *)arg6 line:(unsigned long long)arg7 tag:(id)arg8 format:(id)arg9;	// IMP=0x0000000100bd49a0
- (void)queueLogMessage:(id)arg1 asynchronously:(_Bool)arg2;	// IMP=0x0000000100bd471c
@property(readonly, copy, nonatomic) NSArray *allLoggersWithLevel;
@property(readonly, copy, nonatomic) NSArray *allLoggers;
- (void)removeAllLoggers;	// IMP=0x0000000100bd42a0
- (void)removeLogger:(id)arg1;	// IMP=0x0000000100bd4128
- (void)addLogger:(id)arg1 withLevel:(unsigned long long)arg2;	// IMP=0x0000000100bd3f7c
- (void)addLogger:(id)arg1;	// IMP=0x0000000100bd3ef8
- (void)applicationWillTerminate:(id)arg1;	// IMP=0x0000000100bd3e80
- (id)init;	// IMP=0x0000000100bd3d84

@end

