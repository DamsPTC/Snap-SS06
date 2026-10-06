/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036bf6dc; end: 1036bf72f;  */

void FUN_1036bf6dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036bf730; end: 1036bf7bb; -[_TtC32SCLensPlusServicesImplementation31CompositeLensPreviewCTAProvider ctaViewFor:] */

void FUN_1036bf730(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174();
  uVar2 = param_3;
  func_0x000107c49e80();
  plVar1 = (long *)&DAT_112f870c0;
  if ((int)uVar2 == 0) {
    plVar1 = (long *)&DAT_112f870b8;
  }
  uVar2 = *(undefined8 *)(param_1 + *plVar1);
  func_0x000107c40e14(uVar2,param_2,param_3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1036bf7bc; end: 1036bf81b; -[_TtC32SCLensPlusServicesImplementation31CompositeLensPreviewCTAProvider init] */

void FUN_1036bf7bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.CompositeLensPreviewCTAProvider",0x40,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036bf7e8);
  (*pcVar1)();
}



/* Entry: 1036bf81c; end: 1036bf853; -[_TtC32SCLensPlusServicesImplementation31CompositeLensPreviewCTAProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036bf838: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036bf83c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bf81c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f870b8));
  return;
}



/* Entry: 1036bf854; end: 1036bf873;  */

void FUN_1036bf854(void)

{
  func_0x000107c61168(&PTR_PTR_1128e15a8);
  return;
}



/* Entry: 1036bf874; end: 1036bf8ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bf874(long *param_1,code *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 + *param_1);
  if ((char)plVar1[1] == '\x01') {
    lVar2 = *(long *)(unaff_x20 + _DAT_112f87100);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar3 = lVar2;
    if (lVar2 != 0) {
      (*param_2)();
      func_0x000107c615e8(lVar2);
    }
    *plVar1 = lVar3;
    *(undefined1 *)(plVar1 + 1) = 0;
  }
  return;
}



/* Entry: 1036bf8f0; end: 1036bfcf7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bf8f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar2 = _DAT_112f87108;
  uVar3 = 0;
  func_0x00010006a340();
  func_0x000107c613fc();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f87110) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f87118);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f87120);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112f870f0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f870f8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f87100) = param_3;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1036bfcf8; end: 1036bfd7f; -[_TtC32SCLensPlusServicesImplementation30LensPlusCreditsFreemiumAdapter isLensFreemiumSessionAvailable:] */

uint FUN_1036bfcf8(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong *puVar2;
  
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  puVar1 = param_3;
  func_0x0001036bf9dc();
  puVar2 = puVar1;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar1) + 0x70))();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar1);
  return (uint)puVar2 & 1;
}



/* Entry: 1036bfd80; end: 1036bfe23; -[_TtC32SCLensPlusServicesImplementation30LensPlusCreditsFreemiumAdapter startFreemiumSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bfd80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c61174();
  func_0x000107c61174();
  uVar1 = param_3;
  func_0x0001036bf9dc();
  uStack_50 = param_1;
  uStack_48 = uVar1;
  func_0x000100087bd4(FUN_1036c0a50,auStack_60,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1036bfe24; end: 1036bff33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bfe24(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  lVar2 = _DAT_112f87110;
  lVar3 = *(long *)(param_1 + _DAT_112f87110);
  if (lVar3 != 0) {
    uVar5 = *(ulong *)(lVar3 + _DAT_113036370);
    uVar1 = ((ulong *)(lVar3 + _DAT_113036370))[1];
    uVar7 = param_2;
    func_0x000107c61174();
    func_0x000107c61434(uVar1);
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar4 = param_2;
    func_0x000107c5faec();
    func_0x000107c61170(param_2);
    if (uVar5 == uVar4 && uVar1 == uVar7) {
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(lVar3);
    }
    else {
      func_0x000107c605b8(uVar5,uVar1,uVar4,uVar7,0);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(uVar7);
      func_0x000107c61170(lVar3);
      if ((uVar5 & 1) == 0) {
        return;
      }
    }
    uVar6 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = 0;
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 1036bff34; end: 1036bffb7; -[_TtC32SCLensPlusServicesImplementation30LensPlusCreditsFreemiumAdapter endFreemiumSession:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bff34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100087bd4(FUN_1036c0a38,auStack_50,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1036bffb8; end: 1036c0033; -[_TtC32SCLensPlusServicesImplementation30LensPlusCreditsFreemiumAdapter getActiveLensFreemiumState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036bffb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_40 = param_1;
  func_0x000107c61174();
  uVar1 = 0x112f87150;
  func_0x0001000285a8(0x112f87150,&UNK_10dbfb280);
  func_0x000100087bd4(&uStack_38,0x1036c0ab8,auStack_50,uVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uStack_38);
  return;
}



/* Entry: 1036c0034; end: 1036c016b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c0034(ulong param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  undefined1 auStack_70 [16];
  long lStack_58;
  
  uVar2 = 0x112f87150;
  func_0x0001000285a8(0x112f87150,&UNK_10dbfb280);
  puVar6 = auStack_70;
  func_0x000100087bd4(&lStack_58,0x1036c0aa4,puVar6,uVar2);
  if (lStack_58 != 0) {
    uVar5 = *(ulong *)(lStack_58 + _DAT_113036370);
    puVar1 = (undefined1 *)((ulong *)(lStack_58 + _DAT_113036370))[1];
    func_0x000107c61434(puVar1);
    uVar3 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5faec();
    func_0x000107c61170(uVar3);
    if (uVar5 == uVar4 && puVar1 == puVar6) {
      func_0x000107c6142c(puVar1);
      func_0x000107c6142c(puVar6);
      return;
    }
    func_0x000107c605b8(uVar5,puVar1,uVar4,puVar6,0);
    func_0x000107c6142c(puVar1);
    func_0x000107c6142c(puVar6);
    if ((uVar5 & 1) != 0) {
      return;
    }
    func_0x000107c61170(lStack_58);
  }
  func_0x0001036bf9dc(param_1);
  return;
}



/* Entry: 1036c016c; end: 1036c01c7; -[_TtC32SCLensPlusServicesImplementation30LensPlusCreditsFreemiumAdapter getFreemiumState:] */

void FUN_1036c016c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1036c0034(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036c01c8; end: 1036c01f7; -[_TtC32SCLensPlusServicesImplementation30LensPlusCreditsFreemiumAdapter getNonLensFreemiumState:] */

void FUN_1036c01c8(void)

{
  func_0x000103f6f61c(0);
  func_0x000103f6f6f4(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1036c01f8; end: 1036c01ff; -[_TtC32SCLensPlusServicesImplementation30LensPlusCreditsFreemiumAdapter claimFreemiumTry:] */

undefined8 FUN_1036c01f8(void)

{
  return 0;
}



/* Entry: 1036c0200; end: 1036c0307;  */

undefined1  [16] FUN_1036c0200(ulong *param_1)

{
  ulong *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auVar4 [16];
  
  FUN_1036c0034();
  puVar2 = PTR__swift_isaMask_11034f488;
  puVar1 = param_1;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *param_1) + 0x70))();
  if (((ulong)puVar1 & 1) == 0) {
    (**(code **)((*(ulong *)puVar2 & *param_1) + 0x80))();
    if (((ulong)puVar1 & 1) != 0) {
      puVar2 = &DAT_112f87118;
      puVar3 = &UNK_108c2c16c;
      FUN_1036bf874(&DAT_112f87118,&UNK_108c2c16c);
      if ((long)puVar2 < 2) {
        if ((puVar2 != (undefined *)0x0) && (puVar2 == (undefined *)0x1)) {
          func_0x0001036e2c9c();
LAB_1036c0268:
          func_0x000107c61170(param_1);
          goto LAB_1036c02f0;
        }
      }
      else if (puVar2 == (undefined *)0x2) {
        func_0x0001036e2d64();
        goto LAB_1036c0268;
      }
    }
  }
  else {
    puVar2 = &DAT_112f87120;
    puVar3 = &UNK_108c2c1a0;
    FUN_1036bf874(&DAT_112f87120,&UNK_108c2c1a0);
    if (puVar2 != (undefined *)0x2) {
      FUN_1036e2bd0();
      goto LAB_1036c0268;
    }
  }
  func_0x000107c61170(param_1);
  puVar2 = (undefined *)0x0;
  puVar3 = (undefined *)0x0;
LAB_1036c02f0:
  auVar4._8_8_ = puVar3;
  auVar4._0_8_ = puVar2;
  return auVar4;
}



/* Entry: 1036c0308; end: 1036c038f; -[_TtC32SCLensPlusServicesImplementation30LensPlusCreditsFreemiumAdapter freemiumCTAButtonTitle:] */

void FUN_1036c0308(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1036c0200(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    func_0x000107c5fadc(uVar1,param_2);
    func_0x000107c6142c(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036c0390; end: 1036c04ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1036c0390(ulong param_1,ulong param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 auStack_60 [16];
  ulong *puStack_48;
  
  uVar3 = 0x112f87150;
  func_0x0001000285a8(0x112f87150,&UNK_10dbfb280);
  func_0x000100087bd4(&puStack_48,FUN_1036c0a90,auStack_60,uVar3);
  if (puStack_48 != (ulong *)0x0) {
    uVar4 = *(ulong *)((long)puStack_48 + _DAT_113036370);
    uVar1 = ((ulong *)((long)puStack_48 + _DAT_113036370))[1];
    if ((uVar4 == param_1 && uVar1 == param_2) ||
       (func_0x000107c605b8(uVar4,uVar1,param_1,param_2,0), (uVar4 & 1) != 0)) {
      iVar2 = (int)uVar4;
      (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puStack_48) + 0x78))();
      if (0 < iVar2) {
        puVar5 = &DAT_112f87120;
        FUN_1036bf874(&DAT_112f87120,&UNK_108c2c1a0);
        func_0x000107c61170(puStack_48);
        return puVar5 == (undefined *)0x2;
      }
    }
    func_0x000107c61170(puStack_48);
  }
  return false;
}



/* Entry: 1036c04ac; end: 1036c04b7; -[_TtC32SCLensPlusServicesImplementation30LensPlusCreditsFreemiumAdapter freemiumShouldHideUnlockedCTAButton:] */

uint FUN_1036c04ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1036c0390(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 1036c04b8; end: 1036c05cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1036c04b8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 auStack_60 [16];
  ulong *puStack_48;
  
  uVar2 = 0x112f87150;
  func_0x0001000285a8(0x112f87150,&UNK_10dbfb280);
  func_0x000100087bd4(&puStack_48,FUN_1036c0a00,auStack_60,uVar2);
  if (puStack_48 != (ulong *)0x0) {
    uVar3 = *(ulong *)((long)puStack_48 + _DAT_113036370);
    uVar1 = ((ulong *)((long)puStack_48 + _DAT_113036370))[1];
    if (((uVar3 == param_1 && uVar1 == param_2) ||
        (func_0x000107c605b8(uVar3,uVar1,param_1,param_2,0), (uVar3 & 1) != 0)) &&
       ((**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puStack_48) + 0x80))(),
       (uVar3 & 1) != 0)) {
      puVar4 = &DAT_112f87118;
      FUN_1036bf874(&DAT_112f87118,&UNK_108c2c16c);
      func_0x000107c61170(puStack_48);
      return puVar4 == (undefined *)0x3;
    }
    func_0x000107c61170(puStack_48);
  }
  return false;
}



/* Entry: 1036c05d0; end: 1036c05db; -[_TtC32SCLensPlusServicesImplementation30LensPlusCreditsFreemiumAdapter freemiumShouldHideLockedCTAButton:] */

uint FUN_1036c05d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_1036c04b8(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 1036c05dc; end: 1036c0643;  */

uint FUN_1036c05dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  (*param_4)(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return (uint)param_3 & 1;
}



/* Entry: 1036c0644; end: 1036c075b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036c0644(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f87100);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4fe18();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar2 = param_1;
      func_0x000107c4fe2c();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c5fe10(lVar2,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
        func_0x000107c61170(lVar2);
        lVar2 = lVar1;
        func_0x000108c2bc54(lVar1);
        func_0x000107c61180();
        lVar4 = lVar2;
        func_0x000107c5fe10();
        func_0x000107c61170(lVar2);
        lVar2 = lVar3;
        FUN_1036c075c(lVar3,lVar4);
        func_0x000107c6142c(lVar3);
        func_0x000107c6142c(lVar4);
        func_0x000107c615e8(lVar1);
        uVar5 = (uint)lVar2 ^ 1;
        goto LAB_1036c0744;
      }
    }
    func_0x000107c615e8(lVar1);
  }
  uVar5 = 0;
LAB_1036c0744:
  return uVar5 & 1;
}



/* Entry: 1036c075c; end: 1036c0937;  */

undefined8 FUN_1036c075c(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_a8 [72];
  
  if ((*(ulong *)(param_2 + 0x10) == 0) || (*(ulong *)(param_1 + 0x10) == 0)) {
    uVar12 = 1;
  }
  else {
    uVar13 = param_1;
    if (*(ulong *)(param_1 + 0x10) <= *(ulong *)(param_2 + 0x10)) {
      uVar13 = param_2;
      param_2 = param_1;
    }
    uVar8 = *(ulong *)(param_2 + 0x38);
    uVar10 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
    uVar14 = 0xffffffffffffffff;
    if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
      uVar14 = ~(-1L << (uVar10 & 0x3f));
    }
    func_0x000107c61434(param_2);
    func_0x000107c61434(uVar13);
    lVar15 = 0;
    uVar14 = uVar14 & uVar8;
    while( true ) {
      while (uVar8 = uVar14, uVar8 != 0) {
        uVar14 = uVar8 - 1 & uVar8;
        if (*(long *)(uVar13 + 0x10) != 0) {
          uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          puVar1 = (ulong *)(*(long *)(param_2 + 0x30) +
                             LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) * 0x10 + lVar15 * 0x400);
          uVar8 = *puVar1;
          uVar2 = puVar1[1];
          func_0x000107c6068c(auStack_a8,*(undefined8 *)(uVar13 + 0x28));
          func_0x000107c61434(uVar2);
          puVar6 = auStack_a8;
          func_0x000107c5fb58(puVar6,uVar8,uVar2);
          func_0x000107c606a8();
          uVar9 = -1L << ((ulong)*(byte *)(uVar13 + 0x20) & 0x3f);
          uVar11 = (ulong)puVar6 & (uVar9 ^ 0xffffffffffffffff);
          if ((*(ulong *)(uVar13 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
            do {
              puVar1 = (ulong *)(*(long *)(uVar13 + 0x30) + uVar11 * 0x10);
              uVar7 = *puVar1;
              uVar3 = puVar1[1];
              if ((uVar7 == uVar8 && uVar3 == uVar2) ||
                 (func_0x000107c605b8(uVar7,uVar3,uVar8,uVar2,0), (uVar7 & 1) != 0)) {
                func_0x000107c6142c(uVar13);
                uVar12 = 0;
                uVar13 = uVar2;
                goto LAB_1036c0900;
              }
              uVar11 = uVar11 + 1 & ~uVar9;
            } while ((*(ulong *)(uVar13 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
          }
          func_0x000107c6142c(uVar2);
        }
      }
      bVar5 = SCARRY8(lVar15,1);
      lVar15 = lVar15 + 1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1036c0938);
        (*pcVar4)();
      }
      if ((long)(uVar10 + 0x3f >> 6) <= lVar15) break;
      uVar14 = ((ulong *)(param_2 + 0x38))[lVar15];
    }
    uVar12 = 1;
LAB_1036c0900:
    func_0x000107c61574(param_2);
    func_0x000107c6142c(uVar13);
  }
  return uVar12;
}



/* Entry: 1036c0938; end: 1036c0997; -[_TtC32SCLensPlusServicesImplementation30LensPlusCreditsFreemiumAdapter init] */

void FUN_1036c0938(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.LensPlusCreditsFreemiumAdapter",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036c0964);
  (*pcVar1)();
}



/* Entry: 1036c0998; end: 1036c09ff; -[_TtC32SCLensPlusServicesImplementation30LensPlusCreditsFreemiumAdapter .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036c09d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036c09d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c0998(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f870f0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f870f8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f87100));
  return;
}



/* Entry: 1036c0a00; end: 1036c0a37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c0a00(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f87110);
  func_0x000107c61174();
  return;
}



/* Entry: 1036c0a38; end: 1036c0a4f;  */

void FUN_1036c0a38(void)

{
  long unaff_x20;
  
  FUN_1036bfe24(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 1036c0a50; end: 1036c0a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c0a50(void)

{
  long unaff_x20;
  
  if (*(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f87110) == 0) {
    *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112f87110) =
         *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c61174();
  }
  return;
}



/* Entry: 1036c0a90; end: 1036c0acb;  */

void FUN_1036c0a90(void)

{
  FUN_1036c0a00();
  return;
}



/* Entry: 1036c0acc; end: 1036c0ba7;  */

void FUN_1036c0acc(void)

{
  func_0x000107c614f0();
  func_0x0001036c0b10();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036c0ba8; end: 1036c0bff; -[_TtC32SCLensPlusServicesImplementation29LensPlusGameLensUpsellManager dealloc] */

void FUN_1036c0ba8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61174();
  func_0x0001036c0b10();
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61154(&uStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1036c0c00; end: 1036c0cab; -[_TtC32SCLensPlusServicesImplementation29LensPlusGameLensUpsellManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001036c0c7c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036c0c80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c0c00(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f87158));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f87160));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f87168));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f87170));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f87178));
  FUN_1036c204c(param_1 + _DAT_112f87180);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f87188));
  return;
}



/* Entry: 1036c0cac; end: 1036c0e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c0cac(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  ppuVar7 = &puStack_90;
  if ((*(byte *)(unaff_x20 + _DAT_112f871a0) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112f871a0) = 1;
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f87170);
    uVar2 = uVar8;
    func_0x000107c41b80(uVar8);
    func_0x000107c61180();
    puVar6 = &UNK_1106806e0;
    puVar3 = puVar6;
    func_0x000107c613fc(&UNK_1106806e0,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x1036c203c;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100c1de60;
    puStack_78 = &UNK_110680798;
    puStack_68 = puVar3;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    uVar5 = uVar2;
    func_0x000107c5c320(uVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c3e924(uVar5);
    func_0x000107c61170(uVar5);
    func_0x000107c419f0(uVar8);
    func_0x000107c61180();
    func_0x000107c613fc(&UNK_1106806e0,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    uStack_70 = 0x1036c2044;
    puStack_90 = puVar1;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_100c1de60;
    puStack_78 = &UNK_1106807c0;
    puStack_68 = puVar6;
    func_0x000107c60bc4(&puStack_90);
    func_0x000107c61574(puStack_68);
    uVar2 = uVar8;
    func_0x000107c5c320(uVar8);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(uVar8);
    func_0x000107c3e924(uVar2);
    func_0x000107c61170(uVar2);
  }
  return;
}



/* Entry: 1036c0e84; end: 1036c0fd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c0e84(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112f87188;
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + _DAT_112f87188);
    *(bool *)(param_2 + _DAT_112f87190) = lVar2 != 0;
    func_0x000107c498f8(lVar2);
    uVar3 = *(undefined8 *)(param_2 + lVar1);
    *(undefined8 *)(param_2 + lVar1) = 0;
    func_0x000107c61170(param_2);
    func_0x000107c61170(uVar3);
  }
  return;
}



/* Entry: 1036c0fd8; end: 1036c115b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1036c0fd8(ulong param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 auStack_68 [3];
  ulong uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  uVar3 = auStack_68[0];
  func_0x000107c49f94();
  func_0x000107c615e8(auStack_68[0]);
  uVar4 = 0;
  uVar6 = 0;
  if (((int)uVar3 != 0) && ((param_2 & 1) != 0)) {
    func_0x0001000d224c(auStack_68,0,0);
    lVar1 = lStack_48;
    uVar5 = uStack_50;
    func_0x0001000a8868(auStack_68,uStack_50);
    (**(code **)(lVar1 + 0xc0))(uVar5,lVar1);
    func_0x0001000834e4(auStack_68);
    if ((uVar5 & 1) == 0) {
      uVar4 = 0xd000000000000022;
      uVar6 = 0x800000010f159460;
    }
    else {
      func_0x000107c4b31c();
      func_0x000107c61180();
      if (param_1 != 0) {
        uVar5 = param_1;
        func_0x000107c5d294();
        func_0x000107c61170(param_1);
        if ((uVar5 & 1) != 0) {
          uVar4 = 0;
          uVar6 = 0;
          goto LAB_1036c1144;
        }
      }
      func_0x0001000d224c(auStack_68);
      func_0x0001000a8868(auStack_68,uStack_50);
      uVar5 = uStack_50;
      (**(code **)(lStack_48 + 0xd8))(uStack_50,lStack_48);
      func_0x0001000834e4(auStack_68);
      bVar2 = (uVar5 & 1) == 0;
      uVar4 = 0;
      if (bVar2) {
        uVar4 = 0xd00000000000003e;
      }
      uVar6 = 0;
      if (bVar2) {
        uVar6 = 0x800000010f159490;
      }
    }
  }
LAB_1036c1144:
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uVar4;
  return auVar7;
}



/* Entry: 1036c115c; end: 1036c13b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c115c(ulong param_1,ulong param_2)

{
  ulong *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long unaff_x20;
  ulong uVar9;
  bool bVar10;
  
  if (param_1 == 0) {
    if (param_2 == 0) goto LAB_1036c1394;
    uVar7 = 0;
    uVar9 = 0;
    uVar6 = param_2;
LAB_1036c11c4:
    uVar3 = param_2;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c5faec();
    uVar8 = uVar6;
    func_0x000107c61170(uVar3);
    if (uVar7 == 0) {
      if (uVar6 == 0) goto LAB_1036c1258;
      bVar10 = false;
      uVar7 = uVar6;
      goto LAB_1036c122c;
    }
    if (uVar6 == 0) {
      bVar10 = false;
      goto LAB_1036c122c;
    }
    if ((uVar9 != uVar4) || (uVar7 != uVar6)) {
      uVar8 = uVar7;
      func_0x000107c605b8(uVar9,uVar7,uVar4,uVar6,0);
      func_0x000107c6142c(uVar7);
      func_0x000107c6142c(uVar6);
      bVar10 = false;
      if ((uVar9 & 1) != 0) goto LAB_1036c1258;
      goto LAB_1036c1234;
    }
    func_0x000107c6142c(uVar7);
    func_0x000107c6142c(uVar6);
  }
  else {
    uVar6 = param_1;
    uVar7 = param_2;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar9 = uVar6;
    func_0x000107c5faec();
    uVar8 = uVar7;
    func_0x000107c61170(uVar6);
    uVar6 = uVar8;
    if (param_2 != 0) goto LAB_1036c11c4;
    if (uVar7 == 0) goto LAB_1036c1394;
    bVar10 = true;
LAB_1036c122c:
    func_0x000107c6142c(uVar7);
LAB_1036c1234:
    lVar2 = _DAT_112f87188;
    uVar5 = 0;
    if (*(long *)(unaff_x20 + _DAT_112f87188) != 0) {
      func_0x000107c498f8();
      uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    }
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
    func_0x000107c61170(uVar5);
    if (bVar10) goto LAB_1036c1394;
  }
LAB_1036c1258:
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar9 = param_2;
  func_0x000107c5faec();
  uVar7 = uVar8;
  func_0x000107c61170(param_2);
  if (param_1 == 0) {
LAB_1036c12f0:
    puVar1 = (ulong *)(unaff_x20 + _DAT_112f87198);
    uVar7 = puVar1[1];
    if (uVar7 == 0) {
      func_0x000107c6142c(uVar8);
    }
    else {
      uVar6 = *puVar1;
      if ((uVar6 == uVar9) && (uVar7 == uVar8)) goto LAB_1036c138c;
      func_0x000107c605b8(uVar6,uVar7,uVar9,uVar8,0);
      func_0x000107c6142c(uVar8);
      if ((uVar6 & 1) != 0) goto LAB_1036c1394;
    }
    uVar8 = puVar1[1];
    *puVar1 = 0;
    puVar1[1] = 0;
  }
  else {
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar6 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
    if ((uVar6 == uVar9) && (uVar7 == uVar8)) {
      func_0x000107c6142c(uVar8);
      uVar8 = uVar7;
    }
    else {
      func_0x000107c605b8(uVar6,uVar7,uVar9,uVar8,0);
      func_0x000107c6142c(uVar7);
      if ((uVar6 & 1) == 0) goto LAB_1036c12f0;
    }
  }
LAB_1036c138c:
  func_0x000107c6142c(uVar8);
LAB_1036c1394:
  *(undefined1 *)(unaff_x20 + _DAT_112f87190) = 0;
  return;
}



/* Entry: 1036c13b8; end: 1036c1427;  */

/* WARNING: Possible PIC construction at 0x0001036c140c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c146c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c1508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c153c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c1550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c162c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c16f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c170c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c1738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c1748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036c173c) */
/* WARNING: Removing unreachable block (ram,0x0001036c16f4) */
/* WARNING: Removing unreachable block (ram,0x0001036c1630) */
/* WARNING: Removing unreachable block (ram,0x0001036c1554) */
/* WARNING: Removing unreachable block (ram,0x0001036c1540) */
/* WARNING: Removing unreachable block (ram,0x0001036c154c) */
/* WARNING: Removing unreachable block (ram,0x0001036c150c) */
/* WARNING: Removing unreachable block (ram,0x0001036c1584) */
/* WARNING: Removing unreachable block (ram,0x0001036c158c) */
/* WARNING: Removing unreachable block (ram,0x0001036c1774) */
/* WARNING: Removing unreachable block (ram,0x0001036c1780) */
/* WARNING: Removing unreachable block (ram,0x0001036c15bc) */
/* WARNING: Removing unreachable block (ram,0x0001036c15f4) */
/* WARNING: Removing unreachable block (ram,0x0001036c15f8) */
/* WARNING: Removing unreachable block (ram,0x0001036c15fc) */
/* WARNING: Removing unreachable block (ram,0x0001036c1600) */
/* WARNING: Removing unreachable block (ram,0x0001036c1510) */
/* WARNING: Removing unreachable block (ram,0x0001036c1514) */
/* WARNING: Removing unreachable block (ram,0x0001036c1518) */
/* WARNING: Removing unreachable block (ram,0x0001036c1734) */
/* WARNING: Removing unreachable block (ram,0x0001036c151c) */
/* WARNING: Removing unreachable block (ram,0x0001036c1470) */
/* WARNING: Removing unreachable block (ram,0x0001036c1710) */
/* WARNING: Removing unreachable block (ram,0x0001036c1488) */
/* WARNING: Removing unreachable block (ram,0x0001036c14ac) */
/* WARNING: Removing unreachable block (ram,0x0001036c155c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x0001036c14c4) */
/* WARNING: Removing unreachable block (ram,0x0001036c1410) */
/* WARNING: Removing unreachable block (ram,0x0001036c1428) */
/* WARNING: Removing unreachable block (ram,0x0001036c1460) */
/* WARNING: Removing unreachable block (ram,0x0001036c1468) */
/* WARNING: Removing unreachable block (ram,0x0001036c174c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c13b8(ulong param_1,uint param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = _DAT_112f87188;
  if ((param_1 & 1) == 0) {
    if ((param_2 & 1) != 0) {
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f87198);
      uVar3 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
      return;
    }
  }
  else if ((param_2 & 1) == 0) {
    uVar3 = 0;
    if (*(long *)(unaff_x20 + _DAT_112f87188) != 0) {
      func_0x000107c498f8();
      uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
    }
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1036c1428; end: 1036c17a3;  */

/* WARNING: Possible PIC construction at 0x0001036c146c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c1508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c153c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c1550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c162c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c16f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c170c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c1738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c1748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036c173c) */
/* WARNING: Removing unreachable block (ram,0x0001036c16f4) */
/* WARNING: Removing unreachable block (ram,0x0001036c1630) */
/* WARNING: Removing unreachable block (ram,0x0001036c1554) */
/* WARNING: Removing unreachable block (ram,0x0001036c1540) */
/* WARNING: Removing unreachable block (ram,0x0001036c154c) */
/* WARNING: Removing unreachable block (ram,0x0001036c150c) */
/* WARNING: Removing unreachable block (ram,0x0001036c1584) */
/* WARNING: Removing unreachable block (ram,0x0001036c158c) */
/* WARNING: Removing unreachable block (ram,0x0001036c1774) */
/* WARNING: Removing unreachable block (ram,0x0001036c1780) */
/* WARNING: Removing unreachable block (ram,0x0001036c15bc) */
/* WARNING: Removing unreachable block (ram,0x0001036c15f4) */
/* WARNING: Removing unreachable block (ram,0x0001036c15f8) */
/* WARNING: Removing unreachable block (ram,0x0001036c15fc) */
/* WARNING: Removing unreachable block (ram,0x0001036c1600) */
/* WARNING: Removing unreachable block (ram,0x0001036c1510) */
/* WARNING: Removing unreachable block (ram,0x0001036c1514) */
/* WARNING: Removing unreachable block (ram,0x0001036c1518) */
/* WARNING: Removing unreachable block (ram,0x0001036c1734) */
/* WARNING: Removing unreachable block (ram,0x0001036c151c) */
/* WARNING: Removing unreachable block (ram,0x0001036c1470) */
/* WARNING: Removing unreachable block (ram,0x0001036c1710) */
/* WARNING: Removing unreachable block (ram,0x0001036c1488) */
/* WARNING: Removing unreachable block (ram,0x0001036c14ac) */
/* WARNING: Removing unreachable block (ram,0x0001036c155c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x0001036c14c4) */
/* WARNING: Removing unreachable block (ram,0x0001036c174c) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c1428(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = _DAT_112f87188;
  uVar2 = 0;
  if (*(long *)(unaff_x20 + _DAT_112f87188) != 0) {
    func_0x000107c498f8();
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1036c17a4; end: 1036c187f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c17a4(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  
  if ((param_1 & 1) != 0) {
    uVar2 = unaff_x20 + _DAT_112f87180;
    uVar1 = uVar2;
    func_0x000107c61618();
    if (uVar1 != 0) {
      lVar5 = *(long *)(uVar2 + 8);
      uVar2 = uVar1;
      func_0x000107c614f0();
      (**(code **)(lVar5 + 0x10))();
      if (uVar2 == 0) {
        func_0x000107c615e8(uVar1);
      }
      else {
        uVar3 = uVar2;
        (**(code **)(lVar5 + 0x18))();
        uVar4 = uVar2;
        FUN_1036c1880(uVar2,(uint)uVar3 & 1);
        if ((uVar4 & 1) == 0) {
          func_0x000107c615e8(uVar1);
          func_0x000107c61170(uVar2);
        }
        else {
          FUN_1036c193c(uVar2);
          func_0x000107c615e8(uVar1);
          func_0x000107c61170(uVar2);
        }
      }
    }
  }
  return;
}



/* Entry: 1036c1880; end: 1036c193b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036c1880(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(auStack_58);
  uVar1 = auStack_58[0];
  func_0x000107c49f94();
  func_0x000107c615e8(auStack_58[0]);
  uVar2 = 0;
  if (((int)uVar1 != 0) && ((param_2 & 1) == 0)) {
    func_0x0001000d224c(auStack_58);
    func_0x0001000a8868(auStack_58,uStack_40);
    (**(code **)(lStack_38 + 0xc0))(uStack_40,lStack_38);
    uVar2 = (uint)uStack_40;
    func_0x0001000834e4(auStack_58);
  }
  return uVar2 & 1;
}



/* Entry: 1036c193c; end: 1036c1a7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c193c(undefined8 param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uStack_48;
  
  lVar7 = _DAT_112f87188;
  uVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_112f87188) != 0) {
    func_0x000107c498f8();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar7);
  }
  *(undefined8 *)(unaff_x20 + lVar7) = 0;
  func_0x000107c61170(uVar3);
  *(undefined1 *)(unaff_x20 + _DAT_112f87190) = 0;
  uVar1 = unaff_x20 + _DAT_112f87180;
  uVar4 = uVar1;
  func_0x000107c61618();
  if (uVar4 != 0) {
    lVar7 = *(long *)(uVar1 + 8);
    uVar5 = uVar4;
    func_0x000107c614f0();
    (**(code **)(lVar7 + 8))();
    func_0x000107c615e8(uVar4);
    if ((uVar5 & 1) != 0) {
      func_0x000107c4b1dc();
      func_0x000107c61180();
      uVar3 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      puVar2 = (undefined8 *)(unaff_x20 + _DAT_112f87198);
      uVar6 = puVar2[1];
      *puVar2 = uVar3;
      puVar2[1] = lVar7;
      func_0x000107c6142c(uVar6);
      uVar4 = uVar1;
      func_0x000107c61618();
      if (uVar4 != 0) {
        lVar7 = *(long *)(uVar1 + 8);
        func_0x000107c614f0();
        (**(code **)(lVar7 + 0x20))();
        func_0x000107c615e8(uVar4);
      }
    }
  }
  func_0x0001000d224c(&uStack_48);
  func_0x000107c4efa4(uStack_48);
  func_0x000107c615e8(uStack_48);
  return;
}



/* Entry: 1036c1a7c; end: 1036c1b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036c1a7c(ulong param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  uVar1 = param_1;
  FUN_1036c1880();
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    func_0x000107c4b31c();
    func_0x000107c61180();
    if (param_1 != 0) {
      uVar1 = param_1;
      func_0x000107c5d294();
      func_0x000107c61170(param_1);
      if ((int)uVar1 != 0) {
        uVar2 = 1;
        goto LAB_1036c1b1c;
      }
    }
    func_0x0001000d224c(auStack_58);
    func_0x0001000a8868(auStack_58,uStack_40);
    (**(code **)(lStack_38 + 0xd8))(uStack_40,lStack_38);
    uVar2 = (uint)uStack_40;
    func_0x0001000834e4(auStack_58);
  }
LAB_1036c1b1c:
  return uVar2 & 1;
}



/* Entry: 1036c1b34; end: 1036c1c8b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c1b34(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  ppuVar4 = &puStack_a0;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  lVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(lVar1 + _DAT_112f87178);
    func_0x000107c615f0(uVar5);
    func_0x000107c61170(lVar1);
    puVar2 = &UNK_1106806e0;
    func_0x000107c613fc(&UNK_1106806e0,0x18,7);
    func_0x000107c61428(param_2 + 0x10,auStack_70,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618(param_2);
    func_0x000107c61614(puVar2 + 0x10,param_2);
    func_0x000107c61170(param_2);
    puVar3 = &UNK_110680758;
    func_0x000107c613fc(&UNK_110680758,0x28,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined8 *)(puVar3 + 0x18) = param_3;
    *(undefined8 *)(puVar3 + 0x20) = param_4;
    pcStack_80 = FUN_1036c2030;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000f6b44;
    puStack_88 = &UNK_110680770;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    puVar2 = puStack_78;
    func_0x000107c61434(param_4);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar5);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 1036c1c8c; end: 1036c1cfb;  */

void FUN_1036c1c8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    FUN_1036c1cfc(param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1036c1cfc; end: 1036c1ed7;  */

/* WARNING: Possible PIC construction at 0x0001036c1d9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c1e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c1e70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036c1da0) */
/* WARNING: Removing unreachable block (ram,0x0001036c1da4) */
/* WARNING: Removing unreachable block (ram,0x0001036c1da8) */
/* WARNING: Removing unreachable block (ram,0x0001036c1de4) */
/* WARNING: Removing unreachable block (ram,0x0001036c1dac) */
/* WARNING: Removing unreachable block (ram,0x0001036c1dec) */
/* WARNING: Removing unreachable block (ram,0x0001036c1e00) */
/* WARNING: Removing unreachable block (ram,0x0001036c1e0c) */
/* WARNING: Removing unreachable block (ram,0x0001036c1e14) */
/* WARNING: Removing unreachable block (ram,0x0001036c1e28) */
/* WARNING: Removing unreachable block (ram,0x0001036c1e54) */
/* WARNING: Removing unreachable block (ram,0x0001036c1e64) */
/* WARNING: Removing unreachable block (ram,0x0001036c1e6c) */
/* WARNING: Removing unreachable block (ram,0x0001036c1dd4) */
/* WARNING: Removing unreachable block (ram,0x0001036c1e90) */
/* WARNING: Removing unreachable block (ram,0x0001036c1e74) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c1cfc(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  
  uVar3 = unaff_x20 + _DAT_112f87180;
  uVar1 = uVar3;
  func_0x000107c61618();
  if (uVar1 != 0) {
    lVar4 = *(long *)(uVar3 + 8);
    uVar3 = uVar1;
    func_0x000107c614f0();
    uVar2 = uVar3;
    (**(code **)(lVar4 + 8))();
    if (((uVar2 & 1) != 0) && ((**(code **)(lVar4 + 0x10))(uVar3,lVar4), uVar3 != 0)) {
      func_0x000107c4b1dc();
      func_0x000107c61180();
      func_0x000107c5faec();
      goto code_r0x000107c61170;
    }
    func_0x000107c615e8(uVar1);
  }
  lVar4 = _DAT_112f87188;
  uVar3 = 0;
  if (*(long *)(unaff_x20 + _DAT_112f87188) != 0) {
    func_0x000107c498f8();
    uVar3 = *(ulong *)(unaff_x20 + lVar4);
  }
  *(undefined8 *)(unaff_x20 + lVar4) = 0;
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1036c1ed8; end: 1036c1f23; -[_TtC32SCLensPlusServicesImplementation29LensPlusGameLensUpsellManager init] */

void FUN_1036c1ed8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.LensPlusGameLensUpsellManager",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036c1f04);
  (*pcVar1)();
}



/* Entry: 1036c1f24; end: 1036c1f4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c1f24(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20 + _DAT_112f87180;
  *(undefined8 *)(lVar1 + 8) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(lVar1,param_1);
  return;
}



/* Entry: 1036c1f50; end: 1036c1fd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1036c1f50(int param_1,ulong param_2)

{
  uint uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c4a4c0();
  uVar1 = 0;
  if ((param_1 != 0) && ((param_2 & 1) == 0)) {
    func_0x0001000d224c(auStack_58);
    func_0x0001000a8868(auStack_58,uStack_40);
    (**(code **)(lStack_38 + 0xc0))(uStack_40,lStack_38);
    uVar1 = (uint)uStack_40;
    func_0x0001000834e4(auStack_58);
  }
  return uVar1 & 1;
}



/* Entry: 1036c1fd4; end: 1036c2003;  */

/* WARNING: Possible PIC construction at 0x0001036c140c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c146c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c1508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c153c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c1550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c162c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c16f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c170c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c1738: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c1748: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036c173c) */
/* WARNING: Removing unreachable block (ram,0x0001036c16f4) */
/* WARNING: Removing unreachable block (ram,0x0001036c1630) */
/* WARNING: Removing unreachable block (ram,0x0001036c1554) */
/* WARNING: Removing unreachable block (ram,0x0001036c1540) */
/* WARNING: Removing unreachable block (ram,0x0001036c154c) */
/* WARNING: Removing unreachable block (ram,0x0001036c150c) */
/* WARNING: Removing unreachable block (ram,0x0001036c1584) */
/* WARNING: Removing unreachable block (ram,0x0001036c158c) */
/* WARNING: Removing unreachable block (ram,0x0001036c1774) */
/* WARNING: Removing unreachable block (ram,0x0001036c1780) */
/* WARNING: Removing unreachable block (ram,0x0001036c15bc) */
/* WARNING: Removing unreachable block (ram,0x0001036c15f4) */
/* WARNING: Removing unreachable block (ram,0x0001036c15f8) */
/* WARNING: Removing unreachable block (ram,0x0001036c15fc) */
/* WARNING: Removing unreachable block (ram,0x0001036c1600) */
/* WARNING: Removing unreachable block (ram,0x0001036c1510) */
/* WARNING: Removing unreachable block (ram,0x0001036c1514) */
/* WARNING: Removing unreachable block (ram,0x0001036c1518) */
/* WARNING: Removing unreachable block (ram,0x0001036c1734) */
/* WARNING: Removing unreachable block (ram,0x0001036c151c) */
/* WARNING: Removing unreachable block (ram,0x0001036c1470) */
/* WARNING: Removing unreachable block (ram,0x0001036c1710) */
/* WARNING: Removing unreachable block (ram,0x0001036c1488) */
/* WARNING: Removing unreachable block (ram,0x0001036c14ac) */
/* WARNING: Removing unreachable block (ram,0x0001036c155c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Removing unreachable block (ram,0x0001036c14c4) */
/* WARNING: Removing unreachable block (ram,0x0001036c1410) */
/* WARNING: Removing unreachable block (ram,0x0001036c1428) */
/* WARNING: Removing unreachable block (ram,0x0001036c1460) */
/* WARNING: Removing unreachable block (ram,0x0001036c1468) */
/* WARNING: Removing unreachable block (ram,0x0001036c174c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c1fd4(ulong param_1,uint param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar2 = _DAT_112f87188;
  if ((param_1 & 1) == 0) {
    if ((param_2 & 1) != 0) {
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f87198);
      uVar3 = puVar1[1];
      *puVar1 = 0;
      puVar1[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
      return;
    }
  }
  else if ((param_2 & 1) == 0) {
    uVar3 = 0;
    if (*(long *)(unaff_x20 + _DAT_112f87188) != 0) {
      func_0x000107c498f8();
      uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
    }
    *(undefined8 *)(unaff_x20 + lVar2) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  return;
}



/* Entry: 1036c2004; end: 1036c202f;  */

void FUN_1036c2004(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1036c2030; end: 1036c204b;  */

void FUN_1036c2030(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_1036c1cfc(uVar1,uVar3);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 1036c204c; end: 1036c206f;  */

undefined8 FUN_1036c204c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1036c2070; end: 1036c2097;  */

void FUN_1036c2070(long param_1,long param_2)

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



/* Entry: 1036c2098; end: 1036c21ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c2098(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long *plVar7;
  long lStack_70;
  long lStack_68;
  
  plVar7 = &lStack_70;
  pcVar3 = 
  "init(lensCarouselConfigProvider:lensPlusTierService:lensPlusPaywallPresenter:applicationLifecycleEvents:mainPerformer:)"
  ;
  func_0x0001000c10c0();
  func_0x000107c61180();
  lVar4 = 0;
  func_0x0001036c1f04();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar1 = lVar5 + _DAT_112f87180;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(lVar5 + _DAT_112f87188) = 0;
  *(undefined1 *)(lVar5 + _DAT_112f87190) = 0;
  puVar2 = (undefined8 *)(lVar5 + _DAT_112f87198);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(lVar5 + _DAT_112f871a0) = 0;
  lVar1 = _DAT_112f871a8;
  puVar6 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + lVar1) = puVar6;
  *(undefined8 *)(lVar5 + _DAT_112f87158) = param_2;
  *(undefined8 *)(lVar5 + _DAT_112f87160) = param_3;
  *(undefined8 *)(lVar5 + _DAT_112f87168) = param_4;
  *(undefined8 *)(lVar5 + _DAT_112f87170) = param_5;
  *(char **)(lVar5 + _DAT_112f87178) = pcVar3;
  puVar6 = PTR_s_init_1125d9248;
  lStack_70 = lVar5;
  lStack_68 = lVar4;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61154(&lStack_70,puVar6);
  *param_1 = plVar7;
  param_1[1] = &PTR_DAT_110680688;
  return;
}



/* Entry: 1036c2200; end: 1036c220b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c2200(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long *plVar11;
  long unaff_x20;
  long lStack_70;
  long lStack_68;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar11 = &lStack_70;
  pcVar7 = 
  "init(lensCarouselConfigProvider:lensPlusTierService:lensPlusPaywallPresenter:applicationLifecycleEvents:mainPerformer:)"
  ;
  func_0x0001000c10c0();
  func_0x000107c61180();
  lVar8 = 0;
  func_0x0001036c1f04();
  lVar9 = lVar8;
  func_0x000107c610f8();
  lVar1 = lVar9 + _DAT_112f87180;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(lVar9 + _DAT_112f87188) = 0;
  *(undefined1 *)(lVar9 + _DAT_112f87190) = 0;
  puVar2 = (undefined8 *)(lVar9 + _DAT_112f87198);
  *puVar2 = 0;
  puVar2[1] = 0;
  *(undefined1 *)(lVar9 + _DAT_112f871a0) = 0;
  lVar1 = _DAT_112f871a8;
  puVar10 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar9 + lVar1) = puVar10;
  *(undefined8 *)(lVar9 + _DAT_112f87158) = uVar3;
  *(undefined8 *)(lVar9 + _DAT_112f87160) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112f87168) = uVar4;
  *(undefined8 *)(lVar9 + _DAT_112f87170) = uVar6;
  *(char **)(lVar9 + _DAT_112f87178) = pcVar7;
  puVar10 = PTR_s_init_1125d9248;
  lStack_70 = lVar9;
  lStack_68 = lVar8;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar4);
  func_0x000107c615f0(uVar6);
  func_0x000107c61154(&lStack_70,puVar10);
  *param_1 = plVar11;
  param_1[1] = &PTR_DAT_110680688;
  return;
}



/* Entry: 1036c220c; end: 1036c243f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c220c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f871f8);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f871f8))[1];
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f871f0);
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f87200);
  puVar3 = &UNK_110680870;
  func_0x000107c613fc(&UNK_110680870,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_110680898;
  func_0x000107c613fc(&UNK_110680898,0x38,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = uVar6;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  *(undefined8 *)(puVar4 + 0x28) = uVar2;
  *(undefined **)(puVar4 + 0x30) = puVar3;
  func_0x0001036e2b7c(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar5);
  func_0x000107c615f0(param_1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  FUN_1036e2434(uVar5,FUN_1036c2898,puVar4);
  return;
}



/* Entry: 1036c2440; end: 1036c25c3;  */

undefined * FUN_1036c2440(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar1 = param_1;
  uVar8 = param_2;
  func_0x000108edf3b0();
  func_0x000107c61180();
  if (lVar1 == 0) {
    uVar8 = 0xe800000000000000;
    lVar9 = 0x65746172656e6547;
  }
  else {
    lVar9 = lVar1;
    func_0x000107c5faec();
    func_0x000107c61170(lVar1);
  }
  puVar2 = PTR_PTR_1126ae560;
  func_0x000107c610f8(PTR_PTR_1126ae560);
  func_0x000107c453e4();
  puVar3 = puVar2;
  func_0x000107c43bf4();
  func_0x000107c61180();
  uVar4 = 0;
  FUN_1036e604c(0);
  func_0x000107c610f8();
  FUN_1036e5708(puVar3,uVar4);
  puVar5 = &UNK_110680870;
  func_0x000107c613fc(&UNK_110680870,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_1106808c0;
  func_0x000107c613fc(&UNK_1106808c0,0x18,7);
  func_0x000107c61614(puVar6 + 0x10,puVar3);
  puVar7 = &UNK_1106808e8;
  func_0x000107c613fc(&UNK_1106808e8,0x30,7);
  *(undefined **)(puVar7 + 0x10) = puVar5;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  *(long *)(puVar7 + 0x20) = param_1;
  *(undefined8 *)(puVar7 + 0x28) = param_2;
  func_0x0001036e55a8(0);
  func_0x000107c610f8();
  func_0x000107c61434(param_2);
  func_0x0001036e5558(lVar9,uVar8,0x1036c28a8,puVar7);
  func_0x000107c3fefc(puVar2);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 1036c25c4; end: 1036c26bf; -[_TtC32SCLensPlusServicesImplementation23GenAIPreviewCTAProvider ctaViewFor:] */

void FUN_1036c25c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1036c220c(param_3);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1036c26c0; end: 1036c27b3;  */

/* WARNING: Possible PIC construction at 0x0001036c2730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c2768: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c2780: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036c276c) */
/* WARNING: Removing unreachable block (ram,0x0001036c2770) */
/* WARNING: Removing unreachable block (ram,0x0001036c2734) */
/* WARNING: Removing unreachable block (ram,0x0001036c279c) */
/* WARNING: Removing unreachable block (ram,0x0001036c2750) */
/* WARNING: Removing unreachable block (ram,0x0001036c2784) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_1036c26c0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c4310;
  func_0x000107c61168(PTR_PTR_1126c4310);
  func_0x000107c43d84();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c4308;
  func_0x000107c610f8(PTR_PTR_1126c4308);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c472dc(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1036c27b4; end: 1036c2813; -[_TtC32SCLensPlusServicesImplementation23GenAIPreviewCTAProvider init] */

void FUN_1036c27b4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCLensPlusServicesImplementation.GenAIPreviewCTAProvider",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1036c27e0);
  (*pcVar1)();
}



/* Entry: 1036c2814; end: 1036c2877; -[_TtC32SCLensPlusServicesImplementation23GenAIPreviewCTAProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c2814(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61610(param_1 + _DAT_112f871e8);
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f871f0));
  uVar1 = *(undefined8 *)(param_1 + _DAT_112f871f8);
  func_0x000107c61574(((undefined8 *)(param_1 + _DAT_112f871f8))[1]);
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f87200));
  return;
}



/* Entry: 1036c2878; end: 1036c2897;  */

void FUN_1036c2878(void)

{
  func_0x000107c61168(&PTR_PTR_1128e1870);
  return;
}



/* Entry: 1036c2898; end: 1036c28b3;  */

void FUN_1036c2898(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x20;
  undefined8 auStack_68 [3];
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  lVar3 = lVar5;
  func_0x000107c49fa8(lVar5,uVar4);
  if ((int)lVar3 != 0) {
    func_0x0001000d224c(auStack_68);
    lVar3 = lVar5;
    func_0x000107c434c4();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(uVar4);
    }
    uVar4 = auStack_68[0];
    func_0x000107c49fa4();
    func_0x000107c615e8(auStack_68[0]);
    func_0x000107c61170(lVar3);
    if ((int)uVar4 != 0) {
      FUN_1036dd8bc(lVar5,uVar1,uVar2);
      return;
    }
  }
  puVar6 = auStack_68;
  func_0x000107c61428(lVar7 + 0x10,puVar6,0,0);
  lVar7 = lVar7 + 0x10;
  func_0x000107c61618();
  if (lVar7 != 0) {
    func_0x000107c434c4(lVar5);
    func_0x000107c61180();
    lVar3 = lVar5;
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
    FUN_1036c2440(lVar3,puVar6);
    func_0x000107c61170(lVar7);
    func_0x000107c6142c(puVar6);
  }
  return;
}



/* Entry: 1036c28b4; end: 1036c2a07;  */

void FUN_1036c28b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  ppuVar6 = &puStack_80;
  puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c61168(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar3 = &UNK_110680910;
  func_0x000107c613fc(&UNK_110680910,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_1036c2a08;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1000f6b44;
  puStack_68 = &UNK_110680928;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  uVar5 = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar3);
  puVar3 = &UNK_110680960;
  func_0x000107c613fc(&UNK_110680960,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  pcStack_60 = (code *)0x1036c2a38;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100288f10;
  puStack_68 = &UNK_110680978;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar3 = puStack_58;
  func_0x000107c61174(uVar5);
  func_0x000107c61574(puVar3);
  func_0x000107c3dcd4(0x3fc3333333333333,0,puVar2);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar4);
  return;
}



/* Entry: 1036c2a08; end: 1036c2a53;  */

void FUN_1036c2a08(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c1677d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(0,*(long *)(unaff_x20 + 0x10),PTR_s_setAlpha__112637810);
    return;
  }
  return;
}



/* Entry: 1036c2a54; end: 1036c2a7f;  */

void FUN_1036c2a54(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1036c2a80; end: 1036c34f3;  */

/* WARNING: Possible PIC construction at 0x0001036c2b04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c2b38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c2b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c2c60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c2d90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c305c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c3150: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c3218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c3438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c3448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c3458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c3470: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c34d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c34e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036c2e34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036c34e8) */
/* WARNING: Removing unreachable block (ram,0x0001036c34d8) */
/* WARNING: Removing unreachable block (ram,0x0001036c3474) */
/* WARNING: Removing unreachable block (ram,0x0001036c345c) */
/* WARNING: Removing unreachable block (ram,0x0001036c344c) */
/* WARNING: Removing unreachable block (ram,0x0001036c343c) */
/* WARNING: Removing unreachable block (ram,0x0001036c321c) */
/* WARNING: Removing unreachable block (ram,0x0001036c34f0) */
/* WARNING: Removing unreachable block (ram,0x0001036c3250) */
/* WARNING: Removing unreachable block (ram,0x0001036c3154) */
/* WARNING: Removing unreachable block (ram,0x0001036c3060) */
/* WARNING: Removing unreachable block (ram,0x0001036c30f4) */
/* WARNING: Removing unreachable block (ram,0x0001036c310c) */
/* WARNING: Removing unreachable block (ram,0x0001036c2d94) */
/* WARNING: Removing unreachable block (ram,0x0001036c2d98) */
/* WARNING: Removing unreachable block (ram,0x0001036c2c64) */
/* WARNING: Removing unreachable block (ram,0x0001036c2e40) */
/* WARNING: Removing unreachable block (ram,0x0001036c2e4c) */
/* WARNING: Removing unreachable block (ram,0x0001036c2d78) */
/* WARNING: Removing unreachable block (ram,0x0001036c2b8c) */
/* WARNING: Removing unreachable block (ram,0x0001036c2b90) */
/* WARNING: Removing unreachable block (ram,0x0001036c2e18) */
/* WARNING: Removing unreachable block (ram,0x0001036c2bb4) */
/* WARNING: Removing unreachable block (ram,0x0001036c2e28) */
/* WARNING: Removing unreachable block (ram,0x0001036c2be8) */
/* WARNING: Removing unreachable block (ram,0x0001036c34d0) */
/* WARNING: Removing unreachable block (ram,0x0001036c2c0c) */
/* WARNING: Removing unreachable block (ram,0x0001036c2b3c) */
/* WARNING: Removing unreachable block (ram,0x0001036c2b08) */
/* WARNING: Removing unreachable block (ram,0x0001036c2b40) */
/* WARNING: Removing unreachable block (ram,0x0001036c2df0) */
/* WARNING: Removing unreachable block (ram,0x0001036c2b70) */
/* WARNING: Removing unreachable block (ram,0x0001036c2e38) */
/* WARNING: Removing unreachable block (ram,0x0001036c2df4) */

void FUN_1036c2a80(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  
  if (*(long *)(unaff_x20 + 0xb0) != 0) {
    return;
  }
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 == 0) {
      return;
    }
    func_0x000107c4d6f8();
    func_0x000107c61180();
  }
  else {
    func_0x000107c4d068();
    func_0x000107c61180();
    lVar2 = lVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar2);
  return;
}



/* Entry: 1036c34f4; end: 1036c36eb;  */

void FUN_1036c34f4(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    pcVar1 = "requestActivePresentationDismissal()";
    func_0x0001000c10c0("requestActivePresentationDismissal()");
    func_0x000107c61180();
    puVar2 = &UNK_1106809c8;
    func_0x000107c613fc(&UNK_1106809c8,0x18,7);
    func_0x000107c61644(puVar2 + 0x10,param_1);
    uStack_58 = 0x1036c6418;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_110680dc8;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e524(pcVar1);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61574(param_1);
    func_0x000107c615e8(pcVar1);
  }
  return;
}



/* Entry: 1036c36ec; end: 1036c38e7;  */

void FUN_1036c36ec(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  ppuVar7 = &puStack_c0;
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    lVar1 = param_2;
    func_0x000107c4c250();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4d508();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      if (lVar2 != 0) {
        func_0x000107c61428(param_3 + 0x10,auStack_90,0,0);
        param_3 = param_3 + 0x10;
        func_0x000107c61648();
        if (param_3 == 0) {
          func_0x000107c61170(lVar2);
        }
        else {
          pcVar3 = 
          "handleCustomizationSelected(_:lens:presentingViewController:preferredLensSessionBaseId:)"
          ;
          func_0x0001000c10c0(
                             "handleCustomizationSelected(_:lens:presentingViewController:preferredLensSessionBaseId:)"
                             );
          func_0x000107c61180();
          puVar4 = &UNK_1106809c8;
          func_0x000107c613fc(&UNK_1106809c8,0x18,7);
          func_0x000107c61644(puVar4 + 0x10,param_3);
          puVar5 = &UNK_110680ce8;
          func_0x000107c613fc(&UNK_110680ce8,0x18,7);
          func_0x000107c61614(puVar5 + 0x10,lVar2);
          puVar6 = &UNK_110680d10;
          func_0x000107c613fc(&UNK_110680d10,0x40,7);
          *(undefined **)(puVar6 + 0x10) = puVar4;
          *(undefined **)(puVar6 + 0x18) = puVar5;
          *(undefined8 *)(puVar6 + 0x20) = param_1;
          *(undefined8 *)(puVar6 + 0x28) = param_4;
          *(undefined8 *)(puVar6 + 0x30) = param_5;
          *(undefined8 *)(puVar6 + 0x38) = param_6;
          uStack_a0 = 0x1036c6268;
          puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_b8 = 0x42000000;
          puStack_b0 = &UNK_1000f6b44;
          puStack_a8 = &UNK_110680d28;
          puStack_98 = puVar6;
          func_0x000107c60bc4(&puStack_c0);
          puVar4 = puStack_98;
          func_0x000107c61434(param_6);
          func_0x000107c61174(param_1);
          func_0x000107c61174(param_4);
          func_0x000107c61574(puVar4);
          func_0x000107c4e524(pcVar3);
          func_0x000107c60bd0(ppuVar7);
          func_0x000107c61574(param_3);
          func_0x000107c61170(lVar2);
          func_0x000107c615e8(pcVar3);
        }
      }
    }
  }
  return;
}



/* Entry: 1036c38e8; end: 1036c39ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1036c38e8(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126a6180;
  func_0x000107c610f8(PTR_PTR_1126a6180);
  func_0x000107c453e4();
  uVar5 = *(undefined8 *)(*(long *)(unaff_x20 + 0x90) + _DAT_113015eb8);
  func_0x000107c6157c(uVar5);
  func_0x0001000d224c(auStack_58);
  func_0x000107c61574(uVar5);
  func_0x0001036c6224(auStack_58,uStack_40);
  uVar5 = uStack_40;
  (**(code **)(lStack_38 + 0x20))(uStack_40,lStack_38);
  uVar2 = 0;
  func_0x0001036c63c8(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  pcVar3 = FUN_1036c54b4;
  func_0x0001000bfde0(FUN_1036c54b4,0,uVar2);
  pcVar4 = pcVar3;
  func_0x0001004575f0();
  func_0x000107c61574(pcVar3);
  pcVar3 = pcVar4;
  func_0x000107c5cb24(pcVar4);
  func_0x000107c61180();
  func_0x000107c61170(pcVar4);
  func_0x000107c54c98(puVar1);
  func_0x000107c61574(uVar5);
  func_0x000107c61170(pcVar3);
  func_0x0001036c6248(auStack_58);
  return puVar1;
}



/* Entry: 1036c3a00; end: 1036c3a0b;  */

void FUN_1036c3a00(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}



/* Entry: 1036c3a0c; end: 1036c3ab7;  */

void FUN_1036c3a0c(long param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_60,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61648();
    if (param_2 != 0) {
      if (param_2 == *(long *)(param_1 + 0xb0)) {
        FUN_1036c3ab8(param_3);
        func_0x0001036c3c5c(param_3);
      }
      func_0x000107c61574(param_1);
      param_1 = param_2;
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1036c3ab8; end: 1036c3e83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c3ab8(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong *puVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  ulong *puStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x98);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x0001000d224c(&puStack_48);
    puVar2 = puStack_48;
    func_0x000107c44098();
    func_0x000107c61180();
    func_0x000107c615e8(puStack_48);
    puVar3 = PTR_PTR_1126d1a30;
    func_0x000107c610f8(PTR_PTR_1126d1a30);
    func_0x000107c453e4();
    func_0x000107c571f8();
    func_0x000107c59560(puVar3);
    func_0x000107c5958c(puVar3);
    func_0x000107c4b1dc();
    func_0x000107c61180();
    if (param_1 == 0) {
      func_0x000107c5faec();
      func_0x000107c5fadc();
      func_0x000107c6142c(param_2);
    }
    func_0x000107c59564(puVar3);
    func_0x000107c61170(param_1);
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x70))();
    func_0x000107c5565c(puVar3);
    lVar4 = ((undefined8 *)((long)puVar2 + _DAT_113036378))[1];
    if (lVar4 != 0) {
      uVar5 = *(undefined8 *)((long)puVar2 + _DAT_113036378);
      func_0x000107c61434(lVar4);
      func_0x000107c5fadc(uVar5,lVar4);
      func_0x000107c6142c(lVar4);
      func_0x000107c54bbc(puVar3);
      func_0x000107c61170(uVar5);
    }
    func_0x000107c4bfb0(lVar1);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar3);
  }
  return;
}



/* Entry: 1036c3e84; end: 1036c4843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c3e84(undefined8 param_1,long param_2,long param_3,undefined *param_4,
                  undefined *param_5,undefined8 param_6,undefined8 param_7)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined8 uVar22;
  code *pcVar23;
  undefined8 *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puStack_210;
  undefined *puStack_200;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined1 auStack_128 [24];
  undefined *puStack_110;
  undefined *puStack_108;
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c61428(param_2 + 0x10,auStack_e8,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 == 0) {
    return;
  }
  puVar17 = auStack_100;
  func_0x000107c61428(param_3 + 0x10,puVar17,0,0);
  puVar3 = (undefined *)(param_3 + 0x10);
  func_0x000107c61618();
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c61574(param_2);
    return;
  }
  if (*(long *)(param_2 + 0xb0) == 0) {
    func_0x000107c61574(param_2);
    goto LAB_1036c415c;
  }
  puVar4 = param_4;
  func_0x000107c4e084();
  func_0x000107c61180();
  puVar25 = PTR_PTR_1133d30b8;
  puVar26 = puVar4;
  func_0x000107c5faec();
  puVar5 = puVar25;
  puVar18 = puVar17;
  func_0x000107c5faec();
  puVar19 = puVar17;
  if (puVar26 == puVar5 && puVar17 == puVar18) {
LAB_1036c3fec:
    func_0x000107c61170(puVar4);
    func_0x000107c6142c(puVar19);
    func_0x000107c6142c(puVar18);
  }
  else {
    func_0x000107c605b8(puVar26,puVar17,puVar5,puVar18,0);
    func_0x000107c6142c(puVar17);
    func_0x000107c6142c(puVar18);
    puVar5 = PTR_PTR_1133d30c0;
    if (((ulong)puVar26 & 1) == 0) {
      puVar26 = puVar4;
      func_0x000107c5faec();
      puVar18 = puVar19;
      func_0x000107c5faec();
      if ((puVar26 == puVar5) && (puVar19 == puVar18)) goto LAB_1036c3fec;
      func_0x000107c605b8(puVar26,puVar19,puVar5,puVar18,0);
      func_0x000107c61170(puVar4);
      func_0x000107c6142c(puVar19);
      func_0x000107c6142c(puVar18);
      if (((ulong)puVar26 & 1) == 0) {
        func_0x000107c61574(param_2);
        goto LAB_1036c415c;
      }
    }
    else {
      func_0x000107c61170(puVar4);
    }
  }
  puVar4 = param_5;
  FUN_1036c4844(param_5,puVar3);
  if (((ulong)puVar4 & 1) != 0) {
    func_0x000107c61574(param_2);
LAB_1036c415c:
    func_0x000107c61170(puVar3);
    return;
  }
  puVar4 = param_4;
  func_0x000107c41184();
  func_0x000107c61180();
  puVar26 = puVar4;
  func_0x000107c3dc80();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = puVar26;
  FUN_1036c6278(puVar26,param_6,param_7);
  func_0x000107c61170(puVar26);
  puVar26 = param_4;
  func_0x000107c41184();
  func_0x000107c61180();
  puVar5 = puVar26;
  puVar11 = puVar4;
  FUN_1036c4934();
  func_0x000107c61170(puVar26);
  if (((ulong)puVar5 & 1) == 0) {
    func_0x000107c61574(param_2);
    func_0x000107c61170(puVar3);
    puVar3 = puVar4;
    goto LAB_1036c415c;
  }
  puVar26 = param_4;
  func_0x000107c4e084();
  func_0x000107c61180();
  puVar5 = puVar26;
  func_0x000107c5faec();
  puVar20 = puVar11;
  func_0x000107c5faec();
  if ((puVar5 == puVar25) && (puVar11 == puVar20)) {
    func_0x000107c61170(puVar26);
    func_0x000107c6142c(puVar11);
    func_0x000107c6142c(puVar20);
LAB_1036c41b0:
    puVar25 = param_4;
    func_0x000107c4ce20();
    func_0x000107c61180();
  }
  else {
    func_0x000107c605b8(puVar5,puVar11,puVar25,puVar20,0);
    func_0x000107c61170(puVar26);
    func_0x000107c6142c(puVar11);
    func_0x000107c6142c(puVar20);
    if (((ulong)puVar5 & 1) != 0) goto LAB_1036c41b0;
    puVar25 = (undefined *)0x0;
  }
  uVar22 = *(undefined8 *)(*(long *)(param_2 + 0x90) + _DAT_113015ec0);
  func_0x000107c6157c(uVar22);
  func_0x0001000d224c(auStack_128);
  func_0x000107c61574(uVar22);
  puStack_210 = puStack_108;
  puVar26 = puStack_110;
  func_0x0001036c6224(auStack_128,puStack_110);
  (**(code **)(puStack_210 + 0x20))(puVar26);
  puVar26 = param_4;
  func_0x000107c41184();
  func_0x000107c61180();
  puVar5 = puVar26;
  func_0x000107c4cd44();
  func_0x000107c61180();
  func_0x000107c61170(puVar26);
  if (puVar5 == (undefined *)0x0) goto LAB_1036c4470;
  puStack_210 = (undefined *)0x0;
  func_0x0001036c63c8(0,0x112de7658,&PTR_PTR_1126a83c8);
  puVar26 = puVar5;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar5);
  if ((ulong)puVar26 >> 0x3e == 0) {
    puVar5 = *(undefined **)(((ulong)puVar26 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar5 = (undefined *)((ulong)puVar26 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar26) {
      puVar5 = puVar26;
    }
    func_0x000107c60480();
  }
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c6142c(puVar26);
    goto LAB_1036c4470;
  }
  if (((ulong)puVar26 & 0xc000000000000001) == 0) {
    if (*(long *)(((ulong)puVar26 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x1036c4844);
      (*pcVar23)();
    }
    uVar6 = *(ulong *)(puVar26 + 0x20);
    func_0x000107c61174();
  }
  else {
    uVar6 = 0;
    puStack_210 = puVar26;
    func_0x000102addab8();
  }
  func_0x000107c6142c(puVar26);
  uVar7 = uVar6;
  func_0x000107c5db08();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c5faec();
  func_0x000107c61170(uVar7);
  if ((uVar8 == 0x6e6f69746e656d) && (puStack_210 == (undefined *)0xe700000000000000)) {
    func_0x000107c6142c(0xe700000000000000);
LAB_1036c4348:
    func_0x0001036c6224(auStack_128,puStack_110);
    (**(code **)(puStack_108 + 0x30))(puStack_110);
    puStack_210 = puStack_108;
  }
  else {
    func_0x000107c605b8(uVar8,puStack_210,0x6e6f69746e656d,0xe700000000000000,0);
    func_0x000107c6142c(puStack_210);
    if ((uVar8 & 1) != 0) goto LAB_1036c4348;
    puVar26 = puStack_110;
    func_0x0001036c6224();
    uVar7 = uVar6;
    func_0x000107c5d984();
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c5faec();
    puVar5 = puVar26;
    func_0x000107c61170(uVar7);
    uVar7 = uVar6;
    func_0x000107c5db08(uVar6);
    func_0x000107c61180();
    uVar9 = uVar7;
    func_0x000107c5faec();
    func_0x000107c61170(uVar7);
    func_0x000103e2a910(0);
    func_0x000107c610f8();
    func_0x000103e2a7c8(uVar8,puVar26,uVar9,puVar5,0,0,0,0,0,0);
    (**(code **)(puStack_108 + 0x28))();
    func_0x000107c61170(uVar8);
    puStack_210 = puStack_110;
  }
  func_0x000107c61170(uVar6);
LAB_1036c4470:
  uVar22 = *(undefined8 *)(param_2 + 0x58);
  lVar2 = *(long *)(param_2 + 0x60);
  if (puVar25 == (undefined *)0x0) {
    func_0x000107c615f0();
    puStack_200 = (undefined *)0x0;
    puStack_210 = (undefined *)0x0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    bVar1 = true;
  }
  else {
    func_0x000107c615f0();
    puVar26 = puVar25;
    func_0x000107c5b68c();
    func_0x000107c61180();
    bVar1 = puVar26 == (undefined *)0x0;
    if (bVar1) {
      uStack_1c0 = 0;
      uStack_1b8 = 0;
      uStack_1a8 = 0;
      uStack_1b0 = 0;
    }
    else {
      func_0x000107c5e9e0();
      uStack_1a8 = param_1;
      func_0x000107c5e9f0(puVar26);
      uStack_1c0 = uStack_1a8;
      func_0x000107c5e304(puVar26);
      uStack_1b8 = uStack_1c0;
      func_0x000107c44d98(puVar26);
      func_0x000107c61170(puVar26);
      uStack_1b0 = param_1;
    }
    puVar26 = puVar25;
    func_0x000107c5b644();
    func_0x000107c61180();
    puStack_200 = puVar26;
    func_0x000107c5faec();
    func_0x000107c61170(puVar26);
  }
  func_0x000107c41184();
  func_0x000107c61180();
  puVar5 = param_4;
  func_0x000107c4cd44();
  func_0x000107c61180();
  func_0x000107c61170(param_4);
  puVar26 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar5 != (undefined *)0x0) {
    uVar10 = 0;
    func_0x0001036c63c8(0,0x112de7658,&PTR_PTR_1126a83c8);
    puVar11 = puVar5;
    func_0x000107c5fc54(puVar5,uVar10);
    func_0x000107c61170(puVar5);
  }
  if ((ulong)puVar11 >> 0x3e == 0) {
    puVar5 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar5 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar11) {
      puVar5 = puVar11;
    }
    func_0x000107c60480();
  }
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c6142c(puVar11);
  }
  else {
    puStack_d0 = puVar26;
    uVar6 = (ulong)puVar5 & ((long)puVar5 >> 0x3f ^ 0xffffffffffffffffU);
    func_0x000100403514(0,uVar6,0);
    if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar23 = (code *)SoftwareBreakpoint(1,0x1036c4830);
      (*pcVar23)();
    }
    if (((ulong)puVar11 & 0xc000000000000001) == 0) {
      puVar24 = (undefined8 *)(puVar11 + 0x20);
      do {
        puVar26 = puStack_d0;
        uVar15 = *puVar24;
        func_0x000107c61174();
        func_0x000107c61174();
        uVar10 = uVar15;
        func_0x000107c5db08();
        func_0x000107c61180();
        uVar16 = uVar10;
        func_0x000107c5faec();
        uVar9 = uVar6;
        func_0x000107c61170(uVar15);
        func_0x000107c61170(uVar15);
        func_0x000107c61170(uVar10);
        uVar8 = *(ulong *)(puVar26 + 0x10);
        uVar7 = uVar8 + 1;
        puStack_d0 = puVar26;
        if (*(ulong *)(puVar26 + 0x18) >> 1 <= uVar8) {
          uVar9 = uVar7;
          func_0x000100403514(1 < *(ulong *)(puVar26 + 0x18),uVar7,1);
        }
        *(ulong *)(puStack_d0 + 0x10) = uVar7;
        *(undefined8 *)(puStack_d0 + uVar8 * 0x10 + 0x20) = uVar16;
        *(ulong *)(puStack_d0 + uVar8 * 0x10 + 0x28) = uVar6;
        puVar5 = puVar5 + -1;
        uVar6 = uVar9;
        puVar24 = puVar24 + 1;
      } while (puVar5 != (undefined *)0x0);
    }
    else {
      puVar26 = (undefined *)0x0;
      do {
        puVar20 = puStack_d0;
        puVar12 = puVar26;
        puVar21 = puVar11;
        func_0x000102addab8();
        puVar13 = puVar12;
        func_0x000107c615f0();
        func_0x000107c5db08();
        func_0x000107c61180();
        puVar14 = puVar13;
        func_0x000107c5faec();
        func_0x000107c615ec(puVar12,2);
        func_0x000107c61170(puVar13);
        uVar6 = *(ulong *)(puVar20 + 0x10);
        puStack_d0 = puVar20;
        if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar6) {
          func_0x000100403514(1 < *(ulong *)(puVar20 + 0x18),uVar6 + 1,1);
        }
        puVar26 = puVar26 + 1;
        *(ulong *)(puStack_d0 + 0x10) = uVar6 + 1;
        *(undefined **)(puStack_d0 + uVar6 * 0x10 + 0x20) = puVar14;
        *(undefined **)(puStack_d0 + uVar6 * 0x10 + 0x28) = puVar21;
      } while (puVar5 != puVar26);
    }
    puVar26 = puStack_d0;
    func_0x000107c6142c(puVar11);
  }
  uVar10 = uVar22;
  func_0x000107c614f0(uVar22);
  uStack_160 = uStack_1b8;
  uStack_168 = uStack_1c0;
  uStack_170 = uStack_1a8;
  uStack_178 = uStack_1b0;
  puStack_150 = puStack_200;
  puStack_148 = puStack_210;
  uStack_a0 = CONCAT71(uStack_157,bVar1);
  uStack_a8 = uStack_1b8;
  uStack_b0 = uStack_1c0;
  puStack_98 = puStack_200;
  puStack_90 = puStack_210;
  uStack_b8 = uStack_1a8;
  uStack_c0 = uStack_1b0;
  pcVar23 = *(code **)(lVar2 + 8);
  puStack_188 = param_5;
  puStack_180 = puVar3;
  uStack_158 = bVar1;
  uStack_140 = param_6;
  uStack_138 = param_7;
  puStack_130 = puVar26;
  puStack_d0 = param_5;
  puStack_c8 = puVar3;
  uStack_88 = param_6;
  uStack_80 = param_7;
  puStack_78 = puVar26;
  func_0x000107c61434(param_7);
  func_0x000107c61174(param_5);
  (*pcVar23)(&puStack_d0,uVar10,lVar2);
  func_0x000107c61170(puVar25);
  func_0x000107c61170(puVar4);
  func_0x0001036c6394(&puStack_188);
  func_0x000107c61574(param_2);
  func_0x000107c615e8(uVar22);
  func_0x0001036c6248(auStack_128);
  return;
}



/* Entry: 1036c4844; end: 1036c4933;  */

uint FUN_1036c4844(undefined8 param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong *puVar2;
  uint uVar3;
  ulong *puStack_48;
  
  func_0x0001000d224c(&puStack_48);
  puVar2 = puStack_48;
  puVar1 = puStack_48;
  func_0x000107c49fa0();
  func_0x000107c615e8(puVar2);
  if ((int)puVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x0001000d224c(&puStack_48);
    puVar2 = puStack_48;
    func_0x000107c44098();
    func_0x000107c61180();
    func_0x000107c615e8();
    (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x70))();
    if (((ulong)puStack_48 & 1) == 0) {
      FUN_1036cde00(param_1,puVar2,param_2);
    }
    uVar3 = (uint)puStack_48 ^ 1;
    func_0x000107c61170(puVar2);
  }
  return uVar3 & 1;
}



/* Entry: 1036c4934; end: 1036c4b5b;  */

bool FUN_1036c4934(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x88);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) goto LAB_1036c4b34;
  lVar2 = param_1;
  func_0x000107c41214();
  func_0x000107c61180();
  uVar6 = param_2;
  if (lVar2 == 0) {
    func_0x000107c5faec();
    uVar6 = param_2;
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  lVar3 = param_1;
  func_0x000107c44fcc(param_1);
  func_0x000107c61180();
  lVar4 = param_1;
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (lVar4 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar6);
  }
  lVar5 = param_1;
  func_0x000107c4f4c4();
  func_0x000107c61180();
  if (lVar5 == 0) {
LAB_1036c4a7c:
    lVar9 = 0;
  }
  else {
    uVar6 = 0;
    lStack_78 = lVar5;
    func_0x000101018e74(0);
    uVar7 = 0;
    func_0x0001036c63c8(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c6147c(&uStack_68,&lStack_78,uVar6,uVar7,7);
    lStack_78 = 0;
    lStack_70 = 0;
    func_0x000107c5fae8(uStack_68,&lStack_78);
    func_0x000107c61170(uStack_68);
    lVar5 = lStack_70;
    if (lStack_70 == 0) goto LAB_1036c4a7c;
    lVar9 = lStack_78;
    func_0x000107c5fadc(lStack_78,lStack_70);
    func_0x000107c6142c(lVar5);
  }
  lVar5 = param_1;
  func_0x000107c5c674(param_1);
  func_0x000107c61180();
  lVar8 = param_1;
  func_0x000107c4f4cc();
  func_0x000107c61180();
  if (lVar8 != 0) {
    func_0x000107c49820();
    func_0x000107c61170(lVar8);
  }
  func_0x000107c4cd44();
  func_0x000107c61180();
  func_0x000107c41190(lVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(lVar1);
LAB_1036c4b34:
  return lVar1 != 0;
}



/* Entry: 1036c4b5c; end: 1036c4f2f;  */

void FUN_1036c4b5c(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long alStack_88 [3];
  
  if (param_2 == 0) {
    if (param_1 == 0) {
      func_0x000107c61428(param_3 + 0x10,&puStack_b8,0,0);
      param_3 = param_3 + 0x10;
      func_0x000107c61648();
      if (param_3 == 0) {
        return;
      }
      func_0x000107c61574();
      func_0x000107c4b1dc(param_4);
      func_0x000107c61180();
    }
    else {
      puVar9 = &UNK_1106809c8;
      puVar3 = puVar9;
      func_0x000107c613fc(&UNK_1106809c8,0x18,7);
      func_0x000107c61428(param_3 + 0x10,alStack_88,0,0);
      lVar4 = param_3 + 0x10;
      func_0x000107c61648(lVar4);
      func_0x000107c61644(puVar3 + 0x10,lVar4);
      func_0x000107c61174(param_1);
      func_0x000107c61574(lVar4);
      puVar5 = &UNK_110680b30;
      func_0x000107c613fc(&UNK_110680b30,0x20,7);
      *(undefined8 *)(puVar5 + 0x10) = param_4;
      *(undefined **)(puVar5 + 0x18) = puVar3;
      puVar3 = &UNK_110680b58;
      func_0x000107c613fc(&UNK_110680b58,0x20,7);
      *(undefined8 *)(puVar3 + 0x10) = 0x1036c61a4;
      *(undefined **)(puVar3 + 0x18) = puVar5;
      puVar1 = PTR___NSConcreteStackBlock_11034bd00;
      pcStack_98 = (code *)0x1036c61ac;
      puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_100fe2610;
      puStack_a0 = &UNK_110680b70;
      ppuVar6 = &puStack_b8;
      puStack_90 = puVar3;
      func_0x000107c60bc4(ppuVar6);
      puVar3 = puStack_90;
      func_0x000107c61174();
      func_0x000107c61574(puVar3);
      puVar7 = puVar9;
      func_0x000107c613fc(&UNK_1106809c8,0x18,7);
      lVar4 = param_3 + 0x10;
      func_0x000107c61648(lVar4);
      func_0x000107c61644(puVar7 + 0x10,lVar4);
      func_0x000107c61574(lVar4);
      puVar3 = &UNK_110680ba8;
      func_0x000107c613fc(&UNK_110680ba8,0x20,7);
      *(undefined **)(puVar3 + 0x10) = puVar7;
      *(undefined8 *)(puVar3 + 0x18) = param_4;
      puVar7 = &UNK_110680bd0;
      func_0x000107c613fc(&UNK_110680bd0,0x20,7);
      *(undefined8 *)(puVar7 + 0x10) = 0x1036c61b4;
      *(undefined **)(puVar7 + 0x18) = puVar3;
      pcStack_98 = FUN_1036c61bc;
      puStack_b8 = puVar1;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_100de6bdc;
      puStack_a0 = &UNK_110680be8;
      ppuVar8 = &puStack_b8;
      puStack_90 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar7 = puStack_90;
      func_0x000107c61174();
      func_0x000107c61574(puVar7);
      func_0x000107c613fc(&UNK_1106809c8,0x18,7);
      param_3 = param_3 + 0x10;
      func_0x000107c61648(param_3);
      func_0x000107c61644(puVar9 + 0x10,param_3);
      func_0x000107c61574(param_3);
      puVar7 = &UNK_110680c20;
      func_0x000107c613fc(&UNK_110680c20,0x20,7);
      *(undefined **)(puVar7 + 0x10) = puVar9;
      *(undefined8 *)(puVar7 + 0x18) = param_4;
      puVar9 = &UNK_110680c48;
      func_0x000107c613fc(&UNK_110680c48,0x20,7);
      *(code **)(puVar9 + 0x10) = FUN_1036c6208;
      *(undefined **)(puVar9 + 0x18) = puVar7;
      pcStack_98 = (code *)0x1036c6210;
      puStack_b8 = puVar1;
      uStack_b0 = 0x42000000;
      puStack_a8 = &UNK_100fe2654;
      puStack_a0 = &UNK_110680c60;
      ppuVar10 = &puStack_b8;
      puStack_90 = puVar9;
      func_0x000107c60bc4(ppuVar10);
      puVar9 = puStack_90;
      func_0x000107c61174(param_4);
      func_0x000107c61574(puVar9);
      func_0x000107c4c744(param_1);
      func_0x000107c60bd0(ppuVar10);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61574(puVar7);
      func_0x000107c61574(puVar3);
      func_0x000107c61574(puVar5);
    }
    func_0x000107c61170();
  }
  else {
    func_0x000107c61428(param_3 + 0x10,&puStack_b8,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    if (param_3 != 0) {
      func_0x000107c614b0(param_2);
      func_0x000107c61574(param_3);
      func_0x000107c4b1dc(param_4);
      func_0x000107c61180();
      func_0x000107c61170();
      alStack_88[0] = param_2;
      func_0x000107c614b0(param_2);
      uVar2 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c5fb18(alStack_88,uVar2);
      func_0x000107c6142c(uVar2);
      func_0x000107c614ac(param_2);
    }
  }
  return;
}



/* Entry: 1036c4f30; end: 1036c52ef;  */

void FUN_1036c4f30(ulong param_1,long param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_68 [24];
  
  uVar1 = param_1;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  lVar5 = param_2;
  func_0x000107c61170(uVar1);
  uVar1 = param_3;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  if ((uVar2 == uVar3) && (param_2 == lVar5)) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar5);
  }
  else {
    func_0x000107c605b8(uVar2,param_2,uVar3,lVar5,0);
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(lVar5);
    if ((uVar2 & 1) == 0) {
      puVar4 = auStack_68;
      func_0x000107c61428(param_4 + 0x10,puVar4,0,0);
      param_4 = param_4 + 0x10;
      func_0x000107c61648();
      if (param_4 == 0) {
        return;
      }
      func_0x000107c61574();
      func_0x000107c4b1dc(param_3);
      func_0x000107c61180();
      func_0x000107c61170();
      func_0x000107c602fc(0x1d);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c4b1dc(param_1);
      func_0x000107c61180();
      uVar1 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      func_0x000107c5fb78(uVar1,puVar4);
      func_0x000107c6142c(puVar4);
      puVar4 = (undefined1 *)0x800000010f159600;
      goto LAB_1036c511c;
    }
  }
  puVar4 = auStack_68;
  func_0x000107c61428(param_4 + 0x10,puVar4,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 == 0) {
    return;
  }
  func_0x000107c4b1dc(param_3);
  func_0x000107c61180();
  uVar1 = param_3;
  func_0x000107c5faec();
  func_0x000107c61170(param_3);
  func_0x0001036c513c(param_1,uVar1,puVar4);
  func_0x000107c61574(param_4);
LAB_1036c511c:
  func_0x000107c6142c(puVar4);
  return;
}



/* Entry: 1036c52f0; end: 1036c534f;  */

void FUN_1036c52f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    func_0x000107c61574();
    func_0x000107c4b1dc(param_4);
    func_0x000107c61180();
    func_0x000107c61170();
  }
  return;
}



/* Entry: 1036c5350; end: 1036c53ef;  */

void FUN_1036c5350(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_48,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61648();
  if (param_4 != 0) {
    func_0x000107c61574();
    func_0x000107c4b1dc(param_5);
    func_0x000107c61180();
    func_0x000107c61170();
    uStack_50 = param_3;
    func_0x000107c614b0(param_3);
    uVar1 = 0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fb18(&uStack_50,uVar1);
    func_0x000107c6142c(uVar1);
  }
  return;
}



/* Entry: 1036c53f0; end: 1036c54b3;  */

void FUN_1036c53f0(undefined8 param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  if (param_2 == 0) {
    func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    if (param_3 != 0) {
      func_0x000107c61574();
    }
  }
  else {
    func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
    param_3 = param_3 + 0x10;
    func_0x000107c61648();
    if (param_3 != 0) {
      func_0x000107c614b0(param_2);
      func_0x000107c61574(param_3);
      lStack_40 = param_2;
      func_0x000107c614b0(param_2);
      uVar1 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c5fb18(&lStack_40,uVar1);
      func_0x000107c6142c(uVar1);
      func_0x000107c614ac(param_2);
    }
  }
  return;
}



/* Entry: 1036c54b4; end: 1036c563f;  */

void FUN_1036c54b4(undefined8 *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar6 = *param_2;
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    func_0x000107c60480();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010101cd8c(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1036c5640);
      (*pcVar1)();
    }
    uVar8 = 0;
    do {
      puVar5 = puStack_68;
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) <= (long)uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1036c5624);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar2 = uVar8;
        func_0x00010101b920(uVar8,uVar6);
      }
      uStack_78 = uVar2;
      FUN_1036c5640(&uStack_70,&uStack_78);
      func_0x000107c61170(uVar2);
      uVar3 = uStack_70;
      uVar2 = *(ulong *)(puVar5 + 0x10);
      puStack_68 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        func_0x00010101cd8c(1 < *(ulong *)(puVar5 + 0x18),uVar2 + 1,1);
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puStack_68 + uVar2 * 8 + 0x20) = uVar3;
      puVar5 = puStack_68;
    } while (uVar7 != uVar8);
  }
  uVar3 = 0;
  func_0x0001036c63c8(0,0x112d55188,&PTR_PTR_1126a6188);
  puVar4 = puVar5;
  func_0x000107c5fc48(puVar5,uVar3);
  func_0x000107c6142c(puVar5);
  *param_1 = puVar4;
  return;
}



/* Entry: 1036c5640; end: 1036c5833;  */

void FUN_1036c5640(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  
  puVar2 = PTR__swift_isaMask_11034f488;
  puVar6 = (ulong *)*param_2;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0x78))();
  puVar7 = param_2;
  lVar4 = param_3;
  (**(code **)((*(ulong *)puVar2 & *puVar6) + 0xa8))();
  lVar5 = lVar4;
  if (lVar4 == 0) {
    (**(code **)((*(ulong *)puVar2 & *puVar6) + 0x90))();
    puVar1 = (undefined8 *)0x0;
    if (lVar4 != 0) {
      puVar1 = puVar7;
    }
    lVar5 = -0x2000000000000000;
    puVar7 = puVar1;
    if (lVar4 != 0) {
      lVar5 = lVar4;
    }
  }
  puVar3 = PTR_PTR_1126a6188;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c6142c(param_3);
  lVar4 = lVar5;
  func_0x000107c5fadc(puVar7);
  func_0x000107c6142c(lVar5);
  func_0x000107c491fc();
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar7);
  (**(code **)((*(ulong *)puVar2 & *puVar6) + 0xc0))();
  if (lVar4 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
    lVar4 = lVar5;
  }
  func_0x000107c52cc4(puVar3);
  func_0x000107c61170(puVar7);
  (**(code **)((*(ulong *)puVar2 & *puVar6) + 0xd8))();
  if (lVar4 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
    lVar4 = lVar5;
  }
  func_0x000107c52d30(puVar3);
  func_0x000107c61170(puVar7);
  (**(code **)((*(ulong *)puVar2 & *puVar6) + 0x90))();
  if (lVar4 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c5a42c(puVar3);
  func_0x000107c61170(puVar7);
  *param_1 = puVar3;
  return;
}



/* Entry: 1036c5834; end: 1036c5887;  */

void FUN_1036c5834(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_1036c5888();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 1036c5888; end: 1036c5a2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1036c5888(void)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar6 = &puStack_70;
  lVar7 = *(long *)(unaff_x20 + 0xb0);
  if ((lVar7 != 0) && ((*(byte *)(lVar7 + 0x20) & 1) == 0)) {
    lVar8 = *(long *)(lVar7 + 0x10);
    uVar2 = 0;
    FUN_1036cc7cc(0);
    lVar3 = lVar8;
    func_0x000107c61480(lVar8,uVar2);
    if ((lVar3 == 0) ||
       (((*(long *)(lVar3 + _DAT_112f87690) == 0 || ((*(byte *)(lVar3 + _DAT_112f876b8) & 1) != 0))
        || (*(char *)(lVar3 + _DAT_112f876c0) == '\x01')))) {
      func_0x000107c6157c(lVar7);
    }
    else {
      bVar1 = *(byte *)(lVar3 + _DAT_112f876c8);
      func_0x000107c6157c(lVar7);
      if ((bVar1 & 1) == 0) {
        func_0x000107c615f0(lVar8);
        FUN_1036cc428();
        func_0x000107c615e8(lVar8);
        lVar8 = *(long *)(lVar7 + 0x10);
      }
    }
    *(undefined1 *)(lVar7 + 0x20) = 1;
    puVar4 = &UNK_1106809c8;
    func_0x000107c613fc(&UNK_1106809c8,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,unaff_x20);
    puVar5 = &UNK_110680d88;
    func_0x000107c613fc(&UNK_110680d88,0x20,7);
    *(undefined **)(puVar5 + 0x10) = puVar4;
    *(long *)(puVar5 + 0x18) = lVar7;
    uStack_50 = 0x1036c6410;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_1000b0c7c;
    puStack_58 = &UNK_110680da0;
    puStack_48 = puVar5;
    func_0x000107c60bc4(&puStack_70);
    puVar4 = puStack_48;
    func_0x000107c6157c(lVar7);
    func_0x000107c615f0(lVar8);
    func_0x000107c61574(puVar4);
    func_0x000107c41864(lVar8);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61574(lVar7);
    func_0x000107c615e8(lVar8);
  }
  return;
}



/* Entry: 1036c5a2c; end: 1036c5b3b;  */

void FUN_1036c5a2c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0xb0);
    func_0x000107c6157c(lVar3);
    func_0x000107c61574(lVar1);
    if ((lVar3 != 0) && (func_0x000107c61574(lVar3), param_2 == lVar3)) {
      func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
      lVar1 = param_1 + 0x10;
      func_0x000107c61648();
      if (lVar1 != 0) {
        uVar2 = *(undefined8 *)(lVar1 + 0xb0);
        *(undefined8 *)(lVar1 + 0xb0) = 0;
        func_0x000107c61574();
        func_0x000107c61574(uVar2);
      }
      func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
      param_1 = param_1 + 0x10;
      func_0x000107c61648();
      if (param_1 != 0) {
        uVar2 = *(undefined8 *)(param_1 + 0xa8);
        func_0x000107c6157c(uVar2);
        func_0x000107c61574(param_1);
        func_0x000100075034(FUN_1036c5b3c,0,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar2);
      }
    }
  }
  return;
}



/* Entry: 1036c5b3c; end: 1036c5b43;  */

void FUN_1036c5b3c(undefined1 *param_1)

{
  *param_1 = 0;
  return;
}



/* Entry: 1036c5b44; end: 1036c5ceb;  */

void FUN_1036c5b44(long param_1)

{
  undefined *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    lVar5 = *(long *)(param_1 + 0xb0);
    if ((lVar5 == 0) || ((*(byte *)(lVar5 + 0x20) & 1) != 0)) {
      func_0x000107c61574();
    }
    else {
      uVar6 = *(undefined8 *)(lVar5 + 0x18);
      puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
      func_0x000107c6157c(lVar5);
      func_0x000107c61174(uVar6);
      func_0x000107c45a48(puVar1);
      func_0x000107c4d664(uVar6);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(puVar1);
      pcVar2 = "requestActivePresentationDismissal()";
      func_0x0001000c10c0("requestActivePresentationDismissal()");
      func_0x000107c61180();
      puVar1 = &UNK_1106809c8;
      func_0x000107c613fc(&UNK_1106809c8,0x18,7);
      func_0x000107c61644(puVar1 + 0x10,param_1);
      puVar3 = &UNK_110680e00;
      func_0x000107c613fc(&UNK_110680e00,0x20,7);
      *(undefined **)(puVar3 + 0x10) = puVar1;
      *(long *)(puVar3 + 0x18) = lVar5;
      pcStack_68 = FUN_1036c644c;
      puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_80 = 0x42000000;
      puStack_78 = &UNK_1000f6b44;
      puStack_70 = &UNK_110680e18;
      ppuVar4 = &puStack_88;
      puStack_60 = puVar3;
      func_0x000107c60bc4(ppuVar4);
      puVar1 = puStack_60;
      func_0x000107c6157c(lVar5);
      func_0x000107c61574(puVar1);
      func_0x000107c4e528(0x3fe999999999999a,pcVar2);
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61574(param_1);
      func_0x000107c61574(lVar5);
      func_0x000107c615e8(pcVar2);
    }
  }
  return;
}



/* Entry: 1036c5cec; end: 1036c5e37;  */

void FUN_1036c5cec(long param_1,long param_2)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  ppuVar4 = &puStack_90;
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  lVar1 = param_1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar5 = *(long *)(lVar1 + 0xb0);
    func_0x000107c6157c(lVar5);
    func_0x000107c61574(lVar1);
    if ((lVar5 != 0) && (func_0x000107c61574(lVar5), param_2 == lVar5)) {
      func_0x000107c61428(param_1 + 0x10,auStack_60,0,0);
      param_1 = param_1 + 0x10;
      func_0x000107c61648();
      if (param_1 != 0) {
        pcVar2 = "dismissActivePresentation()";
        func_0x0001000c10c0("dismissActivePresentation()");
        func_0x000107c61180();
        puVar3 = &UNK_1106809c8;
        func_0x000107c613fc(&UNK_1106809c8,0x18,7);
        func_0x000107c61644(puVar3 + 0x10,param_1);
        uStack_70 = 0x1036c64b4;
        puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_88 = 0x42000000;
        puStack_80 = &UNK_1000f6b44;
        puStack_78 = &UNK_110680e40;
        puStack_68 = puVar3;
        func_0x000107c60bc4(&puStack_90);
        func_0x000107c61574(puStack_68);
        func_0x000107c4e590(pcVar2);
        func_0x000107c60bd0(ppuVar4);
        func_0x000107c61574(param_1);
        func_0x000107c615e8(pcVar2);
      }
    }
  }
  return;
}



/* Entry: 1036c5e38; end: 1036c5f3b;  */

void FUN_1036c5e38(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0xb0));
  return;
}



/* Entry: 1036c5f3c; end: 1036c5f7b;  */

undefined1 FUN_1036c5f3c(void)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 uStack_21;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0xa8);
  func_0x000107c6157c(uVar1);
  func_0x0001000c74f0(&uStack_21);
  func_0x000107c61574(uVar1);
  return uStack_21;
}



/* Entry: 1036c5f7c; end: 1036c5f83;  */

void FUN_1036c5f7c(void)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    pcVar2 = "requestActivePresentationDismissal()";
    func_0x0001000c10c0("requestActivePresentationDismissal()");
    func_0x000107c61180();
    puVar3 = &UNK_1106809c8;
    func_0x000107c613fc(&UNK_1106809c8,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,lVar1);
    uStack_58 = 0x1036c6418;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_110680dc8;
    ppuVar4 = &puStack_78;
    puStack_50 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e524(pcVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(lVar1);
    func_0x000107c615e8(pcVar2);
  }
  return;
}



/* Entry: 1036c5f84; end: 1036c5fcf;  */

void FUN_1036c5f84(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1036c5fd0; end: 1036c6003;  */

void FUN_1036c5fd0(void)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    pcVar2 = "dismissActivePresentation()";
    func_0x0001000c10c0("dismissActivePresentation()");
    func_0x000107c61180();
    puVar3 = &UNK_1106809c8;
    func_0x000107c613fc(&UNK_1106809c8,0x18,7);
    func_0x000107c61644(puVar3 + 0x10,lVar1);
    pcStack_58 = FUN_1036c6408;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_110680d50;
    ppuVar4 = &puStack_78;
    puStack_50 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_50);
    func_0x000107c4e590(pcVar2);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(lVar1);
    func_0x000107c615e8(pcVar2);
  }
  return;
}



/* Entry: 1036c6004; end: 1036c618f;  */

undefined8 FUN_1036c6004(long param_1,long param_2)

{
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 == 0) {
    puVar1 = (undefined1 *)0x0;
    lVar2 = *(long *)(param_2 + 0x18);
  }
  else {
    func_0x0001036c6224(param_1,lVar2);
    lVar5 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    puVar3 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar3);
    puVar1 = puVar3;
    func_0x000107c605b0(puVar3,lVar2);
    (**(code **)(lVar5 + 8))(puVar3,lVar2);
    func_0x0001036c6248(param_1);
    lVar2 = *(long *)(param_2 + 0x18);
  }
  if (lVar2 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    func_0x0001036c6224(param_2,lVar2);
    lVar5 = *(long *)(lVar2 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    puVar4 = &stack0xffffffffffffffa0 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar4);
    puVar3 = puVar4;
    func_0x000107c605b0(puVar4,lVar2);
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
    func_0x0001036c6248(param_2);
  }
  func_0x000107c49528();
  func_0x000107c615e8(puVar1);
  func_0x000107c615e8(puVar3);
  return unaff_x20;
}



/* Entry: 1036c6190; end: 1036c61bb;  */

void FUN_1036c6190(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar1 + 0x10,auStack_48,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c61428(lVar2 + 0x10,auStack_60,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61648();
    if (lVar2 != 0) {
      if (lVar2 == *(long *)(lVar1 + 0xb0)) {
        FUN_1036c3ab8(uVar3);
        func_0x0001036c3c5c(uVar3);
      }
      func_0x000107c61574(lVar1);
      lVar1 = lVar2;
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 1036c61bc; end: 1036c61db;  */

void FUN_1036c61bc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1036c61dc; end: 1036c6207;  */

void FUN_1036c61dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}


