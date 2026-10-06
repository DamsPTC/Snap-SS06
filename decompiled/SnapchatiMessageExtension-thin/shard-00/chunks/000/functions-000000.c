/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100010000; end: 1000100e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100010000(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffb0;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x8000000100021d60);
  _objc_release();
  uVar1 = 0;
  FUN_100015148();
  _swift_allocObject();
  FUN_100011160();
  *(undefined8 *)(unaff_x20 + _DAT_100028578) = uVar1;
  if (param_2 == 0) {
    param_1 = 0;
  }
  else {
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
    _swift_bridgeObjectRelease();
  }
  FUN_100010ba4();
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_initWithNibName_bundle__100028308,param_1,
                      param_3);
  _objc_release(param_1);
  _objc_release(param_3);
  return puVar2;
}



/* Entry: 1000100e4; end: 100010143; -[MessagesHomeViewController initWithNibName:bundle:] */

void FUN_1000100e4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_3);
  }
  _objc_retain(param_4);
  FUN_100010000(param_3,param_2,param_4);
  return;
}



/* Entry: 100010144; end: 10001019b; -[MessagesHomeViewController initWithCoder:] */

void FUN_100010144(void)

{
  code *pcVar1;
  
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x8000000100021dd0,
             "SnapchatiMessageExtension_lib/MessagesHomeViewController.swift",0x3e,2,0x16,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10001019c);
  (*pcVar1)();
}



/* Entry: 10001019c; end: 10001020f; -[MessagesHomeViewController loadView] */

void FUN_10001019c(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  FUN_100010ba4();
  puVar1 = PTR_s_loadView_100028300;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  _objc_retain(param_1);
  _objc_msgSendSuper2(&uStack_30,puVar1);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000015,0x8000000100021d60);
  _objc_release();
  _objc_release(param_1);
  return;
}



/* Entry: 100010210; end: 1000106d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100010210(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  long unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  FUN_100010ba4();
  _objc_msgSendSuper2(&stack0xffffffffffffffb0,PTR_s_viewDidLoad_1000282f0);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_100028410;
  _objc_opt_self(PTR__OBJC_CLASS___NSNotificationCenter_100028410);
  func_0x00010001ef80();
  _objc_retainAutoreleasedReturnValue();
  if (lRam0000000100028828 != -1) {
    _swift_once(0x100028828,FUN_100015b98);
  }
  func_0x00010001ef00(puVar2);
  _objc_release(puVar2);
  uVar9 = *(undefined8 *)(unaff_x20 + _DAT_100028578);
  uStack_68 = 0x100010bdc;
  uStack_58 = 0;
  uStack_60 = uVar9;
  FUN_100010b54(0x1000285d8,&UNK_10001f448);
  _objc_allocWithZone();
  _swift_retain(uVar9);
  puVar3 = &uStack_68;
  __s7SwiftUI19UIHostingControllerC8rootViewACyxGx_tcfc();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  _objc_retain();
  func_0x00010001eee0();
  lVar4 = unaff_x20;
  func_0x00010001f240();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000106b0);
    (*pcVar1)();
  }
  puVar5 = puVar3;
  func_0x00010001f240();
  _objc_retainAutoreleasedReturnValue();
  if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000106b4);
    (*pcVar1)();
  }
  func_0x00010001ef20(lVar4);
  _objc_release(lVar4);
  _objc_release(puVar5);
  func_0x00010001efa0(puVar3);
  puVar5 = puVar3;
  func_0x00010001f240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puVar5 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000106b8);
    (*pcVar1)();
  }
  func_0x00010001f120(puVar5);
  _objc_release();
  FUN_100010be4();
  _swift_allocObject();
  puVar5[3] = 9;
  puVar5[2] = 4;
  puVar6 = puVar3;
  func_0x00010001f240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000106bc);
    (*pcVar1)();
  }
  puVar7 = puVar6;
  func_0x00010001f200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  lVar4 = unaff_x20;
  func_0x00010001f240();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000106c0);
    (*pcVar1)();
  }
  lVar8 = lVar4;
  func_0x00010001f200();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  puVar6 = puVar7;
  func_0x00010001ef60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(lVar8);
  puVar5[4] = puVar6;
  puVar6 = puVar3;
  func_0x00010001f240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000106c4);
    (*pcVar1)();
  }
  puVar7 = puVar6;
  func_0x00010001f0a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  lVar4 = unaff_x20;
  func_0x00010001f240();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    lVar8 = lVar4;
    func_0x00010001f0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    puVar6 = puVar7;
    func_0x00010001ef60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(lVar8);
    puVar5[5] = puVar6;
    puVar6 = puVar3;
    func_0x00010001f240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000106cc);
      (*pcVar1)();
    }
    puVar7 = puVar6;
    func_0x00010001f220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    lVar4 = unaff_x20;
    func_0x00010001f240();
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000106d0);
      (*pcVar1)();
    }
    lVar8 = lVar4;
    func_0x00010001f220();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    puVar6 = puVar7;
    func_0x00010001ef60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
    _objc_release(lVar8);
    puVar5[6] = puVar6;
    puVar6 = puVar3;
    func_0x00010001f240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000106d4);
      (*pcVar1)();
    }
    puVar7 = puVar6;
    func_0x00010001ef40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010001f240();
    _objc_retainAutoreleasedReturnValue();
    if (unaff_x20 != 0) {
      puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_100028418;
      _objc_opt_self(PTR__OBJC_CLASS___NSLayoutConstraint_100028418);
      lVar4 = unaff_x20;
      func_0x00010001ef40(unaff_x20);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(unaff_x20);
      puVar6 = puVar7;
      func_0x00010001ef60();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      _objc_release(lVar4);
      puVar5[7] = puVar6;
      uVar9 = 0;
      func_0x000100010c40(0);
      puVar6 = puVar5;
      __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar5,uVar9);
      _swift_release(puVar5);
      func_0x00010001eec0(puVar2);
      _objc_release(puVar3);
      _objc_release(puVar6);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000106d8);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000106c8);
  (*pcVar1)();
}



/* Entry: 1000106d8; end: 10001079f; -[MessagesHomeViewController viewDidLoad] */

void FUN_1000106d8(undefined8 param_1)

{
  _objc_retain();
  FUN_100010210();
                    /* WARNING: Could not recover jumptable at 0x00010001ec7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100024790)(param_1);
  return;
}



/* Entry: 1000107a0; end: 1000107cf; -[MessagesHomeViewController viewWillDisappear:] */

void FUN_1000107a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  func_0x000100010700(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001ec7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100024790)(param_1);
  return;
}



/* Entry: 1000107d0; end: 1000107d7; -[MessagesHomeViewController expandTray] */

void FUN_1000107d0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001f0f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_100024778)(param_1,PTR_s_requestPresentationStyle__1000283a0,1);
  return;
}



/* Entry: 1000107d8; end: 10001095f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000107d8(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  bool bStack_50;
  undefined7 uStack_4f;
  ulong uStack_48;
  
  FUN_100010ba4();
  _objc_msgSendSuper2(&stack0xffffffffffffffc0,PTR_s_didTransitionToPresentationStyle_1000282e0,
                      param_1);
  if (param_1 != 2) {
    if (param_1 == 1) {
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_100028578);
      puVar2 = &UNK_10001f370;
      _swift_getKeyPath(&UNK_10001f370);
      puVar3 = &UNK_10001f398;
      _swift_getKeyPath(&UNK_10001f398);
      bStack_50 = true;
      goto LAB_100010930;
    }
    if (param_1 != 0) {
      return;
    }
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_100028578);
  puVar2 = &UNK_10001f370;
  _swift_getKeyPath(&UNK_10001f370);
  puVar3 = &UNK_10001f398;
  _swift_getKeyPath(&UNK_10001f398);
  bStack_50 = false;
  _swift_retain(uVar4);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&bStack_50,uVar4,puVar2,puVar3);
  puVar2 = &UNK_10001f3b8;
  _swift_getKeyPath(&UNK_10001f3b8);
  puVar3 = &UNK_10001f3e0;
  _swift_getKeyPath(&UNK_10001f3e0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&bStack_50,uVar4,puVar2,puVar3);
  _swift_release(puVar2);
  _swift_release(puVar3);
  uVar1 = CONCAT71(uStack_4f,bStack_50);
  _swift_bridgeObjectRelease(uStack_48);
  uVar1 = uVar1 & 0xffffffffffff;
  if ((uStack_48 & 0x2000000000000000) != 0) {
    uVar1 = uStack_48 >> 0x38 & 0xf;
  }
  puVar2 = &UNK_10001f400;
  _swift_getKeyPath(&UNK_10001f400);
  puVar3 = &UNK_10001f428;
  _swift_getKeyPath(&UNK_10001f428);
  bStack_50 = uVar1 != 0;
LAB_100010930:
  _swift_retain(uVar4);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&bStack_50,uVar4,puVar2,puVar3);
  return;
}



/* Entry: 100010960; end: 10001098f; -[MessagesHomeViewController didTransitionToPresentationStyle:] */

void FUN_100010960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain();
  FUN_1000107d8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010001ec7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100024790)(param_1);
  return;
}



/* Entry: 100010990; end: 1000109bf;  */

void FUN_100010990(void)

{
  FUN_100010ba4();
  _objc_msgSendSuper2(&stack0xffffffffffffffe0,PTR_s_dealloc_100028310);
  return;
}



/* Entry: 1000109c0; end: 1000109cf; -[MessagesHomeViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000109c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010001ee2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024920)(*(undefined8 *)(param_1 + _DAT_100028578));
  return;
}



/* Entry: 1000109d0; end: 100010acb;  */

void FUN_1000109d0(undefined8 *param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  iVar1 = 2;
  FUN_10001d2bc(2,0x1a,4,0);
  if (iVar1 == 0) {
    uVar2 = 0xff;
    __s7SwiftUI13_TaskModifierVMa(0xff);
  }
  else {
    uVar2 = 0xff;
    __s7SwiftUI14_TaskModifier2VMa(0xff);
  }
                    /* WARNING: Could not recover jumptable at 0x00010001e8b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s7SwiftUI15ModifiedContentVMa_100024150)(0,uVar3,uVar2);
  return;
}



/* Entry: 100010acc; end: 100010b53;  */

void FUN_100010acc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000100028580 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  __s7SwiftUI14_TaskModifier2VMa(0xff);
  puVar2 = PTR___s7SwiftUI14_TaskModifier2VAA12ViewModifierAAMc_100024138;
  _swift_getWitnessTable(PTR___s7SwiftUI14_TaskModifier2VAA12ViewModifierAAMc_100024138,uVar1);
  puRam0000000100028580 = puVar2;
  return;
}



/* Entry: 100010b54; end: 100010ba3;  */

void FUN_100010b54(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 == 0 || (*param_1 & 1) != 0) {
    uVar1 = (long)param_2 + (long)(int)*param_2;
    _swift_getTypeByMangledNameInContext(uVar1,*param_2 >> 0x20,0,0);
    *param_1 = uVar1;
  }
  return;
}



/* Entry: 100010ba4; end: 100010bc3;  */

void FUN_100010ba4(void)

{
  _objc_opt_self(&PTR_PTR_1000284c8);
  return;
}



/* Entry: 100010bc4; end: 100010be3;  */

void FUN_100010bc4(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_10001f7b0;
  puVar2 = &UNK_10001f7d8;
  uVar3 = *param_2;
  _swift_getKeyPath(&UNK_10001f7b0);
  _swift_getKeyPath(&UNK_10001f7d8);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001ee2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024920)(puVar2);
  return;
}



/* Entry: 100010be4; end: 100010c83;  */

void FUN_100010be4(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  FUN_10001d2bc(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000100010c40();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x1000285f0;
      plVar5 = (long *)&UNK_10001f458;
      goto FUN_100010b54;
    }
  }
  puVar2 = (ulong *)0x1000285e8;
  plVar5 = (long *)&UNK_10001f450;
FUN_100010b54:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    _swift_getTypeByMangledNameInContext(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 100010c84; end: 100010cd3;  */

undefined1  [16] FUN_100010c84(void)

{
  return ZEXT816(0x100024ae8);
}



/* Entry: 100010cd4; end: 100010f13;  */

undefined1  [16] FUN_100010cd4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [16];
  
  puVar1 = &UNK_10001f7f8;
  _swift_getKeyPath(&UNK_10001f7f8);
  puVar2 = &UNK_10001f820;
  _swift_getKeyPath(&UNK_10001f820);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (auStack_40);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return auStack_40;
}



/* Entry: 100010f14; end: 100010f8b;  */

undefined1 FUN_100010f14(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_31;
  
  puVar1 = &UNK_10001f7b0;
  puVar2 = &UNK_10001f7d8;
  _swift_getKeyPath(&UNK_10001f7b0);
  _swift_getKeyPath(&UNK_10001f7d8);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_31);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return uStack_31;
}



/* Entry: 100010f8c; end: 100010ff3;  */

void FUN_100010f8c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10001f7f8;
  _swift_getKeyPath(&UNK_10001f7f8);
  puVar2 = &UNK_10001f820;
  _swift_getKeyPath(&UNK_10001f820);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001ee2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024920)(puVar2);
  return;
}



/* Entry: 100010ff4; end: 100011073;  */

void FUN_100010ff4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  puVar3 = &UNK_10001f7f8;
  _swift_getKeyPath(&UNK_10001f7f8);
  puVar4 = &UNK_10001f820;
  _swift_getKeyPath(&UNK_10001f820);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar5);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_50,uVar5,puVar3,puVar4);
  return;
}



/* Entry: 100011074; end: 100011087;  */

undefined1 FUN_100011074(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_31;
  
  puVar1 = &UNK_10001f760;
  puVar2 = &UNK_10001f788;
  _swift_getKeyPath(&UNK_10001f760);
  _swift_getKeyPath(&UNK_10001f788);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_31);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return uStack_31;
}



/* Entry: 100011088; end: 10001115f;  */

undefined1 FUN_100011088(undefined8 param_1,undefined8 param_2)

{
  undefined1 uStack_31;
  
  _swift_getKeyPath();
  _swift_getKeyPath(param_2);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_31);
  _swift_release(param_1);
  _swift_release(param_2);
  return uStack_31;
}



/* Entry: 100011160; end: 100011b8f;  */

/* WARNING: Removing unreachable block (ram,0x000100011688) */
/* WARNING: Removing unreachable block (ram,0x000100011864) */
/* WARNING: Removing unreachable block (ram,0x0001000116c8) */
/* WARNING: Removing unreachable block (ram,0x000100011908) */
/* WARNING: Removing unreachable block (ram,0x0001000116dc) */
/* WARNING: Removing unreachable block (ram,0x000100011948) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100011160(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long extraout_x8_05;
  long unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long alStack_1a0 [2];
  undefined1 auStack_190 [8];
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  undefined1 *puStack_138;
  long lStack_130;
  long lStack_128;
  byte abStack_110 [64];
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_b0;
  long lStack_a8;
  byte bStack_70;
  
  lVar10 = 0x100028870;
  FUN_100010b54(0x100028870,&UNK_10001f900);
  lStack_130 = *(long *)(lVar10 + -8);
  lStack_128 = lVar10;
  (*(code *)PTR____chkstk_darwin_100024410)
            (*(long *)(lStack_130 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x100028868;
  puStack_138 = auStack_190 + -extraout_x8;
  FUN_100010b54(0x100028868,&UNK_10001f8f8);
  lStack_148 = *(long *)(lVar10 + -8);
  lStack_140 = lVar10;
  (*(code *)PTR____chkstk_darwin_100024410)
            (*(long *)(lStack_148 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)(auStack_190 + -extraout_x8) - extraout_x8_00;
  lVar10 = 0x100028860;
  lStack_150 = lVar7;
  FUN_100010b54(0x100028860,&UNK_10001f8f0);
  lStack_160 = *(long *)(lVar10 + -8);
  lStack_158 = lVar10;
  (*(code *)PTR____chkstk_darwin_100024410)
            (*(long *)(lStack_160 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar7 - extraout_x8_01;
  lVar10 = 0x100028858;
  FUN_100010b54(0x100028858,&UNK_10001f8e8);
  lStack_170 = *(long *)(lVar10 + -8);
  lStack_168 = lVar10;
  (*(code *)PTR____chkstk_darwin_100024410)
            (*(long *)(lStack_170 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x100028850;
  lStack_178 = lVar7 - extraout_x8_02;
  FUN_100010b54(0x100028850,&UNK_10001f8e0);
  lStack_188 = *(long *)(lVar10 + -8);
  lStack_180 = lVar10;
  (*(code *)PTR____chkstk_darwin_100024410)
            (*(long *)(lStack_188 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (lVar7 - extraout_x8_02) - extraout_x8_03;
  lVar10 = 0x100028848;
  FUN_100010b54(0x100028848,&UNK_10001f8d8);
  lVar16 = *(long *)(lVar10 + -8);
  (*(code *)PTR____chkstk_darwin_100024410)(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = lVar8 - extraout_x8_04;
  lVar9 = 0x100028840;
  FUN_100010b54(0x100028840,&UNK_10001f8d0);
  lVar14 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100024410)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = _DAT_1000285f8;
  lVar15 = lVar11 - extraout_x8_05;
  puStack_d0 = PTR___swiftEmptyArrayStorage_100024840;
  uVar4 = 0x1000286b0;
  FUN_100010b54(0x1000286b0,&UNK_10001f4f8);
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(lVar15,&puStack_d0,uVar4);
  (**(code **)(lVar14 + 0x20))(unaff_x20 + lVar2,lVar15,lVar9);
  lVar9 = _DAT_100028600;
  __s23ExtensionsStickerPicker0B5FeedsVACycfC(&puStack_d0);
  __s7Combine9PublishedV12initialValueACyxGx_tcfC
            (lVar11,&puStack_d0,PTR___s23ExtensionsStickerPicker0B5FeedsVN_100024568);
  (**(code **)(lVar16 + 0x20))(unaff_x20 + lVar9,lVar11,lVar10);
  lVar10 = _DAT_100028608;
  puStack_d0 = (undefined *)CONCAT71(puStack_d0._1_7_,3);
  __s7Combine9PublishedV12initialValueACyxGx_tcfC
            (lVar8,&puStack_d0,PTR___s23ExtensionsStickerPicker10EntryStateON_100024598);
  (**(code **)(lStack_188 + 0x20))(unaff_x20 + lVar10,lVar8,lStack_180);
  lVar10 = _DAT_100028610;
  puStack_d0 = (undefined *)0x0;
  uStack_c8 = 0;
  uVar4 = 0x1000286d0;
  FUN_100010b54(0x1000286d0,&UNK_10001f500);
  lVar9 = lStack_178;
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(lStack_178,&puStack_d0,uVar4);
  (**(code **)(lStack_170 + 0x20))(unaff_x20 + lVar10,lVar9,lStack_168);
  lVar10 = _DAT_100028618;
  puVar5 = PTR___sSbN_1000247d8;
  puStack_d0 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff00);
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(lVar7,&puStack_d0,PTR___sSbN_1000247d8);
  lVar9 = lStack_158;
  pcVar12 = *(code **)(lStack_160 + 0x20);
  (*pcVar12)(unaff_x20 + lVar10,lVar7,lStack_158);
  lVar10 = _DAT_100028620;
  puStack_d0 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff00);
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(lVar7,&puStack_d0,puVar5);
  (*pcVar12)(unaff_x20 + lVar10,lVar7,lVar9);
  lVar2 = lStack_150;
  lVar10 = _DAT_100028628;
  puStack_d0 = (undefined *)0x0;
  uStack_c8 = 0xe000000000000000;
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(lStack_150,&puStack_d0,PTR___sSSN_1000247b8);
  (**(code **)(lStack_148 + 0x20))(unaff_x20 + lVar10,lVar2,lStack_140);
  lVar10 = _DAT_100028630;
  puStack_d0 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff00);
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(lVar7,&puStack_d0,puVar5);
  (*pcVar12)(unaff_x20 + lVar10,lVar7,lVar9);
  lVar10 = _DAT_100028638;
  puStack_d0 = (undefined *)((ulong)puStack_d0 & 0xffffffffffffff00);
  uVar4 = 0x1000286f0;
  FUN_100010b54(0x1000286f0,&UNK_10001f508);
  puVar3 = puStack_138;
  __s7Combine9PublishedV12initialValueACyxGx_tcfC(puStack_138,&puStack_d0,uVar4);
  (**(code **)(lStack_130 + 0x20))(unaff_x20 + lVar10,puVar3,lStack_128);
  *(undefined8 *)(unaff_x20 + _DAT_100028640) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100028648) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100028650) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_100029318) = 0;
  lVar10 = unaff_x20 + _DAT_100029320;
  *(undefined **)(lVar10 + 0x18) = &UNK_100024ae8;
  *(undefined ***)(lVar10 + 0x20) = &PTR_DAT_100024af8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_100028658);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar10 = _DAT_100028660;
  *(undefined8 *)(unaff_x20 + _DAT_100028660) = 0;
  lVar9 = _DAT_100028668;
  *(undefined8 *)(unaff_x20 + _DAT_100028668) = 0;
  __s23ExtensionsStickerPicker23AppGroupSessionProviderV05fetchF4DataAA0defI0VyKF(&puStack_d0,0);
  FUN_100011b90(&puStack_d0);
  lVar9 = *(long *)(unaff_x20 + lVar9);
  if (lVar9 != 0) {
    _swift_retain(lVar9);
    __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerC016logExtensionOpenF0yyF();
    _swift_release(lVar9);
  }
  if (((bStack_70 & 1) != 0) && (lVar9 = *(long *)(unaff_x20 + lVar10), lVar9 != 0)) {
    _swift_retain(lVar9);
    __s23ExtensionsStickerPicker22StickersGrapheneLoggerC12logFirstOpenyyF();
    _swift_release(lVar9);
  }
  if (lStack_a8 == 0) {
    FUN_100016cd0(&puStack_d0);
    _swift_getKeyPath(&UNK_10001f888);
    _swift_getKeyPath(&UNK_10001f8b0);
    abStack_110[0] = 1;
    _swift_retain();
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (abStack_110);
    lVar10 = *(long *)(unaff_x20 + lVar10);
    if (lVar10 != 0) {
      puVar5 = &UNK_10001f888;
      _swift_getKeyPath(&UNK_10001f888);
      puVar6 = &UNK_10001f8b0;
      _swift_getKeyPath(&UNK_10001f8b0);
      _swift_retain(lVar10);
      __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
                (abStack_110);
      _swift_release(puVar5);
      _swift_release(puVar6);
      if (abStack_110[0] < 2) {
        if (abStack_110[0] == 0) {
          uVar4 = 0x754f646567676f6c;
          uVar13 = 0xe900000000000074;
        }
        else {
          uVar4 = 0x7261746176416f6e;
          uVar13 = 0xeb00000000746553;
        }
      }
      else if (abStack_110[0] == 2) {
        uVar4 = 0x63416c6c75466f6e;
        uVar13 = 0xec00000073736563;
      }
      else {
        uVar4 = 0x69746e6573657270;
        uVar13 = 0xea0000000000676e;
      }
      __s23ExtensionsStickerPicker22StickersGrapheneLoggerC20logExtensionLaunched4withySS_tF
                (uVar4,uVar13);
      _swift_release(lVar10);
      _swift_bridgeObjectRelease(uVar13);
    }
  }
  else {
    _swift_bridgeObjectRetain(lStack_a8);
    FUN_100016cd0(&puStack_d0);
    uVar4 = puVar1[1];
    *puVar1 = uStack_b0;
    puVar1[1] = lStack_a8;
    _swift_bridgeObjectRelease(uVar4);
    lVar10 = *(long *)(unaff_x20 + lVar10);
    if (lVar10 != 0) {
      puVar5 = &UNK_10001f888;
      _swift_getKeyPath(&UNK_10001f888);
      puVar6 = &UNK_10001f8b0;
      _swift_getKeyPath(&UNK_10001f8b0);
      _swift_retain(lVar10);
      __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
                (abStack_110);
      _swift_release(puVar5);
      _swift_release(puVar6);
      if (abStack_110[0] < 2) {
        if (abStack_110[0] == 0) {
          uVar4 = 0x754f646567676f6c;
          uVar13 = 0xe900000000000074;
        }
        else {
          uVar4 = 0x7261746176416f6e;
          uVar13 = 0xeb00000000746553;
        }
      }
      else if (abStack_110[0] == 2) {
        uVar4 = 0x63416c6c75466f6e;
        uVar13 = 0xec00000073736563;
      }
      else {
        uVar4 = 0x69746e6573657270;
        uVar13 = 0xea0000000000676e;
      }
      __s23ExtensionsStickerPicker22StickersGrapheneLoggerC20logExtensionLaunched4withySS_tF
                (uVar4,uVar13);
      _swift_release(lVar10);
      _swift_bridgeObjectRelease(uVar13);
    }
    _swift_retain();
    *(undefined **)(lVar15 + -0x10) = PTR___sytN_100024838 + 8;
    uVar4 = 1;
    __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
              (1,0,0x10,4,0,0,&UNK_10001f910);
    _swift_release();
    _swift_release(uVar4);
  }
  return;
}



/* Entry: 100011b90; end: 1000121c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100011b90(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  undefined4 uVar17;
  undefined8 uStack_e8;
  undefined8 uStack_c0;
  undefined1 auStack_b0 [16];
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  uVar10 = *param_1;
  uVar15 = param_1[1];
  puVar1 = PTR__OBJC_CLASS___SCExtensionCrashManager_100028420;
  _objc_opt_self(PTR__OBJC_CLASS___SCExtensionCrashManager_100028420);
  _swift_bridgeObjectRetain(uVar15);
  puVar2 = puVar1;
  func_0x00010001f180(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010001f1e0();
  _objc_release(puVar2);
  func_0x00010001f180(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar10;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,uVar15);
  func_0x00010001f140(puVar1);
  _objc_release(puVar1);
  _objc_release(uVar13);
  uVar13 = param_1[2];
  uVar7 = param_1[3];
  puVar1 = PTR__OBJC_CLASS___SCBlizzardExtensionLogger_100028428;
  _objc_allocWithZone();
  uVar11 = uVar10;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,uVar15);
  uVar3 = uVar13;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar13,uVar7);
  func_0x00010001f060();
  _objc_release(uVar11);
  _objc_release(uVar3);
  __s23ExtensionsStickerPicker22StickersBlizzardLoggerCMa(0);
  _swift_allocObject();
  puVar2 = puVar1;
  __s23ExtensionsStickerPicker22StickersBlizzardLoggerC6loggerACSo019SCBlizzardExtensionF0C_tcfc();
  uVar3 = 0;
  __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerCMa();
  _swift_allocObject();
  _objc_retain();
  puVar4 = puVar2;
  _swift_retain();
  __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerC6logger13extensionTypeAcA0dE6LoggerC_AA09ExtensionJ0Otcfc
            ();
  lVar14 = _DAT_100028668;
  uVar11 = *(undefined8 *)(unaff_x20 + _DAT_100028668);
  *(undefined **)(unaff_x20 + _DAT_100028668) = puVar4;
  _swift_release(uVar11);
  puVar4 = PTR__OBJC_CLASS___SCNotifExtUserSession_100028430;
  _objc_allocWithZone();
  _objc_retain();
  uVar11 = uVar10;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,uVar15);
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar13,uVar7);
  func_0x00010001f080();
  _objc_release(puVar1);
  _objc_release(uVar11);
  _objc_release(uVar13);
  lVar12 = param_1[0xb];
  if (lVar12 != 0) {
    uVar13 = param_1[10];
    uVar17 = *(undefined4 *)(param_1 + 9);
    puVar5 = PTR__OBJC_CLASS___SCGrapheneExtensionsConfigurations_100028448;
    _objc_allocWithZone();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar13,lVar12);
    func_0x00010001f020(uVar17);
    _objc_release(uVar13);
    if (puVar5 != (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___SCGrapheneExtensionLogger_100028450;
      _objc_allocWithZone();
      uVar13 = uVar10;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar10,uVar15);
      func_0x00010001f000();
      _objc_release(puVar5);
      _objc_release(uVar13);
      __s23ExtensionsStickerPicker22StickersGrapheneLoggerCMa(0);
      _swift_allocObject();
      __s23ExtensionsStickerPicker22StickersGrapheneLoggerC08grapheneF013extensionTypeACSo019SCGrapheneExtensionF0C_AA0kI0Otcfc
                (puVar6,0);
      uVar13 = *(undefined8 *)(unaff_x20 + _DAT_100028660);
      *(undefined **)(unaff_x20 + _DAT_100028660) = puVar6;
      _swift_release(uVar13);
    }
  }
  puVar5 = PTR__OBJC_CLASS___SCExtensionNetworkingAPIClient_100028438;
  _objc_opt_self();
  func_0x00010001f160();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = _DAT_100028660;
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_100028660);
  lVar14 = *(long *)(unaff_x20 + lVar14);
  puStack_80 = 
  PTR___s23ExtensionsStickerPicker28StickersBlizzardEventTrackerCAA0B11LoadLoggingAAWP_100024738;
  if (lVar14 == 0) {
    uVar3 = 0;
    lStack_98 = 0;
    uStack_90 = 0;
    puStack_80 = (undefined *)0x0;
  }
  lStack_a0 = lVar14;
  uStack_88 = uVar3;
  __s23ExtensionsStickerPicker0B12ImageFetcherCMa(0);
  _swift_allocObject();
  _swift_retain(uVar13);
  _swift_retain(lVar14);
  _swift_bridgeObjectRetain(uVar15);
  _objc_retain();
  uVar7 = uVar10;
  __s23ExtensionsStickerPicker0B12ImageFetcherC6userId19networkingApiClient22stickersGrapheneLogger011stickerLoadM0ACSS_So30SCExtensionNetworkingAPIClientCAA08StickerslM0CSgAA0bO7Logging_pSgtcfc
            (uVar10,uVar15,puVar5,uVar13,&lStack_a0);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_100029318);
  *(undefined8 *)(unaff_x20 + _DAT_100029318) = uVar7;
  _swift_release(uVar13);
  puVar6 = puVar4;
  func_0x00010001f1a0();
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(uVar15);
    _objc_release(puVar4);
    _objc_release(puVar5);
    _swift_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010001ec7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_100024790)(puVar1);
    return;
  }
  puVar8 = PTR__OBJC_CLASS___SCExtensionGrpcAuthContextDelegate_100028440;
  _objc_allocWithZone();
  func_0x00010001f040();
  __s23ExtensionsStickerPicker0B20MetaDataCacheManagerCMa(0);
  _swift_allocObject();
  __s23ExtensionsStickerPicker0B20MetaDataCacheManagerC6userIdACSS_tcfc(uVar10,uVar15);
  lVar16 = param_1[5];
  lVar14 = param_1[4];
  lStack_a0 = lVar14;
  lStack_98 = lVar16;
  if (lVar16 == 0) {
    uStack_c0 = param_1[6];
    uStack_e8 = param_1[7];
    uVar13 = param_1[8];
  }
  else {
    uVar15 = *(undefined8 *)(unaff_x20 + lVar12);
    uStack_c0 = param_1[6];
    uStack_e8 = param_1[7];
    uVar13 = param_1[8];
    __s23ExtensionsStickerPicker20StickersSearchClientCMa();
    _swift_allocObject();
    FUN_100016d58(&lStack_a0,auStack_b0);
    _swift_retain(uVar15);
    _swift_bridgeObjectRetain(uVar13);
    puVar9 = puVar8;
    _objc_retain();
    _swift_retain(uVar10);
    __s23ExtensionsStickerPicker20StickersSearchClientC19authContextDelegate27stickerMetaDataCacheManager22stickersGrapheneLogger8avatarId3age11countryCodeACSo011SCNGrpcAuthhI0_p_AA0bklmN0CAA0dpQ0CSgSSSiSStcfc
              (puVar9,uVar10,uVar15,lVar14,lVar16,uStack_c0,uStack_e8,uVar13);
    uVar15 = *(undefined8 *)(unaff_x20 + _DAT_100028640);
    *(undefined **)(unaff_x20 + _DAT_100028640) = puVar9;
    _swift_release(uVar15);
  }
  uVar15 = *(undefined8 *)(unaff_x20 + lVar12);
  __s23ExtensionsStickerPicker20StickersFeedsServiceCMa(0);
  _swift_allocObject();
  _swift_retain(uVar15);
  _swift_bridgeObjectRetain(uVar13);
  _objc_retain();
  _swift_retain(uVar10);
  puVar9 = puVar8;
  __s23ExtensionsStickerPicker20StickersFeedsServiceC19authContextDelegate27stickerMetaDataCacheManager22stickersGrapheneLogger3age11countryCodeACSo011SCNGrpcAuthhI0_p_AA0bklmN0CAA0dpQ0CSgSiSStcfc
            (puVar8,uVar10,uVar15,uStack_c0,uStack_e8,uVar13);
  uVar13 = *(undefined8 *)(unaff_x20 + _DAT_100028648);
  *(undefined **)(unaff_x20 + _DAT_100028648) = puVar9;
  _swift_release(uVar13);
  uVar13 = *(undefined8 *)(unaff_x20 + lVar12);
  __s23ExtensionsStickerPicker22StickersUserDataClientCMa(0);
  _swift_allocObject();
  _swift_retain(uVar13);
  _objc_retain();
  puVar9 = puVar8;
  __s23ExtensionsStickerPicker22StickersUserDataClientC19authContextDelegate22stickersGrapheneLoggerACSo011SCNGrpcAuthiJ0_p_AA0dlM0CSgtcfc
            ();
  _objc_release(puVar4);
  _swift_release(uVar10);
  _objc_release(puVar8);
  _swift_unknownObjectRelease(puVar6);
  _objc_release(puVar5);
  _swift_release(puVar2);
  _objc_release(puVar1);
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_100028650);
  *(undefined **)(unaff_x20 + _DAT_100028650) = puVar9;
  _swift_release(uVar10);
  return;
}



/* Entry: 1000121c8; end: 10001222f;  */

void FUN_1000121c8(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long unaff_x22;
  
  uVar2 = 0;
  __sScMMa();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  plVar3 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100012230;
  plVar3[0x16] = param_2;
  *(undefined1 *)((long)plVar3 + 0xda) = 0;
  lVar4 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_100024970;
  lVar5 = lVar4;
  __sScM6sharedScMvgZ();
  plVar3[0x17] = lVar5;
  lVar5 = 0x100028800;
  FUN_100016290(0x100028800,puVar1,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj();
  plVar3[0x18] = lVar4;
  plVar3[0x19] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(FUN_100012340,lVar4,lVar5);
  return;
}



/* Entry: 100012230; end: 1000122ab;  */

void FUN_100012230(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x10);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x20));
  uVar1 = 0x100028800;
  FUN_100016290(0x100028800,PTR___sScMMa_100024970,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(0x100016dac,uVar2,uVar1);
  return;
}



/* Entry: 1000122ac; end: 10001233f;  */

void FUN_1000122ac(undefined1 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0xda) = param_1;
  uVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_100024970;
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar3;
  uVar3 = 0x100028800;
  FUN_100016290(0x100028800,puVar1,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar2;
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(FUN_100012340,uVar2,uVar3);
  return;
}



/* Entry: 100012340; end: 1000126ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100012340(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  byte *pbVar11;
  long unaff_x22;
  undefined8 uVar12;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  puVar4 = &UNK_10001f718;
  _swift_getKeyPath(&UNK_10001f718);
  puVar5 = &UNK_10001f740;
  _swift_getKeyPath(&UNK_10001f740);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (unaff_x22 + 0xa0,uVar9,puVar4,puVar5);
  _swift_release(puVar5);
  _swift_release(puVar4);
  lVar8 = *(long *)(*(long *)(unaff_x22 + 0xa0) + 0x10);
  _swift_bridgeObjectRelease();
  lVar10 = *(long *)(unaff_x22 + 0xb0);
  if (lVar8 != 0) {
    lVar8 = *(long *)(lVar10 + _DAT_100028668);
    if (lVar8 != 0) {
      _swift_retain(lVar8);
      __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerC022logExtensionTabSessionF0yyF();
      _swift_release(lVar8);
      lVar10 = *(long *)(unaff_x22 + 0xb0);
    }
  }
  bVar3 = *(byte *)(unaff_x22 + 0xda);
  puVar4 = &UNK_10001f688;
  _swift_getKeyPath(&UNK_10001f688);
  puVar5 = &UNK_10001f6b0;
  _swift_getKeyPath(&UNK_10001f6b0);
  *(undefined8 *)(unaff_x22 + 0x80) = 0;
  *(undefined8 *)(unaff_x22 + 0x88) = 0;
  _swift_retain(lVar10);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (unaff_x22 + 0x80,lVar10,puVar4,puVar5);
  puVar4 = &UNK_10001f7f8;
  _swift_getKeyPath(&UNK_10001f7f8);
  puVar5 = &UNK_10001f820;
  _swift_getKeyPath(&UNK_10001f820);
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  *(undefined8 *)(unaff_x22 + 0x98) = 0xe000000000000000;
  _swift_retain(lVar10);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (unaff_x22 + 0x90,lVar10,puVar4,puVar5);
  if ((bVar3 & 1) == 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
    puVar4 = &UNK_10001f610;
    _swift_getKeyPath(&UNK_10001f610);
    puVar5 = &UNK_10001f638;
    _swift_getKeyPath(&UNK_10001f638);
    *(undefined1 *)(unaff_x22 + 0xd8) = 0;
    _swift_retain(uVar9);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (unaff_x22 + 0xd8,uVar9,puVar4,puVar5);
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb0);
  puVar4 = &UNK_10001f6d0;
  _swift_getKeyPath(&UNK_10001f6d0);
  puVar5 = &UNK_10001f6f8;
  _swift_getKeyPath(&UNK_10001f6f8);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (unaff_x22 + 0x10,uVar9,puVar4,puVar5);
  _swift_release(puVar5);
  _swift_release(puVar4);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar10 = *(long *)(unaff_x22 + 0x30);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x10));
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(uVar2);
  lVar8 = *(long *)(lVar10 + 0x10);
  _swift_bridgeObjectRelease(lVar10);
  if (lVar8 != 0) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0xb8));
    pbVar11 = *(byte **)(unaff_x22 + 0xb0);
    puVar4 = &UNK_10001f6d0;
    _swift_getKeyPath(&UNK_10001f6d0);
    puVar5 = &UNK_10001f6f8;
    _swift_getKeyPath(&UNK_10001f6f8);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (unaff_x22 + 0x38,pbVar11,puVar4,puVar5);
    _swift_release(puVar5);
    _swift_release(puVar4);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x58);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x38));
    _swift_bridgeObjectRelease(uVar1);
    _swift_bridgeObjectRelease(uVar9);
    _swift_bridgeObjectRelease(uVar2);
    puVar4 = &UNK_10001f718;
    _swift_getKeyPath(&UNK_10001f718);
    puVar5 = &UNK_10001f740;
    _swift_getKeyPath(&UNK_10001f740);
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar12;
    _swift_retain(pbVar11);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              ((undefined8 *)(unaff_x22 + 0xa8),pbVar11,puVar4,puVar5);
    puVar4 = &UNK_10001f5c8;
    _swift_getKeyPath(&UNK_10001f5c8);
    puVar5 = &UNK_10001f5f0;
    _swift_getKeyPath(&UNK_10001f5f0);
    *(undefined1 *)(unaff_x22 + 0xd9) = 0;
    _swift_retain(pbVar11);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              ((undefined1 *)(unaff_x22 + 0xd9),pbVar11,puVar4,puVar5);
    puVar4 = &UNK_10001f760;
    _swift_getKeyPath(&UNK_10001f760);
    puVar5 = &UNK_10001f788;
    _swift_getKeyPath(&UNK_10001f788);
    pcVar6 = (code *)(unaff_x22 + 0x60);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluiMZ
              (pcVar6,pbVar11,puVar4,puVar5);
    *pbVar11 = (*pbVar11 ^ 0xff) & 1;
    (*pcVar6)(unaff_x22 + 0x60,0);
    _swift_release(puVar5);
    _swift_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x0001000126b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  plVar7 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xd0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1000126f0;
  plVar7[0x1e] = *(long *)(unaff_x22 + 0xb0);
  lVar10 = 0;
  __sScMMa();
  puVar4 = PTR___sScMMa_100024970;
  lVar8 = lVar10;
  __sScM6sharedScMvgZ();
  plVar7[0x1f] = lVar8;
  lVar8 = 0x100028800;
  FUN_100016290(0x100028800,puVar4,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj();
  plVar7[0x20] = lVar10;
  plVar7[0x21] = lVar8;
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(FUN_100012960,lVar10,lVar8);
  return;
}



/* Entry: 1000126f0; end: 100012733;  */

void FUN_1000126f0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)
            (FUN_100012734,*(undefined8 *)(lVar1 + 0xc0),*(undefined8 *)(lVar1 + 200));
  return;
}



/* Entry: 100012734; end: 1000128cf;  */

void FUN_100012734(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  byte *pbVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0xb8));
  pbVar7 = *(byte **)(unaff_x22 + 0xb0);
  puVar4 = &UNK_10001f6d0;
  _swift_getKeyPath(&UNK_10001f6d0);
  puVar5 = &UNK_10001f6f8;
  _swift_getKeyPath(&UNK_10001f6f8);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (unaff_x22 + 0x38,pbVar7,puVar4,puVar5);
  _swift_release(puVar5);
  _swift_release(puVar4);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x38));
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar3);
  puVar4 = &UNK_10001f718;
  _swift_getKeyPath(&UNK_10001f718);
  puVar5 = &UNK_10001f740;
  _swift_getKeyPath(&UNK_10001f740);
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar8;
  _swift_retain(pbVar7);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            ((undefined8 *)(unaff_x22 + 0xa8),pbVar7,puVar4,puVar5);
  puVar4 = &UNK_10001f5c8;
  _swift_getKeyPath(&UNK_10001f5c8);
  puVar5 = &UNK_10001f5f0;
  _swift_getKeyPath(&UNK_10001f5f0);
  *(undefined1 *)(unaff_x22 + 0xd9) = 0;
  _swift_retain(pbVar7);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            ((undefined1 *)(unaff_x22 + 0xd9),pbVar7,puVar4,puVar5);
  puVar4 = &UNK_10001f760;
  _swift_getKeyPath(&UNK_10001f760);
  puVar5 = &UNK_10001f788;
  _swift_getKeyPath(&UNK_10001f788);
  pcVar6 = (code *)(unaff_x22 + 0x60);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluiMZ
            (pcVar6,pbVar7,puVar4,puVar5);
  *pbVar7 = (*pbVar7 ^ 0xff) & 1;
  (*pcVar6)(unaff_x22 + 0x60,0);
  _swift_release(puVar5);
  _swift_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x0001000128cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1000128d0; end: 10001295f;  */

void FUN_1000128d0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf0) = unaff_x20;
  uVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_100024970;
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar3;
  uVar3 = 0x100028800;
  FUN_100016290(0x100028800,puVar1,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0x100) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(FUN_100012960,uVar2,uVar3);
  return;
}



/* Entry: 100012960; end: 1000129ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100012960(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(*(long *)(unaff_x22 + 0xf0) + _DAT_100028648);
  *(long *)(unaff_x22 + 0x110) = lVar2;
  if (lVar2 != 0) {
    plVar1 = (long *)(ulong)*(uint *)(
                                     PTR___s23ExtensionsStickerPicker20StickersFeedsServiceC05fetchE8MetaDataAA0B5ItemsVyYaKFTu_100024638
                                     + 4);
    _swift_retain(lVar2);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x118) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1000129f0;
                    /* WARNING: Could not recover jumptable at 0x00010001e670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___s23ExtensionsStickerPicker20StickersFeedsServiceC05fetchE8MetaDataAA0B5ItemsVyYaKF_100024630
    )(plVar1,unaff_x22 + 0x10);
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0xf8));
                    /* WARNING: Could not recover jumptable at 0x0001000129ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1000129f0; end: 100012a47;  */

void FUN_1000129f0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x120) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x118));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100012a48;
  }
  else {
    pcVar1 = FUN_100012ba8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)
            (pcVar1,*(undefined8 *)(lVar2 + 0x100),*(undefined8 *)(lVar2 + 0x108));
  return;
}



/* Entry: 100012a48; end: 100012ba7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100012a48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar7 = *(long *)(unaff_x22 + 0xf0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xf8));
  uVar9 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar6 = *(undefined8 *)(lVar7 + _DAT_100028658);
  uVar1 = ((undefined8 *)(lVar7 + _DAT_100028658))[1];
  _swift_bridgeObjectRetain(uVar1);
  uVar2 = uVar9;
  __s23ExtensionsStickerPicker09ExtensionB9ConverterO03getD8Stickers4from8avatarId13extensionTypeSayAA0dB0VGSaySo14SCCTPEXTCTItemCG_SSSgAA0dL0OtFZ
            (uVar9,uVar6,uVar1,0);
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x10);
  FUN_100016c20((undefined8 *)(unaff_x22 + 200),0x100028838,&UNK_10001f878);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_100016c20((undefined8 *)(unaff_x22 + 0xd0),0x100028838,&UNK_10001f878);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x20);
  FUN_100016c20((undefined8 *)(unaff_x22 + 0xd8),0x100028838,&UNK_10001f878);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x28);
  FUN_100016c20((undefined8 *)(unaff_x22 + 0xe0),0x100028838,&UNK_10001f878);
  _swift_bridgeObjectRelease(uVar9);
  puVar3 = &UNK_10001f6d0;
  _swift_getKeyPath(&UNK_10001f6d0);
  puVar4 = &UNK_10001f6f8;
  _swift_getKeyPath(&UNK_10001f6f8);
  pcVar5 = (code *)(unaff_x22 + 0x88);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluiMZ
            (pcVar5,lVar7,puVar3,puVar4);
  uVar6 = *(undefined8 *)(lVar7 + 0x20);
  *(undefined8 *)(lVar7 + 0x20) = uVar2;
  _swift_bridgeObjectRelease(uVar6);
  (*pcVar5)(unaff_x22 + 0x88,0);
  _swift_release(puVar4);
  _swift_release(puVar3);
  _swift_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100012ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100012ba8; end: 100012d9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100012ba8(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x120);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xf8));
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar7;
  _swift_errorRetain(uVar7);
  uVar7 = 0x100028818;
  FUN_100010b54(0x100028818,&UNK_10001f680);
  uVar8 = unaff_x22 + 0x128;
  _swift_dynamicCast(uVar8,(undefined8 *)(unaff_x22 + 0xe8),uVar7,
                     PTR___s23ExtensionsStickerPicker0B8ExtErrorON_100024570,0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar9 = *(long *)(unaff_x22 + 0xf0);
  if ((uVar8 & 1) == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xe8));
    func_0x0001000162d0(lVar9 + _DAT_100029320,unaff_x22 + 0x38);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar2 = unaff_x22 + 0x38;
    FUN_100016314(lVar2,uVar6);
    uVar3 = 0;
    __s23ExtensionsStickerPicker0bC16StringsProvidingPAAE11description3forSSAA0B8ExtErrorO_tF
              (0,uVar6,uVar1,lVar2);
    puVar4 = &UNK_10001f688;
    _swift_getKeyPath(&UNK_10001f688);
    puVar5 = &UNK_10001f6b0;
    _swift_getKeyPath(&UNK_10001f6b0);
    *(undefined8 *)(unaff_x22 + 0xa8) = uVar3;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar6;
    _swift_retain(lVar9);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              ((undefined8 *)(unaff_x22 + 0xa8),lVar9,puVar4,puVar5);
    _swift_release(uVar7);
    _swift_errorRelease(uVar10);
    func_0x000100016340(unaff_x22 + 0x38);
  }
  else {
    _swift_errorRelease(uVar10);
    uVar8 = (ulong)*(byte *)(unaff_x22 + 0x128);
    func_0x0001000162d0(lVar9 + _DAT_100029320,unaff_x22 + 0x60);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar2 = unaff_x22 + 0x60;
    FUN_100016314(lVar2,uVar10);
    __s23ExtensionsStickerPicker0bC16StringsProvidingPAAE11description3forSSAA0B8ExtErrorO_tF
              (uVar8,uVar10,uVar6,lVar2);
    puVar4 = &UNK_10001f688;
    _swift_getKeyPath(&UNK_10001f688);
    puVar5 = &UNK_10001f6b0;
    _swift_getKeyPath(&UNK_10001f6b0);
    *(ulong *)(unaff_x22 + 0xb8) = uVar8;
    *(undefined8 *)(unaff_x22 + 0xc0) = uVar10;
    _swift_retain(lVar9);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              ((ulong *)(unaff_x22 + 0xb8),lVar9,puVar4,puVar5);
    _swift_release(uVar7);
    func_0x000100016340(unaff_x22 + 0x60);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xe8));
  }
                    /* WARNING: Could not recover jumptable at 0x000100012d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100012d9c; end: 100012e2f;  */

void FUN_100012d9c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xe0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_1;
  uVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_100024970;
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0xe8) = uVar3;
  uVar3 = 0x100028800;
  FUN_100016290(0x100028800,puVar1,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0xf0) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(FUN_100012e30,uVar2,uVar3);
  return;
}



/* Entry: 100012e30; end: 100012f8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100012e30(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  
  lVar9 = *(long *)(*(long *)(unaff_x22 + 0xe0) + _DAT_100028640);
  *(long *)(unaff_x22 + 0x100) = lVar9;
  if (lVar9 == 0) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
  }
  else {
    lVar3 = *(long *)(unaff_x22 + 0xd0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0xd8);
    _swift_retain(lVar9);
    __sSS5countSivg(lVar3,uVar8);
    if (lVar3 < 0x33) {
      plVar4 = (long *)(ulong)*(uint *)(
                                       PTR___s23ExtensionsStickerPicker20StickersSearchClientC21fetchMetaDataIfNeeded4withSaySo14SCCTPEXTCTItemCGSS_tYaKFTu_100024678
                                       + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x108) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_100012f90;
                    /* WARNING: Could not recover jumptable at 0x00010001e6ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___s23ExtensionsStickerPicker20StickersSearchClientC21fetchMetaDataIfNeeded4withSaySo14SCCTPEXTCTItemCGSS_tYaKF_100024670
      )(*(undefined8 *)(unaff_x22 + 0xd0),*(undefined8 *)(unaff_x22 + 0xd8));
      return;
    }
    lVar1 = *(long *)(unaff_x22 + 0xe0);
    _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
    func_0x0001000162d0(lVar1 + _DAT_100029320,unaff_x22 + 0x10);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
    lVar3 = unaff_x22 + 0x10;
    FUN_100016314(lVar3,uVar8);
    uVar5 = 1;
    __s23ExtensionsStickerPicker0bC16StringsProvidingPAAE11description3forSSAA0B8ExtErrorO_tF
              (1,uVar8,uVar2,lVar3);
    puVar6 = &UNK_10001f688;
    _swift_getKeyPath(&UNK_10001f688);
    puVar7 = &UNK_10001f6b0;
    _swift_getKeyPath(&UNK_10001f6b0);
    *(undefined8 *)(unaff_x22 + 0x88) = uVar5;
    *(undefined8 *)(unaff_x22 + 0x90) = uVar8;
    _swift_retain(lVar1);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (unaff_x22 + 0x88,lVar1,puVar6,puVar7);
    _swift_release(lVar9);
    func_0x000100016340(unaff_x22 + 0x10);
  }
                    /* WARNING: Could not recover jumptable at 0x000100012f8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100012f90; end: 100012ffb;  */

void FUN_100012f90(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x110) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x108));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x118) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 0xf0);
    uVar3 = *(undefined8 *)(lVar4 + 0xf8);
    pcVar1 = FUN_100012ffc;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0xf0);
    uVar3 = *(undefined8 *)(lVar4 + 0xf8);
    pcVar1 = FUN_1000131f4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(pcVar1,uVar2,uVar3);
  return;
}



/* Entry: 100012ffc; end: 1000131f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100012ffc(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
  lVar8 = *(long *)(unaff_x22 + 0xe0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
  uVar6 = *(undefined8 *)(lVar8 + _DAT_100028658);
  uVar10 = ((undefined8 *)(lVar8 + _DAT_100028658))[1];
  _swift_bridgeObjectRetain(uVar10);
  uVar3 = uVar7;
  __s23ExtensionsStickerPicker09ExtensionB9ConverterO03getD8Stickers4from8avatarId13extensionTypeSayAA0dB0VGSaySo14SCCTPEXTCTItemCG_SSSgAA0dL0OtFZ
            (uVar7,uVar6,uVar10,0);
  _swift_bridgeObjectRelease(uVar10);
  _swift_bridgeObjectRelease(uVar7);
  puVar4 = &UNK_10001f718;
  _swift_getKeyPath(&UNK_10001f718);
  puVar5 = &UNK_10001f740;
  _swift_getKeyPath(&UNK_10001f740);
  *(undefined8 *)(unaff_x22 + 200) = uVar3;
  _swift_retain(lVar8);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            ((undefined8 *)(unaff_x22 + 200),lVar8,puVar4,puVar5);
  lVar9 = *(long *)(unaff_x22 + 0xe0);
  lVar8 = *(long *)(lVar9 + _DAT_100028668);
  if (lVar8 == 0) {
    lVar8 = *(long *)(unaff_x22 + 0x100);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x100);
    puVar4 = &UNK_10001f5c8;
    _swift_getKeyPath(&UNK_10001f5c8);
    puVar5 = &UNK_10001f5f0;
    _swift_getKeyPath(&UNK_10001f5f0);
    _swift_retain(lVar8);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (unaff_x22 + 0x121,lVar9,puVar4,puVar5);
    _swift_release(puVar5);
    _swift_release(puVar4);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x121);
    puVar4 = &UNK_10001f610;
    _swift_getKeyPath(&UNK_10001f610);
    puVar5 = &UNK_10001f638;
    _swift_getKeyPath(&UNK_10001f638);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (unaff_x22 + 0x122,lVar9,puVar4,puVar5);
    _swift_release(puVar5);
    _swift_release(puVar4);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x122);
    puVar4 = &UNK_10001f718;
    _swift_getKeyPath(&UNK_10001f718);
    puVar5 = &UNK_10001f740;
    _swift_getKeyPath(&UNK_10001f740);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (unaff_x22 + 0xc0,lVar9,puVar4,puVar5);
    _swift_release(puVar5);
    _swift_release(puVar4);
    uVar10 = *(undefined8 *)(*(long *)(unaff_x22 + 0xc0) + 0x10);
    _swift_bridgeObjectRelease();
    __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerC018logExtensionSearchF011selectedTag11isSearching12resultsCountyAA04PillL0OSg_SbSitF
              (uVar1,uVar2,uVar10);
    _swift_release(uVar6);
  }
  _swift_release(lVar8);
                    /* WARNING: Could not recover jumptable at 0x0001000131f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1000131f4; end: 1000134f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000131f4(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long unaff_x22;
  long lVar12;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
  _swift_release(*(undefined8 *)(unaff_x22 + 0xe8));
  *(undefined8 *)(unaff_x22 + 0xb8) = uVar8;
  _swift_errorRetain(uVar8);
  uVar8 = 0x100028818;
  FUN_100010b54(0x100028818,&UNK_10001f680);
  uVar9 = unaff_x22 + 0x120;
  _swift_dynamicCast(uVar9,(undefined8 *)(unaff_x22 + 0xb8),uVar8,
                     PTR___s23ExtensionsStickerPicker0B8ExtErrorON_100024570,0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar11 = *(long *)(unaff_x22 + 0xe0);
  if ((uVar9 & 1) == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xb8));
    func_0x0001000162d0(lVar11 + _DAT_100029320,unaff_x22 + 0x38);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    lVar10 = unaff_x22 + 0x38;
    FUN_100016314(lVar10,uVar7);
    uVar4 = 0;
    __s23ExtensionsStickerPicker0bC16StringsProvidingPAAE11description3forSSAA0B8ExtErrorO_tF
              (0,uVar7,uVar1,lVar10);
    puVar5 = &UNK_10001f688;
    _swift_getKeyPath(&UNK_10001f688);
    puVar6 = &UNK_10001f6b0;
    _swift_getKeyPath(&UNK_10001f6b0);
    *(undefined8 *)(unaff_x22 + 0x98) = uVar4;
    *(undefined8 *)(unaff_x22 + 0xa0) = uVar7;
    _swift_retain(lVar11);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              ((undefined8 *)(unaff_x22 + 0x98),lVar11,puVar5,puVar6);
    _swift_errorRelease(uVar8);
    func_0x000100016340(unaff_x22 + 0x38);
  }
  else {
    _swift_errorRelease(uVar8);
    uVar9 = (ulong)*(byte *)(unaff_x22 + 0x120);
    func_0x0001000162d0(lVar11 + _DAT_100029320,unaff_x22 + 0x60);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x78);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar10 = unaff_x22 + 0x60;
    FUN_100016314(lVar10,uVar8);
    __s23ExtensionsStickerPicker0bC16StringsProvidingPAAE11description3forSSAA0B8ExtErrorO_tF
              (uVar9,uVar8,uVar7,lVar10);
    puVar5 = &UNK_10001f688;
    _swift_getKeyPath(&UNK_10001f688);
    puVar6 = &UNK_10001f6b0;
    _swift_getKeyPath(&UNK_10001f6b0);
    *(ulong *)(unaff_x22 + 0xa8) = uVar9;
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar8;
    _swift_retain(lVar11);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              ((ulong *)(unaff_x22 + 0xa8),lVar11,puVar5,puVar6);
    func_0x000100016340(unaff_x22 + 0x60);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0xb8));
  }
  lVar12 = *(long *)(unaff_x22 + 0xe0);
  lVar10 = *(long *)(lVar12 + _DAT_100028668);
  lVar11 = *(long *)(unaff_x22 + 0x100);
  if (lVar10 != 0) {
    puVar5 = &UNK_10001f5c8;
    _swift_getKeyPath(&UNK_10001f5c8);
    puVar6 = &UNK_10001f5f0;
    _swift_getKeyPath(&UNK_10001f5f0);
    _swift_retain(lVar10);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (unaff_x22 + 0x121,lVar12,puVar5,puVar6);
    _swift_release(puVar6);
    _swift_release(puVar5);
    uVar2 = *(undefined1 *)(unaff_x22 + 0x121);
    puVar5 = &UNK_10001f610;
    _swift_getKeyPath(&UNK_10001f610);
    puVar6 = &UNK_10001f638;
    _swift_getKeyPath(&UNK_10001f638);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (unaff_x22 + 0x122,lVar12,puVar5,puVar6);
    _swift_release(puVar6);
    _swift_release(puVar5);
    uVar3 = *(undefined1 *)(unaff_x22 + 0x122);
    puVar5 = &UNK_10001f718;
    _swift_getKeyPath(&UNK_10001f718);
    puVar6 = &UNK_10001f740;
    _swift_getKeyPath(&UNK_10001f740);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (unaff_x22 + 0xc0,lVar12,puVar5,puVar6);
    _swift_release(puVar6);
    _swift_release(puVar5);
    uVar8 = *(undefined8 *)(*(long *)(unaff_x22 + 0xc0) + 0x10);
    _swift_bridgeObjectRelease();
    __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerC018logExtensionSearchF011selectedTag11isSearching12resultsCountyAA04PillL0OSg_SbSitF
              (uVar2,uVar3,uVar8);
    _swift_release(lVar11);
    lVar11 = lVar10;
  }
  _swift_release(lVar11);
                    /* WARNING: Could not recover jumptable at 0x0001000134f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1000134f8; end: 100013703;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000134f8(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  byte *unaff_x20;
  long lVar5;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  lVar5 = *(long *)(unaff_x20 + _DAT_100028668);
  if (lVar5 != 0) {
    _swift_retain(lVar5);
    __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerC022logExtensionTabSessionF0yyF();
    _swift_release(lVar5);
  }
  _swift_getKeyPath(&UNK_10001f688);
  _swift_getKeyPath(&UNK_10001f6b0);
  puStack_60 = (undefined *)0x0;
  uStack_58 = 0;
  _swift_retain();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&puStack_60);
  _swift_getKeyPath(&UNK_10001f718);
  _swift_getKeyPath(&UNK_10001f740);
  puStack_60 = PTR___swiftEmptyArrayStorage_100024840;
  _swift_retain();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&puStack_60);
  puVar1 = &UNK_100024c98;
  _swift_allocObject(&UNK_100024c98,0x28,7);
  *(byte **)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  _swift_retain();
  _swift_bridgeObjectRetain(param_2);
  uVar2 = 1;
  __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
            (1,0,0x10,4,0,0,&UNK_10001f848,puVar1,PTR___sytN_100024838 + 8);
  _swift_release(puVar1);
  _swift_release(uVar2);
  _swift_getKeyPath(&UNK_10001f5c8);
  _swift_getKeyPath(&UNK_10001f5f0);
  puStack_60 = (undefined *)CONCAT71(puStack_60._1_7_,param_3);
  _swift_retain();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&puStack_60);
  puVar1 = &UNK_10001f760;
  _swift_getKeyPath(&UNK_10001f760);
  puVar3 = &UNK_10001f788;
  _swift_getKeyPath(&UNK_10001f788);
  ppuVar4 = &puStack_60;
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluiMZ
            ();
  *unaff_x20 = (*unaff_x20 ^ 0xff) & 1;
  (*(code *)ppuVar4)(&puStack_60,0);
  _swift_release(puVar1);
  _swift_release(puVar3);
  return;
}



/* Entry: 100013704; end: 10001377f;  */

void FUN_100013704(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  
  uVar4 = 0;
  __sScMMa();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar4;
  plVar5 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100013780;
  plVar5[0x1b] = param_4;
  plVar5[0x1c] = param_2;
  plVar5[0x1a] = param_3;
  lVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_100024970;
  lVar3 = lVar2;
  __sScM6sharedScMvgZ();
  plVar5[0x1d] = lVar3;
  lVar3 = 0x100028800;
  FUN_100016290(0x100028800,puVar1,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj();
  plVar5[0x1e] = lVar2;
  plVar5[0x1f] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(FUN_100012e30,lVar2,lVar3);
  return;
}



/* Entry: 100013780; end: 1000137fb;  */

void FUN_100013780(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x10);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x20));
  uVar1 = 0x100028800;
  FUN_100016290(0x100028800,PTR___sScMMa_100024970,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(FUN_1000137fc,uVar2,uVar1);
  return;
}



/* Entry: 1000137fc; end: 10001382b;  */

void FUN_1000137fc(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x000100013828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 10001382c; end: 100013937;  */

void FUN_10001382c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x150) = param_2;
  *(undefined8 *)(unaff_x22 + 0x158) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x1e2) = param_3;
  *(undefined8 *)(unaff_x22 + 0x148) = param_1;
  lVar3 = 0x100028808;
  FUN_100010b54(0x100028808,&UNK_10001f670);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x160) = uVar2;
  lVar3 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x168) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x170) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x178) = uVar4;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x180) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x188) = uVar2;
  uVar5 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_100024970;
  uVar6 = uVar5;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 400) = uVar6;
  uVar6 = 0x100028800;
  FUN_100016290(0x100028800,puVar1,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0x198) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x1a0) = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(FUN_100013938,uVar5,uVar6);
  return;
}



/* Entry: 100013938; end: 100013a67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013938(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  long *plVar8;
  
  lVar6 = *(long *)(*(long *)(unaff_x22 + 0x158) + _DAT_100028650);
  *(long *)(unaff_x22 + 0x1a8) = lVar6;
  if (lVar6 != 0) {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x158) + _DAT_100028648);
    *(long *)(unaff_x22 + 0x1b0) = lVar5;
    if (lVar5 != 0) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x150);
      lVar4 = 0x100028810;
      FUN_100010b54(0x100028810,&UNK_10001f678);
      _swift_initStackObject();
      *(long *)(unaff_x22 + 0x1b8) = lVar4;
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      *(undefined8 *)(lVar4 + 0x20) = uVar1;
      *(undefined8 *)(lVar4 + 0x28) = uVar2;
      plVar8 = (long *)(ulong)*(uint *)(
                                       PTR___s23ExtensionsStickerPicker22StickersUserDataClientC03puteF5Items4withSaySo14SCCTPEXTCTItemCGSaySSG_tYaKFTu_1000246e0
                                       + 4);
      _swift_retain(lVar6);
      _swift_retain(lVar5);
      _swift_bridgeObjectRetain(uVar2);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x1c0) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_100013a68;
                    /* WARNING: Could not recover jumptable at 0x00010001e724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___s23ExtensionsStickerPicker22StickersUserDataClientC03puteF5Items4withSaySo14SCCTPEXTCTItemCGSaySSG_tYaKF_1000246d8
      )(lVar4);
      return;
    }
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 400));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x160);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x188));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000100013a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100013a68; end: 100013b3f;  */

void FUN_100013a68(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  
  lVar4 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar4 + 0x1c8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x1c0));
  lVar2 = *(long *)(lVar4 + 0x1b8);
  if (unaff_x20 != 0) {
    _swift_setDeallocating(lVar2);
    _swift_arrayDestroy(lVar2 + 0x20,*(undefined8 *)(lVar2 + 0x10),PTR___sSSN_1000247b8);
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_1000249a0)
              (FUN_1000140e0,*(undefined8 *)(lVar4 + 0x198),*(undefined8 *)(lVar4 + 0x1a0));
    return;
  }
  *(undefined8 *)(lVar4 + 0x1d0) = param_1;
  _swift_setDeallocating(lVar2);
  _swift_arrayDestroy(lVar2 + 0x20,*(undefined8 *)(lVar2 + 0x10),PTR___sSSN_1000247b8);
  plVar1 = (long *)(ulong)*(uint *)(
                                   PTR___s23ExtensionsStickerPicker20StickersFeedsServiceC22addItemsToRecentsCacheyySaySo14SCCTPEXTCTItemCGYaFTu_100024650
                                   + 4);
  _swift_task_alloc();
  *(long **)(lVar4 + 0x1d8) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_100013b40;
                    /* WARNING: Could not recover jumptable at 0x00010001e688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___s23ExtensionsStickerPicker20StickersFeedsServiceC22addItemsToRecentsCacheyySaySo14SCCTPEXTCTItemCGYaF_100024648
  )(param_1);
  return;
}



/* Entry: 100013b40; end: 100013b83;  */

void FUN_100013b40(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x1d8));
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)
            (FUN_100013b84,*(undefined8 *)(lVar1 + 0x198),*(undefined8 *)(lVar1 + 0x1a0));
  return;
}



/* Entry: 100013b84; end: 1000140df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100013b84(void)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  byte *pbVar17;
  long unaff_x22;
  undefined8 uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  
  lVar12 = *(long *)(unaff_x22 + 0x1d0);
  lVar13 = *(long *)(unaff_x22 + 0x158);
  _swift_release(*(undefined8 *)(unaff_x22 + 400));
  puVar1 = (undefined8 *)(lVar13 + _DAT_100028658);
  uVar15 = *puVar1;
  uVar9 = puVar1[1];
  _swift_bridgeObjectRetain(uVar9);
  lVar13 = lVar12;
  __s23ExtensionsStickerPicker09ExtensionB9ConverterO03getD8Stickers4from8avatarId13extensionTypeSayAA0dB0VGSaySo14SCCTPEXTCTItemCG_SSSgAA0dL0OtFZ
            (lVar12,uVar15,uVar9,0);
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(lVar12);
  if (*(long *)(lVar13 + 0x10) == 0) {
    _swift_bridgeObjectRelease(lVar13);
  }
  else {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x180);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x188);
    lVar12 = *(long *)(unaff_x22 + 0x158);
    uVar11 = (ulong)*(byte *)(*(long *)(unaff_x22 + 0x168) + 0x50);
    uVar20 = uVar11 + 0x20 & (uVar11 ^ 0xffffffffffffffff);
    FUN_1000160b4(lVar13 + uVar20,uVar15);
    _swift_bridgeObjectRelease(lVar13);
    FUN_100016184(uVar15,uVar9);
    puVar6 = &UNK_10001f6d0;
    _swift_getKeyPath();
    puVar7 = &UNK_10001f6f8;
    _swift_getKeyPath();
    pcVar5 = (code *)(unaff_x22 + 0xb8);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluiMZ
              (pcVar5,lVar12,puVar6,puVar7);
    puVar10 = (ulong *)(lVar12 + 0x20);
    uVar11 = *puVar10;
    uVar14 = *(ulong *)(uVar11 + 0x10);
    lVar13 = *(long *)(unaff_x22 + 0x188);
    if (uVar14 == 0) {
      uVar19 = 0;
      uVar21 = 0;
    }
    else {
      uVar19 = 0;
      lVar12 = *(long *)(*(long *)(unaff_x22 + 0x168) + 0x48);
      uVar16 = uVar20;
      do {
        uVar8 = *(ulong *)(uVar11 + uVar16);
        uVar21 = ((ulong *)(uVar11 + uVar16))[1];
        uVar24 = **(ulong **)(unaff_x22 + 0x188);
        uVar23 = *(ulong *)(lVar13 + 8);
        if ((uVar8 == uVar24 && uVar21 == uVar23) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (uVar8,uVar21,uVar24,uVar23,0), uVar21 = uVar8 & 1, uVar8 = uVar24,
           uVar21 != 0)) {
          uVar21 = uVar19 + 1;
          uVar14 = *(ulong *)(uVar11 + 0x10);
          if (uVar14 - 1 != uVar19) {
            do {
              uVar16 = lVar12 + uVar16;
              if (uVar14 <= uVar21) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x1000140c4);
                (*pcVar5)();
              }
              puVar2 = (ulong *)(uVar11 + uVar16);
              uVar24 = *puVar2;
              if ((uVar24 != uVar8 || puVar2[1] != uVar23) &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (uVar24,puVar2[1],uVar8,uVar23,0), (uVar24 & 1) == 0)) {
                if (uVar21 != uVar19) {
                  if (uVar14 <= uVar19) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000140c8);
                    (*pcVar5)();
                  }
                  uVar15 = *(undefined8 *)(unaff_x22 + 0x170);
                  FUN_1000160b4(uVar11 + uVar20 + uVar19 * lVar12,*(undefined8 *)(unaff_x22 + 0x178)
                               );
                  FUN_1000160b4(puVar2,uVar15);
                  uVar14 = uVar11;
                  _swift_isUniquelyReferenced_nonNull_native();
                  *puVar10 = uVar11;
                  if ((uVar14 & 1) == 0) {
                    FUN_1000167c0();
                    *puVar10 = uVar11;
                  }
                  if (*(ulong *)(uVar11 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000140cc);
                    (*pcVar5)();
                  }
                  FUN_1000167d4(*(undefined8 *)(unaff_x22 + 0x170),uVar11 + uVar20 + uVar19 * lVar12
                               );
                  *puVar10 = uVar11;
                  if (*(ulong *)(uVar11 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000140d0);
                    (*pcVar5)();
                  }
                  FUN_1000167d4(*(undefined8 *)(unaff_x22 + 0x178),uVar11 + uVar16);
                  *puVar10 = uVar11;
                }
                uVar19 = uVar19 + 1;
              }
              uVar21 = uVar21 + 1;
              uVar14 = *(ulong *)(uVar11 + 0x10);
            } while (uVar21 != uVar14);
          }
          goto LAB_100013e9c;
        }
        uVar19 = uVar19 + 1;
        uVar16 = uVar16 + lVar12;
      } while (uVar14 != uVar19);
      uVar21 = *(ulong *)(uVar11 + 0x10);
      uVar19 = uVar14;
LAB_100013e9c:
      if ((long)uVar21 < (long)uVar19) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100013ea8);
        (*pcVar5)();
      }
      lVar13 = *(long *)(unaff_x22 + 0x188);
    }
    uVar15 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x160);
    FUN_100016924(uVar19,uVar21);
    (*pcVar5)(unaff_x22 + 0xb8,0);
    _swift_release(puVar7);
    _swift_release(puVar6);
    puVar6 = &UNK_10001f6d0;
    _swift_getKeyPath(&UNK_10001f6d0);
    puVar7 = &UNK_10001f6f8;
    _swift_getKeyPath(&UNK_10001f6f8);
    pcVar5 = (code *)(unaff_x22 + 0xd8);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluiMZ
              (pcVar5,uVar15,puVar6,puVar7);
    FUN_1000160b4(lVar13,uVar9);
    FUN_100016438(0,0,uVar9);
    (*pcVar5)(unaff_x22 + 0xd8,0);
    _swift_release(puVar7);
    _swift_release(puVar6);
    FUN_1000169e0(lVar13);
  }
  if (*(char *)(unaff_x22 + 0x1e2) == '\x01') {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x158);
    puVar6 = &UNK_10001f5c8;
    _swift_getKeyPath(&UNK_10001f5c8);
    puVar7 = &UNK_10001f5f0;
    _swift_getKeyPath(&UNK_10001f5f0);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (unaff_x22 + 0x1e1,uVar15,puVar6,puVar7);
    _swift_release(puVar7);
    _swift_release(puVar6);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x1b0);
    if (*(char *)(unaff_x22 + 0x1e1) == '\0') {
      pbVar17 = *(byte **)(unaff_x22 + 0x158);
      puVar6 = &UNK_10001f6d0;
      _swift_getKeyPath(&UNK_10001f6d0);
      puVar7 = &UNK_10001f6f8;
      _swift_getKeyPath(&UNK_10001f6f8);
      __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
                (unaff_x22 + 0x90,pbVar17,puVar6,puVar7);
      _swift_release(puVar7);
      _swift_release(puVar6);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x98);
      uVar3 = *(undefined8 *)(unaff_x22 + 0xa0);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar22 = *(undefined8 *)(unaff_x22 + 0xb0);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x90));
      _swift_bridgeObjectRelease(uVar18);
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(uVar4);
      puVar6 = &UNK_10001f718;
      _swift_getKeyPath(&UNK_10001f718);
      puVar7 = &UNK_10001f740;
      _swift_getKeyPath(&UNK_10001f740);
      *(undefined8 *)(unaff_x22 + 0x140) = uVar22;
      _swift_retain(pbVar17);
      __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
                (unaff_x22 + 0x140,pbVar17,puVar6,puVar7);
      puVar6 = &UNK_10001f760;
      _swift_getKeyPath(&UNK_10001f760);
      puVar7 = &UNK_10001f788;
      _swift_getKeyPath(&UNK_10001f788);
      pcVar5 = (code *)(unaff_x22 + 0xf8);
      __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluiMZ
                (pcVar5,pbVar17,puVar6,puVar7);
      *pbVar17 = (*pbVar17 ^ 0xff) & 1;
      (*pcVar5)(unaff_x22 + 0xf8,0);
      _swift_release(puVar7);
      _swift_release(puVar6);
      _swift_release(uVar15);
      goto LAB_100013e24;
    }
  }
  else {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1a8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x1b0);
  }
  _swift_release(uVar9);
  uVar9 = uVar15;
LAB_100013e24:
  _swift_release(uVar9);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x160);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x188));
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar18);
                    /* WARNING: Could not recover jumptable at 0x000100013e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1000140e0; end: 100014307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000140e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1c8);
  _swift_release(*(undefined8 *)(unaff_x22 + 400));
  *(undefined8 *)(unaff_x22 + 0x138) = uVar7;
  _swift_errorRetain(uVar7);
  uVar7 = 0x100028818;
  FUN_100010b54(0x100028818,&UNK_10001f680);
  uVar8 = unaff_x22 + 0x1e0;
  _swift_dynamicCast(uVar8,unaff_x22 + 0x138,uVar7,
                     PTR___s23ExtensionsStickerPicker0B8ExtErrorON_100024570,0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar9 = *(long *)(unaff_x22 + 0x158);
  if ((uVar8 & 1) == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x138));
    func_0x0001000162d0(lVar9 + _DAT_100029320,unaff_x22 + 0x40);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar3 = unaff_x22 + 0x40;
    FUN_100016314(lVar3,uVar10);
    uVar4 = 0;
    __s23ExtensionsStickerPicker0bC16StringsProvidingPAAE11description3forSSAA0B8ExtErrorO_tF
              (0,uVar10,uVar2,lVar3);
    puVar5 = &UNK_10001f688;
    _swift_getKeyPath(&UNK_10001f688);
    puVar6 = &UNK_10001f6b0;
    _swift_getKeyPath(&UNK_10001f6b0);
    *(undefined8 *)(unaff_x22 + 0x118) = uVar4;
    *(undefined8 *)(unaff_x22 + 0x120) = uVar10;
    _swift_retain(lVar9);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (unaff_x22 + 0x118,lVar9,puVar5,puVar6);
    _swift_release(uVar7);
    _swift_release(uVar1);
    _swift_errorRelease(uVar11);
    func_0x000100016340(unaff_x22 + 0x40);
  }
  else {
    _swift_errorRelease(uVar11);
    uVar8 = (ulong)*(byte *)(unaff_x22 + 0x1e0);
    func_0x0001000162d0(lVar9 + _DAT_100029320,unaff_x22 + 0x68);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar3 = unaff_x22 + 0x68;
    FUN_100016314(lVar3,uVar11);
    __s23ExtensionsStickerPicker0bC16StringsProvidingPAAE11description3forSSAA0B8ExtErrorO_tF
              (uVar8,uVar11,uVar10,lVar3);
    puVar5 = &UNK_10001f688;
    _swift_getKeyPath(&UNK_10001f688);
    puVar6 = &UNK_10001f6b0;
    _swift_getKeyPath(&UNK_10001f6b0);
    *(ulong *)(unaff_x22 + 0x128) = uVar8;
    *(undefined8 *)(unaff_x22 + 0x130) = uVar11;
    _swift_retain(lVar9);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (unaff_x22 + 0x128,lVar9,puVar5,puVar6);
    _swift_release(uVar7);
    _swift_release(uVar1);
    func_0x000100016340(unaff_x22 + 0x68);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x138));
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x170);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x160);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x188));
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100014304. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 100014308; end: 10001451b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014308(undefined8 param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long alStack_80 [2];
  undefined8 uStack_70;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  lVar2 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  lVar10 = *(long *)(lVar2 + -8);
  lVar2 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_100024410)();
  lVar1 = -(lVar2 + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&uStack_70 + lVar1;
  lVar7 = *(long *)(unaff_x20 + _DAT_100028660);
  if (lVar7 != 0) {
    _swift_retain(lVar7);
    __s23ExtensionsStickerPicker22StickersGrapheneLoggerC03logB9WasPicked12isTapGestureySb_tF
              (param_3 & 1);
    _swift_release(lVar7);
  }
  lVar7 = *(long *)(unaff_x20 + _DAT_100028668);
  if (lVar7 != 0) {
    puVar3 = &UNK_10001f5c8;
    _swift_getKeyPath(&UNK_10001f5c8);
    puVar4 = &UNK_10001f5f0;
    uStack_70 = param_2;
    _swift_getKeyPath(&UNK_10001f5f0);
    _swift_retain(lVar7);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (&uStack_61);
    _swift_release(puVar3);
    _swift_release(puVar4);
    puVar3 = &UNK_10001f610;
    _swift_getKeyPath(&UNK_10001f610);
    puVar4 = &UNK_10001f638;
    _swift_getKeyPath(&UNK_10001f638);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (&uStack_62);
    _swift_release(puVar3);
    _swift_release(puVar4);
    __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerC016logExtensionSendF07sticker5index11selectedTag11isSearchingyAA0iB0V_SiAA04PillN0OSgSbtF
              (param_1,uStack_70,uStack_61,uStack_62);
    _swift_release(lVar7);
  }
  FUN_1000160b4(param_1,lVar8);
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar9 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  lVar2 = uVar9 + lVar2;
  puVar3 = &UNK_100024c70;
  _swift_allocObject(&UNK_100024c70,lVar2 + 1,uVar6 | 7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  FUN_100016184(lVar8,puVar3 + uVar9);
  puVar3[lVar2] = param_3 & 1;
  _swift_retain();
  *(undefined **)((long)alStack_80 + lVar1) = PTR___sytN_100024838 + 8;
  uVar5 = 1;
  __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
            (1,0,0x10,4,0,0,&UNK_10001f660,puVar3);
  _swift_release(puVar3);
  _swift_release(uVar5);
  return;
}



/* Entry: 10001451c; end: 1000145af;  */

void FUN_10001451c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  uVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_100024970;
  uVar3 = uVar2;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar3 = 0x100028800;
  FUN_100016290(0x100028800,puVar1,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj();
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(FUN_1000145b0,uVar2,uVar3);
  return;
}



/* Entry: 1000145b0; end: 100014613;  */

void FUN_1000145b0(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  
  lVar4 = **(long **)(unaff_x22 + 0x18);
  lVar6 = (*(long **)(unaff_x22 + 0x18))[1];
  plVar7 = (long *)0x1f0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100014614;
  uVar1 = *(undefined1 *)(unaff_x22 + 0x40);
  lVar8 = *(long *)(unaff_x22 + 0x10);
  plVar7[0x2a] = lVar6;
  plVar7[0x2b] = lVar8;
  *(undefined1 *)((long)plVar7 + 0x1e2) = uVar1;
  plVar7[0x29] = lVar4;
  lVar4 = 0x100028808;
  FUN_100010b54(0x100028808,&UNK_10001f670);
  uVar3 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0x2c] = uVar3;
  lVar4 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  lVar4 = *(long *)(lVar4 + -8);
  plVar7[0x2d] = lVar4;
  uVar3 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0x2e] = uVar5;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0x2f] = uVar5;
  uVar5 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0x30] = uVar5;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  plVar7[0x31] = uVar3;
  lVar6 = 0;
  __sScMMa();
  puVar2 = PTR___sScMMa_100024970;
  lVar4 = lVar6;
  __sScM6sharedScMvgZ();
  plVar7[0x32] = lVar4;
  lVar4 = 0x100028800;
  FUN_100016290(0x100028800,puVar2,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj();
  plVar7[0x33] = lVar6;
  plVar7[0x34] = lVar4;
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(FUN_100013938,lVar6,lVar4);
  return;
}



/* Entry: 100014614; end: 100014687;  */

void FUN_100014614(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)
            (0x100014658,*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30));
  return;
}



/* Entry: 100014688; end: 1000147eb;  */

void FUN_100014688(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getKeyPath(&UNK_10001f7f8);
  _swift_getKeyPath(&UNK_10001f820);
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  _swift_retain();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_40);
  uVar1 = (uint)param_1 & 0xff;
  if (uVar1 < 4) {
    uVar4 = 0xeb00000000232353;
    uVar5 = 0x544e454345522323;
    uVar2 = 0x65766f6c;
    if (uVar1 != 2) {
      uVar2 = 0x61686168;
    }
    if ((param_1 & 0xff) != 0) {
      uVar5 = 0x6968;
      uVar4 = 0xe200000000000000;
    }
    uVar3 = (ulong)uVar2;
    if (uVar1 == 1 || (param_1 & 0xff) == 0) {
      uVar3 = uVar5;
    }
    uVar6 = 0xe400000000000000;
    if (uVar1 == 1 || (param_1 & 0xff) == 0) {
      uVar6 = uVar4;
    }
  }
  else {
    uVar5 = 0x776f77;
    if (uVar1 != 7) {
      uVar5 = 0x7972726f73;
    }
    uVar4 = 0xe300000000000000;
    if (uVar1 != 7) {
      uVar4 = 0xe500000000000000;
    }
    uVar3 = 0x736579;
    if (uVar1 != 6) {
      uVar3 = uVar5;
    }
    uVar6 = 0xe300000000000000;
    if (uVar1 != 6) {
      uVar6 = uVar4;
    }
    uVar2 = 0x646173;
    if (uVar1 != 4) {
      uVar2 = 0x796179;
    }
    if (uVar1 < 6) {
      uVar6 = 0xe300000000000000;
      uVar3 = (ulong)uVar2;
    }
  }
  FUN_1000134f8(uVar3,uVar6,param_1);
  _swift_bridgeObjectRelease(uVar6);
  return;
}



/* Entry: 1000147ec; end: 10001485f;  */

void FUN_1000147ec(undefined8 param_1,long param_2,undefined1 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x22;
  
  uVar4 = 0;
  __sScMMa();
  *(undefined8 *)(unaff_x22 + 0x10) = uVar4;
  __sScM6sharedScMvgZ();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar4;
  plVar5 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100014860;
  plVar5[0x16] = param_2;
  *(undefined1 *)((long)plVar5 + 0xda) = param_3;
  lVar2 = 0;
  __sScMMa();
  puVar1 = PTR___sScMMa_100024970;
  lVar3 = lVar2;
  __sScM6sharedScMvgZ();
  plVar5[0x17] = lVar3;
  lVar3 = 0x100028800;
  FUN_100016290(0x100028800,puVar1,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj();
  plVar5[0x18] = lVar2;
  plVar5[0x19] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(FUN_100012340,lVar2,lVar3);
  return;
}



/* Entry: 100014860; end: 1000148db;  */

void FUN_100014860(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x10);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x20));
  uVar1 = 0x100028800;
  FUN_100016290(0x100028800,PTR___sScMMa_100024970,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj(uVar2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(0x100016db0,uVar2,uVar1);
  return;
}



/* Entry: 1000148dc; end: 100014d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1000148dc(ulong param_1,undefined *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong *puVar9;
  long **pplVar10;
  undefined *puVar11;
  undefined8 uVar12;
  byte bVar13;
  long extraout_x8;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  long unaff_x20;
  undefined *puVar17;
  ulong uVar18;
  long alStack_d0 [2];
  ulong uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long *plStack_80;
  undefined *puStack_78;
  long *plStack_70;
  undefined *puStack_68;
  
  lVar5 = 0;
  __s10Foundation12CharacterSetVMa();
  lVar15 = *(long *)(lVar5 + -8);
  lVar6 = lVar5;
  (*(code *)PTR____chkstk_darwin_100024410)(*(undefined8 *)(lVar15 + 0x40));
  plVar8 = (long *)((long)alStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uStack_a8 = param_1;
  puStack_a0 = param_2;
  __s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ(plVar8);
  func_0x000100016ab4();
  plVar7 = plVar8;
  puVar11 = PTR___sSSN_1000247b8;
  __sSy10FoundationE18trimmingCharacters2inSSAA12CharacterSetV_tF(plVar8,PTR___sSSN_1000247b8,lVar6)
  ;
  (**(code **)(lVar15 + 8))(plVar8,lVar5);
  uVar16 = (ulong)plVar7 & 0xffffffffffff;
  if (((ulong)puVar11 & 0x2000000000000000) != 0) {
    uVar16 = (ulong)puVar11 >> 0x38 & 0xf;
  }
  if (uVar16 != 0) {
    alStack_d0[1] = uVar16;
    __s23ExtensionsStickerPicker7PillTagO09suggestedD4TagsSayACGvau();
    lVar5 = _DAT_100029320;
    lVar15 = *plVar8;
    uVar18 = *(ulong *)(lVar15 + 0x10);
    plStack_80 = plVar7;
    puStack_78 = puVar11;
    plStack_70 = plVar7;
    puStack_68 = puVar11;
    _swift_bridgeObjectRetain(lVar15);
    puVar14 = PTR___sSSN_1000247b8;
    uVar16 = 0;
    do {
      if (uVar18 == uVar16) {
        _swift_bridgeObjectRelease(puVar11);
        _swift_bridgeObjectRelease(lVar15);
        puVar11 = &UNK_10001f7f8;
        _swift_getKeyPath(&UNK_10001f7f8);
        puVar14 = &UNK_10001f820;
        _swift_getKeyPath(&UNK_10001f820);
        __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
                  (&uStack_a8,unaff_x20,puVar11,puVar14);
        _swift_release(puVar11);
        _swift_release(puVar14);
        bVar13 = 9;
        uVar16 = uStack_a8;
        puVar11 = puStack_a0;
        goto LAB_100014cc4;
      }
      if (*(ulong *)(lVar15 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100014d04);
        (*pcVar4)();
      }
      bVar13 = *(byte *)(lVar15 + uVar16 + 0x20);
      func_0x0001000162d0(unaff_x20 + lVar5,&uStack_a8);
      uVar3 = uStack_88;
      uVar12 = uStack_90;
      puVar9 = &uStack_a8;
      FUN_100016314(puVar9,uStack_90);
      __s23ExtensionsStickerPicker0bC16StringsProvidingPAAE5title3forSSAA7PillTagO_tF
                (bVar13,uVar12,uVar3,puVar9);
      pplVar10 = &plStack_70;
      __sSy10FoundationE22caseInsensitiveCompareySo18NSComparisonResultVqd__SyRd__lF
                (pplVar10,puVar14,puVar14,lVar6,lVar6);
      _swift_bridgeObjectRelease(uVar12);
      func_0x000100016340(&uStack_a8);
      if (pplVar10 == (long **)0x0) break;
      if (bVar13 < 4) {
        if (bVar13 < 2) {
          uStack_a8 = 0x544e454345522323;
          puVar17 = (undefined *)0xeb00000000232353;
          if (bVar13 != 0) {
            puVar17 = (undefined *)0xe200000000000000;
            uStack_a8 = 0x6968;
          }
        }
        else {
          puVar17 = (undefined *)0xe400000000000000;
          if (bVar13 == 2) {
            uStack_a8 = 0x65766f6c;
          }
          else {
            uStack_a8 = 0x61686168;
          }
        }
      }
      else if (bVar13 < 6) {
        puVar17 = (undefined *)0xe300000000000000;
        if (bVar13 == 4) {
          uStack_a8 = 0x646173;
        }
        else {
          uStack_a8 = 0x796179;
        }
      }
      else if (bVar13 == 6) {
        puVar17 = (undefined *)0xe300000000000000;
        uStack_a8 = 0x736579;
      }
      else if (bVar13 == 7) {
        puVar17 = (undefined *)0xe300000000000000;
        uStack_a8 = 0x776f77;
      }
      else {
        puVar17 = (undefined *)0xe500000000000000;
        uStack_a8 = 0x7972726f73;
      }
      pplVar10 = &plStack_80;
      puStack_a0 = puVar17;
      __sSy10FoundationE22caseInsensitiveCompareySo18NSComparisonResultVqd__SyRd__lF
                (pplVar10,puVar14,puVar14,lVar6,lVar6);
      _swift_bridgeObjectRelease(puVar17);
      uVar16 = uVar16 + 1;
    } while (pplVar10 != (long **)0x0);
    _swift_bridgeObjectRelease(puVar11);
    _swift_bridgeObjectRelease(lVar15);
    uVar18 = 0x776f77;
    if (bVar13 != 7) {
      uVar18 = 0x7972726f73;
    }
    puVar14 = (undefined *)0xe300000000000000;
    if (bVar13 != 7) {
      puVar14 = (undefined *)0xe500000000000000;
    }
    uVar16 = 0x736579;
    if (bVar13 != 6) {
      uVar16 = uVar18;
    }
    puVar11 = (undefined *)0xe300000000000000;
    if (bVar13 != 6) {
      puVar11 = puVar14;
    }
    uVar1 = 0x646173;
    if (bVar13 != 4) {
      uVar1 = 0x796179;
    }
    if (bVar13 < 6) {
      puVar11 = (undefined *)0xe300000000000000;
      uVar16 = (ulong)uVar1;
    }
    uVar1 = 0x65766f6c;
    if (bVar13 != 2) {
      uVar1 = 0x61686168;
    }
    uVar18 = 0x544e454345522323;
    if (bVar13 != 0) {
      uVar18 = 0x6968;
    }
    puVar14 = (undefined *)0xeb00000000232353;
    if (bVar13 != 0) {
      puVar14 = (undefined *)0xe200000000000000;
    }
    puVar17 = (undefined *)0xe400000000000000;
    uVar2 = (ulong)uVar1;
    if (bVar13 < 2) {
      puVar17 = puVar14;
      uVar2 = uVar18;
    }
    if (bVar13 < 4) {
      uVar16 = uVar2;
      puVar11 = puVar17;
    }
LAB_100014cc4:
    FUN_1000134f8(uVar16,puVar11,bVar13);
    uVar16 = alStack_d0[1];
  }
  _swift_bridgeObjectRelease(puVar11);
  return uVar16 != 0;
}



/* Entry: 100014d04; end: 100014ef3;  */

void FUN_100014d04(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_10001f5c8;
  _swift_getKeyPath(&UNK_10001f5c8);
  puVar2 = &UNK_10001f5f0;
  _swift_getKeyPath(&UNK_10001f5f0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_40);
  _swift_release(puVar1);
  _swift_release(puVar2);
  if ((char)uStack_40 == '\t') {
    puVar1 = &UNK_100024ce8;
    _swift_allocObject(&UNK_100024ce8,0x19,7);
    *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
    puVar1[0x18] = 1;
    _swift_retain();
    uVar3 = 1;
    __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
              (1,0,0x10,4,0,0,&UNK_10001f880,puVar1,PTR___sytN_100024838 + 8);
    _swift_release(puVar1);
    _swift_release(uVar3);
  }
  else {
    _swift_getKeyPath(&UNK_10001f7f8);
    _swift_getKeyPath(&UNK_10001f820);
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    _swift_retain();
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (&uStack_40);
  }
  return;
}



/* Entry: 100014ef4; end: 100014ef7;  */

void FUN_100014ef4(void)

{
  return;
}



/* Entry: 100014ef8; end: 10001511b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100014ef8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  
  lVar3 = _DAT_1000285f8;
  lVar2 = 0x100028840;
  FUN_100010b54(0x100028840,&UNK_10001f8d0);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar3,lVar2);
  lVar3 = _DAT_100028600;
  lVar2 = 0x100028848;
  FUN_100010b54(0x100028848,&UNK_10001f8d8);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar3,lVar2);
  lVar3 = _DAT_100028608;
  lVar2 = 0x100028850;
  FUN_100010b54(0x100028850,&UNK_10001f8e0);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar3,lVar2);
  lVar3 = _DAT_100028610;
  lVar2 = 0x100028858;
  FUN_100010b54(0x100028858,&UNK_10001f8e8);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar3,lVar2);
  lVar3 = _DAT_100028618;
  lVar2 = 0x100028860;
  FUN_100010b54(0x100028860,&UNK_10001f8f0);
  pcVar4 = *(code **)(*(long *)(lVar2 + -8) + 8);
  (*pcVar4)(unaff_x20 + lVar3,lVar2);
  (*pcVar4)(unaff_x20 + _DAT_100028620,lVar2);
  lVar1 = _DAT_100028628;
  lVar3 = 0x100028868;
  FUN_100010b54(0x100028868,&UNK_10001f8f8);
  (**(code **)(*(long *)(lVar3 + -8) + 8))(unaff_x20 + lVar1,lVar3);
  (*pcVar4)(unaff_x20 + _DAT_100028630,lVar2);
  lVar3 = _DAT_100028638;
  lVar2 = 0x100028870;
  FUN_100010b54(0x100028870,&UNK_10001f900);
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar3,lVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_100028640));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_100028648));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_100028650));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_100029318));
  func_0x000100016340(unaff_x20 + _DAT_100029320);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _DAT_100028658 + 8));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_100028660));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_100028668));
  return;
}



/* Entry: 10001511c; end: 10001513f;  */

void FUN_10001511c(void)

{
  FUN_100014ef8();
                    /* WARNING: Could not recover jumptable at 0x00010001ed6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_1000248a0)();
  return;
}



/* Entry: 100015140; end: 100015147;  */

void FUN_100015140(void)

{
  if (lRam0000000100028698 != 0) {
    return;
  }
  _swift_getSingletonMetadata(0,&DAT_10001ff78);
  return;
}



/* Entry: 100015148; end: 10001517f;  */

void FUN_100015148(undefined8 param_1)

{
  if (lRam0000000100028698 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&DAT_10001ff78);
  return;
}



/* Entry: 100015180; end: 10001544f;  */

void FUN_100015180(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  uVar3 = 0x1000286a8;
  lVar1 = 0x13f;
  func_0x0001000153d8(0x13f,0x1000286a8,0x1000286b0,&UNK_10001f4f8);
  if (uVar3 < 0x40) {
    lStack_a8 = *(long *)(lVar1 + -8) + 0x40;
    uVar3 = 0x1000286b8;
    lVar1 = 0x13f;
    func_0x000100015394(0x13f,0x1000286b8,PTR___s23ExtensionsStickerPicker0B5FeedsVN_100024568);
    if (uVar3 < 0x40) {
      lStack_a0 = *(long *)(lVar1 + -8) + 0x40;
      uVar3 = 0x1000286c0;
      lVar1 = 0x13f;
      func_0x000100015394(0x13f,0x1000286c0,PTR___s23ExtensionsStickerPicker10EntryStateON_100024598
                         );
      if (uVar3 < 0x40) {
        lStack_98 = *(long *)(lVar1 + -8) + 0x40;
        uVar3 = 0x1000286c8;
        lVar1 = 0x13f;
        func_0x0001000153d8(0x13f,0x1000286c8,0x1000286d0,&UNK_10001f500);
        if (uVar3 < 0x40) {
          lStack_90 = *(long *)(lVar1 + -8) + 0x40;
          uVar3 = 0x1000286d8;
          lVar1 = 0x13f;
          func_0x000100015394(0x13f,0x1000286d8,PTR___sSbN_1000247d8);
          if (uVar3 < 0x40) {
            lVar1 = *(long *)(lVar1 + -8) + 0x40;
            uVar3 = 0x1000286e0;
            lVar2 = 0x13f;
            lStack_88 = lVar1;
            lStack_80 = lVar1;
            func_0x000100015394(0x13f,0x1000286e0,PTR___sSSN_1000247b8);
            if (uVar3 < 0x40) {
              lStack_78 = *(long *)(lVar2 + -8) + 0x40;
              uVar3 = 0x1000286e8;
              lVar2 = 0x13f;
              lStack_70 = lVar1;
              func_0x0001000153d8(0x13f,0x1000286e8,0x1000286f0,&UNK_10001f508);
              if (uVar3 < 0x40) {
                lStack_68 = *(long *)(lVar2 + -8) + 0x40;
                puStack_60 = &UNK_10001f510;
                puStack_58 = &UNK_10001f510;
                puStack_50 = &UNK_10001f510;
                puStack_48 = &UNK_10001f510;
                puStack_40 = &UNK_10001f528;
                puStack_38 = &UNK_10001f540;
                puStack_30 = &UNK_10001f510;
                puStack_28 = &UNK_10001f510;
                _swift_updateClassMetadata2(param_1,0x100,0x11,&lStack_a8,param_1 + 0x50);
              }
            }
          }
        }
      }
    }
  }
  return;
}



/* Entry: 100015450; end: 100015477;  */

undefined1 FUN_100015450(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 uStack_31;
  
  puVar1 = &UNK_10001f7b0;
  puVar2 = &UNK_10001f7d8;
  _swift_getKeyPath(&UNK_10001f7b0);
  _swift_getKeyPath(&UNK_10001f7d8);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_31);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return uStack_31;
}



/* Entry: 100015478; end: 100015507;  */

undefined8 FUN_100015478(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = 0x38;
  if (PTR__swift_coroFrameAlloc_100024898 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x38,0x65a9);
  }
  *param_1 = lVar1;
  puVar2 = &UNK_10001f7b0;
  _swift_getKeyPath();
  *(undefined **)(lVar1 + 0x20) = puVar2;
  puVar2 = &UNK_10001f7d8;
  _swift_getKeyPath();
  *(undefined **)(lVar1 + 0x28) = puVar2;
  lVar3 = lVar1;
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluiMZ
            ();
  *(long *)(lVar1 + 0x30) = lVar3;
  return 0x100016db4;
}



/* Entry: 100015508; end: 10001557b;  */

void FUN_100015508(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_100028410;
  _objc_opt_self(PTR__OBJC_CLASS___NSNotificationCenter_100028410);
  func_0x00010001ef80();
  _objc_retainAutoreleasedReturnValue();
  if (lRam0000000100028828 != -1) {
    _swift_once(0x100028828,FUN_100015b98);
  }
  func_0x00010001f0c0(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001ec7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_100024790)(puVar1);
  return;
}



/* Entry: 10001557c; end: 1000155b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10001557c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long alStack_80 [2];
  undefined8 uStack_70;
  undefined1 uStack_62;
  undefined1 uStack_61;
  
  lVar2 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  lVar10 = *(long *)(lVar2 + -8);
  lVar2 = *(long *)(lVar10 + 0x40);
  (*(code *)PTR____chkstk_darwin_100024410)();
  lVar1 = -(lVar2 + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&uStack_70 + lVar1;
  lVar7 = *(long *)(unaff_x20 + _DAT_100028660);
  if (lVar7 != 0) {
    _swift_retain(lVar7);
    __s23ExtensionsStickerPicker22StickersGrapheneLoggerC03logB9WasPicked12isTapGestureySb_tF(1);
    _swift_release(lVar7);
  }
  lVar7 = *(long *)(unaff_x20 + _DAT_100028668);
  if (lVar7 != 0) {
    puVar3 = &UNK_10001f5c8;
    _swift_getKeyPath(&UNK_10001f5c8);
    puVar4 = &UNK_10001f5f0;
    uStack_70 = param_2;
    _swift_getKeyPath(&UNK_10001f5f0);
    _swift_retain(lVar7);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (&uStack_61);
    _swift_release(puVar3);
    _swift_release(puVar4);
    puVar3 = &UNK_10001f610;
    _swift_getKeyPath(&UNK_10001f610);
    puVar4 = &UNK_10001f638;
    _swift_getKeyPath(&UNK_10001f638);
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
              (&uStack_62);
    _swift_release(puVar3);
    _swift_release(puVar4);
    __s23ExtensionsStickerPicker28StickersBlizzardEventTrackerC016logExtensionSendF07sticker5index11selectedTag11isSearchingyAA0iB0V_SiAA04PillN0OSgSbtF
              (param_1,uStack_70,uStack_61,uStack_62);
    _swift_release(lVar7);
  }
  FUN_1000160b4(param_1,lVar8);
  uVar6 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar9 = uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff);
  lVar2 = uVar9 + lVar2;
  puVar3 = &UNK_100024c70;
  _swift_allocObject(&UNK_100024c70,lVar2 + 1,uVar6 | 7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  FUN_100016184(lVar8,puVar3 + uVar9);
  puVar3[lVar2] = 1;
  _swift_retain();
  *(undefined **)((long)alStack_80 + lVar1) = PTR___sytN_100024838 + 8;
  uVar5 = 1;
  __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
            (1,0,0x10,4,0,0,&UNK_10001f660,puVar3);
  _swift_release(puVar3);
  _swift_release(uVar5);
  return;
}



/* Entry: 1000155b4; end: 10001571b;  */

void FUN_1000155b4(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uStack_31;
  
  _swift_getKeyPath(param_4);
  _swift_getKeyPath(param_5);
  uStack_31 = param_1;
  _swift_retain();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_31);
  return;
}



/* Entry: 10001571c; end: 100015793;  */

void FUN_10001571c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _swift_getKeyPath(&UNK_10001f7f8);
  _swift_getKeyPath(&UNK_10001f820);
  uStack_50 = param_1;
  uStack_48 = param_2;
  _swift_retain();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_50);
  return;
}



/* Entry: 100015794; end: 100015823;  */

code * FUN_100015794(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar1 = 0x38;
  if (PTR__swift_coroFrameAlloc_100024898 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x38,0x8c19);
  }
  *param_1 = lVar1;
  puVar2 = &UNK_10001f7f8;
  _swift_getKeyPath();
  *(undefined **)(lVar1 + 0x20) = puVar2;
  puVar2 = &UNK_10001f820;
  _swift_getKeyPath();
  *(undefined **)(lVar1 + 0x28) = puVar2;
  lVar3 = lVar1;
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluiMZ
            ();
  *(long *)(lVar1 + 0x30) = lVar3;
  return FUN_100015824;
}



/* Entry: 100015824; end: 100015827;  */

void FUN_100015824(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  (**(code **)(lVar2 + 0x30))(lVar2,0);
  _swift_release(uVar1);
  _swift_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010001ec1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_100024460)(lVar2);
  return;
}



/* Entry: 100015828; end: 1000159c3;  */

void FUN_100015828(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *param_1;
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  uVar3 = *(undefined8 *)(lVar2 + 0x20);
  (**(code **)(lVar2 + 0x30))(lVar2,0);
  _swift_release(uVar1);
  _swift_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010001ec1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_100024460)(lVar2);
  return;
}



/* Entry: 1000159c4; end: 1000159fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000159c4(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010001ee38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_100024928)(*(undefined8 *)(unaff_x20 + _DAT_100029318));
  return;
}



/* Entry: 1000159fc; end: 100015a67;  */

undefined1
FUN_1000159fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uStack_31;
  
  _swift_getKeyPath(param_3);
  _swift_getKeyPath(param_4);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_31);
  _swift_release(param_3);
  _swift_release(param_4);
  return uStack_31;
}



/* Entry: 100015a68; end: 100015a6b;  */

void FUN_100015a68(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &UNK_10001f5c8;
  _swift_getKeyPath(&UNK_10001f5c8);
  puVar2 = &UNK_10001f5f0;
  _swift_getKeyPath(&UNK_10001f5f0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (&uStack_40);
  _swift_release(puVar1);
  _swift_release(puVar2);
  if ((char)uStack_40 == '\t') {
    puVar1 = &UNK_100024ce8;
    _swift_allocObject(&UNK_100024ce8,0x19,7);
    *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
    puVar1[0x18] = 1;
    _swift_retain();
    uVar3 = 1;
    __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
              (1,0,0x10,4,0,0,&UNK_10001f880,puVar1,PTR___sytN_100024838 + 8);
    _swift_release(puVar1);
    _swift_release(uVar3);
  }
  else {
    _swift_getKeyPath(&UNK_10001f7f8);
    _swift_getKeyPath(&UNK_10001f820);
    uStack_40 = 0;
    uStack_38 = 0xe000000000000000;
    _swift_retain();
    __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
              (&uStack_40);
  }
  return;
}



/* Entry: 100015a6c; end: 100015b07;  */

void FUN_100015a6c(undefined1 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  puVar1 = &UNK_100024cc0;
  _swift_allocObject(&UNK_100024cc0,0x19,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  puVar1[0x18] = param_1;
  _swift_retain();
  uVar2 = 1;
  __s15SnapConcurrency12AttachedTask_8priority19asyncSpanNameSuffix9operationScTyxs5NeverOG0A11Attribution010AttributedD0O_AA0aD8PriorityOSgSSSgxyYaYbcts8SendableRzlF
            (1,0,0x10,4,0,0,&UNK_10001f860,puVar1,PTR___sytN_100024838 + 8);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001ee2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024920)(uVar2);
  return;
}



/* Entry: 100015b08; end: 100015b13;  */

void FUN_100015b08(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _swift_getKeyPath(&UNK_10001f7f8);
  _swift_getKeyPath(&UNK_10001f820);
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  _swift_retain();
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_40);
  uVar1 = (uint)param_1 & 0xff;
  if (uVar1 < 4) {
    uVar4 = 0xeb00000000232353;
    uVar5 = 0x544e454345522323;
    uVar2 = 0x65766f6c;
    if (uVar1 != 2) {
      uVar2 = 0x61686168;
    }
    if ((param_1 & 0xff) != 0) {
      uVar5 = 0x6968;
      uVar4 = 0xe200000000000000;
    }
    uVar3 = (ulong)uVar2;
    if (uVar1 == 1 || (param_1 & 0xff) == 0) {
      uVar3 = uVar5;
    }
    uVar6 = 0xe400000000000000;
    if (uVar1 == 1 || (param_1 & 0xff) == 0) {
      uVar6 = uVar4;
    }
  }
  else {
    uVar5 = 0x776f77;
    if (uVar1 != 7) {
      uVar5 = 0x7972726f73;
    }
    uVar4 = 0xe300000000000000;
    if (uVar1 != 7) {
      uVar4 = 0xe500000000000000;
    }
    uVar3 = 0x736579;
    if (uVar1 != 6) {
      uVar3 = uVar5;
    }
    uVar6 = 0xe300000000000000;
    if (uVar1 != 6) {
      uVar6 = uVar4;
    }
    uVar2 = 0x646173;
    if (uVar1 != 4) {
      uVar2 = 0x796179;
    }
    if (uVar1 < 6) {
      uVar6 = 0xe300000000000000;
      uVar3 = (ulong)uVar2;
    }
  }
  FUN_1000134f8(uVar3,uVar6,param_1);
  _swift_bridgeObjectRelease(uVar6);
  return;
}



/* Entry: 100015b14; end: 100015b8b;  */

void FUN_100015b14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x1000287f0;
  FUN_100016290(0x1000287f0,FUN_100015148,&UNK_10001f590);
  *(undefined8 *)(param_1 + 8) = uVar1;
  return;
}



/* Entry: 100015b8c; end: 100015b97;  */

undefined * FUN_100015b8c(void)

{
  return PTR___s7Combine25ObservableObjectPublisherCAA0D0AAWP_1000243d0;
}



/* Entry: 100015b98; end: 100015bcb;  */

void FUN_100015b98(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000011;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000011,0x8000000100021e00);
  uRam0000000100029328 = uVar1;
  return;
}



/* Entry: 100015bcc; end: 100015d0b;  */

void FUN_100015bcc(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10001f888;
  _swift_getKeyPath(&UNK_10001f888);
  puVar2 = &UNK_10001f8b0;
  _swift_getKeyPath(&UNK_10001f8b0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001ee2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024920)(puVar2);
  return;
}



/* Entry: 100015d0c; end: 100015d8b;  */

void FUN_100015d0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  puVar3 = &UNK_10001f688;
  _swift_getKeyPath(&UNK_10001f688);
  puVar4 = &UNK_10001f6b0;
  _swift_getKeyPath(&UNK_10001f6b0);
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar5);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_50,uVar5,puVar3,puVar4);
  return;
}



/* Entry: 100015d8c; end: 100015df3;  */

void FUN_100015d8c(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10001f6d0;
  _swift_getKeyPath(&UNK_10001f6d0);
  puVar2 = &UNK_10001f6f8;
  _swift_getKeyPath(&UNK_10001f6f8);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001ee2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024920)(puVar2);
  return;
}



/* Entry: 100015df4; end: 100015eab;  */

void FUN_100015df4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  uVar4 = param_1[3];
  uVar7 = param_1[4];
  uVar8 = *param_2;
  puVar5 = &UNK_10001f6d0;
  _swift_getKeyPath(&UNK_10001f6d0);
  puVar6 = &UNK_10001f6f8;
  _swift_getKeyPath(&UNK_10001f6f8);
  uStack_78 = uVar1;
  uStack_70 = uVar3;
  uStack_68 = uVar2;
  uStack_60 = uVar4;
  uStack_58 = uVar7;
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar7);
  _swift_retain(uVar8);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_78,uVar8,puVar5,puVar6);
  return;
}



/* Entry: 100015eac; end: 100015ff3;  */

void FUN_100015eac(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10001f718;
  _swift_getKeyPath(&UNK_10001f718);
  puVar2 = &UNK_10001f740;
  _swift_getKeyPath(&UNK_10001f740);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001ee2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024920)(puVar2);
  return;
}



/* Entry: 100015ff4; end: 100015ff7;  */

void FUN_100015ff4(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  puVar1 = &UNK_10001f5c8;
  _swift_getKeyPath(&UNK_10001f5c8);
  puVar2 = &UNK_10001f5f0;
  _swift_getKeyPath(&UNK_10001f5f0);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluigZ
            (param_1,uVar3,puVar1,puVar2);
  _swift_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010001ee2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_100024920)(puVar2);
  return;
}



/* Entry: 100015ff8; end: 100016067;  */

void FUN_100015ff8(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 uStack_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  puVar2 = &UNK_10001f5c8;
  _swift_getKeyPath(&UNK_10001f5c8);
  puVar3 = &UNK_10001f5f0;
  _swift_getKeyPath(&UNK_10001f5f0);
  uStack_31 = uVar1;
  _swift_retain(uVar4);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_31,uVar4,puVar2,puVar3);
  return;
}



/* Entry: 100016068; end: 10001606b;  */

void FUN_100016068(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 uStack_31;
  
  uVar1 = *param_1;
  uVar4 = *param_2;
  puVar2 = &UNK_10001f5c8;
  _swift_getKeyPath(&UNK_10001f5c8);
  puVar3 = &UNK_10001f5f0;
  _swift_getKeyPath(&UNK_10001f5f0);
  uStack_31 = uVar1;
  _swift_retain(uVar4);
  __s7Combine9PublishedV18_enclosingInstance7wrapped7storagexqd___s24ReferenceWritableKeyPathCyqd__xGAHyqd__ACyxGGtcRld__CluisZ
            (&uStack_31,uVar4,puVar2,puVar3);
  return;
}



/* Entry: 10001606c; end: 1000160b3;  */

void FUN_10001606c(void)

{
  FUN_100016368();
  return;
}



/* Entry: 1000160b4; end: 1000160f7;  */

undefined8 FUN_1000160b4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1000160f8; end: 100016183;  */

void FUN_1000160f8(void)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar3 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  lVar1 = unaff_x20 + (uVar4 + 0x18 & (uVar4 ^ 0xffffffffffffffff));
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 8));
  iVar2 = *(int *)(lVar3 + 0x1c);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar1 + iVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010001ed78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_1000248a8)();
  return;
}



/* Entry: 100016184; end: 1000161c7;  */

undefined8 FUN_100016184(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1000161c8; end: 100016253;  */

void FUN_1000161c8(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x22;
  
  lVar4 = 0;
  __s23ExtensionsStickerPicker09ExtensionB0VMa();
  uVar6 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  lVar3 = unaff_x20 + (uVar6 + 0x18 & (uVar6 ^ 0xffffffffffffffff));
  uVar1 = *(undefined1 *)(lVar3 + *(long *)(*(long *)(lVar4 + -8) + 0x40));
  plVar5 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100016254;
  *(undefined1 *)(plVar5 + 8) = uVar1;
  plVar5[2] = lVar7;
  plVar5[3] = lVar3;
  lVar4 = 0;
  __sScMMa();
  puVar2 = PTR___sScMMa_100024970;
  lVar3 = lVar4;
  __sScM6sharedScMvgZ();
  plVar5[4] = lVar3;
  lVar3 = 0x100028800;
  FUN_100016290(0x100028800,puVar2,PTR___sScMScAsMc_100024978);
  __sScA15unownedExecutorScevgTj();
  plVar5[5] = lVar4;
  plVar5[6] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010001ee74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_1000249a0)(FUN_1000145b0,lVar4,lVar3);
  return;
}



/* Entry: 100016254; end: 10001628f;  */

void FUN_100016254(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010001628c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 100016290; end: 100016313;  */

void FUN_100016290(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}


