//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString;

@interface FIRAValue : NSObject <NSCopying>
{
    id _value;	// 8 = 0x8
    long long _valueType;	// 16 = 0x10
}

+ (id)valueFromObject:(id)arg1;	// IMP=0x00000001008a44b4
@property(readonly, nonatomic) long long valueType; // @synthesize valueType=_valueType;
- (void).cxx_destruct;	// IMP=0x00000001008a4c74
- (unsigned long long)hash;	// IMP=0x00000001008a4c1c
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000001008a4b4c
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000001008a4aa0
- (id)description;	// IMP=0x00000001008a4a88
@property(readonly, nonatomic) NSString *stringValue;
@property(readonly, nonatomic) _Bool isString;
@property(readonly, nonatomic) long long int64Value;
@property(readonly, nonatomic) _Bool isInt64;
@property(readonly, nonatomic) double doubleValue;
@property(readonly, nonatomic) _Bool isDouble;
- (id)initWithValueType:(long long)arg1 value:(id)arg2;	// IMP=0x00000001008a48d0
- (id)initWithString:(id)arg1;	// IMP=0x00000001008a4788
- (id)initWithInt64:(long long)arg1;	// IMP=0x00000001008a4720
- (id)initWithDouble:(double)arg1;	// IMP=0x00000001008a46b8

@end

