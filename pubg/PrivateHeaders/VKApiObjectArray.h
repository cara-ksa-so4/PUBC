//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VKApiObject.h"

#import "NSFastEnumeration.h"

@class NSMutableArray;

@interface VKApiObjectArray : VKApiObject <NSFastEnumeration>
{
    unsigned long long _count;	// 8 = 0x8
    NSMutableArray *_items;	// 16 = 0x10
}

+ (id)createWithArray:(id)arg1;	// IMP=0x0000000100b70ca0
+ (id)createWithDictionary:(id)arg1;	// IMP=0x0000000100b70c3c
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) unsigned long long count; // @synthesize count=_count;
- (void).cxx_destruct;	// IMP=0x0000000100b70d48
- (Class)objectClass;	// IMP=0x0000000100b70c28
- (void)serializeTo:(id)arg1 withName:(id)arg2;	// IMP=0x0000000100b709ec
- (id)serialize;	// IMP=0x0000000100b709e4
- (id)lastObject;	// IMP=0x0000000100b70990
- (id)firstObject;	// IMP=0x0000000100b7093c
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;	// IMP=0x0000000100b70880
- (void)removeObject:(id)arg1;	// IMP=0x0000000100b707d4
- (void)addObject:(id)arg1;	// IMP=0x0000000100b70728
- (id)reverseObjectEnumerator;	// IMP=0x0000000100b706d4
- (id)objectEnumerator;	// IMP=0x0000000100b70680
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;	// IMP=0x0000000100b70624
- (id)objectAtIndex:(long long)arg1;	// IMP=0x0000000100b705c8
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;	// IMP=0x0000000100b7055c
- (id)parseItems:(id)arg1 asClass:(Class)arg2;	// IMP=0x0000000100b7036c
- (id)initWithArray:(id)arg1;	// IMP=0x0000000100b70300
- (id)initWithArray:(id)arg1 objectClass:(Class)arg2;	// IMP=0x0000000100b70210
- (id)initWithDictionary:(id)arg1 objectClass:(Class)arg2;	// IMP=0x0000000100b6fff8
- (id)initWithDictionary:(id)arg1;	// IMP=0x0000000100b6ff8c

@end

