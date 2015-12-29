//
//  UIConstant.h
//  MyMusicPlayer
//
//  Created by king on 15/12/29.
//  Copyright © 2015年 songs. All rights reserved.
//

#define FontName             @"Helvetica Neue"
#define BoldFontName         @"Helvetica-Bold"
#define DefaultBackgroundColor [UIColor colorWithWhite:0.941 alpha:1.000]

//Main Screen
#define SCREEN_HEIGHT [[UIScreen mainScreen] bounds].size.height
#define SCREEN_WIDTH [[UIScreen mainScreen]bounds].size.width
#define ORIGINAL_MAX_WIDTH 640.0f
#define KEYWINDOW [[[UIApplication shareApplication] delegate] window]

//RGB Color
#define RGBA(r, g, b, a) [UIColor colorWithRed:r/255.0f green:g/255.0f blue:b/255.0f alpha:a]
#define RDB(r, g, b) RGBA(r, g, b, 1.0f)

#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)

#define SCREEN_MAX_LENGTH (MAX(SCREEN_WIDTH, SCREEN_HEIGHT))
#define SCREEN_MIN_LENGTH (MIN(SCREEN_WIDTH, SCREEN_HEIGHT))

#define IS_IPHONE_4_OR_LESS (IS_IPHONE && SCREEN_MAX_LENGTH < 568.0)
#define IS_IPHONE_5 (IS_IPHONE && SCREEN_MAX_LENGTH == 568.0)
#define IS_IPHONE_6 (IS_IPHONE && SCREEN_MAX_LENGTH == 667.0)
#define IS_IPHONE_6P (IS_IPHONE && SCREEN_MAX_LENGTH == 736.0)