//
//  DKTab.h
//  TabDump
//
//  Created by Daniel on 4/22/14.
//  Copyright (c) 2014 dkhamsing. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DKTab : NSObject

/**
 Number of the tab.
 */
@property (nonatomic,strong) NSString *tabNumber;


/**
 Category of the tab including colon.
 */
@property (nonatomic,strong) NSString *category;


/**
 Category of the tab.
 */
@property (nonatomic,strong) NSString *categoryOnly;


/**
 Tab text, stripped from HTML.
 */
@property (nonatomic,strong) NSString *strippedHTML;


/**
 Tab text, stripped from HTML, tab number and category; trimmed from white space.
 */
@property (nonatomic,strong) NSString *tabText;


/**
 Tab URL.
 */
@property (nonatomic,strong) NSString *urlString;


#pragma mark Methods

/**
 Return a Boolean specifying whether the brand color is dark.
 */
- (BOOL)brandColorIsDark;


/**
 Get the color from the category name.
 */
- (UIColor*)colorForCategory;


/**
 Get content text attributes.
 */
- (NSDictionary*)contentAttributes;


/**
 Get the size for the stripped HTML.
 */
- (CGSize)sizeForStrippedHTML;


@end