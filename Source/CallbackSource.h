//
//	CallbackSource.h
//	ControlPlane
//
//	Created by David Jennes on 21/09/11.
//	Copyright 2011. All rights reserved.
//

#import "Source.h"

@interface CallbackSource : Source

// implemented by subclasses
+ (void) load;
- (NSArray *) observableKeys;
- (void) registerCallback;
- (void) unregisterCallback;
- (void) checkData;

@end