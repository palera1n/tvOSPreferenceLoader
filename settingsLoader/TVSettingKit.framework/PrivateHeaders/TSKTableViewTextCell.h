/*
* This header is generated by classdump-dyld 1.0
* on Sunday, July 22, 2018 at 11:13:54 PM Mountain Standard Time
* Operating System: Version 11.3 (Build 15L211)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import "TSKBaseTableViewCell.h"
#import "TSKCellUpdating.h"

@class UITapGestureRecognizer, NSArray, UIActivityIndicatorView, NSString, TSKSettingItem;

@interface TSKTableViewTextCell : TSKBaseTableViewCell <TSKCellUpdating> {

	UITapGestureRecognizer* _rightButtonRecognizer;
	NSArray* _konamiSequenceArray;
	UITapGestureRecognizer* _leftButtonRecognizer;
	UITapGestureRecognizer* _selectButtonRecognizer;
	UITapGestureRecognizer* _playPauseButtonRecognizer;
	UIActivityIndicatorView* _spinnerView;
	NSString* _rightText;
	unsigned long long _accessories;
	TSKSettingItem* _item;

}

@property (nonatomic,weak) TSKSettingItem * item;                //@synthesize item=_item - In the implementation block
@property (nonatomic,copy) NSString * rightText;                          //@synthesize rightText=_rightText - In the implementation block
@property (assign,nonatomic) unsigned long long accessories;              //@synthesize accessories=_accessories - In the implementation block
@property (readonly) NSUInteger hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)preferredCellStyle;
-(TSKSettingItem *)item;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setItem:(TSKSettingItem *)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)prepareForReuse;
-(NSString *)rightText;
-(void)setRightText:(NSString *)arg1 ;
-(void)_accessibilitySetCurrentGesture:(id)arg1 ;
-(unsigned long long)accessories;
-(void)setAccessories:(unsigned long long)arg1 ;
-(void)settingItem:(id)arg1 didUpdateMetadataWithGroup:(id)arg2 ;
-(void)_rightButtonRecognized:(id)arg1 ;
-(void)_konamiCodeRecognizerWithTapGestureRecognizer:(id)arg1 ;
-(void)_updateKonamiCodeTrackerWithButtonPressType:(long long)arg1 ;
@end

