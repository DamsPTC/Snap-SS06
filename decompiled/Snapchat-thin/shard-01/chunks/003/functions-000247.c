/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100f40f68; end: 100f410cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f40f68(void)

{
  code *pcVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_viewDidLoad_112684cd8);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c48c2c();
  func_0x000107c5317c();
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c3d6fc();
    func_0x000107c61170(lVar3);
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d4cf40);
    lVar3 = 0x112d360b0;
    FUN_100f41b98(0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20,0x112d36e80,&UNK_10d904c70);
    func_0x000107c613fc();
    *(undefined8 *)(lVar3 + 0x18) = 3;
    *(undefined8 *)(lVar3 + 0x10) = 1;
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d4cf48);
    *(undefined8 *)(lVar3 + 0x20) = uVar6;
    uVar4 = 0;
    FUN_100f41c18(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c61174(uVar6);
    lVar5 = lVar3;
    func_0x000107c5fc48(lVar3,uVar4);
    func_0x000107c61574(lVar3);
    func_0x000107c497d0(uVar7);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(lVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f410d0);
  (*pcVar1)();
}



/* Entry: 100f410d0; end: 100f4118b; -[_TtC39SCBillboardRevShareOptInTakeoverFeature35RevShareOptInTakeoverViewController viewDidLoad] */

void FUN_100f410d0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f40f68();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f4118c; end: 100f411bb; -[_TtC39SCBillboardRevShareOptInTakeoverFeature35RevShareOptInTakeoverViewController viewDidAppear:] */

void FUN_100f4118c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174();
  func_0x000100f410f8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f411bc; end: 100f41337;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f411bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  ulong unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  func_0x000107c438d4(*(undefined8 *)(unaff_x20 + _DAT_112d4cf48));
  uVar1 = unaff_x20;
  uVar6 = param_1;
  uVar7 = param_2;
  func_0x000107c5de64();
  func_0x000107c61180();
  func_0x000107c4b8b8(param_5);
  func_0x000107c61170();
  func_0x000107c609a4(param_1,param_2,param_3,param_4,uVar6,uVar7);
  if ((uVar1 & 1) == 0) {
    lVar2 = unaff_x20 + _DAT_112d4cf38;
    func_0x000107c61618();
    if (lVar2 != 0) {
      pcVar3 = "handleTakeoverOutsideTapped()";
      func_0x0001000c10c0("handleTakeoverOutsideTapped()");
      func_0x000107c61180();
      puVar4 = &UNK_11036be48;
      func_0x000107c613fc(&UNK_11036be48,0x18,7);
      *(long *)(puVar4 + 0x10) = lVar2;
      uStack_70 = 0x100f41b68;
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0x42000000;
      puStack_80 = &UNK_1000f6b44;
      puStack_78 = &UNK_11036be60;
      puStack_68 = puVar4;
      func_0x000107c60bc4(&puStack_90);
      puVar4 = puStack_68;
      func_0x000107c61174(lVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c4e590(pcVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar2);
      func_0x000107c615e8(pcVar3);
    }
  }
  return;
}



/* Entry: 100f41338; end: 100f41387; -[_TtC39SCBillboardRevShareOptInTakeoverFeature35RevShareOptInTakeoverViewController onOutsideTapped:] */

/* WARNING: Possible PIC construction at 0x000100f41370: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f41374) */

void FUN_100f41338(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100f411bc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100f41388; end: 100f415f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41388(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    lVar2 = param_1 + _DAT_112d4cf38;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      func_0x0001000c10c0(param_2);
      func_0x000107c61180();
      func_0x000107c613fc(param_3,0x18,7);
      *(long *)(param_3 + 0x10) = lVar2;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      ppuVar3 = &puStack_88;
      uStack_70 = param_5;
      uStack_68 = param_4;
      lStack_60 = param_3;
      func_0x000107c60bc4(ppuVar3);
      lVar1 = lStack_60;
      func_0x000107c61174(lVar2);
      func_0x000107c61574(lVar1);
      func_0x000107c4e590(param_2);
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(param_1);
      func_0x000107c615e8(param_2);
    }
  }
  return;
}



/* Entry: 100f415f8; end: 100f41657; -[_TtC39SCBillboardRevShareOptInTakeoverFeature35RevShareOptInTakeoverViewController initWithNibName:bundle:] */

void FUN_100f415f8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCBillboardRevShareOptInTakeoverFeature.RevShareOptInTakeoverViewController",
                      0x4b,"init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f41624);
  (*pcVar1)();
}



/* Entry: 100f41658; end: 100f41703; -[_TtC39SCBillboardRevShareOptInTakeoverFeature35RevShareOptInTakeoverViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100f41674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f416c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f416e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f416cc) */
/* WARNING: Removing unreachable block (ram,0x000100f41678) */
/* WARNING: Removing unreachable block (ram,0x000100f416ec) */
/* WARNING: Removing unreachable block (ram,0x000100f41a34) */
/* WARNING: Removing unreachable block (ram,0x000100f41a40) */
/* WARNING: Removing unreachable block (ram,0x000100f41a3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41658(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4cf20));
  return;
}



/* Entry: 100f41704; end: 100f41723;  */

void FUN_100f41704(void)

{
  func_0x000107c61168(&PTR_PTR_1127a3498);
  return;
}



/* Entry: 100f41724; end: 100f4172b; -[_TtC39SCBillboardRevShareOptInTakeoverFeature35RevShareOptInTakeoverViewController pageViewName] */

undefined8 FUN_100f41724(void)

{
  return 0x8a;
}



/* Entry: 100f4172c; end: 100f4172f; -[_TtC39SCBillboardRevShareOptInTakeoverFeature35RevShareOptInTakeoverViewController cardToExpandTransition] */

void FUN_100f4172c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 100f41730; end: 100f4173b; -[_TtC39SCBillboardRevShareOptInTakeoverFeature35RevShareOptInTakeoverViewController cardTransitionWillBeginWithView:] */

void FUN_100f41730(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf84b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_dismissViewControllerAnimated_co_1125bec68,1,0);
  return;
}



/* Entry: 100f4173c; end: 100f41807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100f4173c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = 0;
  FUN_100f41c18(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c60118(param_3,*(undefined8 *)(unaff_x20 + _DAT_112d4cf48),uVar1);
  if (((param_3 & 1) != 0) && (FUN_100f3ff88(), param_3 != 0)) {
    uVar2 = param_3;
    func_0x000107c3f42c(param_1,param_2);
    if ((int)uVar2 != 0) {
      func_0x000107c61170(param_3);
      return 0;
    }
    uVar2 = param_3;
    func_0x000107c3f42c(param_1,param_2);
    func_0x000107c61170(param_3);
    if ((uVar2 & 1) != 0) {
      return 0;
    }
  }
  return 1;
}



/* Entry: 100f41808; end: 100f4187b; -[_TtC39SCBillboardRevShareOptInTakeoverFeature35RevShareOptInTakeoverViewController cardTransitionShouldBeginWithView:touchLocation:] */

uint FUN_100f41808(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_3);
  uVar1 = param_5;
  FUN_100f4173c(param_1,param_2,param_5);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (uint)uVar1 & 1;
}



/* Entry: 100f4187c; end: 100f419b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4187c(ulong param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  uVar1 = 0;
  FUN_100f41c18(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  func_0x000107c60118(param_1,*(undefined8 *)(unaff_x20 + _DAT_112d4cf48),uVar1);
  if (((param_1 & 1) != 0) && (param_2 == 1)) {
    lVar2 = unaff_x20 + _DAT_112d4cf38;
    func_0x000107c61618();
    if (lVar2 != 0) {
      pcVar3 = "handleTakeoverDismissed()";
      func_0x0001000c10c0("handleTakeoverDismissed()");
      func_0x000107c61180();
      puVar4 = &UNK_11036bb78;
      func_0x000107c613fc(&UNK_11036bb78,0x18,7);
      *(long *)(puVar4 + 0x10) = lVar2;
      pcStack_40 = FUN_100f41a10;
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0x42000000;
      puStack_50 = &UNK_1000f6b44;
      puStack_48 = &UNK_11036bb90;
      puStack_38 = puVar4;
      func_0x000107c60bc4(&puStack_60);
      puVar4 = puStack_38;
      func_0x000107c61174(lVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c4e590(pcVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar2);
      func_0x000107c615e8(pcVar3);
    }
  }
  return;
}



/* Entry: 100f419b8; end: 100f41a0f; -[_TtC39SCBillboardRevShareOptInTakeoverFeature35RevShareOptInTakeoverViewController cardTransitionEndedWithView:transitionType:] */

/* WARNING: Possible PIC construction at 0x000100f419f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f419fc) */

void FUN_100f419b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_100f4187c(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100f41a10; end: 100f41a53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41a10(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c41864(*(undefined8 *)(lVar1 + _DAT_112d4ce10),FUN_100f3f354,0);
  lVar1 = lVar1 + _DAT_112d4ce38;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_100f3f354();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 100f41a54; end: 100f41b33;  */

void FUN_100f41a54(void)

{
  FUN_100f41388();
  return;
}



/* Entry: 100f41b34; end: 100f41b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41b34(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar2 = lVar1 + _DAT_112d4cf38;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61170(lVar1);
    }
    else {
      pcVar3 = "handleOpenUrl(_:)";
      func_0x0001000c10c0("handleOpenUrl(_:)");
      func_0x000107c61180();
      puVar4 = &UNK_11036bcb8;
      func_0x000107c613fc(&UNK_11036bcb8,0x28,7);
      *(long *)(puVar4 + 0x10) = lVar2;
      *(undefined8 *)(puVar4 + 0x18) = param_1;
      *(undefined8 *)(puVar4 + 0x20) = param_2;
      uStack_68 = 0x100f41b3c;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_11036bcd0;
      ppuVar5 = &puStack_88;
      puStack_60 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      puVar4 = puStack_60;
      func_0x000107c615f0(lVar2);
      func_0x000107c61434(param_2);
      func_0x000107c61574(puVar4);
      func_0x000107c4e590(pcVar3);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar1);
      func_0x000107c615e8(pcVar3);
    }
  }
  return;
}



/* Entry: 100f41b98; end: 100f41c0f;  */

void FUN_100f41b98(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100f41c18(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100f41c10; end: 100f41c17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41c10(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c41864(*(undefined8 *)(lVar1 + _DAT_112d4ce10),FUN_100f3f494,0);
  lVar1 = lVar1 + _DAT_112d4ce38;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_100f3f494();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
    return;
  }
  return;
}



/* Entry: 100f41c18; end: 100f41c7b;  */

void FUN_100f41c18(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 100f41c7c; end: 100f41cdb;  */

void FUN_100f41c7c(long param_1,long param_2)

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



/* Entry: 100f41cdc; end: 100f41ce7; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41cdc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cfb0;
  func_0x000107c61428(param_1 + _DAT_112d4cfb0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f41ce8; end: 100f41cf3; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cfb0;
  func_0x000107c61428(param_1 + _DAT_112d4cfb0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f41cf4; end: 100f41cff; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41cf4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cfb8;
  func_0x000107c61428(param_1 + _DAT_112d4cfb8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f41d00; end: 100f41d0b; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41d00(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cfb8;
  func_0x000107c61428(param_1 + _DAT_112d4cfb8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f41d0c; end: 100f41d17; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint billboardCampaignServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41d0c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cfc0;
  func_0x000107c61428(param_1 + _DAT_112d4cfc0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f41d18; end: 100f41d23; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint setBillboardCampaignServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cfc0;
  func_0x000107c61428(param_1 + _DAT_112d4cfc0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f41d24; end: 100f41d2f; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint composerNetworkingBridgeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41d24(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cfc8;
  func_0x000107c61428(param_1 + _DAT_112d4cfc8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f41d30; end: 100f41d3b; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint setComposerNetworkingBridgeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41d30(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cfc8;
  func_0x000107c61428(param_1 + _DAT_112d4cfc8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f41d3c; end: 100f41d47; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint snapProServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41d3c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cfd0;
  func_0x000107c61428(param_1 + _DAT_112d4cfd0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f41d48; end: 100f41d53; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint setSnapProServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41d48(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cfd0;
  func_0x000107c61428(param_1 + _DAT_112d4cfd0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f41d54; end: 100f41d5f; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint navigationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41d54(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cfd8;
  func_0x000107c61428(param_1 + _DAT_112d4cfd8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f41d60; end: 100f41d6b; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint setNavigationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41d60(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cfd8;
  func_0x000107c61428(param_1 + _DAT_112d4cfd8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f41d6c; end: 100f41d77; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint billboardActionHandlerPluginSaberService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41d6c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cfe0;
  func_0x000107c61428(param_1 + _DAT_112d4cfe0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f41d78; end: 100f41dbb;  */

void FUN_100f41d78(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f41dbc; end: 100f41dc7; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint setBillboardActionHandlerPluginSaberService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41dbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cfe0;
  func_0x000107c61428(param_1 + _DAT_112d4cfe0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f41dc8; end: 100f41e1b;  */

void FUN_100f41dc8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f41e1c; end: 100f41e63; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint webBrowsingScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41e1c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cfe8;
  func_0x000107c61428(param_1 + _DAT_112d4cfe8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100f41e64; end: 100f41e6f; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint setWebBrowsingScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41e64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cfe8;
  func_0x000107c61428(param_1 + _DAT_112d4cfe8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100f41e70; end: 100f41eb7; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint billboardActionHandlerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41e70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4cff0;
  func_0x000107c61428(param_1 + _DAT_112d4cff0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 100f41eb8; end: 100f41ec3; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint setBillboardActionHandlerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4cff0;
  func_0x000107c61428(param_1 + _DAT_112d4cff0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 100f41ec4; end: 100f41f23;  */

void FUN_100f41ec4(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 100f41f24; end: 100f42433;  */

/* WARNING: Possible PIC construction at 0x000100f420a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4235c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4236c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f4237c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f423a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f423b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f423c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f423d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f423e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f423f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f42158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f42168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f42178: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f42128: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f42138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f42148: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f42108: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f42118: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f420e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f420c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100f420b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f420cc) */
/* WARNING: Removing unreachable block (ram,0x000100f420ec) */
/* WARNING: Removing unreachable block (ram,0x000100f4211c) */
/* WARNING: Removing unreachable block (ram,0x000100f4210c) */
/* WARNING: Removing unreachable block (ram,0x000100f4214c) */
/* WARNING: Removing unreachable block (ram,0x000100f4213c) */
/* WARNING: Removing unreachable block (ram,0x000100f4212c) */
/* WARNING: Removing unreachable block (ram,0x000100f4217c) */
/* WARNING: Removing unreachable block (ram,0x000100f4216c) */
/* WARNING: Removing unreachable block (ram,0x000100f4215c) */
/* WARNING: Removing unreachable block (ram,0x000100f423fc) */
/* WARNING: Removing unreachable block (ram,0x000100f423ec) */
/* WARNING: Removing unreachable block (ram,0x000100f423dc) */
/* WARNING: Removing unreachable block (ram,0x000100f423cc) */
/* WARNING: Removing unreachable block (ram,0x000100f423bc) */
/* WARNING: Removing unreachable block (ram,0x000100f423ac) */
/* WARNING: Removing unreachable block (ram,0x000100f42380) */
/* WARNING: Removing unreachable block (ram,0x000100f42370) */
/* WARNING: Removing unreachable block (ram,0x000100f42360) */
/* WARNING: Removing unreachable block (ram,0x000100f420a8) */
/* WARNING: Removing unreachable block (ram,0x000100f420bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f41f24(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = unaff_x20;
  func_0x000107c40014();
  func_0x000107c61180();
  if (lVar4 != 0) {
    lVar5 = unaff_x20;
    func_0x000107c3e8cc();
    func_0x000107c61180();
    if (lVar5 != 0) {
      lVar6 = unaff_x20;
      func_0x000107c3ffd0();
      func_0x000107c61180();
      if (lVar6 != 0) {
        lVar7 = unaff_x20;
        func_0x000107c5b398();
        func_0x000107c61180();
        if (lVar7 == 0) {
          func_0x000107c61170(lVar3);
          lVar3 = lVar4;
        }
        else {
          lVar8 = unaff_x20;
          func_0x000107c5e1d0();
          func_0x000107c61180();
          if (lVar8 == 0) {
            func_0x000107c61170(lVar3);
            lVar3 = lVar4;
          }
          else {
            lVar11 = unaff_x20;
            func_0x000107c3e8bc();
            func_0x000107c61180();
            if (lVar11 != 0) {
              lVar9 = unaff_x20;
              func_0x000107c3e8c0();
              func_0x000107c61180();
              if (lVar9 != 0) {
                func_0x000107c4d52c();
                func_0x000107c61180();
                FUN_100f3d068();
                func_0x000107c613fc();
                func_0x000107c5dbd4();
                func_0x000107c61180();
                func_0x000107c43b5c();
                func_0x000107c61180();
                func_0x000107c4d604();
                func_0x000107c61180();
                func_0x000107c4f3e4();
                func_0x000107c61180();
                if (unaff_x20 == 0) {
                  puVar10 = &UNK_11036bee8;
                  func_0x000107c613fc(&UNK_11036bee8,0x18,7);
                  *(long *)(puVar10 + 0x10) = lVar11;
                  lVar11 = 0;
                  FUN_100f3ee7c();
                  lVar3 = lVar11;
                  func_0x000107c610f8();
                  *(undefined **)(lVar3 + _DAT_112d4ceb0) = PTR___swiftEmptyArrayStorage_11034f1c8;
                  *(undefined8 *)(lVar3 + _DAT_112d4ceb8) = 0;
                  *(undefined8 *)(lVar3 + _DAT_112d4cec0) = 0;
                  puVar1 = (undefined8 *)(lVar3 + _DAT_112d4cec8);
                  *puVar1 = 0;
                  puVar1[1] = 0;
                  *(undefined8 *)(lVar3 + _DAT_112d4ced0) = 0;
                  *(undefined1 *)(lVar3 + _DAT_112d4ced8) = 0;
                  *(undefined **)(lVar3 + _DAT_112d4cee0) =
                       PTR___swiftEmptyDictionarySingleton_11034f1d0;
                  *(long *)(lVar3 + _DAT_112d4ce70) = lVar4;
                  *(long *)(lVar3 + _DAT_112d4ce78) = lVar5;
                  *(long *)(lVar3 + _DAT_112d4ce80) = lVar6;
                  *(long *)(lVar3 + _DAT_112d4ce88) = lVar7;
                  *(undefined8 *)(lVar3 + _DAT_112d4ce90) = 0;
                  *(long *)(lVar3 + _DAT_112d4cea0) = lVar9;
                  puVar1 = (undefined8 *)(lVar3 + _DAT_112d4cea8);
                  *puVar1 = FUN_100f42434;
                  puVar1[1] = puVar10;
                  *(long *)(lVar3 + _DAT_112d4ce98) = lVar8;
                  puVar2 = PTR_s_init_1125d9248;
                  lStack_70 = lVar3;
                  lStack_68 = lVar11;
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174();
                  func_0x000107c61174(lVar7);
                  func_0x000107c61174(0);
                  func_0x000107c6157c(puVar10);
                  func_0x000107c61154(&lStack_70,puVar2);
                  FUN_100f3dccc();
                  lVar3 = lVar4;
                }
                else {
                  func_0x000107c61174();
                  func_0x000104513428();
                  lVar3 = unaff_x20;
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 100f42434; end: 100f4243b;  */

void FUN_100f42434(void)

{
  long unaff_x20;
  
  func_0x000102429cd0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 100f4243c; end: 100f42463; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint begin] */

void FUN_100f4243c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_100f41f24();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f42464; end: 100f424a7; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint end] */

void FUN_100f42464(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f424a8; end: 100f4292f;  */

void FUN_100f424a8(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0xd000000000000019;
        if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10eeea0)) ||
           (func_0x000107c605b8(0xd000000000000019,0x800000010ef11160,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c52c50();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe0) && (param_3 == -0x7ffffffef10e6390)) ||
             (func_0x000107c605b8(0xd000000000000020,0x800000010ef19c70,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c536a8();
          }
          else {
            uVar2 = 0x536f725070616e73;
            if (((param_2 == 0x536f725070616e73) && (param_3 == -0x108c9a9c96898d9b)) ||
               (func_0x000107c605b8(0x536f725070616e73,0xef73656369767265,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c5943c();
            }
            else {
              uVar2 = 0;
              if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10edf60)) ||
                 (func_0x000107c605b8(0xd000000000000012,0x800000010ef120a0,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c569f0();
              }
              else {
                uVar2 = 0;
                if (((param_2 == -0x2fffffffffffffd8) && (param_3 == -0x7ffffffef10e47a0)) ||
                   (func_0x000107c605b8(0xd000000000000028,0x800000010ef1b860,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c52c48();
                }
                else {
                  uVar2 = 0xd000000000000017;
                  if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10ed990)) ||
                     (func_0x000107c605b8(0xd000000000000017,0x800000010ef12670,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c5a68c();
                  }
                  else {
                    uVar2 = 0;
                    if (((param_2 != -0x2fffffffffffffde) || (param_3 != -0x7ffffffef10e4770)) &&
                       (func_0x000107c605b8(0xd000000000000022,0x800000010ef1b890,param_2,param_3,0)
                       , (uVar2 & 1) == 0)) {
                      func_0x000107c602fc(0x15);
                      func_0x000107c6142c(0xe000000000000000);
                      func_0x000107c5fb78(param_2,param_3);
                      func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                          "SCBillboardRevShareOptInTakeoverFeature/SCBillboardRevShareOptInTakeoverFeatureEntryPoint.swift"
                                          ,0x5f,2,0x4a,0);
                    /* WARNING: Does not return */
                      pcVar1 = (code *)SoftwareBreakpoint(1,0x100f42930);
                      (*pcVar1)();
                    }
                    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c52c4c();
                  }
                }
              }
            }
          }
        }
        goto LAB_100f42534;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c536e0();
  }
LAB_100f42534:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 100f42930; end: 100f429db; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint setValue:forIvarName:] */

void FUN_100f42930(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_50 [32];
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c60234(auStack_50,param_3);
  func_0x000107c615e8(param_3);
  uVar1 = param_4;
  func_0x000107c5faec(param_4);
  func_0x000107c61170(param_4);
  FUN_100f424a8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 100f429dc; end: 100f42acb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f429dc(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d4cfb0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cfb8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cfc0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cfc8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cfd0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cfd8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d4cfe0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d4cfe8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4cff0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d4cff8) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100f42acc; end: 100f42aeb; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint init] */

void FUN_100f42acc(void)

{
  FUN_100f429dc();
  return;
}



/* Entry: 100f42aec; end: 100f42b1f;  */

void FUN_100f42aec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f42b20; end: 100f42bd7; -[SCBillboardRevShareOptInTakeoverFeatureEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f42b20(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d4cfb0);
  func_0x000107c61610(param_1 + _DAT_112d4cfb8);
  func_0x000107c61610(param_1 + _DAT_112d4cfc0);
  func_0x000107c61610(param_1 + _DAT_112d4cfc8);
  func_0x000107c61610(param_1 + _DAT_112d4cfd0);
  func_0x000107c61610(param_1 + _DAT_112d4cfd8);
  func_0x000107c61610(param_1 + _DAT_112d4cfe0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4cfe8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d4cff0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d4cff8));
  return;
}



/* Entry: 100f42bd8; end: 100f42bf7;  */

void FUN_100f42bd8(void)

{
  func_0x000107c61168(&PTR_PTR_1127a35a8);
  return;
}



/* Entry: 100f42bf8; end: 100f4300f;  */

void FUN_100f42bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  return;
}



/* Entry: 100f43010; end: 100f4316b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f43010(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  long lStack_50;
  long lStack_48;
  
  plVar6 = &lStack_50;
  FUN_100f435c4();
  if (param_1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x28);
    func_0x000107c4d604();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 != 0) {
      lVar4 = *(long *)(unaff_x20 + 0x30);
      func_0x000107c5d9b0();
      func_0x000107c61180();
      lVar2 = lVar4;
      func_0x000107c5c734();
      func_0x000107c61180();
      func_0x000107c61170(lVar4);
      if (lVar2 != 0) {
        uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
        lVar5 = 0;
        FUN_100f43e6c();
        lVar4 = lVar5;
        func_0x000107c610f8();
        *(undefined8 *)(lVar4 + _DAT_112d4d110) = uVar8;
        puVar1 = PTR_s_init_1125d9248;
        lStack_50 = lVar4;
        lStack_48 = lVar5;
        func_0x000107c61174(uVar8);
        func_0x000107c61154(&lStack_50,puVar1);
        puVar7 = (undefined1 *)plVar6;
        FUN_100f43794();
        func_0x000107c610f8(PTR_PTR_1126a6010);
        func_0x000107c45660();
        func_0x000107c615e8(param_1);
        func_0x000107c61170(plVar6);
        func_0x000107c61170(puVar7);
        func_0x000107c615e8(lVar3);
        func_0x000107c615e8(lVar2);
        return;
      }
      func_0x000107c615e8(param_1);
      param_1 = lVar3;
    }
    func_0x000107c615e8(param_1);
  }
  return;
}



/* Entry: 100f4316c; end: 100f4339f;  */

undefined * FUN_100f4316c(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x40);
  func_0x000107c4f3e4();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar3 != 0) {
    uVar2 = uVar3;
    func_0x000107c4f378();
    func_0x000107c61180();
    func_0x000107c615e8(uVar3);
    uVar3 = 0x112d4bd28;
    func_0x0001000285a8(0x112d4bd28,&UNK_10d9127e0);
    uVar4 = uVar2;
    func_0x000107c5fc54();
    func_0x000107c61170(uVar2);
    uVar2 = uVar4 & 0xffffffffffffff8;
    if (uVar4 >> 0x3e == 0) {
      uVar11 = *(ulong *)(uVar2 + 0x10);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      uVar11 = uVar2;
      if (0x7fffffffffffffff < uVar4) {
        uVar11 = uVar4;
      }
      func_0x000107c60480();
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar9;
    if (uVar11 != 0) {
      uVar6 = 0;
      do {
        while( true ) {
          if ((uVar4 & 0xc000000000000001) == 0) {
            if (*(ulong *)(uVar2 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100f4335c);
              (*pcVar1)();
            }
            uVar12 = *(ulong *)(uVar4 + uVar6 * 8 + 0x20);
            func_0x000107c615f0(uVar12);
            uVar10 = uVar3;
          }
          else {
            uVar12 = uVar6;
            uVar10 = uVar4;
            FUN_100f1cdf4();
          }
          if (SCARRY8(uVar6,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100f43358);
            (*pcVar1)();
          }
          uVar13 = uVar6 + 1;
          uVar3 = uVar12;
          func_0x000107c3ee50();
          func_0x000107c61180();
          uVar5 = uVar3;
          func_0x000107c41214();
          func_0x000107c61180();
          func_0x000107c61170(uVar3);
          if (uVar5 == 0) break;
          uVar6 = uVar5;
          func_0x000107c5ee30();
          uVar3 = uVar10;
          func_0x000107c61170(uVar5);
          func_0x000107c615e8(uVar12);
          puVar7 = puVar9;
          func_0x000107c61558();
          puVar8 = puVar9;
          if (((ulong)puVar7 & 1) == 0) {
            uVar3 = *(long *)(puVar9 + 0x10) + 1;
            puVar8 = (undefined *)0x0;
            FUN_100f23260(0,uVar3,1,puVar9);
          }
          uVar5 = *(ulong *)(puVar8 + 0x10);
          uVar12 = uVar5 + 1;
          puVar9 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar5) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            uVar3 = uVar12;
            FUN_100f23260(puVar9,uVar12,1,puVar8);
          }
          *(ulong *)(puVar9 + 0x10) = uVar12;
          *(ulong *)(puVar9 + uVar5 * 0x10 + 0x20) = uVar6;
          *(ulong *)(puVar9 + uVar5 * 0x10 + 0x28) = uVar10;
          uVar6 = uVar13;
          if (uVar13 == uVar11) goto LAB_100f43378;
        }
        func_0x000107c615e8(uVar12);
        uVar3 = uVar10;
        uVar6 = uVar6 + 1;
      } while (uVar13 != uVar11);
    }
LAB_100f43378:
    func_0x000107c6142c(uVar4);
  }
  return puVar9;
}



/* Entry: 100f433a0; end: 100f434a3;  */

undefined * FUN_100f433a0(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126a6008;
  func_0x000107c610f8(PTR_PTR_1126a6008);
  func_0x000107c453e4();
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = uVar4;
  func_0x000107c51ca0(uVar4);
  func_0x000107c61180();
  func_0x000107c553e8(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c449a0(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c5502c(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c49a24(uVar4);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55544(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c5fc48(param_1,PTR___s10Foundation4DataVN_110350ae0);
  func_0x000107c54530(puVar1);
  func_0x000107c61170(param_1);
  return puVar1;
}



/* Entry: 100f434a4; end: 100f434fb;  */

undefined8 FUN_100f434a4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5d17c(uVar1);
  func_0x000107c61180();
  func_0x000107c41864();
  func_0x000107c615e8(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  func_0x000107c61170(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  func_0x000107c61170(uVar1);
  return 0;
}



/* Entry: 100f434fc; end: 100f4357f;  */

void FUN_100f434fc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 100f43580; end: 100f435c3;  */

void FUN_100f43580(void)

{
  func_0x000100f42c74();
  return;
}



/* Entry: 100f435c4; end: 100f43793;  */

long FUN_100f435c4(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  long unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar8 = &puStack_b0;
  lVar2 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c3dae4();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  puVar5 = &UNK_11036bfd0;
  puVar4 = puVar5;
  func_0x000107c613fc(&UNK_11036bfd0,0x18,7);
  func_0x000107c61644(puVar4 + 0x10);
  func_0x000107c613fc(&UNK_11036bfd0,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar6 = PTR_PTR_1126aeaf8;
  func_0x000107c610f8(PTR_PTR_1126aeaf8);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_100f43ba4;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  uStack_70 = 0x100e1779c;
  puStack_68 = &UNK_11036bfe8;
  ppuVar7 = &puStack_80;
  puStack_58 = puVar4;
  func_0x000107c60bc4(ppuVar7);
  uStack_90 = 0x100f43bac;
  puStack_b0 = puVar1;
  uStack_a8 = 0x42000000;
  uStack_a0 = 0x100e17304;
  puStack_98 = &UNK_11036c010;
  puStack_88 = puVar5;
  func_0x000107c60bc4(&puStack_b0);
  func_0x000107c6157c(puVar4);
  func_0x000107c6157c(puVar5);
  func_0x000107c47be0(puVar6);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puStack_88);
  puVar1 = puStack_58;
  func_0x000107c61574(puVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar1);
  if (lVar3 == 0) {
    func_0x000107c61170(puVar6);
    lVar2 = 0;
  }
  else {
    lVar2 = lVar3;
    func_0x000107c4c1e0(lVar3);
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(puVar6);
  }
  return lVar2;
}



/* Entry: 100f43794; end: 100f439df;  */

undefined8 FUN_100f43794(void)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  undefined8 auStack_90 [7];
  undefined1 auStack_58 [8];
  
  lVar1 = 0x112d3ae80;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar7 = (long)puVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar7 - extraout_x12;
  lVar1 = 0;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar6 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = lVar6 - extraout_x12_00;
  lVar1 = 0;
  func_0x000107c5ede0();
  pcVar9 = *(code **)(*(long *)(lVar1 + -8) + 0x38);
  (*pcVar9)(lVar8,1,1,lVar1);
  (*pcVar9)(lVar7,1,1,lVar1);
  lVar1 = 0;
  func_0x0001046305a8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(puVar2,1,1,lVar1);
  *(undefined1 *)(lVar4 + -8) = 0;
  *(undefined8 *)(lVar4 + -0x10) = 0;
  *(undefined8 *)(lVar4 + -0x18) = 0;
  *(undefined8 *)(lVar4 + -0x20) = 0;
  *(undefined8 *)(lVar4 + -0x28) = 0;
  *(undefined8 *)(lVar4 + -0x30) = 0;
  *(undefined8 *)(lVar4 + -0x38) = 0;
  *(undefined1 **)(lVar4 + -0x40) = puVar2;
  func_0x000104638e24(lVar4,0x19,lVar8,0,lVar7,0,0,0,0);
  func_0x000103bda44c(0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  FUN_100e39298(lVar4,lVar6);
  func_0x000104652fec(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000104651d90(lVar6);
  func_0x000103bda584(uVar3,0,lVar6);
  func_0x000100e392dc(lVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar3;
  func_0x000107c61174(uVar3);
  func_0x000107c61170(uVar5);
  return uVar3;
}



/* Entry: 100f439e0; end: 100f43a67;  */

void FUN_100f439e0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar1 = *(long *)(param_2 + 0x50);
    if (lVar1 != 0) {
      func_0x000107c61174(lVar1);
      func_0x000107c4f018();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 100f43a68; end: 100f43b83;  */

void FUN_100f43a68(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    lVar3 = *(long *)(param_3 + 0x50);
    if (lVar3 == 0) {
      func_0x000107c61574();
    }
    else {
      puVar1 = &UNK_11036c048;
      func_0x000107c613fc(&UNK_11036c048,0x20,7);
      *(undefined8 *)(puVar1 + 0x10) = param_1;
      *(undefined8 *)(puVar1 + 0x18) = param_2;
      pcStack_68 = FUN_100f43bd0;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_11036c060;
      ppuVar2 = &puStack_88;
      puStack_60 = puVar1;
      func_0x000107c60bc4(ppuVar2);
      puVar1 = puStack_60;
      func_0x000107c61174(lVar3);
      func_0x000100b64c10(param_1,param_2);
      func_0x000107c61574(puVar1);
      func_0x000107c420a8(lVar3);
      func_0x000107c61574(param_3);
      func_0x000107c60bd0(ppuVar2);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 100f43b84; end: 100f43ba3;  */

void FUN_100f43b84(void)

{
  func_0x000107c61168(&PTR_PTR_112d4d068);
  return;
}



/* Entry: 100f43ba4; end: 100f43bcf;  */

void FUN_100f43ba4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x50);
    if (lVar1 != 0) {
      func_0x000107c61174(lVar1);
      func_0x000107c4f018();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 100f43bd0; end: 100f43bf7;  */

void FUN_100f43bd0(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Entry: 100f43bf8; end: 100f43c07;  */

void FUN_100f43bf8(long param_1,long param_2)

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



/* Entry: 100f43c08; end: 100f43c5b; -[_TtC28SCAddPaidPartnershipPageImpl30AddPaidPartnershipPageHandlers closePage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f43c08(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d4d110);
  func_0x000107c61174();
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3fc24();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f43c5c; end: 100f43d3f;  */

/* WARNING: Possible PIC construction at 0x000100f43d08: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f43d0c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f43c5c(long param_1)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = param_1;
  func_0x000107c5bd00();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112d4d110);
    func_0x000107c4168c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c49804();
      lVar1 = param_1;
      func_0x000107c4f38c(param_1);
      func_0x000107c61180();
      func_0x000107c42120(param_1);
      func_0x000107c61180();
      func_0x000107c51c4c(lVar2);
      func_0x000107c615e8(lVar2);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 100f43d40; end: 100f43dab; -[_TtC28SCAddPaidPartnershipPageImpl30AddPaidPartnershipPageHandlers selectSponsorWithSponsor:sponsorableProfile:] */

/* WARNING: Possible PIC construction at 0x000100f43d8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100f43d90) */

void FUN_100f43d40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_100f43c5c(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100f43dac; end: 100f43dff; -[_TtC28SCAddPaidPartnershipPageImpl30AddPaidPartnershipPageHandlers clearSelection] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f43dac(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d4d110);
  func_0x000107c61174();
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3fb04();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100f43e00; end: 100f43e5b; -[_TtC28SCAddPaidPartnershipPageImpl30AddPaidPartnershipPageHandlers init] */

void FUN_100f43e00(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAddPaidPartnershipPageImpl.AddPaidPartnershipPageHandlers",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100f43e2c);
  (*pcVar1)();
}



/* Entry: 100f43e5c; end: 100f43e6b; -[_TtC28SCAddPaidPartnershipPageImpl30AddPaidPartnershipPageHandlers .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f43e5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d4d110));
  return;
}



/* Entry: 100f43e6c; end: 100f43e8b;  */

void FUN_100f43e6c(void)

{
  func_0x000107c61168(&PTR_PTR_1127a36a8);
  return;
}



/* Entry: 100f43e8c; end: 100f43e93; -[_TtC28SCAddPaidPartnershipPageImpl36AddPaidPartnershipPageViewController pageViewName] */

undefined8 FUN_100f43e8c(void)

{
  return 0xc;
}



/* Entry: 100f43e94; end: 100f43ed7; -[_TtC28SCAddPaidPartnershipPageImpl36AddPaidPartnershipPageViewController initWithValdiView:] */

void FUN_100f43e94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000100f44030();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_initWithValdiView__1125f5a88,param_3);
  return;
}



/* Entry: 100f43ed8; end: 100f43f83; -[_TtC28SCAddPaidPartnershipPageImpl36AddPaidPartnershipPageViewController initWithNibName:bundle:] */

undefined1 * FUN_100f43ed8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar1 = &uStack_40;
  if (param_3 == 0) {
    param_2 = param_4;
    func_0x000107c61174();
    param_3 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c5fadc(param_3,param_2);
    func_0x000107c6142c();
  }
  func_0x000100f44030();
  uStack_40 = param_1;
  uStack_38 = param_2;
  func_0x000107c61154(&uStack_40,PTR_s_initWithNibName_bundle__1125e9850,param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 100f43f84; end: 100f43fff; -[_TtC28SCAddPaidPartnershipPageImpl36AddPaidPartnershipPageViewController initWithCoder:] */

undefined1 * FUN_100f43f84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000100f44030();
  puVar1 = PTR_s_initWithCoder__1125dd730;
  uStack_40 = param_1;
  uStack_38 = uVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&uStack_40,puVar1,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  if (puVar3 != (undefined8 *)0x0) {
    func_0x000107c61170(puVar3);
  }
  return (undefined1 *)puVar3;
}



/* Entry: 100f44000; end: 100f4404f;  */

void FUN_100f44000(void)

{
  func_0x000100f44030();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 100f44050; end: 100f44093; -[_TtC28SCAddPaidPartnershipPageImpl36AddPaidPartnershipPageViewController defaultProjectNameV2] */

void FUN_100f44050(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010406fe18();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 100f44094; end: 100f440bf; -[_TtC28SCAddPaidPartnershipPageImpl36AddPaidPartnershipPageViewController defaultSubProjectName] */

void FUN_100f44094(void)

{
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1b960);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f440c0; end: 100f440ef;  */

void FUN_100f440c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 100f440f0; end: 100f440fb; -[SCAddPaidPartnershipPageEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f440f0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d200;
  func_0x000107c61428(param_1 + _DAT_112d4d200,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f440fc; end: 100f44107; -[SCAddPaidPartnershipPageEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f440fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d200;
  func_0x000107c61428(param_1 + _DAT_112d4d200,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f44108; end: 100f44113; -[SCAddPaidPartnershipPageEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f44108(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d208;
  func_0x000107c61428(param_1 + _DAT_112d4d208,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f44114; end: 100f4411f; -[SCAddPaidPartnershipPageEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f44114(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d208;
  func_0x000107c61428(param_1 + _DAT_112d4d208,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f44120; end: 100f4412b; -[SCAddPaidPartnershipPageEntryPoint composerCoreUIServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f44120(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d210;
  func_0x000107c61428(param_1 + _DAT_112d4d210,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f4412c; end: 100f44137; -[SCAddPaidPartnershipPageEntryPoint setComposerCoreUIServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4412c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d210;
  func_0x000107c61428(param_1 + _DAT_112d4d210,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f44138; end: 100f44143; -[SCAddPaidPartnershipPageEntryPoint composerNetworkingBridgeService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f44138(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d218;
  func_0x000107c61428(param_1 + _DAT_112d4d218,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f44144; end: 100f4414f; -[SCAddPaidPartnershipPageEntryPoint setComposerNetworkingBridgeService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f44144(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d218;
  func_0x000107c61428(param_1 + _DAT_112d4d218,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f44150; end: 100f4415b; -[SCAddPaidPartnershipPageEntryPoint composerPeopleBridgeUserInfoServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f44150(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d220;
  func_0x000107c61428(param_1 + _DAT_112d4d220,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f4415c; end: 100f44167; -[SCAddPaidPartnershipPageEntryPoint setComposerPeopleBridgeUserInfoServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f4415c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d220;
  func_0x000107c61428(param_1 + _DAT_112d4d220,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f44168; end: 100f44173; -[SCAddPaidPartnershipPageEntryPoint snapProServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f44168(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d228;
  func_0x000107c61428(param_1 + _DAT_112d4d228,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f44174; end: 100f4417f; -[SCAddPaidPartnershipPageEntryPoint setSnapProServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f44174(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d228;
  func_0x000107c61428(param_1 + _DAT_112d4d228,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 100f44180; end: 100f4418b; -[SCAddPaidPartnershipPageEntryPoint deckServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f44180(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d4d230;
  func_0x000107c61428(param_1 + _DAT_112d4d230,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f4418c; end: 100f441cf;  */

void FUN_100f4418c(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100f441d0; end: 100f441db; -[SCAddPaidPartnershipPageEntryPoint setDeckServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100f441d0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d4d230;
  func_0x000107c61428(param_1 + _DAT_112d4d230,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


