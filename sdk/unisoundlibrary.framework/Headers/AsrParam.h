//
//  USCBSTSkill.h
//  USCBaiShiTong
//
//  Created by YouKe on 2020/5/13.
//  Copyright © 2020 Unisound. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface AsrParam : NSObject
@property (nonatomic ,  copy, nullable)NSString *host;

@property (nonatomic ,  copy, nullable)NSString *appKey;

@property (nonatomic ,  copy, nullable)NSString *secret;

@property (nonatomic ,  copy, nullable)NSString *domain;

@property (nonatomic ,  copy, nullable)NSString *lang;

@property (nonatomic ,  copy, nullable)NSString *format;

@property (nonatomic ,  copy, nullable)NSString *sample;

@property (nonatomic ,  copy, nullable)NSString *variable;

@property (nonatomic ,  copy, nullable)NSNumber *punctuation;

@property (nonatomic ,  copy, nullable)NSNumber *post_proc;

@property (nonatomic ,  copy, nullable)NSString *acoustic_setting;

@property (nonatomic ,  copy, nullable)NSString *userid;

@end
