//
//  BaseHelper.h
//  MyMusicPlayer
//
//  Created by king on 15/12/29.
//  Copyright © 2015年 songs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BaseHelper : NSObject

+ (NSURL *)qiniuImageCenter:(NSString *)link withWidth:(NSString *)width withHeight:(NSString *)height;

+ (NSURL *)qiniuImageCenter:(NSString *)link withWidth:(NSString *)width withHeight:(NSString *)height model:(NSInteger)model;

@end
