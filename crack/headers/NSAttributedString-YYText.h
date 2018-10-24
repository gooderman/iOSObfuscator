//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSAttributedString.h"

@class NSArray, NSDictionary, NSNumber, NSParagraphStyle, NSShadow, NSString, UIColor, UIFont, YYTextBorder, YYTextDecoration, YYTextShadow;

@interface NSAttributedString (YYText)
+ (id)attachmentStringWithEmojiImage:(id)arg1 fontSize:(double)arg2;
+ (id)attachmentStringWithContent:(id)arg1 contentMode:(long long)arg2 attachmentSize:(struct CGSize)arg3 alignToFont:(id)arg4 alignment:(long long)arg5;
+ (id)attachmentStringWithContent:(id)arg1 contentMode:(long long)arg2 width:(double)arg3 ascent:(double)arg4 descent:(double)arg5;
+ (id)unarchiveFromData:(id)arg1;
- (_Bool)canDrawWithUIKit;
- (_Bool)isSharedAttributesInAllRange;
- (struct _NSRange)rangeOfAll;
- (id)plainTextForRange:(struct _NSRange)arg1;
- (struct CGAffineTransform)textGlyphTransformAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) struct CGAffineTransform textGlyphTransform;
- (id)textBackgroundBorderAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) YYTextBorder *textBackgroundBorder;
- (id)textBorderAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) YYTextBorder *textBorder;
- (id)textStrikethroughAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) YYTextDecoration *textStrikethrough;
- (id)textUnderlineAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) YYTextDecoration *textUnderline;
- (id)textInnerShadowAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) YYTextShadow *textInnerShadow;
- (id)textShadowAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) YYTextShadow *textShadow;
- (id)tabStopsAtIndex:(unsigned long long)arg1;
- (double)defaultTabIntervalAtIndex:(unsigned long long)arg1;
- (float)hyphenationFactorAtIndex:(unsigned long long)arg1;
- (long long)baseWritingDirectionAtIndex:(unsigned long long)arg1;
- (double)lineHeightMultipleAtIndex:(unsigned long long)arg1;
- (double)maximumLineHeightAtIndex:(unsigned long long)arg1;
- (double)minimumLineHeightAtIndex:(unsigned long long)arg1;
- (double)tailIndentAtIndex:(unsigned long long)arg1;
- (double)headIndentAtIndex:(unsigned long long)arg1;
- (double)firstLineHeadIndentAtIndex:(unsigned long long)arg1;
- (double)paragraphSpacingBeforeAtIndex:(unsigned long long)arg1;
- (double)paragraphSpacingAtIndex:(unsigned long long)arg1;
- (double)lineSpacingAtIndex:(unsigned long long)arg1;
- (long long)lineBreakModeAtIndex:(unsigned long long)arg1;
- (long long)alignmentAtIndex:(unsigned long long)arg1;
@property(readonly, copy, nonatomic) NSArray *tabStops;
@property(readonly, nonatomic) double defaultTabInterval;
@property(readonly, nonatomic) float hyphenationFactor;
@property(readonly, nonatomic) long long baseWritingDirection;
@property(readonly, nonatomic) double lineHeightMultiple;
@property(readonly, nonatomic) double maximumLineHeight;
@property(readonly, nonatomic) double minimumLineHeight;
@property(readonly, nonatomic) double tailIndent;
@property(readonly, nonatomic) double headIndent;
@property(readonly, nonatomic) double firstLineHeadIndent;
@property(readonly, nonatomic) double paragraphSpacingBefore;
@property(readonly, nonatomic) double paragraphSpacing;
@property(readonly, nonatomic) double lineSpacing;
@property(readonly, nonatomic) long long lineBreakMode;
@property(readonly, nonatomic) long long alignment;
- (id)paragraphStyleAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSParagraphStyle *paragraphStyle;
- (id)writingDirectionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *writingDirection;
- (id)languageAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *language;
- (_Bool)verticalGlyphFormAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) _Bool verticalGlyphForm;
- (id)baselineOffsetAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSNumber *baselineOffset;
- (id)expansionAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSNumber *expansion;
- (id)obliquenessAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSNumber *obliqueness;
- (id)textEffectAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSString *textEffect;
- (id)ligatureAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSNumber *ligature;
- (id)underlineColorAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIColor *underlineColor;
- (long long)underlineStyleAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) long long underlineStyle;
- (id)strikethroughColorAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIColor *strikethroughColor;
- (long long)strikethroughStyleAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) long long strikethroughStyle;
- (id)shadowAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSShadow *shadow;
- (id)strokeColorAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIColor *strokeColor;
- (id)strokeWidthAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSNumber *strokeWidth;
- (id)backgroundColorAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIColor *backgroundColor;
- (id)colorAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIColor *color;
- (id)kernAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) NSNumber *kern;
- (id)fontAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) UIFont *font;
@property(readonly, copy, nonatomic) NSDictionary *attributes;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)attributesAtIndex:(unsigned long long)arg1;
- (id)archiveToData;
@end

