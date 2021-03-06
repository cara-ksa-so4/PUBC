//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSDDAbstractLogger.h"

@class NSObject<OS_dispatch_source>;

@interface AWSDDAbstractDatabaseLogger : AWSDDAbstractLogger
{
    unsigned long long _saveThreshold;	// 24 = 0x18
    double _saveInterval;	// 32 = 0x20
    double _maxAge;	// 40 = 0x28
    double _deleteInterval;	// 48 = 0x30
    _Bool _deleteOnEverySave;	// 56 = 0x38
    _Bool _saveTimerSuspended;	// 57 = 0x39
    unsigned long long _unsavedCount;	// 64 = 0x40
    unsigned long long _unsavedTime;	// 72 = 0x48
    NSObject<OS_dispatch_source> *_saveTimer;	// 80 = 0x50
    unsigned long long _lastDeleteTime;	// 88 = 0x58
    NSObject<OS_dispatch_source> *_deleteTimer;	// 96 = 0x60
}

- (void).cxx_destruct;	// IMP=0x0000000100b948a4
- (void)flush;	// IMP=0x0000000100b94898
- (void)logMessage:(id)arg1;	// IMP=0x0000000100b94800
- (void)willRemoveLogger;	// IMP=0x0000000100b947bc
- (void)didAddLogger;	// IMP=0x0000000100b94788
- (void)deleteOldLogEntries;	// IMP=0x0000000100b94678
- (void)savePendingLogEntries;	// IMP=0x0000000100b94568
@property _Bool deleteOnEverySave;
@property double deleteInterval;
@property double maxAge;
@property double saveInterval;
@property unsigned long long saveThreshold;
- (void)createAndStartDeleteTimer;	// IMP=0x0000000100b92ca0
- (void)updateDeleteTimer;	// IMP=0x0000000100b92bfc
- (void)destroyDeleteTimer;	// IMP=0x0000000100b92bb8
- (void)createSuspendedSaveTimer;	// IMP=0x0000000100b92a6c
- (void)updateAndResumeSaveTimer;	// IMP=0x0000000100b929c8
- (void)destroySaveTimer;	// IMP=0x0000000100b9295c
- (void)performDelete;	// IMP=0x0000000100b92904
- (void)performSaveAndSuspendSaveTimer;	// IMP=0x0000000100b92870
- (void)db_saveAndDelete;	// IMP=0x0000000100b9286c
- (void)db_delete;	// IMP=0x0000000100b92868
- (void)db_save;	// IMP=0x0000000100b92864
- (_Bool)db_log:(id)arg1;	// IMP=0x0000000100b9285c
- (void)dealloc;	// IMP=0x0000000100b927fc
- (id)init;	// IMP=0x0000000100b92778

@end

