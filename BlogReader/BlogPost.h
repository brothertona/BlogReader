//
//  BlogPost.h
//  BlogReader
//
//  Created by Andrew Brotherton on 9/2/14.
//  Copyright (c) 2014 Treehouse. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BlogPost : NSObject
   
@property  (nonatomic, strong) NSString *title;

@property (nonatomic, strong) NSString *author;

@property (nonatomic, strong) NSString *thumbnail;

@property (nonatomic, strong) NSString *date;

@property (nonatomic, strong) NSURL *url;


//Designated Initializer

- (id) initWithTitle:(NSString *)title;
+ (id) blogPostWithTitle: (NSString *)title;
- (NSURL *) thumbnailURL;
- (NSString *) formattedDate;

@end
