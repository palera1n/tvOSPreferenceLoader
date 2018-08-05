//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//NOTE: This class is part of TVSettings.app and NOT the framework so can only be used from tweaks inside there

#import "NSObject.h"

@class NSString, TVSPreferences;

@interface TVSettingsPreferenceFacade : NSObject
{
    TVSPreferences *_prefs;	// 8 = 0x8
    NSString *_domain;	// 16 = 0x10
    NSString *_containerPath;	// 24 = 0x18
}

@property(readonly, copy, nonatomic) NSString *containerPath; // @synthesize containerPath=_containerPath;
@property(readonly, copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
- (void).cxx_destruct;	// IMP=0x0000000100012eec
- (id)valueForUndefinedKey:(id)arg1;	// IMP=0x0000000100012e70
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;	// IMP=0x0000000100012d28
- (id)_initWithDomain:(id)arg1 containerPath:(id)arg2 notifyChanges:(_Bool)arg3;	// IMP=0x0000000100012bd0
- (id)initWithDomain:(id)arg1 notifyChanges:(_Bool)arg2;	// IMP=0x0000000100012bbc
- (id)initWithDomain:(id)arg1 containerPath:(id)arg2;	// IMP=0x0000000100012b5c

@end

