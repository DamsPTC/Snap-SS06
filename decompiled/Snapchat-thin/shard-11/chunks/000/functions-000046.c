/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080b5410; end: 1080b541f; -[SCValdiTextLayoutView inputDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b5410(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c065930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112774514),PTR_s_inputDelegate_1125f7058);
  return;
}



/* Entry: 1080b5420; end: 1080b5437; -[SCValdiTextLayoutView setInputDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b5420(long param_1)

{
  if (*(long *)(param_1 + _DAT_112774514) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1ad310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112774514),PTR_s_setInputDelegate__112648ee8);
    return;
  }
  return;
}



/* Entry: 1080b5438; end: 1080b54bb; -[SCValdiTextLayoutView tokenizer] */

void FUN_1080b5438(long param_1)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001080b5c30();
  if (unaff_x19 == 0) {
    func_0x0001080b600c();
    func_0x00010c0518a0();
  }
  else {
    func_0x00010c273400();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b5e94();
    if (unaff_x21 == 0) {
      func_0x0001080b600c();
      func_0x00010c0518a0();
      func_0x0001080b5ddc();
      func_0x00010c216cc0();
      func_0x0001080b5c7c();
    }
    func_0x00010c273400();
    _objc_retainAutoreleasedReturnValue();
    param_1 = unaff_x19;
  }
  func_0x0001080b5c8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080b54bc; end: 1080b54f7; -[SCValdiTextLayoutView positionWithinRange:farthestInDirection:] */

void FUN_1080b54bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (param_4 - 5U < 0xfffffffffffffffe) {
    func_0x00010bf940a0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c24d960(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080b54f8; end: 1080b556f; -[SCValdiTextLayoutView characterRangeByExtendingPosition:inDirection:] */

void FUN_1080b54f8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010be673c0();
  func_0x00010bdf7300();
  if (param_4 - 3U < 2) {
    lVar2 = lVar1;
    if (lVar1 < 2) {
      lVar2 = 1;
    }
    lVar2 = lVar2 + -1;
    param_1 = lVar1;
  }
  else {
    lVar2 = lVar1;
    if (lVar1 + 1 <= param_1) {
      param_1 = lVar1 + 1;
    }
  }
  func_0x00010c11f500(PTR_PTR_1126d9330,param_2,lVar2,param_1);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080b5570; end: 1080b559f; -[SCValdiTextLayoutView baseWritingDirectionForPosition:inDirection:] */

ulong FUN_1080b5570(ulong param_1)

{
  func_0x0001080b5cc4();
  func_0x0001080b5de8();
  func_0x00010c26c360();
  func_0x0001080b5c7c();
  return param_1 & 0xffffffff;
}



/* Entry: 1080b55a0; end: 1080b55a3; -[SCValdiTextLayoutView setBaseWritingDirection:forRange:] */

void FUN_1080b55a0(void)

{
  return;
}



/* Entry: 1080b55a4; end: 1080b565b; -[SCValdiTextLayoutView firstRectForRange:] */

void FUN_1080b55a4(long param_1,long param_2)

{
  long extraout_x8;
  long lVar1;
  
  func_0x00010be85bc0();
  func_0x0001080b5e38();
  lVar1 = *(long *)(param_1 + extraout_x8);
  if (lVar1 != 0) {
    func_0x00010bf20c00(param_1);
    if (param_2 == 0) {
      func_0x00010bf32380(lVar1);
      func_0x0001080b5dc8();
    }
    else {
      func_0x00010c15a9a0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1080();
      func_0x0001080b5dc8();
      func_0x0001080b5c7c();
      func_0x0001080b5c8c();
    }
  }
  func_0x0001080b6048();
  return;
}



/* Entry: 1080b565c; end: 1080b56bf; -[SCValdiTextLayoutView caretRectForPosition:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b565c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = (long)_DAT_11277450c;
  if (*(long *)(param_1 + lVar2) != 0) {
    lVar1 = param_1;
    func_0x00010be673c0();
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    func_0x0001080b5dc0();
    func_0x00010bf32380(uVar3,param_2,lVar1);
  }
  return;
}



/* Entry: 1080b56c0; end: 1080b5827; -[SCValdiTextLayoutView selectionRectsForRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b56c0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x0001080b5c94();
  lVar3 = (long)_DAT_11277450c;
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (*(long *)(param_1 + lVar3) != 0) {
    func_0x0001080b5e30(param_1);
    puVar4 = *(undefined **)(param_1 + lVar3);
    func_0x00010bf20c00(param_1);
    func_0x00010c15a9a0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar4;
    func_0x0001080b5fa4();
    puVar2 = (undefined *)(param_1 + _DAT_112774544);
    _objc_loadWeakRetained();
    func_0x00010c26c360();
    func_0x0001080b5d3c();
    for (puVar5 = (undefined *)0x0; func_0x0001080b5f70(), puVar5 < puVar2; puVar5 = puVar5 + 1) {
      puVar2 = PTR_PTR_1126d9388;
      _objc_opt_new(PTR_PTR_1126d9388);
      func_0x00010c0dfd40(puVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bdc1080();
      func_0x00010c21ff60(puVar2);
      func_0x0001080b5ed0();
      func_0x00010c220020(puVar2);
      func_0x00010c21fe80(puVar2);
      func_0x0001080b5f70();
      func_0x00010c21fe60(puVar2);
      func_0x00010c21ff00(puVar2);
      puVar2 = puVar1;
      func_0x00010befa120();
      func_0x0001080b5e84();
    }
    func_0x0001080b5c84();
  }
  func_0x0001080b5c8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1080b5828; end: 1080b5863; -[SCValdiTextLayoutView closestPositionToPoint:] */

void FUN_1080b5828(long param_1)

{
  long extraout_x8;
  
  func_0x0001080b5e38();
  if (*(long *)(param_1 + extraout_x8) != 0) {
    func_0x00010c0673e0();
  }
  func_0x0001080b6024();
  func_0x00010c104420();
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080b5864; end: 1080b58ef; -[SCValdiTextLayoutView closestPositionToPoint:withinRange:] */

void FUN_1080b5864(void)

{
  func_0x0001080b5f54();
  func_0x0001080b5c94();
  func_0x0001080b6068();
  func_0x00010bf3e080();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b5e68();
  func_0x00010be673c0();
  func_0x0001080b5c84();
  func_0x0001080b5e30();
  func_0x0001080b5c8c();
  func_0x0001080b6024();
                    /* WARNING: Could not recover jumptable at 0x00010c104430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080b58f0; end: 1080b5957; -[SCValdiTextLayoutView characterRangeAtPoint:] */

void FUN_1080b58f0(long param_1)

{
  long lVar1;
  long extraout_x8;
  long unaff_x20;
  
  func_0x0001080b5e38();
  lVar1 = *(long *)(param_1 + extraout_x8);
  if ((lVar1 != 0) && (func_0x00010bf35980(), lVar1 != 0x7fffffffffffffff)) {
    func_0x0001080b5ddc();
    func_0x00010bdf7300();
    if (unaff_x20 < lVar1) {
      func_0x00010c11f500(PTR_PTR_1126d9330);
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080b5958; end: 1080b595b; -[SCValdiTextLayoutView textInputView] */

void FUN_1080b5958(void)

{
  return;
}



/* Entry: 1080b595c; end: 1080b5973; -[SCValdiTextLayoutView selectionAffinity] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b595c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112774514) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c15a4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112774514),PTR_s_selectionAffinity_112634350);
    return;
  }
  return;
}



/* Entry: 1080b5974; end: 1080b598b; -[SCValdiTextLayoutView setSelectionAffinity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b5974(long param_1)

{
  if (*(long *)(param_1 + _DAT_112774514) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1fb7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112774514),PTR_s_setSelectionAffinity__11265c820);
    return;
  }
  return;
}



/* Entry: 1080b598c; end: 1080b5a17; -[SCValdiTextLayoutView textStylingAtPosition:inDirection:] */

void FUN_1080b598c(long param_1)

{
  long lVar1;
  long extraout_x8;
  long lVar2;
  
  func_0x0001080b6030();
  lVar2 = *(long *)(param_1 + extraout_x8);
  func_0x0001080b5c94();
  func_0x00010bf0e280();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x0001080b5e68();
  func_0x00010be673c0();
  func_0x0001080b5c84();
  if ((lVar1 < 0) || (func_0x00010c08fa60(), lVar2 <= lVar1)) {
    lVar2 = 0;
  }
  else {
    func_0x0001080b5e50();
    func_0x00010bf0e760();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001080b5c8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1080b5a18; end: 1080b5a53; -[SCValdiTextLayoutView positionWithinRange:atCharacterOffset:] */

void FUN_1080b5a18(void)

{
  func_0x00010be85bc0();
  func_0x0001080b6024();
                    /* WARNING: Could not recover jumptable at 0x00010c104430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080b5a54; end: 1080b5a9f; -[SCValdiTextLayoutView characterOffsetOfPosition:withinRange:] */

ulong FUN_1080b5a54(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long unaff_x21;
  
  func_0x0001080b5e44();
  func_0x0001080b5c64();
  func_0x0001080b5e30();
  lVar1 = unaff_x21;
  func_0x0001080b5c70();
  func_0x0001080b5c7c();
  if (lVar1 - unaff_x21 <= (long)param_2) {
    param_2 = lVar1 - unaff_x21;
  }
  return param_2 & ((long)param_2 >> 0x3f ^ 0xffffffffffffffffU);
}



/* Entry: 1080b5aa0; end: 1080b5ab3; -[SCValdiTextLayoutView delegate] */

void FUN_1080b5aa0(void)

{
  func_0x0001080b5cc4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080b5ab4; end: 1080b5ac7; -[SCValdiTextLayoutView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b5ab4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112774544,param_3);
  return;
}



/* Entry: 1080b5ac8; end: 1080b5ad3; -[SCValdiTextLayoutView maxNumberOfLines] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b5ac8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277451c);
}



/* Entry: 1080b5ad4; end: 1080b5adf; -[SCValdiTextLayoutView defaultTextColor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b5ad4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112774534);
}



/* Entry: 1080b5ae0; end: 1080b5b77; -[SCValdiTextLayoutView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b5ae0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112774534,0);
  func_0x0001080b5ec8((long)_DAT_112774544);
  func_0x0001080b5ec8((long)_DAT_112774524);
  func_0x0001080b5ec8((long)_DAT_11277453c);
  func_0x0001080b5ec8((long)_DAT_112774508);
  func_0x0001080b5c44((long)_DAT_112774514);
  func_0x0001080b5c44((long)_DAT_112774530);
  func_0x0001080b5c44((long)_DAT_11277452c);
  func_0x0001080b5c44((long)_DAT_112774528);
  func_0x0001080b5c44((long)_DAT_112774548);
  func_0x0001080b5c44((long)_DAT_112774520);
  func_0x0001080b5c44((long)_DAT_112774518);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277450c,0);
  return;
}



/* Entry: 1080b5b78; end: 1080b5c07;  */

void FUN_1080b5b78(void)

{
  char *pcVar1;
  
  pcVar1 = "selection";
  func_0x00010b9742d4();
  pcRam0000000113729200 = pcVar1;
  return;
}



/* Entry: 1080b5c08; end: 1080b608b;  */

void FUN_1080b5c08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b608c; end: 1080b60e7; -[SCValdiTextKit1TextView initWithFrame:] */

undefined * FUN_1080b608c(void)

{
  undefined *puVar1;
  
  func_0x0001080bcc44();
  puVar1 = PTR__OBJC_CLASS___NSLayoutManager_1126b51e8;
  _objc_opt_new(PTR__OBJC_CLASS___NSLayoutManager_1126b51e8);
  func_0x0001080bcab4();
  func_0x0001080bce18();
  func_0x00010c0147c0();
  func_0x0001080bc940();
  return puVar1;
}



/* Entry: 1080b60e8; end: 1080b61e7; -[SCValdiTextKit1TextView initWithFrame:layoutManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1080b60e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar2 = &uStack_70;
  func_0x0001080bcc44();
  func_0x0001080bc958();
  _objc_alloc_init(PTR__OBJC_CLASS___NSTextStorage_1126b51e0);
  func_0x0001080bcce8();
  func_0x00010bef96a0();
  puVar1 = PTR__OBJC_CLASS___NSTextContainer_1126b51f0;
  _objc_alloc_init();
  func_0x0001080bcc70();
  func_0x00010befbe20();
  puStack_68 = PTR_PTR_1126fc638;
  uStack_70 = param_1;
  func_0x0001080bce18(&uStack_70,PTR_s_initWithFrame_textContainer__1125e2dd8);
  _objc_msgSendSuper2();
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_112774554;
    func_0x0001080bc990();
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = unaff_x20;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_112774558;
    func_0x0001080bca18();
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined **)((long)puVar2 + lVar4) = puVar1;
    _objc_release(uVar3);
    lVar4 = (long)_DAT_11277455c;
    func_0x0001080bc988();
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(undefined8 *)((long)puVar2 + lVar4) = param_3;
    _objc_release(uVar3);
  }
  func_0x0001080bc948();
  func_0x0001080bc940();
  func_0x0001080bc950();
  return (undefined1 *)puVar2;
}



/* Entry: 1080b61e8; end: 1080b6227; -[SCValdiTextKit1TextView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b61e8(long param_1)

{
  func_0x0001080bcef8((long)_DAT_11277455c);
  func_0x0001080bc8b0((long)_DAT_112774558);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112774554,0);
  return;
}



/* Entry: 1080b6228; end: 1080b62df; -[SCValdiTextViewInternal setText:] */

void FUN_1080b6228(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x20;
  
  FUN_1080bc8a0();
  uVar1 = unaff_x20;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1;
  }
  func_0x00010c0720c0();
  func_0x0001080bc948();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_setText__1126625f0);
  func_0x0001080bc950();
  func_0x00010c27f8e0();
  _objc_retainAutoreleasedReturnValue();
  if ((((uVar2 & 1) == 0) && (uVar2 = unaff_x20, func_0x00010c081ea0(), (uVar2 & 1) == 0)) &&
     (uVar2 = unaff_x20, func_0x00010c07c0a0(), (uVar2 & 1) == 0)) {
    func_0x00010c12aa60(unaff_x20);
  }
  func_0x0001080bc950();
  return;
}



/* Entry: 1080b62e0; end: 1080b63eb; -[SCValdiTextViewInternal setAttributedText:] */

void FUN_1080b62e0(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_60;
  undefined *puStack_58;
  
  func_0x0001080bc958();
  uVar1 = param_1;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = 0;
  if (uVar1 != 0) {
    uVar2 = uVar1;
  }
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0720c0();
  func_0x0001080bc9a0();
  func_0x0001080bc960();
  func_0x0001080bc948();
  puStack_58 = PTR_PTR_1126fc640;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_setAttributedText__1126387e8,param_3);
  func_0x0001080bc940();
  func_0x00010c27f8e0();
  _objc_retainAutoreleasedReturnValue();
  if ((((uVar2 & 1) == 0) && (uVar2 = param_1, func_0x00010c081ea0(), (uVar2 & 1) == 0)) &&
     (uVar2 = param_1, func_0x00010c07c0a0(), (uVar2 & 1) == 0)) {
    func_0x00010c12aa60(param_1);
  }
  func_0x0001080bc950();
  return;
}



/* Entry: 1080b63ec; end: 1080b641f; -[SCValdiTextViewDisplayLinkProxy initWithTarget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1080b63ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + _DAT_11277454c,param_3);
  return param_1;
}



/* Entry: 1080b6420; end: 1080b6463; -[SCValdiTextViewDisplayLinkProxy forwardInvocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b6420(void)

{
  long unaff_x20;
  long lVar1;
  
  func_0x0001080bc9a8();
  lVar1 = (long)_DAT_11277454c;
  func_0x0001080bc958();
  _objc_loadWeakRetained(unaff_x20 + lVar1);
  func_0x0001080bcab4();
  func_0x00010c06ae40();
  func_0x0001080bc950();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b6464; end: 1080b64a7; -[SCValdiTextViewDisplayLinkProxy methodSignatureForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b6464(long param_1)

{
  param_1 = param_1 + _DAT_11277454c;
  _objc_loadWeakRetained(param_1);
  func_0x0001080bcce8();
  func_0x00010c0cca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bc940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080b64a8; end: 1080b64b7; -[SCValdiTextViewDisplayLinkProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b64a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11277454c);
  return;
}



/* Entry: 1080b64b8; end: 1080b64bf; +[SCValdiTextView valdi_managesChildFrames] */

undefined8 FUN_1080b64b8(void)

{
  return 1;
}



/* Entry: 1080b64c0; end: 1080b652b; -[SCValdiTextView valdi_applySlowClipping:animator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b64c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  *(char *)(param_1 + _DAT_112774560) = (char)param_3;
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + _DAT_112774564));
  lVar2 = (long)_DAT_112774568;
  func_0x00010c17d4c0(*(undefined8 *)(param_1 + lVar2),param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  func_0x00010c08c0e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080b652c; end: 1080b671b; -[SCValdiTextView initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1080b652c(void)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  int *unaff_x20;
  undefined1 auStack_60 [16];
  
  puVar3 = auStack_60;
  func_0x0001080bcc44();
  func_0x0001080bce08();
  _objc_msgSendSuper2(auStack_60,PTR_s_initWithFrame__1125e2948);
  if (puVar3 != (undefined1 *)0x0) {
    func_0x0001080bce98();
    func_0x0001080bce34();
    func_0x0001080bc8e0();
    func_0x0001080bce8c();
    func_0x0001080bce18();
    func_0x00010c0147c0();
    iVar1 = *unaff_x20;
    func_0x0001080bc8e0();
    func_0x00010c18b5e0(*(undefined8 *)(puVar3 + iVar1));
    func_0x00010c26c860(*(undefined8 *)(puVar3 + iVar1));
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bcce8();
    func_0x00010c18b5e0();
    func_0x0001080bc940();
    func_0x0001080bce28();
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bcdc8();
    func_0x0001080bc940();
    func_0x00010c1f7b20(*(undefined8 *)(puVar3 + iVar1));
    func_0x0001080bc9c8();
    func_0x00010c2131e0(*(undefined8 *)(puVar3 + iVar1));
    func_0x00010c26ba00(*(undefined8 *)(puVar3 + iVar1));
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bce70();
    func_0x0001080bc940();
    func_0x00010c2025c0(*(undefined8 *)(puVar3 + iVar1));
    iVar2 = (int)*(undefined8 *)(puVar3 + iVar1);
    func_0x00010c165e00();
    func_0x0001080bcc7c();
    if (iVar2 != 0) {
      func_0x00010c1ad0c0(*(undefined8 *)(puVar3 + iVar1));
    }
    func_0x0001080bce80();
    func_0x00010befa220(*(undefined8 *)(puVar3 + iVar1));
    *(undefined8 *)(puVar3 + _DAT_112774570) = 0;
    *(undefined8 *)(puVar3 + _DAT_112774574) = 1;
    *(undefined8 *)(puVar3 + _DAT_112774578) = 0;
    puVar3[_DAT_11277457c] = 1;
    *(undefined8 *)(puVar3 + _DAT_112774580) = 0;
    func_0x0001080bcc58((long)_DAT_112774584);
    puVar3[_DAT_112774588] = 1;
    puVar3[_DAT_11277458c] = 1;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bcdd8(PTR__UIApplicationDidBecomeActiveNotification_1103459f8);
    func_0x0001080bc940();
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bcdd8(PTR__UIWindowDidBecomeKeyNotification_110345e78);
    func_0x0001080bc940();
  }
  return puVar3;
}



/* Entry: 1080b671c; end: 1080b68cb; -[SCValdiTextView _ensureAnimatedTextView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b671c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112774568;
  lVar2 = *(long *)(param_1 + lVar4);
  if (lVar2 == 0) {
    lVar2 = param_1;
    func_0x0001080bce98();
    lVar3 = (long)_DAT_112774590;
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(long *)(param_1 + lVar3) = lVar2;
    func_0x0001080bca48(uVar1);
    func_0x00010c2954e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + lVar3);
    func_0x00010c220000();
    func_0x0001080bc940();
    func_0x0001080bce8c();
    func_0x0001080bca40();
    func_0x00010c0147c0();
    func_0x0001080bce28();
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bca60();
    func_0x00010c16e440();
    func_0x0001080bc948();
    func_0x0001080bcbf0();
    func_0x00010c21e900();
    func_0x0001080bcbf0();
    func_0x00010c1af000();
    func_0x00010c160f00(lVar2);
    func_0x0001080bcbf0();
    func_0x00010c193a00();
    func_0x0001080bc9c8();
    func_0x00010c2131e0(lVar2);
    func_0x00010c26ba00(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bce70();
    func_0x0001080bc948();
    func_0x0001080bcbf0();
    func_0x00010c2025c0();
    func_0x0001080bcbf0();
    func_0x00010c165e00();
    func_0x00010c1a7f60(lVar2);
    func_0x0001080bc990();
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(long *)(param_1 + lVar4) = lVar2;
    _objc_release(uVar1);
    func_0x0001080bcbfc();
    func_0x00010c066f80();
    func_0x00010c193e20(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c188f40(*(undefined8 *)(param_1 + lVar3));
    func_0x00010c1e38a0(*(undefined8 *)(param_1 + lVar3));
    _objc_loadWeakRetained(param_1 + _DAT_112774598);
    func_0x00010c2130a0(*(undefined8 *)(param_1 + lVar3));
    func_0x0001080bc948();
    func_0x00010c213080(*(undefined8 *)(param_1 + lVar3));
    if (*(long *)(param_1 + _DAT_1127745a0) != 0) {
      FUN_10809fce0(lVar2);
    }
    func_0x00010bdcec80(param_1);
  }
  else {
    func_0x0001080bc990();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1080b68cc; end: 1080b6ae7; -[SCValdiTextView _ensurePlaceholder] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b68cc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = (long)_DAT_1127745a4;
  puVar2 = *(undefined **)(param_1 + lVar3);
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126d9398;
    _objc_alloc();
    func_0x0001080bca40();
    func_0x00010c013de0();
    lVar4 = (long)_DAT_1127745a8;
    lVar5 = *(long *)(param_1 + lVar4);
    if (lVar5 == 0) {
      func_0x00010c098f40(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
    }
    func_0x0001080bcaa8();
    func_0x00010c213180();
    if (lVar5 == 0) {
      func_0x0001080bc948();
    }
    func_0x0001080bcbf0();
    func_0x00010c21e900();
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bca60();
    func_0x00010c16e440();
    func_0x0001080bc948();
    func_0x0001080bc9c8();
    func_0x00010c2131e0(puVar2);
    func_0x00010c26ba00(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bce70();
    func_0x0001080bc948();
    func_0x0001080bcbf0();
    func_0x00010c2025c0();
    func_0x0001080bcbf0();
    func_0x00010c165e00();
    func_0x00010bf0e540(*(undefined8 *)(param_1 + _DAT_112774564));
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bcf34();
    func_0x00010c1a7f60(puVar2);
    func_0x0001080bc948();
    func_0x0001080bc990();
    uVar1 = *(undefined8 *)(param_1 + lVar3);
    *(undefined **)(param_1 + lVar3) = puVar2;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_1 + lVar4);
    *(undefined8 *)(param_1 + lVar4) = 0;
    _objc_release(uVar1);
    func_0x0001080bcbfc();
    func_0x00010c066f80();
    lVar3 = param_1;
    func_0x00010c2954e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07cb60();
    func_0x0001080bc948();
    lVar4 = param_1;
    func_0x00010c295200(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bc998();
    lVar5 = param_1;
    func_0x00010bfb3b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_10809f700(puVar2,lVar5,lVar4,lVar3,0);
    func_0x0001080bc998();
    func_0x00010bdce5c0(param_1);
    func_0x00010bdcec80(param_1);
    func_0x00010bedd1a0(param_1);
    if (*(long *)(param_1 + _DAT_1127745a0) != 0) {
      FUN_10809fce0(puVar2);
    }
    func_0x0001080bc948();
  }
  else {
    func_0x0001080bc990();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1080b6ae8; end: 1080b6b8b; -[SCValdiTextView dealloc] */

void FUN_1080b6ae8(long param_1)

{
  long lVar1;
  int *unaff_x21;
  
  lVar1 = param_1;
  func_0x0001080bccc4();
  _objc_loadWeakRetained(lVar1 + unaff_x21[0x12]);
  func_0x0001080bcce8();
  func_0x00010c282220();
  func_0x0001080bc940();
  func_0x00010c069d00(*(undefined8 *)(param_1 + unaff_x21[0x13]));
  lVar1 = (long)*unaff_x21;
  func_0x00010c12d580(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar1));
  func_0x00010c26c860(*(undefined8 *)(param_1 + lVar1));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c18b5e0();
  func_0x0001080bc940();
  func_0x0001080bcd58();
  return;
}



/* Entry: 1080b6b8c; end: 1080b6bdf; -[SCValdiTextView didMoveToValdiContext:viewNode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b6b8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x0001080bcfe8();
  func_0x00010c220000();
  func_0x00010c220000(*(undefined8 *)(param_1 + _DAT_112774590),param_2,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1080b6be0; end: 1080b6c87; -[SCValdiTextView willEnqueueIntoValdiPool] */

bool FUN_1080b6be0(undefined *param_1)

{
  int iVar1;
  undefined *puVar2;
  int *unaff_x21;
  
  puVar2 = param_1;
  func_0x0001080bccc4();
  iVar1 = unaff_x21[0xb];
  func_0x00010c149ec0(*(undefined8 *)(puVar2 + iVar1));
  func_0x00010bf3a980(*(undefined8 *)(param_1 + iVar1));
  func_0x00010bec2ce0(param_1);
  iVar1 = unaff_x21[0x12];
  func_0x0001080bcedc();
  func_0x0001080bcce8();
  func_0x00010c282220();
  func_0x0001080bc940();
  _objc_storeWeak(param_1 + iVar1,0);
  *(undefined8 *)(param_1 + unaff_x21[0x14]) = 0;
  iVar1 = *unaff_x21;
  func_0x00010c281840(*(undefined8 *)(param_1 + iVar1));
  func_0x00010c13a0e0(*(undefined8 *)(param_1 + iVar1));
  param_1[unaff_x21[0x15]] = 0;
  *(undefined8 *)(param_1 + unaff_x21[3]) = 0;
  _objc_opt_class(param_1);
  puVar2 = PTR_PTR_1126d93a0;
  _objc_opt_class(PTR_PTR_1126d93a0);
  return param_1 == puVar2;
}



/* Entry: 1080b6c88; end: 1080b6cb7; -[SCValdiTextView didMoveToSuperview] */

void FUN_1080b6c88(void)

{
  func_0x0001080bce08();
  func_0x0001080bcd58();
  func_0x0001080bccb4();
  return;
}



/* Entry: 1080b6cb8; end: 1080b6cef; -[SCValdiTextView didMoveToWindow] */

void FUN_1080b6cb8(undefined8 param_1)

{
  func_0x0001080bce08();
  func_0x0001080bcd58();
  func_0x0001080bccb4();
  func_0x00010bdce660(param_1);
  return;
}



/* Entry: 1080b6cf0; end: 1080b6da7; -[SCValdiTextView _applicationDidBecomeActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b6cf0(long param_1)

{
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  if (*(char *)(param_1 + _DAT_1127745b8) == '\x01') {
    _objc_initWeak(auStack_28,param_1);
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x0001080bcd20();
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 1080b6da8; end: 1080b6e07; -[SCValdiTextView _windowDidBecomeKey:] */

void FUN_1080b6da8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x00010c0dfc60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcab4();
  func_0x00010c2a71e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcae4();
  func_0x0001080bc940();
  if (unaff_x20 != unaff_x21) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdce670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyPendingFocusedIfNeeded_112551338);
  return;
}



/* Entry: 1080b6e08; end: 1080b6e9b; -[SCValdiTextView _applyPendingFocusedIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b6e08(long param_1)

{
  int iVar1;
  ulong uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_1127745b8;
  if (*(char *)(param_1 + lVar4) == '\x01') {
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bcf74();
    if (unaff_x20 != 0) {
      lVar3 = param_1;
      func_0x00010c2a71e0();
      iVar1 = (int)lVar3;
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c075e80();
      func_0x0001080bc940();
      if (iVar1 != 0) {
        lVar3 = (long)_DAT_112774564;
        uVar2 = *(ulong *)(param_1 + lVar3);
        func_0x00010c073040();
        if ((uVar2 & 1) == 0) {
          func_0x00010be61400(param_1);
          iVar1 = (int)*(undefined8 *)(param_1 + lVar3);
          func_0x00010bf179a0();
          if (iVar1 == 0) {
            return;
          }
        }
        *(undefined1 *)(param_1 + lVar4) = 0;
      }
    }
  }
  return;
}



/* Entry: 1080b6e9c; end: 1080b6f3b; -[SCValdiTextView _moveSelectionToEndBeforeFocusIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b6e9c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  long lVar3;
  
  if (*(char *)(param_1 + _DAT_1127745bc) == '\x01') {
    lVar3 = (long)_DAT_112774564;
    func_0x00010c26b700(*(undefined8 *)(param_1 + lVar3));
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bccbc();
    func_0x0001080bc908();
    if (unaff_x21 != 0) {
      func_0x00010c26b700(*(undefined8 *)(param_1 + lVar3));
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080bccbc();
      uVar1 = *(undefined8 *)(param_1 + lVar3);
      func_0x00010c1fb500(uVar1);
      func_0x0001080bc940();
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      func_0x0001080bcf64();
                    /* WARNING: Could not recover jumptable at 0x00010c1521b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (uVar2,PTR_s_scrollRangeToVisible__112632288,uVar1,param_2);
      return;
    }
  }
  return;
}



/* Entry: 1080b6f3c; end: 1080b6f3f; -[SCValdiTextView observeValueForKeyPath:ofObject:change:context:] */

void FUN_1080b6f3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bed6030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateContentInset_1125931b0);
  return;
}



/* Entry: 1080b6f40; end: 1080b6fcf; -[SCValdiTextView layoutSubviews] */

void FUN_1080b6f40(int param_1)

{
  long extraout_x8;
  undefined1 extraout_w9;
  long unaff_x19;
  
  func_0x0001080bcc30();
  func_0x00010c08cde0();
  if (param_1 != 0) {
    func_0x0001080bcde8();
    *(undefined1 *)(unaff_x19 + extraout_x8) = extraout_w9;
  }
  func_0x00010bee1d80();
  func_0x00010bed3500();
  func_0x00010bed9b80();
  func_0x0001080bcd58();
  func_0x00010bed8640();
  func_0x00010bed6020();
  func_0x00010bedd1a0();
  func_0x00010bedc580();
  func_0x00010bed9bc0();
  func_0x0001080bcf6c();
  return;
}



/* Entry: 1080b6fd0; end: 1080b6feb; -[SCValdiTextView scrollViewDidScroll:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b6fd0(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != *(long *)(param_1 + _DAT_112774564)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bec9730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__syncAnimatedTextOverlayContentO_11258ff70);
  return;
}



/* Entry: 1080b6fec; end: 1080b705f; -[SCValdiTextView _syncAnimatedTextOverlayContentOffset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b6fec(double param_1,double param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  double unaff_d8;
  double unaff_d9;
  
  lVar2 = (long)_DAT_112774568;
  if (*(long *)(param_3 + lVar2) != 0) {
    func_0x00010bf4cdc0(*(undefined8 *)(param_3 + _DAT_112774564));
    func_0x0001080bcc64();
    func_0x00010bf4cdc0(*(undefined8 *)(param_3 + lVar2));
    bVar1 = false;
    if ((param_1 == unaff_d8) && (bVar1 = false, !NAN(param_2) && !NAN(unaff_d9))) {
      bVar1 = param_2 == unaff_d9;
    }
    if (!bVar1) {
      func_0x0001080bccf4(*(undefined8 *)(param_3 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c1822f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)();
      return;
    }
  }
  return;
}



/* Entry: 1080b7060; end: 1080b7197; -[SCValdiTextView _updateFrame] */

/* WARNING: Possible PIC construction at 0x0001080b7090: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001080b70bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001080b70ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001080b7094) */
/* WARNING: Removing unreachable block (ram,0x0001080b70c0) */
/* WARNING: Removing unreachable block (ram,0x0001080b70e4) */
/* WARNING: Removing unreachable block (ram,0x0001080b70b4) */
/* WARNING: Removing unreachable block (ram,0x0001080b70f0) */
/* WARNING: Removing unreachable block (ram,0x0001080b7100) */
/* WARNING: Removing unreachable block (ram,0x0001080b7170) */
/* WARNING: Removing unreachable block (ram,0x0001080b7158) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b7060(long param_1)

{
  func_0x00010bf20c00();
                    /* WARNING: Could not recover jumptable at 0x00010c19f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127745c4),PTR_s_setFrame__112645658);
  return;
}



/* Entry: 1080b7198; end: 1080b7287; -[SCValdiTextView sizeThatFits:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b7198(long param_1)

{
  func_0x0001080bcff4();
  func_0x00010bed3500();
  _objc_opt_class(param_1);
  func_0x0001080bcab4();
  func_0x00010bfb3b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26b700(*(undefined8 *)(param_1 + _DAT_1127745a4));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf14260(*(undefined8 *)(param_1 + _DAT_11277456c));
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bce40();
  func_0x00010c0c3ee0();
  func_0x0001080bcc64();
  func_0x0001080bc9dc();
  func_0x0001080bc950();
  func_0x0001080bc9a0();
  func_0x0001080bc948();
  func_0x0001080bccf4();
  return;
}



/* Entry: 1080b7288; end: 1080b74cf; -[SCValdiTextView _updateTextViewInset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b7288(double param_1,double param_2,double param_3,double param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long unaff_x19;
  long unaff_x20;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  
  FUN_1080bc8a0();
  func_0x0001080bcf54();
  dVar11 = param_1;
  dVar6 = param_3;
  dVar12 = param_4;
  func_0x0001080bca40();
  dVar7 = dVar12;
  if ((param_1 != param_3) && (lVar4 = unaff_x19, FUN_1080b74d0(), (int)lVar4 != 0)) {
    dVar11 = param_3;
    func_0x0001080bcd60();
  }
  func_0x0001080bc988();
  lVar4 = unaff_x19;
  func_0x00010bf0e540();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcf34();
  func_0x0001080bc948();
  if (lVar4 != 0) {
    func_0x00010c08ce80();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26ba00();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bccd0();
    func_0x00010bf96780();
    func_0x0001080bc960();
    func_0x0001080bc948();
    func_0x00010c08ce80();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = unaff_x19;
    func_0x00010c26ba00();
    iVar3 = (int)lVar4;
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bccd0();
    func_0x00010c290f80();
    func_0x0001080bc960();
    func_0x0001080bc948();
    func_0x0001080bcfd4();
    _CGRectIsEmpty();
    if (iVar3 == 0) {
      func_0x0001080bcfd4();
      _CGRectGetMaxY();
      dVar11 = param_3 + param_3 + dVar11;
      goto LAB_1080b73c0;
    }
  }
  dVar11 = param_3;
  FUN_1080bc514(param_3,param_3);
LAB_1080b73c0:
  func_0x0001080bc950();
  FUN_1080b74d0();
  dVar5 = dVar12;
  if (((uint)unaff_x19 & (uint)(dVar11 < dVar12)) == 0) {
    dVar5 = dVar11;
  }
  dVar12 = dVar12 - dVar5;
  dVar11 = dVar12 * 0.5;
  if (*(long *)(unaff_x20 + _DAT_112774574) == 2) {
    dVar11 = dVar12;
  }
  dVar5 = 0.0;
  if (*(long *)(unaff_x20 + _DAT_112774574) != 0) {
    dVar5 = dVar11;
  }
  dVar11 = 0.0;
  if (0.0 <= dVar5) {
    dVar11 = dVar5;
  }
  func_0x00010c279540();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf86320();
  func_0x0001080bc940();
  if (dVar5 <= 1.0) {
    dVar5 = 1.0;
  }
  dVar12 = dVar12 - 1.0 / dVar5;
  if (dVar12 <= 0.0) {
    dVar12 = 0.0;
  }
  if (dVar12 <= dVar11) {
    dVar11 = dVar12;
  }
  dVar12 = param_3 + dVar11;
  func_0x0001080bcf54();
  bVar1 = false;
  if ((dVar5 == param_2) && (bVar1 = false, !NAN(dVar11) && !NAN(dVar12))) {
    bVar1 = dVar11 == dVar12;
  }
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(dVar7) && !NAN(param_4))) {
    bVar2 = dVar7 == param_4;
  }
  bVar1 = false;
  if ((bVar2) && (bVar1 = false, !NAN(dVar6) && !NAN(param_3))) {
    bVar1 = dVar6 == param_3;
  }
  if (!bVar1) {
    func_0x0001080bcd60();
    dVar11 = dVar12;
  }
  func_0x00010bf4c7c0();
  dVar12 = dVar11;
  dVar8 = dVar5;
  dVar9 = dVar6;
  dVar10 = dVar7;
  func_0x0001080bc9c8();
  bVar1 = false;
  if ((dVar8 == dVar5) && (bVar1 = false, !NAN(dVar12) && !NAN(dVar11))) {
    bVar1 = dVar12 == dVar11;
  }
  bVar2 = false;
  if ((bVar1) && (bVar2 = false, !NAN(dVar10) && !NAN(dVar7))) {
    bVar2 = dVar10 == dVar7;
  }
  bVar1 = false;
  if ((bVar2) && (bVar1 = false, !NAN(dVar9) && !NAN(dVar6))) {
    bVar1 = dVar9 == dVar6;
  }
  if (!bVar1) {
    func_0x00010c181f80();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b74d0; end: 1080b7603;  */

/* WARNING: Removing unreachable block (ram,0x0001080b75ac) */

bool FUN_1080b74d0(undefined8 param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong unaff_x19;
  long unaff_x21;
  
  func_0x0001080bcf84();
  uVar2 = unaff_x19;
  func_0x00010c07d3e0();
  if ((uVar2 & 1) == 0) {
    uVar2 = unaff_x19;
    func_0x00010c08ce80();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bcab4();
    func_0x00010c26ba00();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bca60();
    func_0x00010bfcd260();
    uVar3 = uVar2;
    lVar4 = param_2;
    func_0x0001080bcda8();
    func_0x00010bf35a00();
    func_0x00010c26c860();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x0001080bc998();
    if (uVar3 + lVar4 < unaff_x19) {
      func_0x00010c0c3580();
      if (unaff_x21 == 0) {
        bVar1 = true;
      }
      else {
        func_0x0001080bc990();
        if (uVar2 < uVar2 + param_2) {
          func_0x0001080bcda8();
          func_0x00010c099260();
        }
        func_0x0001080bc940();
        bVar1 = unaff_x21 != 0;
      }
    }
    else {
      bVar1 = false;
    }
    func_0x0001080bc948();
    func_0x0001080bc940();
  }
  else {
    bVar1 = false;
  }
  func_0x0001080bc950();
  return bVar1;
}



/* Entry: 1080b7604; end: 1080b7663; -[SCValdiTextView _updateContentInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b7604(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x21;
  
  lVar1 = (long)_DAT_1127745d4;
  if ((*(byte *)(param_1 + lVar1) & 1) == 0) {
    *(undefined1 *)(param_1 + lVar1) = 1;
    func_0x0001080bccc4();
    func_0x00010bee1e60();
    func_0x00010bee1e60(param_1,param_2,*(undefined8 *)(param_1 + *(int *)(unaff_x21 + 4)));
    func_0x00010bec9720(param_1);
    *(undefined1 *)(param_1 + lVar1) = 0;
  }
  return;
}



/* Entry: 1080b7664; end: 1080b7673; -[SCValdiTextView _updatePlaceholderInset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b7664(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee1e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__updateTextViewInset__112596140,*(undefined8 *)(param_1 + _DAT_1127745a4)
            );
  return;
}



/* Entry: 1080b7674; end: 1080b770f; -[SCValdiTextView _updateOnLayoutIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b7674(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar4 = (long)_DAT_1127745c8;
  if ((*(char *)(param_1 + lVar4) == '\x01') &&
     (lVar2 = (long)_DAT_112774594, *(long *)(param_1 + lVar2) != 0)) {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112774564);
    func_0x0001080bc990();
    uVar3 = *(undefined8 *)(param_1 + lVar2);
    func_0x0001080bcb60();
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1080b7710;
    puStack_40 = &UNK_110a1cac0;
    uStack_38 = uVar1;
    func_0x0001080bc990();
    func_0x00010bf97f20(uVar3,param_2,auStack_58);
    *(undefined1 *)(param_1 + lVar4) = 0;
    func_0x0001080bcb40();
    func_0x0001080bc940();
  }
  return;
}



/* Entry: 1080b7710; end: 1080b786b;  */

void FUN_1080b7710(double param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined8 uVar1;
  double dVar2;
  
  func_0x0001080bcb38();
  uVar1 = *(undefined8 *)(param_5 + 0x20);
  func_0x00010bf193c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1042e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bc998();
  func_0x00010c1042e0(*(undefined8 *)(param_5 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26c600(*(undefined8 *)(param_5 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb1b20(*(undefined8 *)(param_5 + 0x20));
  dVar2 = param_2;
  func_0x00010b97f424();
  func_0x00010bf4c7c0(*(undefined8 *)(param_5 + 0x20));
  dVar2 = (double)(ulong)(uint)(float)(param_1 + dVar2);
  func_0x00010b9685a0(dVar2);
  func_0x0001080bcd50();
  func_0x00010bf4c7c0(*(undefined8 *)(param_5 + 0x20));
  func_0x00010b9685a0((float)(param_2 + dVar2));
  func_0x0001080bcd50();
  func_0x00010b9685a0((float)param_3);
  func_0x0001080bcd50();
  func_0x00010b9685a0((float)param_4);
  func_0x0001080bcd50();
  func_0x00010c0f9540(param_6);
  func_0x0001080bcd10();
  func_0x0001080bc998();
  func_0x0001080bc948();
  func_0x0001080bc940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1080b786c; end: 1080b798f; -[SCValdiTextView _updateInlineTextAttachmentsIfNeeded] */

/* WARNING: Possible PIC construction at 0x0001080b7968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001080b796c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b786c(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = (long)_DAT_112774594;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010bfd7f80();
  if (iVar1 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
    func_0x00010c286900();
    if (iVar1 != 0) {
      func_0x00010bf0e280(*(undefined8 *)(param_1 + lVar2));
      _objc_retainAutoreleasedReturnValue();
      lVar3 = (long)_DAT_112774564;
      func_0x00010c16b720(*(undefined8 *)(param_1 + lVar3));
      func_0x0001080bc940();
      func_0x00010bf0e280(*(undefined8 *)(param_1 + lVar2));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfd41a0(*(undefined8 *)(param_1 + lVar2));
      func_0x0001080bcbfc();
      func_0x00010bed31c0();
      func_0x0001080bc940();
      func_0x00010bf0e540(*(undefined8 *)(param_1 + lVar3));
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080bccbc();
      func_0x0001080bc908();
      func_0x00010c08ce80(*(undefined8 *)(param_1 + lVar3));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06a020();
      func_0x0001080bc940();
      func_0x00010c08ce80(*(undefined8 *)(param_1 + lVar3));
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c069e80();
      func_0x0001080bc940();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)
                (*(undefined8 *)(param_1 + lVar3),PTR_s_setNeedsDisplay_112650978);
      return;
    }
  }
  return;
}



/* Entry: 1080b7990; end: 1080b7aa7; -[SCValdiTextView _updateInlineTextChildFrames] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b7990(double param_1,double param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x24;
  double dVar5;
  double dVar6;
  double unaff_d8;
  double unaff_d9;
  
  lVar4 = *(long *)(param_3 + _DAT_1127745c4);
  func_0x0001080bc988();
  if (lVar4 != 0) {
    func_0x0001080bcfa8();
    lVar1 = *(long *)(param_3 + unaff_x24);
    func_0x00010bf0e540();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bccbc();
    if (lVar1 == 0) {
      FUN_1080a2ca4(*(undefined8 *)PTR__CGPointZero_110347540,
                    *(undefined8 *)(PTR__CGPointZero_110347540 + 8),
                    *(undefined8 *)(param_3 + _DAT_112774594),0,0,lVar4);
    }
    else {
      uVar2 = *(undefined8 *)(param_3 + unaff_x24);
      func_0x00010c08ce80(uVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_3 + unaff_x24);
      func_0x00010c26ba00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf96780(uVar2);
      func_0x00010c26ba40(*(undefined8 *)(param_3 + unaff_x24));
      func_0x0001080bcc64();
      func_0x00010bf4c7c0(*(undefined8 *)(param_3 + unaff_x24));
      dVar5 = param_1;
      dVar6 = param_2;
      func_0x00010bf4cdc0(*(undefined8 *)(param_3 + unaff_x24));
      FUN_1080a2ca4((unaff_d9 + param_2) - dVar5,(unaff_d8 + param_1) - dVar6,
                    *(undefined8 *)(param_3 + _DAT_112774594),uVar2,uVar3,lVar4);
      func_0x0001080bc998();
      func_0x0001080bc960();
    }
    func_0x0001080bc940();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1080b7aa8; end: 1080b7b3f; -[SCValdiTextView _updateInlineTextChildAnimations] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b7aa8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + _DAT_1127745c4);
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + _DAT_112774590);
    func_0x0001080bca18();
    uVar2 = *(undefined8 *)(param_1 + _DAT_112774594);
    func_0x0001080bcb60();
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_1080b7b40;
    puStack_40 = &UNK_110a1b950;
    uStack_38 = uVar3;
    func_0x0001080bca18();
    func_0x0001080bc988();
    FUN_1080a2ec4(uVar2,lVar1,auStack_58);
    func_0x0001080bcb40();
    func_0x0001080bc948();
    func_0x0001080bc950();
  }
  return;
}



/* Entry: 1080b7b40; end: 1080b7b4f;  */

void FUN_1080b7b40(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10f4b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_presentationForAnimationRange__112621748,param_2,
             param_3);
  return;
}



/* Entry: 1080b7b50; end: 1080b7bcf; -[SCValdiTextView contentViewForInsertingValdiChildren] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b7b50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127745c4;
  lVar2 = *(long *)(param_1 + lVar3);
  if (lVar2 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x0001080bca40();
    func_0x00010c013de0(puVar1);
    func_0x0001080bc8e0();
    func_0x0001080bce28();
    func_0x00010bf3ae40();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bcdc8();
    func_0x0001080bc940();
    func_0x00010c1af000(*(undefined8 *)(param_1 + lVar3),param_2,0);
    func_0x0001080bce80();
    lVar2 = *(long *)(param_1 + lVar3);
  }
  func_0x0001080bc990();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1080b7bd0; end: 1080b7da7; -[SCValdiTextView _updateEffectsLayoutManager] */

/* WARNING: Possible PIC construction at 0x0001080b7d84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001080b7d88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b7bd0(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  lVar1 = (long)_DAT_11277456c;
  func_0x00010c193e20(*(undefined8 *)(param_2 + lVar1),param_3,
                      *(undefined8 *)(param_2 + _DAT_1127745d8));
  func_0x00010c188f40(*(undefined8 *)(param_2 + lVar1));
  func_0x00010c1e38a0(*(undefined8 *)(param_2 + lVar1));
  func_0x00010bf14260(*(undefined8 *)(param_2 + lVar1));
  lVar2 = (long)_DAT_112774564;
  func_0x00010c26ba00(*(undefined8 *)(param_2 + lVar2));
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcfa0();
  func_0x0001080bc940();
  func_0x00010bf14260(*(undefined8 *)(param_2 + lVar1));
  param_1 = param_1 * 0.5;
  func_0x00010c2131e0(param_1,0,param_1,0,*(undefined8 *)(param_2 + lVar2));
  lVar1 = (long)_DAT_112774590;
  func_0x00010c193e20(*(undefined8 *)(param_2 + lVar1));
  func_0x00010c188f40(*(undefined8 *)(param_2 + lVar1));
  func_0x00010c1e38a0(*(undefined8 *)(param_2 + lVar1));
  func_0x00010c26ba00(*(undefined8 *)(param_2 + lVar2));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099240();
  lVar1 = (long)_DAT_112774568;
  func_0x00010c26ba00(*(undefined8 *)(param_2 + lVar1));
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcfa0();
  func_0x0001080bc948();
  func_0x0001080bc940();
  func_0x00010c26ba00(*(undefined8 *)(param_2 + lVar2));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c3580();
  func_0x00010c26ba00(*(undefined8 *)(param_2 + lVar1));
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcd70();
  func_0x0001080bc960();
  func_0x0001080bc940();
  func_0x00010c26ba00(*(undefined8 *)(param_2 + lVar2));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099180();
  func_0x00010c26ba00(*(undefined8 *)(param_2 + lVar1));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  func_0x0001080bc960();
  func_0x0001080bc940();
  func_0x00010c26ba40(*(undefined8 *)(param_2 + lVar2));
  func_0x00010c2131e0(param_1 + *(double *)(param_2 + _DAT_1127745cc),
                      *(undefined8 *)(param_2 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_2 + lVar2),PTR_s_setNeedsDisplay_112650978);
  return;
}



/* Entry: 1080b7da8; end: 1080b7dff; -[SCValdiTextView _animatedTextEffectsLayoutManager] */

void FUN_1080b7da8(long param_1)

{
  long extraout_x8;
  
  func_0x0001080bd000();
  func_0x00010c26c860(*(undefined8 *)(param_1 + extraout_x8));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cea0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bc908();
  func_0x0001080bc950();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080b7e00; end: 1080b7eaf; -[SCValdiTextView _startAnimatedTextDisplayLinkIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b7e00(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127745b0;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126d93a8;
  _objc_alloc();
  func_0x00010c0508e0();
  func_0x0001080bcaa8();
  func_0x00010bf85b60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  func_0x0001080bca48(uVar2);
  func_0x0001080bc948();
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcbfc();
  func_0x00010befc2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1080b7eb0; end: 1080b7edf; -[SCValdiTextView _stopAnimatedTextDisplayLink] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b7eb0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_1127745b0;
  func_0x00010c069d00(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080b7ee0; end: 1080b7f33; -[SCValdiTextView _animatedTextDisplayLinkDidFire:] */

void FUN_1080b7ee0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  long extraout_x8;
  
  uVar1 = param_1;
  func_0x00010bdcb4e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c069d60();
  func_0x0001080bd000();
  func_0x00010c1cbd40(*(undefined8 *)(param_1 + extraout_x8));
  func_0x0001080bcf6c();
  if ((uVar2 & 1) == 0) {
    func_0x00010bec2ce0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080b7f34; end: 1080b829b; -[SCValdiTextView _updateAnimatedTextOverlayWithAttributedString:isEnabled:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b7f34(double param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  bool bVar1;
  undefined8 uVar2;
  long unaff_x19;
  long unaff_x20;
  long lVar3;
  long lVar4;
  double dVar5;
  long lVar6;
  double unaff_d9;
  undefined1 auStack_e8 [8];
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  FUN_1080bc8a0();
  lVar6 = 0;
  if (param_6 != 0) {
    lVar4 = unaff_x20;
    func_0x00010be0a360();
    _objc_unsafeClaimAutoreleasedReturnValue();
    if (unaff_x19 != 0) {
      lVar3 = *(long *)(unaff_x20 + _DAT_112774594);
      func_0x0001080bcadc();
      func_0x0001080bc988();
      if ((lVar3 != 0) && (func_0x0001080bcb08(), lVar4 != 0)) {
        puStack_88 = &uStack_90;
        uStack_90 = 0;
        uStack_80 = 0x2020000000;
        uStack_78 = 0;
        puStack_a8 = &uStack_b0;
        uStack_b0 = 0;
        uStack_a0 = 0x2020000000;
        uStack_98 = 0;
        func_0x0001080bcb60();
        uStack_e0 = 0xc2000000;
        pcStack_d8 = FUN_1080bc580;
        puStack_d0 = &UNK_110a1d660;
        func_0x0001080bc988();
        func_0x00010bf97aa0(lVar3,param_4,auStack_e8);
        param_2 = 8.0;
        param_1 = (double)puStack_88[3] + (double)puStack_a8[3] + 8.0;
        lVar6 = (long)param_1;
        func_0x0001080bcb40();
        func_0x0001080bcd48(&uStack_b0);
        func_0x0001080bcd48(&uStack_90);
      }
      func_0x0001080bc950();
      func_0x0001080bc960();
    }
  }
  lVar3 = (long)_DAT_1127745cc;
  *(long *)(unaff_x20 + lVar3) = lVar6;
  lVar6 = (long)_DAT_112774568;
  uVar2 = *(undefined8 *)(unaff_x20 + lVar6);
  func_0x00010c1a7f60(uVar2,param_4,param_6 ^ 1);
  func_0x0001080bce28();
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(*(undefined8 *)(unaff_x20 + lVar6),param_4,uVar2);
  func_0x0001080bc960();
  lVar4 = (long)_DAT_112774564;
  func_0x00010c26ba00(*(undefined8 *)(unaff_x20 + lVar4));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099240();
  dVar5 = param_1;
  func_0x00010c26ba00(*(undefined8 *)(unaff_x20 + lVar6));
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcfa0();
  func_0x0001080bc998();
  func_0x0001080bc960();
  func_0x00010c26ba00(*(undefined8 *)(unaff_x20 + lVar4));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c3580();
  func_0x00010c26ba00(*(undefined8 *)(unaff_x20 + lVar6));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3c00();
  func_0x0001080bc9a0();
  func_0x0001080bc960();
  func_0x00010c26ba00(*(undefined8 *)(unaff_x20 + lVar4));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c099180();
  func_0x00010c26ba00(*(undefined8 *)(unaff_x20 + lVar6));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1bdb00();
  func_0x0001080bc9a0();
  func_0x0001080bc960();
  func_0x00010c26ba40(*(undefined8 *)(unaff_x20 + lVar4));
  dVar5 = dVar5 + *(double *)(unaff_x20 + lVar3);
  func_0x00010c2131e0(*(undefined8 *)(unaff_x20 + lVar6));
  func_0x00010c17d4c0(*(undefined8 *)(unaff_x20 + lVar6),param_4,
                      *(undefined1 *)(unaff_x20 + _DAT_112774560));
  func_0x00010c08c0e0(*(undefined8 *)(unaff_x20 + lVar6));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c2d20();
  func_0x0001080bc998();
  if (((param_6 ^ 1) & 1) == 0) {
    func_0x00010bf21300();
    func_0x00010bed8640();
    func_0x00010c16b720(*(undefined8 *)(unaff_x20 + lVar6));
    func_0x00010bec9720();
    func_0x00010bf4cdc0(*(undefined8 *)(unaff_x20 + lVar6));
    func_0x0001080bcc64();
    func_0x00010bf4cdc0(*(undefined8 *)(unaff_x20 + lVar4));
    bVar1 = false;
    if ((param_1 == dVar5) && (bVar1 = false, !NAN(unaff_d9) && !NAN(param_2))) {
      bVar1 = unaff_d9 == param_2;
    }
    if (!bVar1) {
      func_0x00010c1cbe20();
    }
    func_0x00010bdcb4e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c069d60();
    func_0x0001080bc948();
    func_0x00010bed9ba0();
    func_0x0001080bcd40();
    func_0x0001080bcae4();
    if (unaff_x20 == 0) {
      func_0x00010bebf5a0();
    }
    else {
      func_0x0001080bcd40();
      func_0x00010c250ec0();
      func_0x0001080bc940();
    }
  }
  else {
    func_0x00010bed8640();
    func_0x00010c16b720(*(undefined8 *)(unaff_x20 + lVar6),param_4,0);
    func_0x00010bec2ce0();
  }
  func_0x0001080bc950();
  return;
}



/* Entry: 1080b829c; end: 1080b835b; -[SCValdiTextView _applyTextOverflowAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b829c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112774564;
  if ((*(byte *)(param_1 + _DAT_1127745e0) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    func_0x00010c0711e0(uVar1);
  }
  else {
    uVar1 = 0;
  }
  func_0x00010c1f7b20(*(undefined8 *)(param_1 + lVar2),param_2,uVar1);
  func_0x00010c26ba00(*(undefined8 *)(param_1 + lVar2));
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcf28();
  func_0x0001080bc948();
  lVar2 = (long)_DAT_1127745a4;
  func_0x0001080bcea4();
  func_0x00010c26ba00(*(undefined8 *)(param_1 + lVar2));
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcf28();
  func_0x0001080bc948();
  lVar2 = (long)_DAT_112774568;
  func_0x0001080bcea4();
  func_0x00010c26ba00(*(undefined8 *)(param_1 + lVar2));
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcce8();
  func_0x00010c1bdb00();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080b835c; end: 1080b83f7; -[SCValdiTextView _applyNumberOfLinesAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b835c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bfb3b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0def20();
  func_0x0001080bc908();
  func_0x00010c26ba00(*(undefined8 *)(param_1 + _DAT_112774564));
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcd70();
  func_0x0001080bc940();
  func_0x00010c26ba00(*(undefined8 *)(param_1 + _DAT_1127745a4));
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcd70();
  func_0x0001080bc940();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112774568);
  func_0x00010c26ba00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcd70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080b83f8; end: 1080b853f; -[SCValdiTextView onTapFunctionAtLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b83f8(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x24;
  long lVar7;
  
  func_0x0001080bcfa8();
  func_0x00010bf512a0();
  func_0x0001080bcc64();
  iVar1 = (int)*(undefined8 *)(param_1 + unaff_x24);
  func_0x00010bf20c00();
  _CGRectContainsPoint();
  if (iVar1 == 0) {
    uVar5 = 0;
    goto LAB_1080b8520;
  }
  lVar4 = *(long *)(param_1 + _DAT_1127745e4);
  func_0x0001080bc988();
  lVar7 = (long)_DAT_112774594;
  lVar2 = *(long *)(param_1 + lVar7);
  func_0x00010bfd9a20();
  uVar5 = 0;
  if (((int)lVar2 != 0) && (lVar4 != 0)) {
    func_0x0001080bcb08();
    if (lVar2 == 0) {
      uVar5 = 0;
    }
    else {
      lVar2 = *(long *)(param_1 + unaff_x24);
      func_0x0001080bccf4();
      func_0x00010bf359e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c24d960();
      _objc_retainAutoreleasedReturnValue();
      if (lVar2 == 0) {
LAB_1080b8508:
        uVar5 = 0;
      }
      else {
        uVar6 = *(ulong *)(param_1 + unaff_x24);
        uVar3 = uVar6;
        func_0x00010bf193c0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e1ce0(uVar6,param_2,uVar3,lVar2);
        uVar3 = uVar6;
        func_0x0001080bc9a0();
        if (((long)uVar6 < 0) || (func_0x0001080bcb08(), uVar3 <= uVar6)) goto LAB_1080b8508;
        uVar5 = *(undefined8 *)(param_1 + lVar7);
        func_0x00010c0e6f80(uVar5,param_2,uVar6,0);
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x0001080bc960();
      func_0x0001080bc948();
    }
  }
  func_0x0001080bc950();
LAB_1080b8520:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1080b8540; end: 1080b8657; -[SCValdiTextView _getAttributedTextOnTapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b8540(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 extraout_x8;
  long lVar6;
  undefined *puVar7;
  
  func_0x0001080bcb28();
  uVar3 = param_1[_DAT_112774550] == '\x01';
  if ((bool)uVar3) {
    func_0x00010bfc1c00();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = param_1;
    func_0x0001080bcb20();
    lVar2 = lRam0000000000000000;
    while (puVar4 != (undefined *)0x0) {
      puVar7 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(param_1);
        }
        puVar5 = PTR_PTR_1126d9300;
        lVar6 = *(long *)((long)puVar7 * 8);
        func_0x0001080bca18();
        _objc_opt_class();
        func_0x0001080bceb8();
        uVar3 = ((ulong)puVar5 & 1) == 0;
        lVar1 = lVar6;
        if ((bool)uVar3) {
          lVar1 = 0;
        }
        func_0x0001080bcadc();
        func_0x0001080bc948();
        if (lVar1 != 0) goto LAB_1080b861c;
        puVar7 = puVar7 + 1;
        uVar3 = puVar7 == puVar4;
      } while (puVar7 < puVar4);
      func_0x0001080bc968();
      puVar4 = puVar5;
    }
    puVar5 = (undefined *)0x0;
    lVar6 = 0;
LAB_1080b861c:
    func_0x0001080bc950();
    param_1 = puVar5;
  }
  else {
    lVar6 = 0;
  }
  func_0x0001080bc9b4(extraout_x8);
  if ((bool)uVar3) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
    return;
  }
  ___stack_chk_fail();
  puVar4 = param_1;
  func_0x00010be1d060();
  _objc_retainAutoreleasedReturnValue();
  if (puVar4 != (undefined *)0x0) {
    param_1[_DAT_112774550] = 0;
    func_0x00010c12c9c0(param_1,param_2,puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1080b8658; end: 1080b869f; -[SCValdiTextView _removeAttributedTextOnTapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b8658(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be1d060();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined1 *)(param_1 + _DAT_112774550) = 0;
    func_0x00010c12c9c0(param_1,param_2,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1080b86a0; end: 1080b870f; -[SCValdiTextView _addAttributedTextOnTapGestureRecognizer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b86a0(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = param_1;
  func_0x00010be1d060();
  _objc_retainAutoreleasedReturnValue();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126d9300;
    _objc_alloc_init(PTR_PTR_1126d9300);
    func_0x00010c178320();
    param_1[_DAT_112774550] = 1;
    func_0x0001080bcbfc();
    func_0x00010bef9040();
    func_0x00010c1a1800(puVar1,param_2,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1080b8710; end: 1080b87ef; -[SCValdiTextView notifyTextValueDidChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b8710(long param_1)

{
  long unaff_x19;
  
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  if (lRam0000000113729258 != -1) {
    func_0x000107c27d9c(0x113729258,&PTR___NSConcreteGlobalBlock_110a1d690);
  }
  func_0x00010c2954e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcda8();
  func_0x00010bf737c0();
  func_0x0001080bc9a0();
  func_0x0001080bc948();
  func_0x0001080bc940();
  func_0x0001080bcf84(*(undefined8 *)(param_1 + _DAT_1127745e8));
  func_0x0001080bc990();
  if (unaff_x19 != 0) {
    func_0x00010b97f424();
    FUN_1080bb74c();
    func_0x0001080bcc70();
    func_0x00010c0f9540();
    func_0x0001080bc930();
  }
  func_0x0001080bc940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x19);
  return;
}



/* Entry: 1080b87f0; end: 1080b885b;  */

void FUN_1080b87f0(void)

{
  long unaff_x19;
  
  func_0x0001080bcf84();
  func_0x0001080bc990();
  if (unaff_x19 != 0) {
    func_0x00010b97f424();
    FUN_1080bb74c();
    func_0x0001080bcc70();
    func_0x00010c0f9540();
    func_0x0001080bc930();
  }
  func_0x0001080bc940();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b885c; end: 1080b886b; -[SCValdiTextView updateLabelMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1080b885c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x19;
  
  FUN_10809ffb0(param_1,*(undefined8 *)(param_1 + _DAT_112774564));
  func_0x00010809ffec();
  lVar1 = unaff_x19;
  func_0x00010c26c440();
  if (lVar1 != param_3) {
    func_0x00010c26c440();
    if (unaff_x19 == 1) {
      FUN_10809f448();
    }
    else if (unaff_x19 == 0) {
      func_0x00010c212f20();
    }
    func_0x00010c213560();
  }
  func_0x00010809ffc4();
  func_0x00010809ffbc();
  return lVar1 != param_3;
}



/* Entry: 1080b886c; end: 1080b88a7; -[SCValdiTextView _needAttributedString] */

undefined8 FUN_1080b886c(undefined8 param_1)

{
  func_0x00010bfb3b00();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080bcab4();
  FUN_10809f3b8();
  func_0x0001080bc940();
  return param_1;
}



/* Entry: 1080b88a8; end: 1080b89c7; -[SCValdiTextView _processedTextConfigurationWithFontAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b88a8(long param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  
  func_0x0001080bc958();
  lVar2 = *(long *)(param_1 + _DAT_1127745c0);
  func_0x00010bfcd8a0();
  _objc_retainAutoreleasedReturnValue();
  if ((lVar2 == 0) && (*(long *)(param_1 + _DAT_1127745dc) == 0)) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126d9308;
    _objc_opt_new(PTR_PTR_1126d9308);
    func_0x00010c19ea80();
    if (*(long *)(param_1 + _DAT_1127745dc) != 0) {
      func_0x00010c188f40(puVar3);
      func_0x00010c188f00(puVar3,param_2,2);
      func_0x00010c188ec0(puVar3,param_2,&PTR____CFConstantStringClassReference_110ed5cb8);
      if (lVar2 == 0) {
        func_0x00010bf40c40();
        _objc_retainAutoreleasedReturnValue();
        if (param_3 == 0) {
          func_0x0001080bce28();
          func_0x00010bf1c920();
          _objc_retainAutoreleasedReturnValue();
          bVar1 = true;
        }
        else {
          bVar1 = false;
        }
      }
      else {
        bVar1 = false;
        param_3 = lVar2;
      }
      func_0x00010c188ee0(puVar3,param_2,param_3);
      if (bVar1) {
        func_0x0001080bc998();
      }
      if (lVar2 == 0) {
        func_0x0001080bc960();
      }
    }
  }
  func_0x0001080bc940();
  func_0x0001080bc950();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1080b89c8; end: 1080b8f97; -[SCValdiTextView _updateAttributedTextIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1080b89c8(int *param_1)

{
  byte bVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  ulong uVar12;
  int *piVar13;
  ulong uVar14;
  int *piVar15;
  int *unaff_x20;
  long lVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined8 uVar19;
  int iVar20;
  long lVar21;
  int *piVar22;
  
  lVar21 = (long)_DAT_1127745ec;
  *(undefined1 *)((long)param_1 + lVar21) = 1;
  if (*(char *)((long)param_1 + (long)_DAT_11277457c) == '\x01') {
    *(undefined1 *)((long)param_1 + (long)_DAT_11277457c) = 0;
    piVar7 = param_1;
    func_0x00010c2954e0();
    _objc_retainAutoreleasedReturnValue();
    piVar22 = piVar7;
    func_0x00010c07cb60();
    func_0x0001080bc948();
    piVar8 = param_1;
    func_0x00010c295200();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bc960();
    piVar9 = param_1;
    func_0x00010bfb3b00(param_1);
    _objc_retainAutoreleasedReturnValue();
    piVar13 = param_1;
    func_0x00010be625e0();
    if ((int)piVar13 == 0) {
      func_0x0001080bcdb4();
      func_0x00010c286d60();
      func_0x0001080bce34();
      func_0x0001080bcc58((long)unaff_x20[0xc]);
      func_0x0001080bcf94((long)unaff_x20[2]);
      func_0x0001080bcf94((long)unaff_x20[0xb]);
      *(undefined8 *)((long)param_1 + (long)unaff_x20[0x14]) = 0;
      func_0x0001080bccb4();
      uVar12 = (ulong)*unaff_x20;
      uVar19 = *(undefined8 *)((long)param_1 + uVar12);
      piVar13 = *(int **)((long)param_1 + (long)unaff_x20[0x17]);
      func_0x00010bfcd8a0();
      _objc_retainAutoreleasedReturnValue();
      piVar7 = piVar13;
      if (piVar13 == (int *)0x0) {
        piVar7 = piVar9;
        func_0x00010bf40c40(piVar9);
        _objc_retainAutoreleasedReturnValue();
      }
      FUN_10809f700(uVar19,piVar9,piVar8,piVar22,piVar7);
      if (piVar13 == (int *)0x0) {
        func_0x0001080bc9dc();
      }
      func_0x0001080bc998();
      func_0x0001080bcdb4();
      func_0x00010bed31c0();
      func_0x0001080bcc58((long)_DAT_1127745e4);
      func_0x00010be8b6e0(param_1);
      *(undefined1 *)((long)param_1 + (long)_DAT_1127745f8) = 0;
      uVar17 = *(undefined8 *)((long)param_1 + (long)_DAT_112774584);
      uVar19 = *(undefined8 *)((long)param_1 + (long)_DAT_1127745f0);
      func_0x00010c067fc0(uVar19);
      FUN_10809f99c(uVar17,uVar19,*(undefined1 *)((long)param_1 + (long)_DAT_1127745f4));
      _objc_retainAutoreleasedReturnValue();
      uVar14 = *(ulong *)((long)param_1 + uVar12);
      func_0x00010c26b700();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0720c0();
      func_0x0001080bc940();
      if ((uVar14 & 1) == 0) {
        func_0x00010c212f20(*(undefined8 *)((long)param_1 + uVar12));
      }
      uVar18 = (uint)uVar14 ^ 1;
      func_0x00010c08fa60(uVar17);
      func_0x0001080bcbb8();
      func_0x0001080bc9a0();
    }
    else {
      func_0x0001080bccc4();
      piVar10 = *(int **)((long)param_1 + (long)*piVar7);
      func_0x00010c159e80();
      iVar20 = 1;
      piVar13 = param_1;
      func_0x00010c286d60();
      puVar3 = PTR_PTR_1126d9280;
      func_0x00010c13a5a0(piVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be829e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c115820(puVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = (long)piVar7[0xc];
      func_0x0001080bca08();
      func_0x0001080bccac();
      func_0x0001080bc9dc();
      uVar19 = *(undefined8 *)((long)param_1 + lVar16);
      func_0x00010c067fc0(*(undefined8 *)((long)param_1 + (long)piVar7[0x23]));
      func_0x00010bf39be0(uVar19);
      uVar18 = 0;
      piVar11 = *(int **)((long)param_1 + lVar16);
      func_0x00010bf0e280();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = (undefined1)*(undefined8 *)((long)param_1 + lVar16);
      func_0x00010bfd6160();
      iVar2 = piVar7[0x25];
      *(undefined1 *)((long)param_1 + (long)iVar2) = uVar4;
      uVar4 = (undefined1)*(undefined8 *)((long)param_1 + lVar16);
      func_0x00010bfd9a00();
      iVar5 = (int)*(undefined8 *)((long)param_1 + lVar16);
      func_0x00010bfd9a20();
      uVar12 = *(ulong *)((long)param_1 + lVar16);
      func_0x00010bfd41a0();
      if ((uVar12 & 1) == 0) {
        iVar20 = (int)*(undefined8 *)((long)param_1 + lVar16);
        func_0x00010bfd9d80();
      }
      bVar1 = *(byte *)((long)param_1 + (long)iVar2);
      func_0x00010c1e38a0(*(undefined8 *)((long)param_1 + (long)_DAT_11277456c));
      func_0x00010c1e38a0(*(undefined8 *)((long)param_1 + (long)_DAT_112774590));
      *(undefined1 *)((long)param_1 + (long)_DAT_1127745c8) = uVar4;
      if (((bVar1 & 1) != 0) || (iVar20 != 0)) {
        func_0x0001080bcf5c();
      }
      uVar12 = *(ulong *)((long)param_1 + lVar16);
      func_0x00010bfd41a0();
      piVar7 = piVar11;
      if ((uVar12 & 1) == 0) {
        *(undefined8 *)((long)param_1 + (long)_DAT_1127745b4) = 0;
        func_0x0001080bccb4();
        piVar15 = param_1;
        func_0x00010bee1d00();
        func_0x0001080bcf20();
      }
      else {
        uVar19 = *(undefined8 *)((long)param_1 + lVar16);
        func_0x00010bf03fa0();
        *(undefined8 *)((long)param_1 + (long)_DAT_1127745b4) = uVar19;
        func_0x0001080bccb4();
        func_0x00010bee1d00(param_1);
        func_0x00010c0d3c80();
        func_0x00010c08fa60();
        func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080bceec(piVar7);
        func_0x0001080bc940();
        func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
        piVar15 = piVar7;
        func_0x0001080bceec();
        func_0x0001080bccac();
      }
      func_0x0001080bcfb4();
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25cd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c08fa60();
      if (piVar10 == piVar15) {
        uVar12 = 0;
      }
      else {
        piVar15 = piVar11;
        func_0x00010c08fa60();
        uVar12 = (ulong)(piVar10 < piVar15);
      }
      uVar6 = (uint)piVar15;
      func_0x0001080bc9a0();
      func_0x0001080bccac();
      func_0x0001080bcfb4();
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c071b80();
      func_0x0001080bc940();
      if ((((uint)piVar13 | uVar6 ^ 0xffffffff) & 1) != 0) {
        func_0x0001080bcfb4();
        func_0x00010c16b720();
        if ((int)uVar12 != 0) {
          func_0x00010bdce920(param_1);
        }
      }
      func_0x00010bed31c0(param_1);
      lVar16 = (long)_DAT_1127745e4;
      if (iVar5 == 0) {
        uVar19 = *(undefined8 *)((long)param_1 + lVar16);
        *(undefined8 *)((long)param_1 + lVar16) = 0;
        _objc_release(uVar19);
        func_0x00010be8b6e0(param_1);
      }
      else {
        func_0x0001080bcf20();
        uVar19 = *(undefined8 *)((long)param_1 + lVar16);
        *(int **)((long)param_1 + lVar16) = piVar11;
        _objc_release(uVar19);
        func_0x00010bdc5ee0(param_1);
      }
      piVar22 = (int *)((ulong)piVar22 & 0xffffffff);
      func_0x0001080bcfb4();
      func_0x00010bf0e540();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080bccbc();
      func_0x0001080bcbb8();
      func_0x0001080bc940();
      _objc_release(piVar7);
      func_0x0001080bc9dc();
    }
    if (*(long *)((long)param_1 + uVar12) != 0) {
      FUN_10809f700(*(long *)((long)param_1 + uVar12),piVar9,piVar8,piVar22,0);
    }
    func_0x00010c069fe0(param_1);
    func_0x0001080bc960();
    func_0x0001080bccac();
  }
  else {
    uVar18 = 0;
  }
  *(undefined1 *)((long)param_1 + lVar21) = 0;
  return uVar18;
}



/* Entry: 1080b8f98; end: 1080b9017; -[SCValdiTextView _nearestTextAnimationGroup] */

void FUN_1080b8f98(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d9340;
  while (PTR_PTR_1126d9340 = puVar2, param_1 != 0) {
    func_0x0001080bc988();
    _objc_opt_class();
    func_0x0001080bc8f0();
    lVar1 = param_1;
    if (((ulong)puVar2 & 1) == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    func_0x0001080bc950();
    if (((ulong)puVar2 & 1) != 0) break;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bc950();
    puVar2 = PTR_PTR_1126d9340;
  }
  func_0x0001080bc950();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080b9018; end: 1080b90c7; -[SCValdiTextView _updateTextAnimationGroupRegistration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b9018(long param_1)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010be625c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = (long)_DAT_1127745ac;
  func_0x0001080bcd40();
  func_0x0001080bcae4();
  if (lVar1 == unaff_x21) {
    if (lVar1 != 0) {
      func_0x00010c26b820(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080bca60();
      func_0x0001080bce78();
      func_0x0001080bc948();
      func_0x00010c1cbe20(lVar1);
    }
  }
  else {
    func_0x0001080bcd40();
    func_0x00010c282220();
    func_0x0001080bc948();
    _objc_storeWeak(param_1 + lVar2,lVar1);
    if (lVar1 == 0) {
      func_0x0001080bce78(param_1);
    }
    else {
      func_0x0001080bcbfc();
      func_0x00010c1272c0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1080b90c8; end: 1080b914b; -[SCValdiTextView _updateTextAnimationGroupContext] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b90c8(long param_1)

{
  long unaff_x20;
  
  param_1 = param_1 + _DAT_1127745ac;
  _objc_loadWeakRetained(param_1);
  func_0x0001080bcf74();
  if (unaff_x20 != 0) {
    func_0x0001080bcedc();
    func_0x00010c26b820();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bcc70();
    func_0x0001080bce78();
    func_0x0001080bc948();
    func_0x0001080bc940();
    func_0x0001080bcedc();
    func_0x00010c1cbe20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  func_0x0001080bcdb4();
                    /* WARNING: Could not recover jumptable at 0x00010c295690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080b914c; end: 1080b9157; -[SCValdiTextView valdi_textAnimationPartCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b914c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_1127745b4);
}



/* Entry: 1080b9158; end: 1080b91df; -[SCValdiTextView valdi_applyTextAnimationCoordinator:basePartIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b9158(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112774598;
  func_0x0001080bc958();
  _objc_storeWeak(param_1 + lVar1,param_3);
  *(undefined8 *)(param_1 + _DAT_11277459c) = param_4;
  lVar1 = (long)_DAT_112774590;
  func_0x00010c2130a0(*(undefined8 *)(param_1 + lVar1));
  func_0x0001080bc948();
  func_0x00010c213080(*(undefined8 *)(param_1 + lVar1));
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bec2cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__stopAnimatedTextDisplayLink_11258e4e0);
    return;
  }
  return;
}



/* Entry: 1080b91e0; end: 1080b9217; -[SCValdiTextView valdi_clearTextAnimationGroupRegistration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b91e0(long param_1)

{
  _objc_storeWeak(param_1 + _DAT_1127745ac,0);
  func_0x0001080bcdb4();
                    /* WARNING: Could not recover jumptable at 0x00010c295690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080b9218; end: 1080b9227; -[SCValdiTextView valdi_prepareGroupedTextAnimationFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b9218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c109910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112774590),
             PTR_s_prepareGroupedAnimatedTextProgre_112620060);
  return;
}



/* Entry: 1080b9228; end: 1080b926f; -[SCValdiTextView valdi_invalidateGroupedTextAnimationFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b9228(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112774590);
  func_0x00010c069d60(uVar1);
  func_0x00010c1cbd40(*(undefined8 *)(param_1 + _DAT_112774568));
  func_0x0001080bcf6c();
  return uVar1;
}



/* Entry: 1080b9270; end: 1080b929f; -[SCValdiTextView _setGravity:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b9270(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_112774574) = param_3;
  func_0x00010bedd1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bed6030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateContentInset_1125931b0);
  return;
}



/* Entry: 1080b92a0; end: 1080b92af; -[SCValdiTextView _setIgnoreNewlines:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b92a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_1127745f4) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bed3510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateAttributedTextIfNeeded_1125926e8);
  return;
}



/* Entry: 1080b92b0; end: 1080b930b; -[SCValdiTextView fontAttributes] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b92b0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_1127745fc);
  if ((*(long *)(param_1 + _DAT_1127745fc) == 0) &&
     (lVar1 = lRam0000000113729248, lRam0000000113729240 != -1)) {
    func_0x000107c27d9c(0x113729240,&PTR___NSConcreteGlobalBlock_110a1cba0);
    lVar1 = lRam0000000113729248;
  }
  func_0x0001080bc988();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1080b930c; end: 1080b9343;  */

void FUN_1080b930c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x00010bfb3b60(PTR__OBJC_CLASS___NSAttributedString_1126af068,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = puRam0000000113729248;
  puRam0000000113729248 = puVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080b9344; end: 1080b938b; -[SCValdiTextView valdi_setFontAttributes:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b9344(void)

{
  FUN_1080bc8a0();
  func_0x0001080bca9c((long)_DAT_1127745fc);
  _objc_release();
  func_0x0001080bcb10((long)_DAT_11277457c);
  func_0x00010bdce5c0();
                    /* WARNING: Could not recover jumptable at 0x00010c1cbe30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080b938c; end: 1080b93f7; -[SCValdiTextView valdi_setCustomUnderlineStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b938c(void)

{
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_1080bc8a0();
  *(undefined8 *)(unaff_x20 + _DAT_1127745dc) = unaff_x19;
  func_0x0001080bc988();
  func_0x0001080bc948();
  *(undefined1 *)(unaff_x20 + _DAT_11277457c) = 1;
  if (*(long *)(unaff_x20 + _DAT_11277456c) != 0) {
    func_0x00010bed7500();
  }
  func_0x00010c1cbe20();
  func_0x0001080bcdf8();
  func_0x00010c1cbd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b93f8; end: 1080b94f7; -[SCValdiTextView valdi_setTextOverflow:] */

undefined8 FUN_1080b93f8(ulong param_1,undefined8 param_2)

{
  int iVar1;
  undefined1 extraout_w8;
  undefined8 uVar2;
  undefined8 extraout_x9;
  long unaff_x20;
  int *unaff_x21;
  
  FUN_1080bc8a0();
  func_0x0001080bcb08();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    func_0x0001080bcdc0();
    if ((param_1 & 1) == 0) {
      func_0x0001080bcdc0();
      iVar1 = (int)param_1;
      if ((param_1 & 1) == 0) {
        func_0x00010b96bf1c();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080bcc24();
        if (iVar1 != 0) {
          func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                              &PTR____CFConstantStringClassReference_110ed5bb8);
          _objc_retainAutoreleasedReturnValue();
          func_0x0001080bca60();
          func_0x0001080bcf3c();
          func_0x0001080bc948();
        }
        func_0x0001080bc940();
        uVar2 = 0;
        goto LAB_1080b9490;
      }
      uVar2 = 1;
    }
    else {
      uVar2 = 1;
    }
  }
  func_0x0001080bccc4(uVar2);
  *(undefined1 *)(unaff_x20 + unaff_x21[0x1f]) = extraout_w8;
  *(undefined8 *)(unaff_x20 + unaff_x21[7]) = extraout_x9;
  func_0x00010bdcec80();
  func_0x00010c1cbd40(*(undefined8 *)(unaff_x20 + *unaff_x21));
  func_0x00010c1cbd40(*(undefined8 *)(unaff_x20 + unaff_x21[1]));
  uVar2 = 1;
LAB_1080b9490:
  func_0x0001080bc950();
  return uVar2;
}



/* Entry: 1080b94f8; end: 1080b962f; -[SCValdiTextView valdi_setValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b94f8(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x19;
  long unaff_x20;
  long unaff_x24;
  
  FUN_1080bc8a0();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class();
  func_0x0001080bc8f0();
  func_0x0001080bcfa8();
  if (((ulong)puVar2 & 1) != 0) {
    lVar3 = *(long *)(unaff_x20 + unaff_x24);
    func_0x00010c0bbdc0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 == 0) {
      func_0x0001080bcadc();
      iVar1 = (int)lVar3;
      func_0x0001080bcf04();
      func_0x0001080bcb70();
      func_0x0001080bca18();
      func_0x0001080bc960();
      func_0x0001080bcfe8();
      func_0x00010c0720c0();
      if (iVar1 != 0) {
        uVar4 = *(ulong *)(unaff_x20 + unaff_x24);
        func_0x00010c26b700();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0720c0();
        func_0x0001080bc960();
        func_0x0001080bc948();
        if ((uVar4 & 1) != 0) goto LAB_1080b9624;
        goto LAB_1080b95ac;
      }
    }
    func_0x0001080bc948();
  }
LAB_1080b95ac:
  func_0x00010c26b700(*(undefined8 *)(unaff_x20 + unaff_x24));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = (long)_DAT_112774584;
  func_0x0001080bc988();
  uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
  *(long *)(unaff_x20 + lVar3) = unaff_x19;
  _objc_release(uVar5);
  func_0x0001080bcb10((long)_DAT_11277457c);
  func_0x00010bed3500();
  if (unaff_x19 != 0) {
    uVar4 = *(ulong *)(unaff_x20 + unaff_x24);
    func_0x00010c26b700();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080bccd0();
    func_0x00010c0720c0();
    func_0x0001080bc960();
    if ((uVar4 & 1) == 0) {
      func_0x00010c26cb20();
    }
  }
  func_0x0001080bc948();
LAB_1080b9624:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}


