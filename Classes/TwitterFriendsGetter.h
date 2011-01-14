//
//  TwitterFriendsGetter.h
//  NowPlayingFriends
//
//  Created by Hiroe Shin on 11/01/12.
//  Copyright 2011 hiroe_orz17. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kFriendsFileName @"friends.plist"

@class OAServiceTicket;
@class NowPlayingFriendsAppDelegate;


@interface TwitterFriendsGetter : NSObject {

}


@property (nonatomic, readonly) NowPlayingFriendsAppDelegate *appDelegate;


- (void)ticket:(OAServiceTicket *)ticket didFinishWithData:(NSData *)data;
- (void)ticket:(OAServiceTicket *)ticket didFailWithError:(NSError *)error;

@end
