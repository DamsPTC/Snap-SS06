/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1038e7160; end: 1038e71c7; -[_TtC20SCCommerceSwiftViews20SCCommerceCartButton setIsWhiteStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e7160(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fad000;
  func_0x000107c61428(param_1 + _DAT_112fad000,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_1);
  FUN_1038e6f30();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1038e71c8; end: 1038e720f; -[_TtC20SCCommerceSwiftViews20SCCommerceCartButton iconProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e71c8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fad008;
  func_0x000107c61428(param_1 + _DAT_112fad008,auStack_38,0,0);
  func_0x000107c615f0(*(undefined8 *)(param_1 + lVar1));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038e7210; end: 1038e72c7; -[_TtC20SCCommerceSwiftViews20SCCommerceCartButton setIconProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e7210(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fad008;
  func_0x000107c61428(param_1 + _DAT_112fad008,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(long *)(param_1 + lVar1) = param_3;
  func_0x000107c615f4(param_3,2);
  func_0x000107c61174();
  func_0x000107c615e8(uVar2);
  if (param_3 == 0) {
    func_0x000107c61170(param_1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fad010);
    func_0x000107c551f4(uVar2);
    func_0x000107c4eb5c(uVar2);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(param_3);
  }
  return;
}



/* Entry: 1038e72c8; end: 1038e73d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038e72c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar4 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  lVar2 = _DAT_112fad010;
  puVar3 = PTR_PTR_1126b06c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _DAT_112fad018;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112facff0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fad020) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112facff8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fad000) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fad008) = 0;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_1038e73d8();
  func_0x000107c61170(puVar4);
  return puVar4;
}



/* Entry: 1038e73d8; end: 1038e78bb;  */

/* WARNING: Possible PIC construction at 0x0001038e742c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e7508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e753c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e7588: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e75dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e762c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e76b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e76ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e7738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e778c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e77c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e7808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e7834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e7858: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e787c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038e785c) */
/* WARNING: Removing unreachable block (ram,0x0001038e7838) */
/* WARNING: Removing unreachable block (ram,0x0001038e780c) */
/* WARNING: Removing unreachable block (ram,0x0001038e77c8) */
/* WARNING: Removing unreachable block (ram,0x0001038e7790) */
/* WARNING: Removing unreachable block (ram,0x0001038e773c) */
/* WARNING: Removing unreachable block (ram,0x0001038e76f0) */
/* WARNING: Removing unreachable block (ram,0x0001038e76bc) */
/* WARNING: Removing unreachable block (ram,0x0001038e7630) */
/* WARNING: Removing unreachable block (ram,0x0001038e75e0) */
/* WARNING: Removing unreachable block (ram,0x0001038e758c) */
/* WARNING: Removing unreachable block (ram,0x0001038e7540) */
/* WARNING: Removing unreachable block (ram,0x0001038e750c) */
/* WARNING: Removing unreachable block (ram,0x0001038e7430) */
/* WARNING: Removing unreachable block (ram,0x0001038e7880) */

void FUN_1038e73d8(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c3fa94();
  func_0x000107c61180();
  func_0x000107c52b50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1038e78bc; end: 1038e78db; -[_TtC20SCCommerceSwiftViews20SCCommerceCartButton initWithFrame:] */

void FUN_1038e78bc(void)

{
  FUN_1038e72c8();
  return;
}



/* Entry: 1038e78dc; end: 1038e7903; -[_TtC20SCCommerceSwiftViews20SCCommerceCartButton initWithCoder:] */

void FUN_1038e78dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1038e7c64();
  return;
}



/* Entry: 1038e7904; end: 1038e7913; -[_TtC20SCCommerceSwiftViews20SCCommerceCartButton intrinsicContentSize] */

void FUN_1038e7904(void)

{
  return;
}



/* Entry: 1038e7914; end: 1038e7a0f; -[_TtC20SCCommerceSwiftViews20SCCommerceCartButton touchesBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e7914(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = 0;
  FUN_1038e7d64(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar3 = uVar2;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar2,uVar3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar4 = param_3;
  func_0x000107c5fe08(param_3,uVar2,uVar3);
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_touchesBegan_withEvent__11267b780,uVar4,param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c526c0(0x3fd999999999999a,*(undefined8 *)(param_1 + _DAT_112fad010));
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c6142c(param_3);
  return;
}



/* Entry: 1038e7a10; end: 1038e7a1b; -[_TtC20SCCommerceSwiftViews20SCCommerceCartButton touchesEnded:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e7a10(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = 0;
  FUN_1038e7d64(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar3 = uVar2;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar2,uVar3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar4 = param_3;
  func_0x000107c5fe08(param_3,uVar2,uVar3);
  lStack_60 = param_1;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,PTR_s_touchesEnded_withEvent__11267b788,uVar4,param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c526c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_112fad010));
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c6142c(param_3);
  return;
}



/* Entry: 1038e7a1c; end: 1038e7a27; -[_TtC20SCCommerceSwiftViews20SCCommerceCartButton touchesCancelled:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e7a1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = 0;
  FUN_1038e7d64(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar3 = uVar2;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar2,uVar3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar4 = param_3;
  func_0x000107c5fe08(param_3,uVar2,uVar3);
  lStack_60 = param_1;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,PTR_s_touchesCancelled_withEvent__112526c90,uVar4,param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c526c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_112fad010));
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c6142c(param_3);
  return;
}



/* Entry: 1038e7a28; end: 1038e7b27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e7a28(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_60;
  long lStack_58;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = 0;
  FUN_1038e7d64(0,0x112d5e570,&PTR__OBJC_CLASS___UITouch_1126a6378);
  uVar3 = uVar2;
  func_0x000101107df4();
  func_0x000107c5fe10(param_3,uVar2,uVar3);
  func_0x000107c61174(param_4);
  func_0x000107c61174();
  uVar4 = param_3;
  func_0x000107c5fe08(param_3,uVar2,uVar3);
  lStack_60 = param_1;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,*param_5,uVar4,param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c526c0(0x3ff0000000000000,*(undefined8 *)(param_1 + _DAT_112fad010));
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_4);
  func_0x000107c6142c(param_3);
  return;
}



/* Entry: 1038e7b28; end: 1038e7bb3; -[_TtC20SCCommerceSwiftViews20SCCommerceCartButton didTapButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e7b28(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112facff0);
  func_0x000107c61428(puVar1,auStack_48,0,0);
  pcVar2 = (code *)*puVar1;
  if (pcVar2 != (code *)0x0) {
    uVar3 = puVar1[1];
    func_0x000107c61174(param_1);
    func_0x000100b64c10(pcVar2,uVar3);
    (*pcVar2)();
    func_0x000107c61170(param_1);
    func_0x00010058d43c(pcVar2,uVar3);
  }
  return;
}



/* Entry: 1038e7bb4; end: 1038e7be7;  */

void FUN_1038e7bb4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038e7be8; end: 1038e7c43; -[_TtC20SCCommerceSwiftViews20SCCommerceCartButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e7be8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fad010));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fad018));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112facff0),
                      ((undefined8 *)(param_1 + _DAT_112facff0))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112fad008));
  return;
}



/* Entry: 1038e7c44; end: 1038e7c63;  */

void FUN_1038e7c44(void)

{
  func_0x000107c61168(&PTR_PTR_1128fe5c0);
  return;
}



/* Entry: 1038e7c64; end: 1038e7d3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e7c64(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar2 = _DAT_112fad010;
  puVar4 = PTR_PTR_1126b06c8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112fad018;
  puVar4 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112facff0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fad020) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112facff8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112fad000) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112fad008) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCCommerceSwiftViews/SCCommerceCartButton.swift",0x2f,2,0x2a,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1038e7d3c);
  (*pcVar3)();
}



/* Entry: 1038e7d3c; end: 1038e7d63;  */

void FUN_1038e7d3c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001038e7d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 1038e7d64; end: 1038e7da3;  */

void FUN_1038e7d64(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 1038e7da4; end: 1038e7e2f; -[_TtC20SCCommerceSwiftViews25SCCommerceSimpleErrorView delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e7da4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fad050;
  func_0x000107c61428(param_1 + _DAT_112fad050,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038e7e30; end: 1038e7fd3; -[_TtC20SCCommerceSwiftViews25SCCommerceSimpleErrorView setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e7e30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fad050;
  func_0x000107c61428(param_1 + _DAT_112fad050,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038e7fd4; end: 1038e7fe3; -[_TtC20SCCommerceSwiftViews25SCCommerceSimpleErrorView model] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e7fd4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fad070));
  return;
}



/* Entry: 1038e7fe4; end: 1038e8017; -[_TtC20SCCommerceSwiftViews25SCCommerceSimpleErrorView setModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e7fe4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112fad070);
  *(undefined8 *)(param_1 + _DAT_112fad070) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1038e8018; end: 1038e811f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038e8018(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112fad058;
  puVar3 = &stack0xffffffffffffffa0;
  puVar2 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112fad060;
  puVar2 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112fad068;
  puVar2 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  func_0x000107c61614(unaff_x20 + _DAT_112fad050,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fad070) = 0;
  FUN_1038e8120();
  func_0x000107c61154(param_1,param_2,param_3,param_4,&stack0xffffffffffffffa0,
                      PTR_s_initWithFrame__1125e2948);
  func_0x000107c61180();
  FUN_1038e8344();
  func_0x000107c61170(puVar3);
  return puVar3;
}



/* Entry: 1038e8120; end: 1038e813f;  */

void FUN_1038e8120(void)

{
  func_0x000107c61168(&PTR_PTR_1128fe6a8);
  return;
}



/* Entry: 1038e8140; end: 1038e815f; -[_TtC20SCCommerceSwiftViews25SCCommerceSimpleErrorView initWithFrame:] */

void FUN_1038e8140(void)

{
  FUN_1038e8018();
  return;
}



/* Entry: 1038e8160; end: 1038e8187; -[_TtC20SCCommerceSwiftViews25SCCommerceSimpleErrorView initWithCoder:] */

void FUN_1038e8160(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1038e88f8();
  return;
}



/* Entry: 1038e8188; end: 1038e8293;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e8188(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fad070);
  *(long *)(unaff_x20 + _DAT_112fad070) = param_1;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fad060);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112facfb0);
  func_0x000107c5fadc(uVar1,((undefined8 *)(param_1 + _DAT_112facfb0))[1]);
  func_0x000107c59c6c(uVar2);
  func_0x000107c61170(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fad068);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112facfb8);
  func_0x000107c5fadc(uVar1,((undefined8 *)(param_1 + _DAT_112facfb8))[1]);
  func_0x000107c59c6c(uVar2);
  func_0x000107c61170(uVar1);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fad058);
  uVar1 = *(undefined8 *)(param_1 + _DAT_112facfc0);
  func_0x000107c5fadc(uVar1,((undefined8 *)(param_1 + _DAT_112facfc0))[1]);
  func_0x000107c59e1c(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010befbd70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_addTarget_action_forControlEvent_11259c900);
  return;
}



/* Entry: 1038e8294; end: 1038e82e3; -[_TtC20SCCommerceSwiftViews25SCCommerceSimpleErrorView populateWithModel:] */

/* WARNING: Possible PIC construction at 0x0001038e82cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038e82d0) */

void FUN_1038e8294(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1038e8188(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1038e82e4; end: 1038e8343; -[_TtC20SCCommerceSwiftViews25SCCommerceSimpleErrorView buttonTapped] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e82e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fad050;
  func_0x000107c61428(param_1 + _DAT_112fad050,auStack_38,0,0);
  param_1 = param_1 + lVar1;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x000107c42a30();
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 1038e8344; end: 1038e885f;  */

/* WARNING: Possible PIC construction at 0x0001038e84a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e84f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e854c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e8590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e8608: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e865c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e86b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e86e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e8760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e87b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e8808: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038e87b8) */
/* WARNING: Removing unreachable block (ram,0x0001038e8764) */
/* WARNING: Removing unreachable block (ram,0x0001038e86ec) */
/* WARNING: Removing unreachable block (ram,0x0001038e86b4) */
/* WARNING: Removing unreachable block (ram,0x0001038e8660) */
/* WARNING: Removing unreachable block (ram,0x0001038e860c) */
/* WARNING: Removing unreachable block (ram,0x0001038e8594) */
/* WARNING: Removing unreachable block (ram,0x0001038e8550) */
/* WARNING: Removing unreachable block (ram,0x0001038e84fc) */
/* WARNING: Removing unreachable block (ram,0x0001038e84a8) */
/* WARNING: Removing unreachable block (ram,0x0001038e880c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e8344(void)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112fad060);
  func_0x000107c3d89c();
  func_0x000107c5a050(uVar3);
  func_0x000107c5a100(uVar3);
  func_0x000107c59c74(uVar3);
  func_0x000107c56ba8(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fad068);
  func_0x000107c3d89c();
  func_0x000107c5a050(uVar2);
  func_0x000107c5a100(uVar2);
  func_0x000107c59c74(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112fad058);
  func_0x000107c3d89c();
  func_0x000107c5a050(uVar2);
  func_0x000107c59a2c(uVar2);
  puVar1 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar1 + 0x18) = 7;
  *(undefined8 *)(puVar1 + 0x10) = 3;
  func_0x000107c5cbe4(uVar3);
  func_0x000107c61180();
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c40280(uVar3);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1038e8860; end: 1038e888f;  */

void FUN_1038e8860(void)

{
  FUN_1038e8120();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038e8890; end: 1038e88f7; -[_TtC20SCCommerceSwiftViews25SCCommerceSimpleErrorView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001038e88ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e88cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038e88b0) */
/* WARNING: Removing unreachable block (ram,0x0001038e88d0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e8890(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fad058));
  return;
}



/* Entry: 1038e88f8; end: 1038e89d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e88f8(void)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112fad058;
  puVar3 = PTR_PTR_1126aec40;
  func_0x000107c61168();
  func_0x000107c3ee98();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112fad060;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112fad068;
  puVar3 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  func_0x000107c61614(unaff_x20 + _DAT_112fad050,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fad070) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCCommerceSwiftViews/SCCommerceSimpleErrorView.swift",0x34,2,0x28,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1038e89d4);
  (*pcVar2)();
}



/* Entry: 1038e89d4; end: 1038e89f7;  */

undefined8 FUN_1038e89d4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1038e89f8; end: 1038e8a9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1038e89f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  func_0x000107c610f8();
  lVar2 = _DAT_112fad0a0;
  func_0x000107c61614(unaff_x20 + _DAT_112fad0a0,0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fad0a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112fad0b0) = param_2;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  return puVar3;
}



/* Entry: 1038e8a9c; end: 1038e8b3b; -[MemoriesAIRemixController initWithAIRemixScopeExposer:memoriesSnapTranscoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e8a9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  lVar3 = _DAT_112fad0a0;
  func_0x000107c61614(param_1 + _DAT_112fad0a0,0);
  puVar1 = (undefined8 *)(param_1 + _DAT_112fad0a8);
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61604(param_1 + lVar3,param_3);
  *(undefined8 *)(param_1 + _DAT_112fad0b0) = param_4;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = param_1;
  lStack_48 = lVar4;
  func_0x000107c61174(param_4);
  func_0x000107c61154(&lStack_50,puVar2);
  return;
}



/* Entry: 1038e8b3c; end: 1038e8d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e8b3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  long unaff_x20;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  ppuVar6 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112fad0b0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    if (param_5 != (code *)0x0) {
      (*param_5)(0,0);
    }
  }
  else {
    puVar3 = &UNK_1106a88b0;
    func_0x000107c613fc(&UNK_1106a88b0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_1106a88d8;
    func_0x000107c613fc(&UNK_1106a88d8,0x48,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(code **)(puVar4 + 0x18) = param_5;
    *(undefined8 *)(puVar4 + 0x20) = param_6;
    *(undefined8 *)(puVar4 + 0x28) = param_1;
    *(undefined8 *)(puVar4 + 0x30) = param_2;
    *(undefined8 *)(puVar4 + 0x38) = param_3;
    *(undefined8 *)(puVar4 + 0x40) = param_4;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_1038e8d9c;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_100f0af84;
    puStack_88 = &UNK_1106a88f0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(&puStack_a0);
    puVar3 = puStack_78;
    func_0x0001038e8ecc(param_5,param_6);
    func_0x000107c61434(param_4);
    func_0x000107c61174(param_1);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1106a8928;
    func_0x000107c613fc(&UNK_1106a8928,0x20,7);
    *(code **)(puVar3 + 0x10) = param_5;
    *(undefined8 *)(puVar3 + 0x18) = param_6;
    pcStack_80 = FUN_1038e8edc;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_1038e8f94;
    puStack_88 = &UNK_1106a8940;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    puVar3 = puStack_78;
    func_0x0001038e8ecc(param_5,param_6);
    func_0x000107c61574(puVar3);
    puVar3 = &UNK_1106a8978;
    func_0x000107c613fc(&UNK_1106a8978,0x20,7);
    *(code **)(puVar3 + 0x10) = param_5;
    *(undefined8 *)(puVar3 + 0x18) = param_6;
    pcStack_80 = FUN_1038e9060;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_1012519d0;
    puStack_88 = &UNK_1106a8990;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    puVar3 = puStack_78;
    func_0x0001038e8ecc(param_5,param_6);
    func_0x000107c61574(puVar3);
    func_0x000107c5cee4(lVar2);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c615e8(lVar2);
  }
  return;
}



/* Entry: 1038e8d9c; end: 1038e8eaf;  */

void FUN_1038e8d9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar7 = &UNK_1106a8bf8;
  func_0x000107c613fc(&UNK_1106a8bf8,0x50,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar1;
  *(undefined8 *)(puVar7 + 0x18) = uVar4;
  *(undefined8 *)(puVar7 + 0x20) = uVar2;
  *(undefined8 *)(puVar7 + 0x28) = param_1;
  *(undefined8 *)(puVar7 + 0x30) = uVar5;
  *(undefined8 *)(puVar7 + 0x38) = uVar3;
  *(undefined8 *)(puVar7 + 0x40) = uVar6;
  *(undefined8 *)(puVar7 + 0x48) = uVar9;
  pcStack_70 = FUN_1038e9eec;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1106a8c10;
  puStack_68 = puVar7;
  func_0x000107c60bc4(&puStack_90);
  puVar7 = puStack_68;
  func_0x000107c6157c(uVar1);
  func_0x0001038e8ecc(uVar4,uVar2);
  func_0x000107c61434(uVar9);
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar3);
  func_0x000107c61574(puVar7);
  func_0x000100162d98("MemoriesAIRemixController.gallerySnapImageCompletion",ppuVar8);
  func_0x000107c60bd0(ppuVar8);
  return;
}



/* Entry: 1038e8eb0; end: 1038e8edb;  */

void FUN_1038e8eb0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1038e8edc; end: 1038e8f93;  */

void FUN_1038e8edc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &UNK_1106a8ba8;
  func_0x000107c613fc(&UNK_1106a8ba8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  pcStack_40 = FUN_1038e9eb8;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1106a8bc0;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x0001038e8ecc(uVar1,uVar2);
  func_0x000107c61574(puVar3);
  func_0x000100162d98("MemoriesAIRemixController.gallerySnapVideoCompletion",ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 1038e8f94; end: 1038e905f;  */

void FUN_1038e8f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar6 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c5edb4(puVar5,param_2);
  func_0x000107c6157c(uVar2);
  uVar4 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(puVar5,param_3);
  func_0x000107c61170(uVar4);
  func_0x000107c61574(uVar2);
  (**(code **)(lVar6 + 8))(puVar5,lVar3);
  return;
}



/* Entry: 1038e9060; end: 1038e9117;  */

void FUN_1038e9060(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar4 = &puStack_60;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &UNK_1106a8b58;
  func_0x000107c613fc(&UNK_1106a8b58,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  uStack_40 = 0x1038ea2bc;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1106a8b70;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  puVar3 = puStack_38;
  func_0x0001038e8ecc(uVar1,uVar2);
  func_0x000107c61574(puVar3);
  func_0x000100162d98("MemoriesAIRemixController.gallerySnapErrorCompletion",ppuVar4);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 1038e9118; end: 1038e9217; -[MemoriesAIRemixController presentAIRemixWithGallerySnap:presentingViewController:contextSessionId:completion:] */

void FUN_1038e9118(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  if (param_6 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_1106a8a40;
    func_0x000107c613fc(&UNK_1106a8a40,0x18,7);
    *(long *)(puVar1 + 0x10) = param_6;
    uVar2 = 0x1038ea2b0;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1038e8b3c(param_3,param_4,param_5,param_2,uVar2,puVar1);
  func_0x000100d62740(uVar2,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1038e9218; end: 1038e97d3;  */

void FUN_1038e9218(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar5 = &puStack_a0;
  func_0x000107c4ca5c();
  if (param_1 == 1) {
    puVar1 = PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68;
    func_0x000107c610f8(PTR__OBJC_CLASS___PHImageRequestOptions_1126bfc68);
    func_0x000107c453e4();
    func_0x000107c59b44();
    func_0x000107c56a38(puVar1);
    func_0x000107c53ff4(puVar1);
    puVar2 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
    func_0x000107c61168(PTR__OBJC_CLASS___PHImageManager_1126bfc70);
    func_0x000107c415e0();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)PTR__PHImageManagerMaximumSize_1103481c8;
    uVar7 = *(undefined8 *)(PTR__PHImageManagerMaximumSize_1103481c8 + 8);
    puVar3 = &UNK_1106a88b0;
    func_0x000107c613fc(&UNK_1106a88b0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = &UNK_1106a89c8;
    func_0x000107c613fc(&UNK_1106a89c8,0x40,7);
    *(undefined **)(puVar4 + 0x10) = puVar3;
    *(code **)(puVar4 + 0x18) = param_5;
    *(undefined8 *)(puVar4 + 0x20) = param_6;
    *(undefined8 *)(puVar4 + 0x28) = param_2;
    *(undefined8 *)(puVar4 + 0x30) = param_3;
    *(undefined8 *)(puVar4 + 0x38) = param_4;
    pcStack_80 = FUN_1038e9be4;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100f9eee0;
    puStack_88 = &UNK_1106a89e0;
    puStack_78 = puVar4;
    func_0x000107c60bc4(&puStack_a0);
    puVar3 = puStack_78;
    func_0x000107c61174(puVar1);
    func_0x0001038e8ecc(param_5,param_6);
    func_0x000107c61434(param_4);
    func_0x000107c61174(param_2);
    func_0x000107c61574(puVar3);
    func_0x000107c5037c(uVar6,uVar7,puVar2);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar1);
  }
  else if (param_5 != (code *)0x0) {
    (*param_5)(0,0);
  }
  return;
}



/* Entry: 1038e97d4; end: 1038e98d3; -[MemoriesAIRemixController presentAIRemixWithCameraRollAsset:presentingViewController:contextSessionId:completion:] */

void FUN_1038e97d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_5 == 0) {
    param_5 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  if (param_6 == 0) {
    puVar1 = (undefined *)0x0;
    pcVar2 = (code *)0x0;
  }
  else {
    puVar1 = &UNK_1106a8a18;
    func_0x000107c613fc(&UNK_1106a8a18,0x18,7);
    *(long *)(puVar1 + 0x10) = param_6;
    pcVar2 = FUN_1038e9e00;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1038e9218(param_3,param_4,param_5,param_2,pcVar2,puVar1);
  func_0x000100d62740(pcVar2,puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1038e98d4; end: 1038e9953;  */

void FUN_1038e98d4(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    func_0x000107c5677c(param_1);
    func_0x000107c56784(param_1);
    func_0x000107c4f018(param_2);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1038e9954; end: 1038e9a6f;  */

void FUN_1038e9954(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  uVar2 = param_3 + 0x10;
  func_0x000107c61618();
  if (uVar2 == 0) {
    if (param_1 == (code *)0x0) {
      return;
    }
    (*param_1)();
    return;
  }
  uVar3 = uVar2;
  func_0x000107c4f078();
  func_0x000107c61180();
  if (uVar3 != 0) {
    uVar4 = uVar3;
    func_0x000107c49aa0();
    if ((uVar4 & 1) == 0) {
      ppuVar5 = (undefined **)0x0;
      if (param_1 != (code *)0x0) {
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0x42000000;
        puStack_78 = &UNK_1000f6b44;
        puStack_70 = &UNK_1106a8b20;
        ppuVar5 = &puStack_88;
        pcStack_68 = param_1;
        uStack_60 = param_2;
        func_0x000107c60bc4(ppuVar5);
        uVar1 = uStack_60;
        func_0x000107c6157c(param_2);
        func_0x000107c61574(uVar1);
      }
      func_0x000107c420a8(uVar2);
      func_0x000107c61170(uVar2);
      func_0x000107c60bd0(ppuVar5);
      uVar2 = uVar3;
      goto LAB_1038e9a54;
    }
    func_0x000107c61170(uVar3);
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
LAB_1038e9a54:
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1038e9a70; end: 1038e9b3b;  */

/* WARNING: Possible PIC construction at 0x0001038e9abc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e9af8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001038e9b24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038e9ac0) */
/* WARNING: Removing unreachable block (ram,0x0001038e9b28) */
/* WARNING: Removing unreachable block (ram,0x0001038e9ad8) */
/* WARNING: Removing unreachable block (ram,0x0001038e9afc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e9a70(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 + _DAT_112fad0a8);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  *plVar1 = 0;
  plVar1[1] = 0;
  lVar4 = unaff_x20 + _DAT_112fad0a0;
  func_0x000107c61618();
  if (lVar4 != 0) {
    func_0x000107c5194c();
    func_0x000107c61180();
    if (lVar4 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  if (lVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(lVar3);
  return;
}



/* Entry: 1038e9b3c; end: 1038e9b63; -[MemoriesAIRemixController aiRemixScopeDidComplete] */

void FUN_1038e9b3c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1038e9a70();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1038e9b64; end: 1038e9b97;  */

void FUN_1038e9b64(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038e9b98; end: 1038e9be3; -[MemoriesAIRemixController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e9b98(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fad0a0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fad0b0));
  if (*(long *)(param_1 + _DAT_112fad0a8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(((long *)(param_1 + _DAT_112fad0a8))[1]);
    return;
  }
  return;
}



/* Entry: 1038e9be4; end: 1038e9ddf;  */

void FUN_1038e9be4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  if (param_2 == 0) {
    uStack_78 = 0;
    uStack_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    uVar7 = *(undefined8 *)PTR__PHImageResultIsDegradedKey_1103481d0;
    lVar10 = param_2;
    func_0x000107c5faec();
    uStack_c0 = uVar7;
    lStack_b8 = lVar10;
    func_0x000107c61434(lVar10);
    puVar9 = PTR___sSSN_11034da80;
    func_0x000107c602d4(&puStack_b0,&uStack_c0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    if (*(long *)(param_2 + 0x10) == 0) {
LAB_1038e9cac:
      uStack_78 = 0;
      uStack_80 = 0;
      lStack_68 = 0;
      uStack_70 = 0;
    }
    else {
      func_0x000107c61434(param_2);
      ppuVar8 = &puStack_b0;
      func_0x000100df95d0(ppuVar8);
      if (((ulong)puVar9 & 1) == 0) {
        func_0x000107c6142c(param_2);
        goto LAB_1038e9cac;
      }
      func_0x0001000bb420(*(long *)(param_2 + 0x38) + (long)ppuVar8 * 0x20,&uStack_80);
      func_0x000107c6142c(lVar10);
      lVar10 = param_2;
    }
    func_0x000107c6142c(lVar10);
    func_0x0001007bbff0(&puStack_b0);
    if (lStack_68 != 0) {
      ppuVar8 = &puStack_b0;
      func_0x000107c6147c(ppuVar8,&uStack_80,PTR___sypN_11034f1a8 + 8,PTR___sSbN_11034dd40,6);
      if (((int)ppuVar8 != 0) && (((byte)puStack_b0 & 1) != 0)) {
        return;
      }
      goto LAB_1038e9d08;
    }
  }
  func_0x00010006e7f4(&uStack_80);
LAB_1038e9d08:
  puVar9 = &UNK_1106a8a68;
  func_0x000107c613fc(&UNK_1106a8a68,0x48,7);
  *(undefined8 *)(puVar9 + 0x10) = uVar1;
  *(undefined8 *)(puVar9 + 0x18) = uVar4;
  *(undefined8 *)(puVar9 + 0x20) = uVar2;
  *(undefined8 *)(puVar9 + 0x28) = param_1;
  *(undefined8 *)(puVar9 + 0x30) = uVar5;
  *(undefined8 *)(puVar9 + 0x38) = uVar3;
  *(undefined8 *)(puVar9 + 0x40) = uVar6;
  pcStack_90 = FUN_1038e9e68;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_1106a8a80;
  ppuVar8 = &puStack_b0;
  puStack_88 = puVar9;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = puStack_88;
  func_0x000107c6157c(uVar1);
  func_0x0001038e8ecc(uVar4,uVar2);
  func_0x000107c61434(uVar6);
  func_0x000107c61174(param_1);
  func_0x000107c61174(uVar5);
  func_0x000107c61574(puVar9);
  func_0x000100162d98("MemoriesAIRemixController.cameraRollImageCompletion",ppuVar8);
  func_0x000107c60bd0(ppuVar8);
  return;
}



/* Entry: 1038e9de0; end: 1038e9dff;  */

void FUN_1038e9de0(void)

{
  func_0x000107c61168(&PTR_PTR_1128fe7c8);
  return;
}



/* Entry: 1038e9e00; end: 1038e9e1b;  */

void FUN_1038e9e00(uint param_1,uint param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001038e9e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))
            (*(long *)(unaff_x20 + 0x10),param_1 & 1,param_2 & 1);
  return;
}



/* Entry: 1038e9e1c; end: 1038e9e67;  */

void FUN_1038e9e1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  }
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1038e9e68; end: 1038e9e8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e9e68(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined **ppuVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  long extraout_x8;
  long unaff_x20;
  long lVar18;
  undefined8 auStack_120 [2];
  undefined1 auStack_110 [8];
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  lVar7 = *(long *)(unaff_x20 + 0x10);
  pcVar3 = *(code **)(unaff_x20 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar8 = *(long *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x40);
  lVar6 = 0;
  func_0x000107c5eec8();
  lVar18 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar18 + 0x40));
  lVar15 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar16 = auStack_90;
  func_0x000107c61428(lVar7 + 0x10,puVar16,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 == 0) {
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(0,0);
    }
  }
  else {
    if (lVar8 == 0) {
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(0,0);
      }
    }
    else {
      uStack_100 = uVar9;
      func_0x000107c61174();
      lStack_f8 = lVar8;
      func_0x000107c5eec4(auStack_110 + lVar15);
      func_0x000107c5eeac();
      (**(code **)(lVar18 + 8))(auStack_110 + lVar15,lVar6);
      lVar6 = lVar7 + _DAT_112fad0a0;
      func_0x000107c61618();
      lVar18 = lStack_f8;
      if (lVar6 == 0) {
        if (pcVar3 != (code *)0x0) {
          (*pcVar3)(0,0);
        }
        func_0x000107c61170(lVar18);
        func_0x000107c6142c(puVar16);
      }
      else {
        FUN_1038eac78(0);
        func_0x000107c610f8();
        func_0x000107c61434(uVar17);
        func_0x000107c61434(puVar16);
        *(undefined8 *)((long)auStack_120 + lVar15) = uVar17;
        *(undefined8 *)((long)auStack_120 + lVar15 + 8) = 0;
        uVar9 = 4;
        func_0x0001038ea984(4,0xe,2,lVar8,puVar16,0,0,uVar4);
        puVar11 = &UNK_1106a8ab8;
        puVar10 = puVar11;
        uStack_108 = uVar9;
        func_0x000107c613fc(&UNK_1106a8ab8,0x18,7);
        func_0x000107c61614(puVar10 + 0x10,uVar2);
        func_0x000107c613fc(&UNK_1106a8ab8,0x18,7);
        func_0x000107c61614(puVar11 + 0x10,uVar2);
        puVar12 = PTR_PTR_1126aeaf8;
        func_0x000107c610f8(PTR_PTR_1126aeaf8);
        puVar5 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a0 = 0x1038e9e7c;
        puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_b8 = 0x42000000;
        puStack_b0 = &UNK_100e1779c;
        puStack_a8 = &UNK_1106a8ad0;
        ppuVar13 = &puStack_c0;
        puStack_98 = puVar10;
        func_0x000107c60bc4(ppuVar13);
        uStack_d0 = 0x1038e9e84;
        puStack_f0 = puVar5;
        uStack_e8 = 0x42000000;
        puStack_e0 = &UNK_100e17304;
        puStack_d8 = &UNK_1106a8af8;
        ppuVar14 = &puStack_f0;
        puStack_c8 = puVar11;
        func_0x000107c60bc4(ppuVar14);
        func_0x000107c6157c(puVar10);
        func_0x000107c6157c(puVar11);
        func_0x000107c47be0(puVar12);
        func_0x000107c60bd0(ppuVar14);
        func_0x000107c60bd0(ppuVar13);
        func_0x000107c61574(puStack_c8);
        puVar5 = puStack_98;
        func_0x000107c61574(puVar10);
        func_0x000107c61574(puVar11);
        func_0x000107c61574(puVar5);
        func_0x000100926e50(0);
        func_0x000107c610f8();
        lVar8 = lStack_f8;
        func_0x000107c61174(lStack_f8);
        uVar9 = uStack_108;
        func_0x000107c61174(uStack_108);
        func_0x000107c61174(puVar12);
        lVar15 = lVar7;
        func_0x000107c61174();
        lVar18 = lVar8;
        func_0x0001038ea4b0(lVar8,uVar9,puVar12,lVar7);
        lVar7 = lVar6;
        func_0x000107c5194c();
        func_0x000107c61180();
        if (lVar7 != 0) {
          func_0x000107c61170();
          func_0x000107c4ffe8(lVar6);
          func_0x000107c61180();
          func_0x000107c615e8();
        }
        puVar1 = (undefined8 *)(lVar15 + _DAT_112fad0a8);
        uVar2 = *puVar1;
        uVar4 = puVar1[1];
        *puVar1 = pcVar3;
        puVar1[1] = uStack_100;
        func_0x0001038e8ecc(pcVar3);
        func_0x000100d62740(uVar2,uVar4);
        func_0x000107c42c1c(lVar6);
        func_0x000107c61170(lVar6);
        func_0x000107c61170(uVar9);
        func_0x000107c61170(puVar12);
        func_0x000107c61170(lVar18);
        func_0x000107c61170(lVar8);
        func_0x000107c6142c(puVar16);
        lVar7 = lVar15;
      }
    }
    func_0x000107c61170(lVar7);
  }
  return;
}



/* Entry: 1038e9e8c; end: 1038e9eb7;  */

void FUN_1038e9e8c(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1038e9eb8; end: 1038e9ebb;  */

void FUN_1038e9eb8(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(0,0);
  }
  return;
}



/* Entry: 1038e9ebc; end: 1038e9eeb;  */

void FUN_1038e9ebc(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))(0,0);
  }
  return;
}



/* Entry: 1038e9eec; end: 1038ea24f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038e9eec(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  long unaff_x20;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [32];
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  pcVar7 = *(code **)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar9 = *(long *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x48);
  puVar18 = auStack_90;
  func_0x000107c61428(lVar8 + 0x10,puVar18,0,0);
  lVar8 = lVar8 + 0x10;
  func_0x000107c61618();
  if (lVar8 == 0) {
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(0,0);
    }
  }
  else {
    func_0x000107c5b2d0();
    func_0x000107c61180();
    if (lVar9 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1038ea250);
      (*pcVar7)();
    }
    lVar10 = lVar9;
    func_0x000107c5faec();
    func_0x000107c61170(lVar9);
    lVar9 = lVar8 + _DAT_112fad0a0;
    func_0x000107c61618();
    if (lVar9 == 0) {
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(0,0);
      }
      func_0x000107c61170(lVar8);
      func_0x000107c6142c(puVar18);
    }
    else {
      FUN_1038eac78(0);
      func_0x000107c610f8();
      func_0x000107c61434(uVar5);
      func_0x000107c61434(puVar18);
      uVar11 = 4;
      func_0x0001038ea984(4,0xe,2,lVar10,puVar18,0,0,uVar3,uVar5,0);
      puVar13 = &UNK_1106a8ab8;
      puVar12 = puVar13;
      func_0x000107c613fc(&UNK_1106a8ab8,0x18,7);
      func_0x000107c61614(puVar12 + 0x10,uVar4);
      func_0x000107c613fc(&UNK_1106a8ab8,0x18,7);
      func_0x000107c61614(puVar13 + 0x10,uVar4);
      puVar14 = PTR_PTR_1126aeaf8;
      func_0x000107c610f8(PTR_PTR_1126aeaf8);
      puVar6 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x1038ea2b4;
      puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b8 = 0x42000000;
      puStack_b0 = &UNK_100e1779c;
      puStack_a8 = &UNK_1106a8c38;
      ppuVar15 = &puStack_c0;
      puStack_98 = puVar12;
      func_0x000107c60bc4(ppuVar15);
      uStack_d0 = 0x1038ea2b8;
      puStack_f0 = puVar6;
      uStack_e8 = 0x42000000;
      puStack_e0 = &UNK_100e17304;
      puStack_d8 = &UNK_1106a8c60;
      ppuVar16 = &puStack_f0;
      puStack_c8 = puVar13;
      func_0x000107c60bc4(ppuVar16);
      func_0x000107c6157c(puVar12);
      func_0x000107c6157c(puVar13);
      func_0x000107c47be0(puVar14);
      func_0x000107c60bd0(ppuVar16);
      func_0x000107c60bd0(ppuVar15);
      func_0x000107c61574(puStack_c8);
      func_0x000107c61574(puStack_98);
      func_0x000107c61574(puVar13);
      func_0x000107c61574(puVar12);
      func_0x000100926e50(0);
      func_0x000107c610f8();
      func_0x000107c61174(uVar11);
      func_0x000107c61174(puVar14);
      func_0x000107c61174(uVar17);
      lVar10 = lVar8;
      func_0x000107c61174();
      func_0x0001038ea4b0(uVar17,uVar11,puVar14,lVar8);
      lVar8 = lVar9;
      func_0x000107c5194c();
      func_0x000107c61180();
      if (lVar8 != 0) {
        func_0x000107c61170();
        func_0x000107c4ffe8(lVar9);
        func_0x000107c61180();
        func_0x000107c615e8();
      }
      puVar1 = (undefined8 *)(lVar10 + _DAT_112fad0a8);
      uVar3 = *puVar1;
      uVar4 = puVar1[1];
      *puVar1 = pcVar7;
      puVar1[1] = uVar2;
      func_0x0001038e8ecc(pcVar7,uVar2);
      func_0x000100d62740(uVar3,uVar4);
      func_0x000107c42c1c(lVar9);
      func_0x000107c61170(lVar10);
      func_0x000107c6142c(puVar18);
      func_0x000107c61170(uVar17);
      func_0x000107c61170(puVar14);
      func_0x000107c61170(uVar11);
      func_0x000107c61170(lVar9);
    }
  }
  return;
}



/* Entry: 1038ea250; end: 1038ea2bf;  */

void FUN_1038ea250(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 1038ea2c0; end: 1038ea2cf; -[AIRemixScope image] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ea2c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fad0e0));
  return;
}



/* Entry: 1038ea2d0; end: 1038ea2df; -[AIRemixScope config] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ea2d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fad0e8));
  return;
}



/* Entry: 1038ea2e0; end: 1038ea2ff; -[AIRemixScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ea2e0(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112fad0f0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038ea300; end: 1038ea347; -[AIRemixScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ea300(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fad0f8;
  func_0x000107c61428(param_1 + _DAT_112fad0f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038ea348; end: 1038ea39f; -[AIRemixScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ea348(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fad0f8;
  func_0x000107c61428(param_1 + _DAT_112fad0f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1038ea3a0; end: 1038ea5bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1038ea3a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [8];
  undefined1 auStack_68 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112fad0f8;
  func_0x000107c61614(unaff_x20 + _DAT_112fad0f8,0);
  *(undefined8 *)(unaff_x20 + _DAT_112fad0e0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fad0e8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fad0f0) = param_3;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_68,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_4);
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c615f0(param_3);
  puVar3 = auStack_78;
  func_0x000107c61154(puVar3,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c615e8(param_3);
  func_0x000107c615e8(param_4);
  return puVar3;
}



/* Entry: 1038ea5c0; end: 1038ea69b; -[AIRemixScope initWithImage:config:uiContainer:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ea5c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  lVar3 = param_1;
  func_0x000107c614f0();
  lVar2 = _DAT_112fad0f8;
  func_0x000107c61614(param_1 + _DAT_112fad0f8,0);
  *(undefined8 *)(param_1 + _DAT_112fad0e0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fad0e8) = param_4;
  *(undefined8 *)(param_1 + _DAT_112fad0f0) = param_5;
  func_0x000107c61428(param_1 + lVar2,auStack_68,1,0);
  func_0x000107c61604(param_1 + lVar2,param_6);
  puVar1 = PTR_s_init_1125d9248;
  lStack_78 = param_1;
  lStack_70 = lVar3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61154(&lStack_78,puVar1);
  return;
}



/* Entry: 1038ea69c; end: 1038ea6fb; -[AIRemixScope init] */

void FUN_1038ea69c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AIRemixApi.AIRemixScope",0x17,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038ea6c8);
  (*pcVar1)();
}



/* Entry: 1038ea6fc; end: 1038ea777; -[AIRemixScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1038ea6fc(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fad0e0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fad0e8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fad0f0));
  param_1 = param_1 + _DAT_112fad0f8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1038ea778; end: 1038ea79f;  */

void FUN_1038ea778(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1106a8d40;
  if (lRam0000000112fad128 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112fad128 = param_1;
  }
  return;
}



/* Entry: 1038ea7a0; end: 1038ea7e3;  */

void FUN_1038ea7a0(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1038ea7e4; end: 1038ea7f3; -[AIRemixScopeConfig launchSource] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038ea7e4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fad138);
}



/* Entry: 1038ea7f4; end: 1038ea803; -[AIRemixScopeConfig navigationType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038ea7f4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fad140);
}



/* Entry: 1038ea804; end: 1038ea813; -[AIRemixScopeConfig remixPermission] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1038ea804(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fad148);
}



/* Entry: 1038ea814; end: 1038ea81f; -[AIRemixScopeConfig sourceSnapId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ea814(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fad150))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fad150);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038ea820; end: 1038ea82b; -[AIRemixScopeConfig sourceUserId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ea820(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fad158))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fad158);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038ea82c; end: 1038ea837; -[AIRemixScopeConfig contextSessionId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ea82c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fad160))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fad160);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038ea838; end: 1038ea88f;  */

void FUN_1038ea838(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1038ea890; end: 1038ea89f; -[AIRemixScopeConfig replyParameters] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ea890(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112fad168));
  return;
}



/* Entry: 1038ea8a0; end: 1038eaa67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038ea8a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fad138) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112fad140) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fad148) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fad150);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fad158);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fad160);
  *puVar1 = param_8;
  puVar1[1] = param_9;
  *(undefined8 *)(unaff_x20 + _DAT_112fad168) = param_10;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038eaa68; end: 1038eabb3; -[AIRemixScopeConfig initWithLaunchSource:navigationType:remixPermission:sourceSnapId:sourceUserId:contextSessionId:replyParameters:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038eaa68(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,undefined8 param_9)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lStack_70;
  long lStack_68;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  if (param_6 == 0) {
    param_6 = 0;
    lVar3 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar3 = param_2;
  }
  if (param_7 == 0) {
    param_7 = 0;
    lVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar2 = param_2;
  }
  if (param_8 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  func_0x000107c61174();
  *(undefined8 *)(param_1 + _DAT_112fad138) = param_3;
  *(undefined8 *)(param_1 + _DAT_112fad140) = param_4;
  *(undefined8 *)(param_1 + _DAT_112fad148) = param_5;
  plVar1 = (long *)(param_1 + _DAT_112fad150);
  *plVar1 = param_6;
  plVar1[1] = lVar3;
  plVar1 = (long *)(param_1 + _DAT_112fad158);
  *plVar1 = param_7;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_112fad160);
  *plVar1 = param_8;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112fad168) = param_9;
  lStack_70 = param_1;
  lStack_68 = lVar4;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038eabb4; end: 1038eac13; -[AIRemixScopeConfig init] */

void FUN_1038eabb4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("AIRemixApi.AIRemixScopeConfig",0x1d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038eabe0);
  (*pcVar1)();
}



/* Entry: 1038eac14; end: 1038eac77; -[AIRemixScopeConfig .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1038eac14(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fad150 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fad158 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112fad160 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112fad168));
  return;
}



/* Entry: 1038eac78; end: 1038eac97;  */

void FUN_1038eac78(void)

{
  func_0x000107c61168(&PTR_PTR_1128fe970);
  return;
}



/* Entry: 1038eac98; end: 1038eaca3;  */

undefined * FUN_1038eac98(void)

{
  return &UNK_1106a8e18;
}



/* Entry: 1038eaca4; end: 1038eaccf; +[_TtC39MemoriesOperaInteractionButtonsLayerAPI35MemoriesOperaInteractionButtonsKeys editDisabledForBlockedCodec] */

void FUN_1038eaca4(void)

{
  func_0x000107c5fadc(0xd00000000000003a,0x800000010f175310);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1038eacd0; end: 1038ead0b; -[_TtC39MemoriesOperaInteractionButtonsLayerAPI35MemoriesOperaInteractionButtonsKeys init] */

void FUN_1038eacd0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038ead0c; end: 1038ead0f;  */

void FUN_1038ead0c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038ead10; end: 1038ead13; -[_TtC39MemoriesOperaInteractionButtonsLayerAPI35MemoriesOperaInteractionButtonsKeys .cxx_destruct] */

void FUN_1038ead10(void)

{
  return;
}



/* Entry: 1038ead14; end: 1038ead4b;  */

void FUN_1038ead14(void)

{
  undefined1 auStack_20 [8];
  
  func_0x000107c61170();
  func_0x000107c610f8();
  func_0x000107c61154(auStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038ead4c; end: 1038ead87; -[_TtC39MemoriesOperaInteractionButtonsLayerAPI36MemoriesOperaInteractionButtonsLayer initWithPage:] */

void FUN_1038ead4c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038ead88; end: 1038ead8f; -[_TtC39MemoriesOperaInteractionButtonsLayerAPI36MemoriesOperaInteractionButtonsLayer type] */

undefined8 FUN_1038ead88(void)

{
  return 0x19;
}



/* Entry: 1038ead90; end: 1038ead97; -[_TtC39MemoriesOperaInteractionButtonsLayerAPI36MemoriesOperaInteractionButtonsLayer layerContentType] */

undefined8 FUN_1038ead90(void)

{
  return 3;
}



/* Entry: 1038ead98; end: 1038eae0b;  */

void FUN_1038ead98(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038eae0c; end: 1038eae0f;  */

void FUN_1038eae0c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1038eae10; end: 1038eae4b; -[_TtC16SendDestinations22SendDestinationBuilder init] */

void FUN_1038eae10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1038eae4c; end: 1038eb05b; +[_TtC16SendDestinations22SendDestinationBuilder destinationsWithAddToMyStory:addToOurStory:addToSpotlight:businessProfileId:businessStoryVariant:isMobStory:isMischief:isFanPassMassSnap:replyUserId:replyUsername:replyDisplayName:userIds:groupIds:] */

void FUN_1038eae4c(undefined8 param_1,undefined8 param_2,uint param_3,undefined4 param_4,
                  undefined4 param_5,long param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9,undefined4 param_10,long param_11,long param_12,long param_13,
                  long param_14,long param_15)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lStack_90;
  undefined8 uStack_70;
  
  if (param_6 == 0) {
    lStack_90 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c5faec();
    lStack_90 = param_6;
    uStack_70 = param_2;
  }
  if (param_11 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x000107c5faec();
    uVar4 = param_2;
  }
  if (param_12 == 0) {
    uVar6 = 0;
  }
  else {
    func_0x000107c5faec();
    uVar6 = param_2;
  }
  func_0x000107c61174(param_7);
  func_0x000107c61174();
  lVar1 = param_14;
  func_0x000107c61174();
  lVar2 = param_15;
  func_0x000107c61174();
  if (param_13 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(param_13);
  }
  if (lVar1 == 0) {
    param_14 = 0;
  }
  else {
    func_0x000107c5fc54(param_14,PTR___sSSN_11034da80);
    func_0x000107c61170(lVar1);
  }
  if (lVar2 == 0) {
    param_15 = 0;
  }
  else {
    func_0x000107c5fc54(param_15,PTR___sSSN_11034da80);
    func_0x000107c61170(lVar2);
  }
  uVar3 = (ulong)param_3;
  FUN_1038eb3fc(uVar3,param_4,param_5,lStack_90,uStack_70,param_7,param_8,(undefined1)param_9,
                param_9._1_1_);
  func_0x000107c61170(param_7);
  func_0x000107c6142c(param_15);
  func_0x000107c6142c(param_14);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar6);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uStack_70);
  uVar4 = 0;
  func_0x0001038ec18c(0);
  uVar5 = uVar3;
  func_0x000107c5fc48(uVar3,uVar4);
  func_0x000107c6142c(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 1038eb05c; end: 1038eb0df; +[_TtC16SendDestinations22SendDestinationBuilder spotlightDestination] */

void FUN_1038eb05c(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000108f5833c();
  func_0x000107c61180();
  if (param_1 != 0) {
    puVar2 = PTR_PTR_1126a6218;
    func_0x000107c610f8(PTR_PTR_1126a6218);
    uVar3 = 0;
    func_0x000107c5fadc(0,0xe000000000000000);
    func_0x000107c47098(puVar2);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038eb0e0);
  (*pcVar1)();
}


