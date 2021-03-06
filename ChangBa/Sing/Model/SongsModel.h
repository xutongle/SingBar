//
//  SongsModel.h
//  ChangBa
//
//  Created by V.Valentino on 16/9/21.
//  Copyright © 2016年 huyifan. All rights reserved.
//

#import <JSONModel/JSONModel.h>

@interface SongsModel : JSONModel
@property (nonatomic, assign) BOOL score_enable;
@property (nonatomic, strong) NSString *score_count;
@property (nonatomic, strong) NSString *singcount;
@property (nonatomic, strong) NSString *songid;
@property (nonatomic, assign) double hotvalue;
@property (nonatomic, strong) NSString *melp;
@property (nonatomic, strong) NSString *icon;
@property (nonatomic, strong) NSString *mp3;
@property (nonatomic, strong) NSString *mel;
@property (nonatomic, strong) NSString *tag;
@property (nonatomic, strong) NSString *name;
@property (nonatomic, assign) double indirecom;
@property (nonatomic, strong) NSString *size;
@property (nonatomic, strong) NSString *music;
@property (nonatomic, assign) BOOL has_high_quality;
@property (nonatomic, strong) NSString *zbd;
@property (nonatomic, strong) NSString *pinyin;
@property (nonatomic, strong) NSString *uploader_photo;
@property (nonatomic, strong) NSString *uploader;
@property (nonatomic, strong) NSString *artist;
@property (nonatomic, strong) NSString *original_mp3;
@property (nonatomic, strong) NSString *recommend;
@property (nonatomic, assign) BOOL is_high_quality;
@property (nonatomic, assign) double accompanymax;
@property (nonatomic, strong) NSString *invalid;
@property (nonatomic, strong) NSString *zrc;
@property (nonatomic, strong) NSString *uploader_name;

@end
