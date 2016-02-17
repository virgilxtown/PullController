//
//  PullController.h
//  InfoClouds
//
//  Created by virgil on 13-6-25.
//  Copyright (c) 2013年 XtownMobile. All rights reserved.
//

#import <UIKit/UIKit.h> 
#import "EGOViewCommon.h"

@class EGORefreshTableFooterView;
@class EGORefreshTableHeaderView; 

typedef enum {
    Content_TableView,
    Content_ScrollView,
    Content_CollectionView
}ContentViewType;

@interface LoadingFooter : UIView

@property(nonatomic,readonly)UIActivityIndicatorView *indicator;
@property(nonatomic,readonly)UILabel *infoLabel;

@end

@interface PullController : UIViewController <EGORefreshTableDelegate, UITableViewDelegate, UITableViewDataSource>
{
    EGORefreshTableHeaderView *_refreshHeaderView;
    LoadingFooter             *_refreshFooterView;
    BOOL                       _reloading;
    UITableView                *_tableView;
    BOOL                       _disappear;
    BOOL                       _refreshIfViewAppear;
    BOOL                       _more;
    BOOL                       _loadNext; 
    NSUInteger                 _currentPage;
    ContentViewType            _contentViewType;
    UICollectionViewLayout    *_layout;
}

@property (nonatomic,assign) UIEdgeInsets extraInset;//给顶部或者底部留出多余的空间

- (instancetype)initWithTableViewStyle:(UITableViewStyle)style;
- (instancetype)initAsType:(ContentViewType)type collectionLayout:(UICollectionViewLayout *)layout;
- (void)showRefreshHeader:(BOOL)animated;//自动刷新
- (void)refreshData;//刷新数据
- (void)startLoadNextPage;//加载下一页
- (void)finishReloadingData;//完成刷新或者加载
- (void)hasMore;//判断是否在列表的底部添加加载更多的视图
- (void)removeHeaderView;

@end
