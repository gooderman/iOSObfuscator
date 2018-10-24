//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YYTextParser.h"

@class NSMutableArray, NSRegularExpression, NSString, UIColor, UIFont, YYTextBorder;

@interface YYTextSimpleMarkdownParser : NSObject <YYTextParser>
{
    UIFont *_font;
    NSMutableArray *_headerFonts;
    UIFont *_boldFont;
    UIFont *_italicFont;
    UIFont *_boldItalicFont;
    UIFont *_monospaceFont;
    YYTextBorder *_border;
    NSRegularExpression *_regexEscape;
    NSRegularExpression *_regexHeader;
    NSRegularExpression *_regexH1;
    NSRegularExpression *_regexH2;
    NSRegularExpression *_regexBreakline;
    NSRegularExpression *_regexEmphasis;
    NSRegularExpression *_regexStrong;
    NSRegularExpression *_regexStrongEmphasis;
    NSRegularExpression *_regexUnderline;
    NSRegularExpression *_regexStrikethrough;
    NSRegularExpression *_regexInlineCode;
    NSRegularExpression *_regexLink;
    NSRegularExpression *_regexLinkRefer;
    NSRegularExpression *_regexList;
    NSRegularExpression *_regexBlockQuote;
    NSRegularExpression *_regexCodeBlock;
    NSRegularExpression *_regexNotEmptyLine;
    double _fontSize;
    double _headerFontSize;
    UIColor *_textColor;
    UIColor *_controlTextColor;
    UIColor *_headerTextColor;
    UIColor *_inlineTextColor;
    UIColor *_codeTextColor;
    UIColor *_linkTextColor;
}

@property(retain, nonatomic) UIColor *linkTextColor; // @synthesize linkTextColor=_linkTextColor;
@property(retain, nonatomic) UIColor *codeTextColor; // @synthesize codeTextColor=_codeTextColor;
@property(retain, nonatomic) UIColor *inlineTextColor; // @synthesize inlineTextColor=_inlineTextColor;
@property(retain, nonatomic) UIColor *headerTextColor; // @synthesize headerTextColor=_headerTextColor;
@property(retain, nonatomic) UIColor *controlTextColor; // @synthesize controlTextColor=_controlTextColor;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double headerFontSize; // @synthesize headerFontSize=_headerFontSize;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (void).cxx_destruct;
- (_Bool)parseText:(id)arg1 selectedRange:(struct _NSRange *)arg2;
- (unsigned long long)lenghOfBeginChar:(unsigned short)arg1 inString:(id)arg2 withRange:(struct _NSRange)arg3;
- (unsigned long long)lenghOfEndWhiteInString:(id)arg1 withRange:(struct _NSRange)arg2;
- (unsigned long long)lenghOfBeginWhiteInString:(id)arg1 withRange:(struct _NSRange)arg2;
- (void)setColorWithDarkTheme;
- (void)setColorWithBrightTheme;
- (void)_updateFonts;
- (id)init;
- (void)initRegex;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

