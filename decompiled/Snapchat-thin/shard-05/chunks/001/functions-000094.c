/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b2e178; end: 103b2e257;  */

long * FUN_103b2e178(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar2 = param_2;
    func_0x000107c614c4(param_2,param_3);
    if ((int)plVar2 == 2) {
      lVar3 = 0;
      func_0x000107c5ede0();
      (**(code **)(*(long *)(lVar3 + -8) + 0x10))(param_1,param_2,lVar3);
      uVar4 = 2;
    }
    else if ((int)plVar2 == 1) {
      *param_1 = *param_2;
      func_0x000107c615f0();
      uVar4 = 1;
    }
    else {
      *param_1 = *param_2;
      func_0x000107c61174();
      uVar4 = 0;
    }
    func_0x000107c6159c(param_1,param_3,uVar4);
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103b2e258; end: 103b2e2cf;  */

void FUN_103b2e258(undefined8 *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  
  puVar2 = param_1;
  func_0x000107c614c4();
  iVar1 = (int)puVar2;
  if (iVar1 == 2) {
    lVar3 = 0;
    func_0x000107c5ede0();
                    /* WARNING: Could not recover jumptable at 0x000103b2e2c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar3 + -8) + 8))(param_1,lVar3);
    return;
  }
  if (iVar1 != 1) {
    if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(*param_1);
      return;
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*param_1);
  return;
}



/* Entry: 103b2e2d0; end: 103b2e557;  */

undefined8 * FUN_103b2e2d0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  
  puVar1 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)puVar1 == 2) {
    lVar2 = 0;
    func_0x000107c5ede0();
    (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,param_2,lVar2);
  }
  else if ((int)puVar1 == 1) {
    *param_1 = *param_2;
    func_0x000107c615f0();
  }
  else {
    *param_1 = *param_2;
    func_0x000107c61174();
  }
  func_0x000107c6159c(param_1,param_3,puVar1);
  return param_1;
}



/* Entry: 103b2e558; end: 103b2e587;  */

void FUN_103b2e558(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000103b2e560. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 103b2e588; end: 103b2e64b;  */

void FUN_103b2e588(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_38 = PTR___sBOWV_11034d658 + 0x40;
  puStack_30 = &UNK_10dc56370;
  lVar1 = 0x13f;
  func_0x000107c5ede0();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61528(param_1,0x100,3,&puStack_38);
  }
  return;
}



/* Entry: 103b2e64c; end: 103b2e65b; -[SCSingleSnapMediaItemDescriptor mediaItemIdentifier] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2e64c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112feccd0));
  return;
}



/* Entry: 103b2e65c; end: 103b2e66b; -[SCSingleSnapMediaItemDescriptor layerType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b2e65c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112feccd8);
}



/* Entry: 103b2e66c; end: 103b2e67b; -[SCSingleSnapMediaItemDescriptor mediaType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b2e66c(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112fecce0);
}



/* Entry: 103b2e67c; end: 103b2e687; -[SCSingleSnapMediaItemDescriptor encKey] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2e67c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112fecce8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112fecce8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b2e688; end: 103b2e693; -[SCSingleSnapMediaItemDescriptor encIv] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2e688(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112feccf0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112feccf0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b2e694; end: 103b2e6eb;  */

void FUN_103b2e694(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103b2e6ec; end: 103b2e79f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2e6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112feccd0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112feccd8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112fecce0) = param_3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fecce8);
  *puVar1 = param_4;
  puVar1[1] = param_5;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feccf0);
  *puVar1 = param_6;
  puVar1[1] = param_7;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b2e7a0; end: 103b2e88f; -[SCSingleSnapMediaItemDescriptor initWithMediaItemIdentifier:layerType:mediaType:encKey:encIv:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2e7a0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lStack_60;
  long lStack_58;
  
  lVar4 = param_1;
  func_0x000107c614f0();
  if (param_6 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar2 = param_2;
  }
  if (param_7 == 0) {
    param_7 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  *(undefined8 *)(param_1 + _DAT_112feccd0) = param_3;
  *(undefined8 *)(param_1 + _DAT_112feccd8) = param_4;
  *(undefined8 *)(param_1 + _DAT_112fecce0) = param_5;
  plVar1 = (long *)(param_1 + _DAT_112fecce8);
  *plVar1 = param_6;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_112feccf0);
  *plVar1 = param_7;
  plVar1[1] = param_2;
  puVar3 = PTR_s_init_1125d9248;
  lStack_60 = param_1;
  lStack_58 = lVar4;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_60,puVar3);
  return;
}



/* Entry: 103b2e890; end: 103b2ea7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_103b2e890(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long unaff_x20;
  undefined1 auStack_80 [8];
  undefined1 auStack_70 [16];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar2 = auStack_80;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112feccd0) = *param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112feccd8) = param_1[1];
  *(undefined8 *)(unaff_x20 + _DAT_112fecce0) = param_1[2];
  uStack_48 = param_1[4];
  uStack_50 = param_1[3];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112fecce8);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[6];
  uStack_60 = param_1[5];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112feccf0);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  func_0x000107c61174();
  func_0x000103b2ef18(&uStack_50,auStack_70,0x112d35ff8,&UNK_10d900cd0);
  func_0x000103b2ef18(&uStack_60,auStack_70,0x112d35ff8,&UNK_10d900cd0);
  func_0x000107c61154(auStack_80,PTR_s_init_1125d9248);
  func_0x000101e49e54(param_1);
  return puVar2;
}



/* Entry: 103b2ea7c; end: 103b2eaaf; -[SCSingleSnapMediaItemDescriptor hash] */

undefined8 FUN_103b2ea7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103b2eab0();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103b2eab0; end: 103b2ebb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2eab0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  func_0x000107c44c3c(*(undefined8 *)(unaff_x20 + _DAT_112feccd0));
  func_0x000107c60690();
  func_0x000107c60690(*(undefined8 *)(unaff_x20 + _DAT_112feccd8));
  func_0x000107c60690(*(undefined8 *)(unaff_x20 + _DAT_112fecce0));
  if (((undefined8 *)(unaff_x20 + _DAT_112fecce8))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112fecce8);
    func_0x000107c5fadc(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    func_0x000107c61170(uVar1);
  }
  func_0x000107c60690(uVar2);
  if (((undefined8 *)(unaff_x20 + _DAT_112feccf0))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112feccf0);
    func_0x000107c5fadc(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    func_0x000107c61170(uVar1);
  }
  func_0x000107c60690(uVar2);
  func_0x000107c606a4();
  return;
}



/* Entry: 103b2ebb4; end: 103b2ed93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103b2ebb4(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  uint uVar7;
  uint uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lStack_78;
  undefined1 auStack_70 [24];
  long lStack_58;
  
  lVar5 = unaff_x20;
  func_0x000107c614f0();
  func_0x000103b2ef18(param_1,auStack_70,0x112d387f8,&UNK_10d902650);
  if (lStack_58 == 0) {
    func_0x00010006e7f4(auStack_70);
    return 0;
  }
  plVar3 = &lStack_78;
  func_0x000107c6147c(plVar3,auStack_70,PTR___sypN_11034f1a8 + 8,lVar5,6);
  if (((ulong)plVar3 & 1) == 0) {
    return 0;
  }
  uVar2 = (uint)*(undefined8 *)(unaff_x20 + _DAT_112feccd0);
  func_0x000107c49cec();
  lVar9 = *(long *)(unaff_x20 + _DAT_112feccd8);
  lVar11 = *(long *)(lStack_78 + _DAT_112feccd8);
  lVar10 = *(long *)(unaff_x20 + _DAT_112fecce0);
  lVar12 = *(long *)(lStack_78 + _DAT_112fecce0);
  lVar5 = ((long *)(unaff_x20 + _DAT_112fecce8))[1];
  lVar6 = ((long *)(lStack_78 + _DAT_112fecce8))[1];
  uVar7 = (uint)(lVar5 == 0 && lVar6 == 0);
  if (lVar5 != 0 && lVar6 != 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112fecce8);
    if (lVar4 == *(long *)(lStack_78 + _DAT_112fecce8) && lVar5 == lVar6) {
      uVar7 = 1;
    }
    else {
      func_0x000107c605b8();
      uVar7 = (uint)lVar4;
    }
  }
  lVar5 = ((long *)(unaff_x20 + _DAT_112feccf0))[1];
  lVar6 = ((long *)(lStack_78 + _DAT_112feccf0))[1];
  if (lVar5 == 0) {
    func_0x000107c61434(lVar6);
    func_0x000107c61170(lStack_78);
    if (lVar6 != 0) {
      func_0x000107c6142c(lVar6);
      uVar8 = 0;
      goto LAB_103b2ed54;
    }
LAB_103b2ed34:
    uVar8 = 1;
  }
  else {
    uVar8 = 0;
    if (lVar6 != 0) {
      lVar4 = *(long *)(unaff_x20 + _DAT_112feccf0);
      if ((lVar4 == *(long *)(lStack_78 + _DAT_112feccf0)) && (lVar5 == lVar6)) {
        func_0x000107c61170(lStack_78);
        goto LAB_103b2ed34;
      }
      func_0x000107c605b8();
      uVar8 = (uint)lVar4;
    }
    func_0x000107c61170(lStack_78);
  }
LAB_103b2ed54:
  uVar1 = 0;
  if (lVar9 == lVar11) {
    uVar1 = uVar2;
  }
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  return lVar10 == lVar12 & uVar8 & uVar7;
}



/* Entry: 103b2ed94; end: 103b2ee13; -[SCSingleSnapMediaItemDescriptor isEqual:] */

uint FUN_103b2ed94(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103b2ebb4(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103b2ee14; end: 103b2ee17; -[SCSingleSnapMediaItemDescriptor copyWithZone:] */

void FUN_103b2ee14(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b2ee18; end: 103b2ee4b; -[SCSingleSnapMediaItemDescriptor description] */

void FUN_103b2ee18(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c6142c(0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b2ee4c; end: 103b2eec7; -[SCSingleSnapMediaItemDescriptor init] */

void FUN_103b2ee4c(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SingleSnapPlayerMediaDefines/SingleSnapMediaItemDescriptorWrapper.swift",0x47
                      ,2,0x4f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b2ee94);
  (*pcVar1)();
}



/* Entry: 103b2eec8; end: 103b2ef5f; -[SCSingleSnapMediaItemDescriptor .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b2eef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b2eefc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2eec8(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112feccd0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112fecce8 + 8))
  ;
  return;
}



/* Entry: 103b2ef60; end: 103b2ef7f;  */

void FUN_103b2ef60(void)

{
  func_0x000107c61168(&PTR_PTR_11292aab8);
  return;
}



/* Entry: 103b2ef80; end: 103b2f02b;  */

void FUN_103b2ef80(void)

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



/* Entry: 103b2f02c; end: 103b2f063;  */

void FUN_103b2f02c(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 103b2f064; end: 103b2f0db; -[SCSingleSnapPlayerMediaAsset description] */

void FUN_103b2f064(undefined8 param_1)

{
  long lVar1;
  long extraout_x8;
  
  lVar1 = 0;
  FUN_103b2dc40();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x000107c61174(param_1);
  FUN_103b2f0dc(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000101e3cee4(&stack0xffffffffffffffe0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b2f0dc; end: 103b2f3d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2f0dc(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &stack0xffffffffffffffa0 + -extraout_x8;
  lVar1 = 0x112e32328;
  func_0x0001000285a8(0x112e32328,&UNK_10da1b750);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  lVar3 = (long)puVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  plVar4 = (long *)(lVar3 - extraout_x12);
  lVar1 = 0;
  FUN_103b2dc40();
  lVar7 = *(long *)(lVar1 + -8);
  pcVar8 = *(code **)(lVar7 + 0x38);
  (*pcVar8)(plVar4,1,1,lVar1);
  if (*(char *)(param_2 + _DAT_112fecd20) == '\0') {
    lVar6 = *(long *)(param_2 + _DAT_112fecd28);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x103b2f3d0);
      (*pcVar8)();
    }
    func_0x000103b2fd3c(plVar4,0x112e32328,&UNK_10da1b750);
    *plVar4 = lVar6;
    func_0x000107c6159c(plVar4,lVar1,0);
    (*pcVar8)(plVar4,0,1,lVar1);
    func_0x000107c61174(lVar6);
  }
  else if (*(char *)(param_2 + _DAT_112fecd20) == '\x01') {
    lVar6 = *(long *)(param_2 + _DAT_112fecd30);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x103b2f3cc);
      (*pcVar8)();
    }
    func_0x000103b2fd3c(plVar4,0x112e32328,&UNK_10da1b750);
    *plVar4 = lVar6;
    func_0x000107c6159c(plVar4,lVar1,1);
    (*pcVar8)(plVar4,0,1,lVar1);
    func_0x000107c615f0(lVar6);
  }
  else {
    func_0x000103b2fcf4(param_2 + _DAT_112fecd38,puVar5,0x112d36580,&UNK_10d9016d0);
    lVar6 = 0;
    func_0x000107c5ede0();
    lVar9 = *(long *)(lVar6 + -8);
    puVar2 = puVar5;
    (**(code **)(lVar9 + 0x30))(puVar5,1,lVar6);
    if ((int)puVar2 == 1) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x103b2f3d4);
      (*pcVar8)();
    }
    func_0x000103b2fd3c(plVar4,0x112e32328,&UNK_10da1b750);
    (**(code **)(lVar9 + 0x10))(plVar4,puVar5,lVar6);
    func_0x000107c6159c(plVar4,lVar1,2);
    (*pcVar8)(plVar4,0,1,lVar1);
    (**(code **)(lVar9 + 8))(puVar5,lVar6);
  }
  func_0x000103b2fcf4(plVar4,lVar3,0x112e32328,&UNK_10da1b750);
  lVar6 = lVar3;
  (**(code **)(lVar7 + 0x30))(lVar3,1,lVar1);
  if ((int)lVar6 != 1) {
    func_0x000107c61170(param_2);
    func_0x000101e3cf20(lVar3,param_1);
    func_0x000103b2fd3c(plVar4,0x112e32328,&UNK_10da1b750);
    return;
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x103b2f3c8);
  (*pcVar8)();
}



/* Entry: 103b2f3d4; end: 103b2f41b; -[SCSingleSnapPlayerMediaAsset init] */

void FUN_103b2f3d4(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SingleSnapPlayerMediaDefines/SingleSnapPlayerMediaAssetWrapper.swift",0x44,2,
                      0x36,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b2f41c);
  (*pcVar1)();
}



/* Entry: 103b2f41c; end: 103b2f44f; -[SCSingleSnapPlayerMediaAsset hash] */

undefined8 FUN_103b2f41c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103b2f450();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103b2f450; end: 103b2f5e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2f450(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [72];
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_80 + -extraout_x8;
  func_0x000107c606ac(auStack_78);
  func_0x000107c60690(*(undefined1 *)(unaff_x20 + _DAT_112fecd20));
  lVar1 = *(long *)(unaff_x20 + _DAT_112fecd28);
  if (lVar1 == 0) {
    func_0x000107c60694();
  }
  else {
    func_0x000107c44c3c();
    func_0x000107c60694(1);
    func_0x000107c60690(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112fecd30);
  if (lVar1 == 0) {
    func_0x000107c60694();
  }
  else {
    func_0x000107c44c3c();
    func_0x000107c60694(1);
    func_0x000107c60690(lVar1);
  }
  FUN_103b2fcf4(unaff_x20 + _DAT_112fecd38,puVar3,0x112d36580,&UNK_10d9016d0);
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  puVar2 = puVar3;
  (**(code **)(lVar4 + 0x30))(puVar3,1,lVar1);
  if ((int)puVar2 == 1) {
    func_0x000103b2fd3c(puVar3,0x112d36580,&UNK_10d9016d0);
    puVar3 = (undefined1 *)0x0;
  }
  else {
    func_0x000107c5ed90();
    (**(code **)(lVar4 + 8))(puVar3,lVar1);
    puVar3 = puVar2;
    func_0x000107c44c3c(puVar2);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c60690(puVar3);
  func_0x000107c606a4();
  return;
}



/* Entry: 103b2f5e4; end: 103b2fa0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103b2f5e4(undefined8 param_1)

{
  char cVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  long extraout_x12;
  undefined1 *puVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  long lVar14;
  uint uVar15;
  code *pcVar16;
  long lVar17;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  lVar4 = 0;
  func_0x000107c5ede0();
  lVar17 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar17 + 0x40));
  lVar12 = (long)&lStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0x112d7e680;
  func_0x0001000285a8(0x112d7e680,&UNK_10d95e350);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined1 *)(lVar12 - extraout_x8_00);
  lVar13 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar13 + -8) + 0x40));
  lVar13 = (long)puVar11 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar13 - extraout_x12;
  FUN_103b2fcf4(param_1,auStack_80,0x112d387f8,&UNK_10d902650);
  if (lStack_68 == 0) {
    uVar8 = 0x112d387f8;
    puVar9 = &UNK_10d902650;
    puVar11 = auStack_80;
LAB_103b2f7a8:
    func_0x000103b2fd3c(puVar11,uVar8,puVar9);
  }
  else {
    plVar5 = &lStack_88;
    func_0x000107c6147c(plVar5,auStack_80,PTR___sypN_11034f1a8 + 8,lVar3,6);
    lVar3 = _DAT_112fecd38;
    if (((ulong)plVar5 & 1) != 0) {
      cVar1 = *(char *)(unaff_x20 + _DAT_112fecd20);
      lVar7 = lStack_88;
      if (cVar1 == *(char *)(lStack_88 + _DAT_112fecd20)) {
        if (cVar1 == '\0') {
          lVar10 = *(long *)(unaff_x20 + _DAT_112fecd28);
          if (lVar10 == 0) {
            lVar10 = *(long *)(lStack_88 + _DAT_112fecd28);
            lVar7 = lVar10;
            func_0x000107c61174(lVar10);
            func_0x000107c61170(lStack_88);
            if (lVar10 == 0) {
LAB_103b2f980:
              uVar15 = 1;
              goto LAB_103b2f95c;
            }
            goto LAB_103b2f954;
          }
        }
        else {
          if (cVar1 != '\x01') {
            lStack_90 = lStack_88;
            FUN_103b2fcf4(lStack_88 + _DAT_112fecd38,lVar14,0x112d36580,&UNK_10d9016d0);
            iVar2 = *(int *)(lVar10 + 0x30);
            FUN_103b2fcf4(unaff_x20 + lVar3,puVar11,0x112d36580,&UNK_10d9016d0);
            FUN_103b2fcf4(lVar14,puVar11 + iVar2,0x112d36580,&UNK_10d9016d0);
            pcVar16 = *(code **)(lVar17 + 0x30);
            puVar6 = puVar11;
            (*pcVar16)(puVar11,1,lVar4);
            if ((int)puVar6 == 1) {
              func_0x000107c61170(lStack_90);
              func_0x000103b2fd3c(lVar14,0x112d36580,&UNK_10d9016d0);
              puVar6 = puVar11 + iVar2;
              (*pcVar16)(puVar6,1,lVar4);
              if ((int)puVar6 == 1) {
                func_0x000103b2fd3c(puVar11,0x112d36580,&UNK_10d9016d0);
                uVar15 = 1;
                goto LAB_103b2f95c;
              }
            }
            else {
              FUN_103b2fcf4(puVar11,lVar13,0x112d36580,&UNK_10d9016d0);
              puVar6 = puVar11 + iVar2;
              (*pcVar16)(puVar6,1,lVar4);
              if ((int)puVar6 != 1) {
                lVar10 = lVar12;
                (**(code **)(lVar17 + 0x20))(lVar12,puVar11 + iVar2,lVar4);
                func_0x000101553b98();
                lVar3 = lVar13;
                func_0x000107c5fab8(lVar13,lVar12,lVar4,lVar10);
                uVar15 = (uint)lVar3;
                func_0x000107c61170(lStack_90);
                pcVar16 = *(code **)(lVar17 + 8);
                (*pcVar16)(lVar12,lVar4);
                func_0x000103b2fd3c(lVar14,0x112d36580,&UNK_10d9016d0);
                (*pcVar16)(lVar13,lVar4);
                func_0x000103b2fd3c(puVar11,0x112d36580,&UNK_10d9016d0);
                goto LAB_103b2f95c;
              }
              func_0x000107c61170(lStack_90);
              func_0x000103b2fd3c(lVar14,0x112d36580,&UNK_10d9016d0);
              (**(code **)(lVar17 + 8))(lVar13,lVar4);
            }
            uVar8 = 0x112d7e680;
            puVar9 = &UNK_10d95e350;
            goto LAB_103b2f7a8;
          }
          lVar10 = *(long *)(unaff_x20 + _DAT_112fecd30);
          if (lVar10 == 0) {
            lVar10 = *(long *)(lStack_88 + _DAT_112fecd30);
            func_0x000107c615f0(lVar10);
            func_0x000107c61170(lStack_88);
            if (lVar10 == 0) goto LAB_103b2f980;
            func_0x000107c615e8(lVar10);
            goto LAB_103b2f958;
          }
        }
        func_0x000107c49cec(lVar10);
        uVar15 = (uint)lVar10;
        func_0x000107c61170(lStack_88);
        goto LAB_103b2f95c;
      }
LAB_103b2f954:
      func_0x000107c61170(lVar7);
    }
  }
LAB_103b2f958:
  uVar15 = 0;
LAB_103b2f95c:
  return uVar15 & 1;
}



/* Entry: 103b2fa10; end: 103b2fa9f; -[SCSingleSnapPlayerMediaAsset isEqual:] */

uint FUN_103b2fa10(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  if (param_3 == 0) {
    uStack_38 = 0;
    uStack_40 = 0;
    uStack_28 = 0;
    uStack_30 = 0;
    func_0x000107c61174(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x000107c615f0(param_3);
    func_0x000107c60234(&uStack_40);
    func_0x000107c615e8(param_3);
  }
  FUN_103b2f5e4(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x000103b2fd3c(&uStack_40,0x112d387f8,&UNK_10d902650);
  return uVar1 & 1;
}



/* Entry: 103b2faa0; end: 103b2faa3; -[SCSingleSnapPlayerMediaAsset copyWithZone:] */

void FUN_103b2faa0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b2faa4; end: 103b2fadb; +[SCSingleSnapPlayerMediaAsset imageWithImage:] */

void FUN_103b2faa4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  FUN_103b2fe70();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b2fadc; end: 103b2fb17; +[SCSingleSnapPlayerMediaAsset videoWithAsset:] */

void FUN_103b2fadc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c615f0(param_3);
  uVar1 = param_3;
  FUN_103b2ff98(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b2fb18; end: 103b2fba3; +[SCSingleSnapPlayerMediaAsset subtitleWithUrl:] */

void FUN_103b2fb18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 *puVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5edb4(puVar3,param_3);
  puVar2 = puVar3;
  FUN_103b300cc(puVar3);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 103b2fba4; end: 103b2fcf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2fba4(code *param_1,undefined8 param_2,code *param_3,undefined8 param_4,code *param_5)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffb0 + -extraout_x8;
  if (*(char *)(unaff_x20 + _DAT_112fecd20) == '\0') {
    if (*(long *)(unaff_x20 + _DAT_112fecd28) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b2fcf0);
      (*pcVar1)();
    }
    (*param_1)();
  }
  else if (*(char *)(unaff_x20 + _DAT_112fecd20) == '\x01') {
    if (*(long *)(unaff_x20 + _DAT_112fecd30) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b2fcec);
      (*pcVar1)();
    }
    (*param_3)();
  }
  else {
    FUN_103b2fcf4(unaff_x20 + _DAT_112fecd38,puVar4,0x112d36580,&UNK_10d9016d0);
    lVar2 = 0;
    func_0x000107c5ede0();
    lVar5 = *(long *)(lVar2 + -8);
    puVar3 = puVar4;
    (**(code **)(lVar5 + 0x30))(puVar4,1,lVar2);
    if ((int)puVar3 == 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103b2fcf4);
      (*pcVar1)();
    }
    (*param_5)(puVar4);
    (**(code **)(lVar5 + 8))(puVar4,lVar2);
  }
  return;
}



/* Entry: 103b2fcf4; end: 103b2fd7b;  */

undefined8 FUN_103b2fcf4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103b2fd7c; end: 103b2fddf; -[SCSingleSnapPlayerMediaAsset matchImage:video:subtitle:] */

void FUN_103b2fd7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_80 [16];
  undefined8 uStack_70;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined1 auStack_40 [16];
  undefined8 uStack_30;
  
  uStack_70 = param_5;
  uStack_50 = param_4;
  uStack_30 = param_3;
  func_0x000107c61174();
  FUN_103b2fba4(FUN_103b304bc,auStack_40,FUN_103b30470,auStack_60,FUN_103b30480,auStack_80);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 103b2fde0; end: 103b2fe13;  */

void FUN_103b2fde0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b2fe14; end: 103b2fe6f; -[SCSingleSnapPlayerMediaAsset .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b2fe14(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fecd28));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112fecd30));
  func_0x000103b2fd3c(param_1 + _DAT_112fecd38,0x112d36580,&UNK_10d9016d0);
  return;
}



/* Entry: 103b2fe70; end: 103b2ff97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103b2fe70(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  long lStack_50;
  long lStack_48;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&lStack_50 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar5,1,1,lVar2);
  lVar3 = 0;
  FUN_103b3020c();
  lVar2 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112fecd20) = 0;
  *(undefined8 *)(lVar2 + _DAT_112fecd28) = param_1;
  *(undefined8 *)(lVar2 + _DAT_112fecd30) = 0;
  FUN_103b2fcf4(lVar5,lVar2 + _DAT_112fecd38,0x112d36580,&UNK_10d9016d0);
  puVar1 = PTR_s_init_1125d9248;
  lStack_50 = lVar2;
  lStack_48 = lVar3;
  func_0x000107c61174(param_1);
  plVar4 = &lStack_50;
  func_0x000107c61154(plVar4,puVar1);
  func_0x000103b2fd3c(lVar5,0x112d36580,&UNK_10d9016d0);
  return plVar4;
}



/* Entry: 103b2ff98; end: 103b300cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103b2ff98(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  long lStack_60;
  long lStack_58;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&lStack_60 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar5,1,1,lVar2);
  lVar3 = 0;
  FUN_103b3020c();
  lVar2 = lVar3;
  func_0x000107c610f8();
  *(undefined1 *)(lVar2 + _DAT_112fecd20) = 1;
  *(undefined8 *)(lVar2 + _DAT_112fecd28) = 0;
  *(undefined8 *)(lVar2 + _DAT_112fecd30) = param_1;
  FUN_103b2fcf4(lVar5,lVar2 + _DAT_112fecd38,0x112d36580,&UNK_10d9016d0);
  puVar1 = PTR_s_init_1125d9248;
  lStack_60 = lVar2;
  lStack_58 = lVar3;
  func_0x000107c615f0(param_1);
  plVar4 = &lStack_60;
  func_0x000107c61154(plVar4,puVar1);
  func_0x000103b2fd3c(lVar5,0x112d36580,&UNK_10d9016d0);
  return plVar4;
}



/* Entry: 103b300cc; end: 103b30203;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103b300cc(undefined8 param_1)

{
  long lVar1;
  long *plVar2;
  long extraout_x8;
  long lVar3;
  long lVar4;
  long lStack_50;
  long lStack_48;
  
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&lStack_50 - extraout_x8;
  lVar1 = 0;
  func_0x000107c5ede0();
  lVar4 = *(long *)(lVar1 + -8);
  (**(code **)(lVar4 + 0x10))(lVar3,param_1,lVar1);
  (**(code **)(lVar4 + 0x38))(lVar3,0,1,lVar1);
  lVar4 = 0;
  FUN_103b3020c();
  lVar1 = lVar4;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_112fecd20) = 2;
  *(undefined8 *)(lVar1 + _DAT_112fecd28) = 0;
  *(undefined8 *)(lVar1 + _DAT_112fecd30) = 0;
  FUN_103b2fcf4(lVar3,lVar1 + _DAT_112fecd38,0x112d36580,&UNK_10d9016d0);
  plVar2 = &lStack_50;
  lStack_50 = lVar1;
  lStack_48 = lVar4;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  func_0x000103b2fd3c(lVar3,0x112d36580,&UNK_10d9016d0);
  return plVar2;
}



/* Entry: 103b30204; end: 103b3020b;  */

void FUN_103b30204(void)

{
  if (lRam0000000112fecd68 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e7aded4);
  return;
}



/* Entry: 103b3020c; end: 103b30243;  */

void FUN_103b3020c(undefined8 param_1)

{
  if (lRam0000000112fecd68 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7aded4);
  return;
}



/* Entry: 103b30244; end: 103b302c7;  */

void FUN_103b30244(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_40 = &UNK_10dc563e0;
  puStack_38 = &UNK_10dc563f8;
  puStack_30 = &UNK_10dc563f8;
  lVar1 = 0x13f;
  func_0x0001000ee934();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,4,&puStack_40,param_1 + 0x50);
  }
  return;
}



/* Entry: 103b302c8; end: 103b3042f;  */

int FUN_103b302c8(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_103b30344;
        goto LAB_103b30328;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_103b30328:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_103b30344:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 103b30430; end: 103b3046f;  */

void FUN_103b30430(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fecd78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc56434;
  func_0x000107c61520(&UNK_10dc56434,&UNK_1106d5140);
  puRam0000000112fecd78 = puVar1;
  return;
}



/* Entry: 103b30470; end: 103b3047f;  */

void FUN_103b30470(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103b3047c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103b30480; end: 103b304bb;  */

void FUN_103b30480(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5ed90();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103b304bc; end: 103b304e3;  */

void FUN_103b304bc(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000103b3047c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Entry: 103b304e4; end: 103b308db;  */

/* WARNING: Possible PIC construction at 0x000103b306f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b307b0: Changing call to branch */

undefined1 *
FUN_103b304e4(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,undefined1 *param_4,
             undefined1 *param_5,undefined1 *param_6,undefined1 *param_7,undefined1 *param_8,
             undefined1 *param_9,undefined1 *param_10,uint param_11)

{
  byte in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  ulong uVar4;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *unaff_x21;
  undefined1 *unaff_x22;
  undefined1 *unaff_x23;
  undefined1 *unaff_x24;
  undefined1 *unaff_x25;
  undefined1 auStack_d0 [8];
  undefined1 *puStack_c8;
  undefined1 *puStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined1 *puStack_a8;
  undefined1 *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined1 *puStack_88;
  undefined1 *puStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 *puStack_68;
  undefined1 *puStack_60;
  undefined1 auStack_58 [8];
  
  uVar4 = (ulong)param_7 & 0xff;
  puVar1 = param_4;
  puVar2 = param_6;
  switch(uVar4) {
  default:
    in_ZR = (param_11 & 0xff) == 0;
  case 0x1c:
  case 0x2a:
  case 0x9c:
  case 0xaa:
    if (!(bool)in_ZR) break;
code_r0x000103b30524:
    param_1 = param_5;
code_r0x000103b30528:
    param_2 = param_4;
    param_3 = param_8;
code_r0x000103b30530:
    in_ZR = 0;
    if (!NAN((double)param_1) && !NAN((double)param_9)) {
      in_ZR = (double)param_1 == (double)param_9;
    }
code_r0x000103b30538:
    uVar3 = 0;
    if ((double)param_2 == (double)param_3) {
      uVar3 = (uint)in_ZR;
    }
    goto code_r0x000103b308bc;
  case 1:
    unaff_x21 = param_5;
    unaff_x25 = param_6;
    if ((param_11 & 0xff) == 1) goto code_r0x000103b30630;
  case 0x87:
    break;
  case 2:
    if ((param_11 & 0xff) != 2) break;
    uVar3 = (uint)(param_4 == param_8);
    goto code_r0x000103b308bc;
  case 3:
  case 0x89:
    if ((param_11 & 0xff) == 3) {
code_r0x000103b305a4:
      in_ZR = 0;
      if (!NAN((double)param_4) && !NAN((double)param_8)) {
        in_ZR = (double)param_4 == (double)param_8;
      }
      goto code_r0x000103b305b0;
    }
    break;
  case 4:
    if ((param_11 & 0xff) == 4) goto code_r0x000103b305a4;
    break;
  case 5:
    unaff_x21 = param_5;
    unaff_x25 = param_6;
    if ((param_11 & 0xff) == 5) goto code_r0x000103b30630;
    break;
  case 6:
    in_ZR = (param_11 & 0xff) == 6;
  case 0x31:
  case 0xb1:
    unaff_x23 = param_5;
    unaff_x24 = param_9;
    if (!(bool)in_ZR) break;
code_r0x000103b3068c:
    func_0x000107c614cc(param_4,auStack_98,auStack_b0);
    unaff_x21 = param_8;
code_r0x000103b3069c:
    param_4 = puStack_a8;
code_r0x000103b306a0:
    func_0x000107c60640();
    unaff_x19 = puStack_a0;
    unaff_x22 = param_4;
code_r0x000103b306b0:
    param_5 = auStack_b8;
    param_6 = auStack_d0;
code_r0x000103b306b8:
    func_0x000107c614cc(unaff_x21,param_5,param_6);
code_r0x000103b306c0:
    param_4 = puStack_c8;
    param_5 = puStack_c0;
code_r0x000103b306c8:
    func_0x000107c60640();
code_r0x000103b306cc:
    in_ZR = unaff_x22 == param_4;
    unaff_x20 = param_5;
code_r0x000103b306d4:
    if (!(bool)in_ZR || unaff_x19 != param_5) {
code_r0x000103b306dc:
      puVar1 = unaff_x22;
      param_6 = param_4;
code_r0x000103b306e4:
      param_5 = unaff_x19;
code_r0x000103b306e8:
      param_7 = unaff_x20;
      puVar2 = param_6;
code_r0x000103b306ec:
      param_4 = puVar1;
      param_6 = param_5;
      param_8 = puVar2;
      param_10 = param_7;
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(param_4,param_6,param_8,param_10,0);
      return param_4;
    }
code_r0x000103b3080c:
    func_0x000107c6142c(unaff_x19);
    func_0x000107c6142c(unaff_x20);
code_r0x000103b3081c:
    uVar3 = (uint)(unaff_x23 == unaff_x24);
    goto code_r0x000103b308bc;
  case 7:
    if (((param_11 & 0xff) == 7) && ((((uint)param_8 ^ (uint)param_4) & 1) == 0)) {
      param_4 = param_5;
      param_8 = param_9;
      if (param_5 != param_9) goto code_r0x000107c605b8;
      in_ZR = param_6 == param_10;
      goto code_r0x000103b305d8;
    }
    break;
  case 8:
    if ((param_11 & 0xff) == 8) {
      func_0x000107c614cc(param_4,auStack_58,auStack_70);
      func_0x000107c60640();
      param_4 = puStack_68;
      param_5 = puStack_60;
      unaff_x19 = param_8;
      goto code_r0x000103b30768;
    }
    break;
  case 9:
    uVar4 = (ulong)(param_11 & 0xff);
  case 0xe0:
  case 0xe8:
    if ((int)uVar4 != 9) break;
    in_ZR = param_4 == param_8;
code_r0x000103b30568:
    param_6 = param_5;
    param_10 = param_9;
    if ((!(bool)in_ZR) || (param_5 != param_9)) goto code_r0x000107c605b8;
code_r0x000103b308b0:
    uVar3 = 1;
    goto code_r0x000103b308bc;
  case 10:
    uVar4 = (ulong)param_6 | (ulong)param_5;
    if (uVar4 != 0 || param_4 != (undefined1 *)0x0) {
      if ((param_4 != (undefined1 *)0x1) || (uVar4 != 0)) {
        if (param_4 == (undefined1 *)0x2) goto code_r0x000103b307f0;
        goto code_r0x000103b30840;
      }
      goto code_r0x000103b30728;
    }
    if ((param_11 & 0xff) == 10) {
      uVar4 = (ulong)param_10 | (ulong)param_9 | (ulong)param_8;
      goto code_r0x000103b307e0;
    }
    break;
  case 0xc:
  case 0x27:
  case 0xa7:
    func_0x000107c6157c();
    return unaff_x19 + 0x10;
  case 0xd:
  case 0x21:
  case 0x26:
  case 0x8d:
  case 0xa1:
  case 0xa6:
    goto code_r0x000103b308d0;
  case 0xe:
  case 0x22:
  case 0x8e:
  case 0xa2:
    goto code_r0x000103b307b8;
  case 0xf:
  case 0x23:
  case 0x8f:
  case 0xa3:
    goto code_r0x000103b30524;
  case 0x10:
    goto code_r0x000103b3068c;
  case 0x11:
    goto code_r0x000103b30704;
  case 0x12:
  case 0x92:
code_r0x000103b307f0:
    if (uVar4 == 0) {
      if (((param_11 & 0xff) == 10) && (param_8 == (undefined1 *)0x2)) goto code_r0x000103b308a8;
    }
    else {
code_r0x000103b30840:
      if ((param_4 == (undefined1 *)0x3) && (uVar4 == 0)) {
        if (((param_11 & 0xff) == 10) && (param_8 == (undefined1 *)0x3)) goto code_r0x000103b308a8;
      }
      else {
        if ((param_4 != (undefined1 *)0x4) || (uVar4 != 0)) {
          in_ZR = param_4 == (undefined1 *)0x5;
          goto code_r0x000103b3088c;
        }
        if (((param_11 & 0xff) == 10) && (param_8 == (undefined1 *)0x4)) goto code_r0x000103b308a8;
      }
    }
    break;
  case 0x1a:
  case 0x9a:
    goto code_r0x000103b30528;
  case 0x20:
    goto code_r0x000103b308c0;
  case 0x24:
    goto code_r0x000103b3080c;
  case 0x25:
    goto code_r0x000103b30798;
  case 0x30:
  case 0xb0:
    goto code_r0x000103b3069c;
  case 0x32:
  case 0xb2:
code_r0x000103b30768:
    func_0x000107c614cc(unaff_x19,auStack_78,auStack_90);
    func_0x000107c60640();
    in_ZR = false;
    puVar1 = puStack_88;
    unaff_x20 = puStack_80;
    unaff_x21 = param_5;
    unaff_x22 = param_4;
    if (param_4 == puStack_88) {
      in_ZR = param_5 == puStack_80;
    }
code_r0x000103b30798:
    param_4 = unaff_x22;
    param_6 = unaff_x21;
    param_8 = puVar1;
    param_10 = unaff_x20;
    if (!(bool)in_ZR) goto code_r0x000107c605b8;
    func_0x000107c6142c(unaff_x21);
    func_0x000107c6142c(unaff_x20);
    uVar3 = 1;
    goto code_r0x000103b308bc;
  case 0x33:
  case 0xb3:
    goto code_r0x000103b30530;
  case 0x40:
  case 0x46:
  case 0x60:
  case 0x66:
  case 0xc0:
  case 0xc6:
  case 0xd0:
    goto code_r0x000103b30668;
  case 0x41:
  case 0x61:
  case 0xc1:
    goto code_r0x000103b306c0;
  case 0x42:
  case 0x47:
  case 0x53:
  case 0x62:
  case 0x67:
  case 0x73:
  case 0xc2:
  case 199:
  case 0xd7:
    goto code_r0x000103b306d4;
  case 0x43:
  case 99:
  case 0xc3:
    goto code_r0x000103b306b8;
  case 0x44:
  case 0x4b:
  case 100:
  case 0x6b:
  case 0xc4:
  case 0xcb:
    goto code_r0x000103b306cc;
  case 0x45:
  case 0x4e:
  case 0x52:
  case 0x65:
  case 0x6e:
  case 0x72:
  case 0xc5:
  case 0xce:
  case 0xd1:
  case 0xd2:
  case 0xd6:
    goto code_r0x000103b306b0;
  case 0x48:
  case 0x4c:
  case 0x68:
  case 0x6c:
  case 200:
  case 0xcc:
    goto code_r0x000103b306a0;
  case 0x49:
  case 0x69:
  case 0xc9:
    goto code_r0x000103b306dc;
  case 0x4a:
  case 0x6a:
  case 0xca:
    goto code_r0x000103b3065c;
  case 0x4d:
  case 0x6d:
  case 0x91:
  case 0xa0:
  case 0xcd:
    goto code_r0x000103b30700;
  case 0x4f:
  case 0x6f:
  case 0xcf:
    goto code_r0x000103b306e4;
  case 0x50:
  case 0x70:
  case 0x81:
  case 0xd4:
code_r0x000103b30630:
    puVar1 = (undefined1 *)0x0;
    unaff_x19 = param_9;
    unaff_x22 = param_4;
    unaff_x24 = param_10;
  case 0xf8:
    func_0x0001007bbbf8(puVar1);
    func_0x000107c60118(unaff_x22,param_8);
    if (((ulong)unaff_x22 & 1) == 0) break;
code_r0x000103b3065c:
    param_4 = unaff_x21;
    func_0x000107c60118(param_4,unaff_x19);
code_r0x000103b30668:
    in_ZR = unaff_x25 == unaff_x24;
code_r0x000103b3066c:
    uVar3 = (uint)param_4 & (uint)in_ZR;
    goto code_r0x000103b308bc;
  case 0x51:
  case 0x71:
  case 0xd5:
    func_0x000107c6142c();
    unaff_x21 = param_4;
code_r0x000103b30700:
code_r0x000103b30704:
    func_0x000107c6142c();
    if (((ulong)unaff_x21 & 1) == 0) break;
    goto code_r0x000103b3081c;
  case 0x54:
  case 0x74:
  case 0xd8:
    goto code_r0x000103b306ec;
  case 0x55:
    goto code_r0x000103b306e8;
  case 0x82:
code_r0x000103b305b0:
    uVar3 = (uint)in_ZR;
    goto code_r0x000103b308bc;
  case 0x83:
code_r0x000103b305d8:
    param_4 = param_5;
    param_8 = param_9;
    if (!(bool)in_ZR) goto code_r0x000107c605b8;
    goto code_r0x000103b308b0;
  case 0x84:
    goto code_r0x000103b30568;
  case 0x85:
    goto code_r0x000103b3066c;
  case 0x86:
code_r0x000103b30728:
    in_ZR = (param_11 & 0xff) == 10;
  case 0x8c:
    if ((!(bool)in_ZR) || (param_8 != (undefined1 *)0x1)) break;
code_r0x000103b308a8:
    if (param_10 != (undefined1 *)0x0 || param_9 != (undefined1 *)0x0) break;
    goto code_r0x000103b308b0;
  case 0x88:
code_r0x000103b307e0:
    if (uVar4 == 0) goto code_r0x000103b308b0;
    break;
  case 0x90:
    return param_4;
  case 0xa4:
code_r0x000103b3088c:
    if (((((bool)in_ZR) && (uVar4 == 0)) || ((param_11 & 0xff) != 10)) ||
       (param_8 != (undefined1 *)0x6)) break;
    goto code_r0x000103b308a8;
  case 0xa5:
    unaff_x19 = param_4;
code_r0x000103b307b8:
    uVar3 = (uint)unaff_x19;
    func_0x000107c6142c();
    func_0x000107c6142c();
    goto code_r0x000103b308bc;
  case 0xd3:
    goto code_r0x000103b306c8;
  case 0xf0:
    goto code_r0x000103b30538;
  }
  uVar3 = 0;
code_r0x000103b308bc:
  param_4 = (undefined1 *)(ulong)(uVar3 & 1);
code_r0x000103b308c0:
code_r0x000103b308d0:
  return param_4;
}



/* Entry: 103b308dc; end: 103b309b3;  */

long FUN_103b308dc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b309b4; end: 103b309c7;  */

/* WARNING: Possible PIC construction at 0x000103b30a1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b30a20) */

void FUN_103b309b4(undefined8 *param_1)

{
  byte bVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[2];
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 < 6) {
    if (bVar1 != 1) {
      if (bVar1 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*param_1);
        return;
      }
      if (bVar1 != 5) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  if (bVar1 < 8) {
    if (bVar1 == 6) {
_swift_errorRelease:
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_errorRelease_11034f318)();
      return;
    }
    if (bVar1 != 7) {
      return;
    }
  }
  else {
    if (bVar1 == 8) goto _swift_errorRelease;
    uVar2 = param_1[1];
    if (bVar1 != 9) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 103b309c8; end: 103b30a73;  */

/* WARNING: Possible PIC construction at 0x000103b30a1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b30a20) */

void FUN_103b309c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  if (param_4 < 6) {
    if (param_4 != 1) {
      if (param_4 == 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
        return;
      }
      if (param_4 != 5) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  if (param_4 < 8) {
    if (param_4 == 6) {
_swift_errorRelease:
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_errorRelease_11034f318)();
      return;
    }
    if (param_4 != 7) {
      return;
    }
  }
  else {
    if (param_4 == 8) goto _swift_errorRelease;
    param_3 = param_2;
    if (param_4 != 9) {
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 103b30a74; end: 103b30b3b;  */

undefined8 * FUN_103b30a74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  func_0x000103b30908(uVar1,uVar2,uVar4,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  *(undefined1 *)(param_1 + 3) = uVar3;
  return param_1;
}



/* Entry: 103b30b3c; end: 103b30b87;  */

undefined8 * FUN_103b30b3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[2];
  uVar3 = *(undefined1 *)(param_2 + 3);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar7 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[2] = uVar6;
  uVar4 = *(undefined1 *)(param_1 + 3);
  *(undefined1 *)(param_1 + 3) = uVar3;
  FUN_103b309c8(uVar5,uVar1,uVar2,uVar4);
  return param_1;
}



/* Entry: 103b30b88; end: 103b30c63;  */

int FUN_103b30b88(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xf5 < param_2) && (*(char *)((long)param_1 + 0x19) != '\0')) {
    return *param_1 + 0xf6;
  }
  uVar1 = *(byte *)(param_1 + 6) ^ 0xff;
  if (*(byte *)(param_1 + 6) < 0xb) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103b30c64; end: 103b31347;  */

void FUN_103b30c64(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long lVar4;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar5;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long extraout_x12_05;
  undefined1 auStack_b0 [8];
  undefined1 *puStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_88;
  
  lVar2 = 0;
  uStack_88 = param_2;
  func_0x000107c5eea4();
  lStack_98 = *(long *)(lVar2 + -8);
  lStack_90 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_98 + 0x40));
  puStack_a8 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar4 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar3 = 0;
  lStack_a0 = lVar4;
  FUN_103b31818();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar2 = 0x112fece28;
  func_0x0001000285a8(0x112fece28,&UNK_10dc56608);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar5 = (((((((lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0)) - extraout_x12_00) -
              extraout_x12_01) - extraout_x12_02) - extraout_x12_03) - extraout_x12_04) -
          extraout_x12_05) - extraout_x8_01;
  iVar1 = *(int *)(lVar2 + 0x30);
  FUN_103b20a94(param_1,uVar5);
  FUN_103b20a94(uStack_88,uVar5 + (long)iVar1);
  func_0x000107c614c4(uVar5,lVar3);
                    /* WARNING: Could not recover jumptable at 0x000103b30e54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((ulong)(byte)(&UNK_10dc56560)[uVar5 & 0xffffffff] * 4 + 0x103b30e58))();
  return;
}



/* Entry: 103b31348; end: 103b314af;  */

long * FUN_103b31348(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  long *plVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar6 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar3 = param_2;
    func_0x000107c614c4(param_2,param_3);
    iVar2 = (int)plVar3;
    if (iVar2 == 6) {
      lVar6 = *param_2;
      lVar8 = param_2[3];
      lVar7 = param_2[2];
      param_1[1] = param_2[1];
      *param_1 = lVar6;
      param_1[3] = lVar8;
      param_1[2] = lVar7;
      lVar6 = param_2[5];
      param_1[4] = param_2[4];
      param_1[5] = lVar6;
      lVar6 = param_2[7];
      param_1[6] = param_2[6];
      param_1[7] = lVar6;
      func_0x000107c61434();
      func_0x000107c61434(lVar6);
      uVar4 = 6;
    }
    else if (iVar2 == 5) {
      *param_1 = *param_2;
      *(char *)(param_1 + 1) = (char)param_2[1];
      lVar6 = param_2[2];
      lVar8 = param_2[5];
      lVar7 = param_2[4];
      param_1[3] = param_2[3];
      param_1[2] = lVar6;
      param_1[5] = lVar8;
      param_1[4] = lVar7;
      lVar6 = param_2[7];
      param_1[6] = param_2[6];
      param_1[7] = lVar6;
      param_1[8] = param_2[8];
      *(char *)(param_1 + 9) = (char)param_2[9];
      func_0x000107c61434();
      uVar4 = 5;
    }
    else {
      if (iVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__memcpy_11034c658)(param_1,param_2,*(undefined8 *)(lVar6 + 0x40));
        return param_1;
      }
      lVar6 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar6;
      param_1[2] = param_2[2];
      lVar6 = 0x112e33580;
      func_0x0001000285a8(0x112e33580,&UNK_10da1c510);
      iVar2 = *(int *)(lVar6 + 0x50);
      lVar6 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar6 + -8) + 0x10))
                ((long)param_1 + (long)iVar2,(long)param_2 + (long)iVar2,lVar6);
      uVar4 = 0;
    }
    func_0x000107c6159c(param_1,param_3,uVar4);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar6 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    func_0x000107c6157c();
  }
  return param_1;
}



/* Entry: 103b314b0; end: 103b31537;  */

/* WARNING: Possible PIC construction at 0x000103b31518: Changing call to branch */

void FUN_103b314b0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = param_1;
  func_0x000107c614c4();
  iVar1 = (int)lVar2;
  if (iVar1 == 6) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
  }
  else {
    if (iVar1 != 5) {
      if (iVar1 == 0) {
        lVar2 = 0x112e33580;
        func_0x0001000285a8(0x112e33580,&UNK_10da1c510);
        iVar1 = *(int *)(lVar2 + 0x50);
        lVar2 = 0;
        func_0x000107c5eea4();
                    /* WARNING: Could not recover jumptable at 0x000103b31510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1 + iVar1,lVar2);
        return;
      }
      return;
    }
    uVar3 = *(undefined8 *)(param_1 + 0x38);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 103b31538; end: 103b31817;  */

undefined8 * FUN_103b31538(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  iVar1 = (int)puVar2;
  if (iVar1 == 6) {
    uVar4 = *param_2;
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    uVar4 = param_2[5];
    param_1[4] = param_2[4];
    param_1[5] = uVar4;
    uVar4 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar4;
    func_0x000107c61434();
    func_0x000107c61434(uVar4);
    uVar4 = 6;
  }
  else if (iVar1 == 5) {
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    uVar4 = param_2[2];
    uVar6 = param_2[5];
    uVar5 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar4;
    param_1[5] = uVar6;
    param_1[4] = uVar5;
    uVar4 = param_2[7];
    param_1[6] = param_2[6];
    param_1[7] = uVar4;
    param_1[8] = param_2[8];
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    func_0x000107c61434();
    uVar4 = 5;
  }
  else {
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__memcpy_11034c658)
                (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
      return param_1;
    }
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
    param_1[2] = param_2[2];
    lVar3 = 0x112e33580;
    func_0x0001000285a8(0x112e33580,&UNK_10da1c510);
    iVar1 = *(int *)(lVar3 + 0x50);
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))
              ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar3);
    uVar4 = 0;
  }
  func_0x000107c6159c(param_1,param_3,uVar4);
  return param_1;
}



/* Entry: 103b31818; end: 103b3184f;  */

void FUN_103b31818(undefined8 param_1)

{
  if (lRam0000000112fecdf0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e7adf68);
  return;
}



/* Entry: 103b31850; end: 103b319cf;  */

undefined8 * FUN_103b31850(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  puVar2 = param_2;
  func_0x000107c614c4(param_2,param_3);
  if ((int)puVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__memcpy_11034c658)
              (param_1,param_2,*(undefined8 *)(*(long *)(param_3 + -8) + 0x40));
    return param_1;
  }
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[2] = param_2[2];
  lVar3 = 0x112e33580;
  func_0x0001000285a8(0x112e33580,&UNK_10da1c510);
  iVar1 = *(int *)(lVar3 + 0x50);
  lVar3 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))
            ((long)param_1 + (long)iVar1,(long)param_2 + (long)iVar1,lVar3);
  func_0x000107c6159c(param_1,param_3,0);
  return param_1;
}



/* Entry: 103b319d0; end: 103b319ff;  */

void FUN_103b319d0(undefined8 param_1,undefined8 param_2,long param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000103b319d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 0x30))();
  return;
}



/* Entry: 103b31a00; end: 103b31abf;  */

void FUN_103b31a00(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  long lStack_90;
  undefined1 auStack_88 [32];
  undefined1 *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR___sBi64_WV_11034d670 + 0x40;
  lVar2 = 0x13f;
  puStack_a8 = puVar1;
  puStack_a0 = puVar1;
  puStack_98 = puVar1;
  func_0x000107c5eea4();
  if (param_2 < 0x40) {
    lStack_90 = *(long *)(lVar2 + -8) + 0x40;
    func_0x000107c61500(auStack_88,0,4,&puStack_a8);
    puStack_50 = &UNK_10dc565c0;
    puStack_40 = &UNK_10dc565d8;
    puStack_38 = &UNK_10dc565f0;
    puStack_68 = auStack_88;
    puStack_60 = puVar1;
    puStack_58 = puVar1;
    puStack_48 = puVar1;
    func_0x000107c61528(param_1,0x100,7,&puStack_68);
  }
  return;
}



/* Entry: 103b31ac0; end: 103b31b07;  */

undefined8 FUN_103b31ac0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112fece28;
  func_0x0001000285a8(0x112fece28,&UNK_10dc56608);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103b31b08; end: 103b31b93; -[MusicContentRestrictionServices contentRestrictionCheckerObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b31b08(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001003a5b88();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b31b94; end: 103b31bf3; -[MusicContentRestrictionServices init] */

void FUN_103b31b94(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMusicContentRestrictionServices.MusicContentRestrictionServices",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b31bc0);
  (*pcVar1)();
}



/* Entry: 103b31bf4; end: 103b31c0f; -[MusicContentRestrictionServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b31bf4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fece30));
  return;
}



/* Entry: 103b31c10; end: 103b31c3b; +[PartnershipAdCodeOperaKeys isSpotlight] */

void FUN_103b31c10(void)

{
  func_0x000107c5fadc(0xd000000000000018,0x800000010f19feb0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b31c3c; end: 103b31c47;  */

undefined * FUN_103b31c3c(void)

{
  return &UNK_1106d5380;
}



/* Entry: 103b31c48; end: 103b31c73; +[PartnershipAdCodeOperaKeys isSavedStory] */

void FUN_103b31c48(void)

{
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f19fed0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b31c74; end: 103b31c7f;  */

undefined * FUN_103b31c74(void)

{
  return &UNK_1106d5390;
}



/* Entry: 103b31c80; end: 103b31cab; +[PartnershipAdCodeOperaKeys isPublicStory] */

void FUN_103b31c80(void)

{
  func_0x000107c5fadc(0xd00000000000001b,0x800000010f19fef0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b31cac; end: 103b31cb7;  */

undefined * FUN_103b31cac(void)

{
  return &UNK_1106d53a0;
}



/* Entry: 103b31cb8; end: 103b31d03; +[PartnershipAdCodeOperaKeys savedStoryId] */

void FUN_103b31cb8(void)

{
  func_0x000107c5fadc(0xd000000000000014,0x800000010f19ff10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b31d04; end: 103b31d3f; -[PartnershipAdCodeOperaKeys init] */

void FUN_103b31d04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000103b31ce4();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b31d40; end: 103b31d6f;  */

void FUN_103b31d40(void)

{
  func_0x000103b31ce4();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b31d70; end: 103b31d73; -[PartnershipAdCodeOperaKeys .cxx_destruct] */

void FUN_103b31d70(void)

{
  return;
}



/* Entry: 103b31d74; end: 103b31dc7; +[SCBusinessSponsoredHelpers getSponsorTextWithDisplayName:useLargerNameFont:] */

void FUN_103b31d74(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  FUN_103b31ec8();
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103b31dc8; end: 103b31e57; +[SCBusinessSponsoredHelpers shouldRenderSponsorTagWithProfileId:displayName:sponsorStatus:] */

uint FUN_103b31dc8(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar1 = param_2;
  }
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  FUN_103b325d0(param_3,uVar1,param_4,param_2,param_5);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
  return (uint)param_3 & 1;
}



/* Entry: 103b31e58; end: 103b31e93; -[SCBusinessSponsoredHelpers init] */

void FUN_103b31e58(undefined8 param_1)

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



/* Entry: 103b31e94; end: 103b31ec7;  */

void FUN_103b31e94(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b31ec8; end: 103b325cf;  */

undefined8 ***** FUN_103b31ec8(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *****pppppuVar7;
  undefined8 *****pppppuVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined8 *****pppppuVar13;
  undefined8 uVar14;
  uint uVar15;
  long extraout_x8;
  undefined8 uVar16;
  undefined8 uVar17;
  long alStack_240 [2];
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_1f8;
  undefined *puStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  undefined8 ****ppppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 ****ppppuStack_1c8;
  undefined8 uStack_1c0;
  undefined1 auStack_1b8 [344];
  
  lVar2 = 0x112d483a8;
  puVar4 = &UNK_10d910f00;
  func_0x0001000285a8(0x112d483a8,&UNK_10d910f00);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = -extraout_x8;
  if (param_2 != 0) {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      lStack_1e8 = (long)&uStack_230 + lVar10;
      func_0x00010052bbec();
      func_0x000107c61180();
      lVar12 = lVar2;
      func_0x000107c43780();
      func_0x000107c61180();
      lStack_1f8 = lVar12;
      func_0x000107c615e8();
      func_0x00010052bbec();
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x000107c43780();
      func_0x000107c61180();
      func_0x000107c615e8(lVar2);
      lVar12 = 0x112d48380;
      func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
      lVar2 = lVar12;
      func_0x000107c61534();
      uStack_208 = 4;
      uStack_210 = 2;
      *(undefined8 *)(lVar2 + 0x18) = 4;
      *(undefined8 *)(lVar2 + 0x10) = 2;
      uVar16 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
      *(undefined8 *)(lVar2 + 0x20) = uVar16;
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168();
      puStack_220 = puVar4;
      func_0x000107c61174();
      func_0x000107c61174();
      uStack_218 = uVar16;
      func_0x000107c5af88();
      func_0x000107c61180();
      uVar16 = 0;
      FUN_103b32634(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
      *(undefined **)(lVar2 + 0x28) = puVar4;
      uVar17 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
      *(undefined8 *)(lVar2 + 0x40) = uVar16;
      *(undefined8 *)(lVar2 + 0x48) = uVar17;
      uVar5 = 0;
      uStack_228 = uVar16;
      FUN_103b32634(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
      *(undefined8 *)(lVar2 + 0x68) = uVar5;
      *(long *)(lVar2 + 0x50) = lVar3;
      func_0x000107c61174();
      func_0x000107c61174();
      uStack_230 = uVar17;
      func_0x000107c61174();
      lVar9 = lVar2;
      lStack_1e0 = lVar3;
      func_0x000100ecbca8(lVar2);
      func_0x000107c61588(lVar2);
      uVar16 = 0x112d48398;
      func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
      func_0x000107c61408((undefined8 *)(lVar2 + 0x20),2,uVar16);
      puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      func_0x000107c610f8();
      func_0x000107c5fadc(param_1,param_2);
      uVar6 = 0;
      func_0x000100eca28c();
      uVar17 = 0x112d483a0;
      func_0x000103b32674(0x112d483a0,&UNK_10d90f180);
      lVar3 = lVar9;
      uVar14 = uVar6;
      func_0x000107c5f9dc(lVar9,uVar6,PTR___sypN_11034f1a8 + 8,uVar17);
      func_0x000107c6142c(lVar9);
      func_0x000107c48af8();
      puStack_1f0 = puVar4;
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar3);
      FUN_103b326b4();
      func_0x000107c61534(lVar12,auStack_1b8);
      *(undefined8 *)(lVar12 + 0x18) = uStack_208;
      *(undefined8 *)(lVar12 + 0x10) = uStack_210;
      *(undefined8 *)(lVar12 + 0x20) = uStack_218;
      puVar4 = puStack_220;
      func_0x000107c5af88();
      func_0x000107c61180();
      *(undefined **)(lVar12 + 0x28) = puVar4;
      *(undefined8 *)(lVar12 + 0x40) = uStack_228;
      *(undefined8 *)(lVar12 + 0x48) = uStack_230;
      *(undefined8 *)(lVar12 + 0x68) = uVar5;
      *(long *)(lVar12 + 0x50) = lStack_1f8;
      lVar2 = lStack_1f8;
      func_0x000107c61174();
      lVar9 = lVar12;
      func_0x000100ecbca8(lVar12);
      func_0x000107c61588(lVar12);
      func_0x000107c61408((undefined8 *)(lVar12 + 0x20),2,uVar16);
      pppppuVar13 = (undefined8 *****)PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
      func_0x000107c610f8();
      func_0x000107c5fadc(lVar3,uVar14);
      func_0x000107c6142c(uVar14);
      lVar12 = lVar9;
      func_0x000107c5f9dc(lVar9,uVar6,PTR___sypN_11034f1a8 + 8,uVar17);
      func_0x000107c6142c(lVar9);
      func_0x000107c48af8();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar12);
      func_0x000107c61174();
      pppppuVar7 = pppppuVar13;
      func_0x000107c5c158();
      func_0x000107c61180();
      pppppuVar8 = pppppuVar7;
      func_0x000107c5faec();
      func_0x000107c61170(pppppuVar7);
      ppppuStack_1d8 = (undefined8 *****)0x40243125;
      uStack_1d0 = 0xe400000000000000;
      lVar9 = 0;
      ppppuStack_1c8 = pppppuVar8;
      uStack_1c0 = uVar6;
      func_0x000107c5ef14();
      lVar12 = lStack_1e8;
      lVar3 = lStack_1e8;
      (**(code **)(*(long *)(lVar9 + -8) + 0x38))(lStack_1e8,1,1,lVar9);
      func_0x000100e8b654();
      *(long *)((long)alStack_240 + lVar10) = lVar3;
      *(long *)((long)alStack_240 + lVar10 + 8) = lVar3;
      pppppuVar7 = &ppppuStack_1d8;
      uVar17 = 0;
      uVar15 = 0;
      func_0x000107c60218();
      uVar16 = uVar17;
      func_0x000100eca640(lVar12);
      func_0x000107c6142c(uVar6);
      if ((uVar15 & 0xff) == 1) {
        func_0x000107c61170(pppppuVar13);
        puVar4 = puStack_1f0;
      }
      else {
        pppppuVar8 = pppppuVar13;
        ppppuStack_1c8 = pppppuVar7;
        uStack_1c0 = uVar17;
        func_0x000107c5c158();
        func_0x000107c61180();
        pppppuVar7 = pppppuVar8;
        func_0x000107c5faec();
        func_0x000107c61170(pppppuVar8);
        uVar17 = 0x112d483b0;
        ppppuStack_1d8 = pppppuVar7;
        uStack_1d0 = uVar16;
        func_0x0001000285a8(0x112d483b0,&UNK_10d90f140);
        uVar16 = uVar17;
        func_0x000100eca688();
        func_0x000107c60148(&ppppuStack_1c8,&ppppuStack_1d8,uVar17,PTR___sSSN_11034da80,uVar16,lVar3
                           );
        puVar4 = puStack_1f0;
        func_0x000107c50154(pppppuVar13);
        func_0x000107c61170(pppppuVar13);
      }
      func_0x000107c61170(puVar4);
      lVar10 = lStack_1e0;
      goto LAB_103b3259c;
    }
  }
  func_0x000103b326d0();
  lVar10 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  func_0x000107c61534();
  *(undefined8 *)(lVar10 + 0x18) = 4;
  *(undefined8 *)(lVar10 + 0x10) = 2;
  uVar16 = *(undefined8 *)PTR__NSForegroundColorAttributeName_1103457f8;
  *(undefined8 *)(lVar10 + 0x20) = uVar16;
  puVar11 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c61174(uVar16);
  func_0x000107c5af88();
  func_0x000107c61180();
  uVar16 = 0;
  FUN_103b32634(0,0x112d48390,&PTR__OBJC_CLASS___UIColor_1126aea70);
  *(undefined **)(lVar10 + 0x28) = puVar11;
  uVar17 = *(undefined8 *)PTR__NSFontAttributeName_1103457f0;
  *(undefined8 *)(lVar10 + 0x40) = uVar16;
  *(undefined8 *)(lVar10 + 0x48) = uVar17;
  func_0x000107c61174();
  func_0x00010052bbec();
  func_0x000107c61180();
  uVar16 = uVar17;
  func_0x000107c43780();
  func_0x000107c61180();
  func_0x000107c615e8(uVar17);
  uVar17 = 0;
  FUN_103b32634(0,0x112d48388,&PTR__OBJC_CLASS___UIFont_1126aec38);
  *(undefined8 *)(lVar10 + 0x68) = uVar17;
  *(undefined8 *)(lVar10 + 0x50) = uVar16;
  lVar12 = lVar10;
  func_0x000100ecbca8(lVar10);
  func_0x000107c61588(lVar10);
  uVar16 = 0x112d48398;
  func_0x0001000285a8(0x112d48398,&UNK_10d90f130);
  func_0x000107c61408((undefined8 *)(lVar10 + 0x20),2,uVar16);
  pppppuVar13 = (undefined8 *****)PTR__OBJC_CLASS___NSAttributedString_1126af068;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSAttributedString_1126af068);
  func_0x000107c5fadc(lVar2,puVar4);
  func_0x000107c6142c(puVar4);
  uVar17 = 0;
  func_0x000100eca28c(0);
  uVar16 = 0x112d483a0;
  func_0x000103b32674(0x112d483a0,&UNK_10d90f180);
  lVar10 = lVar12;
  func_0x000107c5f9dc(lVar12,uVar17,PTR___sypN_11034f1a8 + 8,uVar16);
  func_0x000107c6142c(lVar12);
  func_0x000107c48af8(pppppuVar13);
LAB_103b3259c:
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar10);
  return pppppuVar13;
}



/* Entry: 103b325d0; end: 103b32613;  */

bool FUN_103b325d0(ulong param_1,ulong param_2,ulong param_3,ulong param_4,int param_5)

{
  ulong uVar1;
  
  if (param_2 != 0) {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if ((uVar1 != 0) && (param_4 != 0)) {
      uVar1 = param_3 & 0xffffffffffff;
      if ((param_4 & 0x2000000000000000) != 0) {
        uVar1 = param_4 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        return true;
      }
    }
  }
  return param_5 != 0;
}



/* Entry: 103b32614; end: 103b32633;  */

void FUN_103b32614(void)

{
  func_0x000107c61168(&PTR_PTR_11292adf0);
  return;
}



/* Entry: 103b32634; end: 103b326b3;  */

void FUN_103b32634(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 103b326b4; end: 103b326eb;  */

undefined1  [16] FUN_103b326b4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x5f726f736e6f7073;
  func_0x000107c5fadc(0x5f726f736e6f7073,0xea00000000007962);
  uVar3 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f19ff30);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3279c);
  (*pcVar1)();
}



/* Entry: 103b326ec; end: 103b3279b;  */

undefined1  [16] FUN_103b326ec(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f19ff30);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b3279c);
  (*pcVar1)();
}



/* Entry: 103b3279c; end: 103b327c7; +[SCContentModerationOperaKeys statusKey] */

void FUN_103b3279c(void)

{
  func_0x000107c5fadc(0xd000000000000019,0x800000010f19ff50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b327c8; end: 103b327f3; +[SCContentModerationOperaKeys sourceKey] */

void FUN_103b327c8(void)

{
  func_0x000107c5fadc(0xd000000000000019,0x800000010f19ff70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b327f4; end: 103b3281f; +[SCContentModerationOperaKeys typeKey] */

void FUN_103b327f4(void)

{
  func_0x000107c5fadc(0xd000000000000017,0x800000010f19ff90);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b32820; end: 103b3285b; -[SCContentModerationOperaKeys init] */

void FUN_103b32820(undefined8 param_1)

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



/* Entry: 103b3285c; end: 103b3288f;  */

void FUN_103b3285c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b32890; end: 103b32893; -[SCContentModerationOperaKeys .cxx_destruct] */

void FUN_103b32890(void)

{
  return;
}



/* Entry: 103b32894; end: 103b328b3;  */

void FUN_103b32894(void)

{
  func_0x000107c61168(&PTR_PTR_11292aea0);
  return;
}



/* Entry: 103b328b4; end: 103b3294f;  */

undefined * FUN_103b328b4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(0x4072c00000000000);
  puVar2 = PTR_PTR_1126d5600;
  func_0x000107c610f8(PTR_PTR_1126d5600);
  func_0x000107c47864();
  func_0x000107c61170(puVar1);
  return puVar2;
}



/* Entry: 103b32950; end: 103b3296f;  */

void FUN_103b32950(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}


