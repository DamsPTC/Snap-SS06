/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103b8b320; end: 103b8b32b; -[SCSnapDeletionInfo storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8b320(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff1980))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff1980);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b8b32c; end: 103b8b383;  */

void FUN_103b8b32c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103b8b384; end: 103b8b393; -[SCSnapDeletionInfo snapProSnapDeletionInfo] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8b384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff1988));
  return;
}



/* Entry: 103b8b394; end: 103b8b3a3; -[SCSnapDeletionInfo skipNativeModal] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b8b394(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff1990);
}



/* Entry: 103b8b3a4; end: 103b8b3b3; -[SCSnapDeletionInfo onlyShowFailureToast] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b8b3a4(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff1998);
}



/* Entry: 103b8b3b4; end: 103b8b4ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8b3b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1968);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1970);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1978);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1980);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_112ff1988) = param_9;
  *(undefined1 *)(unaff_x20 + _DAT_112ff1990) = (undefined1)param_10;
  *(undefined1 *)(unaff_x20 + _DAT_112ff1998) = param_10._1_1_;
  func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b8b4ac; end: 103b8b62b; -[SCSnapDeletionInfo initWithClientId:serverId:posterGuid:storyId:snapProSnapDeletionInfo:skipNativeModal:onlyShowFailureToast:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8b4ac(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6,
                  undefined8 param_7,undefined1 param_8,undefined1 param_9)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lStack_90;
  long lStack_88;
  long lStack_70;
  long lStack_68;
  
  lVar3 = param_1;
  func_0x000107c614f0();
  if (param_3 == 0) {
    lStack_90 = 0;
    lStack_88 = 0;
  }
  else {
    func_0x000107c5faec();
    lStack_90 = param_2;
    lStack_88 = param_3;
  }
  if (param_4 == 0) {
    param_4 = 0;
    lVar2 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar2 = param_2;
  }
  if (param_5 == 0) {
    param_5 = 0;
    lVar5 = 0;
  }
  else {
    func_0x000107c5faec();
    lVar5 = param_2;
  }
  lVar4 = param_6;
  func_0x000107c61174();
  func_0x000107c61174();
  if (lVar4 == 0) {
    param_6 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
    func_0x000107c61170(lVar4);
  }
  plVar1 = (long *)(param_1 + _DAT_112ff1968);
  *plVar1 = lStack_88;
  plVar1[1] = lStack_90;
  plVar1 = (long *)(param_1 + _DAT_112ff1970);
  *plVar1 = param_4;
  plVar1[1] = lVar2;
  plVar1 = (long *)(param_1 + _DAT_112ff1978);
  *plVar1 = param_5;
  plVar1[1] = lVar5;
  plVar1 = (long *)(param_1 + _DAT_112ff1980);
  *plVar1 = param_6;
  plVar1[1] = param_2;
  *(undefined8 *)(param_1 + _DAT_112ff1988) = param_7;
  *(undefined1 *)(param_1 + _DAT_112ff1990) = param_8;
  *(undefined1 *)(param_1 + _DAT_112ff1998) = param_9;
  lStack_70 = param_1;
  lStack_68 = lVar3;
  func_0x000107c61154(&lStack_70,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b8b62c; end: 103b8b65b;  */

void FUN_103b8b62c(undefined8 param_1)

{
  func_0x000107c610f8();
  FUN_103b8b65c(param_1);
  return;
}



/* Entry: 103b8b65c; end: 103b8b827;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8b65c(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  long lStack_d0;
  long lStack_c8;
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  plVar4 = &lStack_d0;
  func_0x000107c614f0();
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112ff1968);
  puVar3[1] = uStack_68;
  *puVar3 = uStack_70;
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112ff1970);
  puVar3[1] = uStack_78;
  *puVar3 = uStack_80;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112ff1978);
  puVar3[1] = uStack_88;
  *puVar3 = uStack_90;
  uVar8 = param_1[6];
  puVar3 = (undefined8 *)(unaff_x20 + _DAT_112ff1980);
  puVar3[1] = param_1[7];
  *puVar3 = uVar8;
  lVar7 = param_1[10];
  if (lVar7 == 1) {
    func_0x000101223174(&uStack_70,auStack_b0);
    func_0x000101223174(&uStack_80,auStack_b0);
    func_0x000101223174(&uStack_90,auStack_b0);
    func_0x000101223174(&uStack_a0,auStack_b0);
    plVar4 = (long *)0x0;
  }
  else {
    uVar8 = param_1[8];
    uVar1 = param_1[9];
    bVar2 = *(byte *)(param_1 + 0xb);
    lVar5 = 0;
    FUN_103b8bd4c();
    lVar6 = lVar5;
    func_0x000107c610f8();
    *(byte *)(lVar6 + _DAT_112ff19c8) = (byte)uVar8 & 1;
    puVar3 = (undefined8 *)(lVar6 + _DAT_112ff19d0);
    *puVar3 = uVar1;
    puVar3[1] = lVar7;
    *(byte *)(lVar6 + _DAT_112ff19d8) = bVar2 & 1;
    func_0x000101223174(&uStack_70,auStack_b0);
    func_0x000101223174(&uStack_80,auStack_b0);
    func_0x000101223174(&uStack_90,auStack_b0);
    func_0x000101223174(&uStack_a0,auStack_b0);
    FUN_103b8a684(uVar8,uVar1,lVar7,bVar2);
    lStack_d0 = lVar6;
    lStack_c8 = lVar5;
    func_0x000107c61154(&lStack_d0,PTR_s_init_1125d9248);
  }
  *(long **)(unaff_x20 + _DAT_112ff1988) = plVar4;
  *(undefined1 *)(unaff_x20 + _DAT_112ff1990) = *(undefined1 *)((long)param_1 + 0x59);
  FUN_103b8b828(param_1);
  *(undefined1 *)(unaff_x20 + _DAT_112ff1998) = *(undefined1 *)((long)param_1 + 0x5a);
  func_0x000107c61154(&stack0xffffffffffffff40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b8b828; end: 103b8b85b;  */

undefined8 FUN_103b8b828(undefined8 param_1)

{
  (*(code *)(undefined *)0x103b8a6c4)();
  return param_1;
}



/* Entry: 103b8b85c; end: 103b8b85f; -[SCSnapDeletionInfo copyWithZone:] */

void FUN_103b8b85c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b8b860; end: 103b8b893; -[SCSnapDeletionInfo description] */

void FUN_103b8b860(void)

{
  undefined1 auStack_70 [96];
  
  FUN_103b8b988(auStack_70);
  FUN_103b8b828(auStack_70);
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8b894; end: 103b8b90f; -[SCSnapDeletionInfo init] */

void FUN_103b8b894(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCDeleteStorySnapScope/SCSnapDeletionInfoWrapper.swift",0x36,2,0x43,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b8b8dc);
  (*pcVar1)();
}



/* Entry: 103b8b910; end: 103b8b987; -[SCSnapDeletionInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8b910(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff1968 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff1970 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff1978 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff1980 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff1988));
  return;
}



/* Entry: 103b8b988; end: 103b8badb;  */

/* WARNING: Possible PIC construction at 0x000103b8ba4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103b8baac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b8ba50) */
/* WARNING: Removing unreachable block (ram,0x000103b8bab0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8b988(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  puVar1 = (undefined8 *)(param_2 + _DAT_112ff1968);
  puVar2 = (undefined8 *)(param_2 + _DAT_112ff1970);
  uVar7 = *puVar1;
  uVar6 = puVar1[1];
  uVar9 = puVar2[1];
  uVar8 = *puVar2;
  uVar5 = puVar2[1];
  uVar11 = ((undefined8 *)(param_2 + _DAT_112ff1978))[1];
  uVar10 = *(undefined8 *)(param_2 + _DAT_112ff1978);
  uVar13 = ((undefined8 *)(param_2 + _DAT_112ff1980))[1];
  uVar12 = *(undefined8 *)(param_2 + _DAT_112ff1980);
  if (*(long *)(param_2 + _DAT_112ff1988) == 0) {
    uVar3 = *(undefined1 *)(param_2 + _DAT_112ff1990);
    uVar4 = *(undefined1 *)(param_2 + _DAT_112ff1998);
    param_1[1] = puVar1[1];
    *param_1 = uVar7;
    param_1[3] = uVar9;
    param_1[2] = uVar8;
    param_1[5] = uVar11;
    param_1[4] = uVar10;
    param_1[7] = uVar13;
    param_1[6] = uVar12;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 1;
    *(undefined1 *)(param_1 + 0xb) = 0;
    *(undefined1 *)((long)param_1 + 0x59) = uVar3;
    *(undefined1 *)((long)param_1 + 0x5a) = uVar4;
    func_0x000107c61434(uVar6);
  }
  else {
    uVar5 = *(undefined8 *)(*(long *)(param_2 + _DAT_112ff1988) + _DAT_112ff19d0 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 103b8badc; end: 103b8bafb;  */

void FUN_103b8badc(void)

{
  func_0x000107c61168(&PTR_PTR_1129381c0);
  return;
}



/* Entry: 103b8bafc; end: 103b8bb0b; -[SCSnapProSnapDeletionInfo archiveOnly] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b8bafc(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff19c8);
}



/* Entry: 103b8bb0c; end: 103b8bb67; -[SCSnapProSnapDeletionInfo businessProfileId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8bb0c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff19d0))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff19d0);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b8bb68; end: 103b8bb7b; -[SCSnapProSnapDeletionInfo isSpotlightStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b8bb68(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff19d8);
}



/* Entry: 103b8bb7c; end: 103b8bbff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8bb7c(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112ff19c8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff19d0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112ff19d8) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b8bc00; end: 103b8bc9b; -[SCSnapProSnapDeletionInfo initWithArchiveOnly:businessProfileId:isSpotlightStory:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8bc00(long param_1,long param_2,undefined1 param_3,long param_4,undefined1 param_5)

{
  long *plVar1;
  long lVar2;
  long lStack_50;
  long lStack_48;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  *(undefined1 *)(param_1 + _DAT_112ff19c8) = param_3;
  plVar1 = (long *)(param_1 + _DAT_112ff19d0);
  *plVar1 = param_4;
  plVar1[1] = param_2;
  *(undefined1 *)(param_1 + _DAT_112ff19d8) = param_5;
  lStack_50 = param_1;
  lStack_48 = lVar2;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b8bc9c; end: 103b8bc9f; -[SCSnapProSnapDeletionInfo copyWithZone:] */

void FUN_103b8bc9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 103b8bca0; end: 103b8bcbb; -[SCSnapProSnapDeletionInfo description] */

void FUN_103b8bca0(void)

{
  func_0x000107c5fadc(0,0xe000000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8bcbc; end: 103b8bd37; -[SCSnapProSnapDeletionInfo init] */

void FUN_103b8bcbc(void)

{
  code *pcVar1;
  
  func_0x000107c60450("Fatal error",0xb,2,0,0xe000000000000000,
                      "SCDeleteStorySnapScope/SCSnapProSnapDeletionInfoWrapper.swift",0x3d,2,0x2d,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b8bd04);
  (*pcVar1)();
}



/* Entry: 103b8bd38; end: 103b8bd4b; -[SCSnapProSnapDeletionInfo .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8bd38(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff19d0 + 8))
  ;
  return;
}



/* Entry: 103b8bd4c; end: 103b8bd6b;  */

void FUN_103b8bd4c(void)

{
  func_0x000107c61168(&PTR_PTR_1129382b8);
  return;
}



/* Entry: 103b8bd6c; end: 103b8bd6f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8bd6c(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined1 *)(unaff_x20 + _DAT_112ff19c8) = param_1;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff19d0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined1 *)(unaff_x20 + _DAT_112ff19d8) = param_4;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b8bd70; end: 103b8bdbb; -[_TtC22SCMyStorySettingsScope22SCMyStorySettingsScope storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8bd70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff1a08);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff1a08))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b8bdbc; end: 103b8bdc7; -[_TtC22SCMyStorySettingsScope22SCMyStorySettingsScope presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8bdbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff1a10;
  func_0x000107c61428(param_1 + _DAT_112ff1a10,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8bdc8; end: 103b8bdd3; -[_TtC22SCMyStorySettingsScope22SCMyStorySettingsScope setPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8bdc8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff1a10;
  func_0x000107c61428(param_1 + _DAT_112ff1a10,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b8bdd4; end: 103b8bddf; -[_TtC22SCMyStorySettingsScope22SCMyStorySettingsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8bdd4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff1a18;
  func_0x000107c61428(param_1 + _DAT_112ff1a18,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8bde0; end: 103b8be23;  */

void FUN_103b8bde0(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103b8be24; end: 103b8be2f; -[_TtC22SCMyStorySettingsScope22SCMyStorySettingsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8be24(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff1a18;
  func_0x000107c61428(param_1 + _DAT_112ff1a18,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b8be30; end: 103b8be83;  */

void FUN_103b8be30(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b8be84; end: 103b8bee3; -[_TtC22SCMyStorySettingsScope22SCMyStorySettingsScope init] */

void FUN_103b8be84(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMyStorySettingsScope.SCMyStorySettingsScope",0x2d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b8beb0);
  (*pcVar1)();
}



/* Entry: 103b8bee4; end: 103b8bf53; -[_TtC22SCMyStorySettingsScope22SCMyStorySettingsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103b8bee4(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff1a08 + 8));
  func_0x000107c61610(param_1 + _DAT_112ff1a10);
  param_1 = param_1 + _DAT_112ff1a18;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b8bf54; end: 103b8bfbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8bf54(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010035bfb0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ff1a50) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103b8bfc0; end: 103b8bfc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8bfc0(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010035bfb0();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff1a50) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 103b8bfc8; end: 103b8c013;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8bfc8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff1a50) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b8c014; end: 103b8c15b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103b8c014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long *aplStack_b8 [2];
  undefined8 uStack_a8;
  long lStack_a0;
  long lStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar5 = 0;
  func_0x0001003514e0();
  lVar6 = lVar5;
  func_0x000107c610f8();
  lVar3 = _DAT_112ff1a10;
  func_0x000107c61614(lVar6 + _DAT_112ff1a10,0);
  lVar4 = _DAT_112ff1a18;
  func_0x000107c61614(lVar6 + _DAT_112ff1a18,0);
  puVar1 = (undefined8 *)(lVar6 + _DAT_112ff1a08);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x000107c61428(lVar6 + lVar3,auStack_78,1,0);
  func_0x000107c61604(lVar6 + lVar3,param_3);
  func_0x000107c61428(lVar6 + lVar4,auStack_90,1,0);
  func_0x000107c61604(lVar6 + lVar4,param_4);
  puVar2 = PTR_s_init_1125d9248;
  lStack_a0 = lVar6;
  lStack_98 = lVar5;
  func_0x000107c61434(param_2);
  plVar7 = &lStack_a0;
  func_0x000107c61154(plVar7,puVar2);
  aplStack_b8[0] = plVar7;
  func_0x00010008a7c8(&uStack_a8,aplStack_b8);
  func_0x000100083b20(aplStack_b8);
  func_0x000107c61574(uStack_a8);
  func_0x000107c615e8(aplStack_b8[0]);
  return plVar7;
}



/* Entry: 103b8c15c; end: 103b8c1ff; -[_TtC22SCMyStorySettingsScope30SCMyStorySettingsScopeServices buildWithStoryId:presentingViewController:delegate:] */

void FUN_103b8c15c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c61174(param_1);
  FUN_103b8c014(param_3,param_2,param_4,param_5);
  func_0x000107c61170(uVar1);
  func_0x000107c615e8(param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103b8c200; end: 103b8c25f; -[_TtC22SCMyStorySettingsScope30SCMyStorySettingsScopeServices init] */

void FUN_103b8c200(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMyStorySettingsScope.SCMyStorySettingsScopeServices",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b8c22c);
  (*pcVar1)();
}



/* Entry: 103b8c260; end: 103b8c28f; -[_TtC22SCMyStorySettingsScope30SCMyStorySettingsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8c260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff1a50));
  return;
}



/* Entry: 103b8c290; end: 103b8c2eb; -[_TtC16SCSaveStoryScope16SCSaveStoryScope clientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8c290(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112ff1a98))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112ff1a98);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b8c2ec; end: 103b8c337; -[_TtC16SCSaveStoryScope16SCSaveStoryScope storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8c2ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff1aa0);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff1aa0))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b8c338; end: 103b8c357; -[_TtC16SCSaveStoryScope16SCSaveStoryScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8c338(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112ff1aa8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8c358; end: 103b8c3e3; -[_TtC16SCSaveStoryScope16SCSaveStoryScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8c358(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff1ab0;
  func_0x000107c61428(param_1 + _DAT_112ff1ab0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8c3e4; end: 103b8c587; -[_TtC16SCSaveStoryScope16SCSaveStoryScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8c3e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff1ab0;
  func_0x000107c61428(param_1 + _DAT_112ff1ab0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b8c588; end: 103b8c647; -[_TtC16SCSaveStoryScope16SCSaveStoryScope snapPlaybackInfos] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8c588(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff1ab8;
  func_0x000107c61428(param_1 + _DAT_112ff1ab8,auStack_38,0,0);
  lVar1 = *(long *)(param_1 + lVar1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x00010105686c(0);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 103b8c648; end: 103b8c70f; -[_TtC16SCSaveStoryScope16SCSaveStoryScope setSnapPlaybackInfos:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8c648(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (param_3 != 0) {
    uVar2 = 0;
    func_0x00010105686c(0);
    func_0x000107c5fc54(param_3,uVar2);
  }
  lVar1 = _DAT_112ff1ab8;
  func_0x000107c61428(param_1 + _DAT_112ff1ab8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(long *)(param_1 + lVar1) = param_3;
  func_0x000107c6142c(uVar2);
  return;
}



/* Entry: 103b8c710; end: 103b8c74f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_103b8c710(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112ff1ab8;
  func_0x000107c61428(unaff_x20 + _DAT_112ff1ab8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_103b8c750;
  return auVar2;
}



/* Entry: 103b8c750; end: 103b8c753;  */

void FUN_103b8c750(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 103b8c754; end: 103b8c763; -[_TtC16SCSaveStoryScope16SCSaveStoryScope isSnapProStory] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_103b8c754(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112ff1ac0);
}



/* Entry: 103b8c764; end: 103b8c8ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_103b8c764(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_a0 [8];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112ff1ab0;
  func_0x000107c61614(unaff_x20 + _DAT_112ff1ab0,0);
  lVar3 = _DAT_112ff1ab8;
  *(undefined8 *)(unaff_x20 + _DAT_112ff1ab8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1a98);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1aa0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ff1aa8) = param_7;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_8);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_90,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar3);
  *(undefined8 *)(unaff_x20 + lVar3) = param_6;
  func_0x000107c615f0(param_7);
  func_0x000107c6142c(uVar5);
  *(undefined1 *)(unaff_x20 + _DAT_112ff1ac0) = param_5;
  puVar4 = auStack_a0;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_8);
  return puVar4;
}



/* Entry: 103b8c8ac; end: 103b8c8ef;  */

undefined8 FUN_103b8c8ac(undefined8 param_1)

{
  undefined8 in_x6;
  undefined8 in_x7;
  
  FUN_103b8caa4();
  func_0x000107c615e8(in_x6);
  func_0x000107c615e8(in_x7);
  return param_1;
}



/* Entry: 103b8c8f0; end: 103b8c9d7; -[_TtC16SCSaveStoryScope16SCSaveStoryScope initWithClientId:storyId:isSnapProStory:snapPlaybackInfos:uiContainer:delegate:] */

long FUN_103b8c8f0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_3 == 0) {
    param_3 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
    uVar2 = param_2;
  }
  func_0x000107c5faec(param_4);
  if (param_6 != 0) {
    uVar1 = 0;
    func_0x00010105686c(0);
    func_0x000107c5fc54(param_6,uVar1);
  }
  func_0x000107c615f0(param_7);
  func_0x000107c615f0(param_8);
  FUN_103b8caa4(param_3,uVar2,param_4,param_2,param_5,param_6,param_7,param_8);
  func_0x000107c615e8(param_7);
  func_0x000107c615e8(param_8);
  return param_3;
}



/* Entry: 103b8c9d8; end: 103b8ca33; -[_TtC16SCSaveStoryScope16SCSaveStoryScope init] */

void FUN_103b8c9d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSaveStoryScope.SCSaveStoryScope",0x21,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b8ca04);
  (*pcVar1)();
}



/* Entry: 103b8ca34; end: 103b8caa3; -[_TtC16SCSaveStoryScope16SCSaveStoryScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000103b8ca54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103b8ca58) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8ca34(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112ff1a98 + 8))
  ;
  return;
}



/* Entry: 103b8caa4; end: 103b8cbc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8caa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar2 = _DAT_112ff1ab0;
  func_0x000107c61614(unaff_x20 + _DAT_112ff1ab0,0);
  lVar3 = _DAT_112ff1ab8;
  *(undefined8 *)(unaff_x20 + _DAT_112ff1ab8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1a98);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112ff1aa0);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112ff1aa8) = param_7;
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_8);
  func_0x000107c61428(unaff_x20 + lVar3,auStack_90,1,0);
  *(undefined8 *)(unaff_x20 + lVar3) = param_6;
  func_0x000107c615f0(param_7);
  func_0x000107c6142c();
  *(undefined1 *)(unaff_x20 + _DAT_112ff1ac0) = param_5;
  FUN_103b8cbc4();
  func_0x000107c61154(&stack0xffffffffffffff60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b8cbc4; end: 103b8cbe3;  */

void FUN_103b8cbc4(void)

{
  func_0x000107c61168(&PTR_PTR_112938520);
  return;
}



/* Entry: 103b8cbe4; end: 103b8cc07;  */

undefined8 FUN_103b8cbe4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b8cc08; end: 103b8cc13; -[_TtC27SCStoryPrivacySettingsScope27SCStoryPrivacySettingsScope navigationController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8cc08(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff1af0;
  func_0x000107c61428(param_1 + _DAT_112ff1af0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8cc14; end: 103b8cc1f; -[_TtC27SCStoryPrivacySettingsScope27SCStoryPrivacySettingsScope setNavigationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8cc14(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff1af0;
  func_0x000107c61428(param_1 + _DAT_112ff1af0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b8cc20; end: 103b8cc2b; -[_TtC27SCStoryPrivacySettingsScope27SCStoryPrivacySettingsScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8cc20(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff1af8;
  func_0x000107c61428(param_1 + _DAT_112ff1af8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8cc2c; end: 103b8cc6f;  */

void FUN_103b8cc2c(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103b8cc70; end: 103b8cc7b; -[_TtC27SCStoryPrivacySettingsScope27SCStoryPrivacySettingsScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8cc70(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff1af8;
  func_0x000107c61428(param_1 + _DAT_112ff1af8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b8cc7c; end: 103b8cccf;  */

void FUN_103b8cc7c(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b8ccd0; end: 103b8ccd7; -[_TtC27SCStoryPrivacySettingsScope27SCStoryPrivacySettingsScope highlightCustom] */

undefined8 FUN_103b8ccd0(void)

{
  return 0;
}



/* Entry: 103b8ccd8; end: 103b8cd37; -[_TtC27SCStoryPrivacySettingsScope27SCStoryPrivacySettingsScope init] */

void FUN_103b8ccd8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCStoryPrivacySettingsScope.SCStoryPrivacySettingsScope",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b8cd04);
  (*pcVar1)();
}



/* Entry: 103b8cd38; end: 103b8cd93; -[_TtC27SCStoryPrivacySettingsScope27SCStoryPrivacySettingsScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103b8cd38(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112ff1af0);
  param_1 = param_1 + _DAT_112ff1af8;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b8cd94; end: 103b8cdff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8cd94(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034fcc0();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ff1b38) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103b8ce00; end: 103b8ce07;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8ce00(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010034fcc0();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff1b38) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 103b8ce08; end: 103b8ce53;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8ce08(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff1b38) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b8ce54; end: 103b8cf7b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103b8ce54(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *aplStack_a8 [2];
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = 0;
  func_0x00010034a228();
  lVar4 = lVar3;
  func_0x000107c610f8();
  lVar1 = _DAT_112ff1af0;
  func_0x000107c61614(lVar4 + _DAT_112ff1af0,0);
  lVar2 = _DAT_112ff1af8;
  func_0x000107c61614(lVar4 + _DAT_112ff1af8,0);
  func_0x000107c61428(lVar4 + lVar1,auStack_68,1,0);
  func_0x000107c61604(lVar4 + lVar1,param_1);
  func_0x000107c61428(lVar4 + lVar2,auStack_80,1,0);
  func_0x000107c61604(lVar4 + lVar2,param_2);
  *(undefined1 *)(lVar4 + _DAT_112ff1b00) = 0;
  plVar5 = &lStack_90;
  lStack_90 = lVar4;
  lStack_88 = lVar3;
  func_0x000107c61154(plVar5,PTR_s_init_1125d9248);
  aplStack_a8[0] = plVar5;
  func_0x00010008a7c8(&uStack_98,aplStack_a8);
  func_0x000100083b20(aplStack_a8);
  func_0x000107c61574(uStack_98);
  func_0x000107c615e8(aplStack_a8[0]);
  return plVar5;
}



/* Entry: 103b8cf7c; end: 103b8cfef; -[_TtC27SCStoryPrivacySettingsScope35SCStoryPrivacySettingsScopeServices buildWithNavigationController:delegate:] */

void FUN_103b8cf7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c615f0(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_103b8ce54(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c615e8(param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 103b8cff0; end: 103b8d04f; -[_TtC27SCStoryPrivacySettingsScope35SCStoryPrivacySettingsScopeServices init] */

void FUN_103b8cff0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCStoryPrivacySettingsScope.SCStoryPrivacySettingsScopeServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b8d01c);
  (*pcVar1)();
}



/* Entry: 103b8d050; end: 103b8d07f; -[_TtC27SCStoryPrivacySettingsScope35SCStoryPrivacySettingsScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8d050(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff1b38));
  return;
}



/* Entry: 103b8d080; end: 103b8d08b; -[_TtC17SCStoryShareScope17SCStoryShareScope clientId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8d080(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff1b80);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff1b80))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b8d08c; end: 103b8d097; -[_TtC17SCStoryShareScope17SCStoryShareScope storyId] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8d08c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112ff1b88);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112ff1b88))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b8d098; end: 103b8d0df;  */

void FUN_103b8d098(long param_1,undefined8 param_2,long *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + *param_3);
  uVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 103b8d0e0; end: 103b8d0ef; -[_TtC17SCStoryShareScope17SCStoryShareScope presentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8d0e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff1b90));
  return;
}



/* Entry: 103b8d0f0; end: 103b8d0ff; -[_TtC17SCStoryShareScope17SCStoryShareScope sourcePage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103b8d0f0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112ff1b98);
}



/* Entry: 103b8d100; end: 103b8d147; -[_TtC17SCStoryShareScope17SCStoryShareScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8d100(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112ff1ba0;
  func_0x000107c61428(param_1 + _DAT_112ff1ba0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103b8d148; end: 103b8d19f; -[_TtC17SCStoryShareScope17SCStoryShareScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8d148(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112ff1ba0;
  func_0x000107c61428(param_1 + _DAT_112ff1ba0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103b8d1a0; end: 103b8d1ff; -[_TtC17SCStoryShareScope17SCStoryShareScope init] */

void FUN_103b8d1a0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCStoryShareScope.SCStoryShareScope",0x23,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b8d1cc);
  (*pcVar1)();
}



/* Entry: 103b8d200; end: 103b8d283; -[_TtC17SCStoryShareScope17SCStoryShareScope .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103b8d200(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff1b80 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ff1b88 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ff1b90));
  param_1 = param_1 + _DAT_112ff1ba0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 103b8d284; end: 103b8d2ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8d284(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010035c0f4();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112ff1bd8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 103b8d2f0; end: 103b8d2f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8d2f0(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x00010035c0f4();
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff1bd8) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 103b8d2f8; end: 103b8d343;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8d2f8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff1bd8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b8d344; end: 103b8d4ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103b8d344(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long *aplStack_a0 [2];
  undefined8 uStack_90;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = 0;
  func_0x00010035170c();
  lVar5 = lVar4;
  func_0x000107c610f8();
  lVar3 = _DAT_112ff1ba0;
  func_0x000107c61614(lVar5 + _DAT_112ff1ba0,0);
  puVar1 = (undefined8 *)(lVar5 + _DAT_112ff1b80);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112ff1b88);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  *(undefined8 *)(lVar5 + _DAT_112ff1b90) = param_5;
  *(undefined8 *)(lVar5 + _DAT_112ff1b98) = param_6;
  func_0x000107c61428(lVar5 + lVar3,auStack_78,1,0);
  func_0x000107c61604(lVar5 + lVar3,param_7);
  puVar2 = PTR_s_init_1125d9248;
  lStack_88 = lVar5;
  lStack_80 = lVar4;
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x000107c61174(param_5);
  plVar6 = &lStack_88;
  func_0x000107c61154(plVar6,puVar2);
  aplStack_a0[0] = plVar6;
  func_0x00010008a7c8(&uStack_90,aplStack_a0);
  func_0x000100083b20(aplStack_a0);
  func_0x000107c61574(uStack_90);
  func_0x000107c615e8(aplStack_a0[0]);
  return plVar6;
}



/* Entry: 103b8d4ac; end: 103b8d583; -[_TtC17SCStoryShareScope25SCStoryShareScopeServices buildWithClientId:storyId:presentingViewController:sourcePage:delegate:] */

void FUN_103b8d4ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c615f0(param_7);
  func_0x000107c61174(param_1);
  FUN_103b8d344(param_3,param_2,param_4,uVar1,param_5,param_6,param_7);
  func_0x000107c61170(param_5);
  func_0x000107c615e8(param_7);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 103b8d584; end: 103b8d5e3; -[_TtC17SCStoryShareScope25SCStoryShareScopeServices init] */

void FUN_103b8d584(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCStoryShareScope.SCStoryShareScopeServices",0x2b,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b8d5b0);
  (*pcVar1)();
}



/* Entry: 103b8d5e4; end: 103b8d613; -[_TtC17SCStoryShareScope25SCStoryShareScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8d5e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ff1bd8));
  return;
}



/* Entry: 103b8d614; end: 103b8d65f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8d614(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff1c20) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103b8d660; end: 103b8d6bf; -[_TtC28SCStoriesSnapchatterServices28SCStoriesSnapchatterServices init] */

void FUN_103b8d660(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCStoriesSnapchatterServices.SCStoriesSnapchatterServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103b8d68c);
  (*pcVar1)();
}



/* Entry: 103b8d6c0; end: 103b8d727; -[_TtC28SCStoriesSnapchatterServices28SCStoriesSnapchatterServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8d6c0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ff1c20));
  return;
}



/* Entry: 103b8d728; end: 103b8d777;  */

undefined8 * FUN_103b8d728(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  func_0x000103b8d6d0(uVar4,uVar1);
  uVar3 = *param_1;
  *param_1 = uVar4;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000103b8d704(uVar3,uVar2);
  return param_1;
}



/* Entry: 103b8d778; end: 103b8d7b3;  */

undefined8 * FUN_103b8d778(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar3 = *param_1;
  *param_1 = *param_2;
  uVar2 = *(undefined1 *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = uVar1;
  func_0x000103b8d704(uVar3,uVar2);
  return param_1;
}



/* Entry: 103b8d7b4; end: 103b8d86b;  */

int FUN_103b8d7b4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103b8d86c; end: 103b8d8b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103b8d86c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ff1c58) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}


