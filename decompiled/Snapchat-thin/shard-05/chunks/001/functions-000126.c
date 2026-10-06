/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b9191c; end: 103b9194f; -[SCSpotlightRepliesCount hash] */

undefined8 FUN_103b9191c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_103b91950();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 103b91950; end: 103b919f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b91950(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  func_0x000107c606ac(auStack_78);
  func_0x000107c6069c(*(undefined4 *)(unaff_x20 + _DAT_112ff1e30));
  if (((undefined8 *)(unaff_x20 + _DAT_112ff1e38))[1] == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112ff1e38);
    func_0x000107c5fadc(uVar1);
    uVar2 = uVar1;
    func_0x000107c44c3c();
    func_0x000107c61170(uVar1);
  }
  func_0x000107c60690(uVar2);
  func_0x000107c606a0(*(undefined8 *)(unaff_x20 + _DAT_112ff1e40));
  func_0x000107c606a4();
  return;
}



/* Entry: 103b919f8; end: 103b91b23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_103b919f8(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  uint uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_68;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  func_0x000100672b50(param_1,auStack_60);
  if (lStack_48 == 0) {
    func_0x00010006e7f4(auStack_60);
  }
  else {
    plVar3 = &lStack_68;
    func_0x000107c6147c(plVar3,auStack_60,PTR___sypN_11034f1a8 + 8,lVar4,6);
    if (((ulong)plVar3 & 1) != 0) {
      iVar1 = *(int *)(unaff_x20 + _DAT_112ff1e30);
      iVar2 = *(int *)(lStack_68 + _DAT_112ff1e30);
      lVar4 = ((long *)(unaff_x20 + _DAT_112ff1e38))[1];
      lVar5 = ((long *)(lStack_68 + _DAT_112ff1e38))[1];
      uVar7 = (uint)(lVar4 == 0 && lVar5 == 0);
      if (lVar4 != 0 && lVar5 != 0) {
        lVar6 = *(long *)(unaff_x20 + _DAT_112ff1e38);
        if (lVar6 == *(long *)(lStack_68 + _DAT_112ff1e38) && lVar4 == lVar5) {
          uVar7 = 1;
        }
        else {
          func_0x000107c605b8(lVar6);
          uVar7 = (uint)lVar6;
        }
      }
      uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112ff1e40);
      uVar9 = *(undefined8 *)(lStack_68 + _DAT_112ff1e40);
      func_0x000107c61170();
      if (iVar1 == iVar2) {
        return uVar7 & (int)uVar8 == (int)uVar9;
      }
    }
  }
  return 0;
}



/* Entry: 103b91b24; end: 103b91ba3; -[SCSpotlightRepliesCount isEqual:] */

uint FUN_103b91b24(undefined8 param_1,undefined8 param_2,long param_3)

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
  FUN_103b919f8(&uStack_40);
  func_0x000107c61170(param_1);
  func_0x00010006e7f4(&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103b91ba4; end: 103b91ba7; -[SCSpotlightRepliesCount copyWithZone:] */

void FUN_103b91ba4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b91ba8; end: 103b91c23; -[SCSpotlightRepliesCount init] */

void FUN_103b91ba8(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCSpotlightRepliesViewCountManagerServices/SpotlightRepliesCount.swift",0x46,
                      2,0x41,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b91bf0);
  (*pcVar1)();
}



/* Entry: 103b91c24; end: 103b91c4b; -[SCSpotlightRepliesCount .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b91c24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff1e38 + 8))
  ;
  return;
}



/* Entry: 103b91c4c; end: 103b91c8b;  */

void FUN_103b91c4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff1e48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5cc78;
  func_0x000107c61520(&UNK_10dc5cc78,&UNK_1106dcf98);
  puRam0000000112ff1e48 = puVar1;
  return;
}



/* Entry: 103b91c8c; end: 103b91c9b;  */

undefined1  [16] FUN_103b91c8c(void)

{
  return ZEXT816(0x1106dcf98);
}



/* Entry: 103b91c9c; end: 103b91cbb;  */

void FUN_103b91c9c(void)

{
  func_0x000107c61168(&PTR_PTR_112939070);
  return;
}



/* Entry: 103b91cbc; end: 103b91d07; -[SCContextSpotlightCreatorInfo creatorId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b91cbc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff1e78);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff1e78))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b91d08; end: 103b91d13; -[SCContextSpotlightCreatorInfo username] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b91d08(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff1e80))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff1e80);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b91d14; end: 103b91d1f; -[SCContextSpotlightCreatorInfo displayName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b91d14(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff1e88))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff1e88);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b91d20; end: 103b91d2b; -[SCContextSpotlightCreatorInfo businessProfileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b91d20(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff1e90))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff1e90);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b91d2c; end: 103b91d37; -[SCContextSpotlightCreatorInfo bitmojiAvatarId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b91d2c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff1e98))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff1e98);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b91d38; end: 103b91d43; -[SCContextSpotlightCreatorInfo bitmojiSelfieId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b91d38(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff1ea0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff1ea0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b91d44; end: 103b91d4f; -[SCContextSpotlightCreatorInfo profileLogoURL] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b91d44(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff1ea8))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff1ea8);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b91d50; end: 103b91da7;  */

void FUN_103b91d50(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103b91da8; end: 103b91ec3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b91da8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1e78);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1e80);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1e88);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1e90);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1e98);
  *puVar1 = param_9;
  puVar1[1] = param_10;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1ea0);
  *puVar1 = param_11;
  puVar1[1] = param_12;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1ea8);
  *puVar1 = param_13;
  puVar1[1] = param_14;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b91ec4; end: 103b920b7; -[SCContextSpotlightCreatorInfo initWithCreatorId:username:displayName:businessProfileId:bitmojiAvatarId:bitmojiSelfieId:profileLogoURL:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b91ec4(long param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  func_0x000107c5faec();
  lVar7 = param_2;
  if (param_4 == 0) {
    lStack_98 = 0;
    lStack_90 = 0;
  }
  else {
    func_0x000107c5faec();
    lStack_98 = lVar7;
    lStack_90 = param_4;
  }
  if (param_5 == 0) {
    lStack_a8 = 0;
    lStack_a0 = 0;
  }
  else {
    func_0x000107c5faec();
    lStack_a8 = lVar7;
    lStack_a0 = param_5;
  }
  if (param_6 == 0) {
    param_6 = 0;
    lVar9 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar9 = lVar7;
  }
  lVar4 = param_7;
  func_0x000107c61174();
  lVar5 = param_8;
  func_0x000107c61174();
  lVar6 = param_9;
  func_0x000107c61174();
  if (lVar4 == 0) {
    param_7 = 0;
    lVar4 = 0;
    lVar8 = lVar7;
  }
  else {
    func_0x000107c5faec();
    lVar8 = lVar7;
    func_0x000107c61170(lVar4);
    lVar4 = lVar7;
  }
  if (lVar5 == 0) {
    param_8 = 0;
    lVar7 = 0;
    lVar10 = lVar8;
  }
  else {
    func_0x000107c5faec();
    lVar10 = lVar8;
    func_0x000107c61170(lVar5);
    lVar7 = lVar8;
  }
  if (lVar6 == 0) {
    param_9 = 0;
    lVar10 = 0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(lVar6);
  }
  puVar1 = (undefined8 *)(param_1 + _DAT_112ff1e78);
  *puVar1 = param_3;
  puVar1[1] = param_2;
  plVar2 = (long *)(param_1 + _DAT_112ff1e80);
  *plVar2 = lStack_90;
  plVar2[1] = lStack_98;
  plVar2 = (long *)(param_1 + _DAT_112ff1e88);
  *plVar2 = lStack_a0;
  plVar2[1] = lStack_a8;
  plVar2 = (long *)(param_1 + _DAT_112ff1e90);
  *plVar2 = param_6;
  plVar2[1] = lVar9;
  plVar2 = (long *)(param_1 + _DAT_112ff1e98);
  *plVar2 = param_7;
  plVar2[1] = lVar4;
  plVar2 = (long *)(param_1 + _DAT_112ff1ea0);
  *plVar2 = param_8;
  plVar2[1] = lVar7;
  plVar2 = (long *)(param_1 + _DAT_112ff1ea8);
  *plVar2 = param_9;
  plVar2[1] = lVar10;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b920b8; end: 103b920e7;  */

void FUN_103b920b8(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_103b920e8(param_1);
  return;
}



/* Entry: 103b920e8; end: 103b9220b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b920e8(undefined8 *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c614f0();
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1e78);
  puVar1[1] = uStack_38;
  *puVar1 = uStack_40;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1e80);
  puVar1[1] = uStack_48;
  *puVar1 = uStack_50;
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1e88);
  puVar1[1] = uStack_58;
  *puVar1 = uStack_60;
  uVar2 = param_1[6];
  uStack_78 = param_1[9];
  uStack_80 = param_1[8];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1e90);
  puVar1[1] = param_1[7];
  *puVar1 = uVar2;
  uVar2 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1e98);
  puVar1[1] = param_1[9];
  *puVar1 = uVar2;
  uVar2 = param_1[10];
  uStack_98 = param_1[0xd];
  uStack_a0 = param_1[0xc];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1ea0);
  puVar1[1] = param_1[0xb];
  *puVar1 = uVar2;
  uVar2 = param_1[0xc];
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1ea8);
  puVar1[1] = param_1[0xd];
  *puVar1 = uVar2;
  func_0x000100402194(&uStack_40,auStack_b0);
  func_0x000101223174(&uStack_50,auStack_b0);
  func_0x000101223174(&uStack_60,auStack_b0);
  func_0x000101223174(&uStack_70,auStack_b0);
  func_0x000101223174(&uStack_80,auStack_b0);
  func_0x000101223174(&uStack_90,auStack_b0);
  func_0x000101223174(&uStack_a0,auStack_b0);
  FUN_103b9220c(param_1);
  func_0x000107c61154(&stack0xffffffffffffff40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b9220c; end: 103b9223f;  */

undefined8 FUN_103b9220c(undefined8 param_1)

{
  (*(code *)(undefined *)0x103b91274)();
  return param_1;
}



/* Entry: 103b92240; end: 103b92243; -[SCContextSpotlightCreatorInfo copyWithZone:] */

void FUN_103b92240(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b92244; end: 103b92277; -[SCContextSpotlightCreatorInfo description] */

void FUN_103b92244(void)

{
  undefined1 auStack_80 [112];
  
  FUN_103b92398(auStack_80);
  FUN_103b9220c(auStack_80);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b92278; end: 103b922f3; -[SCContextSpotlightCreatorInfo init] */

void FUN_103b92278(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCSpotlightRepliesViewCountManagerServices/SCContextSpotlightCreatorInfoWrapper.swift"
                      ,0x55,2,0x41,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b922c0);
  (*pcVar1)();
}



/* Entry: 103b922f4; end: 103b92397; -[SCContextSpotlightCreatorInfo .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b92314: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b9233c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b92364: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b92340) */
/* WARNING: Removing unreachable block (ram,0x000103b92318) */
/* WARNING: Removing unreachable block (ram,0x000103b92368) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b922f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff1e78 + 8))
  ;
  return;
}



/* Entry: 103b92398; end: 103b9248b;  */

/* WARNING: Possible PIC construction at 0x000103b92448: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b92458: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b92468: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b9245c) */
/* WARNING: Removing unreachable block (ram,0x000103b9244c) */
/* WARNING: Removing unreachable block (ram,0x000103b9246c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b92398(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar7 = ((undefined8 *)(param_2 + _DAT_112ff1e78))[1];
  puVar1 = (undefined8 *)(param_2 + _DAT_112ff1e80);
  puVar2 = (undefined8 *)(param_2 + _DAT_112ff1e88);
  puVar3 = (undefined8 *)(param_2 + _DAT_112ff1e90);
  puVar4 = (undefined8 *)(param_2 + _DAT_112ff1e98);
  puVar5 = (undefined8 *)(param_2 + _DAT_112ff1ea0);
  puVar6 = (undefined8 *)(param_2 + _DAT_112ff1ea8);
  *param_1 = *(undefined8 *)(param_2 + _DAT_112ff1e78);
  param_1[1] = uVar7;
  uVar8 = *puVar1;
  uVar10 = puVar2[1];
  uVar9 = *puVar2;
  param_1[3] = puVar1[1];
  param_1[2] = uVar8;
  param_1[5] = uVar10;
  param_1[4] = uVar9;
  uVar8 = *puVar3;
  uVar10 = puVar4[1];
  uVar9 = *puVar4;
  param_1[7] = puVar3[1];
  param_1[6] = uVar8;
  param_1[9] = uVar10;
  param_1[8] = uVar9;
  uVar8 = *puVar5;
  uVar10 = puVar6[1];
  uVar9 = *puVar6;
  param_1[0xb] = puVar5[1];
  param_1[10] = uVar8;
  param_1[0xd] = uVar10;
  param_1[0xc] = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar7);
  return;
}



/* Entry: 103b9248c; end: 103b924ab;  */

void FUN_103b9248c(void)

{
  func_0x000107c61168(&PTR_PTR_112939140);
  return;
}



/* Entry: 103b924ac; end: 103b924fb;  */

void FUN_103b924ac(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000022;
  func_0x000100bd65fc(0xd000000000000022,0x800000010f1a6120,0xffffffffffffffff);
  uRam000000011380cee0 = uVar1;
  return;
}



/* Entry: 103b924fc; end: 103b92517; +[SCProgressBarConfigKeys scrubberBarThickness] */

void FUN_103b924fc(void)

{
  if (lRam00000001135901a0 != -1) {
    func_0x000107c61568(0x1135901a0,FUN_103b924ac);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cee0);
  return;
}



/* Entry: 103b92518; end: 103b92567;  */

void FUN_103b92518(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000025;
  func_0x000100bd65fc(0xd000000000000025,0x800000010f1a60f0,0xffffffffffffffff);
  uRam000000011380cee8 = uVar1;
  return;
}



/* Entry: 103b92568; end: 103b92583; +[SCProgressBarConfigKeys scrubberTouchAreaAbove] */

void FUN_103b92568(void)

{
  if (lRam00000001135901a8 != -1) {
    func_0x000107c61568(0x1135901a8,FUN_103b92518);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cee8);
  return;
}



/* Entry: 103b92584; end: 103b925d3;  */

void FUN_103b92584(void)

{
  undefined8 uVar1;
  
  func_0x000100bd658c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000030;
  func_0x000100bd65fc(0xd000000000000030,0x800000010f1a60b0,0);
  uRam000000011380cef0 = uVar1;
  return;
}



/* Entry: 103b925d4; end: 103b925ef; +[SCProgressBarConfigKeys scrubberExtendedTouchBottomInset] */

void FUN_103b925d4(void)

{
  if (lRam00000001135901b0 != -1) {
    func_0x000107c61568(0x1135901b0,FUN_103b92584);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cef0);
  return;
}



/* Entry: 103b925f0; end: 103b9263f;  */

void FUN_103b925f0(void)

{
  undefined8 uVar1;
  
  func_0x000100442c3c(0);
  func_0x000107c610f8();
  uVar1 = 0xd000000000000032;
  func_0x000100442ccc(0xd000000000000032,0x800000010f1a6070,0);
  uRam000000011380cef8 = uVar1;
  return;
}



/* Entry: 103b92640; end: 103b9265b; +[SCProgressBarConfigKeys scrubberShouldIgnoreVerticalSwipes] */

void FUN_103b92640(void)

{
  if (lRam00000001135901b8 != -1) {
    func_0x000107c61568(0x1135901b8,FUN_103b925f0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam000000011380cef8);
  return;
}



/* Entry: 103b9265c; end: 103b9269f;  */

void FUN_103b9265c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  if (*param_3 == -1) {
    uVar1 = *param_4;
  }
  else {
    func_0x000107c61568(param_3,param_5);
    uVar1 = *param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uVar1);
  return;
}



/* Entry: 103b926a0; end: 103b926db; -[SCProgressBarConfigKeys init] */

void FUN_103b926a0(undefined8 param_1)

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



/* Entry: 103b926dc; end: 103b9270f;  */

void FUN_103b926dc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b92710; end: 103b92713; -[SCProgressBarConfigKeys .cxx_destruct] */

void FUN_103b92710(void)

{
  return;
}



/* Entry: 103b92714; end: 103b92733;  */

void FUN_103b92714(void)

{
  func_0x000107c61168(&PTR_PTR_112939238);
  return;
}



/* Entry: 103b92734; end: 103b9273f;  */

undefined * FUN_103b92734(void)

{
  return &UNK_1106dd070;
}



/* Entry: 103b92740; end: 103b9276b; +[SCMemoriesOperaBundleKeys bundleSingleDataSourceId] */

void FUN_103b92740(void)

{
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f1a6150);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b9276c; end: 103b92797; +[SCMemoriesOperaBundleKeys bundleSnapHighlightState] */

void FUN_103b9276c(void)

{
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f1a6170);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b92798; end: 103b927c3; +[SCMemoriesOperaBundleKeys bundleSnapHasLoadedFullResolutionImage] */

void FUN_103b92798(void)

{
  func_0x000107c5fadc(0xd00000000000002d,0x800000010f1a6190);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b927c4; end: 103b927ef; +[SCMemoriesOperaBundleKeys unlockableSnapInfo] */

void FUN_103b927c4(void)

{
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f1a61c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b927f0; end: 103b9281b; +[SCMemoriesOperaBundleKeys bundleSnapRequireNetworkDownload] */

void FUN_103b927f0(void)

{
  func_0x000107c5fadc(0xd000000000000025,0x800000010f1a61e0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b9281c; end: 103b92847; +[SCMemoriesOperaBundleKeys bundleIsPrivateSnap] */

void FUN_103b9281c(void)

{
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f1a6210);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b92848; end: 103b92873; +[SCMemoriesOperaBundleKeys bundleCameraRollFeaturedStory] */

void FUN_103b92848(void)

{
  func_0x000107c5fadc(0xd000000000000023,0x800000010f1a6230);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b92874; end: 103b9289f; +[SCMemoriesOperaBundleKeys bundleFeaturedStoriesOpenedSource] */

void FUN_103b92874(void)

{
  func_0x000107c5fadc(0xd000000000000025,0x800000010f1a6260);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b928a0; end: 103b928cb; +[SCMemoriesOperaBundleKeys bundleSnapIndexInStory] */

void FUN_103b928a0(void)

{
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f1a6290);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b928cc; end: 103b928f7; +[SCMemoriesOperaBundleKeys viewSnapPositionIndex] */

void FUN_103b928cc(void)

{
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f1a62b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b928f8; end: 103b92923; +[SCMemoriesOperaBundleKeys viewStoryPositionIndex] */

void FUN_103b928f8(void)

{
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f1a62d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b92924; end: 103b9294f; +[SCMemoriesOperaBundleKeys livePhotoProviderKey] */

void FUN_103b92924(void)

{
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f1a62f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b92950; end: 103b9297b; +[SCMemoriesOperaBundleKeys livePhotoKeyKey] */

void FUN_103b92950(void)

{
  func_0x000107c5fadc(0xd000000000000017,0x800000010f1a6310);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b9297c; end: 103b929a7; +[SCMemoriesOperaBundleKeys livePhotoPlaybackStyleKey] */

void FUN_103b9297c(void)

{
  func_0x000107c5fadc(0xd000000000000022,0x800000010f1a6330);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b929a8; end: 103b929d3; +[SCMemoriesOperaBundleKeys cameraRollAssetId] */

void FUN_103b929a8(void)

{
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f1a6360);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b929d4; end: 103b929ff; +[SCMemoriesOperaBundleKeys contentTypePluginKey] */

void FUN_103b929d4(void)

{
  func_0x000107c5fadc(0xd000000000000020,0x800000010f1a6380);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b92a00; end: 103b92a0b;  */

undefined * FUN_103b92a00(void)

{
  return &UNK_1106dd080;
}



/* Entry: 103b92a0c; end: 103b92a37; +[SCMemoriesOperaBundleKeys contentTypePluginCameraRollPhotoAsset] */

void FUN_103b92a0c(void)

{
  func_0x000107c5fadc(0xd000000000000034,0x800000010f1a63b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b92a38; end: 103b92a63; +[SCMemoriesOperaBundleKeys includeRemix] */

void FUN_103b92a38(void)

{
  func_0x000107c5fadc(0xd000000000000016,0x800000010f1a63f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b92a64; end: 103b92a8f; +[SCMemoriesOperaBundleKeys useSingleRoundedEditButton] */

void FUN_103b92a64(void)

{
  func_0x000107c5fadc(0xd000000000000027,0x800000010f1a6410);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b92a90; end: 103b92abb; +[SCMemoriesOperaBundleKeys isAddLensButtonEnabled] */

void FUN_103b92a90(void)

{
  func_0x000107c5fadc(0xd000000000000023,0x800000010f1a6440);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b92abc; end: 103b92ae7; +[SCMemoriesOperaBundleKeys hasUpdatedCTToolBar] */

void FUN_103b92abc(void)

{
  func_0x000107c5fadc(0xd00000000000002c,0x800000010f1a6470);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b92ae8; end: 103b92b13; +[SCMemoriesOperaBundleKeys snapFeedRankDebugInfo] */

void FUN_103b92ae8(void)

{
  func_0x000107c5fadc(0xd000000000000022,0x800000010f1a64a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b92b14; end: 103b92b3f; +[SCMemoriesOperaBundleKeys shouldShowLoadingSpinnerForSnapDocPlayback] */

void FUN_103b92b14(void)

{
  func_0x000107c5fadc(0xd00000000000003f,0x800000010f1a64d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b92b40; end: 103b92b97; -[SCMemoriesOperaBundleKeys init] */

void FUN_103b92b40(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000044,0x800000010f1a65a0,
                      "SCMemoriesOperaBundleKeys/SCMemoriesOperaBundleKeys.swift",0x39,2,0x3a,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b92b98);
  (*pcVar1)();
}



/* Entry: 103b92b98; end: 103b92b9b; -[SCMemoriesOperaBundleKeys .cxx_destruct] */

void FUN_103b92b98(void)

{
  return;
}



/* Entry: 103b92b9c; end: 103b92bcf; +[SCMemoriesOperaContentPluginType memoriesSnap] */

void FUN_103b92b9c(void)

{
  func_0x000107c5fadc(0x736572696f6d656d,0xed000070616e735f);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b92bd0; end: 103b92bff; +[SCMemoriesOperaContentPluginType cameraRoll] */

void FUN_103b92bd0(void)

{
  func_0x000107c5fadc(0x725f6172656d6163,0xeb000000006c6c6f);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b92c00; end: 103b92c2b; +[SCMemoriesOperaContentPluginType chatMedia] */

void FUN_103b92c00(void)

{
  func_0x000107c5fadc(0x64656d5f74616863,0xea00000000006169);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b92c2c; end: 103b92c53; +[SCMemoriesOperaContentPluginType snapDoc] */

void FUN_103b92c2c(void)

{
  func_0x000107c5fadc(0x636f645f70616e73,0xe800000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b92c54; end: 103b92cab; -[SCMemoriesOperaContentPluginType init] */

void FUN_103b92c54(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0xd00000000000004b,0x800000010f1a6550,
                      "SCMemoriesOperaBundleKeys/SCMemoriesOperaBundleKeys.swift",0x39,2,0x4b,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b92cac);
  (*pcVar1)();
}



/* Entry: 103b92cac; end: 103b92caf;  */

void FUN_103b92cac(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b92cb0; end: 103b92ce3;  */

void FUN_103b92cb0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b92ce4; end: 103b92ce7; -[SCMemoriesOperaContentPluginType .cxx_destruct] */

void FUN_103b92ce4(void)

{
  return;
}



/* Entry: 103b92ce8; end: 103b92d27;  */

void FUN_103b92ce8(void)

{
  func_0x000107c61168(&PTR_PTR_1129392e8);
  return;
}



/* Entry: 103b92d28; end: 103b92d2b;  */

void FUN_103b92d28(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b92d2c; end: 103b92f8f;  */

long FUN_103b92d2c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103b92f90; end: 103b93013;  */

void FUN_103b92f90(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b93014; end: 103b9301f;  */

undefined * FUN_103b93014(void)

{
  return &UNK_1106dd1a0;
}



/* Entry: 103b93020; end: 103b9304b; +[SCContextOperaActionBarKeys prominentButtonAppearanceKey] */

void FUN_103b93020(void)

{
  func_0x000107c5fadc(0xd00000000000002e,0x800000010f1a65f0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b9304c; end: 103b93077; +[SCContextOperaActionBarKeys opacityKey] */

void FUN_103b9304c(void)

{
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f1a6620);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b93078; end: 103b93083;  */

undefined * FUN_103b93078(void)

{
  return &UNK_1106dd1b0;
}



/* Entry: 103b93084; end: 103b930af; +[SCContextOperaActionBarKeys disablePillButtonAnimationKey] */

void FUN_103b93084(void)

{
  func_0x000107c5fadc(0xd000000000000030,0x800000010f1a6640);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b930b0; end: 103b930eb; -[SCContextOperaActionBarKeys init] */

void FUN_103b930b0(undefined8 param_1)

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



/* Entry: 103b930ec; end: 103b9311f;  */

void FUN_103b930ec(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 103b93120; end: 103b93127; -[SCContextOperaActionBarKeys .cxx_destruct] */

void FUN_103b93120(void)

{
  return;
}



/* Entry: 103b93128; end: 103b93167;  */

void FUN_103b93128(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff1f50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5ce40;
  func_0x000107c61520(&UNK_10dc5ce40,&UNK_1106dd1d0);
  puRam0000000112ff1f50 = puVar1;
  return;
}



/* Entry: 103b93168; end: 103b9316b;  */

void FUN_103b93168(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff1f58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5cee0;
  func_0x000107c61520(&UNK_10dc5cee0,&UNK_1106dd1f0);
  puRam0000000112ff1f58 = puVar1;
  return;
}



/* Entry: 103b9316c; end: 103b931ab;  */

void FUN_103b9316c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff1f58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5cee0;
  func_0x000107c61520(&UNK_10dc5cee0,&UNK_1106dd1f0);
  puRam0000000112ff1f58 = puVar1;
  return;
}



/* Entry: 103b931ac; end: 103b931af;  */

void FUN_103b931ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff1f60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5cf80;
  func_0x000107c61520(&UNK_10dc5cf80,&UNK_1106dd210);
  puRam0000000112ff1f60 = puVar1;
  return;
}



/* Entry: 103b931b0; end: 103b931ef;  */

void FUN_103b931b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ff1f60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc5cf80;
  func_0x000107c61520(&UNK_10dc5cf80,&UNK_1106dd210);
  puRam0000000112ff1f60 = puVar1;
  return;
}



/* Entry: 103b931f0; end: 103b9321f;  */

undefined1  [16] FUN_103b931f0(void)

{
  return ZEXT816(0x1106dd1d0);
}



/* Entry: 103b93220; end: 103b9323f;  */

void FUN_103b93220(void)

{
  func_0x000107c61168(&PTR_PTR_112939448);
  return;
}



/* Entry: 103b93240; end: 103b9329b;  */

bool FUN_103b93240(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103b9329c; end: 103b93347;  */

void FUN_103b9329c(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103b93348; end: 103b9337b;  */

void FUN_103b93348(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 < 3) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = 2 < uVar2;
  return;
}



/* Entry: 103b9337c; end: 103b933a7; +[SCContextOperaAttachmentButtonKeys styleKey] */

void FUN_103b9337c(void)

{
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f1a6680);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


