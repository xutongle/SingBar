//
//  ContentsModel.m
//  ChangBa
//
//  Created by V.Valentino on 16/9/21.
//  Copyright © 2016年 huyifan. All rights reserved.
//

#import "ContentsModel.h"

@implementation ContentsModel
+(JSONKeyMapper *)keyMapper{
    return [[JSONKeyMapper alloc]initWithModelToJSONDictionary:@{@"contentsIdentifier":@"id"}];
}
@end
