/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10655638c; end: 10655638f; -[SCChatMessageCellViewModel additionalBodyInsets] */

void FUN_10655638c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010befd170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_additionalInsets_11259ce00);
  return;
}



/* Entry: 106556390; end: 106556393; -[SCChatMessageCellViewModel calculateHeight] */

void FUN_106556390(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe0650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_height_1125d5b50);
  return;
}



/* Entry: 106556394; end: 10655639b; -[SCChatMessageCellViewModel intervalFromPrevious] */

undefined8 FUN_106556394(void)

{
  return 0;
}



/* Entry: 10655639c; end: 10655639f; -[SCChatMessageCellViewModel isSentByUser] */

void FUN_10655639c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c077c90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_isMessageSentBySelf_1125fb930);
  return;
}



/* Entry: 1065563a0; end: 1065563a3; -[SCChatMessageCellViewModel needsExtraSpacingOnTop] */

void FUN_1065563a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c234250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_shouldShowSenderHeader_11266aab8);
  return;
}



/* Entry: 1065563a4; end: 1065563a7; -[SCChatMessageCellViewModel refreshViewModel] */

void FUN_1065563a4(void)

{
  return;
}



/* Entry: 1065563a8; end: 1065563db; -[SCChatMessageCellViewModel shouldShowTimestamp] */

bool FUN_1065563a8(long param_1)

{
  func_0x00010c270cc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1065563dc; end: 1065563df; -[SCChatMessageCellViewModel shouldDisplayBelowFoldInChatForPreviewMode] */

void FUN_1065563dc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22f350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_shouldDisplayBelowFoldInChat_1126696f8);
  return;
}



/* Entry: 1065563e0; end: 1065563e3; -[SCChatMessageCellViewModel setIsFirstViewModel:] */

void FUN_1065563e0(void)

{
  return;
}



/* Entry: 1065563e4; end: 106556417; -[SCChatMessageCellViewModel shouldShowDateHeader] */

bool FUN_1065563e4(long param_1)

{
  func_0x00010bf65380();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 106556418; end: 10655641f; -[SCChatMessageCellViewModel isFirstViewModel] */

undefined8 FUN_106556418(void)

{
  return 0;
}



/* Entry: 106556420; end: 106556423; -[SCChatMessageCellViewModel setIsLastViewModel:] */

void FUN_106556420(void)

{
  return;
}



/* Entry: 106556424; end: 10655642b; -[SCChatMessageCellViewModel isLastViewModel] */

undefined8 FUN_106556424(void)

{
  return 0;
}



/* Entry: 10655642c; end: 106556467; -[SCChatMessageCellViewModel bottomLeftCornerIsRounded] */

ulong FUN_10655642c(ulong param_1)

{
  ulong uVar1;
  
  func_0x00010c15de80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf52540();
  _objc_release(param_1);
  return uVar1 >> 2 & 1;
}



/* Entry: 106556468; end: 10655646b; -[SCChatMessageCellViewModel setBottomLeftCornerIsRounded:] */

void FUN_106556468(void)

{
  return;
}



/* Entry: 10655646c; end: 10655649f; -[SCChatMessageCellViewModel isReactable] */

bool FUN_10655646c(long param_1)

{
  func_0x00010c1209c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1065564a0; end: 1065564e3; -[SCChatMessageCellViewModel reactionsHeight] */

undefined8 FUN_1065564a0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c1209c0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c120ec0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1065564e4; end: 106556527; -[SCChatMessageCellViewModel reactions] */

void FUN_1065564e4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c1209c0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c120dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106556528; end: 10655652f; -[SCChatMessageCellViewModel bodyContentWidth] */

undefined8 FUN_106556528(void)

{
  return 0;
}



/* Entry: 106556530; end: 106556533; -[SCChatMessageCellViewModel messageContentFitWidth] */

void FUN_106556530(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be5fdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__messageContentSize_112575918);
  return;
}



/* Entry: 106556534; end: 106556577; -[SCChatMessageCellViewModel payloadContentWidth] */

double FUN_106556534(double param_1,double param_2,undefined8 param_3,double param_4,
                    undefined8 param_5)

{
  func_0x00010c0c3380();
  func_0x00010c0f6740(param_5);
  func_0x00010c0f6740(param_5);
  return (param_1 - param_2) - param_4;
}



/* Entry: 106556578; end: 10655661b; -[SCChatMessageCellViewModel payloadContentFitWidth] */

double FUN_106556578(double param_1,double param_2,undefined8 param_3,double param_4,
                    undefined8 param_5)

{
  undefined8 uVar1;
  double dVar2;
  double dVar3;
  
  uVar1 = param_5;
  func_0x00010c12f740();
  if (((int)uVar1 != 0) && (func_0x00010c0cb360(param_5), 0.0 < param_1)) {
    dVar2 = param_1;
    func_0x00010c11eba0(param_5);
    func_0x00010c0f6740(param_5);
    func_0x00010c0f6740(param_5);
    param_4 = param_1 + param_2 + param_4;
    if (dVar2 <= param_4) {
      dVar2 = param_4;
    }
    func_0x00010c0c3380(param_5);
    dVar3 = param_4;
    func_0x00010c0ce360(param_5);
    if (dVar2 <= dVar3) {
      dVar2 = dVar3;
    }
    if (dVar2 <= param_4) {
      param_4 = dVar2;
    }
    return param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c0f65b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_5,PTR_s_payloadContentWidth_11261b388);
  return param_1;
}



/* Entry: 10655661c; end: 1065566ff; -[SCChatMessageCellViewModel payloadViewInsets] */

undefined8
FUN_10655661c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = param_5;
  func_0x00010c0f6760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar5 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  else {
    func_0x00010be5fde0(param_5);
    uVar5 = param_1;
    uVar3 = param_2;
    func_0x00010c11eba0(param_5);
    lVar1 = param_5;
    uVar2 = uVar5;
    uVar4 = uVar3;
    func_0x00010c0f6760(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f6540(param_5);
    func_0x00010706aa28(uVar5,uVar3,param_1,param_2,uVar2,uVar4,param_3,param_4,lVar1);
    _objc_release(lVar1);
  }
  return uVar5;
}



/* Entry: 106556700; end: 1065567bf; -[SCChatMessageCellViewModel _maxPayloadViewHorizontalInsets] */

double FUN_106556700(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  
  lVar1 = param_5;
  func_0x00010c0f6760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    param_2 = 0.0;
  }
  else {
    func_0x00010c11eba0(param_5);
    lVar1 = param_5;
    uVar2 = param_1;
    dVar4 = param_2;
    func_0x00010c0f6760(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c3380(param_5);
    uVar3 = uVar2;
    func_0x00010c0f6540(param_5);
    dVar5 = 0.0;
    func_0x00010706aa28(param_1,param_2,uVar2,0,uVar3,dVar4,param_3,param_4,lVar1);
    _objc_release(lVar1);
    param_2 = param_2 + dVar5;
  }
  return param_2;
}



/* Entry: 1065567c0; end: 1065567c3; -[SCChatMessageCellViewModel _maxContentWidth] */

void FUN_1065567c0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c3390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_maximumContentWidth_11260e6f8);
  return;
}



/* Entry: 1065567c4; end: 106556883; -[SCChatMessageCellViewModel quotedContentSize] */

undefined1  [16] FUN_1065567c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  lVar1 = param_3;
  func_0x00010c11edc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c11ec80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    lVar1 = param_3;
    func_0x00010c11edc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c11ec80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be5dba0(param_3);
    func_0x00010bf4d660(lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 106556884; end: 1065568ef; -[SCChatMessageCellViewModel _messageContentSize] */

undefined1  [16] FUN_106556884(double param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  double dVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_3;
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be5dba0(param_3);
  dVar2 = param_1;
  func_0x00010be5dca0(param_3);
  param_1 = param_1 - dVar2;
  func_0x00010bf4d660(param_1,uVar1);
  _objc_release(uVar1);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 1065568f0; end: 10655694b; -[SCChatMessageCellViewModel _belowMessageAccessoryContentSize] */

undefined1  [16] FUN_1065568f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = param_3;
  func_0x00010bf19480();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c3380(param_3);
  func_0x00010bf4d660(uVar1);
  _objc_release(uVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10655694c; end: 106556a03; -[SCChatMessageCellViewModel ctaAccessoryContentSize] */

undefined1  [16] FUN_10655694c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  uVar1 = param_3;
  func_0x00010bf5d020();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    uVar2 = param_3;
    func_0x00010bf5d020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe1300();
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar3 & 1) == 0) {
      func_0x00010bf5d020(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = 0x4069000000000000;
      func_0x00010bf4d660(0x4069000000000000);
      _objc_release(param_3);
      goto LAB_1065569f0;
    }
  }
  uVar4 = *(undefined8 *)PTR__CGSizeZero_110347620;
  param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
LAB_1065569f0:
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Entry: 106556a04; end: 106556a47; -[SCChatMessageCellViewModel dateHeaderHeight] */

undefined8 FUN_106556a04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf65380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(param_3);
  return param_2;
}



/* Entry: 106556a48; end: 106556a8b; -[SCChatMessageCellViewModel dateHeaderWidth] */

undefined8 FUN_106556a48(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf65380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106556a8c; end: 106556acf; -[SCChatMessageCellViewModel dateHeaderTopMargin] */

undefined8 FUN_106556a8c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf65380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bafa0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106556ad0; end: 106556b13; -[SCChatMessageCellViewModel dateHeaderBottomMargin] */

undefined8
FUN_106556ad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bf65380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bafa0();
  _objc_release(param_4);
  return param_3;
}



/* Entry: 106556b14; end: 106556b57; -[SCChatMessageCellViewModel dateHeaderLeadingMargin] */

undefined8 FUN_106556b14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf65380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bafa0();
  _objc_release(param_3);
  return param_2;
}



/* Entry: 106556b58; end: 106556b9b; -[SCChatMessageCellViewModel dateHeaderTrailingMargin] */

undefined8 FUN_106556b58(undefined8 param_1)

{
  undefined8 in_d3;
  
  func_0x00010bf65380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bafa0();
  _objc_release(param_1);
  return in_d3;
}



/* Entry: 106556b9c; end: 106556bdf; -[SCChatMessageCellViewModel dateHeaderBubbleLeadingInset] */

undefined8 FUN_106556b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bf65380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21b40();
  _objc_release(param_3);
  return param_2;
}



/* Entry: 106556be0; end: 106556c23; -[SCChatMessageCellViewModel dateHeaderBubbleTrailingInset] */

undefined8 FUN_106556be0(undefined8 param_1)

{
  undefined8 in_d3;
  
  func_0x00010bf65380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21b40();
  _objc_release(param_1);
  return in_d3;
}



/* Entry: 106556c24; end: 106556c67; -[SCChatMessageCellViewModel dateHeaderBubbleTopInset] */

undefined8 FUN_106556c24(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bf65380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21b40();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106556c68; end: 106556cab; -[SCChatMessageCellViewModel dateHeaderBubbleBottomInset] */

undefined8
FUN_106556c68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010bf65380();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf21b40();
  _objc_release(param_4);
  return param_3;
}



/* Entry: 106556cac; end: 106556cef; -[SCChatMessageCellViewModel senderHeaderHeight] */

undefined8 FUN_106556cac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c15dd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0877a0();
  _objc_release(param_3);
  return param_2;
}



/* Entry: 106556cf0; end: 106556d33; -[SCChatMessageCellViewModel senderHeaderWidth] */

undefined8 FUN_106556cf0(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c15dd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0877a0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106556d34; end: 106556d77; -[SCChatMessageCellViewModel senderHeaderTopMargin] */

undefined8 FUN_106556d34(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c15dd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bafa0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106556d78; end: 106556dbb; -[SCChatMessageCellViewModel senderHeaderBottomMargin] */

undefined8
FUN_106556d78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c15dd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bafa0();
  _objc_release(param_4);
  return param_3;
}



/* Entry: 106556dbc; end: 106556dff; -[SCChatMessageCellViewModel senderHeaderLeadingMargin] */

undefined8 FUN_106556dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c15dd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bafa0();
  _objc_release(param_3);
  return param_2;
}



/* Entry: 106556e00; end: 106556e43; -[SCChatMessageCellViewModel senderHeaderTrailingMargin] */

undefined8 FUN_106556e00(undefined8 param_1)

{
  undefined8 in_d3;
  
  func_0x00010c15dd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0bafa0();
  _objc_release(param_1);
  return in_d3;
}



/* Entry: 106556e44; end: 106556e9b; -[SCChatMessageCellViewModel senderHeaderLeadingInset] */

undefined8 FUN_106556e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_3;
  func_0x00010c12f740();
  uVar2 = 0;
  if ((int)uVar1 != 0) {
    func_0x00010c15dd40(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bafa0();
    _objc_release(param_3);
    uVar2 = param_2;
  }
  return uVar2;
}



/* Entry: 106556e9c; end: 106556ef3; -[SCChatMessageCellViewModel senderHeaderTrailingInset] */

undefined8 FUN_106556e9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_d3;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c12f740();
  uVar2 = 0;
  if ((int)uVar1 != 0) {
    func_0x00010c15dd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bafa0();
    _objc_release(param_1);
    uVar2 = in_d3;
  }
  return uVar2;
}



/* Entry: 106556ef4; end: 106556f37; -[SCChatMessageCellViewModel foldIndicatorHeight] */

undefined8 FUN_106556ef4(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = param_1;
  func_0x00010c233840();
  uVar2 = 0;
  if (iVar1 != 0) {
    func_0x00010c12f740(0);
    uVar2 = 0x4046800000000000;
    if (param_1 == 0) {
      uVar2 = 0x4030000000000000;
    }
  }
  return uVar2;
}



/* Entry: 106556f38; end: 106556fbf; -[SCChatMessageCellViewModel headerHeight] */

double FUN_106556f38(double param_1,undefined8 param_2,double param_3,undefined8 param_4)

{
  undefined8 uVar1;
  double dVar2;
  
  uVar1 = param_4;
  func_0x00010c234240();
  dVar2 = 0.0;
  if ((int)uVar1 != 0) {
    func_0x00010c15dc40(param_4);
    uVar1 = param_4;
    dVar2 = param_1;
    func_0x00010c15dd40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bafa0();
    func_0x00010c15dd40(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bafa0();
    dVar2 = param_1 + dVar2 + param_3;
    _objc_release(param_4);
    _objc_release(uVar1);
  }
  return dVar2;
}



/* Entry: 106556fc0; end: 106557017; -[SCChatMessageCellViewModel headerHorizontalMargin] */

undefined8 FUN_106556fc0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 in_d3;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010c234240();
  uVar2 = 0;
  if ((int)uVar1 != 0) {
    func_0x00010c15dd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bafa0();
    _objc_release(param_1);
    uVar2 = in_d3;
  }
  return uVar2;
}



/* Entry: 106557018; end: 10655701b; -[SCChatMessageCellViewModel headerLabelFont] */

void FUN_106557018(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf6d690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (0x4023000000000000,PTR__OBJC_CLASS___UIFont_1126aec38,
             PTR_s_demiBoldAvenirNextFontOfSize__1125b8f48);
  return;
}



/* Entry: 10655701c; end: 10655705f; -[SCChatMessageCellViewModel headerLabelHeight] */

undefined8 FUN_10655701c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c15dd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0877a0();
  _objc_release(param_3);
  return param_2;
}



/* Entry: 106557060; end: 106557097; -[SCChatMessageCellViewModel payloadHeight] */

double FUN_106557060(double param_1,undefined8 param_2)

{
  double dVar1;
  
  func_0x00010c0f6480();
  dVar1 = param_1;
  func_0x00010c0f6660(param_2);
  return param_1 + dVar1;
}



/* Entry: 106557098; end: 1065570af; -[SCChatMessageCellViewModel payloadBodyHeight] */

undefined8 FUN_106557098(undefined8 param_1,undefined8 param_2)

{
  func_0x00010be5fde0();
  return param_2;
}



/* Entry: 1065570b0; end: 1065570b7; -[SCChatMessageCellViewModel payloadLabelHeight] */

undefined8 FUN_1065570b0(void)

{
  return 0;
}



/* Entry: 1065570b8; end: 1065570cf; -[SCChatMessageCellViewModel payloadAccessoryHeight] */

undefined8 FUN_1065570b8(undefined8 param_1,undefined8 param_2)

{
  func_0x00010bdd3f60();
  return param_2;
}



/* Entry: 1065570d0; end: 1065570e7; -[SCChatMessageCellViewModel payloadHorizontalMargin] */

undefined8 FUN_1065570d0(void)

{
  undefined8 in_d3;
  
  func_0x00010bf1eae0();
  return in_d3;
}



/* Entry: 1065570e8; end: 1065570ef; -[SCChatMessageCellViewModel payloadVerticalMargin] */

undefined8 FUN_1065570e8(void)

{
  return 0;
}



/* Entry: 1065570f0; end: 106557133; -[SCChatMessageCellViewModel sectionColor] */

void FUN_1065570f0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15de80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfdf360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106557134; end: 106557177; -[SCChatMessageCellViewModel senderLineColorOption] */

void FUN_106557134(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c15de80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf50100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106557178; end: 10655717f; -[SCChatMessageCellViewModel shouldShowStatusMessageHeaderLabel] */

undefined8 FUN_106557178(void)

{
  return 0;
}



/* Entry: 106557180; end: 106557187; -[SCChatMessageCellViewModel shouldShowURLMediaCards] */

undefined8 FUN_106557180(void)

{
  return 0;
}



/* Entry: 106557188; end: 10655718f; -[SCChatMessageCellViewModel textCheckingTypes] */

undefined8 FUN_106557188(void)

{
  return 0;
}



/* Entry: 106557190; end: 1065571d3; -[SCChatMessageCellViewModel textForDateHeaderLabel] */

void FUN_106557190(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf65380();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c270c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065571d4; end: 10655722f; -[SCChatMessageCellViewModel textForHeaderStatusView] */

void FUN_1065571d4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c234240();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010c15dd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c15dcc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106557230; end: 1065572ab; -[SCChatMessageCellViewModel textForSenderHeaderLabel] */

void FUN_106557230(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x00010c234240();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x00010c15dd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c15dcc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1065572ac; end: 106557307; -[SCChatMessageCellViewModel textForEditedHeaderLabel] */

void FUN_1065572ac(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c234240();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010c15dd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf8c5a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106557308; end: 106557363; -[SCChatMessageCellViewModel senderIconResource] */

void FUN_106557308(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c234240();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010c15dd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010c15ddc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106557364; end: 1065573bf; -[SCChatMessageCellViewModel contextualHeaderViewModel] */

void FUN_106557364(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c234240();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010c15dd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bf4f780();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065573c0; end: 10655741b; -[SCChatMessageCellViewModel groupChatAddButtonViewModel] */

void FUN_1065573c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c234240();
  if ((int)uVar1 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x00010c15dd40(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = param_1;
    func_0x00010bfce760();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10655741c; end: 106557423; -[SCChatMessageCellViewModel textForStatusMessageHeaderLabel] */

undefined8 FUN_10655741c(void)

{
  return 0;
}



/* Entry: 106557424; end: 106557467; -[SCChatMessageCellViewModel textForTimeLabel] */

void FUN_106557424(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c270cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf341c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 106557468; end: 1065574ab; -[SCChatMessageCellViewModel textForActionHeaderTimeLabel] */

void FUN_106557468(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c270cc0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010beee720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1065574ac; end: 1065574b3; -[SCChatMessageCellViewModel messageHasReplyMedias] */

undefined8 FUN_1065574ac(void)

{
  return 0;
}



/* Entry: 1065574b4; end: 106557537; -[SCChatMessageCellViewModel colorForBackground] */

void FUN_1065574b4(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x00010c149e00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  func_0x00010c14b800();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x21);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar1);
    puVar2 = puVar1;
  }
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106557538; end: 10655757b; -[SCChatMessageCellViewModel widthForSenderLine] */

undefined8 FUN_106557538(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c15de80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2a5040();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10655757c; end: 1065575b7; -[SCChatMessageCellViewModel shouldShowSavedLabel] */

undefined8 FUN_10655757c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c149e00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07d140();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1065575b8; end: 1065575eb; -[SCChatMessageCellViewModel shouldShowSenderLine] */

bool FUN_1065575b8(long param_1)

{
  func_0x00010c15de80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1065575ec; end: 1065575f3; -[SCChatMessageCellViewModel shouldShowSaveOrUnsaveAnimation] */

undefined8 FUN_1065575ec(void)

{
  return 1;
}



/* Entry: 1065575f4; end: 10655762f; -[SCChatMessageCellViewModel containsAllSavedMessages] */

undefined8 FUN_1065575f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c149e00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c07d0a0();
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 106557630; end: 106557673; -[SCChatMessageCellViewModel cornerRadiusForSenderLine] */

undefined8 FUN_106557630(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c149e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf525a0();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 106557674; end: 1065576b7; -[SCChatMessageCellViewModel additionalWidthForWhitespaceTapToSave] */

undefined8 FUN_106557674(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c149e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befd520();
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1065576b8; end: 10655772f; -[SCChatMessageCellViewModel attributedTextForLabel] */

void FUN_1065576b8(ulong param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0cb340();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126cb790;
  _objc_opt_class(PTR_PTR_1126cb790);
  uVar3 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar2);
  uVar1 = param_1;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_1);
  uVar3 = uVar1;
  func_0x00010bfcf500(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 106557730; end: 106557763; -[SCChatSnapContentViewModel shouldShowScreenshotNotificationLabel] */

bool FUN_106557730(long param_1)

{
  func_0x00010bf0e5e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 106557764; end: 106557797; -[SCChatSnapContentViewModel shouldShowScreenRecordingNotificationLabel] */

bool FUN_106557764(long param_1)

{
  func_0x00010bf0e5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 106557798; end: 1065577cb; -[SCChatSnapContentViewModel shouldShowTimer] */

bool FUN_106557798(long param_1)

{
  func_0x00010bf52a80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1065577cc; end: 1065577ff; -[SCChatSnapContentViewModel shouldShowReplayNotificationLabel] */

bool FUN_1065577cc(long param_1)

{
  func_0x00010bf0e5a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 106557800; end: 106557833; -[SCChatSnapContentViewModel shouldShowReplayAgainNotificationLabel] */

bool FUN_106557800(long param_1)

{
  func_0x00010bf0e580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 106557834; end: 106557867; -[SCChatSnapContentViewModel shouldRecognizeTap] */

bool FUN_106557834(long param_1)

{
  func_0x00010c268c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 106557868; end: 10655789b; -[SCChatSnapContentViewModel shouldRecognizeLongPress] */

bool FUN_106557868(long param_1)

{
  func_0x00010c0b4ce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 10655789c; end: 10655789f; -[SCChatSnapContentViewModel attributedTextForScreenshotNotificationLabel] */

void FUN_10655789c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attributedScreenshotNotification_1125a1220);
  return;
}



/* Entry: 1065578a0; end: 1065578a3; -[SCChatSnapContentViewModel attributedTextForScreenRecordingNotificationLabel] */

void FUN_1065578a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attributedScreenRecordingNotific_1125a1218);
  return;
}



/* Entry: 1065578a4; end: 1065578a7; -[SCChatSnapContentViewModel attributedTextForReplayNotificationLabel] */

void FUN_1065578a4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e1b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attributedReplayNotificationText_1125a1210);
  return;
}



/* Entry: 1065578a8; end: 1065578ab; -[SCChatSnapContentViewModel attributedTextForReplayAgainNotificationLabel] */

void FUN_1065578a8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attributedReplayAgainNotificatio_1125a1208);
  return;
}



/* Entry: 1065578ac; end: 1065578af; -[SCChatSnapContentViewModel shouldShowActivity] */

void FUN_1065578ac(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c235a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showActivitySpinner_11266b0c8);
  return;
}



/* Entry: 1065578b0; end: 106557903; -[SCChatSnapContentViewModel statusIconImage] */

void FUN_1065578b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010c241200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe8220(puVar1,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106557904; end: 106557907; -[SCChatSnapContentViewModel attributedActionText] */

void FUN_106557904(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf0e250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_attributedSnapActionText_1125a1238);
  return;
}



/* Entry: 106557908; end: 106557947; -[SCChatSnapContentViewModel shouldDisplayReplayAnimation] */

bool FUN_106557908(long param_1)

{
  long lVar1;
  
  func_0x00010c1314a0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c1314c0();
  _objc_release(param_1);
  return lVar1 == 1;
}



/* Entry: 106557948; end: 10655794b; -[SCChatTextContentViewModel mediaCardViewModels] */

void FUN_106557948(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0c4430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_mediaCards_11260eb20);
  return;
}



/* Entry: 10655794c; end: 10655798f; -[SCChatTextContentViewModel filteredMediaCardViewModels] */

void FUN_10655794c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0c4420();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0001006372a4();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}


