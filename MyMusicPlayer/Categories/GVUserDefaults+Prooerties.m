//
//  GVUserDefaults+Prooerties.m
//  MyMusicPlayer
//
//  Created by king on 15/12/29.
//  Copyright © 2015年 songs. All rights reserved.
//

#import "GVUserDefaults+Prooerties.h"

@implementation GVUserDefaults (Prooerties)

@dynamic userClientToken;
@dynamic userLoginToken;
@dynamic currentUserId;
@dynamic lastTimeShowLaunchScreenAd;
@dynamic musicCycleType;
@dynamic shouldShowNotWiFiALertView;

- (NSDictionary *)setupDefaults
{
    return @{@"shouldShowNotWiFiAlertView":@YES};
}

@end
