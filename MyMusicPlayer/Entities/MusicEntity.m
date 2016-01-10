//
//  MusicEntity.m
//  MyMusicPlayer
//
//  Created by king on 15/12/31.
//  Copyright © 2015年 songs. All rights reserved.
//

#import "MusicEntity.h"

@implementation MusicEntity

+ (NSDictionary *)JSONKeyPathsByPropertyKey
{
    return @{
             @"musicId" : @"id",
             @"name" : @"title",
             @"cover" : @"pic",
             @"artistName" : @"artist",
             @"musicUrl" : @"music_url",
             };
}

@end
