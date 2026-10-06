/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b2cafc0; end: 10b2cb19f; +[TTTAttributedLabel sizeThatFitsAttributedString:withConstraints:limitedToNumberOfLines:] */

undefined1  [16]
FUN_10b2cafc0(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar8 = param_1;
  uVar9 = param_2;
  _objc_retain(param_5);
  if (param_5 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    puVar2 = param_3;
    _objc_opt_class();
    func_0x00010c23d0e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSValue_1126afdf8;
    uVar8 = param_1;
    uVar9 = param_2;
    func_0x00010c2971c0(param_1,param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_5;
    func_0x00010bf51e00();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar4);
    puVar5 = puVar2;
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (puVar5 == (undefined *)0x0) {
      _objc_opt_class(param_3);
      func_0x00010bebc560(param_1,param_2);
      puVar5 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      uVar8 = param_1;
      uVar9 = param_2;
      func_0x00010c2971c0(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0560(puVar2);
    }
    else {
      func_0x00010bdc10a0();
      param_1 = uVar8;
      param_2 = uVar9;
    }
    _objc_release(puVar5);
    _objc_release(puVar6);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    auVar10._8_8_ = param_2;
    auVar10._0_8_ = param_1;
    return auVar10;
  }
  ___stack_chk_fail();
  if (lRam00000001137f4928 != -1) {
    func_0x000107c27d9c(0x1137f4928,&PTR___NSConcreteGlobalBlock_110cd16f0);
  }
  uVar1 = uRam00000001137f4930;
  _objc_retain(uRam00000001137f4930);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  auVar11._8_8_ = uVar9;
  auVar11._0_8_ = uVar8;
  return auVar11;
}



/* Entry: 10b2cb1a0; end: 10b2cb1f3; +[TTTAttributedLabel sizeCache] */

void FUN_10b2cb1a0(void)

{
  undefined8 uVar1;
  
  if (lRam00000001137f4928 != -1) {
    func_0x000107c27d9c(0x1137f4928,&PTR___NSConcreteGlobalBlock_110cd16f0);
  }
  uVar1 = uRam00000001137f4930;
  _objc_retain(uRam00000001137f4930);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b2cb1f4; end: 10b2cb21f;  */

void FUN_10b2cb1f4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSCache_1126b3388;
  _objc_alloc_init();
  uVar1 = puRam00000001137f4930;
  puRam00000001137f4930 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2cb220; end: 10b2cb2b3; +[TTTAttributedLabel _sizeThatFitsAttributedString:withConstraints:limitedToNumberOfLines:] */

undefined1  [16]
FUN_10b2cb220(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (param_5 == 0) {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    _objc_retain(param_5);
    lVar1 = param_5;
    _CTFramesetterCreateWithAttributedString(param_5);
    FUN_10b2cb2b4(param_1,param_2);
    _objc_release(param_5);
    _CFRelease(lVar1);
  }
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 10b2cb2b4; end: 10b2cb3cf;  */

undefined1  [16] FUN_10b2cb2b4(double param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  double dVar5;
  undefined1 auVar6 [16];
  
  func_0x00010c08fa60(param_3);
  if (param_4 != 0) {
    if (param_4 == 1) {
      param_1 = 100000.0;
    }
    else {
      lVar1 = param_3;
      _CGPathCreateMutable();
      _CGPathAddRect(0,0,param_1,0x40f86a0000000000);
      lVar2 = param_2;
      _CTFramesetterCreateFrame(param_2,0,0,lVar1,0);
      lVar3 = lVar2;
      _CTFrameGetLines();
      lVar4 = lVar3;
      _CFArrayGetCount();
      if (0 < lVar4) {
        lVar4 = lVar3;
        _CFArrayGetCount();
        if (lVar4 <= param_4) {
          param_4 = lVar4;
        }
        param_4 = param_4 + -1;
        _CFArrayGetValueAtIndex(lVar3,param_4);
        _CTLineGetStringRange();
        param_3 = lVar3 + param_4;
      }
      _CFRelease(lVar2);
      _CFRelease(lVar1);
    }
  }
  dVar5 = 100000.0;
  _CTFramesetterSuggestFrameSizeWithConstraints(param_1,0x40f86a0000000000,param_2,0,param_3,0,0);
  auVar6._0_8_ = (long)param_1;
  auVar6._8_8_ = (long)dVar5;
  return auVar6;
}



/* Entry: 10b2cb3d0; end: 10b2cb45f; -[TTTAttributedLabel setAttributedText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2cb3d0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11278e5b0;
  uVar1 = param_3;
  func_0x00010c071b80();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010bf51e00();
    uVar2 = *(undefined8 *)(param_1 + lVar3);
    *(ulong *)(param_1 + lVar3) = uVar1;
    _objc_release(uVar2);
    func_0x00010c1cbe00(param_1);
    func_0x00010c1cbd40(param_1);
    uVar1 = param_1;
    _objc_opt_respondsToSelector(param_1,PTR_s_invalidateIntrinsicContentSize_1125f81f8);
    if ((uVar1 & 1) != 0) {
      func_0x00010c069fa0(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2cb460; end: 10b2cb493; -[TTTAttributedLabel setNeedsFramesetter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2cb460(long param_1,undefined8 param_2)

{
  func_0x00010c1ea9c0(param_1,param_2,0);
  *(undefined1 *)(param_1 + _DAT_11278e5b4) = 1;
  return;
}



/* Entry: 10b2cb494; end: 10b2cb557; -[TTTAttributedLabel framesetter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2cb494(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_11278e5b4;
  if (*(char *)(param_1 + lVar3) == '\x01') {
    _objc_retain(param_1);
    _objc_sync_enter(param_1);
    lVar1 = param_1;
    func_0x00010c130460();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    _CTFramesetterCreateWithAttributedString();
    _objc_release(lVar1);
    func_0x00010c19f660(param_1,param_2,lVar2);
    func_0x00010c1a86e0(param_1,param_2,0);
    *(undefined1 *)(param_1 + lVar3) = 0;
    if (lVar2 != 0) {
      _CFRelease(lVar2);
    }
    _objc_sync_exit(param_1);
    _objc_release(param_1);
  }
  return *(undefined8 *)(param_1 + _DAT_11278e5a8);
}



/* Entry: 10b2cb558; end: 10b2cb5a3; -[TTTAttributedLabel setFramesetter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2cb558(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    _CFRetain(param_3);
  }
  lVar1 = (long)_DAT_11278e5a8;
  if (*(long *)(param_1 + lVar1) != 0) {
    _CFRelease();
  }
  *(long *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10b2cb5a4; end: 10b2cb5b3; -[TTTAttributedLabel highlightFramesetter] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2cb5a4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e5ac);
}



/* Entry: 10b2cb5b4; end: 10b2cb5ff; -[TTTAttributedLabel setHighlightFramesetter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2cb5b4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  if (param_3 != 0) {
    _CFRetain(param_3);
  }
  lVar1 = (long)_DAT_11278e5ac;
  if (*(long *)(param_1 + lVar1) != 0) {
    _CFRelease();
  }
  *(long *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 10b2cb600; end: 10b2cb777; -[TTTAttributedLabel renderedAttributedText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2cb600(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  
  lVar6 = (long)_DAT_11278e5b8;
  lVar4 = *(long *)(param_1 + lVar6);
  if (lVar4 == 0) {
    lVar4 = param_1;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_1;
    func_0x00010c26b920();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(lVar4);
    _objc_retain(lVar1);
    lVar2 = lVar4;
    if (lVar1 == 0) {
      _objc_retain();
    }
    else {
      func_0x00010c0d3c80();
      uVar5 = *(undefined8 *)PTR__kCTForegroundColorFromContextAttributeName_11034a130;
      lVar3 = lVar2;
      func_0x00010c08fa60();
      puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_78 = 0xc2000000;
      pcStack_70 = FUN_10b2d0968;
      puStack_68 = &UNK_11092b278;
      _objc_retain(lVar2);
      lStack_60 = lVar2;
      _objc_retain(lVar1);
      lStack_58 = lVar1;
      func_0x00010bf97b00(lVar2,param_2,uVar5,0,lVar3,0,&puStack_80);
      lVar3 = lStack_58;
      _objc_retain(lVar2);
      _objc_release(lVar3);
      _objc_release(lStack_60);
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    _objc_release(lVar4);
    func_0x00010c1ea9c0(param_1,param_2,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + lVar6);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 10b2cb778; end: 10b2cb77b; -[TTTAttributedLabel dataDetectorTypes] */

void FUN_10b2cb778(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf92a70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_enabledTextCheckingTypes_1125c2440);
  return;
}



/* Entry: 10b2cb77c; end: 10b2cb77f; -[TTTAttributedLabel setDataDetectorTypes:] */

void FUN_10b2cb77c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c195550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setEnabledTextCheckingTypes__112642f70);
  return;
}



/* Entry: 10b2cb780; end: 10b2cb7ff; -[TTTAttributedLabel setEnabledTextCheckingTypes:] */

/* WARNING: Possible PIC construction at 0x00010b2cb7d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b2cb7dc) */
/* WARNING: Removing unreachable block (ram,0x00010bdbf3e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2cb780(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  
  *(undefined8 *)(param_1 + _DAT_11278e570) = param_3;
  lVar1 = param_1;
  func_0x00010bf92a60();
  puVar2 = PTR__OBJC_CLASS___NSDataDetector_1126c36c8;
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x00010bf92a60(param_1);
    func_0x00010bf637c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010c189530. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDataDetector__11263ff68,puVar2);
  return;
}



/* Entry: 10b2cb800; end: 10b2cb86f; -[TTTAttributedLabel addLinkWithTextCheckingResult:attributes:] */

void FUN_10b2cb800(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_retain(param_4);
  func_0x00010bf0a100(puVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9960(param_1,param_2,puVar1,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2cb870; end: 10b2cba6f; -[TTTAttributedLabel addLinksWithTextCheckingResults:attributes:] */

void FUN_10b2cb870(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  uVar2 = param_1;
  func_0x00010c099a20(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  if (param_4 != 0) {
    uVar2 = param_1;
    func_0x00010bf0e540(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0d3c80();
    _objc_release(uVar2);
    _objc_retain(param_3);
    lVar5 = param_3;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar5 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_3);
        }
        func_0x00010c11f2a0(*(undefined8 *)(lVar9 * 8));
        func_0x00010bef6f40(uVar4);
        lVar9 = lVar9 + 1;
      } while (lVar5 != lVar9);
      lVar5 = param_3;
      func_0x00010bf52a60();
    }
    _objc_release(param_3);
    func_0x00010c16b720(param_1);
    func_0x00010c1cbd40(param_1);
    _objc_release(uVar4);
  }
  func_0x00010befa160(puVar3);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a0c0(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar6;
  func_0x00010c1bdf80(param_1);
  _objc_release(puVar6);
  _objc_release(puVar3);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  lVar8 = param_3;
  func_0x00010c0995a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9940(param_3);
  _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar8);
  return;
}



/* Entry: 10b2cba70; end: 10b2cbacf; -[TTTAttributedLabel addLinkWithTextCheckingResult:] */

void FUN_10b2cba70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010c0995a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9940(param_1,param_2,param_3,uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2cbad0; end: 10b2cbb23; -[TTTAttributedLabel addLinkToURL:withRange:] */

void FUN_10b2cbad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170;
  func_0x00010c099600(PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170,param_2,param_4,param_5,
                      param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9920(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2cbb24; end: 10b2cbb77; -[TTTAttributedLabel addLinkToAddress:withRange:] */

void FUN_10b2cbb24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170;
  func_0x00010befd600(PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170,param_2,param_4,param_5,
                      param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9920(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2cbb78; end: 10b2cbbcb; -[TTTAttributedLabel addLinkToPhoneNumber:withRange:] */

void FUN_10b2cbb78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170;
  func_0x00010c0fafa0(PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170,param_2,param_4,param_5,
                      param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9920(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2cbbcc; end: 10b2cbc1f; -[TTTAttributedLabel addLinkToDate:withRange:] */

void FUN_10b2cbbcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170;
  func_0x00010bf64ec0(PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170,param_2,param_4,param_5,
                      param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9920(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2cbc20; end: 10b2cbc7b; -[TTTAttributedLabel addLinkToDate:timeZone:duration:withRange:] */

void FUN_10b2cbc20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170;
  func_0x00010bf64ee0(PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170,param_2,param_5,param_6,
                      param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9920(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2cbc7c; end: 10b2cbccf; -[TTTAttributedLabel addLinkToTransitInformation:withRange:] */

void FUN_10b2cbc7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170;
  func_0x00010c27a640(PTR__OBJC_CLASS___NSTextCheckingResult_1126e0170,param_2,param_4,param_5,
                      param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9920(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2cbcd0; end: 10b2cbd77; -[TTTAttributedLabel linkAtCharacterIndex:] */

void FUN_10b2cbcd0(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  func_0x00010c099a20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar4 = 0;
  do {
    uVar2 = uVar1;
    func_0x00010c0d9ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    if (uVar2 == 0) goto LAB_10b2cbd54;
    uVar3 = uVar2;
    func_0x00010c11f2a0();
    uVar4 = uVar2;
  } while ((param_3 < uVar3) || (param_2 <= param_3 - uVar3));
  _objc_retain(uVar2);
LAB_10b2cbd54:
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b2cbd78; end: 10b2cbd9f; -[TTTAttributedLabel linkAtPoint:] */

void FUN_10b2cbd78(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010bf35980();
                    /* WARNING: Could not recover jumptable at 0x00010c099570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_linkAtCharacterIndex__112603f68,uVar1);
  return;
}



/* Entry: 10b2cbda0; end: 10b2cc057; -[TTTAttributedLabel characterIndexAtPoint:] */

/* WARNING: Type propagation algorithm not settling */

undefined *****
FUN_10b2cbda0(undefined ****param_1,undefined ****param_2,undefined ****param_3,
             undefined ****param_4,undefined *****param_5,undefined8 param_6,undefined *****param_7,
             undefined *****param_8,undefined *****param_9,undefined *****param_10,
             undefined *****param_11)

{
  undefined8 *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  double *pdVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *****pppppuVar13;
  double *pdVar14;
  undefined4 uVar15;
  undefined *****pppppuVar16;
  undefined *****pppppuVar17;
  double *pdVar18;
  undefined *****pppppuVar19;
  double *pdVar20;
  undefined8 uVar21;
  undefined *****pppppuVar22;
  undefined *****pppppuVar23;
  undefined *****pppppuVar24;
  undefined *****pppppuVar25;
  undefined *****unaff_x26;
  undefined ****ppppuVar26;
  double dVar27;
  double dVar28;
  undefined ****ppppuVar29;
  undefined ****ppppuVar30;
  double dVar31;
  undefined ****ppppuVar32;
  double dVar33;
  undefined ****ppppuVar34;
  undefined *****pppppuVar35;
  double dVar36;
  double dVar37;
  undefined ****ppppuVar38;
  undefined *****pppppuVar39;
  double dVar40;
  undefined ****ppppuVar41;
  double dVar42;
  undefined ****unaff_d12;
  double dVar43;
  undefined ****unaff_d13;
  undefined ****unaff_d14;
  undefined ****unaff_d15;
  double dVar44;
  double *pdStack_1d0;
  undefined *****apppppuStack_1c8 [4];
  undefined ****ppppuStack_1a8;
  undefined *****pppppuStack_1a0;
  undefined *****pppppuStack_198;
  long lStack_190;
  undefined *****pppppuStack_188;
  undefined4 uStack_17c;
  undefined *****pppppuStack_178;
  undefined *****pppppuStack_170;
  uint uStack_164;
  undefined *****pppppuStack_160;
  double dStack_158;
  long lStack_150;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined ****ppppuStack_a0;
  undefined ***pppuStack_98;
  double dStack_90;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar23 = param_5;
  ppppuVar38 = param_1;
  ppppuVar41 = param_2;
  func_0x00010bf20c00();
  _CGRectContainsPoint();
  ppppuVar26 = ppppuVar38;
  ppppuVar29 = ppppuVar41;
  ppppuVar32 = param_3;
  ppppuVar34 = param_4;
  if ((int)pppppuVar23 != 0) {
    func_0x00010bf20c00(param_5);
    param_7 = param_5;
    func_0x00010c0def20();
    pppppuVar23 = param_5;
    func_0x00010c26c660();
    ppppuVar26 = ppppuVar38;
    ppppuVar29 = ppppuVar41;
    ppppuVar32 = param_3;
    ppppuVar34 = param_4;
    _CGRectContainsPoint();
    unaff_d12 = param_4;
    unaff_d13 = param_3;
    if ((int)pppppuVar23 != 0) {
      _CGPathCreateMutable();
      ppppuVar26 = ppppuVar38;
      ppppuVar29 = ppppuVar41;
      ppppuVar32 = param_3;
      ppppuVar34 = param_4;
      _CGPathAddRect();
      pppppuVar24 = param_5;
      func_0x00010bfb7380();
      pppppuVar25 = param_5;
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      param_7 = pppppuVar25;
      func_0x00010c08fa60();
      param_9 = (undefined *****)0x0;
      param_8 = pppppuVar23;
      _CTFramesetterCreateFrame(pppppuVar24,0);
      _objc_release(pppppuVar25);
      if (pppppuVar24 != (undefined *****)0x0) {
        pppppuVar25 = pppppuVar24;
        _CTFrameGetLines();
        pppppuVar22 = param_5;
        func_0x00010c0def20();
        if ((long)pppppuVar22 < 1) {
          param_5 = pppppuVar25;
          _CFArrayGetCount();
        }
        else {
          func_0x00010c0def20();
          pppppuVar22 = pppppuVar25;
          _CFArrayGetCount();
          if ((long)pppppuVar22 <= (long)param_5) {
            param_5 = pppppuVar22;
          }
        }
        if (param_5 != (undefined *****)0x0) {
          (*(code *)PTR____chkstk_darwin_11034bd40)();
          param_8 = &ppppuStack_a0 + (long)param_5 * -2;
          param_7 = param_5;
          _CTFrameGetLineOrigins(pppppuVar24,0);
          if (0 < (long)param_5) {
            pppppuVar22 = (undefined *****)0x0;
            ppppuVar26 = (undefined ****)((double)param_2 - (double)ppppuVar41);
            dVar33 = (double)param_1 - (double)ppppuVar38;
            dVar36 = (double)param_4 - (double)ppppuVar26;
            unaff_x26 = &ppppuStack_a0 + (long)param_5 * -2 + 1;
            do {
              ppppuVar38 = unaff_x26[-1];
              ppppuVar41 = *unaff_x26;
              pppppuVar17 = pppppuVar25;
              _CFArrayGetValueAtIndex(pppppuVar25,pppppuVar22);
              pppuStack_98 = (undefined ***)0x0;
              dStack_90 = 0.0;
              ppppuStack_a0 = (undefined ****)0x0;
              param_7 = (undefined *****)&pppuStack_98;
              param_8 = &ppppuStack_a0;
              _CTLineGetTypographicBounds();
              ppppuVar29 = (undefined ****)(long)((double)ppppuVar41 + dStack_90);
              if ((double)ppppuVar29 < dVar36) break;
              ppppuVar29 = (undefined ****)(long)((double)ppppuVar41 - (double)pppuStack_98);
              ppppuVar26 = (undefined ****)((double)ppppuVar38 + (double)ppppuVar26);
              bVar2 = true;
              bVar5 = false;
              if ((double)ppppuVar29 <= dVar36) {
                bVar2 = false;
                bVar5 = true;
                if (!NAN(dVar33) && !NAN((double)ppppuVar38)) {
                  bVar2 = dVar33 < (double)ppppuVar38;
                  bVar5 = false;
                }
              }
              bVar3 = false;
              bVar4 = true;
              if (bVar2 == bVar5) {
                bVar3 = false;
                bVar4 = true;
                if (!NAN(dVar33) && !NAN((double)ppppuVar26)) {
                  bVar3 = dVar33 == (double)ppppuVar26;
                  bVar4 = (double)ppppuVar26 <= dVar33;
                }
              }
              if (!bVar4 || bVar3) {
                ppppuVar26 = (undefined ****)(dVar33 - (double)ppppuVar38);
                ppppuVar29 = (undefined ****)(dVar36 - (double)ppppuVar41);
                _CTLineGetStringIndexForPosition();
                goto LAB_10b2cc03c;
              }
              unaff_x26 = unaff_x26 + 2;
              pppppuVar22 = (undefined *****)((long)pppppuVar22 + 1);
            } while (param_5 != pppppuVar22);
          }
          pppppuVar17 = (undefined *****)0x7fffffffffffffff;
LAB_10b2cc03c:
          _CFRelease(pppppuVar24);
          _CFRelease();
          goto LAB_10b2cbfe4;
        }
        _CFRelease(pppppuVar24);
      }
      _CFRelease();
    }
  }
  pppppuVar17 = (undefined *****)0x7fffffffffffffff;
LAB_10b2cbfe4:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return pppppuVar17;
  }
  ___stack_chk_fail();
  pcStack_a8 = FUN_10b2cc058;
  lStack_150 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppuStack_188 = param_8;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain();
  _CGPathCreateMutable();
  _CGPathAddRect(ppppuVar26,ppppuVar29,ppppuVar32,ppppuVar34);
  _CTFramesetterCreateFrame(param_7,param_9,param_10,param_8,0);
  func_0x00010bf89800(ppppuVar26,ppppuVar29,ppppuVar32,ppppuVar34,pppppuVar23);
  pppppuVar24 = param_7;
  _CTFrameGetLines();
  pppppuVar25 = pppppuVar23;
  func_0x00010c0def20();
  if ((long)pppppuVar25 < 1) {
    pppppuVar25 = pppppuVar24;
    _CFArrayGetCount();
    pppppuStack_198 = pppppuVar25;
  }
  else {
    pppppuVar25 = pppppuVar23;
    func_0x00010c0def20();
    pppppuVar22 = pppppuVar24;
    _CFArrayGetCount();
    pppppuStack_198 = pppppuVar25;
    if ((long)pppppuVar22 <= (long)pppppuVar25) {
      pppppuStack_198 = pppppuVar22;
    }
  }
  pppppuVar25 = pppppuVar23;
  func_0x00010c099180();
  apppppuStack_1c8[1] = param_8;
  apppppuStack_1c8[2] = (undefined *****)ppppuVar26;
  apppppuStack_1c8[3] = (undefined *****)ppppuVar29;
  ppppuStack_1a8 = ppppuVar34;
  if ((pppppuVar25 == (undefined *****)0x3) ||
     (pppppuVar25 = pppppuVar23, func_0x00010c099180(), pppppuVar25 == (undefined *****)0x5)) {
    pppppuVar25 = (undefined *****)0x1;
  }
  else {
    pppppuVar25 = pppppuVar23;
    func_0x00010c099180();
    pppppuVar25 = (undefined *****)(ulong)(pppppuVar25 == (undefined *****)0x4);
  }
  pppppuVar22 = pppppuStack_198;
  pdStack_1d0 = (double *)&pdStack_1d0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  apppppuStack_1c8[0] = param_7;
  _CTFrameGetLineOrigins(param_7,0,pppppuVar22,&pdStack_1d0 + (long)pppppuVar22 * -2);
  if (0 < (long)pppppuVar22) {
    unaff_x26 = (undefined *****)0x0;
    lStack_190 = (long)param_9 + (long)param_10;
    param_9 = (undefined *****)(apppppuStack_1c8 + (long)pppppuVar22 * -2);
    unaff_d15 = (undefined ****)0x0;
    ppppuVar34 = (undefined ****)0x3ff0000000000000;
    ppppuVar29 = (undefined ****)0x3fe0000000000000;
    pppppuStack_1a0 = param_11;
    pppppuStack_160 = pppppuVar24;
    uStack_164 = (uint)pppppuVar25;
    pppppuVar17 = pppppuStack_198;
    do {
      unaff_d14 = param_9[-1];
      unaff_d12 = *param_9;
      ppppuVar38 = unaff_d14;
      _CGContextSetTextPosition(unaff_d14,unaff_d12,param_11);
      pppppuVar22 = pppppuVar24;
      _CFArrayGetValueAtIndex(pppppuVar24,unaff_x26);
      dStack_158 = 0.0;
      lVar12 = 0;
      _CTLineGetTypographicBounds();
      pppppuVar19 = pppppuVar23;
      func_0x00010c12bf20();
      dVar33 = dStack_158;
      ppppuVar26 = (undefined ****)0x0;
      if (((ulong)pppppuVar19 & 1) == 0) {
        param_7 = pppppuVar23;
        func_0x00010bfb3a80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6e320();
        ppppuVar26 = (undefined ****)(dVar33 + (double)ppppuVar38);
        _objc_release(param_7);
      }
      pppppuVar19 = pppppuVar23;
      func_0x00010c26b7a0();
      ppppuVar38 = (undefined ****)0x3ff0000000000000;
      if (pppppuVar19 != (undefined *****)0x2) {
        ppppuVar38 = (undefined ****)0x0;
      }
      unaff_d13 = (undefined ****)0x3fe0000000000000;
      if (pppppuVar19 != (undefined *****)0x1) {
        unaff_d13 = ppppuVar38;
      }
      if (((uint)(pppppuVar17 == (undefined *****)0x1) & (uint)pppppuVar25) == 1) {
        pppppuVar24 = pppppuVar22;
        _CTLineGetStringRange();
        if ((lVar12 == 0 && pppppuVar24 == (undefined *****)0x0) ||
           (lStack_190 <= (long)pppppuVar24 + lVar12)) {
          _CGContextSetTextPosition(unaff_d14,(double)unaff_d12 - (double)ppppuVar26,param_11);
          _CTLineDraw(pppppuVar22,param_11);
        }
        else {
          pppppuVar24 = pppppuVar23;
          func_0x00010c099180();
          if (pppppuStack_198 != (undefined *****)0x1) {
            pppppuVar24 = (undefined *****)0x4;
          }
          uVar15 = 1;
          if (pppppuVar24 == (undefined *****)0x5) {
            uVar15 = 2;
          }
          uStack_17c = 0;
          if (pppppuVar24 != (undefined *****)0x3) {
            uStack_17c = uVar15;
          }
          pppppuVar25 = pppppuVar23;
          func_0x00010c27cba0();
          _objc_retainAutoreleasedReturnValue();
          pppppuVar24 = (undefined *****)&PTR____CFConstantStringClassReference_110f62638;
          if (pppppuVar25 != (undefined *****)0x0) {
            pppppuVar24 = pppppuVar25;
          }
          pppppuVar25 = pppppuVar23;
          func_0x00010c27cbc0();
          _objc_retainAutoreleasedReturnValue();
          if (pppppuVar25 == (undefined *****)0x0) {
            pppppuVar25 = pppppuStack_188;
            func_0x00010bf0e760();
            _objc_retainAutoreleasedReturnValue();
          }
          param_7 = (undefined *****)PTR__OBJC_CLASS___NSAttributedString_1126af068;
          _objc_alloc();
          pppppuStack_178 = pppppuVar25;
          pppppuStack_170 = pppppuVar24;
          func_0x00010c04e840();
          pppppuVar24 = param_7;
          _CTLineCreateWithAttributedString();
          pppppuVar25 = pppppuStack_188;
          func_0x00010bf0e4e0();
          _objc_retainAutoreleasedReturnValue();
          pppppuVar22 = pppppuVar25;
          func_0x00010c0d3c80();
          _objc_release(pppppuVar25);
          if (0 < lVar12) {
            pppppuVar25 = pppppuVar22;
            func_0x00010c25cd40(pppppuVar22);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf35920();
            _objc_release(pppppuVar25);
            puVar6 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
            func_0x00010c0d96e0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010bf359c0();
            _objc_release(puVar6);
            if ((int)puVar7 != 0) {
              func_0x00010bf6b860(pppppuVar22);
            }
          }
          func_0x00010bf069e0(pppppuVar22);
          pppppuVar25 = pppppuVar22;
          _CTLineCreateWithAttributedString();
          pppppuVar19 = pppppuVar25;
          _CTLineCreateTruncatedLine(ppppuVar32);
          if (pppppuVar19 == (undefined *****)0x0) {
            pppppuVar19 = pppppuVar24;
            _CFRetain(pppppuVar24);
          }
          _CTLineGetPenOffsetForFlush(unaff_d13,ppppuVar32,pppppuVar19);
          param_11 = pppppuStack_1a0;
          _CGContextSetTextPosition(pppppuStack_1a0);
          _CTLineDraw(pppppuVar19,param_11);
          _CFRelease(pppppuVar19);
          _CFRelease(pppppuVar25);
          _CFRelease(pppppuVar24);
          _objc_release(pppppuVar22);
          _objc_release(param_7);
          _objc_release(pppppuStack_178);
          _objc_release(pppppuStack_170);
          param_10 = param_11;
        }
        pppppuVar25 = (undefined *****)(ulong)uStack_164;
        pppppuVar24 = pppppuStack_160;
      }
      else {
        _CGContextSetTextPosition(unaff_d14,(double)unaff_d12 - (double)ppppuVar26,param_11);
        _CTLineDraw(pppppuVar22,param_11);
      }
      param_9 = param_9 + 2;
      unaff_x26 = (undefined *****)((long)unaff_x26 + 1);
      pppppuVar17 = (undefined *****)((long)pppppuVar17 + -1);
      pppppuVar22 = (undefined *****)0x0;
    } while (pppppuVar17 != (undefined *****)0x0);
  }
  pppppuVar16 = apppppuStack_1c8[0];
  pppppuVar17 = apppppuStack_1c8[0];
  pppppuVar13 = param_11;
  pppppuVar35 = apppppuStack_1c8[2];
  pppppuVar39 = apppppuStack_1c8[3];
  ppppuVar41 = ppppuVar32;
  ppppuVar38 = ppppuStack_1a8;
  func_0x00010bf89c00(pppppuVar23);
  _CFRelease(pppppuVar16);
  _CFRelease(apppppuStack_1c8[1]);
  pdVar20 = pdStack_1d0;
  pppppuVar19 = pppppuStack_188;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_150) {
    return pppppuVar19;
  }
  ___stack_chk_fail();
  pdVar20[-0x14] = (double)unaff_d15;
  pdVar20[-0x13] = (double)unaff_d14;
  pdVar20[-0x12] = (double)unaff_d13;
  pdVar20[-0x11] = (double)unaff_d12;
  pdVar20[-0x10] = (double)ppppuVar26;
  pdVar20[-0xf] = (double)ppppuVar29;
  pdVar20[-0xe] = (double)ppppuVar32;
  pdVar20[-0xd] = (double)ppppuVar34;
  pdVar20[-0xc] = (double)param_9;
  pdVar20[-0xb] = (double)param_10;
  pdVar20[-10] = (double)unaff_x26;
  pdVar20[-9] = (double)pppppuVar25;
  pdVar20[-8] = (double)pppppuVar24;
  pdVar20[-7] = (double)param_11;
  pdVar20[-6] = (double)pppppuVar23;
  pdVar20[-5] = (double)param_7;
  pdVar20[-4] = (double)pppppuVar22;
  pdVar20[-3] = (double)pppppuVar16;
  pdVar20[-2] = (double)&puStack_b0;
  pdVar20[-1] = (double)FUN_10b2cc5f4;
  pdVar20[-0x57] = (double)pppppuVar13;
  pdVar20[-0x54] = (double)pppppuVar35;
  pdVar20[-0x53] = (double)pppppuVar39;
  pdVar20[-0x16] = *(double *)PTR____stack_chk_guard_11034bdc0;
  pppppuVar23 = pppppuVar17;
  _CTFrameGetLines();
  _objc_retainAutoreleasedReturnValue();
  pppppuVar22 = pppppuVar23;
  func_0x00010bf529e0();
  pdVar20[-0x5f] = (double)(pdVar20 + -0x60);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pdVar20[-0x5c] = (double)(pdVar20 + (long)pppppuVar22 * -2 + -0x60);
  _CTFrameGetLineOrigins(pppppuVar17,0,0);
  func_0x00010c26c200(pppppuVar19);
  ppppuVar26 = (undefined ****)pppppuVar35;
  func_0x00010bf20c00(pppppuVar19);
  func_0x00010c0def20(pppppuVar19);
  ppppuVar29 = (undefined ****)pppppuVar39;
  ppppuVar32 = ppppuVar41;
  ppppuVar34 = ppppuVar38;
  func_0x00010c26c660(ppppuVar26,pppppuVar19);
  pdVar20[-0x3d] = 0.0;
  pdVar20[-0x3e] = 0.0;
  pdVar20[-0x3b] = 0.0;
  pdVar20[-0x3c] = 0.0;
  pdVar20[-0x39] = 0.0;
  pdVar20[-0x3a] = 0.0;
  pdVar20[-0x37] = 0.0;
  pdVar20[-0x38] = 0.0;
  _objc_retain(pppppuVar23);
  pdVar18 = pdVar20 + -0x3e;
  pdVar14 = pdVar20 + -0x26;
  pdVar20[-0x5e] = (double)pppppuVar23;
  pppppuVar22 = pppppuVar23;
  func_0x00010bf52a60();
  pdVar20[-0x5b] = (double)pppppuVar22;
  if (pppppuVar22 != (undefined *****)0x0) {
    pppppuVar17 = (undefined *****)0x0;
    ppppuVar26 = (undefined ****)((double)pppppuVar35 - (double)ppppuVar29);
    pdVar20[-0x58] = (double)ppppuVar26;
    pdVar20[-0x5d] = *(double *)pdVar20[-0x3c];
    do {
      pppppuVar19 = (undefined *****)0x0;
      do {
        if (*(double *)pdVar20[-0x3c] != pdVar20[-0x5d]) {
          _objc_enumerationMutation(pdVar20[-0x5e]);
        }
        pdVar20[-0x5a] = (double)pppppuVar19;
        dVar33 = *(double *)((long)pdVar20[-0x3d] + (long)pppppuVar19 * 8);
        pdVar20[-0x40] = 0.0;
        pdVar20[-0x3f] = 0.0;
        pdVar20[-0x41] = 0.0;
        _CTLineGetTypographicBounds(dVar33,pdVar20 + -0x3f,pdVar20 + -0x40,pdVar20 + -0x41);
        pdVar20[-0x51] = (double)ppppuVar26;
        ppppuVar29 = (undefined ****)pdVar20[-0x40];
        pppppuVar35 = (undefined *****)pdVar20[-0x3f];
        pppppuVar39 = (undefined *****)pdVar20[-0x41];
        pdVar20[-0x59] = (double)pppppuVar17;
        puVar1 = (undefined8 *)((long)pdVar20[-0x5c] + (long)pppppuVar17 * 0x10);
        ppppuVar41 = (undefined ****)*puVar1;
        ppppuVar38 = (undefined ****)puVar1[1];
        pdVar20[-0x52] = (double)puVar1;
        ppppuVar26 = (undefined ****)0x0;
        pdVar20[-0x49] = 0.0;
        pdVar20[-0x4a] = 0.0;
        pdVar20[-0x47] = 0.0;
        pdVar20[-0x48] = 0.0;
        pdVar20[-0x45] = 0.0;
        pdVar20[-0x46] = 0.0;
        pdVar20[-0x43] = 0.0;
        pdVar20[-0x44] = 0.0;
        pdVar20[-0x50] = dVar33;
        _CTLineGetGlyphRuns();
        _objc_retainAutoreleasedReturnValue();
        pdVar20[-0x4f] = dVar33;
        func_0x00010bf52a60();
        if (dVar33 != 0.0) {
          ppppuVar30 = (undefined ****)pdVar20[-0x53];
          unaff_d13 = (undefined ****)((double)ppppuVar30 + (double)ppppuVar38);
          unaff_d14 = (undefined ****)(pdVar20[-0x54] + (double)ppppuVar41);
          ppppuVar26 = (undefined ****)((double)pppppuVar35 + (double)ppppuVar29);
          unaff_d15 = (undefined ****)((double)ppppuVar26 + (double)pppppuVar39);
          pppppuVar23 = *(undefined ******)pdVar20[-0x48];
          pdVar20[-0x56] = (double)unaff_d14;
          pdVar20[-0x55] = (double)unaff_d13;
          do {
            dVar36 = 0.0;
            do {
              ppppuVar29 = ppppuVar26;
              pppppuVar39 = (undefined *****)ppppuVar30;
              pppppuVar35 = (undefined *****)ppppuVar32;
              ppppuVar41 = ppppuVar34;
              if (*(undefined ******)pdVar20[-0x48] != pppppuVar23) {
                _objc_enumerationMutation(pdVar20[-0x4f]);
                ppppuVar29 = ppppuVar26;
                pppppuVar39 = (undefined *****)ppppuVar30;
                pppppuVar35 = (undefined *****)ppppuVar32;
                ppppuVar41 = ppppuVar34;
              }
              param_10 = *(undefined ******)((long)pdVar20[-0x49] + (long)dVar36 * 8);
              pppppuVar24 = param_10;
              _CTRunGetAttributes();
              _objc_retainAutoreleasedReturnValue();
              pppppuVar25 = pppppuVar24;
              func_0x00010c0dff20();
              unaff_x26 = pppppuVar24;
              func_0x00010c0dff20();
              pppppuVar22 = pppppuVar24;
              func_0x00010c0dff20(pppppuVar24);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bdc2aa0();
              ppppuVar38 = ppppuVar29;
              ppppuVar30 = (undefined ****)pppppuVar39;
              ppppuVar32 = (undefined ****)pppppuVar35;
              ppppuVar34 = ppppuVar41;
              _objc_release(pppppuVar22);
              pppppuVar22 = pppppuVar24;
              func_0x00010c0dff20(pppppuVar24);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              ppppuVar26 = ppppuVar38;
              _objc_release(pppppuVar22);
              param_9 = pppppuVar24;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              *(int *)((long)pdVar20 + -0x264) = (int)ppppuVar26;
              _objc_release(param_9);
              if (pppppuVar25 != (undefined *****)0x0 || unaff_x26 != (undefined *****)0x0) {
                *(int *)(pdVar20 + -0x4d) = (int)ppppuVar38;
                pdVar20[-0x4c] = 0.0;
                pdVar20[-0x4b] = 0.0;
                lVar12 = 0;
                _CTRunGetTypographicBounds(param_10,0,0,pdVar20 + -0x4b,pdVar20 + -0x4c,0);
                ppppuVar41 = (undefined ****)
                             ((double)ppppuVar41 + (double)pppppuVar39 + (double)ppppuVar26);
                dVar27 = (double)ppppuVar29 + pdVar20[-0x4b] + pdVar20[-0x4c];
                dVar37 = (double)pppppuVar35 + dVar27;
                pppppuVar22 = param_10;
                _CTRunGetStringRange(param_10);
                _CTRunGetStatus();
                if ((int)param_10 != 1) {
                  lVar12 = 0;
                }
                _CTLineGetOffsetForStringIndex(pdVar20[-0x50],lVar12 + (long)pppppuVar22,0);
                pppppuVar39 = (undefined *****)
                              (((dVar27 + pdVar20[-0x54] + *(double *)pdVar20[-0x52]) -
                               (double)pppppuVar39) - pdVar20[-0x54]);
                pppppuVar35 = (undefined *****)
                              ((((pdVar20[-0x58] + pdVar20[-0x53] + ((double *)pdVar20[-0x52])[1]) -
                                (double)pppppuVar35) - pdVar20[-0x53]) - pdVar20[-0x4c]);
                pdVar20[-0x4e] = dVar37;
                ppppuVar26 = (undefined ****)pppppuVar39;
                _CGRectGetWidth(pppppuVar39,pppppuVar35,ppppuVar41,dVar37);
                dVar27 = pdVar20[-0x51];
                ppppuVar29 = unaff_d14;
                _CGRectGetWidth(unaff_d14,unaff_d13,dVar27,unaff_d15);
                if ((double)ppppuVar29 < (double)ppppuVar26) {
                  _CGRectGetWidth(unaff_d14,unaff_d13,dVar27,unaff_d15);
                  ppppuVar41 = unaff_d14;
                }
                pppppuVar22 = (undefined *****)PTR__OBJC_CLASS___UIBezierPath_1126aec18;
                param_9 = (undefined *****)pdVar20[-0x57];
                ppppuVar38 = (undefined ****)(double)*(float *)(pdVar20 + -0x4d);
                ppppuVar34 = (undefined ****)pdVar20[-0x4e];
                ppppuVar26 = (undefined ****)pppppuVar39;
                ppppuVar30 = (undefined ****)pppppuVar35;
                ppppuVar32 = ppppuVar41;
                _CGRectInset();
                _CGRectInset();
                func_0x00010bf19a00();
                _objc_retainAutoreleasedReturnValue();
                param_10 = pppppuVar22;
                _objc_retainAutorelease();
                func_0x00010bdc1040();
                _objc_release(pppppuVar22);
                _CGContextSetLineJoin(param_9,1);
                if (unaff_x26 != (undefined *****)0x0) {
                  _CGContextSetFillColorWithColor(param_9,unaff_x26);
                  _CGContextAddPath(param_9,param_10);
                  _CGContextFillPath(param_9);
                }
                unaff_d14 = (undefined ****)pdVar20[-0x56];
                unaff_d13 = (undefined ****)pdVar20[-0x55];
                ppppuVar29 = unaff_d15;
                if (pppppuVar25 != (undefined *****)0x0) {
                  _CGContextSetStrokeColorWithColor(param_9,pppppuVar25);
                  _CGContextAddPath(param_9,param_10);
                  _CGContextStrokePath(param_9);
                }
              }
              _objc_release(pppppuVar24);
              dVar36 = (double)((long)dVar36 + 1);
            } while (dVar33 != dVar36);
            dVar33 = pdVar20[-0x4f];
            func_0x00010bf52a60();
          } while (dVar33 != 0.0);
        }
        _objc_release(pdVar20[-0x4f]);
        pppppuVar17 = (undefined *****)((long)pdVar20[-0x59] + 1);
        pppppuVar19 = (undefined *****)((long)pdVar20[-0x5a] + 1);
      } while (pppppuVar19 != (undefined *****)pdVar20[-0x5b]);
      pdVar18 = pdVar20 + -0x3e;
      pdVar14 = pdVar20 + -0x26;
      dVar33 = pdVar20[-0x5e];
      func_0x00010bf52a60();
      pdVar20[-0x5b] = dVar33;
    } while (dVar33 != 0.0);
  }
  pppppuVar16 = (undefined *****)pdVar20[-0x5e];
  _objc_release(pppppuVar16);
  dVar33 = pdVar20[-0x5f];
  pppppuVar22 = pppppuVar16;
  _objc_release();
  if (*(double *)PTR____stack_chk_guard_11034bdc0 == pdVar20[-0x16]) {
    return pppppuVar22;
  }
  ___stack_chk_fail();
  *(undefined *****)((long)dVar33 + -0xa0) = unaff_d15;
  *(undefined *****)((long)dVar33 + -0x98) = unaff_d14;
  *(undefined *****)((long)dVar33 + -0x90) = unaff_d13;
  *(undefined *****)((long)dVar33 + -0x88) = ppppuVar38;
  *(undefined *****)((long)dVar33 + -0x80) = ppppuVar41;
  *(undefined ******)((long)dVar33 + -0x78) = pppppuVar39;
  *(undefined *****)((long)dVar33 + -0x70) = ppppuVar29;
  *(undefined ******)((long)dVar33 + -0x68) = pppppuVar35;
  *(undefined ******)((long)dVar33 + -0x60) = param_9;
  *(undefined ******)((long)dVar33 + -0x58) = param_10;
  *(undefined ******)((long)dVar33 + -0x50) = unaff_x26;
  *(undefined ******)((long)dVar33 + -0x48) = pppppuVar25;
  *(undefined ******)((long)dVar33 + -0x40) = pppppuVar24;
  *(undefined ******)((long)dVar33 + -0x38) = pppppuVar23;
  *(undefined ******)((long)dVar33 + -0x30) = pppppuVar19;
  *(undefined ******)((long)dVar33 + -0x28) = pppppuVar17;
  *(undefined ******)((long)dVar33 + -0x20) = pppppuVar16;
  *(double **)((long)dVar33 + -0x18) = pdVar20 + -0x60;
  *(double **)((long)dVar33 + -0x10) = pdVar20 + -2;
  *(code **)((long)dVar33 + -8) = FUN_10b2ccb84;
  *(undefined ******)((long)dVar33 + -0x290) = pppppuVar22;
  *(undefined8 *)((long)dVar33 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pdVar20 = pdVar18;
  _CTFrameGetLines();
  _objc_retainAutoreleasedReturnValue();
  pdVar8 = pdVar20;
  func_0x00010bf529e0();
  *(long *)((long)dVar33 + -0x2e0) = (long)dVar33 + -0x2e0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  *(long *)((long)dVar33 + -0x2c8) = (long)dVar33 + -0x2e0 + (long)pdVar8 * -0x10;
  _CTFrameGetLineOrigins(pdVar18,0,0);
  *(undefined8 *)((long)dVar33 + -0x1c8) = 0;
  *(undefined8 *)((long)dVar33 + -0x1d0) = 0;
  *(undefined8 *)((long)dVar33 + -0x1b8) = 0;
  *(undefined8 *)((long)dVar33 + -0x1c0) = 0;
  *(undefined8 *)((long)dVar33 + -0x1e8) = 0;
  *(undefined8 *)((long)dVar33 + -0x1f0) = 0;
  *(undefined8 *)((long)dVar33 + -0x1d8) = 0;
  *(undefined8 *)((long)dVar33 + -0x1e0) = 0;
  _objc_retain(pdVar20);
  pppppuVar22 = (undefined *****)((long)dVar33 - 0x1f0);
  *(double **)((long)dVar33 + -0x2d8) = pdVar20;
  pdVar8 = pdVar20;
  func_0x00010bf52a60();
  *(double **)((long)dVar33 + -0x2c0) = pdVar8;
  puVar6 = PTR__kCTSuperscriptAttributeName_11034a148;
  if (pdVar8 != (double *)0x0) {
    pdVar18 = (double *)0x0;
    *(undefined8 *)((long)dVar33 + -0x2d0) = **(undefined8 **)((long)dVar33 + -0x1e0);
    pdVar20 = *(double **)puVar6;
    *(undefined8 *)((long)dVar33 + -0x2a0) =
         *(undefined8 *)PTR__kCTForegroundColorAttributeName_11034a128;
    dVar36 = -0.4699999988079071;
    *(undefined8 *)((long)dVar33 + -0x2a8) = 0xbfde147ae0000000;
    *(double **)((long)dVar33 + -0x298) = pdVar20;
    do {
      pppppuVar23 = (undefined *****)0x0;
      do {
        if (**(long **)((long)dVar33 + -0x1e0) != *(long *)((long)dVar33 + -0x2d0)) {
          _objc_enumerationMutation(*(undefined8 *)((long)dVar33 + -0x2d8));
        }
        *(undefined ******)((long)dVar33 + -0x2b8) = pppppuVar23;
        pppppuVar23 = *(undefined ******)(*(long *)((long)dVar33 + -0x1e8) + (long)pppppuVar23 * 8);
        *(undefined8 *)((long)dVar33 + -0x200) = 0;
        *(undefined8 *)((long)dVar33 + -0x1f8) = 0;
        *(undefined8 *)((long)dVar33 + -0x208) = 0;
        _CTLineGetTypographicBounds
                  (pppppuVar23,(long)dVar33 + -0x1f8,(long)dVar33 + -0x200,(long)dVar33 + -0x208);
        *(double *)((long)dVar33 + -0x270) = dVar36;
        dVar42 = *(double *)((long)dVar33 + -0x200);
        dVar27 = *(double *)((long)dVar33 + -0x1f8);
        dVar43 = *(double *)((long)dVar33 + -0x208);
        *(double **)((long)dVar33 + -0x2b0) = pdVar18;
        pdVar18 = (double *)(*(long *)((long)dVar33 + -0x2c8) + (long)pdVar18 * 0x10);
        dVar37 = *pdVar18;
        dVar40 = pdVar18[1];
        *(double **)((long)dVar33 + -0x288) = pdVar18;
        *(undefined ******)((long)dVar33 + -0x280) = pppppuVar23;
        dVar36 = 0.0;
        *(undefined8 *)((long)dVar33 + -0x248) = 0;
        *(undefined8 *)((long)dVar33 + -0x250) = 0;
        *(undefined8 *)((long)dVar33 + -0x238) = 0;
        *(undefined8 *)((long)dVar33 + -0x240) = 0;
        *(undefined8 *)((long)dVar33 + -0x228) = 0;
        *(undefined8 *)((long)dVar33 + -0x230) = 0;
        *(undefined8 *)((long)dVar33 + -0x218) = 0;
        *(undefined8 *)((long)dVar33 + -0x220) = 0;
        _CTLineGetGlyphRuns();
        _objc_retainAutoreleasedReturnValue();
        *(undefined ******)((long)dVar33 + -0x278) = pppppuVar23;
        func_0x00010bf52a60();
        if (pppppuVar23 != (undefined *****)0x0) {
          dVar36 = dVar27 + dVar42;
          dVar43 = dVar36 + dVar43;
          *(undefined8 *)((long)dVar33 + -0x268) = **(undefined8 **)((long)dVar33 + -0x240);
          do {
            pppppuVar24 = (undefined *****)0x0;
            do {
              if (**(long **)((long)dVar33 + -0x240) != *(long *)((long)dVar33 + -0x268)) {
                _objc_enumerationMutation(*(undefined8 *)((long)dVar33 + -0x278));
              }
              pppppuVar19 = *(undefined ******)
                             (*(long *)((long)dVar33 + -0x248) + (long)pppppuVar24 * 8);
              pppppuVar25 = pppppuVar19;
              _CTRunGetAttributes();
              _objc_retainAutoreleasedReturnValue();
              pppppuVar22 = pppppuVar25;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              pppppuVar17 = pppppuVar22;
              func_0x00010bf1f3c0();
              _objc_release(pppppuVar22);
              pppppuVar22 = pppppuVar25;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = pppppuVar22;
              func_0x00010c067fc0();
              _objc_release(pppppuVar22);
              if ((int)pppppuVar17 != 0) {
                *(undefined8 *)((long)dVar33 + -0x260) = 0;
                *(undefined8 *)((long)dVar33 + -600) = 0;
                lVar12 = 0;
                _CTRunGetTypographicBounds
                          (pppppuVar19,0,0,(long)dVar33 + -600,(long)dVar33 + -0x260,0);
                dVar27 = *(double *)((long)dVar33 + -600);
                dVar42 = dVar27 + *(double *)((long)dVar33 + -0x260);
                pppppuVar22 = pppppuVar19;
                _CTRunGetStringRange(pppppuVar19);
                _CTRunGetStatus();
                if ((int)pppppuVar19 != 1) {
                  lVar12 = 0;
                }
                _CTLineGetOffsetForStringIndex
                          (*(undefined8 *)((long)dVar33 + -0x280),lVar12 + (long)pppppuVar22,0);
                dVar27 = dVar27 + **(double **)((long)dVar33 + -0x288);
                dVar44 = (*(double **)((long)dVar33 + -0x288))[1] -
                         *(double *)((long)dVar33 + -0x260);
                dVar28 = dVar27;
                _CGRectGetWidth(dVar27,dVar44,dVar36,dVar42);
                dVar31 = dVar37;
                _CGRectGetWidth(dVar37,dVar40,*(undefined8 *)((long)dVar33 + -0x270),dVar43);
                if (dVar31 < dVar28) {
                  dVar36 = dVar37;
                  _CGRectGetWidth(dVar37,dVar40,*(undefined8 *)((long)dVar33 + -0x270),dVar43);
                }
                if (unaff_x26 == (undefined *****)0xffffffffffffffff) {
                  dVar28 = *(double *)((long)dVar33 + -600);
                  dVar31 = 0.25;
LAB_10b2cceb4:
                  dVar44 = dVar44 + dVar31 * dVar28;
                }
                else if (unaff_x26 == (undefined *****)0x1) {
                  dVar28 = *(double *)((long)dVar33 + -600);
                  dVar31 = *(double *)((long)dVar33 + -0x2a8);
                  goto LAB_10b2cceb4;
                }
                unaff_x26 = pppppuVar25;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                if (unaff_x26 == (undefined *****)0x0) {
                  _CGContextSetGrayStrokeColor(0,0x3ff0000000000000,pdVar14);
                }
                else {
                  puVar6 = PTR__OBJC_CLASS___UIColor_1126aea70;
                  _objc_opt_class(PTR__OBJC_CLASS___UIColor_1126aea70);
                  pppppuVar22 = unaff_x26;
                  _objc_opt_isKindOfClass(unaff_x26,puVar6);
                  pppppuVar17 = unaff_x26;
                  if (((ulong)pppppuVar22 & 1) != 0) {
                    _objc_retainAutorelease(unaff_x26);
                    func_0x00010bdc0fe0();
                  }
                  _CGContextSetStrokeColorWithColor(pdVar14,pppppuVar17);
                }
                uVar21 = *(undefined8 *)((long)dVar33 + -0x290);
                uVar11 = uVar21;
                func_0x00010bfb3a80(uVar21);
                _objc_retainAutoreleasedReturnValue();
                uVar9 = uVar11;
                func_0x00010bfb3f20();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfb3a80(uVar21);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c102de0();
                uVar10 = uVar9;
                _CTFontCreateWithName(uVar9,0);
                _objc_release(uVar21);
                _objc_release(uVar9);
                _objc_release(uVar11);
                _CTFontGetUnderlineThickness(uVar10);
                _CGContextSetLineWidth(pdVar14);
                _CFRelease(uVar10);
                lVar12 = (long)(dVar42 * 0.5 + dVar44);
                _CGContextMoveToPoint(dVar27,lVar12,pdVar14);
                dVar36 = dVar27 + dVar36;
                _CGContextAddLineToPoint(dVar36,lVar12,pdVar14);
                _CGContextStrokePath(pdVar14);
                _objc_release(unaff_x26);
                pdVar20 = *(double **)((long)dVar33 + -0x298);
              }
              _objc_release(pppppuVar25);
              pppppuVar24 = (undefined *****)((long)pppppuVar24 + 1);
            } while (pppppuVar23 != pppppuVar24);
            pppppuVar23 = *(undefined ******)((long)dVar33 + -0x278);
            func_0x00010bf52a60();
          } while (pppppuVar23 != (undefined *****)0x0);
        }
        _objc_release(*(undefined8 *)((long)dVar33 + -0x278));
        pdVar18 = (double *)(*(long *)((long)dVar33 + -0x2b0) + 1);
        pppppuVar23 = (undefined *****)(*(long *)((long)dVar33 + -0x2b8) + 1);
      } while (pppppuVar23 != *(undefined ******)((long)dVar33 + -0x2c0));
      pppppuVar22 = (undefined *****)((long)dVar33 - 0x1f0);
      lVar12 = *(long *)((long)dVar33 + -0x2d8);
      func_0x00010bf52a60();
      *(long *)((long)dVar33 + -0x2c0) = lVar12;
    } while (lVar12 != 0);
  }
  pppppuVar19 = *(undefined ******)((long)dVar33 + -0x2d8);
  _objc_release(pppppuVar19);
  lVar12 = *(long *)((long)dVar33 + -0x2e0);
  pppppuVar17 = pppppuVar19;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)((long)dVar33 + -0xb0)) {
    ___stack_chk_fail();
    *(undefined ******)(lVar12 + -0x50) = unaff_x26;
    *(undefined ******)(lVar12 + -0x48) = pppppuVar25;
    *(undefined ******)(lVar12 + -0x40) = pppppuVar24;
    *(undefined ******)(lVar12 + -0x38) = pppppuVar23;
    *(double **)(lVar12 + -0x30) = pdVar20;
    *(double **)(lVar12 + -0x28) = pdVar18;
    *(undefined ******)(lVar12 + -0x20) = pppppuVar19;
    *(long *)(lVar12 + -0x18) = (long)dVar33 + -0x2e0;
    *(long *)(lVar12 + -0x10) = (long)dVar33 + -0x10;
    *(code **)(lVar12 + -8) = FUN_10b2cd0c0;
    _objc_retain(pppppuVar22);
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    pppppuVar23 = pppppuVar22;
    _objc_opt_isKindOfClass(pppppuVar22,puVar6);
    if (((ulong)pppppuVar23 & 1) == 0) {
      func_0x00010c16b720(pppppuVar17);
      func_0x00010c1628e0(pppppuVar17);
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bdf80(pppppuVar17);
      _objc_release(puVar6);
      pppppuVar23 = pppppuVar17;
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      if (pppppuVar23 != (undefined *****)0x0) {
        pppppuVar24 = pppppuVar17;
        func_0x00010bf92a60();
        _objc_release(pppppuVar23);
        if (pppppuVar24 != (undefined *****)0x0) {
          _objc_initWeak(lVar12 + -0x58,pppppuVar17);
          uVar11 = 0;
          _dispatch_get_global_queue(0,0);
          _objc_retainAutoreleasedReturnValue();
          *(undefined **)(lVar12 + -0x88) = puVar6;
          *(undefined8 *)(lVar12 + -0x80) = 0xc2000000;
          *(code **)(lVar12 + -0x78) = FUN_10b2cd328;
          *(undefined **)(lVar12 + -0x70) = &UNK_110841fb0;
          _objc_copyWeak(lVar12 + -0x60,lVar12 + -0x58);
          _objc_retain(pppppuVar22);
          *(undefined ******)(lVar12 + -0x68) = pppppuVar22;
          func_0x000107c27d8c(uVar11,lVar12 + -0x88);
          _objc_release(uVar11);
          _objc_release(*(undefined8 *)(lVar12 + -0x68));
          _objc_destroyWeak(lVar12 + -0x60);
          _objc_destroyWeak(lVar12 + -0x58);
        }
      }
      pppppuVar23 = pppppuVar17;
      func_0x00010bf0e540(pppppuVar17);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar24 = pppppuVar17;
      func_0x00010bf0e540(pppppuVar17);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      *(undefined **)(lVar12 + -0xb0) = puVar6;
      *(undefined8 *)(lVar12 + -0xa8) = 0xc2000000;
      *(undefined8 *)(lVar12 + -0xa0) = 0x10b2cd538;
      *(undefined **)(lVar12 + -0x98) = &UNK_11084b440;
      *(undefined ******)(lVar12 + -0x90) = pppppuVar17;
      func_0x00010bf97b00(pppppuVar23);
      _objc_release(pppppuVar24);
      _objc_release(pppppuVar23);
      pppppuVar23 = pppppuVar17;
      func_0x00010bf0e540(pppppuVar17);
      _objc_retainAutoreleasedReturnValue();
      pppppuVar24 = pppppuVar23;
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_112706340;
      *(undefined ******)(lVar12 + -0xc0) = pppppuVar17;
      *(undefined **)(lVar12 + -0xb8) = puVar6;
      _objc_msgSendSuper2(lVar12 + -0xc0,PTR_s_setText__1126625f0,pppppuVar24);
      _objc_release(pppppuVar24);
      _objc_release(pppppuVar23);
    }
    else {
      func_0x00010c212f40(pppppuVar17);
    }
    _objc_release(pppppuVar22);
    return pppppuVar22;
  }
  return pppppuVar17;
}



/* Entry: 10b2cc058; end: 10b2cc5f3; -[TTTAttributedLabel drawFramesetter:attributedString:textRange:inRect:context:] */

void FUN_10b2cc058(undefined ***param_1,undefined ***param_2,undefined ***param_3,
                  undefined ***param_4,undefined ****param_5,undefined8 param_6,
                  undefined ****param_7,undefined ****param_8,undefined ****param_9,
                  undefined ****param_10,undefined ****param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  double *pdVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  double *pdVar12;
  long lVar13;
  undefined4 uVar14;
  long lVar15;
  undefined ****ppppuVar16;
  double *pdVar17;
  undefined ****ppppuVar18;
  double dVar19;
  double *pdVar20;
  undefined8 uVar21;
  undefined ****ppppuVar22;
  undefined ****ppppuVar23;
  undefined ****ppppuVar24;
  undefined ****unaff_x26;
  undefined ****ppppuVar25;
  double dVar26;
  undefined ***pppuVar27;
  double dVar28;
  double dVar29;
  undefined ***pppuVar30;
  double dVar31;
  undefined ***pppuVar32;
  undefined ***pppuVar33;
  undefined ***pppuVar34;
  undefined ***pppuVar35;
  double dVar36;
  undefined ***pppuVar37;
  double dVar38;
  undefined ***pppuVar39;
  double dVar40;
  undefined ***unaff_d12;
  undefined ***pppuVar41;
  double dVar42;
  double unaff_d13;
  undefined ***unaff_d14;
  undefined ***unaff_d15;
  double dVar43;
  double *pdStack_130;
  undefined ***apppuStack_128 [4];
  undefined **ppuStack_108;
  undefined ***pppuStack_100;
  undefined ***pppuStack_f8;
  long lStack_f0;
  undefined ***pppuStack_e8;
  undefined4 uStack_dc;
  undefined ***pppuStack_d8;
  undefined ***pppuStack_d0;
  uint uStack_c4;
  undefined ***pppuStack_c0;
  double dStack_b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppuStack_e8 = (undefined ***)param_8;
  _objc_retain();
  _CGPathCreateMutable();
  _CGPathAddRect(param_1,param_2,param_3,param_4);
  _CTFramesetterCreateFrame(param_7,param_9,param_10,param_8,0);
  func_0x00010bf89800(param_1,param_2,param_3,param_4,param_5);
  ppppuVar23 = param_7;
  _CTFrameGetLines();
  ppppuVar24 = param_5;
  func_0x00010c0def20();
  if ((long)ppppuVar24 < 1) {
    ppppuVar24 = ppppuVar23;
    _CFArrayGetCount();
    pppuStack_f8 = (undefined ***)ppppuVar24;
  }
  else {
    ppppuVar24 = param_5;
    func_0x00010c0def20();
    ppppuVar22 = ppppuVar23;
    _CFArrayGetCount();
    pppuStack_f8 = (undefined ***)ppppuVar24;
    if ((long)ppppuVar22 <= (long)ppppuVar24) {
      pppuStack_f8 = (undefined ***)ppppuVar22;
    }
  }
  ppppuVar24 = param_5;
  func_0x00010c099180();
  apppuStack_128[1] = (undefined ***)param_8;
  apppuStack_128[2] = param_1;
  apppuStack_128[3] = param_2;
  ppuStack_108 = (undefined **)param_4;
  if ((ppppuVar24 == (undefined ****)0x3) ||
     (ppppuVar24 = param_5, func_0x00010c099180(), ppppuVar24 == (undefined ****)0x5)) {
    ppppuVar24 = (undefined ****)0x1;
  }
  else {
    ppppuVar24 = param_5;
    func_0x00010c099180();
    ppppuVar24 = (undefined ****)(ulong)(ppppuVar24 == (undefined ****)0x4);
  }
  ppppuVar22 = (undefined ****)pppuStack_f8;
  pdStack_130 = (double *)&pdStack_130;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  apppuStack_128[0] = (undefined ***)param_7;
  _CTFrameGetLineOrigins(param_7,0,ppppuVar22,&pdStack_130 + (long)ppppuVar22 * -2);
  if (0 < (long)ppppuVar22) {
    unaff_x26 = (undefined ****)0x0;
    lStack_f0 = (long)param_9 + (long)param_10;
    param_9 = apppuStack_128 + (long)ppppuVar22 * -2;
    unaff_d15 = (undefined ***)0x0;
    param_4 = (undefined ***)0x3ff0000000000000;
    param_2 = (undefined ***)0x3fe0000000000000;
    pppuStack_100 = (undefined ***)param_11;
    pppuStack_c0 = (undefined ***)ppppuVar23;
    uStack_c4 = (uint)ppppuVar24;
    ppppuVar16 = (undefined ****)pppuStack_f8;
    do {
      unaff_d14 = param_9[-1];
      unaff_d12 = *param_9;
      pppuVar27 = unaff_d14;
      _CGContextSetTextPosition(unaff_d14,unaff_d12,param_11);
      ppppuVar22 = ppppuVar23;
      _CFArrayGetValueAtIndex(ppppuVar23,unaff_x26);
      dStack_b8 = 0.0;
      lVar10 = 0;
      _CTLineGetTypographicBounds();
      ppppuVar18 = param_5;
      func_0x00010c12bf20();
      dVar26 = dStack_b8;
      param_1 = (undefined ***)0x0;
      if (((ulong)ppppuVar18 & 1) == 0) {
        param_7 = param_5;
        func_0x00010bfb3a80();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf6e320();
        param_1 = (undefined ***)(dVar26 + (double)pppuVar27);
        _objc_release(param_7);
      }
      ppppuVar18 = param_5;
      func_0x00010c26b7a0();
      dVar26 = 1.0;
      if (ppppuVar18 != (undefined ****)0x2) {
        dVar26 = 0.0;
      }
      unaff_d13 = 0.5;
      if (ppppuVar18 != (undefined ****)0x1) {
        unaff_d13 = dVar26;
      }
      if (((uint)(ppppuVar16 == (undefined ****)0x1) & (uint)ppppuVar24) == 1) {
        ppppuVar23 = ppppuVar22;
        _CTLineGetStringRange();
        if ((lVar10 == 0 && ppppuVar23 == (undefined ****)0x0) ||
           (lStack_f0 <= (long)ppppuVar23 + lVar10)) {
          _CGContextSetTextPosition(unaff_d14,(double)unaff_d12 - (double)param_1,param_11);
          _CTLineDraw(ppppuVar22,param_11);
        }
        else {
          ppppuVar23 = param_5;
          func_0x00010c099180();
          if ((undefined ****)pppuStack_f8 != (undefined ****)0x1) {
            ppppuVar23 = (undefined ****)0x4;
          }
          uVar14 = 1;
          if (ppppuVar23 == (undefined ****)0x5) {
            uVar14 = 2;
          }
          uStack_dc = 0;
          if (ppppuVar23 != (undefined ****)0x3) {
            uStack_dc = uVar14;
          }
          ppppuVar24 = param_5;
          func_0x00010c27cba0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar23 = (undefined ****)&PTR____CFConstantStringClassReference_110f62638;
          if (ppppuVar24 != (undefined ****)0x0) {
            ppppuVar23 = ppppuVar24;
          }
          ppppuVar24 = param_5;
          func_0x00010c27cbc0();
          _objc_retainAutoreleasedReturnValue();
          if (ppppuVar24 == (undefined ****)0x0) {
            ppppuVar24 = (undefined ****)pppuStack_e8;
            func_0x00010bf0e760();
            _objc_retainAutoreleasedReturnValue();
          }
          param_7 = (undefined ****)PTR__OBJC_CLASS___NSAttributedString_1126af068;
          _objc_alloc();
          pppuStack_d8 = (undefined ***)ppppuVar24;
          pppuStack_d0 = (undefined ***)ppppuVar23;
          func_0x00010c04e840();
          ppppuVar23 = param_7;
          _CTLineCreateWithAttributedString();
          ppppuVar24 = (undefined ****)pppuStack_e8;
          func_0x00010bf0e4e0();
          _objc_retainAutoreleasedReturnValue();
          ppppuVar22 = ppppuVar24;
          func_0x00010c0d3c80();
          _objc_release(ppppuVar24);
          if (0 < lVar10) {
            ppppuVar24 = ppppuVar22;
            func_0x00010c25cd40(ppppuVar22);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bf35920();
            _objc_release(ppppuVar24);
            puVar2 = PTR__OBJC_CLASS___NSCharacterSet_1126af030;
            func_0x00010c0d96e0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar2;
            func_0x00010bf359c0();
            _objc_release(puVar2);
            if ((int)puVar3 != 0) {
              func_0x00010bf6b860(ppppuVar22);
            }
          }
          func_0x00010bf069e0(ppppuVar22);
          ppppuVar24 = ppppuVar22;
          _CTLineCreateWithAttributedString();
          ppppuVar18 = ppppuVar24;
          _CTLineCreateTruncatedLine(param_3);
          if (ppppuVar18 == (undefined ****)0x0) {
            ppppuVar18 = ppppuVar23;
            _CFRetain(ppppuVar23);
          }
          _CTLineGetPenOffsetForFlush(unaff_d13,param_3,ppppuVar18);
          param_11 = (undefined ****)pppuStack_100;
          _CGContextSetTextPosition(pppuStack_100);
          _CTLineDraw(ppppuVar18,param_11);
          _CFRelease(ppppuVar18);
          _CFRelease(ppppuVar24);
          _CFRelease(ppppuVar23);
          _objc_release(ppppuVar22);
          _objc_release(param_7);
          _objc_release(pppuStack_d8);
          _objc_release(pppuStack_d0);
          param_10 = param_11;
        }
        ppppuVar24 = (undefined ****)(ulong)uStack_c4;
        ppppuVar23 = (undefined ****)pppuStack_c0;
      }
      else {
        _CGContextSetTextPosition(unaff_d14,(double)unaff_d12 - (double)param_1,param_11);
        _CTLineDraw(ppppuVar22,param_11);
      }
      param_9 = param_9 + 2;
      unaff_x26 = (undefined ****)((long)unaff_x26 + 1);
      ppppuVar16 = (undefined ****)((long)ppppuVar16 + -1);
      ppppuVar22 = (undefined ****)0x0;
    } while (ppppuVar16 != (undefined ****)0x0);
  }
  pppuVar27 = apppuStack_128[0];
  ppppuVar16 = (undefined ****)apppuStack_128[0];
  ppppuVar25 = param_11;
  pppuVar34 = apppuStack_128[2];
  pppuVar37 = apppuStack_128[3];
  pppuVar39 = param_3;
  pppuVar41 = (undefined ***)ppuStack_108;
  func_0x00010bf89c00(param_5);
  _CFRelease(pppuVar27);
  _CFRelease(apppuStack_128[1]);
  pdVar20 = pdStack_130;
  ppppuVar18 = (undefined ****)pppuStack_e8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  pdVar20[-0x14] = (double)unaff_d15;
  pdVar20[-0x13] = (double)unaff_d14;
  pdVar20[-0x12] = unaff_d13;
  pdVar20[-0x11] = (double)unaff_d12;
  pdVar20[-0x10] = (double)param_1;
  pdVar20[-0xf] = (double)param_2;
  pdVar20[-0xe] = (double)param_3;
  pdVar20[-0xd] = (double)param_4;
  pdVar20[-0xc] = (double)param_9;
  pdVar20[-0xb] = (double)param_10;
  pdVar20[-10] = (double)unaff_x26;
  pdVar20[-9] = (double)ppppuVar24;
  pdVar20[-8] = (double)ppppuVar23;
  pdVar20[-7] = (double)param_11;
  pdVar20[-6] = (double)param_5;
  pdVar20[-5] = (double)param_7;
  pdVar20[-4] = (double)ppppuVar22;
  pdVar20[-3] = (double)pppuVar27;
  pdVar20[-2] = (double)&stack0xfffffffffffffff0;
  pdVar20[-1] = (double)FUN_10b2cc5f4;
  pdVar20[-0x57] = (double)ppppuVar25;
  pdVar20[-0x54] = (double)pppuVar34;
  pdVar20[-0x53] = (double)pppuVar37;
  pdVar20[-0x16] = *(double *)PTR____stack_chk_guard_11034bdc0;
  ppppuVar22 = ppppuVar16;
  _CTFrameGetLines();
  _objc_retainAutoreleasedReturnValue();
  ppppuVar25 = ppppuVar22;
  func_0x00010bf529e0();
  pdVar20[-0x5f] = (double)(pdVar20 + -0x60);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  pdVar20[-0x5c] = (double)(pdVar20 + (long)ppppuVar25 * -2 + -0x60);
  _CTFrameGetLineOrigins(ppppuVar16,0,0);
  func_0x00010c26c200(ppppuVar18);
  pppuVar27 = pppuVar34;
  func_0x00010bf20c00(ppppuVar18);
  func_0x00010c0def20(ppppuVar18);
  pppuVar35 = pppuVar37;
  pppuVar32 = pppuVar39;
  pppuVar33 = pppuVar41;
  func_0x00010c26c660(pppuVar27,ppppuVar18);
  pdVar20[-0x3d] = 0.0;
  pdVar20[-0x3e] = 0.0;
  pdVar20[-0x3b] = 0.0;
  pdVar20[-0x3c] = 0.0;
  pdVar20[-0x39] = 0.0;
  pdVar20[-0x3a] = 0.0;
  pdVar20[-0x37] = 0.0;
  pdVar20[-0x38] = 0.0;
  _objc_retain(ppppuVar22);
  pdVar17 = pdVar20 + -0x3e;
  pdVar12 = pdVar20 + -0x26;
  pdVar20[-0x5e] = (double)ppppuVar22;
  ppppuVar25 = ppppuVar22;
  func_0x00010bf52a60();
  pdVar20[-0x5b] = (double)ppppuVar25;
  if (ppppuVar25 != (undefined ****)0x0) {
    ppppuVar16 = (undefined ****)0x0;
    pppuVar27 = (undefined ***)((double)pppuVar34 - (double)pppuVar35);
    pdVar20[-0x58] = (double)pppuVar27;
    pdVar20[-0x5d] = *(double *)pdVar20[-0x3c];
    do {
      ppppuVar18 = (undefined ****)0x0;
      do {
        if (*(double *)pdVar20[-0x3c] != pdVar20[-0x5d]) {
          _objc_enumerationMutation(pdVar20[-0x5e]);
        }
        pdVar20[-0x5a] = (double)ppppuVar18;
        dVar26 = *(double *)((long)pdVar20[-0x3d] + (long)ppppuVar18 * 8);
        pdVar20[-0x40] = 0.0;
        pdVar20[-0x3f] = 0.0;
        pdVar20[-0x41] = 0.0;
        _CTLineGetTypographicBounds(dVar26,pdVar20 + -0x3f,pdVar20 + -0x40,pdVar20 + -0x41);
        pdVar20[-0x51] = (double)pppuVar27;
        pppuVar35 = (undefined ***)pdVar20[-0x40];
        pppuVar34 = (undefined ***)pdVar20[-0x3f];
        pppuVar37 = (undefined ***)pdVar20[-0x41];
        pdVar20[-0x59] = (double)ppppuVar16;
        puVar1 = (undefined8 *)((long)pdVar20[-0x5c] + (long)ppppuVar16 * 0x10);
        pppuVar39 = (undefined ***)*puVar1;
        pppuVar41 = (undefined ***)puVar1[1];
        pdVar20[-0x52] = (double)puVar1;
        pppuVar27 = (undefined ***)0x0;
        pdVar20[-0x49] = 0.0;
        pdVar20[-0x4a] = 0.0;
        pdVar20[-0x47] = 0.0;
        pdVar20[-0x48] = 0.0;
        pdVar20[-0x45] = 0.0;
        pdVar20[-0x46] = 0.0;
        pdVar20[-0x43] = 0.0;
        pdVar20[-0x44] = 0.0;
        pdVar20[-0x50] = dVar26;
        _CTLineGetGlyphRuns();
        _objc_retainAutoreleasedReturnValue();
        pdVar20[-0x4f] = dVar26;
        func_0x00010bf52a60();
        if (dVar26 != 0.0) {
          pppuVar30 = (undefined ***)pdVar20[-0x53];
          unaff_d13 = (double)pppuVar30 + (double)pppuVar41;
          unaff_d14 = (undefined ***)(pdVar20[-0x54] + (double)pppuVar39);
          pppuVar27 = (undefined ***)((double)pppuVar34 + (double)pppuVar35);
          unaff_d15 = (undefined ***)((double)pppuVar27 + (double)pppuVar37);
          ppppuVar22 = *(undefined *****)pdVar20[-0x48];
          pdVar20[-0x56] = (double)unaff_d14;
          pdVar20[-0x55] = unaff_d13;
          do {
            dVar19 = 0.0;
            do {
              pppuVar35 = pppuVar27;
              pppuVar37 = pppuVar30;
              pppuVar34 = pppuVar32;
              pppuVar39 = pppuVar33;
              if (*(undefined *****)pdVar20[-0x48] != ppppuVar22) {
                _objc_enumerationMutation(pdVar20[-0x4f]);
                pppuVar35 = pppuVar27;
                pppuVar37 = pppuVar30;
                pppuVar34 = pppuVar32;
                pppuVar39 = pppuVar33;
              }
              param_10 = *(undefined *****)((long)pdVar20[-0x49] + (long)dVar19 * 8);
              ppppuVar23 = param_10;
              _CTRunGetAttributes();
              _objc_retainAutoreleasedReturnValue();
              ppppuVar24 = ppppuVar23;
              func_0x00010c0dff20();
              unaff_x26 = ppppuVar23;
              func_0x00010c0dff20();
              ppppuVar16 = ppppuVar23;
              func_0x00010c0dff20(ppppuVar23);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bdc2aa0();
              pppuVar41 = pppuVar35;
              pppuVar30 = pppuVar37;
              pppuVar32 = pppuVar34;
              pppuVar33 = pppuVar39;
              _objc_release(ppppuVar16);
              ppppuVar16 = ppppuVar23;
              func_0x00010c0dff20(ppppuVar23);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              pppuVar27 = pppuVar41;
              _objc_release(ppppuVar16);
              param_9 = ppppuVar23;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              *(int *)((long)pdVar20 + -0x264) = (int)pppuVar27;
              _objc_release(param_9);
              if (ppppuVar24 != (undefined ****)0x0 || unaff_x26 != (undefined ****)0x0) {
                *(int *)(pdVar20 + -0x4d) = (int)pppuVar41;
                pdVar20[-0x4c] = 0.0;
                pdVar20[-0x4b] = 0.0;
                lVar10 = 0;
                _CTRunGetTypographicBounds(param_10,0,0,pdVar20 + -0x4b,pdVar20 + -0x4c,0);
                pppuVar39 = (undefined ***)
                            ((double)pppuVar39 + (double)pppuVar37 + (double)pppuVar27);
                dVar28 = (double)pppuVar35 + pdVar20[-0x4b] + pdVar20[-0x4c];
                dVar36 = (double)pppuVar34 + dVar28;
                ppppuVar16 = param_10;
                _CTRunGetStringRange(param_10);
                _CTRunGetStatus();
                if ((int)param_10 != 1) {
                  lVar10 = 0;
                }
                _CTLineGetOffsetForStringIndex(pdVar20[-0x50],lVar10 + (long)ppppuVar16,0);
                pppuVar37 = (undefined ***)
                            (((dVar28 + pdVar20[-0x54] + *(double *)pdVar20[-0x52]) -
                             (double)pppuVar37) - pdVar20[-0x54]);
                pppuVar34 = (undefined ***)
                            ((((pdVar20[-0x58] + pdVar20[-0x53] + ((double *)pdVar20[-0x52])[1]) -
                              (double)pppuVar34) - pdVar20[-0x53]) - pdVar20[-0x4c]);
                pdVar20[-0x4e] = dVar36;
                pppuVar27 = pppuVar37;
                _CGRectGetWidth(pppuVar37,pppuVar34,pppuVar39,dVar36);
                dVar28 = pdVar20[-0x51];
                pppuVar41 = unaff_d14;
                _CGRectGetWidth(unaff_d14,unaff_d13,dVar28,unaff_d15);
                if ((double)pppuVar41 < (double)pppuVar27) {
                  _CGRectGetWidth(unaff_d14,unaff_d13,dVar28,unaff_d15);
                  pppuVar39 = unaff_d14;
                }
                ppppuVar16 = (undefined ****)PTR__OBJC_CLASS___UIBezierPath_1126aec18;
                param_9 = (undefined ****)pdVar20[-0x57];
                pppuVar41 = (undefined ***)(double)*(float *)(pdVar20 + -0x4d);
                pppuVar33 = (undefined ***)pdVar20[-0x4e];
                pppuVar27 = pppuVar37;
                pppuVar30 = pppuVar34;
                pppuVar32 = pppuVar39;
                _CGRectInset();
                _CGRectInset();
                func_0x00010bf19a00();
                _objc_retainAutoreleasedReturnValue();
                param_10 = ppppuVar16;
                _objc_retainAutorelease();
                func_0x00010bdc1040();
                _objc_release(ppppuVar16);
                _CGContextSetLineJoin(param_9,1);
                if (unaff_x26 != (undefined ****)0x0) {
                  _CGContextSetFillColorWithColor(param_9,unaff_x26);
                  _CGContextAddPath(param_9,param_10);
                  _CGContextFillPath(param_9);
                }
                unaff_d14 = (undefined ***)pdVar20[-0x56];
                unaff_d13 = pdVar20[-0x55];
                pppuVar35 = unaff_d15;
                if (ppppuVar24 != (undefined ****)0x0) {
                  _CGContextSetStrokeColorWithColor(param_9,ppppuVar24);
                  _CGContextAddPath(param_9,param_10);
                  _CGContextStrokePath(param_9);
                }
              }
              _objc_release(ppppuVar23);
              dVar19 = (double)((long)dVar19 + 1);
            } while (dVar26 != dVar19);
            dVar26 = pdVar20[-0x4f];
            func_0x00010bf52a60();
          } while (dVar26 != 0.0);
        }
        _objc_release(pdVar20[-0x4f]);
        ppppuVar16 = (undefined ****)((long)pdVar20[-0x59] + 1);
        ppppuVar18 = (undefined ****)((long)pdVar20[-0x5a] + 1);
      } while (ppppuVar18 != (undefined ****)pdVar20[-0x5b]);
      pdVar17 = pdVar20 + -0x3e;
      pdVar12 = pdVar20 + -0x26;
      dVar26 = pdVar20[-0x5e];
      func_0x00010bf52a60();
      pdVar20[-0x5b] = dVar26;
    } while (dVar26 != 0.0);
  }
  dVar28 = pdVar20[-0x5e];
  _objc_release(dVar28);
  dVar19 = pdVar20[-0x5f];
  dVar26 = dVar28;
  _objc_release();
  if (*(double *)PTR____stack_chk_guard_11034bdc0 == pdVar20[-0x16]) {
    return;
  }
  ___stack_chk_fail();
  *(undefined ****)((long)dVar19 + -0xa0) = unaff_d15;
  *(undefined ****)((long)dVar19 + -0x98) = unaff_d14;
  *(double *)((long)dVar19 + -0x90) = unaff_d13;
  *(undefined ****)((long)dVar19 + -0x88) = pppuVar41;
  *(undefined ****)((long)dVar19 + -0x80) = pppuVar39;
  *(undefined ****)((long)dVar19 + -0x78) = pppuVar37;
  *(undefined ****)((long)dVar19 + -0x70) = pppuVar35;
  *(undefined ****)((long)dVar19 + -0x68) = pppuVar34;
  *(undefined *****)((long)dVar19 + -0x60) = param_9;
  *(undefined *****)((long)dVar19 + -0x58) = param_10;
  *(undefined *****)((long)dVar19 + -0x50) = unaff_x26;
  *(undefined *****)((long)dVar19 + -0x48) = ppppuVar24;
  *(undefined *****)((long)dVar19 + -0x40) = ppppuVar23;
  *(undefined *****)((long)dVar19 + -0x38) = ppppuVar22;
  *(undefined *****)((long)dVar19 + -0x30) = ppppuVar18;
  *(undefined *****)((long)dVar19 + -0x28) = ppppuVar16;
  *(double *)((long)dVar19 + -0x20) = dVar28;
  *(double **)((long)dVar19 + -0x18) = pdVar20 + -0x60;
  *(double **)((long)dVar19 + -0x10) = pdVar20 + -2;
  *(code **)((long)dVar19 + -8) = FUN_10b2ccb84;
  *(double *)((long)dVar19 + -0x290) = dVar26;
  *(undefined8 *)((long)dVar19 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pdVar20 = pdVar17;
  _CTFrameGetLines();
  _objc_retainAutoreleasedReturnValue();
  pdVar4 = pdVar20;
  func_0x00010bf529e0();
  *(long *)((long)dVar19 + -0x2e0) = (long)dVar19 + -0x2e0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  *(long *)((long)dVar19 + -0x2c8) = (long)dVar19 + -0x2e0 + (long)pdVar4 * -0x10;
  _CTFrameGetLineOrigins(pdVar17,0,0);
  *(undefined8 *)((long)dVar19 + -0x1c8) = 0;
  *(undefined8 *)((long)dVar19 + -0x1d0) = 0;
  *(undefined8 *)((long)dVar19 + -0x1b8) = 0;
  *(undefined8 *)((long)dVar19 + -0x1c0) = 0;
  *(undefined8 *)((long)dVar19 + -0x1e8) = 0;
  *(undefined8 *)((long)dVar19 + -0x1f0) = 0;
  *(undefined8 *)((long)dVar19 + -0x1d8) = 0;
  *(undefined8 *)((long)dVar19 + -0x1e0) = 0;
  _objc_retain(pdVar20);
  uVar11 = (long)dVar19 - 0x1f0;
  *(double **)((long)dVar19 + -0x2d8) = pdVar20;
  pdVar4 = pdVar20;
  func_0x00010bf52a60();
  *(double **)((long)dVar19 + -0x2c0) = pdVar4;
  puVar2 = PTR__kCTSuperscriptAttributeName_11034a148;
  if (pdVar4 != (double *)0x0) {
    pdVar17 = (double *)0x0;
    *(undefined8 *)((long)dVar19 + -0x2d0) = **(undefined8 **)((long)dVar19 + -0x1e0);
    pdVar20 = *(double **)puVar2;
    *(undefined8 *)((long)dVar19 + -0x2a0) =
         *(undefined8 *)PTR__kCTForegroundColorAttributeName_11034a128;
    dVar26 = -0.4699999988079071;
    *(undefined8 *)((long)dVar19 + -0x2a8) = 0xbfde147ae0000000;
    *(double **)((long)dVar19 + -0x298) = pdVar20;
    do {
      ppppuVar22 = (undefined ****)0x0;
      do {
        if (**(long **)((long)dVar19 + -0x1e0) != *(long *)((long)dVar19 + -0x2d0)) {
          _objc_enumerationMutation(*(undefined8 *)((long)dVar19 + -0x2d8));
        }
        *(undefined *****)((long)dVar19 + -0x2b8) = ppppuVar22;
        ppppuVar22 = *(undefined *****)(*(long *)((long)dVar19 + -0x1e8) + (long)ppppuVar22 * 8);
        *(undefined8 *)((long)dVar19 + -0x200) = 0;
        *(undefined8 *)((long)dVar19 + -0x1f8) = 0;
        *(undefined8 *)((long)dVar19 + -0x208) = 0;
        _CTLineGetTypographicBounds
                  (ppppuVar22,(long)dVar19 + -0x1f8,(long)dVar19 + -0x200,(long)dVar19 + -0x208);
        *(double *)((long)dVar19 + -0x270) = dVar26;
        dVar40 = *(double *)((long)dVar19 + -0x200);
        dVar28 = *(double *)((long)dVar19 + -0x1f8);
        dVar42 = *(double *)((long)dVar19 + -0x208);
        *(double **)((long)dVar19 + -0x2b0) = pdVar17;
        pdVar17 = (double *)(*(long *)((long)dVar19 + -0x2c8) + (long)pdVar17 * 0x10);
        dVar36 = *pdVar17;
        dVar38 = pdVar17[1];
        *(double **)((long)dVar19 + -0x288) = pdVar17;
        *(undefined *****)((long)dVar19 + -0x280) = ppppuVar22;
        dVar26 = 0.0;
        *(undefined8 *)((long)dVar19 + -0x248) = 0;
        *(undefined8 *)((long)dVar19 + -0x250) = 0;
        *(undefined8 *)((long)dVar19 + -0x238) = 0;
        *(undefined8 *)((long)dVar19 + -0x240) = 0;
        *(undefined8 *)((long)dVar19 + -0x228) = 0;
        *(undefined8 *)((long)dVar19 + -0x230) = 0;
        *(undefined8 *)((long)dVar19 + -0x218) = 0;
        *(undefined8 *)((long)dVar19 + -0x220) = 0;
        _CTLineGetGlyphRuns();
        _objc_retainAutoreleasedReturnValue();
        *(undefined *****)((long)dVar19 + -0x278) = ppppuVar22;
        func_0x00010bf52a60();
        if (ppppuVar22 != (undefined ****)0x0) {
          dVar26 = dVar28 + dVar40;
          dVar42 = dVar26 + dVar42;
          *(undefined8 *)((long)dVar19 + -0x268) = **(undefined8 **)((long)dVar19 + -0x240);
          do {
            ppppuVar23 = (undefined ****)0x0;
            do {
              if (**(long **)((long)dVar19 + -0x240) != *(long *)((long)dVar19 + -0x268)) {
                _objc_enumerationMutation(*(undefined8 *)((long)dVar19 + -0x278));
              }
              ppppuVar25 = *(undefined *****)
                            (*(long *)((long)dVar19 + -0x248) + (long)ppppuVar23 * 8);
              ppppuVar24 = ppppuVar25;
              _CTRunGetAttributes();
              _objc_retainAutoreleasedReturnValue();
              ppppuVar16 = ppppuVar24;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              ppppuVar18 = ppppuVar16;
              func_0x00010bf1f3c0();
              _objc_release(ppppuVar16);
              ppppuVar16 = ppppuVar24;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = ppppuVar16;
              func_0x00010c067fc0();
              _objc_release(ppppuVar16);
              if ((int)ppppuVar18 != 0) {
                *(undefined8 *)((long)dVar19 + -0x260) = 0;
                *(undefined8 *)((long)dVar19 + -600) = 0;
                lVar10 = 0;
                _CTRunGetTypographicBounds
                          (ppppuVar25,0,0,(long)dVar19 + -600,(long)dVar19 + -0x260,0);
                dVar28 = *(double *)((long)dVar19 + -600);
                dVar40 = dVar28 + *(double *)((long)dVar19 + -0x260);
                ppppuVar16 = ppppuVar25;
                _CTRunGetStringRange(ppppuVar25);
                _CTRunGetStatus();
                if ((int)ppppuVar25 != 1) {
                  lVar10 = 0;
                }
                _CTLineGetOffsetForStringIndex
                          (*(undefined8 *)((long)dVar19 + -0x280),lVar10 + (long)ppppuVar16,0);
                dVar28 = dVar28 + **(double **)((long)dVar19 + -0x288);
                dVar43 = (*(double **)((long)dVar19 + -0x288))[1] -
                         *(double *)((long)dVar19 + -0x260);
                dVar29 = dVar28;
                _CGRectGetWidth(dVar28,dVar43,dVar26,dVar40);
                dVar31 = dVar36;
                _CGRectGetWidth(dVar36,dVar38,*(undefined8 *)((long)dVar19 + -0x270),dVar42);
                if (dVar31 < dVar29) {
                  dVar26 = dVar36;
                  _CGRectGetWidth(dVar36,dVar38,*(undefined8 *)((long)dVar19 + -0x270),dVar42);
                }
                if (unaff_x26 == (undefined ****)0xffffffffffffffff) {
                  dVar29 = *(double *)((long)dVar19 + -600);
                  dVar31 = 0.25;
LAB_10b2cceb4:
                  dVar43 = dVar43 + dVar31 * dVar29;
                }
                else if (unaff_x26 == (undefined ****)0x1) {
                  dVar29 = *(double *)((long)dVar19 + -600);
                  dVar31 = *(double *)((long)dVar19 + -0x2a8);
                  goto LAB_10b2cceb4;
                }
                unaff_x26 = ppppuVar24;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                if (unaff_x26 == (undefined ****)0x0) {
                  _CGContextSetGrayStrokeColor(0,0x3ff0000000000000,pdVar12);
                }
                else {
                  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
                  _objc_opt_class(PTR__OBJC_CLASS___UIColor_1126aea70);
                  ppppuVar16 = unaff_x26;
                  _objc_opt_isKindOfClass(unaff_x26,puVar2);
                  ppppuVar18 = unaff_x26;
                  if (((ulong)ppppuVar16 & 1) != 0) {
                    _objc_retainAutorelease(unaff_x26);
                    func_0x00010bdc0fe0();
                  }
                  _CGContextSetStrokeColorWithColor(pdVar12,ppppuVar18);
                }
                uVar21 = *(undefined8 *)((long)dVar19 + -0x290);
                uVar9 = uVar21;
                func_0x00010bfb3a80(uVar21);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar9;
                func_0x00010bfb3f20();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfb3a80(uVar21);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c102de0();
                uVar6 = uVar5;
                _CTFontCreateWithName(uVar5,0);
                _objc_release(uVar21);
                _objc_release(uVar5);
                _objc_release(uVar9);
                _CTFontGetUnderlineThickness(uVar6);
                _CGContextSetLineWidth(pdVar12);
                _CFRelease(uVar6);
                lVar10 = (long)(dVar40 * 0.5 + dVar43);
                _CGContextMoveToPoint(dVar28,lVar10,pdVar12);
                dVar26 = dVar28 + dVar26;
                _CGContextAddLineToPoint(dVar26,lVar10,pdVar12);
                _CGContextStrokePath(pdVar12);
                _objc_release(unaff_x26);
                pdVar20 = *(double **)((long)dVar19 + -0x298);
              }
              _objc_release(ppppuVar24);
              ppppuVar23 = (undefined ****)((long)ppppuVar23 + 1);
            } while (ppppuVar22 != ppppuVar23);
            ppppuVar22 = *(undefined *****)((long)dVar19 + -0x278);
            func_0x00010bf52a60();
          } while (ppppuVar22 != (undefined ****)0x0);
        }
        _objc_release(*(undefined8 *)((long)dVar19 + -0x278));
        pdVar17 = (double *)(*(long *)((long)dVar19 + -0x2b0) + 1);
        ppppuVar22 = (undefined ****)(*(long *)((long)dVar19 + -0x2b8) + 1);
      } while (ppppuVar22 != *(undefined *****)((long)dVar19 + -0x2c0));
      uVar11 = (long)dVar19 - 0x1f0;
      lVar10 = *(long *)((long)dVar19 + -0x2d8);
      func_0x00010bf52a60();
      *(long *)((long)dVar19 + -0x2c0) = lVar10;
    } while (lVar10 != 0);
  }
  lVar15 = *(long *)((long)dVar19 + -0x2d8);
  _objc_release(lVar15);
  lVar13 = *(long *)((long)dVar19 + -0x2e0);
  lVar10 = lVar15;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)dVar19 + -0xb0)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined *****)(lVar13 + -0x50) = unaff_x26;
  *(undefined *****)(lVar13 + -0x48) = ppppuVar24;
  *(undefined *****)(lVar13 + -0x40) = ppppuVar23;
  *(undefined *****)(lVar13 + -0x38) = ppppuVar22;
  *(double **)(lVar13 + -0x30) = pdVar20;
  *(double **)(lVar13 + -0x28) = pdVar17;
  *(long *)(lVar13 + -0x20) = lVar15;
  *(long *)(lVar13 + -0x18) = (long)dVar19 + -0x2e0;
  *(long *)(lVar13 + -0x10) = (long)dVar19 + -0x10;
  *(code **)(lVar13 + -8) = FUN_10b2cd0c0;
  _objc_retain(uVar11);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar7 = uVar11;
  _objc_opt_isKindOfClass(uVar11,puVar2);
  if ((uVar7 & 1) == 0) {
    func_0x00010c16b720(lVar10);
    func_0x00010c1628e0(lVar10);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdf80(lVar10);
    _objc_release(puVar2);
    lVar15 = lVar10;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar15 != 0) {
      lVar8 = lVar10;
      func_0x00010bf92a60();
      _objc_release(lVar15);
      if (lVar8 != 0) {
        _objc_initWeak(lVar13 + -0x58,lVar10);
        uVar9 = 0;
        _dispatch_get_global_queue(0,0);
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)(lVar13 + -0x88) = puVar2;
        *(undefined8 *)(lVar13 + -0x80) = 0xc2000000;
        *(code **)(lVar13 + -0x78) = FUN_10b2cd328;
        *(undefined **)(lVar13 + -0x70) = &UNK_110841fb0;
        _objc_copyWeak(lVar13 + -0x60,lVar13 + -0x58);
        _objc_retain(uVar11);
        *(ulong *)(lVar13 + -0x68) = uVar11;
        func_0x000107c27d8c(uVar9,lVar13 + -0x88);
        _objc_release(uVar9);
        _objc_release(*(undefined8 *)(lVar13 + -0x68));
        _objc_destroyWeak(lVar13 + -0x60);
        _objc_destroyWeak(lVar13 + -0x58);
      }
    }
    lVar15 = lVar10;
    func_0x00010bf0e540(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar10;
    func_0x00010bf0e540(lVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    *(undefined **)(lVar13 + -0xb0) = puVar2;
    *(undefined8 *)(lVar13 + -0xa8) = 0xc2000000;
    *(undefined8 *)(lVar13 + -0xa0) = 0x10b2cd538;
    *(undefined **)(lVar13 + -0x98) = &UNK_11084b440;
    *(long *)(lVar13 + -0x90) = lVar10;
    func_0x00010bf97b00(lVar15);
    _objc_release(lVar8);
    _objc_release(lVar15);
    lVar15 = lVar10;
    func_0x00010bf0e540(lVar10);
    _objc_retainAutoreleasedReturnValue();
    lVar8 = lVar15;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR_PTR_112706340;
    *(long *)(lVar13 + -0xc0) = lVar10;
    *(undefined **)(lVar13 + -0xb8) = puVar2;
    _objc_msgSendSuper2(lVar13 + -0xc0,PTR_s_setText__1126625f0,lVar8);
    _objc_release(lVar8);
    _objc_release(lVar15);
  }
  else {
    func_0x00010c212f40(lVar10);
  }
  _objc_release(uVar11);
  return;
}



/* Entry: 10b2cc5f4; end: 10b2ccb83; -[TTTAttributedLabel drawBackground:inRect:context:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b2cc5f4(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7,undefined *param_8)

{
  undefined1 *puVar1;
  double *pdVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  double *pdVar11;
  long lVar12;
  long lVar13;
  double *pdVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  undefined *puVar18;
  undefined *unaff_x28;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double unaff_d13;
  double unaff_d14;
  double unaff_d15;
  double dVar27;
  undefined1 auStack_300 [8];
  undefined1 *puStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  undefined1 *puStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  double dStack_2c0;
  undefined *puStack_2b8;
  double dStack_2b0;
  double dStack_2a8;
  double dStack_2a0;
  double dStack_298;
  double *pdStack_290;
  double dStack_288;
  long lStack_280;
  long lStack_278;
  double dStack_270;
  float fStack_268;
  undefined4 uStack_264;
  double dStack_260;
  double adStack_258 [2];
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  double dStack_208;
  double dStack_200;
  double adStack_1f8 [2];
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_130 [128];
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar16 = param_7;
  puStack_2b8 = param_8;
  dStack_2a0 = param_1;
  dStack_298 = param_2;
  _CTFrameGetLines();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar16;
  func_0x00010bf529e0();
  puStack_2f8 = auStack_300;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  puStack_2e0 = auStack_300 + lVar12 * -0x10;
  _CTFrameGetLineOrigins(param_7,0,0);
  func_0x00010c26c200(param_5);
  dVar19 = param_1;
  func_0x00010bf20c00(param_5);
  func_0x00010c0def20(param_5);
  dVar20 = param_2;
  dVar23 = param_3;
  dVar24 = param_4;
  func_0x00010c26c660(dVar19,param_5);
  lStack_1e8 = 0;
  adStack_1f8[1] = 0.0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  _objc_retain(lVar16);
  pdVar11 = adStack_1f8 + 1;
  puVar7 = auStack_130;
  lVar12 = lVar16;
  lStack_2f0 = lVar16;
  func_0x00010bf52a60();
  lStack_2d8 = lVar12;
  if (lVar12 != 0) {
    param_7 = 0;
    dVar19 = param_1 - dVar20;
    lStack_2e8 = *plStack_1e0;
    dStack_2c0 = dVar19;
    do {
      param_5 = 0;
      do {
        dVar25 = dVar19;
        if (*plStack_1e0 != lStack_2e8) {
          _objc_enumerationMutation(lStack_2f0);
          dVar25 = dVar19;
        }
        lVar12 = *(long *)(lStack_1e8 + param_5 * 8);
        dStack_200 = 0.0;
        adStack_1f8[0] = 0.0;
        dStack_208 = 0.0;
        lStack_2d0 = param_5;
        _CTLineGetTypographicBounds(lVar12,adStack_1f8,&dStack_200,&dStack_208);
        param_1 = adStack_1f8[0];
        dVar20 = dStack_200;
        param_2 = dStack_208;
        pdStack_290 = (double *)(puStack_2e0 + param_7 * 0x10);
        param_3 = *pdStack_290;
        param_4 = pdStack_290[1];
        dVar19 = 0.0;
        lStack_248 = 0;
        adStack_258[1] = 0.0;
        uStack_238 = 0;
        plStack_240 = (long *)0x0;
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        lStack_2c8 = param_7;
        dStack_288 = dVar25;
        lStack_280 = lVar12;
        _CTLineGetGlyphRuns();
        _objc_retainAutoreleasedReturnValue();
        lStack_278 = lVar12;
        func_0x00010bf52a60();
        if (lVar12 != 0) {
          unaff_d13 = dStack_298 + param_4;
          unaff_d14 = dStack_2a0 + param_3;
          dVar19 = param_1 + dVar20;
          unaff_d15 = dVar19 + param_2;
          lVar16 = *plStack_240;
          dVar25 = dStack_298;
          dStack_2b0 = unaff_d14;
          dStack_2a8 = unaff_d13;
          do {
            lVar13 = 0;
            do {
              dVar20 = dVar19;
              param_2 = dVar25;
              param_1 = dVar23;
              param_3 = dVar24;
              if (*plStack_240 != lVar16) {
                _objc_enumerationMutation(lStack_278);
                dVar20 = dVar19;
                param_2 = dVar25;
                param_1 = dVar23;
                param_3 = dVar24;
              }
              unaff_x27 = *(undefined **)(lStack_248 + lVar13 * 8);
              unaff_x24 = unaff_x27;
              _CTRunGetAttributes();
              _objc_retainAutoreleasedReturnValue();
              unaff_x25 = unaff_x24;
              func_0x00010c0dff20();
              unaff_x26 = unaff_x24;
              func_0x00010c0dff20();
              puVar17 = unaff_x24;
              func_0x00010c0dff20(unaff_x24);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bdc2aa0();
              param_4 = dVar20;
              dVar25 = param_2;
              dVar23 = param_1;
              dVar24 = param_3;
              _objc_release(puVar17);
              puVar17 = unaff_x24;
              func_0x00010c0dff20(unaff_x24);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              dVar19 = param_4;
              _objc_release(puVar17);
              unaff_x28 = unaff_x24;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010bfb2c80();
              uStack_264 = SUB84(dVar19,0);
              _objc_release(unaff_x28);
              if (unaff_x25 != (undefined *)0x0 || unaff_x26 != (undefined *)0x0) {
                fStack_268 = SUB84(param_4,0);
                dStack_260 = 0.0;
                adStack_258[0] = 0.0;
                lVar9 = 0;
                _CTRunGetTypographicBounds(unaff_x27,0,0,adStack_258,&dStack_260,0);
                param_3 = param_3 + param_2 + dVar19;
                dVar20 = dVar20 + adStack_258[0] + dStack_260;
                dVar19 = param_1 + dVar20;
                puVar17 = unaff_x27;
                _CTRunGetStringRange(unaff_x27);
                _CTRunGetStatus();
                if ((int)unaff_x27 != 1) {
                  lVar9 = 0;
                }
                _CTLineGetOffsetForStringIndex(lStack_280,puVar17 + lVar9,0);
                param_2 = ((dVar20 + dStack_2a0 + *pdStack_290) - param_2) - dStack_2a0;
                param_1 = (((dStack_2c0 + dStack_298 + pdStack_290[1]) - param_1) - dStack_298) -
                          dStack_260;
                dVar23 = param_2;
                dStack_270 = dVar19;
                _CGRectGetWidth(param_2,param_1,param_3,dVar19);
                dVar20 = dStack_288;
                dVar19 = unaff_d14;
                _CGRectGetWidth(unaff_d14,unaff_d13,dStack_288,unaff_d15);
                if (dVar19 < dVar23) {
                  _CGRectGetWidth(unaff_d14,unaff_d13,dVar20,unaff_d15);
                  param_3 = unaff_d14;
                }
                unaff_x28 = puStack_2b8;
                puVar17 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
                param_4 = (double)fStack_268;
                dVar19 = param_2;
                dVar25 = param_1;
                dVar23 = param_3;
                dVar24 = dStack_270;
                _CGRectInset();
                _CGRectInset();
                func_0x00010bf19a00();
                _objc_retainAutoreleasedReturnValue();
                unaff_x27 = puVar17;
                _objc_retainAutorelease();
                func_0x00010bdc1040();
                _objc_release(puVar17);
                _CGContextSetLineJoin(unaff_x28,1);
                if (unaff_x26 != (undefined *)0x0) {
                  _CGContextSetFillColorWithColor(unaff_x28,unaff_x26);
                  _CGContextAddPath(unaff_x28,unaff_x27);
                  _CGContextFillPath(unaff_x28);
                }
                unaff_d13 = dStack_2a8;
                unaff_d14 = dStack_2b0;
                dVar20 = unaff_d15;
                if (unaff_x25 != (undefined *)0x0) {
                  _CGContextSetStrokeColorWithColor(unaff_x28,unaff_x25);
                  _CGContextAddPath(unaff_x28,unaff_x27);
                  _CGContextStrokePath(unaff_x28);
                }
              }
              _objc_release(unaff_x24);
              lVar13 = lVar13 + 1;
            } while (lVar12 != lVar13);
            lVar12 = lStack_278;
            func_0x00010bf52a60();
          } while (lVar12 != 0);
        }
        _objc_release(lStack_278);
        param_7 = lStack_2c8 + 1;
        param_5 = lStack_2d0 + 1;
      } while (param_5 != lStack_2d8);
      pdVar11 = adStack_1f8 + 1;
      puVar7 = auStack_130;
      lVar12 = lStack_2f0;
      func_0x00010bf52a60();
      lStack_2d8 = lVar12;
    } while (lVar12 != 0);
  }
  lVar12 = lStack_2f0;
  _objc_release(lStack_2f0);
  puVar1 = puStack_2f8;
  lVar13 = lVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  *(double *)(puVar1 + -0xa0) = unaff_d15;
  *(double *)(puVar1 + -0x98) = unaff_d14;
  *(double *)(puVar1 + -0x90) = unaff_d13;
  *(double *)(puVar1 + -0x88) = param_4;
  *(double *)(puVar1 + -0x80) = param_3;
  *(double *)(puVar1 + -0x78) = param_2;
  *(double *)(puVar1 + -0x70) = dVar20;
  *(double *)(puVar1 + -0x68) = param_1;
  *(undefined **)(puVar1 + -0x60) = unaff_x28;
  *(undefined **)(puVar1 + -0x58) = unaff_x27;
  *(undefined **)(puVar1 + -0x50) = unaff_x26;
  *(undefined **)(puVar1 + -0x48) = unaff_x25;
  *(undefined **)(puVar1 + -0x40) = unaff_x24;
  *(long *)(puVar1 + -0x38) = lVar16;
  *(long *)(puVar1 + -0x30) = param_5;
  *(long *)(puVar1 + -0x28) = param_7;
  *(long *)(puVar1 + -0x20) = lVar12;
  *(undefined1 **)(puVar1 + -0x18) = auStack_300;
  *(undefined1 **)(puVar1 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar1 + -8) = FUN_10b2ccb84;
  *(long *)(puVar1 + -0x290) = lVar13;
  *(undefined8 *)(puVar1 + -0xb0) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
  pdVar14 = pdVar11;
  _CTFrameGetLines();
  _objc_retainAutoreleasedReturnValue();
  pdVar2 = pdVar14;
  func_0x00010bf529e0();
  *(undefined1 **)(puVar1 + -0x2e0) = puVar1 + -0x2e0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  *(undefined1 **)(puVar1 + -0x2c8) = puVar1 + (long)pdVar2 * -0x10 + -0x2e0;
  _CTFrameGetLineOrigins(pdVar11,0,0);
  *(undefined8 *)(puVar1 + -0x1c8) = 0;
  *(undefined8 *)(puVar1 + -0x1d0) = 0;
  *(undefined8 *)(puVar1 + -0x1b8) = 0;
  *(undefined8 *)(puVar1 + -0x1c0) = 0;
  *(undefined8 *)(puVar1 + -0x1e8) = 0;
  *(undefined8 *)(puVar1 + -0x1f0) = 0;
  *(undefined8 *)(puVar1 + -0x1d8) = 0;
  *(undefined8 *)(puVar1 + -0x1e0) = 0;
  _objc_retain(pdVar14);
  puVar10 = puVar1 + -0x1f0;
  *(double **)(puVar1 + -0x2d8) = pdVar14;
  pdVar2 = pdVar14;
  func_0x00010bf52a60();
  *(double **)(puVar1 + -0x2c0) = pdVar2;
  if (pdVar2 != (double *)0x0) {
    pdVar11 = (double *)0x0;
    *(undefined8 *)(puVar1 + -0x2d0) = **(undefined8 **)(puVar1 + -0x1e0);
    pdVar14 = *(double **)PTR__kCTSuperscriptAttributeName_11034a148;
    *(undefined8 *)(puVar1 + -0x2a0) = *(undefined8 *)PTR__kCTForegroundColorAttributeName_11034a128
    ;
    dVar20 = -0.4699999988079071;
    *(undefined8 *)(puVar1 + -0x2a8) = 0xbfde147ae0000000;
    *(double **)(puVar1 + -0x298) = pdVar14;
    do {
      lVar16 = 0;
      do {
        if (**(long **)(puVar1 + -0x1e0) != *(long *)(puVar1 + -0x2d0)) {
          _objc_enumerationMutation(*(undefined8 *)(puVar1 + -0x2d8));
        }
        *(long *)(puVar1 + -0x2b8) = lVar16;
        puVar17 = *(undefined **)(*(long *)(puVar1 + -0x1e8) + lVar16 * 8);
        *(undefined8 *)(puVar1 + -0x200) = 0;
        *(undefined8 *)(puVar1 + -0x1f8) = 0;
        *(undefined8 *)(puVar1 + -0x208) = 0;
        _CTLineGetTypographicBounds(puVar17,puVar1 + -0x1f8,puVar1 + -0x200,puVar1 + -0x208);
        *(double *)(puVar1 + -0x270) = dVar20;
        dVar25 = *(double *)(puVar1 + -0x200);
        dVar19 = *(double *)(puVar1 + -0x1f8);
        dVar26 = *(double *)(puVar1 + -0x208);
        *(double **)(puVar1 + -0x2b0) = pdVar11;
        pdVar11 = (double *)(*(long *)(puVar1 + -0x2c8) + (long)pdVar11 * 0x10);
        dVar23 = *pdVar11;
        dVar24 = pdVar11[1];
        *(double **)(puVar1 + -0x288) = pdVar11;
        *(undefined **)(puVar1 + -0x280) = puVar17;
        dVar20 = 0.0;
        *(undefined8 *)(puVar1 + -0x248) = 0;
        *(undefined8 *)(puVar1 + -0x250) = 0;
        *(undefined8 *)(puVar1 + -0x238) = 0;
        *(undefined8 *)(puVar1 + -0x240) = 0;
        *(undefined8 *)(puVar1 + -0x228) = 0;
        *(undefined8 *)(puVar1 + -0x230) = 0;
        *(undefined8 *)(puVar1 + -0x218) = 0;
        *(undefined8 *)(puVar1 + -0x220) = 0;
        _CTLineGetGlyphRuns();
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)(puVar1 + -0x278) = puVar17;
        func_0x00010bf52a60();
        if (puVar17 != (undefined *)0x0) {
          dVar20 = dVar19 + dVar25;
          dVar26 = dVar20 + dVar26;
          *(undefined8 *)(puVar1 + -0x268) = **(undefined8 **)(puVar1 + -0x240);
          do {
            unaff_x24 = (undefined *)0x0;
            do {
              if (**(long **)(puVar1 + -0x240) != *(long *)(puVar1 + -0x268)) {
                _objc_enumerationMutation(*(undefined8 *)(puVar1 + -0x278));
              }
              puVar18 = *(undefined **)(*(long *)(puVar1 + -0x248) + (long)unaff_x24 * 8);
              unaff_x25 = puVar18;
              _CTRunGetAttributes();
              _objc_retainAutoreleasedReturnValue();
              puVar3 = unaff_x25;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              puVar4 = puVar3;
              func_0x00010bf1f3c0();
              _objc_release(puVar3);
              puVar3 = unaff_x25;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = puVar3;
              func_0x00010c067fc0();
              _objc_release(puVar3);
              if ((int)puVar4 != 0) {
                *(undefined8 *)(puVar1 + -0x260) = 0;
                *(undefined8 *)(puVar1 + -600) = 0;
                lVar16 = 0;
                _CTRunGetTypographicBounds(puVar18,0,0,puVar1 + -600,puVar1 + -0x260,0);
                dVar19 = *(double *)(puVar1 + -600);
                dVar25 = dVar19 + *(double *)(puVar1 + -0x260);
                puVar3 = puVar18;
                _CTRunGetStringRange(puVar18);
                _CTRunGetStatus();
                if ((int)puVar18 != 1) {
                  lVar16 = 0;
                }
                _CTLineGetOffsetForStringIndex(*(undefined8 *)(puVar1 + -0x280),puVar3 + lVar16,0);
                dVar19 = dVar19 + **(double **)(puVar1 + -0x288);
                dVar27 = (*(double **)(puVar1 + -0x288))[1] - *(double *)(puVar1 + -0x260);
                dVar21 = dVar19;
                _CGRectGetWidth(dVar19,dVar27,dVar20,dVar25);
                dVar22 = dVar23;
                _CGRectGetWidth(dVar23,dVar24,*(undefined8 *)(puVar1 + -0x270),dVar26);
                if (dVar22 < dVar21) {
                  dVar20 = dVar23;
                  _CGRectGetWidth(dVar23,dVar24,*(undefined8 *)(puVar1 + -0x270),dVar26);
                }
                if (unaff_x26 == (undefined *)0xffffffffffffffff) {
                  dVar21 = *(double *)(puVar1 + -600);
                  dVar22 = 0.25;
LAB_10b2cceb4:
                  dVar27 = dVar27 + dVar22 * dVar21;
                }
                else if (unaff_x26 == (undefined *)0x1) {
                  dVar21 = *(double *)(puVar1 + -600);
                  dVar22 = *(double *)(puVar1 + -0x2a8);
                  goto LAB_10b2cceb4;
                }
                unaff_x26 = unaff_x25;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                if (unaff_x26 == (undefined *)0x0) {
                  _CGContextSetGrayStrokeColor(0,0x3ff0000000000000,puVar7);
                }
                else {
                  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
                  _objc_opt_class(PTR__OBJC_CLASS___UIColor_1126aea70);
                  puVar4 = unaff_x26;
                  _objc_opt_isKindOfClass(unaff_x26,puVar3);
                  puVar3 = unaff_x26;
                  if (((ulong)puVar4 & 1) != 0) {
                    _objc_retainAutorelease(unaff_x26);
                    func_0x00010bdc0fe0();
                  }
                  _CGContextSetStrokeColorWithColor(puVar7,puVar3);
                }
                uVar15 = *(undefined8 *)(puVar1 + -0x290);
                uVar8 = uVar15;
                func_0x00010bfb3a80(uVar15);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar8;
                func_0x00010bfb3f20();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfb3a80(uVar15);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c102de0();
                uVar6 = uVar5;
                _CTFontCreateWithName(uVar5,0);
                _objc_release(uVar15);
                _objc_release(uVar5);
                _objc_release(uVar8);
                _CTFontGetUnderlineThickness(uVar6);
                _CGContextSetLineWidth(puVar7);
                _CFRelease(uVar6);
                lVar16 = (long)(dVar25 * 0.5 + dVar27);
                _CGContextMoveToPoint(dVar19,lVar16,puVar7);
                dVar20 = dVar19 + dVar20;
                _CGContextAddLineToPoint(dVar20,lVar16,puVar7);
                _CGContextStrokePath(puVar7);
                _objc_release(unaff_x26);
                pdVar14 = *(double **)(puVar1 + -0x298);
              }
              _objc_release(unaff_x25);
              unaff_x24 = unaff_x24 + 1;
            } while (puVar17 != unaff_x24);
            puVar17 = *(undefined **)(puVar1 + -0x278);
            func_0x00010bf52a60();
          } while (puVar17 != (undefined *)0x0);
        }
        _objc_release(*(undefined8 *)(puVar1 + -0x278));
        pdVar11 = (double *)(*(long *)(puVar1 + -0x2b0) + 1);
        lVar16 = *(long *)(puVar1 + -0x2b8) + 1;
      } while (lVar16 != *(long *)(puVar1 + -0x2c0));
      puVar10 = puVar1 + -0x1f0;
      lVar12 = *(long *)(puVar1 + -0x2d8);
      func_0x00010bf52a60();
      *(long *)(puVar1 + -0x2c0) = lVar12;
    } while (lVar12 != 0);
  }
  lVar9 = *(long *)(puVar1 + -0x2d8);
  _objc_release(lVar9);
  lVar13 = *(long *)(puVar1 + -0x2e0);
  lVar12 = lVar9;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar1 + -0xb0)) {
    return;
  }
  ___stack_chk_fail();
  *(undefined **)(lVar13 + -0x50) = unaff_x26;
  *(undefined **)(lVar13 + -0x48) = unaff_x25;
  *(undefined **)(lVar13 + -0x40) = unaff_x24;
  *(long *)(lVar13 + -0x38) = lVar16;
  *(double **)(lVar13 + -0x30) = pdVar14;
  *(double **)(lVar13 + -0x28) = pdVar11;
  *(long *)(lVar13 + -0x20) = lVar9;
  *(undefined1 **)(lVar13 + -0x18) = puVar1 + -0x2e0;
  *(undefined1 **)(lVar13 + -0x10) = puVar1 + -0x10;
  *(code **)(lVar13 + -8) = FUN_10b2cd0c0;
  _objc_retain(puVar10);
  puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  puVar7 = puVar10;
  _objc_opt_isKindOfClass(puVar10,puVar17);
  if (((ulong)puVar7 & 1) == 0) {
    func_0x00010c16b720(lVar12);
    func_0x00010c1628e0(lVar12);
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdf80(lVar12);
    _objc_release(puVar17);
    lVar16 = lVar12;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar16 != 0) {
      lVar9 = lVar12;
      func_0x00010bf92a60();
      _objc_release(lVar16);
      if (lVar9 != 0) {
        _objc_initWeak(lVar13 + -0x58,lVar12);
        uVar8 = 0;
        _dispatch_get_global_queue(0,0);
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)(lVar13 + -0x88) = puVar17;
        *(undefined8 *)(lVar13 + -0x80) = 0xc2000000;
        *(code **)(lVar13 + -0x78) = FUN_10b2cd328;
        *(undefined **)(lVar13 + -0x70) = &UNK_110841fb0;
        _objc_copyWeak(lVar13 + -0x60,lVar13 + -0x58);
        _objc_retain(puVar10);
        *(undefined1 **)(lVar13 + -0x68) = puVar10;
        func_0x000107c27d8c(uVar8,lVar13 + -0x88);
        _objc_release(uVar8);
        _objc_release(*(undefined8 *)(lVar13 + -0x68));
        _objc_destroyWeak(lVar13 + -0x60);
        _objc_destroyWeak(lVar13 + -0x58);
      }
    }
    lVar16 = lVar12;
    func_0x00010bf0e540(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar12;
    func_0x00010bf0e540(lVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    *(undefined **)(lVar13 + -0xb0) = puVar17;
    *(undefined8 *)(lVar13 + -0xa8) = 0xc2000000;
    *(undefined8 *)(lVar13 + -0xa0) = 0x10b2cd538;
    *(undefined **)(lVar13 + -0x98) = &UNK_11084b440;
    *(long *)(lVar13 + -0x90) = lVar12;
    func_0x00010bf97b00(lVar16);
    _objc_release(lVar9);
    _objc_release(lVar16);
    lVar16 = lVar12;
    func_0x00010bf0e540(lVar12);
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar16;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR_PTR_112706340;
    *(long *)(lVar13 + -0xc0) = lVar12;
    *(undefined **)(lVar13 + -0xb8) = puVar17;
    _objc_msgSendSuper2(lVar13 + -0xc0,PTR_s_setText__1126625f0,lVar9);
    _objc_release(lVar9);
    _objc_release(lVar16);
  }
  else {
    func_0x00010c212f40(lVar12);
  }
  _objc_release(puVar10);
  return;
}



/* Entry: 10b2ccb84; end: 10b2cd0bf; -[TTTAttributedLabel drawStrike:inRect:context:] */

/* WARNING: Type propagation algorithm not settling */

void FUN_10b2ccb84(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  double *pdVar8;
  undefined8 uVar9;
  double *pdVar10;
  long lVar11;
  long unaff_x23;
  long lVar12;
  long unaff_x24;
  ulong unaff_x25;
  ulong unaff_x26;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  double dVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined1 *puStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  undefined1 **ppuStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  double dStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 uStack_290;
  undefined1 **ppuStack_288;
  long lStack_280;
  long lStack_278;
  undefined1 *puStack_270;
  long lStack_268;
  double dStack_260;
  double adStack_258 [2];
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  double dStack_208;
  double dStack_200;
  double adStack_1f8 [2];
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  long lStack_b0;
  
  lStack_b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar11 = param_3;
  uStack_290 = param_1;
  _CTFrameGetLines();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar11;
  func_0x00010bf529e0();
  puStack_2e0 = (undefined1 *)&puStack_2e0;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  ppuStack_2c8 = &puStack_2e0 + lVar12 * -2;
  _CTFrameGetLineOrigins(param_3,0,0);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  adStack_1f8[1] = 0.0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(lVar11);
  pdVar10 = adStack_1f8 + 1;
  lVar12 = lVar11;
  lStack_2d8 = lVar11;
  func_0x00010bf52a60();
  lStack_2c0 = lVar12;
  if (lVar12 != 0) {
    param_3 = 0;
    lStack_2d0 = *plStack_1e0;
    lVar11 = *(long *)PTR__kCTSuperscriptAttributeName_11034a148;
    uStack_2a0 = *(undefined8 *)PTR__kCTForegroundColorAttributeName_11034a128;
    puVar14 = (undefined1 *)0xbfde147ae0000000;
    dStack_2a8 = -0.4699999988079071;
    lStack_298 = lVar11;
    do {
      unaff_x23 = 0;
      do {
        puVar15 = puVar14;
        if (*plStack_1e0 != lStack_2d0) {
          _objc_enumerationMutation(lStack_2d8);
          puVar15 = puVar14;
        }
        lVar12 = *(long *)(lStack_1e8 + unaff_x23 * 8);
        dStack_200 = 0.0;
        adStack_1f8[0] = 0.0;
        dStack_208 = 0.0;
        lStack_2b8 = unaff_x23;
        _CTLineGetTypographicBounds(lVar12,adStack_1f8,&dStack_200,&dStack_208);
        dVar20 = adStack_1f8[0];
        dVar21 = dStack_200;
        dVar19 = dStack_208;
        ppuStack_288 = ppuStack_2c8 + param_3 * 2;
        puVar17 = *ppuStack_288;
        puVar18 = ppuStack_288[1];
        puVar14 = (undefined1 *)0x0;
        lStack_248 = 0;
        adStack_258[1] = 0.0;
        uStack_238 = 0;
        plStack_240 = (long *)0x0;
        uStack_228 = 0;
        uStack_230 = 0;
        uStack_218 = 0;
        uStack_220 = 0;
        lStack_2b0 = param_3;
        lStack_280 = lVar12;
        puStack_270 = puVar15;
        _CTLineGetGlyphRuns();
        _objc_retainAutoreleasedReturnValue();
        lStack_278 = lVar12;
        func_0x00010bf52a60();
        if (lVar12 != 0) {
          puVar14 = (undefined1 *)(dVar20 + dVar21);
          dVar19 = (double)puVar14 + dVar19;
          lStack_268 = *plStack_240;
          do {
            unaff_x24 = 0;
            do {
              if (*plStack_240 != lStack_268) {
                _objc_enumerationMutation(lStack_278);
              }
              uVar13 = *(ulong *)(lStack_248 + unaff_x24 * 8);
              unaff_x25 = uVar13;
              _CTRunGetAttributes();
              _objc_retainAutoreleasedReturnValue();
              uVar1 = unaff_x25;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              uVar2 = uVar1;
              func_0x00010bf1f3c0();
              _objc_release(uVar1);
              uVar1 = unaff_x25;
              func_0x00010c0dff20();
              _objc_retainAutoreleasedReturnValue();
              unaff_x26 = uVar1;
              func_0x00010c067fc0();
              _objc_release(uVar1);
              if ((int)uVar2 != 0) {
                dStack_260 = 0.0;
                adStack_258[0] = 0.0;
                lVar11 = 0;
                _CTRunGetTypographicBounds(uVar13,0,0,adStack_258,&dStack_260,0);
                dVar20 = adStack_258[0] + dStack_260;
                uVar1 = uVar13;
                dVar21 = adStack_258[0];
                _CTRunGetStringRange(uVar13);
                _CTRunGetStatus();
                if ((int)uVar13 != 1) {
                  lVar11 = 0;
                }
                _CTLineGetOffsetForStringIndex(lStack_280,lVar11 + uVar1,0);
                dVar21 = dVar21 + (double)*ppuStack_288;
                dVar22 = (double)ppuStack_288[1] - dStack_260;
                dVar16 = dVar21;
                _CGRectGetWidth(dVar21,dVar22,puVar14,dVar20);
                puVar15 = puVar17;
                _CGRectGetWidth(puVar17,puVar18,puStack_270,dVar19);
                if ((double)puVar15 < dVar16) {
                  puVar14 = puVar17;
                  _CGRectGetWidth(puVar17,puVar18,puStack_270,dVar19);
                }
                if (unaff_x26 == 0xffffffffffffffff) {
                  dVar16 = 0.25;
LAB_10b2cceb4:
                  dVar22 = dVar22 + dVar16 * adStack_258[0];
                }
                else {
                  dVar16 = dStack_2a8;
                  if (unaff_x26 == 1) goto LAB_10b2cceb4;
                }
                unaff_x26 = unaff_x25;
                func_0x00010c0dff20();
                _objc_retainAutoreleasedReturnValue();
                if (unaff_x26 == 0) {
                  _CGContextSetGrayStrokeColor(0,0x3ff0000000000000,param_4);
                }
                else {
                  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
                  _objc_opt_class(PTR__OBJC_CLASS___UIColor_1126aea70);
                  uVar1 = unaff_x26;
                  _objc_opt_isKindOfClass(unaff_x26,puVar3);
                  uVar2 = unaff_x26;
                  if ((uVar1 & 1) != 0) {
                    _objc_retainAutorelease(unaff_x26);
                    func_0x00010bdc0fe0();
                  }
                  _CGContextSetStrokeColorWithColor(param_4,uVar2);
                }
                uVar9 = uStack_290;
                uVar4 = uStack_290;
                func_0x00010bfb3a80(uStack_290);
                _objc_retainAutoreleasedReturnValue();
                uVar5 = uVar4;
                func_0x00010bfb3f20();
                _objc_retainAutoreleasedReturnValue();
                func_0x00010bfb3a80(uVar9);
                _objc_retainAutoreleasedReturnValue();
                func_0x00010c102de0();
                uVar6 = uVar5;
                _CTFontCreateWithName(uVar5,0);
                _objc_release(uVar9);
                _objc_release(uVar5);
                _objc_release(uVar4);
                _CTFontGetUnderlineThickness(uVar6);
                _CGContextSetLineWidth(param_4);
                _CFRelease(uVar6);
                lVar11 = (long)(dVar20 * 0.5 + dVar22);
                _CGContextMoveToPoint(dVar21,lVar11,param_4);
                puVar14 = (undefined1 *)(dVar21 + (double)puVar14);
                _CGContextAddLineToPoint(puVar14,lVar11,param_4);
                _CGContextStrokePath(param_4);
                _objc_release(unaff_x26);
                lVar11 = lStack_298;
              }
              _objc_release(unaff_x25);
              unaff_x24 = unaff_x24 + 1;
            } while (lVar12 != unaff_x24);
            lVar12 = lStack_278;
            func_0x00010bf52a60();
          } while (lVar12 != 0);
        }
        _objc_release(lStack_278);
        param_3 = lStack_2b0 + 1;
        unaff_x23 = lStack_2b8 + 1;
      } while (unaff_x23 != lStack_2c0);
      pdVar10 = adStack_1f8 + 1;
      lVar12 = lStack_2d8;
      func_0x00010bf52a60();
      lStack_2c0 = lVar12;
    } while (lVar12 != 0);
  }
  lVar12 = lStack_2d8;
  _objc_release(lStack_2d8);
  puVar14 = puStack_2e0;
  lVar7 = lVar12;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_b0) {
    return;
  }
  ___stack_chk_fail();
  *(ulong *)(puVar14 + -0x50) = unaff_x26;
  *(ulong *)(puVar14 + -0x48) = unaff_x25;
  *(long *)(puVar14 + -0x40) = unaff_x24;
  *(long *)(puVar14 + -0x38) = unaff_x23;
  *(long *)(puVar14 + -0x30) = lVar11;
  *(long *)(puVar14 + -0x28) = param_3;
  *(long *)(puVar14 + -0x20) = lVar12;
  *(undefined1 ***)(puVar14 + -0x18) = &puStack_2e0;
  *(undefined1 **)(puVar14 + -0x10) = &stack0xfffffffffffffff0;
  *(code **)(puVar14 + -8) = FUN_10b2cd0c0;
  _objc_retain(pdVar10);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  pdVar8 = pdVar10;
  _objc_opt_isKindOfClass(pdVar10,puVar3);
  if (((ulong)pdVar8 & 1) == 0) {
    func_0x00010c16b720(lVar7);
    func_0x00010c1628e0(lVar7);
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdf80(lVar7);
    _objc_release(puVar3);
    lVar11 = lVar7;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar11 != 0) {
      lVar12 = lVar7;
      func_0x00010bf92a60();
      _objc_release(lVar11);
      if (lVar12 != 0) {
        _objc_initWeak(puVar14 + -0x58,lVar7);
        uVar9 = 0;
        _dispatch_get_global_queue(0,0);
        _objc_retainAutoreleasedReturnValue();
        *(undefined **)(puVar14 + -0x88) = puVar3;
        *(undefined8 *)(puVar14 + -0x80) = 0xc2000000;
        *(code **)(puVar14 + -0x78) = FUN_10b2cd328;
        *(undefined **)(puVar14 + -0x70) = &UNK_110841fb0;
        _objc_copyWeak(puVar14 + -0x60,puVar14 + -0x58);
        _objc_retain(pdVar10);
        *(double **)(puVar14 + -0x68) = pdVar10;
        func_0x000107c27d8c(uVar9,puVar14 + -0x88);
        _objc_release(uVar9);
        _objc_release(*(undefined8 *)(puVar14 + -0x68));
        _objc_destroyWeak(puVar14 + -0x60);
        _objc_destroyWeak(puVar14 + -0x58);
      }
    }
    lVar11 = lVar7;
    func_0x00010bf0e540(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar7;
    func_0x00010bf0e540(lVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    *(undefined **)(puVar14 + -0xb0) = puVar3;
    *(undefined8 *)(puVar14 + -0xa8) = 0xc2000000;
    *(undefined8 *)(puVar14 + -0xa0) = 0x10b2cd538;
    *(undefined **)(puVar14 + -0x98) = &UNK_11084b440;
    *(long *)(puVar14 + -0x90) = lVar7;
    func_0x00010bf97b00(lVar11);
    _objc_release(lVar12);
    _objc_release(lVar11);
    lVar11 = lVar7;
    func_0x00010bf0e540(lVar7);
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    *(long *)(puVar14 + -0xc0) = lVar7;
    *(undefined **)(puVar14 + -0xb8) = PTR_PTR_112706340;
    _objc_msgSendSuper2(puVar14 + -0xc0,PTR_s_setText__1126625f0,lVar12);
    _objc_release(lVar12);
    _objc_release(lVar11);
  }
  else {
    func_0x00010c212f40(lVar7);
  }
  _objc_release(pdVar10);
  return;
}



/* Entry: 10b2cd0c0; end: 10b2cd327; -[TTTAttributedLabel setText:] */

void FUN_10b2cd0c0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  if ((uVar2 & 1) == 0) {
    func_0x00010c16b720(param_1);
    func_0x00010c1628e0(param_1);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1bdf80(param_1);
    _objc_release(puVar1);
    lVar3 = param_1;
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    if (lVar3 != 0) {
      lVar4 = param_1;
      func_0x00010bf92a60();
      _objc_release(lVar3);
      if (lVar4 != 0) {
        _objc_initWeak(auStack_58,param_1);
        uVar5 = 0;
        _dispatch_get_global_queue(0,0);
        _objc_retainAutoreleasedReturnValue();
        puStack_88 = puVar1;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_10b2cd328;
        puStack_70 = &UNK_110841fb0;
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(param_3);
        uStack_68 = param_3;
        func_0x000107c27d8c(uVar5,&puStack_88);
        _objc_release(uVar5);
        _objc_release(uStack_68);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
    }
    lVar3 = param_1;
    func_0x00010bf0e540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010bf0e540(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    puStack_b0 = puVar1;
    uStack_a8 = 0xc2000000;
    uStack_a0 = 0x10b2cd538;
    puStack_98 = &UNK_11084b440;
    lStack_90 = param_1;
    func_0x00010bf97b00(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar3);
    lVar3 = param_1;
    func_0x00010bf0e540(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c25cd40();
    _objc_retainAutoreleasedReturnValue();
    puStack_b8 = PTR_PTR_112706340;
    lStack_c0 = param_1;
    _objc_msgSendSuper2(&lStack_c0,PTR_s_setText__1126625f0,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
  }
  else {
    func_0x00010c212f40(param_1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10b2cd328; end: 10b2cd5e3;  */

void FUN_10b2cd328(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  ulong uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  func_0x00010bf637a0();
  _objc_retainAutoreleasedReturnValue();
  if ((uVar2 != 0) &&
     (uVar3 = uVar2,
     _objc_opt_respondsToSelector(uVar2,PTR_s_matchesInString_options_range__11260e0e8),
     (uVar3 & 1) != 0)) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c25cd40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(*(undefined8 *)(param_1 + 0x20));
    uVar3 = uVar2;
    func_0x00010c0c1b40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    uVar5 = uVar3;
    func_0x00010bf529e0();
    if (uVar5 != 0) {
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0xc2000000;
      uStack_68 = 0x10b2cd464;
      puStack_60 = &UNK_110848ba8;
      uVar4 = *(undefined8 *)(param_1 + 0x20);
      uStack_58 = uVar1;
      _objc_retain(uVar4);
      uStack_50 = uVar4;
      _objc_retain(uVar3);
      uStack_48 = uVar3;
      func_0x000107c27da4(PTR___dispatch_main_q_11034be20,&puStack_78);
      _objc_release(uStack_48);
      _objc_release(uStack_50);
    }
    _objc_release(uVar3);
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2cd5e4; end: 10b2cd717; -[TTTAttributedLabel setText:afterInheritingLabelAttributesAndConfiguringWithBlock:] */

void FUN_10b2cd5e4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
  uVar3 = param_1;
  if ((uVar2 & 1) == 0) {
    func_0x00010bff4f40(puVar1);
    FUN_10b2cd718(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60(puVar1);
    func_0x00010bef6f40(puVar1);
  }
  else {
    FUN_10b2cd718(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c04e840(puVar1);
  }
  _objc_release(uVar3);
  puVar4 = puVar1;
  if (param_4 != (undefined *)0x0) {
    puVar4 = param_4;
    (**(code **)(param_4 + 0x10))(param_4,puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  func_0x00010c212f20(param_1);
  _objc_release(puVar4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2cd718; end: 10b2cdcc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2cd718(double param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  long lVar12;
  double dVar13;
  undefined1 uStack_1c1;
  double dStack_1c0;
  double dStack_1b8;
  long lStack_1b0;
  double dStack_1a8;
  double dStack_1a0;
  double dStack_198;
  undefined1 uStack_189;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined1 *puStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined1 *puStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  double *pdStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  double *pdStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  double *pdStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  double *pdStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double *pdStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_opt_class();
  if (puVar2 == (undefined *)0x0) {
    uVar3 = param_2;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bfb3f20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_2;
    func_0x00010bfb3a80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c102de0();
    uVar6 = uVar4;
    _CTFontCreateWithName(uVar4,0);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    func_0x00010c1d0560(puVar1);
    _CFRelease(uVar6);
    uVar3 = param_2;
    func_0x00010c26b920(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    func_0x00010c1d0560(puVar1);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0864c0(param_2);
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1);
    _objc_release(puVar2);
    uVar3 = param_2;
    func_0x00010c26b7a0();
    uStack_189 = (undefined1)(0x10200 >> (ulong)((uint)(uVar3 << 3) & 0x18));
    if (2 < uVar3) {
      uStack_189 = 4;
    }
    func_0x00010c08dd20(param_2);
    dStack_198 = param_1;
    func_0x00010c0ce480(param_2);
    dVar13 = param_1;
    func_0x00010c0992c0(param_2);
    param_1 = param_1 * dVar13;
    dStack_1a0 = param_1;
    func_0x00010c0c3520(param_2);
    dVar13 = param_1;
    func_0x00010c0992c0(param_2);
    param_1 = param_1 * dVar13;
    uVar3 = param_2;
    dStack_1a8 = param_1;
    func_0x00010bfb3a80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c099280();
    uVar4 = param_2;
    dVar13 = param_1;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ab40();
    param_1 = param_1 - dVar13;
    uVar5 = param_2;
    func_0x00010bfb3a80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf6e320();
    param_1 = param_1 + dVar13;
    lVar12 = (long)param_1;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    lStack_1b0 = lVar12;
    func_0x00010c0992c0(param_2);
    dStack_1b8 = param_1;
    func_0x00010bfb17c0(param_2);
    uStack_1c1 = 0;
    uVar3 = param_2;
    dStack_1c0 = param_1;
    func_0x00010c0def20();
    if (uVar3 == 1) {
      uVar3 = param_2;
      func_0x00010c099180();
      uStack_1c1 = (undefined1)uVar3;
      if (5 < uVar3) {
        uStack_1c1 = 0;
      }
    }
    puStack_178 = &uStack_189;
    uStack_188 = 0;
    uStack_180 = 1;
    uStack_170 = 6;
    puStack_160 = &uStack_1c1;
    uStack_168 = 1;
    uStack_158 = 10;
    pdStack_148 = &dStack_198;
    uStack_150 = 8;
    uStack_140 = 0xf;
    pdStack_130 = &dStack_1a0;
    uStack_138 = 8;
    uStack_128 = 0xe;
    pdStack_118 = &dStack_1a8;
    uStack_120 = 8;
    uStack_110 = 0x10;
    plStack_100 = &lStack_1b0;
    uStack_108 = 8;
    uStack_f8 = 7;
    pdStack_e8 = &dStack_1b8;
    uStack_f0 = 8;
    uStack_e0 = 1;
    pdStack_d0 = &dStack_1c0;
    uStack_d8 = 8;
    uStack_80 = 0;
    uStack_88 = 0;
    uStack_70 = 0;
    uStack_78 = 0;
    uStack_a0 = 0;
    uStack_a8 = 0;
    uStack_90 = 0;
    uStack_98 = 0;
    uStack_c0 = 0;
    uStack_c8 = 0;
    uStack_b0 = 0;
    uStack_b8 = 0;
    puVar7 = &uStack_188;
    param_3 = 0xc;
    _CTParagraphStyleCreate(puVar7);
    func_0x00010c1d0560(puVar1);
    _CFRelease(puVar7);
  }
  else {
    uVar3 = param_2;
    func_0x00010c26b920(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1);
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0864c0(param_2);
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(puVar1);
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00);
    func_0x00010c26b7a0(param_2);
    func_0x00010c166c00(puVar2);
    func_0x00010c08dd20(param_2);
    func_0x00010c1bdcc0(puVar2);
    func_0x00010c0ce480(param_2);
    if (0.0 < param_1) {
      func_0x00010c0ce480();
      func_0x00010c1c82e0(puVar2);
    }
    else {
      uVar3 = param_2;
      func_0x00010bfb3a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c099280();
      dVar13 = param_1;
      func_0x00010c0992c0(param_2);
      param_1 = param_1 * dVar13;
      func_0x00010c1c82e0(puVar2);
      _objc_release(uVar3);
    }
    func_0x00010c0c3520(param_2);
    if (0.0 < param_1) {
      func_0x00010c0c3520();
      func_0x00010c1c3ba0(puVar2);
    }
    else {
      uVar3 = param_2;
      func_0x00010bfb3a80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c099280();
      dVar13 = param_1;
      func_0x00010c0992c0(param_2);
      func_0x00010c1c3ba0(param_1 * dVar13,puVar2);
      _objc_release(uVar3);
    }
    func_0x00010c0992c0(param_2);
    func_0x00010c1bdc00(puVar2);
    func_0x00010bfb17c0(param_2);
    func_0x00010c19d260(puVar2);
    func_0x00010bfb17a0(puVar2);
    func_0x00010c1a75e0(puVar2);
    uVar3 = param_2;
    func_0x00010c0def20();
    if (uVar3 == 1) {
      func_0x00010c099180(param_2);
    }
    func_0x00010c1bdb00(puVar2);
    func_0x00010c1d0560(puVar1);
    _objc_release(puVar2);
  }
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puVar11 = puVar1;
  func_0x00010bf72020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  lVar12 = (long)_DAT_11278e5bc;
  _objc_retain(puVar11);
  uVar8 = *(undefined8 *)(param_2 + lVar12);
  *(undefined **)(param_2 + lVar12) = puVar11;
  _objc_release(uVar8);
  if (*(long *)(param_2 + lVar12) != 0) {
    uVar3 = param_2;
    func_0x00010bef0c20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    if (uVar4 != 0) {
      uVar3 = param_2;
      func_0x00010bfeb8c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar3 == 0) {
        uVar3 = param_2;
        func_0x00010bf0e540(param_2);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bf51e00();
        func_0x00010c1abb60(param_2);
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
      uVar3 = param_2;
      func_0x00010bfeb8c0(param_2);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0d3c80();
      _objc_release(uVar3);
      uVar3 = param_2;
      func_0x00010bef0c00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f2a0();
      if (param_3 == 0) {
LAB_10b2cde70:
        _objc_release(uVar3);
      }
      else {
        uVar5 = param_2;
        func_0x00010bef0c00();
        _objc_retainAutoreleasedReturnValue();
        uVar6 = uVar5;
        func_0x00010c11f2a0();
        uVar9 = param_2;
        func_0x00010bfeb8c0();
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c08fa60();
        _objc_release(uVar9);
        _objc_release(uVar5);
        _objc_release(uVar3);
        if ((param_3 + uVar6) - 1 < uVar10) {
          uVar3 = param_2;
          func_0x00010bef0c20(param_2);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = param_2;
          func_0x00010bef0c00(param_2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11f2a0();
          func_0x00010bef6f40(uVar4);
          _objc_release(uVar5);
          goto LAB_10b2cde70;
        }
      }
      func_0x00010c16b720(param_2);
      func_0x00010c1cbd40(param_2);
      func_0x00010bfb2f20(PTR__OBJC_CLASS___CATransaction_1126b5718);
      _objc_release(uVar4);
      goto LAB_10b2cdefc;
    }
  }
  uVar3 = param_2;
  func_0x00010bfeb8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar3 != 0) {
    uVar3 = param_2;
    func_0x00010bfeb8c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(param_2);
    _objc_release(uVar3);
    func_0x00010c1abb60(param_2);
    func_0x00010c1cbd40(param_2);
  }
LAB_10b2cdefc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 10b2cdcc4; end: 10b2cdf17; -[TTTAttributedLabel setActiveLink:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2cdcc4(ulong param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar8 = (long)_DAT_11278e5bc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar8);
  *(undefined8 *)(param_1 + lVar8) = param_3;
  _objc_release(uVar1);
  if (*(long *)(param_1 + lVar8) != 0) {
    uVar2 = param_1;
    func_0x00010bef0c20();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf529e0();
    _objc_release(uVar2);
    if (uVar3 != 0) {
      uVar2 = param_1;
      func_0x00010bfeb8c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (uVar2 == 0) {
        uVar2 = param_1;
        func_0x00010bf0e540(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010bf51e00();
        func_0x00010c1abb60(param_1);
        _objc_release(uVar3);
        _objc_release(uVar2);
      }
      uVar2 = param_1;
      func_0x00010bfeb8c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x00010c0d3c80();
      _objc_release(uVar2);
      uVar2 = param_1;
      func_0x00010bef0c00(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f2a0();
      if (param_2 == 0) {
LAB_10b2cde70:
        _objc_release(uVar2);
      }
      else {
        uVar4 = param_1;
        func_0x00010bef0c00();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c11f2a0();
        uVar6 = param_1;
        func_0x00010bfeb8c0();
        _objc_retainAutoreleasedReturnValue();
        uVar7 = uVar6;
        func_0x00010c08fa60();
        _objc_release(uVar6);
        _objc_release(uVar4);
        _objc_release(uVar2);
        if ((param_2 + uVar5) - 1 < uVar7) {
          uVar2 = param_1;
          func_0x00010bef0c20(param_1);
          _objc_retainAutoreleasedReturnValue();
          uVar4 = param_1;
          func_0x00010bef0c00(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c11f2a0();
          func_0x00010bef6f40(uVar3);
          _objc_release(uVar4);
          goto LAB_10b2cde70;
        }
      }
      func_0x00010c16b720(param_1);
      func_0x00010c1cbd40(param_1);
      func_0x00010bfb2f20(PTR__OBJC_CLASS___CATransaction_1126b5718);
      _objc_release(uVar3);
      goto LAB_10b2cdefc;
    }
  }
  uVar2 = param_1;
  func_0x00010bfeb8c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar2 != 0) {
    uVar2 = param_1;
    func_0x00010bfeb8c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16b720(param_1);
    _objc_release(uVar2);
    func_0x00010c1abb60(param_1);
    func_0x00010c1cbd40(param_1);
  }
LAB_10b2cdefc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10b2cdf18; end: 10b2cdf5f; -[TTTAttributedLabel setHighlighted:] */

void FUN_10b2cdf18(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112706340;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_setHighlighted__112647c38);
  func_0x00010c1cbd40(param_1);
  return;
}



/* Entry: 10b2cdf60; end: 10b2cdfb3; -[TTTAttributedLabel textColor] */

void FUN_10b2cdf60(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_112706340;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_textColor_112678870);
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined8 *)0x0) {
    func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b2cdfb4; end: 10b2ce047; -[TTTAttributedLabel setTextColor:] */

void FUN_10b2cdfb4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c26b920();
  _objc_retainAutoreleasedReturnValue();
  puStack_38 = PTR_PTR_112706340;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_setTextColor__112662688,param_3);
  _objc_release(param_3);
  if (param_3 != lVar1) {
    func_0x00010c1cbe00(param_1);
    func_0x00010c1cbd40(param_1);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 10b2ce048; end: 10b2ce1e7; -[TTTAttributedLabel textRectForBounds:limitedToNumberOfLines:] */

double FUN_10b2ce048(double param_1,double param_2,double param_3,double param_4,long param_5,
                    undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  long lStack_70;
  undefined *puStack_68;
  
  dVar3 = param_1;
  dVar5 = param_2;
  dVar4 = param_3;
  dVar6 = param_4;
  func_0x00010c26c200();
  param_1 = param_1 + dVar5;
  param_3 = param_3 - (dVar5 + dVar6);
  dVar4 = dVar3 + dVar4;
  param_4 = param_4 - dVar4;
  lVar1 = param_5;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_68 = PTR_PTR_112706340;
    lStack_70 = param_5;
    _objc_msgSendSuper2(param_1,param_2 + dVar3,param_3,param_4,&lStack_70,
                        PTR_s_textRectForBounds_limitedToNumbe_112678bc0,param_7);
  }
  else {
    lVar1 = param_5;
    func_0x00010bfb3a80(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c102de0();
    _objc_release(lVar1);
    if (param_4 <= dVar4 + dVar4) {
      param_4 = dVar4 + dVar4;
    }
    lVar1 = param_5;
    func_0x00010bfb7380(param_5);
    func_0x00010bf0e540(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_5;
    func_0x00010c08fa60();
    dVar3 = param_4;
    _CTFramesetterSuggestFrameSizeWithConstraints(param_3,lVar1,0,lVar2,0,0);
    _objc_release(param_5);
    if ((double)(long)dVar3 < param_4) {
      func_0x00010c298ec0();
    }
  }
  return param_1;
}



/* Entry: 10b2ce1e8; end: 10b2ce76f; -[TTTAttributedLabel drawTextInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2ce1e8(double param_1,double param_2,double param_3,double param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  ulong uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  ulong uStack_a0;
  double dStack_98;
  
  dVar9 = param_1;
  dVar8 = param_2;
  dVar12 = param_3;
  dVar10 = param_4;
  func_0x00010c26c200();
  dVar11 = param_1 + dVar8;
  dVar12 = param_4 - (dVar9 + dVar12);
  uVar1 = param_5;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    puStack_c8 = PTR_PTR_112706340;
    uStack_d0 = param_5;
    _objc_msgSendSuper2(dVar11,param_2 + dVar9,param_3 - (dVar8 + dVar10),dVar12,&uStack_d0,
                        PTR_s_drawTextInRect__11252d418);
    return;
  }
  uVar1 = param_5;
  func_0x00010befdb40();
  if (((int)uVar1 == 0) || (uVar1 = param_5, func_0x00010c0def20(), (long)uVar1 < 1)) {
    uVar6 = 0;
  }
  else {
    uVar1 = param_5;
    func_0x00010c0def20();
    dVar10 = 100000.0;
    dVar8 = dVar10;
    dVar9 = dVar10;
    if ((long)uVar1 < 2) {
      dVar8 = *(double *)(PTR__CGSizeZero_110347620 + 8);
      dVar9 = *(double *)PTR__CGSizeZero_110347620;
    }
    func_0x00010c23d5a0(dVar9,dVar8,param_5);
    func_0x00010bfb68e0(param_5);
    uVar2 = param_5;
    func_0x00010c0def20();
    uVar1 = param_5;
    func_0x00010c0def20();
    dVar8 = dVar9;
    if (1 < (long)uVar1) {
      uVar1 = param_5;
      func_0x00010c099180();
      dVar8 = dVar9 * 1.1557273497909217;
      if (uVar1 != 0) {
        dVar8 = dVar9;
      }
    }
    uVar6 = 0;
    if ((dVar10 * (double)(long)uVar2 < dVar8) && (0.0 < dVar8)) {
      uVar1 = param_5;
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar1;
      func_0x00010bf51e00();
      _objc_release(uVar1);
      uVar1 = param_5;
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar1;
      func_0x00010c0d3c80();
      func_0x00010c08fa60();
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0xc2000000;
      pcStack_b0 = FUN_10b2d0a00;
      puStack_a8 = &UNK_11092afe8;
      uStack_a0 = uVar3;
      dStack_98 = (dVar10 * (double)(long)uVar2) / dVar8;
      _objc_retain(uVar3);
      func_0x00010bf97b00(uVar3);
      _objc_release(uStack_a0);
      func_0x00010c16b720(param_5);
      _objc_release(uVar3);
      _objc_release(uVar1);
    }
  }
  _UIGraphicsGetCurrentContext();
  _CGContextSaveGState();
  uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
  puStack_c0 = *(undefined **)PTR__CGAffineTransformIdentity_110347008;
  puStack_a8 = *(undefined **)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
  pcStack_b0 = *(code **)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
  dStack_98 = *(double *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uStack_a0 = *(ulong *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  _CGContextSetTextMatrix(uVar1,&puStack_c0);
  _CGContextTranslateCTM(0,dVar12,uVar1);
  _CGContextScaleCTM(0x3ff0000000000000,0xbff0000000000000,uVar1);
  uVar2 = param_5;
  func_0x00010bf0e540(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  _objc_release(uVar2);
  func_0x00010c0def20(param_5);
  func_0x00010c26c660(param_1,param_2,param_3,param_4,param_5);
  dVar9 = (dVar12 - param_2) - param_4;
  _CGContextTranslateCTM(dVar11,dVar9,uVar1);
  uVar2 = param_5;
  func_0x00010c229f40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_5;
  if (uVar2 == 0) {
LAB_10b2ce534:
    uVar2 = param_5;
    func_0x00010bfe3500();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar2 != 0) {
      func_0x00010bfe3520(param_5);
      dVar8 = dVar11;
      func_0x00010bfe3540(param_5);
      func_0x00010bfe3500(param_5);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_10b2ce5ac;
    }
  }
  else {
    uVar4 = param_5;
    func_0x00010c074da0();
    _objc_release(uVar2);
    if ((uVar4 & 1) != 0) goto LAB_10b2ce534;
    func_0x00010c229fe0(param_5);
    dVar8 = dVar11;
    func_0x00010c22a0e0(param_5);
    func_0x00010c229f40(param_5);
    _objc_retainAutoreleasedReturnValue();
LAB_10b2ce5ac:
    uVar2 = uVar3;
    _objc_retainAutorelease();
    func_0x00010bdc0fe0();
    _CGContextSetShadowWithColor(dVar11,dVar9,dVar8,uVar1,uVar2);
    _objc_release(uVar3);
  }
  uVar2 = param_5;
  func_0x00010bfe35e0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar2 != 0) {
    uVar3 = param_5;
    func_0x00010c074da0();
    _objc_release(uVar2);
    if ((int)uVar3 != 0) {
      uVar3 = param_5;
      func_0x00010c130460(param_5);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c0d3c80();
      _objc_release(uVar3);
      uVar3 = param_5;
      func_0x00010bfe35e0(param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc0fe0();
      func_0x00010c08fa60(uVar2);
      func_0x00010bef6f20(uVar2);
      _objc_release(uVar3);
      uVar3 = param_5;
      func_0x00010bfe3160();
      if (uVar3 == 0) {
        uVar3 = uVar2;
        _CTFramesetterCreateWithAttributedString(uVar2);
        func_0x00010c1a86e0(param_5);
        _CFRelease(uVar3);
      }
      func_0x00010bfe3160(param_5);
      goto LAB_10b2ce6e8;
    }
  }
  func_0x00010bfb7380(param_5);
  uVar2 = param_5;
  func_0x00010c130460(param_5);
  _objc_retainAutoreleasedReturnValue();
LAB_10b2ce6e8:
  func_0x00010bf898a0(param_1,param_2,param_3,param_4,param_5);
  _objc_release(uVar2);
  if (uVar6 != 0) {
    lVar7 = (long)_DAT_11278e5b0;
    _objc_retain(uVar6);
    uVar5 = *(undefined8 *)(param_5 + lVar7);
    *(ulong *)(param_5 + lVar7) = uVar6;
    _objc_release(uVar5);
  }
  _CGContextRestoreGState(uVar1);
  _objc_release(uVar6);
  return;
}



/* Entry: 10b2ce770; end: 10b2ce883; -[TTTAttributedLabel sizeThatFits:] */

double FUN_10b2ce770(double param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lStack_60;
  undefined *puStack_58;
  
  lVar1 = param_5;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_58 = PTR_PTR_112706340;
    lStack_60 = param_5;
    _objc_msgSendSuper2(param_1,param_2,&lStack_60,PTR_s_sizeThatFits__11266cf90);
  }
  else {
    lVar1 = param_5;
    func_0x00010bfb7380(param_5);
    lVar2 = param_5;
    func_0x00010bf0e540(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_5;
    func_0x00010c0def20(param_5);
    FUN_10b2cb2b4(param_1,param_2,lVar1,lVar2,lVar3);
    _objc_release(lVar2);
    func_0x00010c26c200(param_5);
    func_0x00010c26c200(param_5);
    param_1 = param_1 + param_2 + param_4;
    func_0x00010c26c200(param_5);
    func_0x00010c26c200(param_5);
  }
  return param_1;
}



/* Entry: 10b2ce884; end: 10b2ce8cb; -[TTTAttributedLabel intrinsicContentSize] */

void FUN_10b2ce884(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_112706340;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_intrinsicContentSize_1125f8080);
  func_0x00010c23d5a0(param_1);
  return;
}



/* Entry: 10b2ce8cc; end: 10b2ceaf7; -[TTTAttributedLabel tintColorDidChange] */

void FUN_10b2ce8cc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1;
  func_0x00010c270f00();
  lVar4 = param_1;
  lVar5 = param_1;
  if (lVar3 == 2) {
    func_0x00010c0995a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfeb8e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bfeb8e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0995a0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar3 = param_1;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar3;
  func_0x00010c0d3c80();
  _objc_release(lVar3);
  lVar7 = param_1;
  func_0x00010c099a20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar7;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar7);
      }
      uVar10 = *(undefined8 *)(lVar9 * 8);
      _objc_retain(lVar6);
      func_0x00010bf97ce0(lVar4);
      if (lVar5 != 0) {
        func_0x00010c11f2a0(uVar10);
        func_0x00010bef6f40(lVar6);
      }
      _objc_release(lVar6);
      lVar9 = lVar9 + 1;
    } while (lVar3 != lVar9);
    lVar3 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  func_0x00010c16b720(param_1);
  func_0x00010c1cbd40(param_1);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  uVar10 = *(undefined8 *)(lVar4 + 0x20);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  _objc_retain(param_2);
  func_0x00010c11f2a0(uVar1);
  func_0x00010c12b3c0(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b2ceaf8; end: 10b2ceb47;  */

void FUN_10b2ceaf8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_2);
  func_0x00010c11f2a0(uVar2);
  func_0x00010c12b3c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10b2ceb48; end: 10b2cec47; -[TTTAttributedLabel hitTest:withEvent:] */

void FUN_10b2ceb48(double param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 **ppuVar3;
  double dVar4;
  undefined1 *puStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_60;
  _objc_retain(param_5);
  puVar1 = param_3;
  dVar4 = param_1;
  func_0x00010c099580(param_1,param_2);
  _objc_retainAutoreleasedReturnValue();
  if (((puVar1 == (undefined1 *)0x0) || (puVar2 = param_3, func_0x00010c082800(), (int)puVar2 == 0))
     || (puVar2 = param_3, func_0x00010c074c20(), ((ulong)puVar2 & 1) != 0)) {
    _objc_release(puVar1);
  }
  else {
    func_0x00010bf01b40(param_3);
    _objc_release(puVar1);
    if (0.01 <= dVar4) {
      _objc_retain(param_3);
      goto LAB_10b2cebf0;
    }
  }
  puStack_58 = PTR_PTR_112706340;
  puStack_60 = param_3;
  _objc_msgSendSuper2(param_1,param_2,&puStack_60,PTR_s_hitTest_withEvent__1125d6850,param_5);
  _objc_retainAutoreleasedReturnValue();
  param_3 = (undefined1 *)ppuVar3;
LAB_10b2cebf0:
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10b2cec48; end: 10b2cec4f; -[TTTAttributedLabel canBecomeFirstResponder] */

undefined8 FUN_10b2cec48(void)

{
  return 1;
}



/* Entry: 10b2cec50; end: 10b2cec63; -[TTTAttributedLabel canPerformAction:withSender:] */

bool FUN_10b2cec50(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  return param_3 == PTR_s_copy__11253b4c8;
}



/* Entry: 10b2cec64; end: 10b2ced4b; -[TTTAttributedLabel touchesBegan:withEvent:] */

void FUN_10b2cec64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf04a20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c09ef00();
  lVar2 = param_1;
  func_0x00010c099580(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1628e0(param_1);
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bef0c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    puStack_48 = PTR_PTR_112706340;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_touchesBegan_withEvent__11267b780,param_3,param_4);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b2ced4c; end: 10b2cee5f; -[TTTAttributedLabel touchesMoved:withEvent:] */

void FUN_10b2ced4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bef0c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar2 = param_3;
  if (lVar1 == 0) {
    puStack_48 = PTR_PTR_112706340;
    lStack_50 = param_1;
    _objc_msgSendSuper2(&lStack_50,PTR_s_touchesMoved_withEvent__11252ca58,param_3,param_4);
  }
  else {
    func_0x00010bf04a20(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    lVar1 = param_1;
    func_0x00010bef0c00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09ef00(uVar2);
    lVar3 = param_1;
    func_0x00010c099580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar1 != lVar3) {
      func_0x00010c1628e0(param_1);
    }
  }
  _objc_release(uVar2);
  _objc_release(param_4);
  return;
}



/* Entry: 10b2cee60; end: 10b2cf297; -[TTTAttributedLabel touchesEnded:withEvent:] */

void FUN_10b2cee60(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010bef0c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (uVar1 == 0) {
    puStack_58 = PTR_PTR_112706340;
    uStack_60 = param_1;
    _objc_msgSendSuper2(&uStack_60,PTR_s_touchesEnded_withEvent__11267b788,param_3,param_4);
    goto LAB_10b2cf26c;
  }
  uVar1 = param_1;
  func_0x00010bef0c00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1628e0(param_1);
  uVar2 = uVar1;
  func_0x00010c13cde0();
  uVar5 = uVar1;
  if ((long)uVar2 < 0x20) {
    if (uVar2 == 8) {
      uVar2 = uVar1;
      func_0x00010c26fc80();
      _objc_retainAutoreleasedReturnValue();
      if (uVar2 != 0) {
        uVar3 = param_1;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        _objc_opt_respondsToSelector();
        _objc_release(uVar3);
        _objc_release(uVar2);
        if ((uVar4 & 1) != 0) {
          func_0x00010bf6b020(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf64de0(uVar1);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c26fc80(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf8b160(uVar1);
          func_0x00010bf0e080(param_1);
          _objc_release(uVar2);
          goto LAB_10b2cf200;
        }
      }
      uVar2 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      _objc_opt_respondsToSelector();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) {
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf64de0(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0e060(param_1);
        goto LAB_10b2cf200;
      }
    }
    else if (uVar2 == 0x10) {
      uVar2 = param_1;
      func_0x00010bf6b020();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      _objc_opt_respondsToSelector();
      _objc_release(uVar2);
      if ((uVar3 & 1) != 0) {
        func_0x00010bf6b020(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befd620(uVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf0e040(param_1);
        goto LAB_10b2cf200;
      }
    }
LAB_10b2cf20c:
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar5 & 1) != 0) {
      func_0x00010bf6b020(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0e0c0();
      goto LAB_10b2cf25c;
    }
  }
  else {
    if (uVar2 != 0x1000) {
      if (uVar2 == 0x800) {
        uVar2 = param_1;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        _objc_opt_respondsToSelector();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          func_0x00010bf6b020(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0faf60(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0e0a0(param_1);
          goto LAB_10b2cf200;
        }
      }
      else if (uVar2 == 0x20) {
        uVar2 = param_1;
        func_0x00010bf6b020();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        _objc_opt_respondsToSelector();
        _objc_release(uVar2);
        if ((uVar3 & 1) != 0) {
          func_0x00010bf6b020(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc2b80(uVar1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf0e100(param_1);
          goto LAB_10b2cf200;
        }
      }
      goto LAB_10b2cf20c;
    }
    uVar2 = param_1;
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    _objc_opt_respondsToSelector();
    _objc_release(uVar2);
    if ((uVar3 & 1) == 0) goto LAB_10b2cf20c;
    func_0x00010bf6b020(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf44620(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0e0e0(param_1);
LAB_10b2cf200:
    _objc_release(uVar5);
LAB_10b2cf25c:
    _objc_release(param_1);
  }
  _objc_release(uVar1);
LAB_10b2cf26c:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b2cf298; end: 10b2cf33b; -[TTTAttributedLabel touchesCancelled:withEvent:] */

void FUN_10b2cf298(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bef0c00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puStack_38 = PTR_PTR_112706340;
    lStack_40 = param_1;
    _objc_msgSendSuper2(&lStack_40,PTR_s_touchesCancelled_withEvent__112526c90,param_3,param_4);
  }
  else {
    func_0x00010c1628e0(param_1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10b2cf33c; end: 10b2cf39b; -[TTTAttributedLabel copy:] */

void FUN_10b2cf33c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26b700(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e7c0(puVar1,param_2,param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10b2cf39c; end: 10b2cf9c7; -[TTTAttributedLabel encodeWithCoder:] */

void FUN_10b2cf39c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_112706340;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_encodeWithCoder__1125c2658,param_7);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf92a60(param_5);
  func_0x00010c0df880(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_enabledTextCheckingTypes_1125c2440;
  _NSStringFromSelector(PTR_s_enabledTextCheckingTypes_1125c2440);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  uVar3 = param_5;
  func_0x00010c099a20(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_links_112604098;
  _NSStringFromSelector(PTR_s_links_112604098);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_7);
  _objc_release(puVar1);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  _objc_opt_class();
  if (puVar1 != (undefined *)0x0) {
    uVar3 = param_5;
    func_0x00010c0995a0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_linkAttributes_112603f78;
    _NSStringFromSelector(PTR_s_linkAttributes_112603f78);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93020(param_7);
    _objc_release(puVar1);
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010bef0c20(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_activeLinkAttributes_112599cb0;
    _NSStringFromSelector(PTR_s_activeLinkAttributes_112599cb0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93020(param_7);
    _objc_release(puVar1);
    _objc_release(uVar3);
    uVar3 = param_5;
    func_0x00010bfeb8e0(param_5);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_s_inactiveLinkAttributes_1125d8800;
    _NSStringFromSelector(PTR_s_inactiveLinkAttributes_1125d8800);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf93020(param_7);
    _objc_release(puVar1);
    _objc_release(uVar3);
  }
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c22a0e0(param_5);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_shadowRadius_112668260;
  _NSStringFromSelector(PTR_s_shadowRadius_112668260);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfe3540(param_5);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_highlightedShadowRadius_1125d6710;
  _NSStringFromSelector(PTR_s_highlightedShadowRadius_1125d6710);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010bfe3520(param_5);
  puVar1 = PTR_s_highlightedShadowOffset_1125d6708;
  _NSStringFromSelector(PTR_s_highlightedShadowOffset_1125d6708);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf92e00(param_1,param_2,param_7);
  _objc_release(puVar1);
  uVar3 = param_5;
  func_0x00010bfe3500(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_highlightedShadowColor_1125d6700;
  _NSStringFromSelector(PTR_s_highlightedShadowColor_1125d6700);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_7);
  _objc_release(puVar1);
  _objc_release(uVar3);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0864c0(param_5);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_kern_1125ff340;
  _NSStringFromSelector(PTR_s_kern_1125ff340);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bfb17c0(param_5);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_firstLineIndent_1125c9f98;
  _NSStringFromSelector(PTR_s_firstLineIndent_1125c9f98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c08dd20(param_5);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_leading_112601158;
  _NSStringFromSelector(PTR_s_leading_112601158);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0992c0(param_5);
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_s_lineHeightMultiple_112603ec0;
  _NSStringFromSelector(PTR_s_lineHeightMultiple_112603ec0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_7);
  _objc_release(puVar2);
  _objc_release(puVar1);
  func_0x00010c26c200(param_5);
  puVar1 = PTR_s_textInsets_112678aa8;
  _NSStringFromSelector(PTR_s_textInsets_112678aa8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93220(param_1,param_2,param_3,param_4,param_7);
  _objc_release(puVar1);
  func_0x00010c298ec0(param_5);
  puVar1 = PTR_s_verticalAlignment_112683dd8;
  _NSStringFromSelector(PTR_s_verticalAlignment_112683dd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf92fc0(param_7);
  _objc_release(puVar1);
  uVar3 = param_5;
  func_0x00010c27cba0(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_truncationTokenString_11267cd10;
  _NSStringFromSelector(PTR_s_truncationTokenString_11267cd10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_7);
  _objc_release(puVar1);
  _objc_release(uVar3);
  uVar3 = param_5;
  func_0x00010bf0e540(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_attributedText_1125a12f8;
  _NSStringFromSelector(PTR_s_attributedText_1125a12f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_7);
  _objc_release(puVar1);
  _objc_release(uVar3);
  func_0x00010c26b700(param_5);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_s_text_1126787e8;
  _NSStringFromSelector(PTR_s_text_1126787e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf93020(param_7);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_7);
  return;
}



/* Entry: 10b2cf9c8; end: 10b2d03f7; -[TTTAttributedLabel initWithCoder:] */

undefined8 * FUN_10b2cf9c8(float param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 **ppuVar5;
  double dVar6;
  undefined8 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar5 = &puStack_60;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_112706340;
  puVar1 = &uStack_50;
  uStack_50 = param_2;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithCoder__1125dd730,param_4);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010bf42980(puVar1);
    puVar4 = PTR_s_enabledTextCheckingTypes_1125c2440;
    puVar2 = PTR_s_enabledTextCheckingTypes_1125c2440;
    _NSStringFromSelector(PTR_s_enabledTextCheckingTypes_1125c2440);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf4bc00();
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      _NSStringFromSelector(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf67000(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c282800();
      func_0x00010c195540(puVar1);
      _objc_release(uVar3);
      _objc_release(puVar4);
    }
    puVar4 = PTR_s_links_112604098;
    puVar2 = PTR_s_links_112604098;
    _NSStringFromSelector(PTR_s_links_112604098);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf4bc00();
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      _NSStringFromSelector(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf67000(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1bdf80(puVar1);
      _objc_release(uVar3);
      _objc_release(puVar4);
    }
    puVar2 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_opt_class();
    puVar4 = PTR_s_linkAttributes_112603f78;
    if (puVar2 != (undefined *)0x0) {
      puVar2 = PTR_s_linkAttributes_112603f78;
      _NSStringFromSelector(PTR_s_linkAttributes_112603f78);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf4bc00();
      _objc_release(puVar2);
      if ((int)uVar3 != 0) {
        _NSStringFromSelector(puVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_4;
        func_0x00010bf67000(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1bdd60(puVar1);
        _objc_release(uVar3);
        _objc_release(puVar4);
      }
      puVar4 = PTR_s_activeLinkAttributes_112599cb0;
      puVar2 = PTR_s_activeLinkAttributes_112599cb0;
      _NSStringFromSelector(PTR_s_activeLinkAttributes_112599cb0);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf4bc00();
      _objc_release(puVar2);
      if ((int)uVar3 != 0) {
        _NSStringFromSelector(puVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_4;
        func_0x00010bf67000(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c162900(puVar1);
        _objc_release(uVar3);
        _objc_release(puVar4);
      }
      puVar4 = PTR_s_inactiveLinkAttributes_1125d8800;
      puVar2 = PTR_s_inactiveLinkAttributes_1125d8800;
      _NSStringFromSelector(PTR_s_inactiveLinkAttributes_1125d8800);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf4bc00();
      _objc_release(puVar2);
      if ((int)uVar3 != 0) {
        _NSStringFromSelector(puVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_4;
        func_0x00010bf67000(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1abb80(puVar1);
        _objc_release(uVar3);
        _objc_release(puVar4);
      }
    }
    puVar4 = PTR_s_shadowRadius_112668260;
    puVar2 = PTR_s_shadowRadius_112668260;
    _NSStringFromSelector(PTR_s_shadowRadius_112668260);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf4bc00();
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      _NSStringFromSelector(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf67000(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar6 = (double)param_1;
      func_0x00010c1fe840(dVar6,puVar1);
      param_1 = SUB84(dVar6,0);
      _objc_release(uVar3);
      _objc_release(puVar4);
    }
    puVar4 = PTR_s_highlightedShadowRadius_1125d6710;
    puVar2 = PTR_s_highlightedShadowRadius_1125d6710;
    _NSStringFromSelector(PTR_s_highlightedShadowRadius_1125d6710);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf4bc00();
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      _NSStringFromSelector(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf67000(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar6 = (double)param_1;
      func_0x00010c1a8960(dVar6,puVar1);
      param_1 = SUB84(dVar6,0);
      _objc_release(uVar3);
      _objc_release(puVar4);
    }
    puVar4 = PTR_s_highlightedShadowOffset_1125d6708;
    puVar2 = PTR_s_highlightedShadowOffset_1125d6708;
    _NSStringFromSelector(PTR_s_highlightedShadowOffset_1125d6708);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf4bc00();
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      _NSStringFromSelector(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf66d40(param_4);
      func_0x00010c1a8940(puVar1);
      _objc_release(puVar4);
    }
    puVar4 = PTR_s_highlightedShadowColor_1125d6700;
    puVar2 = PTR_s_highlightedShadowColor_1125d6700;
    _NSStringFromSelector(PTR_s_highlightedShadowColor_1125d6700);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf4bc00();
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      _NSStringFromSelector(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf67000(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a8920(puVar1);
      _objc_release(uVar3);
      _objc_release(puVar4);
    }
    puVar4 = PTR_s_kern_1125ff340;
    puVar2 = PTR_s_kern_1125ff340;
    _NSStringFromSelector(PTR_s_kern_1125ff340);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf4bc00();
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      _NSStringFromSelector(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf67000(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar6 = (double)param_1;
      func_0x00010c1b6b00(dVar6,puVar1);
      param_1 = SUB84(dVar6,0);
      _objc_release(uVar3);
      _objc_release(puVar4);
    }
    puVar4 = PTR_s_firstLineIndent_1125c9f98;
    puVar2 = PTR_s_firstLineIndent_1125c9f98;
    _NSStringFromSelector(PTR_s_firstLineIndent_1125c9f98);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf4bc00();
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      _NSStringFromSelector(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf67000(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar6 = (double)param_1;
      func_0x00010c19d280(dVar6,puVar1);
      param_1 = SUB84(dVar6,0);
      _objc_release(uVar3);
      _objc_release(puVar4);
    }
    puVar4 = PTR_s_leading_112601158;
    puVar2 = PTR_s_leading_112601158;
    _NSStringFromSelector(PTR_s_leading_112601158);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf4bc00();
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      _NSStringFromSelector(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf67000(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar6 = (double)param_1;
      func_0x00010c1b9fa0(dVar6,puVar1);
      param_1 = SUB84(dVar6,0);
      _objc_release(uVar3);
      _objc_release(puVar4);
    }
    puVar4 = PTR_s_minimumLineHeight_112611338;
    puVar2 = PTR_s_minimumLineHeight_112611338;
    _NSStringFromSelector(PTR_s_minimumLineHeight_112611338);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf4bc00();
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      _NSStringFromSelector(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf67000(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar6 = (double)param_1;
      func_0x00010c1c82e0(dVar6,puVar1);
      param_1 = SUB84(dVar6,0);
      _objc_release(uVar3);
      _objc_release(puVar4);
    }
    puVar4 = PTR_s_maximumLineHeight_11260e760;
    puVar2 = PTR_s_maximumLineHeight_11260e760;
    _NSStringFromSelector(PTR_s_maximumLineHeight_11260e760);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf4bc00();
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      _NSStringFromSelector(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf67000(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      dVar6 = (double)param_1;
      func_0x00010c1c3ba0(dVar6,puVar1);
      param_1 = SUB84(dVar6,0);
      _objc_release(uVar3);
      _objc_release(puVar4);
    }
    puVar4 = PTR_s_lineHeightMultiple_112603ec0;
    puVar2 = PTR_s_lineHeightMultiple_112603ec0;
    _NSStringFromSelector(PTR_s_lineHeightMultiple_112603ec0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf4bc00();
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      _NSStringFromSelector(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf67000(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb2c80();
      func_0x00010c1bdc00((double)param_1,puVar1);
      _objc_release(uVar3);
      _objc_release(puVar4);
    }
    puVar4 = PTR_s_textInsets_112678aa8;
    puVar2 = PTR_s_textInsets_112678aa8;
    _NSStringFromSelector(PTR_s_textInsets_112678aa8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf4bc00();
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      _NSStringFromSelector(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf67280(param_4);
      func_0x00010c213500(puVar1);
      _objc_release(puVar4);
    }
    puVar4 = PTR_s_verticalAlignment_112683dd8;
    puVar2 = PTR_s_verticalAlignment_112683dd8;
    _NSStringFromSelector(PTR_s_verticalAlignment_112683dd8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf4bc00();
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      _NSStringFromSelector(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf66f40(param_4);
      func_0x00010c221000(puVar1);
      _objc_release(puVar4);
    }
    puVar4 = PTR_s_truncationTokenString_11267cd10;
    puVar2 = PTR_s_truncationTokenString_11267cd10;
    _NSStringFromSelector(PTR_s_truncationTokenString_11267cd10);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf4bc00();
    _objc_release(puVar2);
    if ((int)uVar3 != 0) {
      _NSStringFromSelector(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf67000(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c21a660(puVar1);
      _objc_release(uVar3);
      _objc_release(puVar4);
    }
    puVar4 = PTR_s_attributedText_1125a12f8;
    puVar2 = PTR_s_attributedText_1125a12f8;
    _NSStringFromSelector(PTR_s_attributedText_1125a12f8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_4;
    func_0x00010bf4bc00();
    _objc_release(puVar2);
    if ((int)uVar3 == 0) {
      puStack_58 = PTR_PTR_112706340;
      puStack_60 = puVar1;
      _objc_msgSendSuper2(&puStack_60,PTR_s_text_1126787e8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(puVar1);
    }
    else {
      _NSStringFromSelector(puVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_4;
      func_0x00010bf67000(param_4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c16b720(puVar1);
      _objc_release(uVar3);
      ppuVar5 = (undefined8 **)puVar4;
    }
    _objc_release(ppuVar5);
    _objc_retain(puVar1);
  }
  _objc_release(param_4);
  _objc_release(puVar1);
  return puVar1;
}



/* Entry: 10b2d03f8; end: 10b2d0407; -[TTTAttributedLabel attributedText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d03f8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e5b0);
}



/* Entry: 10b2d0408; end: 10b2d0417; -[TTTAttributedLabel delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d0408(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e574);
}



/* Entry: 10b2d0418; end: 10b2d0427; -[TTTAttributedLabel setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d0418(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11278e574) = param_3;
  return;
}



/* Entry: 10b2d0428; end: 10b2d0437; -[TTTAttributedLabel enabledTextCheckingTypes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d0428(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e570);
}



/* Entry: 10b2d0438; end: 10b2d0447; -[TTTAttributedLabel links] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d0438(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e5c0);
}



/* Entry: 10b2d0448; end: 10b2d0487; -[TTTAttributedLabel setLinks:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d0448(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e5c0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2d0488; end: 10b2d0497; -[TTTAttributedLabel linkAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d0488(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e5c4);
}



/* Entry: 10b2d0498; end: 10b2d04d7; -[TTTAttributedLabel setLinkAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d0498(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e5c4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2d04d8; end: 10b2d04e7; -[TTTAttributedLabel activeLinkAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d04d8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e5c8);
}



/* Entry: 10b2d04e8; end: 10b2d0527; -[TTTAttributedLabel setActiveLinkAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d04e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e5c8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2d0528; end: 10b2d0537; -[TTTAttributedLabel inactiveLinkAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d0528(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e5cc);
}



/* Entry: 10b2d0538; end: 10b2d0577; -[TTTAttributedLabel setInactiveLinkAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d0538(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e5cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2d0578; end: 10b2d0587; -[TTTAttributedLabel shadowRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d0578(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e578);
}



/* Entry: 10b2d0588; end: 10b2d0597; -[TTTAttributedLabel setShadowRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d0588(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11278e578) = param_1;
  return;
}



/* Entry: 10b2d0598; end: 10b2d05a7; -[TTTAttributedLabel highlightedShadowRadius] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d0598(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e57c);
}



/* Entry: 10b2d05a8; end: 10b2d05b7; -[TTTAttributedLabel setHighlightedShadowRadius:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d05a8(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11278e57c) = param_1;
  return;
}



/* Entry: 10b2d05b8; end: 10b2d05cb; -[TTTAttributedLabel highlightedShadowOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10b2d05b8(long param_1)

{
  return *(undefined1 (*) [16])(param_1 + _DAT_11278e580);
}



/* Entry: 10b2d05cc; end: 10b2d05df; -[TTTAttributedLabel setHighlightedShadowOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d05cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11278e580;
  *(undefined8 *)(param_3 + lVar1) = param_1;
  ((undefined8 *)(param_3 + lVar1))[1] = param_2;
  return;
}



/* Entry: 10b2d05e0; end: 10b2d05ef; -[TTTAttributedLabel highlightedShadowColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d05e0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e5d0);
}



/* Entry: 10b2d05f0; end: 10b2d062f; -[TTTAttributedLabel setHighlightedShadowColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d05f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e5d0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2d0630; end: 10b2d063f; -[TTTAttributedLabel kern] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d0630(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e584);
}



/* Entry: 10b2d0640; end: 10b2d064f; -[TTTAttributedLabel setKern:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d0640(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11278e584) = param_1;
  return;
}



/* Entry: 10b2d0650; end: 10b2d065f; -[TTTAttributedLabel removeDescenderOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10b2d0650(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11278e588);
}



/* Entry: 10b2d0660; end: 10b2d066f; -[TTTAttributedLabel setRemoveDescenderOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d0660(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11278e588) = param_3;
  return;
}



/* Entry: 10b2d0670; end: 10b2d067f; -[TTTAttributedLabel firstLineIndent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d0670(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e58c);
}



/* Entry: 10b2d0680; end: 10b2d068f; -[TTTAttributedLabel setFirstLineIndent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d0680(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11278e58c) = param_1;
  return;
}



/* Entry: 10b2d0690; end: 10b2d069f; -[TTTAttributedLabel leading] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d0690(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e590);
}



/* Entry: 10b2d06a0; end: 10b2d06af; -[TTTAttributedLabel setLeading:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d06a0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11278e590) = param_1;
  return;
}



/* Entry: 10b2d06b0; end: 10b2d06bf; -[TTTAttributedLabel minimumLineHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d06b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e594);
}



/* Entry: 10b2d06c0; end: 10b2d06cf; -[TTTAttributedLabel setMinimumLineHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d06c0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11278e594) = param_1;
  return;
}



/* Entry: 10b2d06d0; end: 10b2d06df; -[TTTAttributedLabel maximumLineHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d06d0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e598);
}



/* Entry: 10b2d06e0; end: 10b2d06ef; -[TTTAttributedLabel setMaximumLineHeight:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d06e0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11278e598) = param_1;
  return;
}



/* Entry: 10b2d06f0; end: 10b2d06ff; -[TTTAttributedLabel lineHeightMultiple] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d06f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e59c);
}



/* Entry: 10b2d0700; end: 10b2d070f; -[TTTAttributedLabel setLineHeightMultiple:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d0700(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_11278e59c) = param_1;
  return;
}



/* Entry: 10b2d0710; end: 10b2d0727; -[TTTAttributedLabel textInsets] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d0710(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e5a0);
}



/* Entry: 10b2d0728; end: 10b2d073f; -[TTTAttributedLabel setTextInsets:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d0728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_5 + _DAT_11278e5a0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  return;
}



/* Entry: 10b2d0740; end: 10b2d074f; -[TTTAttributedLabel verticalAlignment] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d0740(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e5a4);
}



/* Entry: 10b2d0750; end: 10b2d075f; -[TTTAttributedLabel setVerticalAlignment:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d0750(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11278e5a4) = param_3;
  return;
}



/* Entry: 10b2d0760; end: 10b2d076f; -[TTTAttributedLabel truncationTokenString] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d0760(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e5d4);
}



/* Entry: 10b2d0770; end: 10b2d07af; -[TTTAttributedLabel setTruncationTokenString:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d0770(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e5d4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2d07b0; end: 10b2d07bf; -[TTTAttributedLabel truncationTokenStringAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d07b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e5d8);
}



/* Entry: 10b2d07c0; end: 10b2d07ff; -[TTTAttributedLabel setTruncationTokenStringAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d07c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11278e5d8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b2d0800; end: 10b2d080f; -[TTTAttributedLabel inactiveAttributedText] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d0800(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e5dc);
}



/* Entry: 10b2d0810; end: 10b2d081b; -[TTTAttributedLabel setInactiveAttributedText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d0810(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b2d081c; end: 10b2d0827; -[TTTAttributedLabel setRenderedAttributedText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b2d081c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10b2d0828; end: 10b2d0837; -[TTTAttributedLabel dataDetector] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10b2d0828(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11278e5e0);
}


