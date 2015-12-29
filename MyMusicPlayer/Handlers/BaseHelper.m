//
//  BaseHelper.m
//  MyMusicPlayer
//
//  Created by king on 15/12/29.
//  Copyright © 2015年 songs. All rights reserved.
//

#import "BaseHelper.h"

@implementation BaseHelper

//Center Square Image
+ (NSURL *)qiniuImageCenter:(NSString *)link withWidth:(NSString *)width withHeight:(NSString *)height
{
    NSString *url = [[NSString alloc] init];
    if ([height isEqualToString:@"0"]) {
        url = [NSString stringWithFormat:@"%@?imageView2/2/w/%@/", link, width];
    } else {
        url = [NSString stringWithFormat:@"%@?imageView/1/w/%@/h/%@", link, width, height];
    }
    return [NSURL URLWithString:url];
}

+ (NSURL *)qiniuImageCenter:(NSString *)link withWidth:(NSString *)width withHeight:(NSString *)height model:(NSInteger)model
{
    NSString *url = [[NSString alloc] init];
    url = [NSString stringWithFormat:@"%@?imageView/%ld/w/%@/h/%@", link, (long)model, width, height];
    return [NSURL URLWithString:url];
}
@end
