// --------------------------------------------------------------------------
//
//  Copyright 2013 Sam Deane, Elegant Chaos. All rights reserved.
//  This source code is distributed under the terms of Elegant Chaos's 
//  liberal license: http://www.elegantchaos.com/license/liberal
// --------------------------------------------------------------------------

@import Foundation;
//#if !(TARGET_IPHONE_SIMULATOR)
//@import asl;
//#else
//@import aslSimu;
//#endif
#import <asl.h>

@interface ECASLClient : NSObject
{
    aslclient client;
    aslmsg msg;
}

+ (ECASLClient*)sharedInstance;
- (id)initWithName:(NSString*)name;

- (void)logAtLevel:(int)level withFormat:(NSString*)format, ... NS_FORMAT_FUNCTION(2,3);
- (void)log:(NSString*)format, ... NS_FORMAT_FUNCTION(1,2);
- (void)error:(NSString*)format, ... NS_FORMAT_FUNCTION(1,2);

@end
