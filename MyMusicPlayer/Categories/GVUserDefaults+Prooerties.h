//
//  GVUserDefaults+Prooerties.h
//  MyMusicPlayer
//
//  Created by king on 15/12/29.
//  Copyright © 2015年 songs. All rights reserved.
//

#import <GVUserDefaults/GVUserDefaults.h>

typedef NS_ENUM(NSInteger, MusicCycleType) {
    MusicCycleTypeLoopAll    = 0,
    MusicCycleTypeLoopSingle = 1,
    MusicCycleTypeShuffle    = 2,
};

@interface GVUserDefaults (Prooerties)

@property (nonatomic, copy) NSString *userLoginToken;
@property (nonatomic, copy) NSString *userClientToken;
@property (nonatomic, copy) NSNumber *currentUserId;
@property (nonatomic, strong) NSDate *lastTimeShowLaunchScreenAd;
@property (nonatomic, assign) MusicCycleType musicCycleType;
@property (nonatomic, assign) BOOL shouldShowNotWiFiALertView;

@end
