//
//  GVUserDefaults+Properities.m
//  MyMusicPlayer
//
//  Created by king on 15/12/31.
//  Copyright © 2015年 songs. All rights reserved.
//

#import "GVUserDefaults+Properities.h"

@implementation GVUserDefaults (Properities)

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
