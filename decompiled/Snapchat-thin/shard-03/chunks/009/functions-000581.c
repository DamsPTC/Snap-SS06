/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102e1da48; end: 102e1dc9f;  */

void FUN_102e1da48(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar8 = &puStack_90;
  ppuVar9 = &puStack_90;
  lVar3 = param_1;
  func_0x000107c5de84(param_1,param_2,
                      *(undefined8 *)PTR__UITransitionContextToViewControllerKey_110345e58);
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_completeTransition__1125ae898,0);
    return;
  }
  lVar4 = param_1;
  func_0x000107c403bc(param_1);
  func_0x000107c61180();
  lVar5 = lVar3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102e1dc98);
    (*pcVar2)();
  }
  func_0x000107c3d89c(lVar4);
  func_0x000107c61170(lVar5);
  lVar5 = lVar3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102e1dc9c);
    (*pcVar2)();
  }
  func_0x000107c43538(param_1);
  func_0x000107c54b80(lVar5);
  func_0x000107c61170(lVar5);
  lVar5 = lVar3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 != 0) {
    func_0x000107c526c0(0);
    func_0x000107c61170(lVar5);
    puVar6 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar7 = &UNK_1105d8008;
    func_0x000107c613fc(&UNK_1105d8008,0x18,7);
    *(long *)(puVar7 + 0x10) = lVar3;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_70 = FUN_102e1dea4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_1105d8020;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    func_0x000107c61174(lVar3);
    func_0x000107c61574(puVar7);
    puVar7 = &UNK_1105d8058;
    func_0x000107c613fc(&UNK_1105d8058,0x18,7);
    *(long *)(puVar7 + 0x10) = param_1;
    pcStack_70 = (code *)0x102e1defc;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100288f10;
    puStack_78 = &UNK_1105d8070;
    puStack_68 = puVar7;
    func_0x000107c60bc4(&puStack_90);
    puVar7 = puStack_68;
    func_0x000107c615f0(param_1);
    func_0x000107c61574(puVar7);
    func_0x000107c3dcd4(0x3fc999999999999a,0,puVar6);
    func_0x000107c60bd0(ppuVar9);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102e1dca0);
  (*pcVar2)();
}



/* Entry: 102e1dca0; end: 102e1dea3;  */

void FUN_102e1dca0(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  ppuVar6 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  lVar2 = param_2;
  func_0x000107c5de84(param_2,param_3,
                      *(undefined8 *)PTR__UITransitionContextFromViewControllerKey_110345e48);
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = param_2;
    func_0x000107c403bc(param_2);
    func_0x000107c61180();
    func_0x000107c3ec60();
    func_0x000107c609b0();
    uVar8 = param_1;
    func_0x000107c3ec60(lVar3);
    func_0x000107c609cc();
    uVar9 = uVar8;
    func_0x000107c3ec60(lVar3);
    func_0x000107c609b0();
    puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
    puVar5 = &UNK_1105d80a8;
    func_0x000107c613fc(&UNK_1105d80a8,0x38,7);
    *(long *)(puVar5 + 0x10) = lVar2;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    *(undefined8 *)(puVar5 + 0x20) = param_1;
    *(undefined8 *)(puVar5 + 0x28) = uVar8;
    *(undefined8 *)(puVar5 + 0x30) = uVar9;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0x102e1dec8;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_1105d80c0;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    puVar5 = puStack_78;
    func_0x000107c61174(lVar2);
    func_0x000107c61574(puVar5);
    puVar5 = &UNK_1105d80f8;
    func_0x000107c613fc(&UNK_1105d80f8,0x18,7);
    *(long *)(puVar5 + 0x10) = param_2;
    uStack_80 = 0x102e1ded8;
    puStack_a0 = puVar1;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_100288f10;
    puStack_88 = &UNK_1105d8110;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&puStack_a0);
    puVar5 = puStack_78;
    func_0x000107c615f0(param_2);
    func_0x000107c61574(puVar5);
    func_0x000107c3dcd4(0x3fc999999999999a,0,puVar4);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf43bd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_completeTransition__1125ae898,0);
  return;
}



/* Entry: 102e1dea4; end: 102e1deff;  */

void FUN_102e1dea4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c526c0(0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e1d960);
  (*pcVar1)();
}



/* Entry: 102e1df00; end: 102e1df6b; -[_TtC21PlayGamesServicesImpl13PlayGamesView initWithFrame:] */

void FUN_102e1df00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = param_5;
  func_0x000107c614f0();
  uStack_50 = param_5;
  uStack_48 = uVar1;
  func_0x000107c61154(param_1,param_2,param_3,param_4,&uStack_50,PTR_s_initWithFrame__1125e2948);
  return;
}



/* Entry: 102e1df6c; end: 102e1dfeb; -[_TtC21PlayGamesServicesImpl13PlayGamesView initWithCoder:] */

undefined1 * FUN_102e1df6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar3 = &uStack_40;
  uVar2 = param_1;
  func_0x000107c614f0();
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



/* Entry: 102e1dfec; end: 102e1e03f;  */

void FUN_102e1dfec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e1e040; end: 102e1e047; -[_TtC21PlayGamesServicesImpl13PlayGamesView gestureRecognizerShouldBegin:] */

undefined8 FUN_102e1e040(void)

{
  return 1;
}



/* Entry: 102e1e048; end: 102e1e04f; -[_TtC21PlayGamesServicesImpl13PlayGamesView gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

undefined8 FUN_102e1e048(void)

{
  return 1;
}



/* Entry: 102e1e050; end: 102e1e177;  */

undefined8 FUN_102e1e050(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_80 [40];
  long lStack_58;
  
  lVar2 = param_1;
  func_0x000107c61174();
  if (param_1 != 0) {
    do {
      if (unaff_x20 == lVar2) {
        func_0x000107c61170(lVar2);
        return 1;
      }
      puVar3 = PTR__OBJC_CLASS___UIControl_1126c3e60;
      func_0x000107c61168(PTR__OBJC_CLASS___UIControl_1126c3e60);
      lVar4 = lVar2;
      func_0x000107c6148c(lVar2,puVar3);
      if (lVar4 != 0) {
        func_0x000107c61170(lVar2);
        return 0;
      }
      lStack_58 = lVar2;
      func_0x000100f115fc();
      func_0x000107c61174();
      func_0x000107c61174();
      uVar5 = 0x112f1d548;
      func_0x0001000285a8(0x112f1d548,&UNK_10db55780);
      iVar1 = (int)auStack_80;
      func_0x000107c6147c(auStack_80,&lStack_58,lVar4,uVar5,6);
      if (iVar1 != 0) {
        func_0x000107c61170(lVar2);
        func_0x000107c61170(lVar2);
        func_0x0001000834e4(auStack_80);
        return 0;
      }
      lVar4 = lVar2;
      func_0x000107c5c42c();
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
      func_0x000107c61170(lVar2);
      lVar2 = lVar4;
    } while (lVar4 != 0);
  }
  return 1;
}



/* Entry: 102e1e178; end: 102e1e1eb; -[_TtC21PlayGamesServicesImpl13PlayGamesView gestureRecognizer:shouldReceiveTouch:] */

uint FUN_102e1e178(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_4;
  func_0x000107c5de64(param_4);
  func_0x000107c61180();
  uVar2 = uVar1;
  FUN_102e1e050();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
  return (uint)uVar2 & 1;
}



/* Entry: 102e1e1ec; end: 102e1e1ff;  */

bool FUN_102e1e1ec(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102e1e200; end: 102e1e2ab;  */

void FUN_102e1e200(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102e1e2ac; end: 102e1e31b; -[_TtC21PlayGamesServicesImpl23PlayGamesViewBackButton initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1e2ac(long param_1)

{
  code *pcVar1;
  
  param_1 = param_1 + _DAT_112f1d550;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "PlayGamesServicesImpl/PlayGamesViewBackButton.swift",0x33,2,0x18,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e1e31c);
  (*pcVar1)();
}



/* Entry: 102e1e31c; end: 102e1e5db;  */

/* WARNING: Possible PIC construction at 0x000102e1e370: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1e474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1e48c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1e4e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1e558: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1e58c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1e46c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e1e55c) */
/* WARNING: Removing unreachable block (ram,0x000102e1e4e4) */
/* WARNING: Removing unreachable block (ram,0x000102e1e490) */
/* WARNING: Removing unreachable block (ram,0x000102e1e478) */
/* WARNING: Removing unreachable block (ram,0x000102e1e374) */
/* WARNING: Removing unreachable block (ram,0x000102e1e408) */
/* WARNING: Removing unreachable block (ram,0x000102e1e3a4) */
/* WARNING: Removing unreachable block (ram,0x000102e1e470) */
/* WARNING: Removing unreachable block (ram,0x000102e1e590) */

void FUN_102e1e31c(void)

{
  undefined8 uVar1;
  
  func_0x000107c5a050();
  uVar1 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f110480);
  func_0x000107c520f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102e1e5dc; end: 102e1e687;  */

/* WARNING: Possible PIC construction at 0x000102e1e668: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1e5dc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  func_0x0001007d6c6c(1,0x61546e6f74747562,0xec00000064657070,lVar1,&PTR_DAT_1105d8288);
  lVar1 = unaff_x20 + _DAT_112f1d550;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1 + _DAT_112f1d1b8;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_102e0dd48(0);
    lVar1 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 102e1e688; end: 102e1e6af; -[_TtC21PlayGamesServicesImpl23PlayGamesViewBackButton buttonTapped] */

void FUN_102e1e688(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e1e5dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e1e6b0; end: 102e1e70f; -[_TtC21PlayGamesServicesImpl23PlayGamesViewBackButton initWithFrame:] */

void FUN_102e1e6b0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesServicesImpl.PlayGamesViewBackButton",0x2d,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e1e6dc);
  (*pcVar1)();
}



/* Entry: 102e1e710; end: 102e1e71f; -[_TtC21PlayGamesServicesImpl23PlayGamesViewBackButton .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e1e710(long param_1)

{
  param_1 = param_1 + _DAT_112f1d550;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102e1e720; end: 102e1e73f;  */

void FUN_102e1e720(void)

{
  func_0x000107c61168(&PTR_PTR_1128a7dd8);
  return;
}



/* Entry: 102e1e740; end: 102e1e8a7;  */

int FUN_102e1e740(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfe < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 1) {
      iVar2 = 4;
    }
    if (param_2 + 1 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_102e1e7bc;
        goto LAB_102e1e7a0;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_102e1e7a0:
      return ((uint)*param_1 | uVar1 << 8) - 1;
    }
  }
LAB_102e1e7bc:
  iVar2 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 102e1e8a8; end: 102e1e8e7;  */

void FUN_102e1e8a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f1d588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db55810;
  func_0x000107c61520(&UNK_10db55810,&UNK_1105d81b8);
  puRam0000000112f1d588 = puVar1;
  return;
}



/* Entry: 102e1e8e8; end: 102e1e90b;  */

undefined8 FUN_102e1e8e8(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102e1e90c; end: 102e1ea9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e1e90c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f1d5a0;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f1d5a0);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x000102e1e020();
    func_0x000107c610f8();
    func_0x000107c469a4(0,0,0,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar3 = 0;
  }
  func_0x000107c61174(lVar3);
  return lVar2;
}



/* Entry: 102e1ea9c; end: 102e1eac3; -[_TtC21PlayGamesServicesImpl23PlayGamesViewController initWithCoder:] */

void FUN_102e1ea9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_102e20020();
  return;
}



/* Entry: 102e1eac4; end: 102e1eb47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1eac4(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112f1d5b0;
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f1d5b0);
  func_0x000107c61174(uVar2);
  FUN_102e08098();
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61174(uVar2);
  FUN_102e04d88();
  func_0x000107c61170(uVar2);
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e1eb48; end: 102e1ebdf; -[_TtC21PlayGamesServicesImpl23PlayGamesViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1eb48(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  lVar1 = _DAT_112f1d5b0;
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f1d5b0);
  lVar3 = param_1;
  func_0x000107c61174();
  func_0x000107c61174(uVar4);
  FUN_102e08098();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(param_1 + lVar1);
  func_0x000107c61174(uVar4);
  FUN_102e04d88();
  func_0x000107c61170(uVar4);
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e1ebe0; end: 102e1ec87; -[_TtC21PlayGamesServicesImpl23PlayGamesViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102e1ebfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1ec1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1ec3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1ec5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e1ec40) */
/* WARNING: Removing unreachable block (ram,0x000102e1ec20) */
/* WARNING: Removing unreachable block (ram,0x000102e1ec00) */
/* WARNING: Removing unreachable block (ram,0x000102e1ec60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1ebe0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f1d590));
  return;
}



/* Entry: 102e1ec88; end: 102e1ecc7; -[_TtC21PlayGamesServicesImpl23PlayGamesViewController loadView] */

/* WARNING: Possible PIC construction at 0x000102e1ecb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e1ecb8) */

void FUN_102e1ec88(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102e1e90c();
  func_0x000107c5a568(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 102e1ecc8; end: 102e1ed57; -[_TtC21PlayGamesServicesImpl23PlayGamesViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1ecc8(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidLoad_112684cd8;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f1d590);
  uVar3 = 0;
  func_0x0001005f57cc(0);
  func_0x00010450b144();
  func_0x000107c4d664(uVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 102e1ed58; end: 102e1eeb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1ed58(undefined8 param_1,undefined8 param_2,double param_3,double param_4)

{
  double *pdVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_viewDidLayoutSubviews_112684cc8);
  FUN_102e1eeb4();
  FUN_102e1e90c();
  func_0x000107c438d4();
  func_0x000107c61170(puVar2);
  if ((0.0 < param_3) && (0.0 < param_4)) {
    pdVar1 = (double *)(unaff_x20 + _DAT_112f1d5a8);
    if (*(char *)(pdVar1 + 2) == '\x01') {
      *pdVar1 = param_3;
      pdVar1[1] = param_4;
      *(undefined1 *)(pdVar1 + 2) = 0;
      lVar3 = unaff_x20 + _DAT_112f1d598;
      func_0x000107c61618();
      if (lVar3 != 0) {
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f1d5a0);
        func_0x000107c61174(uVar4);
        FUN_102e1043c();
        func_0x000107c615e8(lVar3);
        func_0x000107c61170(uVar4);
      }
    }
    else {
      if ((param_3 == *pdVar1) && (param_4 == pdVar1[1])) {
        return;
      }
      *pdVar1 = param_3;
      pdVar1[1] = param_4;
      *(undefined1 *)(pdVar1 + 2) = 0;
    }
    lVar3 = unaff_x20 + _DAT_112f1d598;
    func_0x000107c61618();
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f1d5a0);
      func_0x000107c61174(uVar4);
      FUN_102e1189c();
      func_0x000107c615e8(lVar3);
      func_0x000107c61170(uVar4);
    }
  }
  return;
}



/* Entry: 102e1eeb4; end: 102e1f00f;  */

/* WARNING: Possible PIC construction at 0x000102e1ef04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1efd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e1ef08) */
/* WARNING: Removing unreachable block (ram,0x000102e1ef1c) */
/* WARNING: Removing unreachable block (ram,0x000102e1ef20) */
/* WARNING: Removing unreachable block (ram,0x000102e1ef24) */
/* WARNING: Removing unreachable block (ram,0x000102e1ef38) */
/* WARNING: Removing unreachable block (ram,0x000102e1ef3c) */
/* WARNING: Removing unreachable block (ram,0x000102e1efdc) */
/* WARNING: Removing unreachable block (ram,0x000102e1ef40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1eeb4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f1d5b8);
  if (lVar1 != 0) {
    func_0x000107c61174();
    FUN_102e1e90c();
    func_0x000107c3ec60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102e1f010; end: 102e1f037; -[_TtC21PlayGamesServicesImpl23PlayGamesViewController viewDidLayoutSubviews] */

void FUN_102e1f010(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102e1ed58();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e1f038; end: 102e1f04b; -[_TtC21PlayGamesServicesImpl23PlayGamesViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1f038(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewWillAppear__1126853f0;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_50,puVar1,param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f1d590);
  func_0x0001005f57cc(0);
  (*(code *)&SUB_10450b1b8)(param_3);
  func_0x000107c4d664(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 102e1f04c; end: 102e1f2f7;  */

/* WARNING: Possible PIC construction at 0x000102e1f0c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1f0e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1f160: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1f1a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1f1d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1f210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1f220: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1fab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1fae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1fb54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e1fab8) */
/* WARNING: Removing unreachable block (ram,0x000102e1fb58) */
/* WARNING: Removing unreachable block (ram,0x000102e1fabc) */
/* WARNING: Removing unreachable block (ram,0x000102e1fac4) */
/* WARNING: Removing unreachable block (ram,0x000102e1f224) */
/* WARNING: Removing unreachable block (ram,0x000102e1f1dc) */
/* WARNING: Removing unreachable block (ram,0x000102e1f1a4) */
/* WARNING: Removing unreachable block (ram,0x000102e1f164) */
/* WARNING: Removing unreachable block (ram,0x000102e1f214) */
/* WARNING: Removing unreachable block (ram,0x000102e1f17c) */
/* WARNING: Removing unreachable block (ram,0x000102e1f0e4) */
/* WARNING: Removing unreachable block (ram,0x000102e1f12c) */
/* WARNING: Removing unreachable block (ram,0x000102e1f138) */
/* WARNING: Removing unreachable block (ram,0x000102e1f0c8) */
/* WARNING: Removing unreachable block (ram,0x000102e1fae4) */
/* WARNING: Removing unreachable block (ram,0x000102e1faec) */
/* WARNING: Removing unreachable block (ram,0x000102e1fb60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1f04c(void)

{
  char cVar1;
  bool bVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar3 = _DAT_112f1d5b8;
  if (*(long *)(unaff_x20 + _DAT_112f1d5b8) == 0) {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112f1d5b0) + _DAT_112f1c5c0);
    FUN_102e09204(0);
    func_0x000107c610f8();
    func_0x000107c61174();
    FUN_102e08e24();
    uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
    *(undefined8 *)(unaff_x20 + lVar3) = uVar4;
    func_0x000107c61174();
  }
  else {
    lVar3 = *(long *)(unaff_x20 + _DAT_112f1d5b8);
    if (lVar3 == 0) {
      return;
    }
    uVar5 = 0x66664f;
    if (*(char *)(*(long *)(unaff_x20 + _DAT_112f1d5b0) + _DAT_112f1c610) == '\x01') {
      cVar1 = *(char *)(unaff_x20 + _DAT_112f1d5e8);
      func_0x000107c61174(lVar3);
      func_0x000107c550d8();
      bVar2 = cVar1 == '\0';
      if (bVar2) {
        uVar5 = 0x6e4f;
      }
      uVar4 = 0xe300000000000000;
      if (bVar2) {
        uVar4 = 0xe200000000000000;
      }
      func_0x000107c5fadc(uVar5,uVar4);
      func_0x000107c6142c(uVar4);
      func_0x000107c52104(lVar3);
    }
    else {
      func_0x000107c61174(lVar3);
      func_0x000107c550d8();
      uVar5 = 0x66664f;
      func_0x000107c5fadc(0x66664f,0xe300000000000000);
      func_0x000107c6142c(0xe300000000000000);
      func_0x000107c52104(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar5);
  return;
}



/* Entry: 102e1f2f8; end: 102e1f39b; -[_TtC21PlayGamesServicesImpl23PlayGamesViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1f2f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidAppear__112684bd0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f1d590);
  func_0x0001005f57cc(0);
  func_0x00010450b23c(param_3);
  func_0x000107c4d664(uVar3);
  func_0x000107c61170(param_3);
  FUN_102e1f04c();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102e1f39c; end: 102e1f45f; -[_TtC21PlayGamesServicesImpl23PlayGamesViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1f39c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewWillDisappear__112685438;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112f1d590);
  uVar3 = 0;
  func_0x0001005f57cc(0);
  func_0x00010450b2bc(param_3,uVar3);
  func_0x000107c4d664(uVar4);
  func_0x000107c61170(param_3);
  lVar2 = param_1;
  func_0x000107c49aa0();
  if ((int)lVar2 != 0) {
    FUN_102e08098();
    FUN_102e04d88();
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102e1f460; end: 102e1f473; -[_TtC21PlayGamesServicesImpl23PlayGamesViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1f460(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidDisappear__112684c48;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_50,puVar1,param_3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112f1d590);
  func_0x0001005f57cc(0);
  (*(code *)&SUB_10450b3c8)(param_3);
  func_0x000107c4d664(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 102e1f474; end: 102e1f51b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1f474(long param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  code *param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_50;
  long lStack_48;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *param_4;
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_50,uVar2,param_3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f1d590);
  func_0x0001005f57cc(0);
  (*param_5)(param_3);
  func_0x000107c4d664(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 102e1f51c; end: 102e1f807;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1f51c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar3 = *(long *)(unaff_x20 + _DAT_112f1d5b8);
  if (lVar3 != 0) {
    func_0x000107c61174();
    lVar4 = lVar3;
    FUN_102e1e90c();
    func_0x000107c3ec60();
    func_0x000107c61170(lVar4);
    lVar4 = _DAT_112f1d5c8;
    dVar8 = 0.5;
    if (0.5 < *(double *)(unaff_x20 + _DAT_112f1d5c8)) {
      dVar8 = *(double *)(unaff_x20 + _DAT_112f1d5c8);
    }
    dVar9 = 2.0;
    if (dVar8 <= 2.0) {
      dVar9 = dVar8;
    }
    *(double *)(unaff_x20 + _DAT_112f1d5c8) = dVar9;
    dVar8 = param_1;
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar9 = param_1;
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar6 = param_1;
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar9 = (double)(long)(dVar8 * 0.28) * 0.5 + (double)(long)(dVar9 * 0.022);
    pdVar1 = (double *)(unaff_x20 + _DAT_112f1d5c0);
    dVar8 = -(dVar6 * 0.5);
    if (-(dVar6 * 0.5) < *pdVar1) {
      dVar8 = *pdVar1;
    }
    dVar5 = param_1;
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar5 = dVar5 - dVar6 * 0.5;
    if (dVar8 <= dVar5) {
      dVar5 = dVar8;
    }
    *pdVar1 = dVar5;
    dVar8 = -dVar9;
    if (dVar8 < pdVar1[1]) {
      dVar8 = pdVar1[1];
    }
    dVar6 = param_1;
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    dVar6 = dVar6 - dVar9;
    if (dVar8 <= dVar6) {
      dVar6 = dVar8;
    }
    pdVar1[1] = dVar6;
    uStack_f0 = 0x3ff0000000000000;
    uStack_e8 = 0;
    uStack_e0 = 0;
    dStack_d8 = 1.0;
    dStack_d0 = 0.0;
    uStack_c8 = 0;
    func_0x000107c6089c(&uStack_b0,*pdVar1,&uStack_f0);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    dStack_d8 = (double)uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    dStack_d0 = (double)uStack_90;
    func_0x000107c60898(&uStack_b0,uVar7,uVar7,&uStack_f0);
    lVar2 = _DAT_112f1d5d0;
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    dStack_d8 = (double)uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    dStack_d0 = (double)uStack_90;
    func_0x000107c60894(&uStack_b0,*(undefined8 *)(unaff_x20 + _DAT_112f1d5d0),&uStack_f0);
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    dStack_d8 = (double)uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    dStack_d0 = (double)uStack_90;
    func_0x000107c5a03c(lVar3);
    dVar8 = param_1;
    func_0x000107c609cc(param_1,param_2,param_3,param_4);
    dVar9 = 0.0;
    dVar6 = 0.0;
    if (0.0 < dVar8) {
      dVar6 = *pdVar1;
      dVar8 = param_1;
      func_0x000107c609cc(param_1,param_2,param_3,param_4);
      dVar6 = dVar6 / dVar8;
    }
    dVar8 = param_1;
    func_0x000107c609b0(param_1,param_2,param_3,param_4);
    if (0.0 < dVar8) {
      dVar8 = pdVar1[1];
      func_0x000107c609b0(param_1,param_2,param_3,param_4);
      dVar9 = -dVar8 / param_1;
    }
    uStack_e0 = *(undefined8 *)(unaff_x20 + _DAT_112f1d5b0);
    uStack_c8 = *(undefined8 *)(unaff_x20 + lVar4);
    dStack_c0 = -*(double *)(unaff_x20 + lVar2);
    dStack_d8 = dVar6;
    dStack_d0 = dVar9;
    func_0x000100087bd4(FUN_102e201ec,&uStack_f0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102e1f808; end: 102e1f8fb;  */

/* WARNING: Possible PIC construction at 0x000102e1f83c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1f8bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1f864: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e1f8c0) */
/* WARNING: Removing unreachable block (ram,0x000102e1f840) */
/* WARNING: Removing unreachable block (ram,0x000102e1f868) */
/* WARNING: Removing unreachable block (ram,0x000102e1f874) */
/* WARNING: Removing unreachable block (ram,0x000102e1f86c) */
/* WARNING: Removing unreachable block (ram,0x000102e1f890) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1f808(undefined8 param_1)

{
  long unaff_x20;
  
  if ((*(byte *)(unaff_x20 + _DAT_112f1d5e0) & 1) == 0) {
    func_0x000102e1e984();
    func_0x000107c54514();
  }
  else {
    func_0x000102e1e984();
    func_0x000107c54514();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e1f8fc; end: 102e1fa03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1f8fc(byte param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    *(byte *)(param_2 + _DAT_112f1d5e0) = param_1 & 1;
    FUN_102e1f808();
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102e1fa04; end: 102e1fb7b;  */

/* WARNING: Possible PIC construction at 0x000102e1fab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1fae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e1fb54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e1fab8) */
/* WARNING: Removing unreachable block (ram,0x000102e1fb58) */
/* WARNING: Removing unreachable block (ram,0x000102e1fabc) */
/* WARNING: Removing unreachable block (ram,0x000102e1fac4) */
/* WARNING: Removing unreachable block (ram,0x000102e1fae4) */
/* WARNING: Removing unreachable block (ram,0x000102e1faec) */
/* WARNING: Removing unreachable block (ram,0x000102e1fb60) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1fa04(void)

{
  undefined8 uVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112f1d5b8);
  if (lVar4 != 0) {
    uVar5 = 0x66664f;
    if (*(char *)(*(long *)(unaff_x20 + _DAT_112f1d5b0) + _DAT_112f1c610) == '\x01') {
      cVar2 = *(char *)(unaff_x20 + _DAT_112f1d5e8);
      func_0x000107c61174(lVar4);
      func_0x000107c550d8();
      bVar3 = cVar2 == '\0';
      if (bVar3) {
        uVar5 = 0x6e4f;
      }
      uVar1 = 0xe300000000000000;
      if (bVar3) {
        uVar1 = 0xe200000000000000;
      }
      func_0x000107c5fadc(uVar5,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c52104(lVar4);
    }
    else {
      func_0x000107c61174(lVar4);
      func_0x000107c550d8();
      uVar5 = 0x66664f;
      func_0x000107c5fadc(0x66664f,0xe300000000000000);
      func_0x000107c6142c(0xe300000000000000);
      func_0x000107c52104(lVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 102e1fb7c; end: 102e1fc2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1fb7c(double param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dVar11;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar3 = param_5;
  func_0x000107c5bcc0();
  if (lVar3 == 1) {
    FUN_102e1e90c();
    param_1 = 0.0;
    param_2 = 0.0;
    func_0x000107c5a054(param_5);
    func_0x000107c61170(lVar3);
  }
  FUN_102e1e90c();
  func_0x000107c5cf78(param_5);
  func_0x000107c61170(lVar3);
  dVar8 = *(double *)(unaff_x20 + _DAT_112f1d5c0);
  pdVar1 = (double *)(unaff_x20 + _DAT_112f1d5c0);
  pdVar1[1] = param_2 + ((double *)(unaff_x20 + _DAT_112f1d5c0))[1];
  *pdVar1 = param_1 + dVar8;
  dVar8 = 0.0;
  uVar10 = 0;
  func_0x000107c5a054(0,0,param_5);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f1d5b8);
  if (lVar3 != 0) {
    func_0x000107c61174();
    lVar4 = lVar3;
    FUN_102e1e90c();
    func_0x000107c3ec60();
    func_0x000107c61170(lVar4);
    lVar4 = _DAT_112f1d5c8;
    dVar9 = 0.5;
    if (0.5 < *(double *)(unaff_x20 + _DAT_112f1d5c8)) {
      dVar9 = *(double *)(unaff_x20 + _DAT_112f1d5c8);
    }
    dVar11 = 2.0;
    if (dVar9 <= 2.0) {
      dVar11 = dVar9;
    }
    *(double *)(unaff_x20 + _DAT_112f1d5c8) = dVar11;
    dVar9 = dVar8;
    func_0x000107c609cc(dVar8,uVar10,param_2,param_4);
    dVar11 = dVar8;
    func_0x000107c609cc(dVar8,uVar10,param_2,param_4);
    dVar6 = dVar8;
    func_0x000107c609cc(dVar8,uVar10,param_2,param_4);
    dVar11 = (double)(long)(dVar9 * 0.28) * 0.5 + (double)(long)(dVar11 * 0.022);
    pdVar1 = (double *)(unaff_x20 + _DAT_112f1d5c0);
    dVar9 = -(dVar6 * 0.5);
    if (-(dVar6 * 0.5) < *pdVar1) {
      dVar9 = *pdVar1;
    }
    dVar5 = dVar8;
    func_0x000107c609cc(dVar8,uVar10,param_2,param_4);
    dVar5 = dVar5 - dVar6 * 0.5;
    if (dVar9 <= dVar5) {
      dVar5 = dVar9;
    }
    *pdVar1 = dVar5;
    dVar9 = -dVar11;
    if (dVar9 < pdVar1[1]) {
      dVar9 = pdVar1[1];
    }
    dVar6 = dVar8;
    func_0x000107c609b0(dVar8,uVar10,param_2,param_4);
    dVar6 = dVar6 - dVar11;
    if (dVar9 <= dVar6) {
      dVar6 = dVar9;
    }
    pdVar1[1] = dVar6;
    uStack_f0 = 0x3ff0000000000000;
    uStack_e8 = 0;
    uStack_e0 = 0;
    dStack_d8 = 1.0;
    dStack_d0 = 0.0;
    uStack_c8 = 0;
    func_0x000107c6089c(&uStack_b0,*pdVar1,&uStack_f0);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    dStack_d8 = (double)uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    dStack_d0 = (double)uStack_90;
    func_0x000107c60898(&uStack_b0,uVar7,uVar7,&uStack_f0);
    lVar2 = _DAT_112f1d5d0;
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    dStack_d8 = (double)uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    dStack_d0 = (double)uStack_90;
    func_0x000107c60894(&uStack_b0,*(undefined8 *)(unaff_x20 + _DAT_112f1d5d0),&uStack_f0);
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    dStack_d8 = (double)uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    dStack_d0 = (double)uStack_90;
    func_0x000107c5a03c(lVar3);
    dVar9 = dVar8;
    func_0x000107c609cc(dVar8,uVar10,param_2,param_4);
    dVar11 = 0.0;
    dVar6 = 0.0;
    if (0.0 < dVar9) {
      dVar6 = *pdVar1;
      dVar9 = dVar8;
      func_0x000107c609cc(dVar8,uVar10,param_2,param_4);
      dVar6 = dVar6 / dVar9;
    }
    dVar9 = dVar8;
    func_0x000107c609b0(dVar8,uVar10,param_2,param_4);
    if (0.0 < dVar9) {
      dVar9 = pdVar1[1];
      func_0x000107c609b0(dVar8,uVar10,param_2,param_4);
      dVar11 = -dVar9 / dVar8;
    }
    uStack_e0 = *(undefined8 *)(unaff_x20 + _DAT_112f1d5b0);
    uStack_c8 = *(undefined8 *)(unaff_x20 + lVar4);
    dStack_c0 = -*(double *)(unaff_x20 + lVar2);
    dStack_d8 = dVar6;
    dStack_d0 = dVar11;
    func_0x000100087bd4(FUN_102e201ec,&uStack_f0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102e1fc30; end: 102e1fc7f; -[_TtC21PlayGamesServicesImpl23PlayGamesViewController handleOverlayPan:] */

/* WARNING: Possible PIC construction at 0x000102e1fc68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e1fc6c) */

void FUN_102e1fc30(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102e1fb7c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102e1fc80; end: 102e1fcdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1fc80(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar3 = param_5;
  func_0x000107c5bcc0();
  if (lVar3 == 1) {
    param_1 = 1.0;
    func_0x000107c58bfc(param_5);
  }
  func_0x000107c51820(param_5);
  dVar10 = *(double *)(unaff_x20 + _DAT_112f1d5c8);
  *(double *)(unaff_x20 + _DAT_112f1d5c8) = param_1 * dVar10;
  dVar8 = 1.0;
  func_0x000107c58bfc(param_5);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f1d5b8);
  if (lVar3 != 0) {
    func_0x000107c61174();
    lVar4 = lVar3;
    FUN_102e1e90c();
    func_0x000107c3ec60();
    func_0x000107c61170(lVar4);
    lVar4 = _DAT_112f1d5c8;
    dVar9 = 0.5;
    if (0.5 < *(double *)(unaff_x20 + _DAT_112f1d5c8)) {
      dVar9 = *(double *)(unaff_x20 + _DAT_112f1d5c8);
    }
    dVar11 = 2.0;
    if (dVar9 <= 2.0) {
      dVar11 = dVar9;
    }
    *(double *)(unaff_x20 + _DAT_112f1d5c8) = dVar11;
    dVar9 = dVar8;
    func_0x000107c609cc(dVar8,dVar10,param_3,param_4);
    dVar11 = dVar8;
    func_0x000107c609cc(dVar8,dVar10,param_3,param_4);
    dVar6 = dVar8;
    func_0x000107c609cc(dVar8,dVar10,param_3,param_4);
    dVar11 = (double)(long)(dVar9 * 0.28) * 0.5 + (double)(long)(dVar11 * 0.022);
    pdVar1 = (double *)(unaff_x20 + _DAT_112f1d5c0);
    dVar9 = -(dVar6 * 0.5);
    if (-(dVar6 * 0.5) < *pdVar1) {
      dVar9 = *pdVar1;
    }
    dVar5 = dVar8;
    func_0x000107c609cc(dVar8,dVar10,param_3,param_4);
    dVar5 = dVar5 - dVar6 * 0.5;
    if (dVar9 <= dVar5) {
      dVar5 = dVar9;
    }
    *pdVar1 = dVar5;
    dVar9 = -dVar11;
    if (dVar9 < pdVar1[1]) {
      dVar9 = pdVar1[1];
    }
    dVar6 = dVar8;
    func_0x000107c609b0(dVar8,dVar10,param_3,param_4);
    dVar6 = dVar6 - dVar11;
    if (dVar9 <= dVar6) {
      dVar6 = dVar9;
    }
    pdVar1[1] = dVar6;
    uStack_f0 = 0x3ff0000000000000;
    uStack_e8 = 0;
    uStack_e0 = 0;
    dStack_d8 = 1.0;
    dStack_d0 = 0.0;
    uStack_c8 = 0;
    func_0x000107c6089c(&uStack_b0,*pdVar1,&uStack_f0);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    dStack_d8 = (double)uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    dStack_d0 = (double)uStack_90;
    func_0x000107c60898(&uStack_b0,uVar7,uVar7,&uStack_f0);
    lVar2 = _DAT_112f1d5d0;
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    dStack_d8 = (double)uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    dStack_d0 = (double)uStack_90;
    func_0x000107c60894(&uStack_b0,*(undefined8 *)(unaff_x20 + _DAT_112f1d5d0),&uStack_f0);
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    dStack_d8 = (double)uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    dStack_d0 = (double)uStack_90;
    func_0x000107c5a03c(lVar3);
    dVar9 = dVar8;
    func_0x000107c609cc(dVar8,dVar10,param_3,param_4);
    dVar11 = 0.0;
    dVar6 = 0.0;
    if (0.0 < dVar9) {
      dVar6 = *pdVar1;
      dVar9 = dVar8;
      func_0x000107c609cc(dVar8,dVar10,param_3,param_4);
      dVar6 = dVar6 / dVar9;
    }
    dVar9 = dVar8;
    func_0x000107c609b0(dVar8,dVar10,param_3,param_4);
    if (0.0 < dVar9) {
      dVar9 = pdVar1[1];
      func_0x000107c609b0(dVar8,dVar10,param_3,param_4);
      dVar11 = -dVar9 / dVar8;
    }
    uStack_e0 = *(undefined8 *)(unaff_x20 + _DAT_112f1d5b0);
    uStack_c8 = *(undefined8 *)(unaff_x20 + lVar4);
    dStack_c0 = -*(double *)(unaff_x20 + lVar2);
    dStack_d8 = dVar6;
    dStack_d0 = dVar11;
    func_0x000100087bd4(FUN_102e201ec,&uStack_f0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102e1fcdc; end: 102e1fd2b; -[_TtC21PlayGamesServicesImpl23PlayGamesViewController handleOverlayPinch:] */

/* WARNING: Possible PIC construction at 0x000102e1fd14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e1fd18) */

void FUN_102e1fcdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102e1fc80(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102e1fd2c; end: 102e1fd87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1fd2c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  double *pdVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  
  lVar3 = param_5;
  func_0x000107c5bcc0();
  if (lVar3 == 1) {
    param_1 = 0.0;
    func_0x000107c57f1c(param_5);
  }
  func_0x000107c508f4(param_5);
  dVar10 = *(double *)(unaff_x20 + _DAT_112f1d5d0);
  *(double *)(unaff_x20 + _DAT_112f1d5d0) = param_1 + dVar10;
  dVar8 = 0.0;
  func_0x000107c57f1c(param_5);
  lVar3 = *(long *)(unaff_x20 + _DAT_112f1d5b8);
  if (lVar3 != 0) {
    func_0x000107c61174();
    lVar4 = lVar3;
    FUN_102e1e90c();
    func_0x000107c3ec60();
    func_0x000107c61170(lVar4);
    lVar4 = _DAT_112f1d5c8;
    dVar9 = 0.5;
    if (0.5 < *(double *)(unaff_x20 + _DAT_112f1d5c8)) {
      dVar9 = *(double *)(unaff_x20 + _DAT_112f1d5c8);
    }
    dVar11 = 2.0;
    if (dVar9 <= 2.0) {
      dVar11 = dVar9;
    }
    *(double *)(unaff_x20 + _DAT_112f1d5c8) = dVar11;
    dVar9 = dVar8;
    func_0x000107c609cc(dVar8,dVar10,param_3,param_4);
    dVar11 = dVar8;
    func_0x000107c609cc(dVar8,dVar10,param_3,param_4);
    dVar6 = dVar8;
    func_0x000107c609cc(dVar8,dVar10,param_3,param_4);
    dVar11 = (double)(long)(dVar9 * 0.28) * 0.5 + (double)(long)(dVar11 * 0.022);
    pdVar1 = (double *)(unaff_x20 + _DAT_112f1d5c0);
    dVar9 = -(dVar6 * 0.5);
    if (-(dVar6 * 0.5) < *pdVar1) {
      dVar9 = *pdVar1;
    }
    dVar5 = dVar8;
    func_0x000107c609cc(dVar8,dVar10,param_3,param_4);
    dVar5 = dVar5 - dVar6 * 0.5;
    if (dVar9 <= dVar5) {
      dVar5 = dVar9;
    }
    *pdVar1 = dVar5;
    dVar9 = -dVar11;
    if (dVar9 < pdVar1[1]) {
      dVar9 = pdVar1[1];
    }
    dVar6 = dVar8;
    func_0x000107c609b0(dVar8,dVar10,param_3,param_4);
    dVar6 = dVar6 - dVar11;
    if (dVar9 <= dVar6) {
      dVar6 = dVar9;
    }
    pdVar1[1] = dVar6;
    uStack_f0 = 0x3ff0000000000000;
    uStack_e8 = 0;
    uStack_e0 = 0;
    dStack_d8 = 1.0;
    dStack_d0 = 0.0;
    uStack_c8 = 0;
    func_0x000107c6089c(&uStack_b0,*pdVar1,&uStack_f0);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar4);
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    dStack_d8 = (double)uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    dStack_d0 = (double)uStack_90;
    func_0x000107c60898(&uStack_b0,uVar7,uVar7,&uStack_f0);
    lVar2 = _DAT_112f1d5d0;
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    dStack_d8 = (double)uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    dStack_d0 = (double)uStack_90;
    func_0x000107c60894(&uStack_b0,*(undefined8 *)(unaff_x20 + _DAT_112f1d5d0),&uStack_f0);
    uStack_e8 = uStack_a8;
    uStack_f0 = uStack_b0;
    dStack_d8 = (double)uStack_98;
    uStack_e0 = uStack_a0;
    uStack_c8 = uStack_88;
    dStack_d0 = (double)uStack_90;
    func_0x000107c5a03c(lVar3);
    dVar9 = dVar8;
    func_0x000107c609cc(dVar8,dVar10,param_3,param_4);
    dVar11 = 0.0;
    dVar6 = 0.0;
    if (0.0 < dVar9) {
      dVar6 = *pdVar1;
      dVar9 = dVar8;
      func_0x000107c609cc(dVar8,dVar10,param_3,param_4);
      dVar6 = dVar6 / dVar9;
    }
    dVar9 = dVar8;
    func_0x000107c609b0(dVar8,dVar10,param_3,param_4);
    if (0.0 < dVar9) {
      dVar9 = pdVar1[1];
      func_0x000107c609b0(dVar8,dVar10,param_3,param_4);
      dVar11 = -dVar9 / dVar8;
    }
    uStack_e0 = *(undefined8 *)(unaff_x20 + _DAT_112f1d5b0);
    uStack_c8 = *(undefined8 *)(unaff_x20 + lVar4);
    dStack_c0 = -*(double *)(unaff_x20 + lVar2);
    dStack_d8 = dVar6;
    dStack_d0 = dVar11;
    func_0x000100087bd4(FUN_102e201ec,&uStack_f0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 102e1fd88; end: 102e1fdd7; -[_TtC21PlayGamesServicesImpl23PlayGamesViewController handleOverlayRotate:] */

/* WARNING: Possible PIC construction at 0x000102e1fdc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e1fdc4) */

void FUN_102e1fd88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102e1fd2c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102e1fdd8; end: 102e1fe23; -[_TtC21PlayGamesServicesImpl23PlayGamesViewController initWithNibName:bundle:] */

void FUN_102e1fdd8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("PlayGamesServicesImpl.PlayGamesViewController",0x2d,"init(nibName:bundle:)",
                      0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e1fe04);
  (*pcVar1)();
}



/* Entry: 102e1fe24; end: 102e1fe9b; -[_TtC21PlayGamesServicesImpl23PlayGamesViewController gestureRecognizer:shouldRecognizeSimultaneouslyWithGestureRecognizer:] */

uint FUN_102e1fe24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000102e20174(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102e1fe9c; end: 102e2001f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e1fe9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined *puVar4;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112f1d590;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = unaff_x20 + _DAT_112f1d598;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f1d5a0) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f1d5a8);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d5b8) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f1d5c0);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d5c8) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d5d0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f1d5d8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f1d5e0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f1d5e8) = 0;
  lVar3 = _DAT_112f1d5f0;
  puVar4 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_1126dbbe0;
  func_0x000107c610f8();
  func_0x000107c48b08();
  *(undefined **)(unaff_x20 + lVar3) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d5f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d600) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d608) = 0;
  *(undefined8 *)(lVar1 + 8) = param_2;
  func_0x000107c61604(lVar1,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112f1d5b0) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  return;
}



/* Entry: 102e20020; end: 102e201eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20020(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112f1d590;
  puVar4 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  lVar1 = unaff_x20 + _DAT_112f1d598;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f1d5a0) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f1d5a8);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 2) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d5b8) = 0;
  puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f1d5c0);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d5c8) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d5d0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f1d5d8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f1d5e0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f1d5e8) = 0;
  lVar1 = _DAT_112f1d5f0;
  puVar4 = PTR__OBJC_CLASS___UIImpactFeedbackGenerator_1126dbbe0;
  func_0x000107c610f8();
  func_0x000107c48b08();
  *(undefined **)(unaff_x20 + lVar1) = puVar4;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d5f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d600) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d608) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "PlayGamesServicesImpl/PlayGamesViewController.swift",0x33,2,0x4d,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x102e20174);
  (*pcVar3)();
}



/* Entry: 102e201ec; end: 102e2020b;  */

void FUN_102e201ec(void)

{
  long unaff_x20;
  
  FUN_102e04ca8(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 102e2020c; end: 102e2021b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e2020c(byte param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    *(byte *)(lVar1 + _DAT_112f1d5e0) = param_1 & 1;
    FUN_102e1f808();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102e2021c; end: 102e2023f;  */

undefined8 FUN_102e2021c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 102e20240; end: 102e20293;  */

void FUN_102e20240(void)

{
  long in_x4;
  
                    /* WARNING: Could not recover jumptable at 0x000100d284ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x4 + 0x10))();
  return;
}



/* Entry: 102e20294; end: 102e2033f;  */

void FUN_102e20294(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102e20340; end: 102e20513;  */

bool FUN_102e20340(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 102e20514; end: 102e20d17;  */

undefined1  [16] FUN_102e20514(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe3;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f10f7c0);
  uVar3 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f1105a0);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e205e0);
  (*pcVar1)();
}



/* Entry: 102e20d18; end: 102e20d23; -[SCPlayGamesSendingServiceProvider playGamesScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20d18(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1d638;
  func_0x000107c61428(param_1 + _DAT_112f1d638,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e20d24; end: 102e20d2f; -[SCPlayGamesSendingServiceProvider setPlayGamesScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20d24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f1d638;
  func_0x000107c61428(param_1 + _DAT_112f1d638,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e20d30; end: 102e20d3b; -[SCPlayGamesSendingServiceProvider conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20d30(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1d640;
  func_0x000107c61428(param_1 + _DAT_112f1d640,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e20d3c; end: 102e20d47; -[SCPlayGamesSendingServiceProvider setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20d3c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f1d640;
  func_0x000107c61428(param_1 + _DAT_112f1d640,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e20d48; end: 102e20d53; -[SCPlayGamesSendingServiceProvider snapDocEditorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20d48(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1d648;
  func_0x000107c61428(param_1 + _DAT_112f1d648,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e20d54; end: 102e20d5f; -[SCPlayGamesSendingServiceProvider setSnapDocEditorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20d54(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f1d648;
  func_0x000107c61428(param_1 + _DAT_112f1d648,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e20d60; end: 102e20d6b; -[SCPlayGamesSendingServiceProvider lensPreviewConfiguringServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20d60(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1d650;
  func_0x000107c61428(param_1 + _DAT_112f1d650,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e20d6c; end: 102e20d77; -[SCPlayGamesSendingServiceProvider setLensPreviewConfiguringServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20d6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f1d650;
  func_0x000107c61428(param_1 + _DAT_112f1d650,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e20d78; end: 102e20d83; -[SCPlayGamesSendingServiceProvider playGamesLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20d78(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1d658;
  func_0x000107c61428(param_1 + _DAT_112f1d658,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e20d84; end: 102e20d8f; -[SCPlayGamesSendingServiceProvider setPlayGamesLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20d84(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f1d658;
  func_0x000107c61428(param_1 + _DAT_112f1d658,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e20d90; end: 102e20d9b; -[SCPlayGamesSendingServiceProvider sendFlowScopeBuilderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20d90(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1d660;
  func_0x000107c61428(param_1 + _DAT_112f1d660,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e20d9c; end: 102e20da7; -[SCPlayGamesSendingServiceProvider setSendFlowScopeBuilderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f1d660;
  func_0x000107c61428(param_1 + _DAT_112f1d660,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e20da8; end: 102e20db3; -[SCPlayGamesSendingServiceProvider previewVideoProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20da8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1d668;
  func_0x000107c61428(param_1 + _DAT_112f1d668,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e20db4; end: 102e20dbf; -[SCPlayGamesSendingServiceProvider setPreviewVideoProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20db4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f1d668;
  func_0x000107c61428(param_1 + _DAT_112f1d668,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e20dc0; end: 102e20dcb; -[SCPlayGamesSendingServiceProvider previewFilterDataProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20dc0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1d670;
  func_0x000107c61428(param_1 + _DAT_112f1d670,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102e20dcc; end: 102e20e0f;  */

void FUN_102e20dcc(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 102e20e10; end: 102e20e1b; -[SCPlayGamesSendingServiceProvider setPreviewFilterDataProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f1d670;
  func_0x000107c61428(param_1 + _DAT_112f1d670,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e20e1c; end: 102e20e6f;  */

void FUN_102e20e1c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102e20e70; end: 102e20eb7; -[SCPlayGamesSendingServiceProvider sendFlowScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20e70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f1d678;
  func_0x000107c61428(param_1 + _DAT_112f1d678,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 102e20eb8; end: 102e20f1b; -[SCPlayGamesSendingServiceProvider setSendFlowScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20eb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f1d678;
  func_0x000107c61428(param_1 + _DAT_112f1d678,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 102e20f1c; end: 102e21273;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e20f1c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c4e88c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c40080();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c5b1bc();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4b338();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          func_0x000107c61170(lVar2);
          lVar1 = lVar3;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c4e880();
          func_0x000107c61180();
          if (lVar5 == 0) {
            func_0x000107c61170(lVar1);
            func_0x000107c61170(lVar2);
            func_0x000107c61170(lVar3);
            lVar1 = lVar4;
          }
          else {
            lVar6 = unaff_x20;
            func_0x000107c51dec();
            func_0x000107c61180();
            if (lVar6 == 0) {
              func_0x000107c61170(lVar1);
              func_0x000107c61170(lVar2);
              func_0x000107c61170(lVar3);
              func_0x000107c61170(lVar4);
              lVar1 = lVar5;
            }
            else {
              lVar7 = unaff_x20;
              func_0x000107c51df0();
              func_0x000107c61180();
              if (lVar7 == 0) {
                func_0x000107c61170(lVar1);
                func_0x000107c61170(lVar2);
                func_0x000107c61170(lVar3);
                func_0x000107c61170(lVar4);
                func_0x000107c61170(lVar5);
                lVar1 = lVar6;
              }
              else {
                lVar8 = unaff_x20;
                func_0x000107c4f1dc();
                func_0x000107c61180();
                if (lVar8 == 0) {
                  func_0x000107c61170(lVar1);
                  func_0x000107c61170(lVar2);
                  func_0x000107c61170(lVar3);
                  func_0x000107c61170(lVar4);
                  func_0x000107c61170(lVar5);
                  func_0x000107c61170(lVar6);
                  lVar1 = lVar7;
                }
                else {
                  lVar9 = unaff_x20;
                  func_0x000107c4f130();
                  func_0x000107c61180();
                  if (lVar9 != 0) {
                    lVar10 = 0;
                    func_0x000102e0c6c4();
                    func_0x000107c613fc();
                    *(long *)(lVar10 + 0x10) = lVar1;
                    *(long *)(lVar10 + 0x18) = lVar3;
                    *(long *)(lVar10 + 0x20) = lVar4;
                    *(long *)(lVar10 + 0x28) = lVar5;
                    *(long *)(lVar10 + 0x30) = lVar7;
                    *(long *)(lVar10 + 0x38) = lVar6;
                    *(long *)(lVar10 + 0x40) = lVar8;
                    *(long *)(lVar10 + 0x48) = lVar9;
                    uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112f1d680);
                    *(long *)(unaff_x20 + _DAT_112f1d680) = lVar10;
                    func_0x000107c61174(lVar1);
                    func_0x000107c61174();
                    func_0x000107c61174();
                    func_0x000107c61174(lVar5);
                    func_0x000107c61174(lVar6);
                    func_0x000107c61174(lVar7);
                    func_0x000107c61174(lVar8);
                    func_0x000107c61174(lVar9);
                    func_0x000107c6157c(lVar10);
                    func_0x000107c61574(uVar11);
                    func_0x000102e0c314();
                    func_0x000107c61170(lVar1);
                    func_0x000107c61170(lVar2);
                    func_0x000107c61170(lVar3);
                    func_0x000107c61170(lVar4);
                    func_0x000107c61170(lVar5);
                    func_0x000107c61170(lVar6);
                    func_0x000107c61170(lVar7);
                    func_0x000107c61170(lVar8);
                    func_0x000107c61170(lVar9);
                    func_0x000107c61574(lVar10);
                    return;
                  }
                  func_0x000107c61170(lVar1);
                  func_0x000107c61170(lVar2);
                  func_0x000107c61170(lVar3);
                  func_0x000107c61170(lVar4);
                  func_0x000107c61170(lVar5);
                  func_0x000107c61170(lVar6);
                  func_0x000107c61170(lVar7);
                  lVar1 = lVar8;
                }
              }
            }
          }
        }
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 102e21274; end: 102e212ff; -[SCPlayGamesSendingServiceProvider provide] */

void FUN_102e21274(long param_1)

{
  code *pcVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar2 = param_1;
  FUN_102e20f1c();
  if (lVar2 != 0) {
    func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
    return;
  }
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000021,0x800000010ef118a0,
                      "PlayGamesServicesImpl/SCPlayGamesSendingServiceProvider.swift",0x3d,2,0x2e,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102e21300);
  (*pcVar1)();
}



/* Entry: 102e21300; end: 102e21333; -[SCPlayGamesSendingServiceProvider __safeProvide] */

void FUN_102e21300(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102e20f1c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102e21334; end: 102e21377; -[SCPlayGamesSendingServiceProvider end] */

void FUN_102e21334(undefined8 param_1)

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



/* Entry: 102e21378; end: 102e217fb;  */

void FUN_102e21378(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x656d614779616c70 && param_3 == -0x11ff9a8f909cac8d) ||
     (func_0x000107c605b8(0x656d614779616c70,0xee0065706f635373,param_2,param_3,0), (uVar2 & 1) != 0
     )) {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c5747c();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10ef650)) ||
       (func_0x000107c605b8(0xd000000000000012,0x800000010ef109b0,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c53720();
    }
    else {
      uVar2 = 0xd000000000000015;
      if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10e2010)) ||
         (func_0x000107c605b8(0xd000000000000015,0x800000010ef1dff0,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5935c();
      }
      else {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffe2) && (param_3 == -0x7ffffffef10dbb20)) ||
           (func_0x000107c605b8(0xd00000000000001e,0x800000010ef244e0,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55e08();
        }
        else {
          uVar2 = 0;
          if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef0eef920)) ||
             (func_0x000107c605b8(0xd000000000000018,0x800000010f1106e0,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c57470();
          }
          else {
            if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef10ca250)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd00000000000001c,0x800000010ef35db0,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                if ((param_2 != -0x2fffffffffffffe4) || (param_3 != -0x7ffffffef10d4b50)) {
                  uVar2 = 0;
                  func_0x000107c605b8(0xd00000000000001c,0x800000010ef2b4b0,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    uVar2 = 0xd000000000000021;
                    if (((param_2 == -0x2fffffffffffffdf) && (param_3 == -0x7ffffffef0fe5ea0)) ||
                       (func_0x000107c605b8(0xd000000000000021,0x800000010f01a160,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c5779c();
                    }
                    else {
                      uVar2 = 0;
                      if (((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10ca230)) &&
                         (func_0x000107c605b8(0xd000000000000014,0x800000010ef35dd0,param_2,param_3,
                                              0), (uVar2 & 1) == 0)) {
                        func_0x000107c602fc(0x15);
                        func_0x000107c6142c(0xe000000000000000);
                        func_0x000107c5fb78(param_2,param_3);
                        func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,
                                            0x800000010ef0fc20,
                                            "PlayGamesServicesImpl/SCPlayGamesSendingServiceProvider.swift"
                                            ,0x3d,2,0x51,0);
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x102e217fc);
                        (*pcVar1)();
                      }
                      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c58eac();
                    }
                    goto LAB_102e2140c;
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c5780c();
                goto LAB_102e2140c;
              }
            }
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c58ea8();
          }
        }
      }
    }
  }
LAB_102e2140c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 102e217fc; end: 102e218a7; -[SCPlayGamesSendingServiceProvider setValue:forIvarName:] */

void FUN_102e217fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_102e21378(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 102e218a8; end: 102e2199f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e218a8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f1d638,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f1d640,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f1d648,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f1d650,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f1d658,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f1d660,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f1d668,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f1d670,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f1d678) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112f1d680) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102e219a0; end: 102e219bf; -[SCPlayGamesSendingServiceProvider init] */

void FUN_102e219a0(void)

{
  FUN_102e218a8();
  return;
}



/* Entry: 102e219c0; end: 102e219f3;  */

void FUN_102e219c0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102e219f4; end: 102e21aab; -[SCPlayGamesSendingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102e219f4(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f1d638);
  func_0x000107c61610(param_1 + _DAT_112f1d640);
  func_0x000107c61610(param_1 + _DAT_112f1d648);
  func_0x000107c61610(param_1 + _DAT_112f1d650);
  func_0x000107c61610(param_1 + _DAT_112f1d658);
  func_0x000107c61610(param_1 + _DAT_112f1d660);
  func_0x000107c61610(param_1 + _DAT_112f1d668);
  func_0x000107c61610(param_1 + _DAT_112f1d670);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f1d678));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f1d680));
  return;
}



/* Entry: 102e21aac; end: 102e21acb;  */

void FUN_102e21aac(void)

{
  func_0x000107c61168(&PTR_PTR_112f1d6c8);
  return;
}



/* Entry: 102e21acc; end: 102e2241b;  */

void FUN_102e21acc(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*param_1);
  return;
}



/* Entry: 102e2241c; end: 102e22547; -[_TtC18LensInfoButtonImpl29LensInfoButtonAttributionView initWithCoder:] */

undefined8 FUN_102e2241c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000102e22fc8();
  func_0x000107c61174(param_3);
  return param_1;
}



/* Entry: 102e22548; end: 102e226c7;  */

/* WARNING: Possible PIC construction at 0x000102e225d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e225ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e2261c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e2263c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e22674: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102e226a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102e22678) */
/* WARNING: Removing unreachable block (ram,0x000102e22684) */
/* WARNING: Removing unreachable block (ram,0x000102e22694) */
/* WARNING: Removing unreachable block (ram,0x000102e22640) */
/* WARNING: Removing unreachable block (ram,0x000102e22660) */
/* WARNING: Removing unreachable block (ram,0x000102e22644) */
/* WARNING: Removing unreachable block (ram,0x000102e22620) */
/* WARNING: Removing unreachable block (ram,0x000102e225f0) */
/* WARNING: Removing unreachable block (ram,0x000102e225fc) */
/* WARNING: Removing unreachable block (ram,0x000102e2260c) */
/* WARNING: Removing unreachable block (ram,0x000102e225d4) */
/* WARNING: Removing unreachable block (ram,0x000102e22628) */
/* WARNING: Removing unreachable block (ram,0x000102e225d8) */
/* WARNING: Removing unreachable block (ram,0x000102e226a8) */

void FUN_102e22548(undefined8 param_1)

{
  FUN_102e22a30();
  func_0x000107c550d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102e226c8; end: 102e2277b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e226c8(void)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  
  lVar3 = _DAT_112f1d770;
  lVar4 = *(long *)(unaff_x20 + _DAT_112f1d770);
  lVar5 = lVar4;
  if (lVar4 == 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112f1d768);
    lVar5 = *plVar1;
    FUN_102e23074(lVar5,plVar1[1]);
    lVar4 = plVar1[0xe];
    lVar2 = plVar1[0xf];
    func_0x000107c61174();
    func_0x000107c5fadc(lVar4,lVar2);
    func_0x000107c520f4(lVar5);
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar5;
    func_0x000107c61174(lVar5);
    func_0x000107c61170(uVar6);
    lVar4 = 0;
  }
  func_0x000107c61174(lVar4);
  return lVar5;
}



/* Entry: 102e2277c; end: 102e227eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e2277c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f1d778;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f1d778);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112f1d768 + 0x10);
    FUN_102e23074(lVar3,*(undefined8 *)(unaff_x20 + _DAT_112f1d768 + 0x18));
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 102e227ec; end: 102e228eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102e227ec(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _DAT_112f1d780;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f1d780);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c46db4();
    func_0x000107c61180();
    func_0x000107c5a050();
    puVar2 = PTR_PTR_1126b08d8;
    func_0x000107c61168(PTR_PTR_1126b08d8);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    func_0x000107c5af88();
    func_0x000107c61180();
    func_0x000100b74f58(0x4020000000000000,0x3fe0000000000000,0,0x4000000000000000,puVar2,puVar3,
                        puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar4);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar5);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 102e228ec; end: 102e22903;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102e228ec(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  lVar1 = _DAT_112f1d788;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112f1d788);
  puVar6 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    lVar3 = *(long *)(unaff_x20 + _DAT_112f1d768 + 0x38);
    if (lVar3 == 0) {
      lVar3 = 0;
    }
    else {
      func_0x000107c4507c();
      func_0x000107c61180();
    }
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c46db4();
    puVar4 = PTR_PTR_1126b08d8;
    func_0x000107c61168(PTR_PTR_1126b08d8);
    puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    puVar6 = puVar2;
    func_0x000107c61174(puVar2);
    func_0x000107c5af88(puVar5);
    func_0x000107c61180();
    func_0x000100b74f58(0x4010000000000000,0x3ff0000000000000,0,0,puVar4,puVar6,puVar5);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    uVar7 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar2;
    func_0x000107c61174(puVar6);
    func_0x000107c61170(uVar7);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar6;
}



/* Entry: 102e22904; end: 102e22a2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102e22904(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  
  lVar7 = *param_1;
  puVar1 = *(undefined **)(unaff_x20 + lVar7);
  puVar5 = puVar1;
  if (puVar1 == (undefined *)0x0) {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f1d768 + 0x38);
    if (lVar2 == 0) {
      lVar2 = 0;
    }
    else {
      func_0x000107c4507c();
      func_0x000107c61180();
    }
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c46db4();
    puVar3 = PTR_PTR_1126b08d8;
    func_0x000107c61168(PTR_PTR_1126b08d8);
    puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
    puVar5 = puVar1;
    func_0x000107c61174(puVar1);
    func_0x000107c5af88(puVar4);
    func_0x000107c61180();
    func_0x000100b74f58(0x4010000000000000,0x3ff0000000000000,0,0,puVar3,puVar5,puVar4);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    uVar6 = *(undefined8 *)(unaff_x20 + lVar7);
    *(undefined **)(unaff_x20 + lVar7) = puVar1;
    func_0x000107c61174(puVar5);
    func_0x000107c61170(uVar6);
    puVar1 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar1);
  return puVar5;
}



/* Entry: 102e22a30; end: 102e22a43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_102e22a30(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112f1d798;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f1d798);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_102e22a44();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 102e22a44; end: 102e22b0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102e22a44(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  func_0x000107c453e4();
  func_0x000107c534b0();
  func_0x000107c52b2c(puVar1,param_2,0);
  func_0x000107c59594(*(undefined8 *)(param_1 + _DAT_112f1d768 + 0x50),puVar1);
  puVar2 = puVar1;
  func_0x000107c52610(puVar1,param_2,3);
  FUN_102e226c8();
  func_0x000107c5a050();
  func_0x000107c61170(puVar2);
  func_0x000102e228f8();
  func_0x000107c5a050();
  func_0x000107c61170(puVar2);
  func_0x000107c3d5b4(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_112f1d770));
  func_0x000107c3d5b4(puVar1,param_2,*(undefined8 *)(param_1 + _DAT_112f1d790));
  return puVar1;
}


