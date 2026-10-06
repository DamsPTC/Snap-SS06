/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10487bd78; end: 10487bdc3;  */

void FUN_10487bd78(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_20 = &UNK_10dd3b018;
  _swift_initClassMetadata2(param_1,0,2,&puStack_20,param_1 + 0xb0);
  return;
}



/* Entry: 10487bdc4; end: 10487bdc7;  */

void FUN_10487bdc4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10487bdc8; end: 10487be6f;  */

void FUN_10487bdc8(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_58 = *(long *)(lVar1 + -8) + 0x40;
    puStack_50 = PTR___sBoWV_11034d678 + 0x40;
    puStack_40 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_48 = &UNK_10dd3b078;
    puStack_30 = &UNK_10dd3b090;
    puStack_28 = &UNK_10dd3b0a8;
    puStack_38 = puStack_50;
    _swift_initClassMetadata2(param_1,0,7,&lStack_58,param_1 + 0x58);
  }
  return;
}



/* Entry: 10487be70; end: 10487becb;  */

undefined8 FUN_10487be70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_10487becc(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 10487becc; end: 10487bf83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487becc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_113815440);
  lVar1 = _DAT_113094460;
  uVar2 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  *(undefined8 *)(unaff_x20 + _DAT_113094468) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_113094470) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_113094448) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_113094458) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_113094450) = param_3;
  return;
}



/* Entry: 10487bf84; end: 10487c2c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487bf84(undefined8 param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long extraout_x8;
  long lVar9;
  long extraout_x8_00;
  ulong uVar10;
  long extraout_x12;
  long lVar11;
  long *unaff_x20;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_d0 [8];
  long lStack_c8;
  undefined8 uStack_c0;
  undefined1 *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar11 = *unaff_x20;
  lVar2 = 0;
  __s8Dispatch0A4TimeVMa();
  lStack_a8 = *(long *)(lVar2 + -8);
  lStack_a0 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  puStack_b8 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar3 = 0;
  lStack_b0 = lVar9;
  __s8Dispatch0A13WorkItemFlagsVMa();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar15 = *(long *)(lVar11 + 0x50);
  lVar14 = *(long *)(lVar15 + -8);
  lVar17 = *(long *)(lVar14 + 0x40);
  lStack_c8 = lVar9;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar9 = lVar9 - (lVar17 + 0xfU & 0xfffffffffffffff0);
  uStack_c0 = *(undefined8 *)((long)unaff_x20 + _DAT_113094460);
  func_0x00010006c804();
  lVar2 = _DAT_113094468;
  lVar11 = *(long *)((long)unaff_x20 + _DAT_113094468);
  if (lVar11 != 0) {
    _swift_retain(lVar11);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar11);
  }
  puVar4 = &UNK_1107a8090;
  _swift_allocObject(&UNK_1107a8090,0x18,7);
  _swift_weakInit(puVar4 + 0x10);
  (**(code **)(lVar14 + 0x10))(lVar9,param_1,lVar15);
  uVar10 = (ulong)*(byte *)(lVar14 + 0x50);
  uVar16 = uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff);
  puVar5 = &UNK_1107a80b8;
  _swift_allocObject(&UNK_1107a80b8,uVar16 + lVar17,uVar10 | 7);
  *(long *)(puVar5 + 0x10) = lVar15;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  (**(code **)(lVar14 + 0x20))(puVar5 + uVar16,lVar9,lVar15);
  uStack_70 = 0x10487c5a8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1107a80d0;
  ppuVar6 = &puStack_90;
  puStack_68 = puVar5;
  __Block_copy(ppuVar6);
  puStack_98 = PTR___swiftEmptyArrayStorage_11034f1c8;
  ppuVar7 = ppuVar6;
  func_0x0001001c7eec();
  _swift_retain(puVar4);
  uVar12 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = uVar12;
  func_0x0001001c7f30();
  lVar9 = lStack_c8;
  __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
            (lStack_c8,&puStack_98,uVar12,uVar8,lVar3,ppuVar7);
  __s8Dispatch0A8WorkItemCMa();
  _swift_allocObject();
  __s8Dispatch0A8WorkItemC5flags5blockAcA0abC5FlagsV_yyXBtcfc(lVar9,ppuVar6);
  puVar5 = puStack_68;
  _swift_release(puVar4);
  _swift_release(puVar5);
  uVar12 = *(undefined8 *)((long)unaff_x20 + lVar2);
  *(long *)((long)unaff_x20 + lVar2) = lVar9;
  _swift_retain(lVar9);
  _swift_release(uVar12);
  uVar12 = *(undefined8 *)((long)unaff_x20 + _DAT_113094450);
  _swift_getObjectType(uVar12);
  func_0x000100bcb214();
  puVar1 = puStack_b8;
  __s8Dispatch0A4TimeV3nowACyFZ(puStack_b8);
  lVar2 = lStack_b0;
  __s8Dispatch1poiyAA0A4TimeVAD_SdtF
            (lStack_b0,*(undefined8 *)((long)unaff_x20 + _DAT_113094458),puVar1);
  lVar3 = lStack_a0;
  pcVar13 = *(code **)(lStack_a8 + 8);
  (*pcVar13)(puVar1,lStack_a0);
  __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline7executeyAC0D4TimeV_AC0D8WorkItemCtF
            (lVar2,lVar9);
  _objc_release(uVar12);
  (*pcVar13)(lVar2,lVar3);
  func_0x000100070bfc();
  _swift_release(lVar9);
  return;
}



/* Entry: 10487c2c4; end: 10487c31f;  */

void FUN_10487c2c4(long param_1,undefined8 param_2)

{
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_10487c320(param_2);
    _swift_release(param_1);
  }
  return;
}



/* Entry: 10487c320; end: 10487c40f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487c320(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x00010006c804();
  func_0x000100087f6c(param_1);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_113094468);
  *(undefined8 *)(unaff_x20 + _DAT_113094468) = 0;
  _swift_release(uVar1);
  func_0x000100070bfc();
  return;
}



/* Entry: 10487c410; end: 10487c4e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487c410(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_113094468);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    __s8Dispatch0A8WorkItemC7performyyFTj();
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar1);
  }
  func_0x000100c7f554();
  return;
}



/* Entry: 10487c4e4; end: 10487c507;  */

void FUN_10487c4e4(void)

{
  func_0x00010487c464();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10487c508; end: 10487c513;  */

void FUN_10487c508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820438);
  return;
}



/* Entry: 10487c514; end: 10487c55f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487c514(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_113815440;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x00010487c55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 10487c560; end: 10487c59f;  */

void FUN_10487c560(void)

{
  FUN_10487bf84();
  return;
}



/* Entry: 10487c5a0; end: 10487c5df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487c5a0(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_113094468);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    __s8Dispatch0A8WorkItemC7performyyFTj();
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar1);
  }
  func_0x000100c7f554();
  return;
}



/* Entry: 10487c5e0; end: 10487c62f;  */

void FUN_10487c5e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  FUN_10487c7c8(param_2,unaff_x20 + 0x18);
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 10487c630; end: 10487c6f7;  */

undefined1  [16] FUN_10487c630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *unaff_x20;
  long *plVar3;
  undefined1 auVar4 [16];
  undefined8 auStack_68 [5];
  
  plVar3 = (long *)unaff_x20[2];
  uVar1 = 0;
  FUN_10487cbd8(0,*(undefined8 *)(*unaff_x20 + 0xa8),*(undefined8 *)(*unaff_x20 + 0xb0));
  func_0x0001000b693c(param_2,param_3);
  FUN_10487c740(unaff_x20 + 3,auStack_68);
  FUN_10487c7e0(param_2,auStack_68);
  puVar2 = auStack_68;
  auStack_68[0] = param_2;
  (**(code **)(*plVar3 + 0x58))(puVar2,uVar1,&PTR_DAT_113094630);
  _swift_release(param_2);
  auVar4._8_8_ = uVar1;
  auVar4._0_8_ = puVar2;
  return auVar4;
}



/* Entry: 10487c6f8; end: 10487c6ff;  */

void FUN_10487c6f8(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x30) + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10487c700; end: 10487c733;  */

void FUN_10487c700(long param_1)

{
  func_0x0001000d2374();
  func_0x0001000834e4(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x40,7);
  return;
}



/* Entry: 10487c734; end: 10487c73f;  */

void FUN_10487c734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820488);
  return;
}



/* Entry: 10487c740; end: 10487c783;  */

long FUN_10487c740(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10487c784; end: 10487c787;  */

void FUN_10487c784(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10487c788; end: 10487c7c7;  */

void FUN_10487c788(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &UNK_10dd3b138;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xb8);
  return;
}



/* Entry: 10487c7c8; end: 10487c7df;  */

undefined8 * FUN_10487c7c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 10487c7e0; end: 10487c84f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10487c7e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_113815448);
  *(undefined8 *)(unaff_x20 + _DAT_1130945a0) = param_1;
  FUN_10487c7c8(param_2,unaff_x20 + _DAT_1130945a8);
  return unaff_x20;
}



/* Entry: 10487c850; end: 10487c9ef;  */

/* WARNING: Removing unreachable block (ram,0x00010487c944) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487c850(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  
  lVar8 = *unaff_x20;
  lVar5 = *(long *)(lVar8 + 0x50);
  lVar3 = 0;
  __sSqMa(0,lVar5);
  lStack_78 = *(long *)(lVar3 + -8);
  lStack_70 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lStack_78 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  puVar6 = auStack_80 + -extraout_x8;
  lVar4 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)unaff_x20 + _DAT_1130945a8;
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x20);
  func_0x0001000a8868(lVar3,uVar1);
  (**(code **)(lVar2 + 8))
            (lVar7,lVar5,param_1,param_2,lVar5,*(undefined8 *)(lVar8 + 0x58),uVar1,lVar2);
  (**(code **)(lVar4 + 0x10))(puVar6,lVar7,lVar5);
  (**(code **)(lVar4 + 0x38))(puVar6,0,1,lVar5);
  func_0x000100087f6c(puVar6);
  (**(code **)(lStack_78 + 8))(puVar6,lStack_70);
  (**(code **)(lVar4 + 8))(lVar7,lVar5);
  return;
}



/* Entry: 10487c9f0; end: 10487ca77;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487c9f0(void)

{
  func_0x000100c7f554();
  return;
}



/* Entry: 10487ca78; end: 10487ca9b;  */

void FUN_10487ca78(void)

{
  func_0x00010487ca18();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10487ca9c; end: 10487cae7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487ca9c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_113815448;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x00010487cae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 10487cae8; end: 10487cb2f;  */

void FUN_10487cae8(undefined8 *param_1)

{
  FUN_10487c850(*param_1,param_1[1]);
  return;
}



/* Entry: 10487cb30; end: 10487cb4f;  */

void FUN_10487cb30(void)

{
  __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj();
  return;
}



/* Entry: 10487cb50; end: 10487cb53;  */

void FUN_10487cb50(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10487cb54; end: 10487cbd7;  */

void FUN_10487cb54(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBoWV_11034d678 + 0x40;
    puStack_28 = &UNK_10dd3b1a8;
    _swift_initClassMetadata2(param_1,0,3,&lStack_38,param_1 + 0x60);
  }
  return;
}



/* Entry: 10487cbd8; end: 10487cbe3;  */

void FUN_10487cbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820500);
  return;
}



/* Entry: 10487cbe4; end: 10487cc3b;  */

void FUN_10487cbe4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  func_0x0001000c0ea8(param_2);
  return;
}



/* Entry: 10487cc3c; end: 10487cd1f;  */

undefined1  [16] FUN_10487cc3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long *unaff_x20;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_58;
  
  plVar6 = (long *)unaff_x20[2];
  uVar1 = 0;
  FUN_10487d3c4(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  func_0x0001000b693c(param_2,param_3);
  lVar7 = unaff_x20[4];
  lVar4 = unaff_x20[3];
  _swift_unknownObjectRetain(lVar4);
  FUN_10487cec8(lVar7,param_2,lVar4);
  pcVar5 = *(code **)(*plVar6 + 0x58);
  puVar2 = &DAT_10dd3b2e0;
  uStack_58 = param_2;
  _swift_getWitnessTable(&DAT_10dd3b2e0,uVar1);
  puVar3 = &uStack_58;
  (*pcVar5)(puVar3,uVar1,puVar2);
  _swift_release(param_2);
  auVar8._8_8_ = uVar1;
  auVar8._0_8_ = puVar3;
  return auVar8;
}



/* Entry: 10487cd20; end: 10487cd27;  */

void FUN_10487cd20(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10487cd28; end: 10487cd5b;  */

void FUN_10487cd28(long param_1)

{
  func_0x0001000d2374();
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x28,7);
  return;
}



/* Entry: 10487cd5c; end: 10487cdd7;  */

long * FUN_10487cd5c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_10487cdd8(0,*(undefined8 *)(*unaff_x20 + 0x50));
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x20) = param_1;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  func_0x0001000c0ea8();
  _swift_retain();
  _swift_unknownObjectRetain(param_2);
  return unaff_x20;
}



/* Entry: 10487cdd8; end: 10487cde7;  */

void FUN_10487cdd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e82057c);
  return;
}



/* Entry: 10487cde8; end: 10487ce33;  */

void FUN_10487cde8(long param_1)

{
  undefined *puStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_20 = &UNK_10dd3b248;
  _swift_initClassMetadata2(param_1,0,2,&puStack_20,param_1 + 0xb0);
  return;
}



/* Entry: 10487ce34; end: 10487ce37;  */

void FUN_10487ce34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10487ce38; end: 10487cec7;  */

void FUN_10487ce38(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_40 = *(long *)(lVar1 + -8) + 0x40;
    puStack_38 = PTR___sBoWV_11034d678 + 0x40;
    puStack_28 = PTR___sBi64_WV_11034d670 + 0x40;
    puStack_30 = &UNK_10dd3b2a0;
    _swift_initClassMetadata2(param_1,0,4,&lStack_40,param_1 + 0x58);
  }
  return;
}



/* Entry: 10487cec8; end: 10487cf47;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10487cec8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  __s10Foundation4UUIDVACycfC(unaff_x20 + _DAT_113815450);
  *(undefined8 *)(unaff_x20 + _DAT_1130946d8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_1130946e8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_1130946e0) = param_3;
  return unaff_x20;
}



/* Entry: 10487cf48; end: 10487d317;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487cf48(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar5;
  long extraout_x12;
  long *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  double dVar16;
  long lStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  lVar6 = *unaff_x20;
  lVar1 = 0;
  uStack_b8 = param_1;
  __s8Dispatch0A13WorkItemFlagsVMa();
  lStack_c8 = *(long *)(lVar1 + -8);
  lStack_c0 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_c8 + 0x40));
  lVar11 = (long)&lStack_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  lStack_d0 = lVar11;
  __s8Dispatch0A3QoSVMa();
  lStack_e0 = *(long *)(lVar1 + -8);
  lStack_d8 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_e0 + 0x40));
  lVar11 = lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar14 = *(long *)(lVar6 + 0x50);
  lVar12 = *(long *)(lVar14 + -8);
  lVar15 = *(long *)(lVar12 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = lVar11 - (lVar15 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar13 = lVar6 - extraout_x12;
  dVar16 = *(double *)((long)unaff_x20 + _DAT_1130946e8);
  uVar7 = *(undefined8 *)((long)unaff_x20 + _DAT_1130946e0);
  if (dVar16 <= 0.0) {
    (**(code **)(lVar12 + 0x10))(lVar10,uStack_b8,lVar14);
    uVar5 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar8 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
    puVar3 = &UNK_1107a8458;
    _swift_allocObject(&UNK_1107a8458,uVar8 + lVar15,uVar5 | 7);
    *(long *)(puVar3 + 0x10) = lVar14;
    *(long **)(puVar3 + 0x18) = unaff_x20;
    (**(code **)(lVar12 + 0x20))(puVar3 + uVar8,lVar10,lVar14);
    pcStack_88 = (code *)0x10487d528;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000f6b44;
    puStack_90 = &UNK_1107a8470;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    __Block_copy(ppuVar4);
    puVar3 = puStack_80;
    _swift_retain();
    _swift_release(puVar3);
    func_0x000100c00c0c(uVar7,ppuVar4);
    __Block_release(ppuVar4);
  }
  else {
    lStack_100 = lVar11;
    lStack_e8 = lVar1;
    _swift_getObjectType();
    func_0x000100bcb214();
    uStack_f8 = uVar7;
    __s8Dispatch0A4TimeV3nowACyFZ(lVar6);
    __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar13,dVar16,lVar6);
    pcStack_f0 = *(code **)(lVar9 + 8);
    (*pcStack_f0)(lVar6,lVar1);
    (**(code **)(lVar12 + 0x10))(lVar10,uStack_b8,lVar14);
    uVar5 = (ulong)*(byte *)(lVar12 + 0x50);
    uVar8 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
    puVar3 = &UNK_1107a84a8;
    _swift_allocObject(&UNK_1107a84a8,uVar8 + lVar15,uVar5 | 7);
    *(long *)(puVar3 + 0x10) = lVar14;
    *(long **)(puVar3 + 0x18) = unaff_x20;
    (**(code **)(lVar12 + 0x20))(puVar3 + uVar8,lVar10,lVar14);
    pcStack_88 = FUN_10487d4d8;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_1000b0c7c;
    puStack_90 = &UNK_1107a84c0;
    ppuVar4 = &puStack_a8;
    puStack_80 = puVar3;
    __Block_copy(ppuVar4);
    _swift_retain();
    lVar1 = lStack_100;
    __s8Dispatch0A3QoSV11unspecifiedACvgZ(lStack_100);
    puStack_b0 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x0001001c7eec();
    uVar7 = 0x112d4af90;
    func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
    uVar2 = uVar7;
    func_0x0001001c7f30();
    lVar6 = lStack_c0;
    lVar11 = lStack_d0;
    __ss10SetAlgebraPyxqd__ncSTRd__7ElementQyd__ACRtzlufCTj
              (lStack_d0,&puStack_b0,uVar7,uVar2,lStack_c0,unaff_x20);
    uVar7 = uStack_f8;
    __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline3qos5flags7executeyAC0D4TimeV_AC0D3QoSVAC0D13WorkItemFlagsVyyXBtF
              (lVar13,lVar1,lVar11,ppuVar4);
    __Block_release(ppuVar4);
    _objc_release(uVar7);
    (**(code **)(lStack_c8 + 8))(lVar11,lVar6);
    (**(code **)(lStack_e0 + 8))(lVar1,lStack_d8);
    (*pcStack_f0)(lVar13,lStack_e8);
    _swift_release(puStack_80);
  }
  return;
}



/* Entry: 10487d318; end: 10487d39f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487d318(void)

{
  func_0x000100c7f554();
  return;
}



/* Entry: 10487d3a0; end: 10487d3c3;  */

void FUN_10487d3a0(void)

{
  func_0x00010487d340();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10487d3c4; end: 10487d3cf;  */

void FUN_10487d3c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e8205e8);
  return;
}



/* Entry: 10487d3d0; end: 10487d41b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487d3d0(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_113815450;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x00010487d418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 10487d41c; end: 10487d45b;  */

void FUN_10487d41c(void)

{
  FUN_10487cf48();
  return;
}



/* Entry: 10487d45c; end: 10487d477;  */

void FUN_10487d45c(long param_1,long param_2)

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



/* Entry: 10487d478; end: 10487d4d7;  */

void FUN_10487d478(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x20 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10487d4d8; end: 10487d4db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487d4d8(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  func_0x000100087f6c(*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_1130946d8),
                      unaff_x20 + (uVar1 + 0x20 & (uVar1 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 10487d4dc; end: 10487d51f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487d4dc(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  func_0x000100087f6c(*(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_1130946d8),
                      unaff_x20 + (uVar1 + 0x20 & (uVar1 ^ 0xffffffffffffffff)));
  return;
}



/* Entry: 10487d520; end: 10487d533;  */

void FUN_10487d520(long param_1,long param_2)

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



/* Entry: 10487d534; end: 10487d567;  */

void FUN_10487d534(long param_1)

{
  func_0x0001000b6d7c();
  _swift_release(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x18,7);
  return;
}



/* Entry: 10487d568; end: 10487d5b3;  */

void FUN_10487d568(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 10487d5b4; end: 10487d68b;  */

undefined1  [16] FUN_10487d5b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *unaff_x20;
  code *pcVar6;
  long *plVar7;
  undefined1 auVar8 [16];
  undefined8 uStack_48;
  
  plVar7 = (long *)unaff_x20[2];
  uVar3 = 0;
  FUN_10487dce0(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  func_0x0001000b693c(param_2,param_3);
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  _swift_retain(lVar2);
  FUN_10487d874(param_2,lVar1,lVar2);
  pcVar6 = *(code **)(*plVar7 + 0x58);
  puVar4 = &DAT_10dd3b3e0;
  uStack_48 = param_2;
  _swift_getWitnessTable(&DAT_10dd3b3e0,uVar3);
  puVar5 = &uStack_48;
  (*pcVar6)(puVar5,uVar3,puVar4);
  _swift_release(param_2);
  auVar8._8_8_ = uVar3;
  auVar8._0_8_ = puVar5;
  return auVar8;
}



/* Entry: 10487d68c; end: 10487d693;  */

void FUN_10487d68c(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10487d694; end: 10487d6c7;  */

void FUN_10487d694(long param_1)

{
  func_0x0001000d2374();
  _swift_release(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x28,7);
  return;
}



/* Entry: 10487d6c8; end: 10487d6d3;  */

void FUN_10487d6c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820698);
  return;
}



/* Entry: 10487d6d4; end: 10487d767;  */

void FUN_10487d6d4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long *unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x50);
  lVar1 = 0;
  FUN_10487d6c8(0,uVar3);
  puVar2 = &UNK_1107a85c8;
  _swift_allocObject(&UNK_1107a85c8,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = uVar3;
  _swift_allocObject(lVar1,0x28,7);
  *(code **)(lVar1 + 0x18) = FUN_10487d768;
  *(undefined **)(lVar1 + 0x20) = puVar2;
  _swift_retain();
  func_0x0001000c0ea8();
  return;
}



/* Entry: 10487d768; end: 10487d78f;  */

uint FUN_10487d768(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  __sSQ2eeoiySbx_xtFZTj
            (param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return (uint)param_1 & 1;
}



/* Entry: 10487d790; end: 10487d793;  */

void FUN_10487d790(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10487d794; end: 10487d7d7;  */

void FUN_10487d794(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___syycWV_11034f1c0 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xb0);
  return;
}



/* Entry: 10487d7d8; end: 10487d7db;  */

void FUN_10487d7d8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 10487d7dc; end: 10487d873;  */

void FUN_10487d7dc(long param_1,ulong param_2)

{
  long lVar1;
  long lStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    lStack_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = PTR___sBbWV_11034d660 + 0x40;
    puStack_38 = PTR___syycWV_11034f1c0 + 0x40;
    puStack_30 = PTR___sBoWV_11034d678 + 0x40;
    puStack_28 = puStack_30;
    _swift_initClassMetadata2(param_1,0,5,&lStack_48,param_1 + 0x58);
  }
  return;
}



/* Entry: 10487d874; end: 10487d8c7;  */

undefined8 FUN_10487d874(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_10487d8c8(param_1,param_2,param_3);
  return unaff_x20;
}



/* Entry: 10487d8c8; end: 10487d973;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487d8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar4 = *unaff_x20;
  __s10Foundation4UUIDVACycfC((long)unaff_x20 + _DAT_113815458);
  lVar2 = _DAT_113094898;
  uVar3 = 0;
  __sSa22_allocateUninitializedySayxG_SpyxGtSiFZ(0,*(undefined8 *)(lVar4 + 0x50));
  *(undefined8 *)((long)unaff_x20 + lVar2) = uVar3;
  lVar2 = _DAT_1130948a8;
  uVar3 = 0;
  func_0x00010006a340();
  _swift_allocObject();
  func_0x00010006a360();
  *(undefined8 *)((long)unaff_x20 + lVar2) = uVar3;
  *(undefined8 *)((long)unaff_x20 + _DAT_1130948b0) = param_1;
  puVar1 = (undefined8 *)((long)unaff_x20 + _DAT_1130948a0);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  return;
}



/* Entry: 10487d974; end: 10487d9f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487d974(undefined8 param_1)

{
  undefined1 auStack_60 [16];
  char cStack_31;
  
  func_0x000100087bd4(&cStack_31,0x10487dd90,auStack_60,PTR___sSbN_11034dd40);
  if (cStack_31 == '\x01') {
    func_0x000100087f6c(param_1);
  }
  return;
}



/* Entry: 10487d9f4; end: 10487db57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487d9f4(byte *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  long extraout_x8;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined8 uStack_b0;
  byte *pbStack_a8;
  undefined1 auStack_a0 [16];
  long *plStack_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(*param_2 + 0x50);
  lStack_b8 = *(long *)(lVar7 + -8);
  plVar2 = param_2;
  pbStack_a8 = param_1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_b8 + 0x40));
  lVar1 = _DAT_113094898;
  _swift_beginAccess((long)plVar2 + _DAT_113094898,auStack_78,0,0);
  uVar6 = *(undefined8 *)((long)param_2 + lVar1);
  uVar3 = 0;
  uStack_b0 = param_3;
  plStack_90 = param_2;
  uStack_88 = param_3;
  __sSaMa(0,lVar7);
  _swift_bridgeObjectRetain(uVar6);
  puVar4 = PTR___sSayxGSTsMc_11034dd08;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_11034dd08,uVar3);
  uVar5 = 0;
  __sSTsE8contains5whereS2b7ElementQzKXE_tKF(FUN_10487dda8,auStack_a0,uVar3,puVar4);
  _swift_bridgeObjectRelease(uVar6);
  if ((uVar5 & 1) == 0) {
    (**(code **)(lStack_b8 + 0x10))
              (auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uStack_b0,lVar7);
    _swift_beginAccess((long)param_2 + lVar1,auStack_a0,0x21,0);
    __sSa6appendyyxnF(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar3);
    _swift_endAccess(auStack_a0);
  }
  *pbStack_a8 = ((byte)uVar5 ^ 0xff) & 1;
  return;
}



/* Entry: 10487db58; end: 10487dbbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487db58(void)

{
  func_0x000100087bd4(FUN_10487dd78);
  func_0x000100c7f554();
  return;
}



/* Entry: 10487dbc0; end: 10487dc37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487dbc0(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_1;
  _swift_beginAccess((long)param_1 + _DAT_113094898,auStack_48,0x21,0);
  uVar1 = 0;
  __sSaMa(0,*(undefined8 *)(lVar2 + 0x50));
  __sSa9removeAll15keepingCapacityySb_tF(0,uVar1);
  _swift_endAccess(auStack_48);
  return;
}



/* Entry: 10487dc38; end: 10487dcbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487dc38(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _DAT_113815458;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + lVar1,lVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + _DAT_113094898));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_1130948a0 + 8));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_1130948a8));
  _swift_release(*(undefined8 *)(unaff_x20 + _DAT_1130948b0));
  return;
}



/* Entry: 10487dcbc; end: 10487dcdf;  */

void FUN_10487dcbc(void)

{
  FUN_10487dc38();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10487dce0; end: 10487dceb;  */

void FUN_10487dce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820704);
  return;
}



/* Entry: 10487dcec; end: 10487dd37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487dcec(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = _DAT_113815458;
  lVar3 = *unaff_x20;
  lVar2 = 0;
  __s10Foundation4UUIDVMa();
                    /* WARNING: Could not recover jumptable at 0x00010487dd34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,lVar3 + lVar1,lVar2);
  return;
}



/* Entry: 10487dd38; end: 10487dd77;  */

void FUN_10487dd38(void)

{
  FUN_10487d974();
  return;
}



/* Entry: 10487dd78; end: 10487dda7;  */

void FUN_10487dd78(void)

{
  FUN_10487dbc0();
  return;
}



/* Entry: 10487dda8; end: 10487dde3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10487dda8(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + _DAT_1130948a0))
            (param_1,*(undefined8 *)(unaff_x20 + 0x18));
  return (uint)param_1 & 1;
}



/* Entry: 10487dde4; end: 10487de2f;  */

void FUN_10487dde4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 10487de30; end: 10487de37;  */

void FUN_10487de30(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 10487de38; end: 10487deab;  */

long * FUN_10487de38(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  func_0x0001000c205c(0,*(undefined8 *)(*unaff_x20 + 0x50));
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  func_0x0001000c0ea8(lVar1);
  _swift_retain();
  _swift_retain(param_2);
  return unaff_x20;
}



/* Entry: 10487deac; end: 10487df63;  */

void FUN_10487deac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  
  uVar1 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,param_1,param_2,0,0);
  lVar2 = 0;
  func_0x0001000c205c(0,uVar1);
  puVar3 = &UNK_1107a87b0;
  _swift_allocObject(&UNK_1107a87b0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  _swift_allocObject(lVar2,0x28,7);
  *(code **)(lVar2 + 0x18) = FUN_10487dfec;
  *(undefined **)(lVar2 + 0x20) = puVar3;
  _swift_retain();
  func_0x0001000c0ea8();
  return;
}



/* Entry: 10487df64; end: 10487dfeb;  */

uint FUN_10487df64(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  
  uVar2 = param_1;
  __sSQ2eeoiySbx_xtFZTj();
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    lVar3 = 0;
    _swift_getTupleTypeMetadata2(0,param_3,param_4,0,0);
    lVar4 = param_1 + (long)*(int *)(lVar3 + 0x30);
    __sSQ2eeoiySbx_xtFZTj(lVar4,param_2 + *(int *)(lVar3 + 0x30),param_4,param_6);
    uVar1 = (uint)lVar4 & 1;
  }
  return uVar1;
}



/* Entry: 10487dfec; end: 10487dff7;  */

uint FUN_10487dfec(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = param_1;
  __sSQ2eeoiySbx_xtFZTj();
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    lVar6 = 0;
    _swift_getTupleTypeMetadata2(0,uVar1,uVar2,0,0);
    lVar7 = param_1 + (long)*(int *)(lVar6 + 0x30);
    __sSQ2eeoiySbx_xtFZTj(lVar7,param_2 + *(int *)(lVar6 + 0x30),uVar2,uVar3);
    uVar4 = (uint)lVar7 & 1;
  }
  return uVar4;
}



/* Entry: 10487dff8; end: 10487e01f;  */

void FUN_10487dff8(void)

{
  func_0x000100c7f554();
  return;
}



/* Entry: 10487e020; end: 10487e0c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10487e020(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar2 = _DAT_113815460;
  lVar3 = *unaff_x20;
  lVar1 = 0;
  __s10Foundation4UUIDVMa();
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar2,lVar1);
  lVar1 = *(long *)(*unaff_x20 + 0x60);
  lVar2 = 0;
  __sSqMa(0,*(undefined8 *)(lVar3 + 0x50));
  (**(code **)(*(long *)(lVar2 + -8) + 8))((long)unaff_x20 + lVar1,lVar2);
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68) + 8));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)));
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)));
  return;
}



/* Entry: 10487e0c8; end: 10487e0eb;  */

void FUN_10487e0c8(void)

{
  FUN_10487e020();
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10487e0ec; end: 10487e10b;  */

void FUN_10487e0ec(void)

{
  FUN_10487dff8();
  return;
}



/* Entry: 10487e10c; end: 10487e157;  */

void FUN_10487e10c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 10487e158; end: 10487e20f;  */

void FUN_10487e158(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  code *pcVar5;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  func_0x0001000b6d30();
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar2;
  pcVar5 = *(code **)(**(long **)(unaff_x20 + 0x10) + 0x58);
  func_0x000100b64c10(uVar1,uVar2);
  (*pcVar5)(param_1,param_2,param_3);
  lVar4 = 0;
  func_0x0001000b6d5c();
  _swift_allocObject();
  *(long *)(lVar4 + 0x10) = lVar3;
  *(undefined ***)(lVar4 + 0x18) = &PTR_DAT_1107aaa40;
  *(undefined8 *)(lVar4 + 0x20) = param_1;
  *(undefined8 *)(lVar4 + 0x28) = param_2;
  return;
}



/* Entry: 10487e210; end: 10487e217;  */

void FUN_10487e210(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x20));
    return;
  }
  return;
}



/* Entry: 10487e218; end: 10487e24f;  */

void FUN_10487e218(long param_1)

{
  func_0x0001000d2374();
  func_0x00010058d43c(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)(param_1,0x28,7);
  return;
}



/* Entry: 10487e250; end: 10487e2c3;  */

long * FUN_10487e250(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_10487e2c4(0,*(undefined8 *)(*unaff_x20 + 0x50));
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  func_0x0001000c0ea8(lVar1);
  _swift_retain();
  _swift_retain(param_2);
  return unaff_x20;
}



/* Entry: 10487e2c4; end: 10487e2d3;  */

void FUN_10487e2c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820810);
  return;
}



/* Entry: 10487e2d4; end: 10487e313;  */

void FUN_10487e2d4(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = &UNK_10dd3b4f8;
  _swift_initClassMetadata2(param_1,0,1,&puStack_18,param_1 + 0xb0);
  return;
}



/* Entry: 10487e314; end: 10487e373;  */

void FUN_10487e314(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  func_0x0001000c0ea8(param_1);
  return;
}



/* Entry: 10487e374; end: 10487e46f;  */

undefined1  [16] FUN_10487e374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  long *unaff_x20;
  code *pcVar8;
  long *plVar9;
  undefined1 auVar10 [16];
  undefined8 uStack_58;
  
  plVar9 = (long *)unaff_x20[2];
  uVar5 = 0;
  FUN_10487e904(0,*(undefined8 *)(*unaff_x20 + 0xa8));
  func_0x0001000b693c(param_2,param_3);
  lVar1 = unaff_x20[3];
  lVar3 = unaff_x20[4];
  lVar2 = unaff_x20[5];
  lVar4 = unaff_x20[6];
  func_0x000100dbf6fc(lVar1,lVar3);
  func_0x000100dbf6fc(lVar2,lVar4);
  FUN_10487e738(param_2,lVar1,lVar3,lVar2,lVar4);
  pcVar8 = *(code **)(*plVar9 + 0x58);
  puVar6 = &DAT_10dd3b600;
  uStack_58 = param_2;
  _swift_getWitnessTable(&DAT_10dd3b600,uVar5);
  puVar7 = &uStack_58;
  (*pcVar8)(puVar7,uVar5,puVar6);
  _swift_release(param_2);
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = puVar7;
  return auVar10;
}



/* Entry: 10487e470; end: 10487e48b;  */

/* WARNING: Possible PIC construction at 0x00010487e47c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010487e480) */

void FUN_10487e470(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x18) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x20));
    return;
  }
  return;
}



/* Entry: 10487e48c; end: 10487e4c3;  */

long FUN_10487e48c(long param_1)

{
  func_0x0001000d2374();
  func_0x000100dbf70c(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  func_0x000100dbf70c(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return param_1;
}


