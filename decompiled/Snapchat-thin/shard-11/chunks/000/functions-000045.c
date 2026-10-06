/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1080b270c; end: 1080b271b; -[SCValdiTextLayoutSelectionInteractionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b270c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112774500);
  return;
}



/* Entry: 1080b271c; end: 1080b274b; -[SCValdiTextLayoutDisplayLinkProxy initWithTarget:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1080b271c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_storeWeak(param_1 + _DAT_112774504,param_3);
  return param_1;
}



/* Entry: 1080b274c; end: 1080b2793; -[SCValdiTextLayoutDisplayLinkProxy forwardInvocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b274c(long param_1)

{
  long lVar1;
  
  lVar1 = (long)_DAT_112774504;
  func_0x0001080b5c94();
  _objc_loadWeakRetained(param_1 + lVar1);
  func_0x0001080b5ddc();
  func_0x00010c06ae40();
  func_0x0001080b5c8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080b2794; end: 1080b27d3; -[SCValdiTextLayoutDisplayLinkProxy methodSignatureForSelector:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b2794(undefined8 param_1)

{
  func_0x0001080b5da4((long)_DAT_112774504);
  func_0x0001080b5de8();
  func_0x00010c0cca80();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b5c7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080b27d4; end: 1080b27e3; -[SCValdiTextLayoutDisplayLinkProxy .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b27d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112774504);
  return;
}



/* Entry: 1080b27e4; end: 1080b284b; -[SCValdiTextLayoutView _finishInitializationWithUsesEffectsLayoutManager:] */

void FUN_1080b27e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001080b5e9c();
  func_0x00010bf3ae40();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b5e68();
  func_0x00010c16e440();
  func_0x0001080b5c84();
  func_0x00010c1d4c20(param_1);
  func_0x00010c21e900(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bf47cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_configureWithUsesEffectsLayoutMa_1125af8d8,param_3);
  return;
}



/* Entry: 1080b284c; end: 1080b2853; -[SCValdiTextLayoutView initWithFrame:] */

void FUN_1080b284c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c015150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithFrame_usesEffectsLayoutM_1125e2e30,0)
  ;
  return;
}



/* Entry: 1080b2854; end: 1080b289b; -[SCValdiTextLayoutView initWithFrame:usesEffectsLayoutManager:] */

undefined1 * FUN_1080b2854(void)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = auStack_30;
  func_0x0001080b5c9c();
  _objc_msgSendSuper2(auStack_30,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010be16ee0(puVar1);
  }
  return puVar1;
}



/* Entry: 1080b289c; end: 1080b28df; -[SCValdiTextLayoutView initWithCoder:] */

undefined1 * FUN_1080b289c(void)

{
  undefined1 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = auStack_30;
  func_0x0001080b5c9c();
  _objc_msgSendSuper2(auStack_30,PTR_s_initWithCoder__1125dd730);
  if (puVar1 != (undefined1 *)0x0) {
    func_0x00010be16ee0(puVar1);
  }
  return puVar1;
}



/* Entry: 1080b28e0; end: 1080b2937; -[SCValdiTextLayoutView dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b28e0(undefined8 param_1)

{
  func_0x0001080b5da4((long)_DAT_112774508);
  func_0x0001080b5de8();
  func_0x00010c282220();
  func_0x0001080b5c7c();
  func_0x00010c2559e0(param_1);
  func_0x00010be8d340(param_1);
  func_0x0001080b5d5c();
  func_0x0001080b5e8c();
  return;
}



/* Entry: 1080b2938; end: 1080b296b; -[SCValdiTextLayoutView textLayout] */

void FUN_1080b2938(long param_1)

{
  long extraout_x8;
  undefined8 uVar1;
  
  func_0x00010be0a720();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x0001080b5e38();
  uVar1 = *(undefined8 *)(param_1 + extraout_x8);
  func_0x0001080b5d44();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080b296c; end: 1080b297b; -[SCValdiTextLayoutView usesEffectsLayoutManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_1080b296c(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112774510);
}



/* Entry: 1080b297c; end: 1080b298b; -[SCValdiTextLayoutView selectable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b297c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c159190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112774514),PTR_s_selectable_112633e80);
  return;
}



/* Entry: 1080b298c; end: 1080b29e3; -[SCValdiTextLayoutView pointInsideActiveSelectionHandleBounds:] */

undefined8 FUN_1080b298c(undefined8 param_1,long param_2)

{
  func_0x0001080b5f54();
  func_0x0001080b5d54();
  if (((int)param_1 != 0) && (func_0x0001080b5f08(), param_2 != 0)) {
    func_0x0001080b5dc0();
    func_0x0001080b5ef8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbb3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__CGRectContainsPoint_110347550)();
    return param_1;
  }
  return 0;
}



/* Entry: 1080b29e4; end: 1080b2a4f; -[SCValdiTextLayoutView pointInside:withEvent:] */

void FUN_1080b29e4(undefined8 param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [16];
  
  puVar2 = auStack_40;
  func_0x0001080b5f54();
  func_0x0001080b5c9c();
  _objc_msgSendSuper2(auStack_40,PTR_s_pointInside_withEvent__11261e4e8);
  iVar1 = (int)puVar2;
  if (((ulong)puVar2 & 1) == 0) {
    uVar3 = param_1;
    func_0x0001080b6068();
    iVar1 = (int)uVar3;
    func_0x00010c102b80();
    if (iVar1 == 0) {
      return;
    }
  }
  func_0x0001080b5e28();
  if (iVar1 != 0) {
    func_0x00010be3cf40(param_1);
  }
  return;
}



/* Entry: 1080b2a50; end: 1080b2a9b; -[SCValdiTextLayoutView layoutSubviews] */

void FUN_1080b2a50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  long extraout_x8;
  
  func_0x0001080b5c9c();
  func_0x0001080b5e8c();
  func_0x0001080b5dc0();
  func_0x0001080b5e38(param_3,param_4);
  func_0x00010c202c80(*(undefined8 *)(param_5 + extraout_x8));
  func_0x00010bedf880(param_5);
  return;
}



/* Entry: 1080b2a9c; end: 1080b2af3; -[SCValdiTextLayoutView didMoveToWindow] */

void FUN_1080b2a9c(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x0001080b5c9c();
  func_0x0001080b5e8c();
  func_0x0001080b5fb8();
  func_0x00010c2a71e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b5ff0();
  if (unaff_x20 == 0) {
    func_0x00010be8d320(param_1);
  }
  else {
    func_0x00010bedf860();
  }
  return;
}



/* Entry: 1080b2af4; end: 1080b2b23; -[SCValdiTextLayoutView didMoveToSuperview] */

void FUN_1080b2af4(void)

{
  func_0x0001080b5c9c();
  func_0x0001080b5e8c();
  func_0x0001080b5fb8();
  return;
}



/* Entry: 1080b2b24; end: 1080b2b5b; -[SCValdiTextLayoutView drawRect:] */

void FUN_1080b2b24(long param_1)

{
  long lVar1;
  long extraout_x8;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x0001080b5e38();
  uVar2 = *(undefined8 *)(lVar1 + extraout_x8);
  func_0x00010bf20c00();
  func_0x00010bf89920(uVar2);
  func_0x0001080b5dc0();
                    /* WARNING: Could not recover jumptable at 0x00010be06570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__drawCustomUnderlinesInRect__11255f2f8);
  return;
}



/* Entry: 1080b2b5c; end: 1080b2d57; -[SCValdiTextLayoutView configureWithUsesEffectsLayoutManager:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b2b5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,uint param_7)

{
  long lVar1;
  undefined *puVar2;
  long extraout_x8;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar6 = (long)_DAT_11277450c;
  if ((*(long *)(param_5 + lVar6) != 0) && (*(byte *)(param_5 + _DAT_112774510) == param_7)) {
    return;
  }
  func_0x0001080b6030();
  lVar4 = *(long *)(param_5 + extraout_x8);
  func_0x0001080b5d24();
  lVar1 = *(long *)(param_5 + lVar6);
  func_0x00010c0c2820();
  if (lVar1 == 0) {
    lVar1 = *(long *)(param_5 + _DAT_11277451c);
  }
  *(char *)(param_5 + _DAT_112774510) = (char)param_7;
  if (param_7 == 0) {
    lVar5 = (long)_DAT_112774520;
    uVar3 = *(undefined8 *)(param_5 + lVar5);
    *(undefined8 *)(param_5 + lVar5) = 0;
    _objc_release(uVar3);
    puVar2 = PTR_PTR_1126d92f8;
    _objc_opt_new();
  }
  else {
    puVar2 = PTR_PTR_1126d9358;
    _objc_opt_new();
    lVar5 = (long)_DAT_112774520;
    uVar3 = *(undefined8 *)(param_5 + lVar5);
    *(undefined **)(param_5 + lVar5) = puVar2;
    func_0x0001080b5e0c(uVar3);
    puVar2 = PTR_PTR_1126d92f8;
    _objc_alloc();
    func_0x00010c021ca0();
  }
  uVar3 = *(undefined8 *)(param_5 + lVar6);
  *(undefined **)(param_5 + lVar6) = puVar2;
  func_0x0001080b5e0c(uVar3);
  func_0x00010c1e38a0(*(undefined8 *)(param_5 + lVar6),param_6,lVar4);
  func_0x00010c1c34a0(*(undefined8 *)(param_5 + lVar6),param_6,lVar1);
  func_0x0001080b5dc0();
  uVar3 = *(undefined8 *)(param_5 + lVar6);
  func_0x00010c202c80(param_3,param_4,uVar3);
  func_0x0001080b5d68((long)_DAT_112774524);
  func_0x00010c220000(*(undefined8 *)(param_5 + lVar5),param_6,uVar3);
  func_0x0001080b5cbc();
  func_0x00010c1e38a0(*(undefined8 *)(param_5 + lVar5),param_6,lVar4);
  func_0x00010c188f40(*(undefined8 *)(param_5 + lVar5),param_6,
                      *(undefined8 *)(param_5 + _DAT_112774528));
  func_0x00010c188f20(*(undefined8 *)(param_5 + lVar5),param_6,
                      *(undefined8 *)(param_5 + _DAT_11277452c));
  lVar1 = *(long *)(param_5 + lVar5);
  func_0x00010c188ea0(lVar1,param_6,*(undefined8 *)(param_5 + _DAT_112774530));
  lVar7 = *(long *)(param_5 + _DAT_112774534);
  lVar6 = lVar7;
  if (lVar7 == 0) {
    func_0x0001080b5e9c();
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
  }
  func_0x00010c188ee0(*(undefined8 *)(param_5 + lVar5),param_6,lVar6);
  if (lVar7 == 0) {
    func_0x0001080b5cbc();
  }
  lVar6 = 0;
  if ((param_7 != 0) && (lVar4 != 0)) {
    lVar6 = lVar4;
    func_0x00010bf03fa0();
  }
  *(long *)(param_5 + _DAT_112774538) = lVar6;
  func_0x0001080b5d68((long)_DAT_11277453c);
  func_0x0001080b5e5c();
  func_0x00010c2130c0();
  func_0x0001080b5c84();
  func_0x0001080b5fb8();
  func_0x0001080b5fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar4);
  return;
}



/* Entry: 1080b2d58; end: 1080b2d9f; -[SCValdiTextLayoutView setTextAnimationViewNode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b2d58(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001080b5c94();
  func_0x0001080b6018();
  func_0x00010c220000(*(undefined8 *)(param_1 + _DAT_112774520),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080b2da0; end: 1080b2dbb; -[SCValdiTextLayoutView setMaxNumberOfLines:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b2da0(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + _DAT_11277451c) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010c1c34b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11277450c),PTR_s_setMaxNumberOfLines__11264e750);
  return;
}



/* Entry: 1080b2dbc; end: 1080b2e63; -[SCValdiTextLayoutView setProcessedText:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b2dbc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001080b5c14();
  func_0x0001080b5d44();
  func_0x0001080b5ff8();
  func_0x00010be0a720();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e38a0();
  func_0x0001080b5c84();
  func_0x00010c1e38a0(*(undefined8 *)(unaff_x20 + _DAT_112774520));
  lVar1 = unaff_x20;
  func_0x00010c294a00();
  lVar2 = 0;
  if ((unaff_x19 != 0) && ((int)lVar1 != 0)) {
    func_0x00010bf03fa0();
    lVar2 = unaff_x19;
  }
  *(long *)(unaff_x20 + _DAT_112774538) = lVar2;
  func_0x00010bee1d20();
  func_0x00010bdded20();
  func_0x00010c1cbd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b2e64; end: 1080b2eb3; -[SCValdiTextLayoutView updateInlineAttachmentsAndUpdate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b2e64(long param_1)

{
  int iVar1;
  long extraout_x8;
  long lVar2;
  
  lVar2 = param_1;
  func_0x0001080b6030();
  iVar1 = (int)*(undefined8 *)(lVar2 + extraout_x8);
  func_0x00010c286900();
  if (iVar1 != 0) {
    lVar2 = (long)_DAT_11277450c;
    func_0x00010c125500(*(undefined8 *)(param_1 + lVar2));
    func_0x00010c069fe0(*(undefined8 *)(param_1 + lVar2));
                    /* WARNING: Could not recover jumptable at 0x00010c1cbd50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setNeedsDisplay_112650978);
    return;
  }
  return;
}



/* Entry: 1080b2eb4; end: 1080b2fbb; -[SCValdiTextLayoutView setCustomUnderlineStyle:sourceAttributedString:characterRanges:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b2eb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x21;
  long lVar4;
  long lVar5;
  long lVar6;
  
  func_0x0001080b5c64();
  func_0x0001080b5d24();
  lVar6 = (long)_DAT_112774528;
  func_0x0001080b5d44();
  *(undefined8 *)(unaff_x21 + lVar6) = param_3;
  _objc_retain(param_5);
  func_0x0001080b5d3c();
  lVar6 = (long)_DAT_11277452c;
  func_0x0001080b5d24();
  uVar1 = *(undefined8 *)(unaff_x21 + lVar6);
  *(undefined8 *)(unaff_x21 + lVar6) = param_4;
  _objc_release(uVar1);
  uVar1 = param_5;
  func_0x00010bf51e00();
  uVar3 = *(undefined8 *)(unaff_x21 + _DAT_112774530);
  *(undefined8 *)(unaff_x21 + _DAT_112774530) = uVar1;
  func_0x0001080b5e0c(uVar3);
  lVar4 = (long)_DAT_112774520;
  func_0x00010c188f40(*(undefined8 *)(unaff_x21 + lVar4),param_2,param_3);
  func_0x00010c188f20(*(undefined8 *)(unaff_x21 + lVar4),param_2,param_4);
  lVar2 = *(long *)(unaff_x21 + lVar4);
  func_0x00010c188ea0(lVar2,param_2,param_5);
  func_0x0001080b5cbc();
  lVar5 = *(long *)(unaff_x21 + _DAT_112774534);
  lVar6 = lVar5;
  if (lVar5 == 0) {
    func_0x0001080b5e9c();
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar2;
  }
  func_0x00010c188ee0(*(undefined8 *)(unaff_x21 + lVar4),param_2,lVar6);
  if (lVar5 == 0) {
    func_0x0001080b5cbc();
  }
  func_0x00010c1cbd40();
  func_0x0001080b5c7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1080b2fbc; end: 1080b302f; -[SCValdiTextLayoutView setDefaultTextColor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b2fbc(long param_1,undefined8 param_2)

{
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  
  func_0x0001080b5c14();
  if (*(long *)(unaff_x20 + _DAT_112774534) != unaff_x19) {
    func_0x0001080b5d44();
    func_0x0001080b5ff8();
    lVar1 = unaff_x19;
    if (unaff_x19 == 0) {
      func_0x0001080b5e9c();
      func_0x00010bf1c920();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_1;
    }
    func_0x00010c188ee0(*(undefined8 *)(unaff_x20 + _DAT_112774520),param_2,lVar1);
    if (unaff_x19 == 0) {
      func_0x0001080b5c84();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b3030; end: 1080b3093; -[SCValdiTextLayoutView performOnLayoutCallbacks] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b3030(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  if (*(long *)(param_1 + _DAT_112774518) != 0) {
    puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_30 = 0xc2000000;
    pcStack_28 = FUN_1080b3094;
    puStack_20 = &UNK_110a1cac0;
    lStack_18 = param_1;
    func_0x00010bf97f20(*(long *)(param_1 + _DAT_112774518),param_2,&puStack_38);
  }
  return;
}



/* Entry: 1080b3094; end: 1080b315f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b3094(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_1 >> 0x20);
  uVar1 = (undefined4)param_1;
  _objc_retain(param_6);
  func_0x00010bf20b80(*(undefined8 *)(*(long *)(param_5 + 0x20) + (long)_DAT_11277450c));
  func_0x00010b97f424();
  func_0x00010b9685a0((float)(double)CONCAT44(uVar2,uVar1));
  func_0x0001080b5ef0();
  func_0x00010b9685a0((float)param_2);
  func_0x0001080b5ef0();
  func_0x00010b9685a0((float)param_3);
  func_0x0001080b5ef0();
  func_0x00010b9685a0((float)param_4);
  func_0x0001080b5ef0();
  func_0x0001080b5e50();
  func_0x00010c0f9540();
  func_0x0001080b5e74();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1080b3160; end: 1080b3197; -[SCValdiTextLayoutView _resolveValdiViewNode] */

void FUN_1080b3160(undefined8 param_1)

{
  func_0x0001080b5cc4();
  func_0x0001080b5de8();
  func_0x00010c295500();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b5c7c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080b3198; end: 1080b3217; -[SCValdiTextLayoutView invalidateAnimatedTextProgress] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b3198(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  int *unaff_x20;
  
  func_0x0001080b5f28();
  iVar1 = *unaff_x20;
  func_0x00010c069d60(*(undefined8 *)(param_1 + iVar1));
  func_0x0001080b5d68((long)unaff_x20[9]);
  func_0x0001080b5de8();
  func_0x00010c26c340();
  func_0x0001080b5c7c();
  uVar2 = *(undefined8 *)(unaff_x19 + iVar1);
  func_0x00010c26b820(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b5ff0();
  if (unaff_x20 != (int *)0x0) {
    func_0x0001080b5d68((long)_DAT_112774508);
    func_0x00010c250ec0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bebf5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080b3218; end: 1080b329f; -[SCValdiTextLayoutView setTextAnimationCoordinator:basePartIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b3218(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = (long)_DAT_11277453c;
  func_0x0001080b5c94();
  _objc_storeWeak(param_1 + lVar1,param_3);
  *(undefined8 *)(param_1 + _DAT_112774540) = param_4;
  lVar1 = (long)_DAT_112774520;
  func_0x00010c2130a0(*(undefined8 *)(param_1 + lVar1));
  func_0x0001080b5c84();
  func_0x00010c213080(*(undefined8 *)(param_1 + lVar1));
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c2559f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_stopAnimations_1126730a0);
    return;
  }
  return;
}



/* Entry: 1080b32a0; end: 1080b32af; -[SCValdiTextLayoutView prepareGroupedTextAnimationFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b32a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c109910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112774520),
             PTR_s_prepareGroupedAnimatedTextProgre_112620060);
  return;
}



/* Entry: 1080b32b0; end: 1080b32ef; -[SCValdiTextLayoutView invalidateGroupedTextAnimationFrame] */

undefined8 FUN_1080b32b0(undefined8 param_1)

{
  long unaff_x21;
  
  func_0x0001080b5df4();
  func_0x0001080b5fc0();
  func_0x0001080b5d68((long)*(int *)(unaff_x21 + 0x24));
  func_0x0001080b5f78();
  func_0x0001080b5c84();
  return param_1;
}



/* Entry: 1080b32f0; end: 1080b333f; -[SCValdiTextLayoutView animatedTextOpacityForRange:] */

undefined8 FUN_1080b32f0(undefined8 param_1,long param_2)

{
  func_0x00010bf038a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 == 0) {
    param_1 = 0x3ff0000000000000;
  }
  else {
    func_0x00010c0e8ca0(param_2);
  }
  func_0x0001080b5c8c();
  return param_1;
}



/* Entry: 1080b3340; end: 1080b336b; -[SCValdiTextLayoutView animatedTextPresentationForRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b3340(long param_1)

{
  if (*(long *)(param_1 + _DAT_112774520) != 0) {
    func_0x00010c10f4a0();
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080b336c; end: 1080b336f; -[SCValdiTextLayoutView valdi_prepareGroupedTextAnimationFrame] */

void FUN_1080b336c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c109930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_prepareGroupedTextAnimationFrame_112620068);
  return;
}



/* Entry: 1080b3370; end: 1080b3373; -[SCValdiTextLayoutView valdi_invalidateGroupedTextAnimationFrame] */

void FUN_1080b3370(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c069f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_invalidateGroupedTextAnimationFr_1125f81e0);
  return;
}



/* Entry: 1080b3374; end: 1080b33f3; -[SCValdiTextLayoutView _nearestTextAnimationGroup] */

void FUN_1080b3374(long param_1)

{
  long lVar1;
  undefined *puVar2;
  
  func_0x00010c262ca0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126d9340;
  while (PTR_PTR_1126d9340 = puVar2, param_1 != 0) {
    func_0x0001080b5d44();
    _objc_opt_class();
    func_0x0001080b5fd0();
    lVar1 = param_1;
    if (((ulong)puVar2 & 1) == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    func_0x0001080b5c8c();
    if (((ulong)puVar2 & 1) != 0) break;
    func_0x00010c262ca0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b5c8c();
    puVar2 = PTR_PTR_1126d9340;
  }
  func_0x0001080b5c8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080b33f4; end: 1080b34cb; -[SCValdiTextLayoutView _updateTextAnimationGroupRegistration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b33f4(long param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  
  if (*(long *)(param_1 + _DAT_112774538) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010be625c0();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar2 = (long)_DAT_112774508;
  _objc_loadWeakRetained(param_1 + lVar2);
  func_0x0001080b5e94();
  if (lVar1 == unaff_x21) {
    if (lVar1 != 0) {
      func_0x00010c26b820(lVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b5e68();
      func_0x00010c2130c0();
      func_0x0001080b5c84();
      func_0x00010c1cbe20(lVar1);
    }
  }
  else {
    _objc_loadWeakRetained(param_1 + lVar2);
    func_0x00010c282220();
    func_0x0001080b5c84();
    func_0x0001080b6018();
    if (lVar1 == 0) {
      func_0x00010c2130c0(param_1,param_2,0,0);
    }
    else {
      func_0x0001080b5e50();
      func_0x00010c1272c0();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1080b34cc; end: 1080b34d7; -[SCValdiTextLayoutView valdi_textAnimationPartCount] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b34cc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112774538);
}



/* Entry: 1080b34d8; end: 1080b34db; -[SCValdiTextLayoutView valdi_applyTextAnimationCoordinator:basePartIndex:] */

void FUN_1080b34d8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2130d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setTextAnimationCoordinator_base_112662658);
  return;
}



/* Entry: 1080b34dc; end: 1080b3513; -[SCValdiTextLayoutView valdi_clearTextAnimationGroupRegistration] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b34dc(long param_1)

{
  _objc_storeWeak(param_1 + _DAT_112774508,0);
  func_0x0001080b5f48();
                    /* WARNING: Could not recover jumptable at 0x00010c2130d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080b3514; end: 1080b3543; -[SCValdiTextLayoutView stopAnimations] */

void FUN_1080b3514(long param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  int *unaff_x20;
  
  func_0x0001080b5f28();
  func_0x00010c149ec0(*(undefined8 *)(param_1 + *unaff_x20));
  func_0x0001080b5f98();
  uVar1 = *(undefined8 *)(unaff_x19 + (long)unaff_x20);
  *(undefined8 *)(unaff_x19 + (long)unaff_x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080b3544; end: 1080b357f; -[SCValdiTextLayoutView prepareForRecycling] */

void FUN_1080b3544(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x19;
  int *unaff_x20;
  
  func_0x0001080b5f28();
  iVar1 = *unaff_x20;
  func_0x00010c149ec0(*(undefined8 *)(param_1 + iVar1));
  func_0x00010bf3a980(*(undefined8 *)(unaff_x19 + iVar1));
  func_0x0001080b5f98();
  uVar2 = *(undefined8 *)(unaff_x19 + (long)unaff_x20);
  *(undefined8 *)(unaff_x19 + (long)unaff_x20) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1080b3580; end: 1080b362b; -[SCValdiTextLayoutView onTapFunctionAtLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b3580(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long extraout_x8;
  long lVar4;
  
  func_0x0001080b5f54();
  lVar4 = (long)_DAT_112774518;
  uVar1 = *(ulong *)(param_1 + lVar4);
  func_0x00010bf0e280();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 != 0) {
    func_0x0001080b5e38();
    uVar2 = *(ulong *)(param_1 + extraout_x8);
    func_0x0001080b6068();
    func_0x00010bf35980();
    if ((uVar2 != 0x7fffffffffffffff) && (func_0x00010c08fa60(), uVar2 < uVar1)) {
      uVar3 = *(undefined8 *)(param_1 + lVar4);
      func_0x00010c0e6f80(uVar3,param_2,uVar2,0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1080b3610;
    }
  }
  uVar3 = 0;
LAB_1080b3610:
  func_0x0001080b5c8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1080b362c; end: 1080b3673; -[SCValdiTextLayoutView _ensureTextLayout] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b362c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277450c;
  lVar1 = *(long *)(param_1 + lVar2);
  if (lVar1 == 0) {
    func_0x00010bf47cc0(param_1,param_2,*(undefined1 *)(param_1 + _DAT_112774510));
    lVar1 = *(long *)(param_1 + lVar2);
  }
  func_0x0001080b5d24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1080b3674; end: 1080b36ef; -[SCValdiTextLayoutView _customUnderlineColorForRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b3674(long param_1)

{
  undefined8 uVar1;
  long unaff_x21;
  
  func_0x0001080b5cac();
  if (*(long *)(param_1 + _DAT_112774534) == 0) {
    func_0x0001080b5e9c();
    func_0x00010bf1c920();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(*(long *)(param_1 + _DAT_112774534));
  }
  uVar1 = *(undefined8 *)(unaff_x21 + _DAT_11277452c);
  FUN_1080a009c(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b5cbc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1080b36f0; end: 1080b38f3; -[SCValdiTextLayoutView _drawCustomUnderlinesInRect:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b36f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 in_ZR;
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 extraout_x8;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uStack_158;
  undefined8 uStack_150;
  
  func_0x0001080b5d2c();
  lVar6 = (long)_DAT_112774528;
  lVar1 = param_5;
  if (((*(long *)(param_5 + lVar6) != 0) && (*(long *)(param_5 + _DAT_112774520) == 0)) &&
     (*(long *)(param_5 + _DAT_11277452c) != 0)) {
    lVar8 = (long)_DAT_112774530;
    lVar1 = *(long *)(param_5 + lVar8);
    uVar5 = param_1;
    func_0x00010bf529e0();
    if (lVar1 != 0) {
      lVar9 = (long)_DAT_11277450c;
      if ((*(long *)(param_5 + lVar9) != 0) && (_UIGraphicsGetCurrentContext(), lVar1 != 0)) {
        _CGContextSaveGState();
        func_0x00010bfe0640(*(undefined8 *)(param_5 + lVar6));
        uVar11 = uVar5;
        _CGContextSetLineWidth(lVar1);
        FUN_1080a04d4(lVar1,*(undefined8 *)(param_5 + lVar6));
        func_0x00010c0e1c40(*(undefined8 *)(param_5 + lVar6));
        func_0x0001080b5f18();
        uVar7 = *(ulong *)(param_5 + lVar8);
        uVar2 = uVar7;
        _objc_retain();
        func_0x0001080b5cd4();
        if (uVar2 != 0) {
          lVar6 = *uStack_150;
          do {
            uVar10 = 0;
            do {
              if (*uStack_150 != lVar6) {
                _objc_enumerationMutation(uVar7);
              }
              func_0x00010c11f4c0(*(undefined8 *)(uStack_158 + uVar10 * 8));
              func_0x00010bdf7a20(param_5);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c20e8c0();
              func_0x0001080b5ed0();
              uVar3 = *(ulong *)(param_5 + lVar9);
              func_0x00010c27f760(param_1,param_2,param_3,param_4,uVar5,uVar11);
              _objc_retainAutoreleasedReturnValue();
              func_0x0001080b603c();
              FUN_1080a0980();
              func_0x0001080b5d3c();
              uVar10 = uVar10 + 1;
              in_ZR = uVar10 == uVar2;
            } while (uVar10 < uVar2);
            func_0x0001080b5cd4();
            uVar2 = uVar3;
          } while (uVar3 != 0);
        }
        func_0x0001080b5c84();
        _CGContextRestoreGState();
      }
    }
  }
  func_0x0001080b5c50(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  lVar6 = (long)_DAT_112774548;
  if (*(long *)(lVar1 + lVar6) != 0) {
    return;
  }
  puVar4 = PTR_PTR_1126d9360;
  _objc_alloc();
  func_0x00010c0508e0();
  func_0x0001080b5e68();
  func_0x00010bf85b60();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(lVar1 + lVar6);
  *(undefined **)(lVar1 + lVar6) = puVar4;
  func_0x0001080b5e0c(uVar5);
  func_0x0001080b5c84();
  puVar4 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b5e50();
  func_0x00010befc2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1080b38f4; end: 1080b39a3; -[SCValdiTextLayoutView _startAnimatedTextDisplayLinkIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b38f4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112774548;
  if (*(long *)(param_1 + lVar3) != 0) {
    return;
  }
  puVar1 = PTR_PTR_1126d9360;
  _objc_alloc();
  func_0x00010c0508e0();
  func_0x0001080b5e68();
  func_0x00010bf85b60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined **)(param_1 + lVar3) = puVar1;
  func_0x0001080b5e0c(uVar2);
  func_0x0001080b5c84();
  puVar1 = PTR__OBJC_CLASS___NSRunLoop_1126b94b0;
  func_0x00010c0b6be0(PTR__OBJC_CLASS___NSRunLoop_1126b94b0);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b5e50();
  func_0x00010befc2c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1080b39a4; end: 1080b39ef; -[SCValdiTextLayoutView _animatedTextDisplayLinkDidFire:] */

void FUN_1080b39a4(ulong param_1)

{
  long unaff_x21;
  
  func_0x0001080b5df4();
  func_0x0001080b5fc0();
  func_0x0001080b5d68((long)*(int *)(unaff_x21 + 0x24));
  func_0x0001080b5f78();
  func_0x0001080b5c84();
  if ((param_1 & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c2559f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080b39f0; end: 1080b3a53; -[SCValdiTextLayoutView _currentTextString] */

void FUN_1080b39f0(long param_1)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long extraout_x8;
  
  func_0x0001080b6030();
  ppuVar2 = *(undefined ***)(param_1 + extraout_x8);
  func_0x00010bf0e280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = &PTR____CFConstantStringClassReference_110daafd8;
  if (ppuVar2 != (undefined **)0x0) {
    ppuVar1 = ppuVar2;
  }
  _objc_retain(ppuVar1);
  func_0x0001080b5c7c();
  func_0x0001080b5c8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1080b3a54; end: 1080b3a87; -[SCValdiTextLayoutView _currentTextLength] */

undefined8 FUN_1080b3a54(undefined8 param_1)

{
  func_0x00010bdf7320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  func_0x0001080b5c8c();
  return param_1;
}



/* Entry: 1080b3a88; end: 1080b3ad7; -[SCValdiTextLayoutView _ensureSelectionState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b3a88(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112774514;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126d9368;
    _objc_opt_new();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    func_0x0001080b5e0c(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  func_0x0001080b5d24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1080b3ad8; end: 1080b3b93; -[SCValdiTextLayoutView _updateSelectionInteractionOverlayFrameIfNeeded] */

void FUN_1080b3ad8(long param_1)

{
  int iVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001080b6074();
  iVar1 = *(int *)(extraout_x8 + 0x514);
  lVar2 = *(long *)(param_1 + iVar1);
  func_0x00010c15a780();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    func_0x0001080b5ddc();
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b5e94();
    func_0x0001080b5c7c();
    if (unaff_x21 != 0) {
      func_0x0001080b5dc0();
      func_0x0001080b5ef8();
      func_0x0001080b5dc8();
      func_0x00010c15a780(*(undefined8 *)(unaff_x19 + iVar1));
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b5ddc();
      func_0x00010c2a71e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b6048();
      func_0x00010bf513e0();
      func_0x00010c19f0e0();
      func_0x0001080b5c84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  return;
}



/* Entry: 1080b3b94; end: 1080b3bdf; -[SCValdiTextLayoutView _removeSelectionInteractionOverlay] */

void FUN_1080b3b94(long param_1)

{
  int iVar1;
  long extraout_x8;
  long unaff_x19;
  
  func_0x0001080b6074();
  iVar1 = *(int *)(extraout_x8 + 0x514);
  func_0x00010c15a780(*(undefined8 *)(param_1 + iVar1));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12c960();
  func_0x0001080b5c7c();
                    /* WARNING: Could not recover jumptable at 0x00010c1fb930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x19 + iVar1),PTR_s_setSelectionInteractionOverlayVi_11265c870,0);
  return;
}



/* Entry: 1080b3be0; end: 1080b3c23; -[SCValdiTextLayoutView _clampedSelectionRangeWithStart:end:] */

undefined1  [16] FUN_1080b3be0(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined1 auVar3 [16];
  
  func_0x0001080b5e44();
  func_0x00010bdf7300();
  uVar2 = param_1;
  if ((long)unaff_x20 <= (long)param_1) {
    uVar2 = unaff_x20;
  }
  uVar2 = uVar2 & ((long)uVar2 >> 0x3f ^ 0xffffffffffffffffU);
  if ((long)unaff_x19 <= (long)param_1) {
    param_1 = unaff_x19;
  }
  uVar1 = uVar2;
  if ((long)uVar2 <= (long)param_1) {
    uVar1 = param_1;
  }
  auVar3._8_8_ = uVar1 - uVar2;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 1080b3c24; end: 1080b3c7f; -[SCValdiTextLayoutView _offsetFromTextPosition:] */

long FUN_1080b3c24(ulong param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  func_0x0001080b5c94();
  func_0x0001080b6024();
  _objc_opt_class();
  func_0x0001080b5fd0();
  lVar1 = param_3;
  if ((param_1 & 1) == 0) {
    lVar1 = 0;
  }
  func_0x0001080b5d24();
  if (lVar1 == 0) {
    param_3 = 0;
  }
  else {
    func_0x00010c0e1c40(param_3);
  }
  func_0x0001080b5c7c();
  func_0x0001080b5c8c();
  return param_3;
}



/* Entry: 1080b3c80; end: 1080b3d13; -[SCValdiTextLayoutView _rangeFromTextRange:] */

undefined1  [16] FUN_1080b3c80(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined1 auVar3 [16];
  undefined *puVar2;
  
  if (param_3 != 0) {
    func_0x0001080b5c94();
    lVar1 = param_3;
    func_0x00010c24d960(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b5e5c();
    func_0x00010be673c0();
    func_0x0001080b5c84();
    func_0x00010bf940a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b5c7c();
    func_0x0001080b5e5c();
    func_0x00010be673c0();
    func_0x0001080b5c84();
    puVar2 = PTR_s__clampedSelectionRangeWithStart__1125554f0;
                    /* WARNING: Could not recover jumptable at 0x00010bdded50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (param_1,PTR_s__clampedSelectionRangeWithStart__1125554f0,lVar1,param_3);
    auVar3._8_8_ = puVar2;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
  return ZEXT816(0);
}



/* Entry: 1080b3d14; end: 1080b401b; -[SCValdiTextLayoutView _notifySelectionChange] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b3d14(ulong param_1,undefined **param_2)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  undefined8 extraout_x8;
  ulong uVar11;
  
  uVar3 = param_1;
  func_0x0001080b5d2c();
  uVar11 = *(ulong *)(uVar3 + (long)_DAT_112774514);
  func_0x0001080b5d44();
  lVar4 = param_1 + (long)_DAT_112774544;
  _objc_loadWeakRetained();
  func_0x00010c295220();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b5c84();
  uVar3 = param_1;
  func_0x00010be94e80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x0001080b5e28();
  if ((int)uVar5 != 0) {
    uVar6 = param_1;
    func_0x00010c2a71e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    _objc_release();
    uVar5 = uVar7;
    if (((uVar6 != 0) && (lVar4 != 0)) && (uVar3 != 0)) {
      func_0x0001080b5ee8();
      uVar3 = uVar7;
      func_0x0001080b5ee8();
      lVar1 = uVar3 + (long)param_2;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      in_ZR = lRam0000000113729208 == -1;
      if (!(bool)in_ZR) {
        param_2 = &PTR___NSConcreteGlobalBlock_110a1cb20;
        func_0x000107c27d9c(0x113729208);
      }
      func_0x00010bf737c0(lVar4);
      _objc_release(puVar9);
      _objc_release(puVar8);
      func_0x0001080b5ed0();
      uVar3 = uVar11;
      func_0x00010c0e6460();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      _objc_release();
      if (uVar3 != 0) {
        func_0x00010b97f424();
        func_0x00010b97f5e4();
        func_0x00010bdf7320(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010b97f738(uVar5,param_1);
        func_0x0001080b5d3c();
        if (lRam0000000113729218 != -1) {
          func_0x000107c27d9c(0x113729218,&PTR___NSConcreteGlobalBlock_110a1cb40);
        }
        func_0x0001080b5db4();
        func_0x00010b97f8e0(uVar5,uVar7);
        if (lRam0000000113729228 != -1) {
          func_0x000107c27d9c(0x113729228,&PTR___NSConcreteGlobalBlock_110a1cb60);
        }
        func_0x0001080b5db4();
        func_0x00010b97f8e0(uVar5,lVar1);
        in_ZR = lRam0000000113729238 == -1;
        if (!(bool)in_ZR) {
          func_0x000107c27d9c(0x113729238,&PTR___NSConcreteGlobalBlock_110a1cb80);
        }
        param_2 = ppuRam0000000113729230;
        func_0x0001080b5db4();
        func_0x00010c0e6460();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0f9540();
        func_0x0001080b5cbc();
        func_0x0001080b5ea8();
        uVar5 = uVar11;
      }
    }
  }
  iVar10 = (int)param_2;
  func_0x0001080b5c84();
  func_0x0001080b5c7c();
  func_0x0001080b5c8c();
  func_0x0001080b5c50(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  if (iVar10 != 0) {
    _objc_begin_catch(uVar5);
    func_0x0001080b5ea8();
    _objc_exception_rethrow();
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1080b4000);
    (*pcVar2)();
  }
  uVar3 = uVar5;
  func_0x0001080b5fc8();
  iVar10 = (int)uVar3;
  func_0x0001080b5d54();
  if ((iVar10 != 0) && (uVar3 = uVar5, func_0x00010c073040(), (uVar3 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar5,PTR_s_becomeFirstResponder_1125a3810);
    return;
  }
  return;
}



/* Entry: 1080b401c; end: 1080b4053; -[SCValdiTextLayoutView _becomeSelectionFirstResponder] */

void FUN_1080b401c(int param_1)

{
  ulong unaff_x19;
  
  func_0x0001080b5d54();
  if ((param_1 != 0) && (func_0x00010c073040(), (unaff_x19 & 1) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010bf179b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 1080b4054; end: 1080b4193; -[SCValdiTextLayoutView _setSelectedRange:notify:] */

void FUN_1080b4054(long param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x19;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  long lStack_50;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1;
  func_0x0001080b5c30();
  if (unaff_x19 != 0) {
    func_0x0001080b5e68();
    func_0x00010bdded40();
    lVar2 = lVar1;
    lVar3 = param_2;
    if (param_2 != 0) {
      lVar2 = param_1;
      func_0x00010bdd3080();
    }
    func_0x0001080b5ee8();
    if (lVar2 != lVar1 || lVar3 != param_2) {
      func_0x00010c065920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15abc0();
      func_0x0001080b5e84();
      func_0x0001080b5e5c();
      func_0x00010c1fb500();
      if (param_5 != 0) {
        _objc_initWeak(auStack_48,param_1);
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0xc2000000;
        pcStack_70 = FUN_1080b4194;
        puStack_68 = &UNK_110849d70;
        _objc_copyWeak(auStack_60,auStack_48);
        lStack_58 = lVar1;
        lStack_50 = param_2;
        func_0x000107c27d8c(PTR___dispatch_main_q_11034be20,&puStack_80);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_48);
      }
      func_0x00010c065920();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c15a600();
      func_0x0001080b5c84();
      func_0x00010bedf860(param_1);
    }
  }
  func_0x0001080b5c8c();
  return;
}



/* Entry: 1080b4194; end: 1080b41fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b4194(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + _DAT_112774514);
    func_0x0001080b5d24();
    if ((lVar2 != 0) &&
       (func_0x00010c159e80(),
       lVar2 == *(long *)(param_1 + 0x28) && param_2 == *(long *)(param_1 + 0x30))) {
      func_0x00010be65080(lVar1);
    }
    func_0x0001080b5c7c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1080b41fc; end: 1080b423b; -[SCValdiTextLayoutView _clampSelectionToCurrentText] */

void FUN_1080b41fc(long param_1)

{
  long extraout_x8;
  
  func_0x0001080b6074();
  if (*(long *)(param_1 + *(int *)(extraout_x8 + 0x514)) != 0) {
    func_0x00010c159e80();
    func_0x0001080b6080();
                    /* WARNING: Could not recover jumptable at 0x00010bea72d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 1080b423c; end: 1080b43bb; -[SCValdiTextLayoutView _removeSelectionInteractions] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b423c(undefined *param_1,long param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long *plStack_250;
  long *plStack_120;
  
  puVar2 = param_1;
  func_0x0001080b5d2c();
  puVar6 = *(undefined **)(puVar2 + _DAT_112774514);
  func_0x0001080b5d24();
  func_0x0001080b5f18();
  puVar2 = puVar6;
  func_0x00010c15a740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c140180();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x0001080b5cbc();
  func_0x0001080b605c();
  func_0x0001080b5cd4();
  if (puVar3 != (undefined *)0x0) {
    lVar7 = *plStack_120;
    do {
      puVar8 = (undefined *)0x0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(puVar2);
        }
        puVar4 = param_1;
        func_0x00010c068a40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf4b900();
        puVar9 = puVar4;
        func_0x0001080b5e84();
        if ((int)puVar4 != 0) {
          puVar9 = param_1;
          func_0x00010c12cbe0();
        }
        puVar8 = puVar8 + 1;
        in_ZR = puVar8 == puVar3;
      } while (puVar8 < puVar3);
      func_0x0001080b605c();
      func_0x0001080b5cd4();
      puVar3 = puVar9;
    } while (puVar9 != (undefined *)0x0);
  }
  func_0x0001080b5c84();
  puVar2 = puVar6;
  func_0x00010c15a760();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    puVar3 = param_1;
    func_0x00010c068a40();
    iVar1 = (int)puVar3;
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4b900();
    func_0x0001080b5cbc();
    if (iVar1 != 0) {
      func_0x0001080b5e5c();
      func_0x00010c12cbe0();
    }
  }
  func_0x00010c1fb900(puVar6);
  func_0x0001080b5c84();
  func_0x00010c1fb8e0(puVar6);
  puVar3 = param_1;
  func_0x00010be8d320();
  func_0x0001080b5c7c();
  func_0x0001080b5c50(extraout_x8);
  if (!(bool)in_ZR) {
    ___stack_chk_fail();
    puVar8 = puVar3;
    func_0x0001080b5d2c();
    func_0x0001080b5c30();
    func_0x0001080b5e28();
    if ((int)puVar8 != 0) {
      puVar8 = param_1;
      func_0x00010c15a760();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b5ff0();
      if (puVar6 == (undefined *)0x0) {
        puVar6 = puVar3;
        func_0x00010c068a40();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = PTR__OBJC_CLASS___UITextInteraction_1126d9370;
        func_0x00010c26c220();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c18b5e0();
        func_0x00010c213460(puVar2);
        func_0x0001080b5e5c();
        func_0x00010c1fb900();
        puVar8 = puVar3;
        func_0x00010bef9440();
        func_0x0001080b5fa4();
        func_0x0001080b5f18();
        func_0x00010c068a40();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x0001080b605c();
        func_0x0001080b5d4c();
        if (puVar4 != (undefined *)0x0) {
          lVar7 = *plStack_250;
          do {
            puVar9 = (undefined *)0x0;
            do {
              if (*plStack_250 != lVar7) {
                _objc_enumerationMutation(puVar3);
              }
              puVar5 = puVar6;
              func_0x00010bf4b900();
              if (((ulong)puVar5 & 1) == 0) {
                func_0x00010befa120(puVar8);
              }
              puVar9 = puVar9 + 1;
              in_ZR = puVar9 == puVar4;
            } while (puVar9 < puVar4);
            func_0x0001080b605c();
            puVar4 = puVar3;
            func_0x0001080b5d4c();
          } while (puVar4 != (undefined *)0x0);
        }
        func_0x0001080b5d3c();
        func_0x00010bf51e00();
        puVar8 = param_1;
        func_0x00010c1fb8e0();
        func_0x0001080b5d3c();
        func_0x0001080b5cbc();
        func_0x0001080b5c84();
        func_0x0001080b5c7c();
      }
    }
    func_0x0001080b5c8c();
    func_0x0001080b5c50(extraout_x8_00);
    if (!(bool)in_ZR) {
      ___stack_chk_fail();
      puVar3 = puVar8;
      func_0x0001080b5c30();
      iVar1 = (int)puVar3;
      func_0x0001080b5e28();
      if (iVar1 != 0) {
        func_0x0001080b5ee8();
        if (param_2 != 0) {
          func_0x00010c2a71e0(puVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x0001080b5e94();
          if (puVar2 != (undefined *)0x0) {
            puVar2 = param_1;
            func_0x00010c15a780();
            _objc_retainAutoreleasedReturnValue();
            if (puVar2 == (undefined *)0x0) {
              puVar2 = PTR_PTR_1126d9378;
              _objc_opt_new();
              func_0x0001080b5e9c();
              func_0x00010bf3ae40();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c16e440(puVar2);
              func_0x0001080b5cbc();
              func_0x00010c1d4c20(puVar2);
              func_0x00010c1af000(puVar2);
              func_0x00010c160f00(puVar2);
              func_0x00010c213520(puVar2);
              func_0x0001080b5e5c();
              func_0x00010c1fb920();
            }
            func_0x00010c262ca0();
            _objc_retainAutoreleasedReturnValue();
            puVar3 = puVar8;
            func_0x00010c2a71e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            func_0x0001080b5cbc();
            if (puVar2 != puVar3) {
              func_0x00010c2a71e0(puVar8);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010befbb60();
              func_0x0001080b5cbc();
            }
            func_0x00010bedf880(puVar8);
            func_0x0001080b5c84();
            goto LAB_1080b467c;
          }
        }
        func_0x00010be8d320(puVar8);
      }
LAB_1080b467c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(param_1);
      return;
    }
  }
  return;
}



/* Entry: 1080b43bc; end: 1080b4543; -[SCValdiTextLayoutView _installSelectionInteractionsIfNeeded] */

void FUN_1080b43bc(undefined *param_1,long param_2)

{
  undefined1 in_ZR;
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 extraout_x8;
  undefined *unaff_x19;
  long unaff_x20;
  undefined *unaff_x21;
  long lVar6;
  undefined *puVar7;
  long *plStack_120;
  
  puVar2 = param_1;
  func_0x0001080b5d2c();
  func_0x0001080b5c30();
  func_0x0001080b5e28();
  if ((int)puVar2 != 0) {
    puVar2 = unaff_x19;
    func_0x00010c15a760();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b5ff0();
    if (unaff_x20 == 0) {
      puVar2 = param_1;
      func_0x00010c068a40();
      _objc_retainAutoreleasedReturnValue();
      unaff_x21 = PTR__OBJC_CLASS___UITextInteraction_1126d9370;
      func_0x00010c26c220();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c18b5e0();
      func_0x00010c213460(unaff_x21);
      func_0x0001080b5e5c();
      func_0x00010c1fb900();
      puVar3 = param_1;
      func_0x00010bef9440();
      func_0x0001080b5fa4();
      func_0x0001080b5f18();
      func_0x00010c068a40();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = param_1;
      func_0x0001080b605c();
      func_0x0001080b5d4c();
      if (puVar4 != (undefined *)0x0) {
        lVar6 = *plStack_120;
        do {
          puVar7 = (undefined *)0x0;
          do {
            if (*plStack_120 != lVar6) {
              _objc_enumerationMutation(param_1);
            }
            puVar5 = puVar2;
            func_0x00010bf4b900();
            if (((ulong)puVar5 & 1) == 0) {
              func_0x00010befa120(puVar3);
            }
            puVar7 = puVar7 + 1;
            in_ZR = puVar7 == puVar4;
          } while (puVar7 < puVar4);
          func_0x0001080b605c();
          puVar4 = param_1;
          func_0x0001080b5d4c();
        } while (puVar4 != (undefined *)0x0);
      }
      func_0x0001080b5d3c();
      func_0x00010bf51e00();
      puVar2 = unaff_x19;
      func_0x00010c1fb8e0();
      func_0x0001080b5d3c();
      func_0x0001080b5cbc();
      func_0x0001080b5c84();
      func_0x0001080b5c7c();
    }
  }
  func_0x0001080b5c8c();
  func_0x0001080b5c50(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  puVar3 = puVar2;
  func_0x0001080b5c30();
  iVar1 = (int)puVar3;
  func_0x0001080b5e28();
  if (iVar1 != 0) {
    func_0x0001080b5ee8();
    if (param_2 != 0) {
      func_0x00010c2a71e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b5e94();
      if (unaff_x21 != (undefined *)0x0) {
        func_0x00010c15a780();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x19 == (undefined *)0x0) {
          unaff_x19 = PTR_PTR_1126d9378;
          _objc_opt_new();
          func_0x0001080b5e9c();
          func_0x00010bf3ae40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16e440(unaff_x19);
          func_0x0001080b5cbc();
          func_0x00010c1d4c20(unaff_x19);
          func_0x00010c1af000(unaff_x19);
          func_0x00010c160f00(unaff_x19);
          func_0x00010c213520(unaff_x19);
          func_0x0001080b5e5c();
          func_0x00010c1fb920();
        }
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x00010c2a71e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        func_0x0001080b5cbc();
        if (unaff_x19 != puVar3) {
          func_0x00010c2a71e0(puVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60();
          func_0x0001080b5cbc();
        }
        func_0x00010bedf880(puVar2);
        func_0x0001080b5c84();
        goto LAB_1080b467c;
      }
    }
    func_0x00010be8d320(puVar2);
  }
LAB_1080b467c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b4544; end: 1080b4687; -[SCValdiTextLayoutView _updateSelectionInteractionOverlayForCurrentSelection] */

void FUN_1080b4544(undefined *param_1,long param_2)

{
  int iVar1;
  undefined *unaff_x19;
  long unaff_x21;
  undefined *puVar2;
  
  puVar2 = param_1;
  func_0x0001080b5c30();
  iVar1 = (int)puVar2;
  func_0x0001080b5e28();
  if (iVar1 != 0) {
    func_0x0001080b5ee8();
    if (param_2 != 0) {
      func_0x00010c2a71e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b5e94();
      if (unaff_x21 != 0) {
        func_0x00010c15a780();
        _objc_retainAutoreleasedReturnValue();
        if (unaff_x19 == (undefined *)0x0) {
          unaff_x19 = PTR_PTR_1126d9378;
          _objc_opt_new();
          func_0x0001080b5e9c();
          func_0x00010bf3ae40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c16e440(unaff_x19);
          func_0x0001080b5cbc();
          func_0x00010c1d4c20(unaff_x19);
          func_0x00010c1af000(unaff_x19);
          func_0x00010c160f00(unaff_x19);
          func_0x00010c213520(unaff_x19);
          func_0x0001080b5e5c();
          func_0x00010c1fb920();
        }
        func_0x00010c262ca0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_1;
        func_0x00010c2a71e0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        func_0x0001080b5cbc();
        if (unaff_x19 != puVar2) {
          func_0x00010c2a71e0(param_1);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befbb60();
          func_0x0001080b5cbc();
        }
        func_0x00010bedf880(param_1);
        func_0x0001080b5c84();
        goto LAB_1080b467c;
      }
    }
    func_0x00010be8d320(param_1);
  }
LAB_1080b467c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b4688; end: 1080b4727; -[SCValdiTextLayoutView setSelectable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b4688(ulong param_1,undefined8 param_2,int param_3)

{
  ulong uVar1;
  long lVar2;
  
  if (param_3 == 0) {
    lVar2 = (long)_DAT_112774514;
    if (*(long *)(param_1 + lVar2) == 0) {
      return;
    }
    uVar1 = param_1;
    func_0x00010c073040();
    if ((int)uVar1 != 0) {
      func_0x00010c13a0e0(param_1);
    }
    func_0x00010be8d340(param_1);
    uVar1 = *(ulong *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
  }
  else {
    uVar1 = param_1;
    func_0x0001080b5e28();
    if ((uVar1 & 1) != 0) {
      return;
    }
    func_0x00010be0a640(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1fada0();
    func_0x00010c159e80(param_1);
    func_0x0001080b6080();
    func_0x00010bea72c0();
    uVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1080b4728; end: 1080b48d3; -[SCValdiTextLayoutView setSelection:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1080b4728(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  long unaff_x21;
  undefined8 uVar4;
  
  func_0x0001080b5c64();
  uVar2 = param_3;
  func_0x00010bf529e0();
  if (uVar2 == 2) {
    func_0x0001080b5f48();
    func_0x00010c0dfd40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_opt_isKindOfClass(uVar2,puVar3);
    iVar1 = (int)uVar2;
    if ((uVar2 & 1) == 0) {
      func_0x0001080b5c7c();
LAB_1080b485c:
      func_0x00010b96bf1c();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b5fe4();
      if (iVar1 == 0) goto LAB_1080b48a8;
LAB_1080b4880:
      func_0x00010c25d9e0(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b603c();
      func_0x00010c0eeea0();
      uVar4 = 0;
    }
    else {
      uVar2 = param_3;
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_opt_isKindOfClass(uVar2,puVar3);
      iVar1 = (int)uVar2;
      func_0x0001080b5cbc();
      func_0x0001080b5c7c();
      if ((uVar2 & 1) == 0) goto LAB_1080b485c;
      if (*(long *)(unaff_x21 + _DAT_112774514) == 0) {
        uVar4 = 1;
        goto LAB_1080b48b0;
      }
      func_0x0001080b5f48();
      func_0x00010c0dfd40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      uVar4 = 1;
      func_0x00010c0dfd40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      func_0x00010bdded40();
      func_0x0001080b5f84();
    }
    func_0x0001080b5d3c();
  }
  else {
    func_0x00010b96bf1c();
    iVar1 = (int)uVar2;
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b5fe4();
    if (iVar1 != 0) goto LAB_1080b4880;
LAB_1080b48a8:
    uVar4 = 0;
  }
  func_0x0001080b5c7c();
LAB_1080b48b0:
  func_0x0001080b5c8c();
  return uVar4;
}



/* Entry: 1080b48d4; end: 1080b4917; -[SCValdiTextLayoutView setOnSelectionChange:] */

void FUN_1080b48d4(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x0001080b5c14();
  if ((unaff_x19 != 0) || (func_0x0001080b5f38(), extraout_x8 != 0)) {
    func_0x00010be0a640();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b5de8();
    func_0x00010c1d3480();
    func_0x0001080b5c7c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b4918; end: 1080b495b; -[SCValdiTextLayoutView setOnTextSelectionMenu:] */

void FUN_1080b4918(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x0001080b5c14();
  if ((unaff_x19 != 0) || (func_0x0001080b5f38(), extraout_x8 != 0)) {
    func_0x00010be0a640();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b5de8();
    func_0x00010c1d3f60();
    func_0x0001080b5c7c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b495c; end: 1080b499f; -[SCValdiTextLayoutView setOnTextSelectionMenuAction:] */

void FUN_1080b495c(void)

{
  long extraout_x8;
  long unaff_x19;
  
  func_0x0001080b5c14();
  if ((unaff_x19 != 0) || (func_0x0001080b5f38(), extraout_x8 != 0)) {
    func_0x00010be0a640();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b5de8();
    func_0x00010c1d3f80();
    func_0x0001080b5c7c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b49a0; end: 1080b49db; -[SCValdiTextLayoutView canBecomeFirstResponder] */

void FUN_1080b49a0(ulong param_1)

{
  func_0x0001080b5d54();
  if ((param_1 & 1) == 0) {
    func_0x0001080b5d5c();
    func_0x0001080b5f68();
  }
  return;
}



/* Entry: 1080b49dc; end: 1080b4a1f; -[SCValdiTextLayoutView becomeFirstResponder] */

void FUN_1080b49dc(int param_1)

{
  func_0x0001080b5d54();
  if (param_1 != 0) {
    func_0x0001080b5d5c();
    func_0x0001080b5f68();
    if (param_1 != 0) {
      func_0x00010bedf860();
    }
  }
  return;
}



/* Entry: 1080b4a20; end: 1080b4a73; -[SCValdiTextLayoutView resignFirstResponder] */

void FUN_1080b4a20(long param_1,long param_2)

{
  long extraout_x8;
  
  func_0x0001080b6074();
  func_0x00010c159e80(*(undefined8 *)(param_1 + *(int *)(extraout_x8 + 0x514)));
  if (param_2 != 0) {
    func_0x0001080b5f48();
    func_0x0001080b5f84();
  }
  func_0x00010be8d320();
  func_0x0001080b5d5c();
  func_0x0001080b5f68();
  return;
}



/* Entry: 1080b4a74; end: 1080b4b3b; -[SCValdiTextLayoutView canPerformAction:withSender:] */

undefined1 * FUN_1080b4a74(ulong param_1,ulong param_2,undefined *param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong *puVar2;
  ulong auStack_40 [2];
  
  puVar2 = auStack_40;
  func_0x0001080b5f60();
  uVar1 = param_1;
  func_0x00010c159180();
  if ((uVar1 & 1) == 0) {
    func_0x0001080b5d5c();
    auStack_40[0] = param_1;
    _objc_msgSendSuper2(auStack_40,PTR_s_canPerformAction_withSender__1125311f8,param_3,param_4);
  }
  else if (param_3 == PTR_s_copy__11253b4c8) {
    func_0x0001080b5d14();
    puVar2 = (ulong *)(ulong)(param_2 != 0);
  }
  else if ((param_3 == PTR_s_selectAll__112633bd0) && (func_0x0001080b5fdc(), uVar1 != 0)) {
    func_0x0001080b5d14();
    func_0x0001080b5fdc();
    puVar2 = (ulong *)(ulong)(param_2 < uVar1);
  }
  else {
    puVar2 = (ulong *)0x0;
  }
  func_0x0001080b5c8c();
  return (undefined1 *)puVar2;
}



/* Entry: 1080b4b3c; end: 1080b4bdb; -[SCValdiTextLayoutView copy:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b4b3c(int param_1,long param_2)

{
  long lVar1;
  long unaff_x19;
  long lVar2;
  
  func_0x0001080b5d54();
  if (param_1 != 0) {
    lVar2 = (long)_DAT_112774514;
    func_0x00010c159e80(*(undefined8 *)(unaff_x19 + lVar2));
    if (param_2 != 0) {
      lVar1 = unaff_x19;
      func_0x00010bdf7320();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c159e80(*(undefined8 *)(unaff_x19 + lVar2));
      func_0x00010c260c80();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b5c7c();
      if (lVar1 != 0) {
        func_0x00010bfbedc0(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
        _objc_retainAutoreleasedReturnValue();
        func_0x0001080b5de8();
        func_0x00010c20e7c0();
        func_0x0001080b5c7c();
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar1);
      return;
    }
  }
  return;
}



/* Entry: 1080b4bdc; end: 1080b4c17; -[SCValdiTextLayoutView selectAll:] */

void FUN_1080b4bdc(int param_1)

{
  func_0x0001080b5d54();
  if (param_1 != 0) {
    func_0x00010bdf7300();
    func_0x0001080b5f48();
                    /* WARNING: Could not recover jumptable at 0x00010bea72d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)();
    return;
  }
  return;
}



/* Entry: 1080b4c18; end: 1080b4eeb; -[SCValdiTextLayoutView _customEditMenuActionsForTextRange:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b4c18(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 in_ZR;
  long lVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined **ppuVar11;
  undefined *puStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined1 auStack_160 [8];
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined1 auStack_148 [8];
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_80;
  
  lVar2 = param_1;
  func_0x0001080b5d2c();
  ppuVar8 = *(undefined ***)(lVar2 + _DAT_112774514);
  uStack_80 = extraout_x8;
  func_0x0001080b5d24();
  lVar2 = param_1;
  func_0x00010bdf7320();
  _objc_retainAutoreleasedReturnValue();
  FUN_1080ac9fc();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b5c8c();
  func_0x00010c0e71a0();
  _objc_retainAutoreleasedReturnValue();
  FUN_1080acb7c();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001080b5c8c();
  ppuVar3 = ppuVar8;
  func_0x00010bf529e0();
  func_0x0001080b6080();
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  func_0x0001080b5d24();
  ppuVar4 = ppuVar8;
  func_0x0001080b5d4c();
  ppuVar9 = ppuVar8;
  if (ppuVar4 != (undefined **)0x0) {
    lVar10 = *plStack_130;
    ppuVar9 = &puStack_188;
    do {
      ppuVar11 = (undefined **)0x0;
      do {
        if (*plStack_130 != lVar10) {
          _objc_enumerationMutation(ppuVar8);
        }
        uVar7 = *(undefined8 *)(lStack_138 + (long)ppuVar11 * 8);
        uVar5 = uVar7;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c0e00e0(uVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_initWeak(auStack_148,param_1);
        puVar1 = PTR__OBJC_CLASS___UIAction_1126d0d40;
        puStack_188 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_180 = 0xc2000000;
        pcStack_178 = FUN_1080b4eec;
        puStack_170 = &UNK_110a1caf0;
        _objc_copyWeak(auStack_160,auStack_148);
        uStack_158 = param_3;
        uStack_150 = param_4;
        _objc_retain(uVar5);
        uStack_168 = uVar5;
        func_0x00010beef300(puVar1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(ppuVar3);
        func_0x0001080b5ed0();
        _objc_release(uStack_168);
        _objc_destroyWeak(auStack_160);
        _objc_destroyWeak(auStack_148);
        func_0x0001080b5c8c();
        func_0x0001080b5d3c();
        ppuVar11 = (undefined **)((long)ppuVar11 + 1);
        in_ZR = ppuVar11 == ppuVar4;
      } while (ppuVar11 < ppuVar4);
      ppuVar4 = ppuVar8;
      func_0x0001080b5d4c();
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar8);
  _objc_release(ppuVar8);
  _objc_release(lVar2);
  _objc_release();
  func_0x0001080b5c50(uStack_80);
  if ((bool)in_ZR) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(ppuVar9 + 5);
  puVar6 = auStack_148;
  _objc_destroyWeak();
  func_0x0001080b5fc8();
  puVar6 = puVar6 + 0x28;
  _objc_loadWeakRetained();
  if (puVar6 != (undefined1 *)0x0) {
    func_0x00010bdf7320(puVar6);
    _objc_retainAutoreleasedReturnValue();
    FUN_1080ac9fc();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b5c84();
    func_0x00010c0e71c0(*(undefined8 *)(puVar6 + _DAT_112774514));
    _objc_retainAutoreleasedReturnValue();
    FUN_1080ad088();
    func_0x0001080b5c84();
    func_0x0001080b5cbc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar6);
  return;
}



/* Entry: 1080b4eec; end: 1080b4f77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b4eec(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bdf7320(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_1080ac9fc();
    _objc_retainAutoreleasedReturnValue();
    func_0x0001080b5c84();
    func_0x00010c0e71c0(*(undefined8 *)(param_1 + _DAT_112774514));
    _objc_retainAutoreleasedReturnValue();
    FUN_1080ad088();
    func_0x0001080b5c84();
    func_0x0001080b5cbc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080b4f78; end: 1080b506f; -[SCValdiTextLayoutView editMenuForTextRange:suggestedActions:] */

void FUN_1080b4f78(void)

{
  long lVar1;
  long unaff_x21;
  undefined *puVar2;
  
  func_0x0001080b5c64();
  func_0x0001080b5d24();
  lVar1 = unaff_x21;
  func_0x00010c159180();
  if ((int)lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    func_0x0001080b5e30();
    func_0x00010bdf76c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf529e0();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    if (unaff_x21 == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      func_0x0001080b5f70();
      func_0x0001080b603c();
      func_0x00010bf529e0();
      func_0x00010bf0a0e0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa160();
      func_0x00010befa160(puVar2);
      puVar2 = PTR__OBJC_CLASS___UIMenu_1126d0d48;
      func_0x00010c0ca980(PTR__OBJC_CLASS___UIMenu_1126d0d48);
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b5d3c();
    }
    func_0x0001080b5c84();
  }
  func_0x0001080b5c7c();
  func_0x0001080b5c8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1080b5070; end: 1080b50a7; -[SCValdiTextLayoutView interactionShouldBegin:atPoint:] */

void FUN_1080b5070(int param_1)

{
  long unaff_x19;
  
  func_0x0001080b5d54();
  if ((param_1 != 0) && (func_0x00010bdf7300(), unaff_x19 != 0)) {
    func_0x00010bdd3080();
  }
  return;
}



/* Entry: 1080b50a8; end: 1080b50c3; -[SCValdiTextLayoutView hasText] */

bool FUN_1080b50a8(long param_1)

{
  func_0x00010bdf7300();
  return param_1 != 0;
}



/* Entry: 1080b50c4; end: 1080b50c7; -[SCValdiTextLayoutView insertText:] */

void FUN_1080b50c4(void)

{
  return;
}



/* Entry: 1080b50c8; end: 1080b50cb; -[SCValdiTextLayoutView deleteBackward] */

void FUN_1080b50c8(void)

{
  return;
}



/* Entry: 1080b50cc; end: 1080b5143; -[SCValdiTextLayoutView textInRange:] */

void FUN_1080b50cc(undefined **param_1,long param_2)

{
  undefined **ppuVar1;
  
  ppuVar1 = param_1;
  func_0x00010be85bc0();
  func_0x00010bdf7320();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08fa60();
  if (param_1 < (undefined **)((long)ppuVar1 + param_2)) {
    param_1 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    func_0x0001080b5e50();
    func_0x00010c260c80();
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x0001080b5c8c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1080b5144; end: 1080b5147; -[SCValdiTextLayoutView replaceRange:withText:] */

void FUN_1080b5144(void)

{
  return;
}



/* Entry: 1080b5148; end: 1080b518f; -[SCValdiTextLayoutView selectedTextRange] */

void FUN_1080b5148(int param_1)

{
  undefined *puVar1;
  
  func_0x0001080b5d54();
  puVar1 = PTR_PTR_1126d9330;
  if (param_1 != 0) {
    func_0x0001080b5f08();
    func_0x00010c11f4e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080b5190; end: 1080b526f; -[SCValdiTextLayoutView setSelectedTextRange:] */

void FUN_1080b5190(undefined8 param_1,long param_2)

{
  long lVar1;
  long unaff_x20;
  
  func_0x0001080b5c14();
  lVar1 = unaff_x20;
  func_0x00010c159180();
  if ((int)lVar1 != 0) {
    func_0x0001080b5e30();
    if (((param_2 == 0) && (func_0x0001080b5d14(), param_2 == 0)) &&
       (func_0x0001080b5fdc(), unaff_x20 != 0)) {
      func_0x0001080b6024();
      func_0x00010c104420();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b603c();
      func_0x00010c273400();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f2e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x0001080b5cbc();
      func_0x00010be85bc0();
      func_0x0001080b5e84();
      func_0x0001080b5d3c();
    }
    func_0x0001080b5e68();
    func_0x0001080b5f84();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 1080b5270; end: 1080b5277; -[SCValdiTextLayoutView markedTextRange] */

undefined8 FUN_1080b5270(void)

{
  return 0;
}



/* Entry: 1080b5278; end: 1080b5287; -[SCValdiTextLayoutView markedTextStyle] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b5278(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0bbdf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112774514),PTR_s_markedTextStyle_11260c990);
  return;
}



/* Entry: 1080b5288; end: 1080b529f; -[SCValdiTextLayoutView setMarkedTextStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1080b5288(long param_1)

{
  if (*(long *)(param_1 + _DAT_112774514) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1c2bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112774514),PTR_s_setMarkedTextStyle__11264e510);
    return;
  }
  return;
}



/* Entry: 1080b52a0; end: 1080b52a3; -[SCValdiTextLayoutView setMarkedText:selectedRange:] */

void FUN_1080b52a0(void)

{
  return;
}



/* Entry: 1080b52a4; end: 1080b52a7; -[SCValdiTextLayoutView unmarkText] */

void FUN_1080b52a4(void)

{
  return;
}



/* Entry: 1080b52a8; end: 1080b52bb; -[SCValdiTextLayoutView beginningOfDocument] */

void FUN_1080b52a8(undefined8 param_1)

{
  func_0x0001080b6024();
                    /* WARNING: Could not recover jumptable at 0x00010c104430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_positionWithOffset__11261eb28,0);
  return;
}



/* Entry: 1080b52bc; end: 1080b52e3; -[SCValdiTextLayoutView endOfDocument] */

void FUN_1080b52bc(undefined8 param_1)

{
  func_0x00010bdf7300();
  func_0x0001080b6080();
                    /* WARNING: Could not recover jumptable at 0x00010c104430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_positionWithOffset__11261eb28);
  return;
}



/* Entry: 1080b52e4; end: 1080b5333; -[SCValdiTextLayoutView textRangeFromPosition:toPosition:] */

void FUN_1080b52e4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x0001080b5cac();
  puVar1 = PTR_PTR_1126d9330;
  func_0x0001080b5f60();
  func_0x0001080b5c70();
  uVar2 = param_1;
  func_0x0001080b5d8c();
  func_0x0001080b5c8c();
                    /* WARNING: Could not recover jumptable at 0x00010c11f510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (puVar1,PTR_s_rangeWithStartOffset_endOffset__112625760,param_1,uVar2);
  return;
}



/* Entry: 1080b5334; end: 1080b5387; -[SCValdiTextLayoutView positionFromPosition:offset:] */

void FUN_1080b5334(void)

{
  func_0x0001080b5e44();
  func_0x0001080b5c64();
  func_0x00010bdf7300();
  func_0x0001080b5c70();
  func_0x0001080b5c7c();
  func_0x0001080b6024();
                    /* WARNING: Could not recover jumptable at 0x00010c104430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1080b5388; end: 1080b5397; -[SCValdiTextLayoutView positionFromPosition:inDirection:offset:] */

void FUN_1080b5388(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long lVar1;
  
  lVar1 = -param_5;
  if (1 < param_4 - 3U) {
    lVar1 = param_5;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1042f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_positionFromPosition_offset__11261ead8,param_3,lVar1);
  return;
}



/* Entry: 1080b5398; end: 1080b53d7; -[SCValdiTextLayoutView comparePosition:toPosition:] */

ulong FUN_1080b5398(long param_1)

{
  long lVar1;
  ulong uVar2;
  
  func_0x0001080b5cac();
  func_0x0001080b5f60();
  func_0x0001080b5c70();
  lVar1 = param_1;
  func_0x0001080b5d8c();
  func_0x0001080b5c8c();
  uVar2 = (ulong)(lVar1 < param_1);
  if (param_1 < lVar1) {
    uVar2 = 0xffffffffffffffff;
  }
  return uVar2;
}



/* Entry: 1080b53d8; end: 1080b540f; -[SCValdiTextLayoutView offsetFromPosition:toPosition:] */

long FUN_1080b53d8(long param_1)

{
  long lVar1;
  
  func_0x0001080b5e44();
  func_0x0001080b5c64();
  func_0x0001080b5d8c();
  lVar1 = param_1;
  func_0x0001080b5c70();
  func_0x0001080b5c7c();
  return param_1 - lVar1;
}


