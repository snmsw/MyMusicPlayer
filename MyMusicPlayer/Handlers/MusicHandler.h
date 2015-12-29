//
//  MusicHandler.h
//  MyMusicPlayer
//
//  Created by king on 15/12/29.
//  Copyright © 2015年 songs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface MusicHandler : NSObject

+ (void)cacheMusicCoverWithMusicEntities:(NSArray *)musicEntities currentIndex:(NSInteger)currentIndex;

+ (void)configNowPlayingInfoCenter;

@end
