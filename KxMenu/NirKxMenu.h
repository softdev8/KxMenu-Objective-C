//
//  NirKxMenu.m
//  NirKxMenu
//
//  Created by Michael on 6/20/2017.
//  Copyright © 2017 Michael. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface KxMenuItem : NSObject

@property (readwrite, nonatomic, strong) UIImage *image;
@property (readwrite, nonatomic, strong) NSString *title;
@property (readwrite, nonatomic, weak) id target;
@property (readwrite, nonatomic) SEL action;
@property (readwrite, nonatomic, strong) UIColor *foreColor;
@property (readwrite, nonatomic) NSTextAlignment alignment;

+ (instancetype) menuItem:(NSString *) title
                    image:(UIImage *) image
                   target:(id)target
                   action:(SEL) action;

@end

typedef struct{
    CGFloat R;
    CGFloat G;
    CGFloat B;

}Colour;

typedef struct {
    CGFloat arrowSize;
    CGFloat marginXSpacing;
    CGFloat marginYSpacing;
    CGFloat intervalSpacing;
    CGFloat menuCornerRadius;
    Boolean maskToBackground;
    Boolean shadowOfMenu;
    Boolean hasSeperatorLine;
    Boolean seperatorLineHasInsets;
    Colour textColor;
    Colour menuBackgroundColor;
    
}OptionalConfiguration;


@interface KxMenuView : UIView

@property (atomic, assign) OptionalConfiguration kxMenuViewOptions;

@end

@interface KxMenu : NSObject

+ (void) showMenuInView:(UIView *)view
               fromRect:(CGRect)rect
              menuItems:(NSArray *)menuItems
                withOptions:(OptionalConfiguration) options;

+ (void) dismissMenu;

+ (UIColor *) tintColor;
+ (void) setTintColor: (UIColor *) tintColor;

+ (UIFont *) titleFont;
+ (void) setTitleFont: (UIFont *) titleFont;

@end
