/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d40ae0; end: 101d40b63; -[_TtC37MemoriesAutosaveMigrationServicesImpl24MemoriesAutosaveMigrator updateWithAutosaveForGalleryStory:] */

void FUN_101d40ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c57a34(uStack_38,param_2,param_3);
  func_0x000107c61170(uVar1);
  func_0x0001000d224c(&uStack_38);
  func_0x000107c54d58(uStack_38,param_2,param_3);
  func_0x000107c61170(uStack_38);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 101d40b64; end: 101d40be7; -[_TtC37MemoriesAutosaveMigrationServicesImpl24MemoriesAutosaveMigrator updateWithAutosaveForPublicStory:] */

void FUN_101d40b64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c54d58(uStack_38,param_2,param_3);
  func_0x000107c61170(uVar1);
  func_0x0001000d224c(&uStack_38);
  func_0x000107c57a34(uStack_38,param_2,param_3);
  func_0x000107c61170(uStack_38);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 101d40be8; end: 101d40beb; -[_TtC37MemoriesAutosaveMigrationServicesImpl24MemoriesAutosaveMigrator galleryStoryAutosaveSettingValue] */

uint FUN_101d40be8(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_101d40a08();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 101d40bec; end: 101d40bef; -[_TtC37MemoriesAutosaveMigrationServicesImpl24MemoriesAutosaveMigrator publicStoryAutosaveSettingValue] */

uint FUN_101d40bec(undefined8 param_1)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1;
  func_0x000107c6157c();
  uVar1 = (uint)uVar2;
  FUN_101d40a08();
  func_0x000107c61574(param_1);
  return uVar1 & 1;
}



/* Entry: 101d40bf0; end: 101d40ccb; -[SCCloudSyncStatusEventBus init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d40bf0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x0001000285a8(0x112e27b98,&UNK_10da10060);
  func_0x000107c613fc();
  uVar2 = 1;
  func_0x00010008747c();
  *(undefined8 *)(param_1 + _DAT_112e27ba0) = uVar2;
  func_0x000103bcd104(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar2);
  uVar3 = 0;
  func_0x000103bccd80(0,0,1,0);
  uStack_48 = uVar3;
  func_0x000100087c34(&uStack_48);
  func_0x000107c61170(uVar3);
  func_0x000107c61574(uVar2);
  lStack_58 = param_1;
  lStack_50 = lVar1;
  func_0x000107c61154(&lStack_58,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101d40ccc; end: 101d40cff;  */

void FUN_101d40ccc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101d40d00; end: 101d40d0f; -[SCCloudSyncStatusEventBus .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d40d00(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e27ba0));
  return;
}



/* Entry: 101d40d10; end: 101d40d7b; -[SCCloudSyncStatusEventBus publishCloudSyncStatus:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d40d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_38;
  
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000100087c34(&uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101d40d7c; end: 101d40d8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d40d7c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(*unaff_x20 + _DAT_112e27ba0));
  return;
}



/* Entry: 101d40d90; end: 101d40dcf; -[SCCloudSyncStatusEventBus cloudSyncStatusSCObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d40d90(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x0001004575f0();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101d40dd0; end: 101d40e3f;  */

undefined8 FUN_101d40dd0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  func_0x000100786410(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return uVar1;
}



/* Entry: 101d40e40; end: 101d40ea7;  */

void FUN_101d40e40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000100786a24();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 101d40ea8; end: 101d40f63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d40ea8(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_4 + _DAT_1130806b8);
  lVar1 = 0;
  func_0x000101d4115c();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = param_3;
  *(undefined8 *)(lVar2 + 0x20) = uVar3;
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c();
  func_0x0001000c6580();
  *(undefined8 *)(lVar2 + 0x28) = param_3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11047a068;
  *param_1 = lVar2;
  return;
}



/* Entry: 101d40f64; end: 101d40f97;  */

/* WARNING: Possible PIC construction at 0x000101d40f80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d40f84) */

void FUN_101d40f64(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101d40f98; end: 101d40ffb;  */

void FUN_101d40f98(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d40ffc; end: 101d4107f;  */

void FUN_101d40ffc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x0001002ad988(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000100786fdc(uVar4,uVar1,uVar3,uVar2);
  *param_1 = uVar4;
  return;
}



/* Entry: 101d41080; end: 101d410e7;  */

void FUN_101d41080(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101d410e8; end: 101d4110b;  */

undefined8 FUN_101d410e8(void)

{
  undefined8 uStack_18;
  
  func_0x0001000d224c(&uStack_18);
  return uStack_18;
}



/* Entry: 101d4110c; end: 101d4111f;  */

void FUN_101d4110c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101d41120; end: 101d4117b;  */

void FUN_101d41120(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d4117c; end: 101d413d3;  */

undefined8 FUN_101d4117c(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long unaff_x20;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uStack_90;
  long *aplStack_88 [3];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
  func_0x000107c613fc();
  lVar1 = 1;
  func_0x00010095c380();
  func_0x0001000d224c(aplStack_88);
  func_0x0001000d224c(aplStack_88);
  func_0x0001000a8868(aplStack_88,uStack_70);
  uVar8 = uStack_70;
  (**(code **)(lStack_68 + 8))(uStack_70,lStack_68);
  func_0x0001000d224c(&uStack_90);
  uVar2 = uStack_90;
  func_0x000100471e0c(uStack_90,0);
  func_0x000107c61574(uVar8);
  func_0x000107c61170(uStack_90);
  func_0x0001000834e4(aplStack_88);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c6157c(uVar8);
  pcVar9 = FUN_101d41580;
  func_0x0001000c0ebc(FUN_101d41580,uVar8);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar8);
  uVar8 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(pcVar9);
  plVar3 = aplStack_88[0];
  func_0x000107c61174();
  plVar4 = plVar3;
  func_0x000104883b8c(param_1);
  func_0x000107c61574(uVar8);
  func_0x000107c61170(plVar3);
  puVar5 = &UNK_11047a088;
  func_0x000107c613fc(&UNK_11047a088,0x20,7);
  *(long **)(puVar5 + 0x10) = plVar3;
  *(long *)(puVar5 + 0x18) = lVar1;
  puVar6 = &UNK_11047a0b0;
  func_0x000107c613fc(&UNK_11047a0b0,0x20,7);
  *(long **)(puVar6 + 0x10) = plVar3;
  *(long *)(puVar6 + 0x18) = lVar1;
  pcVar9 = *(code **)(*plVar4 + 0x70);
  func_0x000107c61174(plVar3);
  func_0x000107c61580(lVar1,2);
  func_0x000107c61174(plVar3);
  uVar8 = 0x101d41588;
  puVar7 = puVar5;
  (*pcVar9)(0x101d41588,puVar5,FUN_101d415bc,puVar6);
  func_0x000107c61574(plVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar6);
  uVar2 = uVar8;
  func_0x000107c614f0(uVar8);
  (**(code **)(puVar7 + 0x10))(*(undefined8 *)(unaff_x20 + 0x28),uVar2,puVar7);
  func_0x000107c615e8(uVar8);
  func_0x000107c61170(plVar3);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c6157c(uVar8);
  func_0x000107c61574(lVar1);
  return uVar8;
}



/* Entry: 101d413d4; end: 101d4155f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101d413d4(long *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 auStack_40 [2];
  
  lVar4 = *param_1;
  func_0x0001000d224c(auStack_40);
  uVar1 = auStack_40[0];
  func_0x000107c5adf4();
  func_0x000107c615e8(auStack_40[0]);
  if ((int)uVar1 == 0) {
    uVar2 = (uint)*(byte *)(lVar4 + _DAT_112ff4ce8);
  }
  else {
    uVar3 = *(ulong *)(lVar4 + _DAT_112ff4cd8);
    uVar2 = 0x9e >> (ulong)((uint)uVar3 & 0x1f);
    if (9 < uVar3) {
      uVar2 = 1;
    }
  }
  return uVar2 & 1;
}



/* Entry: 101d41560; end: 101d4157f;  */

void FUN_101d41560(void)

{
  FUN_101d4117c();
  return;
}



/* Entry: 101d41580; end: 101d4158f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101d41580(long *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 auStack_40 [2];
  
  lVar4 = *param_1;
  func_0x0001000d224c(auStack_40);
  uVar1 = auStack_40[0];
  func_0x000107c5adf4();
  func_0x000107c615e8(auStack_40[0]);
  if ((int)uVar1 == 0) {
    uVar2 = (uint)*(byte *)(lVar4 + _DAT_112ff4ce8);
  }
  else {
    uVar3 = *(ulong *)(lVar4 + _DAT_112ff4cd8);
    uVar2 = 0x9e >> (ulong)((uint)uVar3 & 0x1f);
    if (9 < uVar3) {
      uVar2 = 1;
    }
  }
  return uVar2 & 1;
}



/* Entry: 101d41590; end: 101d415bb;  */

void FUN_101d41590(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d415bc; end: 101d415c3;  */

void FUN_101d415bc(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  
  puVar1 = (undefined1 *)0x0;
  func_0x000100964acc(0,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100bc7fa4();
  FUN_101d415c4();
  puVar2 = &UNK_1106e3518;
  func_0x000107c613f8(&UNK_1106e3518,puVar1,0,0);
  *puVar1 = 0;
  func_0x00010488ade0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(puVar2);
  return;
}



/* Entry: 101d415c4; end: 101d41603;  */

void FUN_101d415c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e27d98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc61cc8;
  func_0x000107c61520(&UNK_10dc61cc8,&UNK_1106e3518);
  puRam0000000112e27d98 = puVar1;
  return;
}



/* Entry: 101d41604; end: 101d416ef;  */

undefined8 FUN_101d41604(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = &UNK_11047a188;
  func_0x000107c613fc(&UNK_11047a188,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  uVar2 = 0x60;
  func_0x0001009548b0(0x60,0,0x48,4,0,0,&UNK_10da10188,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  return unaff_x20;
}



/* Entry: 101d416f0; end: 101d41777;  */

void FUN_101d416f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  lVar1 = 0;
  func_0x000107c5f7fc();
  *(long *)(unaff_x22 + 0x58) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  lVar1 = 0;
  func_0x000107c5f824();
  *(long *)(unaff_x22 + 0x70) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x80) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d41778,0,0);
  return;
}



/* Entry: 101d41778; end: 101d41953;  */

void FUN_101d41778(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x22 + 0x48)) + 0x58))();
  lVar7 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar7 != 0) {
    lVar8 = lVar7;
    func_0x000107c4f7c0();
    func_0x000107c61180();
    func_0x000107c615e8(lVar7);
    if (lVar8 != 0) {
      lVar1 = *(long *)(unaff_x22 + 0x78);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
      lVar6 = *(long *)(unaff_x22 + 0x60);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x50);
      puVar9 = &UNK_11047a1f0;
      func_0x000107c613fc(&UNK_11047a1f0,0x18,7);
      *(undefined8 *)(puVar9 + 0x10) = uVar11;
      *(code **)(unaff_x22 + 0x30) = FUN_101d41a4c;
      *(undefined **)(unaff_x22 + 0x38) = puVar9;
      *(undefined **)(unaff_x22 + 0x10) = PTR___NSConcreteStackBlock_11034bd00;
      *(undefined8 *)(unaff_x22 + 0x18) = 0x42000000;
      *(undefined **)(unaff_x22 + 0x20) = &UNK_1000b0c7c;
      *(undefined **)(unaff_x22 + 0x28) = &UNK_11047a208;
      lVar7 = unaff_x22 + 0x10;
      func_0x000107c60bc4(lVar7);
      func_0x000107c61174(uVar11);
      func_0x000107c5f808(uVar4);
      *(undefined **)(unaff_x22 + 0x40) = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001001c7eec();
      uVar12 = 0x112d4af90;
      func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
      uVar10 = uVar12;
      func_0x0001001c7f30();
      func_0x000107c60264(uVar2,unaff_x22 + 0x40,uVar12,uVar10,uVar3,uVar11);
      func_0x000107c5ffe8(0,uVar4,uVar2,lVar7);
      func_0x000107c61170(lVar8);
      func_0x000107c60bd0(lVar7);
      (**(code **)(lVar6 + 8))(uVar2,uVar3);
      (**(code **)(lVar1 + 8))(uVar4,uVar5);
      func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x38));
    }
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x80));
  func_0x000107c615c0(uVar12);
                    /* WARNING: Could not recover jumptable at 0x000101d41950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d41954; end: 101d419a3;  */

void FUN_101d41954(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101d41aac;
  plVar4[9] = lVar2;
  plVar4[10] = lVar1;
  lVar2 = 0;
  func_0x000107c5f7fc();
  plVar4[0xb] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0xc] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xd] = uVar3;
  lVar2 = 0;
  func_0x000107c5f824();
  plVar4[0xe] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0xf] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x10] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d41778,0,0);
  return;
}



/* Entry: 101d419a4; end: 101d419f3;  */

void FUN_101d419a4(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0x90;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101d419f4;
  plVar4[9] = lVar2;
  plVar4[10] = lVar1;
  lVar2 = 0;
  func_0x000107c5f7fc();
  plVar4[0xb] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0xc] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0xd] = uVar3;
  lVar2 = 0;
  func_0x000107c5f824();
  plVar4[0xe] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0xf] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x10] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d41778,0,0);
  return;
}



/* Entry: 101d419f4; end: 101d41a2f;  */

void FUN_101d419f4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101d41a2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d41a30; end: 101d41a4b;  */

void FUN_101d41a30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d41a4c; end: 101d41a8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d41a4c(void)

{
  undefined8 uStack_28;
  
  func_0x0001000d224c(&uStack_28);
  func_0x000107c615e8(uStack_28);
  return;
}



/* Entry: 101d41a90; end: 101d41aaf;  */

void FUN_101d41a90(long param_1,long param_2)

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



/* Entry: 101d41ab0; end: 101d41b0b; -[_TtC34MemoriesCSAMKeyIvStoreServicesImpl22MemoriesCSAMKeyIvStore init] */

void FUN_101d41ab0(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemoriesCSAMKeyIvStoreServicesImpl.MemoriesCSAMKeyIvStore",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d41adc);
  (*pcVar1)();
}



/* Entry: 101d41b0c; end: 101d41b1b; -[_TtC34MemoriesCSAMKeyIvStoreServicesImpl22MemoriesCSAMKeyIvStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d41b0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e27e38));
  return;
}



/* Entry: 101d41b1c; end: 101d41b3b;  */

void FUN_101d41b1c(void)

{
  func_0x000107c61168(&PTR_PTR_112802910);
  return;
}



/* Entry: 101d41b3c; end: 101d41d2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d41b3c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_70;
  undefined8 uStack_68;
  
  lStack_70 = param_5;
  uStack_68 = param_6;
  func_0x000107c61434(param_6);
  func_0x000107c5fb78(0x2d4d4153432d,0xe600000000000000);
  uVar2 = uStack_68;
  func_0x000107c61434(uStack_68);
  func_0x000107c5fb78(0x79656b,0xe300000000000000);
  func_0x000107c6142c(uVar2);
  uVar2 = uStack_68;
  lVar3 = lStack_70;
  func_0x0001000d224c(&lStack_70);
  lVar1 = lStack_70;
  if (lStack_70 == 0) {
    func_0x000107c6142c(uVar2);
  }
  else {
    uVar4 = 0;
    if (param_2 != 0) {
      func_0x000107c5fadc(param_1,param_2);
      uVar4 = param_1;
    }
    func_0x000107c5fadc(lVar3,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c56bcc(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(lVar3);
  }
  lStack_70 = param_5;
  uStack_68 = param_6;
  func_0x000107c61434(param_6);
  func_0x000107c5fb78(0x2d4d4153432d,0xe600000000000000);
  uVar2 = uStack_68;
  func_0x000107c61434(uStack_68);
  func_0x000107c5fb78(0x7669,0xe200000000000000);
  func_0x000107c6142c(uVar2);
  uVar2 = uStack_68;
  lVar3 = lStack_70;
  func_0x0001000d224c(&lStack_70);
  lVar1 = lStack_70;
  if (lStack_70 == 0) {
    func_0x000107c6142c(uVar2);
  }
  else {
    uVar4 = 0;
    if (param_4 != 0) {
      func_0x000107c5fadc(param_3,param_4);
      uVar4 = param_3;
    }
    func_0x000107c5fadc(lVar3,uVar2);
    func_0x000107c6142c(uVar2);
    func_0x000107c56bcc(lVar1);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 101d41d2c; end: 101d42047; -[_TtC34MemoriesCSAMKeyIvStoreServicesImpl22MemoriesCSAMKeyIvStore saveKey:iv:forId:] */

/* WARNING: Possible PIC construction at 0x000101d41dd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d41dd4) */

void FUN_101d41d2c(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
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
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
    uVar2 = param_2;
  }
  func_0x000107c5faec(param_5);
  func_0x000107c61174(param_1);
  FUN_101d41b3c(param_3,uVar1,param_4,uVar2,param_5,param_2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101d42048; end: 101d42067;  */

void FUN_101d42048(void)

{
  func_0x000101d41df8();
  return;
}



/* Entry: 101d42068; end: 101d42077; -[_TtC34MemoriesCSAMKeyIvStoreServicesImpl22MemoriesCSAMKeyIvStore fetchKeyForId:] */

void FUN_101d42068(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  lVar1 = param_2;
  FUN_101d42078(param_3,param_2,0x79656b,0xe300000000000000);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  if (lVar1 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101d42078; end: 101d421bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_101d42078(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auVar6 [16];
  long lStack_50;
  undefined8 uStack_48;
  
  lStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000107c61434(param_2);
  func_0x000107c5fb78(0x2d4d4153432d,0xe600000000000000);
  uVar2 = uStack_48;
  func_0x000107c61434(uStack_48);
  func_0x000107c5fb78(param_3,param_4);
  func_0x000107c6142c(uVar2);
  uVar2 = uStack_48;
  lVar4 = lStack_50;
  func_0x0001000d224c(&lStack_50);
  lVar1 = lStack_50;
  if (lStack_50 == 0) {
    func_0x000107c6142c(uVar2);
  }
  else {
    func_0x000107c5fadc(lVar4,uVar2);
    func_0x000107c6142c(uVar2);
    lVar3 = lVar1;
    func_0x000107c4d9c0();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    func_0x000107c61170(lVar4);
    if (lVar3 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x000107c61168(PTR__OBJC_CLASS___NSString_1126ae4d0);
      lVar4 = lVar3;
      func_0x000107c6148c(lVar3,puVar5);
      if (lVar4 != 0) {
        func_0x000107c5faec();
        func_0x000107c615e8(lVar3);
        goto LAB_101d421a4;
      }
      func_0x000107c615e8(lVar3);
    }
  }
  lVar4 = 0;
  puVar5 = (undefined *)0x0;
LAB_101d421a4:
  auVar6._8_8_ = puVar5;
  auVar6._0_8_ = lVar4;
  return auVar6;
}



/* Entry: 101d421bc; end: 101d421c7; -[_TtC34MemoriesCSAMKeyIvStoreServicesImpl22MemoriesCSAMKeyIvStore fetchIvForId:] */

void FUN_101d421bc(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  lVar1 = param_2;
  FUN_101d42078(param_3,param_2,0x7669,0xe200000000000000);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  if (lVar1 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101d421c8; end: 101d42307;  */

void FUN_101d421c8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  lVar1 = param_2;
  FUN_101d42078(param_3,param_2,param_4,param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  if (lVar1 == 0) {
    param_3 = 0;
  }
  else {
    func_0x000107c5fadc(param_3,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 101d42308; end: 101d42367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d42308(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lStack_30;
  long lStack_28;
  
  lVar2 = 0;
  FUN_101d41b1c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e27e38) = param_1;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c6157c(param_1);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 101d42368; end: 101d42377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d42368(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 unaff_x20;
  long lStack_30;
  long lStack_28;
  
  lVar2 = 0;
  FUN_101d41b1c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e27e38) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = lVar3;
  lStack_28 = lVar2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 101d42378; end: 101d423cb;  */

void FUN_101d42378(long *param_1,long param_2)

{
  long lVar1;
  undefined **ppuVar2;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 == 0) {
    ppuVar2 = (undefined **)0x0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    FUN_101d41b1c();
    ppuVar2 = &PTR_DAT_11047a2b8;
  }
  *param_1 = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)ppuVar2;
  return;
}



/* Entry: 101d423cc; end: 101d423d3;  */

void FUN_101d423cc(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 == 0) {
    ppuVar3 = (undefined **)0x0;
    param_1[1] = 0;
    param_1[2] = 0;
    lVar1 = 0;
  }
  else {
    lVar1 = 0;
    FUN_101d41b1c();
    ppuVar3 = &PTR_DAT_11047a2b8;
  }
  *param_1 = lVar2;
  param_1[3] = lVar1;
  param_1[4] = (long)ppuVar3;
  return;
}



/* Entry: 101d423d4; end: 101d423ef;  */

void FUN_101d423d4(void)

{
  long unaff_x20;
  
  func_0x000107c5c734(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101d423f0; end: 101d42427;  */

void FUN_101d423f0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101d42428; end: 101d4242f;  */

void FUN_101d42428(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d42430; end: 101d42453;  */

void FUN_101d42430(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d42454; end: 101d42477;  */

void FUN_101d42454(undefined8 *param_1,undefined8 param_2)

{
  func_0x000100785ba0();
  *param_1 = param_2;
  return;
}



/* Entry: 101d42478; end: 101d4248f;  */

void FUN_101d42478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101d42490; end: 101d42ee3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d42490(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8,long param_9,undefined8 param_10,
                  long param_11,long param_12,undefined8 param_13,long param_14,undefined8 param_15,
                  undefined8 param_16,undefined8 param_17,long param_18,undefined8 param_19,
                  undefined8 param_20,undefined8 param_21,undefined8 param_22,undefined8 param_23,
                  undefined8 param_24)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  func_0x000107c613fc();
  uVar14 = *(undefined8 *)(param_7 + _DAT_112fd91f8);
  uVar7 = *(undefined8 *)(param_6 + _DAT_112fd9258);
  uVar9 = *(undefined8 *)(param_4 + _DAT_112fd9288);
  uVar11 = *(undefined8 *)(param_5 + _DAT_112fd92b8);
  uVar10 = *(undefined8 *)(param_3 + _DAT_112fd9228);
  uVar12 = *(undefined8 *)(param_9 + _DAT_112fd9318);
  uVar8 = *(undefined8 *)(param_12 + _DAT_112e5c928);
  uVar2 = *(undefined8 *)(param_18 + _DAT_11303f608);
  uVar13 = *(undefined8 *)(param_14 + _DAT_1130806b8);
  func_0x000107c6157c();
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(uVar12);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar13);
  lVar3 = param_11;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (lVar3 != 0) {
    uVar4 = 0;
    func_0x000101d46610(0);
    func_0x000107c610f8();
    func_0x000101d465d4(lVar3,uVar4);
    pcVar1 = FUN_101d42ee4;
    func_0x0001000cb480(FUN_101d42ee4,0,PTR___sSiN_11034deb0);
    puVar5 = &UNK_11047a478;
    func_0x000107c613fc(&UNK_11047a478,200,7);
    *(undefined8 *)(puVar5 + 0x10) = param_10;
    *(undefined8 *)(puVar5 + 0x18) = param_16;
    *(undefined8 *)(puVar5 + 0x20) = uVar2;
    *(undefined8 *)(puVar5 + 0x28) = param_17;
    *(undefined8 *)(puVar5 + 0x30) = param_2;
    *(undefined8 *)(puVar5 + 0x38) = param_13;
    *(undefined8 *)(puVar5 + 0x40) = param_15;
    *(undefined8 *)(puVar5 + 0x48) = param_8;
    *(undefined8 *)(puVar5 + 0x50) = param_19;
    *(undefined8 *)(puVar5 + 0x58) = uVar14;
    *(long *)(puVar5 + 0x60) = lVar3;
    *(undefined8 *)(puVar5 + 0x68) = uVar8;
    *(undefined8 *)(puVar5 + 0x70) = uVar7;
    *(code **)(puVar5 + 0x78) = pcVar1;
    *(undefined8 *)(puVar5 + 0x80) = uVar10;
    *(undefined8 *)(puVar5 + 0x88) = uVar9;
    *(undefined8 *)(puVar5 + 0x90) = uVar11;
    *(undefined8 *)(puVar5 + 0x98) = uVar12;
    *(undefined8 *)(puVar5 + 0xa0) = param_22;
    *(undefined8 *)(puVar5 + 0xa8) = param_21;
    *(undefined8 *)(puVar5 + 0xb0) = param_20;
    *(undefined8 *)(puVar5 + 0xb8) = param_23;
    *(undefined8 *)(puVar5 + 0xc0) = param_24;
    func_0x0001000285a8(0x112e27f40,&UNK_10da10290);
    func_0x000107c613fc();
    func_0x000107c6157c(uVar14);
    func_0x000107c6157c(uVar7);
    func_0x000107c6157c(uVar9);
    func_0x000107c6157c(uVar11);
    func_0x000107c6157c(uVar10);
    func_0x000107c6157c(uVar12);
    func_0x000107c6157c(uVar8);
    func_0x000107c6157c(uVar2);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(param_2);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61174(param_8);
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c6157c(pcVar1);
    func_0x000107c61174(param_22);
    func_0x000107c61174(param_21);
    func_0x000107c61174(param_20);
    func_0x000107c61174(param_23);
    func_0x000107c615f0(param_24);
    pcVar6 = FUN_101d436f8;
    func_0x0001000bdd8c(FUN_101d436f8,puVar5);
    uVar4 = 0;
    func_0x0001002c7760(0);
    func_0x000107c610f8();
    func_0x000101d439f8(pcVar6,uVar4);
    func_0x000107c61170(param_7);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_9);
    func_0x000107c61170(param_12);
    func_0x000107c61170(param_18);
    func_0x000107c61170(param_14);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_8);
    func_0x000107c61170(param_10);
    func_0x000107c61170(param_11);
    func_0x000107c61170(param_13);
    func_0x000107c61170(param_15);
    func_0x000107c61170(param_16);
    func_0x000107c61170(param_17);
    func_0x000107c61170(param_19);
    func_0x000107c61170(param_20);
    func_0x000107c61170(param_21);
    func_0x000107c61170(param_22);
    func_0x000107c61170(param_23);
    func_0x000107c615e8(param_24);
    func_0x000107c61574(uVar13);
    func_0x000107c61574(uVar12);
    func_0x000107c61574(uVar11);
    func_0x000107c61574(uVar9);
    func_0x000107c61574(uVar10);
    func_0x000107c61574(pcVar1);
    func_0x000107c61574(uVar7);
    func_0x000107c61574(uVar8);
    func_0x000107c61170(lVar3);
    func_0x000107c61574(uVar14);
    func_0x000107c61574(uVar2);
    *(code **)(unaff_x20 + 0x10) = pcVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d429d0);
  (*pcVar1)();
}



/* Entry: 101d42ee4; end: 101d42f0b;  */

void FUN_101d42ee4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c5c6a0();
  *param_1 = uVar1;
  return;
}



/* Entry: 101d42f0c; end: 101d436f7;  */

/* WARNING: Removing unreachable block (ram,0x000101d43088) */
/* WARNING: Removing unreachable block (ram,0x000101d43220) */
/* WARNING: Removing unreachable block (ram,0x000101d42fa8) */
/* WARNING: Removing unreachable block (ram,0x000101d430b8) */
/* WARNING: Removing unreachable block (ram,0x000101d430c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d42f0c(undefined8 *param_1,undefined *param_2,undefined *param_3,undefined *param_4,
                  long param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9,
                  undefined8 param_10,undefined4 param_11,undefined4 param_12,undefined8 param_13)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  double dVar18;
  undefined8 in_stack_00000070;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 auStack_80 [2];
  
  func_0x000107c4d814();
  func_0x000107c61180();
  puVar7 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  puStack_c0 = puVar7;
  func_0x0001000285a8(0x112e28008,&UNK_10da10318);
  func_0x0001048da110(auStack_80);
  func_0x000107c615e8(puVar7);
  uVar2 = auStack_80[0];
  uVar4 = auStack_80[0];
  func_0x000107c4c1dc();
  func_0x000107c61180();
  func_0x000107c615e8(uVar2);
  func_0x000107c3df5c();
  func_0x000107c61180();
  puVar7 = param_3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  puStack_c0 = puVar7;
  func_0x0001000285a8(0x112e28010,&UNK_10da10320);
  func_0x0001048da110(auStack_80);
  func_0x000107c615e8(puVar7);
  uVar2 = auStack_80[0];
  puStack_c0 = param_4;
  func_0x0001000285a8(0x112e28018,&UNK_10da10328);
  func_0x0001048da110(auStack_80);
  uVar3 = auStack_80[0];
  uVar16 = *(undefined8 *)(param_5 + _DAT_11305b998);
  uVar17 = *(undefined8 *)(param_6 + _DAT_113080ad0);
  func_0x000107c42eac();
  func_0x000107c61180();
  puVar5 = (ulong *)PTR__OBJC_CLASS___UIDevice_1126aeb10;
  func_0x000107c61168();
  func_0x000107c40efc();
  func_0x000107c61180();
  puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000101d485b0(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar17);
  uVar6 = param_7;
  func_0x000107c61174();
  func_0x000101d48540(puVar5,puVar7,uVar17,param_7);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar5) + 0x98))();
  puVar7 = *(undefined **)(param_8 + _DAT_113083898);
  func_0x000107c5c734();
  func_0x000107c61180();
  puStack_c0 = puVar7;
  func_0x0001000285a8(0x112e28020,&UNK_10da10330);
  func_0x0001048da110(auStack_80);
  func_0x000107c615e8(puVar7);
  uVar17 = auStack_80[0];
  func_0x0001000d224c(&puStack_c0);
  puVar1 = puStack_c0;
  puVar7 = &UNK_11047a4c8;
  func_0x000107c613fc(&UNK_11047a4c8,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = param_10;
  puVar8 = PTR_PTR_1126b1678;
  func_0x000107c610f8();
  pcStack_a0 = FUN_101d438e0;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_101016bdc;
  puStack_a8 = &UNK_11047a4e0;
  ppuVar9 = &puStack_c0;
  puStack_98 = puVar7;
  func_0x000107c60bc4(ppuVar9);
  func_0x000107c61174(param_10);
  func_0x000107c46b38();
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61574(puStack_98);
  uVar10 = 0;
  FUN_101d43964();
  func_0x000107c615f0(uVar17);
  func_0x0001000d224c(&puStack_c0);
  puVar7 = puStack_c0;
  func_0x000107c615f0(puVar1);
  func_0x0001000d224c(auStack_80);
  func_0x0001000d224c(&uStack_c8);
  uVar11 = 0;
  FUN_101d489f8();
  func_0x000107c610f8();
  func_0x000107c615f0(uVar4);
  func_0x000107c61174();
  func_0x000107c453e4();
  uVar12 = uVar11;
  func_0x0001000d224c(&uStack_d0);
  func_0x0001000d224c(&lStack_d8);
  dVar18 = (double)lStack_d8;
  func_0x0001000d224c(&lStack_d8);
  func_0x0001000d224c(&uStack_e0);
  func_0x0001000d224c(&uStack_e8);
  FUN_1022a68cc();
  uVar13 = uVar12;
  FUN_1022a68cc();
  uVar14 = uVar13;
  FUN_1022a68cc();
  uVar15 = uVar14;
  FUN_1022a68cc();
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_f0);
  func_0x000107c614e8();
  func_0x000107c615f0(in_stack_00000070);
  func_0x000107c61174(param_13);
  func_0x000107c610f8();
  func_0x000107c459ec(dVar18);
  func_0x000107c615e8(uVar17);
  func_0x000107c615e8(puVar7);
  func_0x000107c61170(param_13);
  func_0x000107c615e8(puVar1);
  func_0x000107c615e8(auStack_80[0]);
  func_0x000107c615e8(uStack_c8);
  func_0x000107c615e8(uVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c615e8(uStack_d0);
  func_0x000107c615e8(lStack_d8);
  func_0x000107c615e8(uStack_e0);
  func_0x000107c615e8(uStack_e8);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(puVar8);
  func_0x000107c615e8(uStack_f0);
  func_0x000107c615e8(in_stack_00000070);
  FUN_101d474d0(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar16);
  FUN_101d47418();
  func_0x000107c56008(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c615f0(uVar2);
  func_0x000107c5283c(uVar10);
  func_0x000107c61574(uVar3);
  func_0x000107c615ec(uVar2,2);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar5);
  func_0x000107c615e8(uVar4);
  func_0x000107c615e8(puVar1);
  func_0x000107c615e8(uVar17);
  func_0x000107c61170(uVar6);
  *param_1 = uVar10;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 101d436f8; end: 101d436fb;  */

void FUN_101d436f8(void)

{
  long unaff_x20;
  
  FUN_101d42f0c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0));
  return;
}



/* Entry: 101d436fc; end: 101d43823;  */

void FUN_101d436fc(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x88));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x90));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x98));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xa8));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb0));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0xb8));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0xc0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d43824; end: 101d43833;  */

void FUN_101d43824(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d43834; end: 101d438d3;  */

void FUN_101d43834(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d438d4; end: 101d438df;  */

void FUN_101d438d4(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 101d438e0; end: 101d43947;  */

undefined8 FUN_101d438e0(void)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000102758434(auStack_58);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar1 = uStack_40;
  (**(code **)(lStack_38 + 8))(uStack_40,lStack_38);
  func_0x0001000834e4(auStack_58);
  return uVar1;
}



/* Entry: 101d43948; end: 101d43963;  */

void FUN_101d43948(long param_1,long param_2)

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



/* Entry: 101d43964; end: 101d439a7;  */

void FUN_101d43964(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e28028 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a9468;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112e28028 = puVar1;
  return;
}



/* Entry: 101d439a8; end: 101d439ab;  */

void FUN_101d439a8(void)

{
  long unaff_x20;
  
  FUN_101d42f0c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0));
  return;
}



/* Entry: 101d439ac; end: 101d43a43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d439ac(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e28030) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101d43a44; end: 101d43a77;  */

void FUN_101d43a44(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101d43a78; end: 101d43a87; -[MemoriesValdiBackupServiceDependenciesServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d43a78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e28030));
  return;
}



/* Entry: 101d43a88; end: 101d43b1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d43a88(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e28060) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101d43b20; end: 101d43b53;  */

void FUN_101d43b20(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101d43b54; end: 101d43b63; -[MemoriesValdiSnapDocClaimingServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d43b54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e28060));
  return;
}



/* Entry: 101d43b64; end: 101d43b9f; -[_TtC34SCMemPlatBackupFlipperServicesImpl15InactiveFlipper init] */

void FUN_101d43b64(undefined8 param_1)

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



/* Entry: 101d43ba0; end: 101d43bf3;  */

void FUN_101d43ba0(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101d43bf4; end: 101d43bf7; -[_TtC34SCMemPlatBackupFlipperServicesImpl15InactiveFlipper logMemoriesDataWithEventName:params:] */

void FUN_101d43bf4(void)

{
  return;
}



/* Entry: 101d43bf8; end: 101d43c57; -[_TtC34SCMemPlatBackupFlipperServicesImpl27MemPlatBackupFlipperService init] */

void FUN_101d43bf8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemPlatBackupFlipperServicesImpl.MemPlatBackupFlipperService",0x3e,"init()"
                      ,6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d43c24);
  (*pcVar1)();
}



/* Entry: 101d43c58; end: 101d43c67; -[_TtC34SCMemPlatBackupFlipperServicesImpl27MemPlatBackupFlipperService .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d43c58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e280b8));
  return;
}



/* Entry: 101d43c68; end: 101d43c87;  */

void FUN_101d43c68(void)

{
  func_0x000107c61168(&PTR_PTR_112802c10);
  return;
}



/* Entry: 101d43c88; end: 101d43e57;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d43c88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  puStack_88 = PTR___sSSN_11034da80;
  uStack_a0 = param_1;
  uStack_98 = param_2;
  func_0x000100102924(&uStack_a0,&uStack_80);
  func_0x000107c61434(param_3);
  func_0x000107c61434(param_2);
  uVar1 = param_3;
  func_0x000107c61558(param_3);
  uStack_a0 = param_3;
  func_0x0001001029e8(&uStack_80,0x4520616d6f636154,0xec000000746e6576,uVar1);
  uVar1 = uStack_a0;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112e280b8);
  uVar2 = param_1;
  func_0x000107c5fadc(param_1,param_2);
  uVar3 = uVar1;
  func_0x00010018cc3c(uVar1);
  uVar4 = uVar3;
  func_0x000107c5f9dc();
  func_0x000107c6142c(uVar3);
  func_0x000107c4e13c(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  uVar2 = uVar1;
  func_0x00010018cc3c(uVar1);
  uVar3 = uVar2;
  func_0x000107c5f9dc();
  func_0x000107c6142c(uVar2);
  uStack_80 = 0x4520616d6f636154;
  uStack_78 = 0xee00203a746e6576;
  func_0x000107c5fb78(param_1,param_2);
  uVar2 = uStack_78;
  uVar4 = uStack_80;
  func_0x000107c5fadc(uStack_80,uStack_78);
  func_0x000107c6142c(uVar2);
  func_0x000107c2c4c0(0x40,uVar3,uVar4);
  func_0x000107c6142c(uVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101d43e58; end: 101d43ee7; -[_TtC34SCMemPlatBackupFlipperServicesImpl27MemPlatBackupFlipperService logMemoriesDataWithEventName:params:] */

/* WARNING: Possible PIC construction at 0x000101d43ed0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d43ed4) */

void FUN_101d43e58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c5f9e8(param_4,PTR___sSSN_11034da80,PTR___sypN_11034f1a8 + 8,PTR___sSSSHsWP_11034da90
                     );
  func_0x000107c61174(param_1);
  FUN_101d43c88(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101d43ee8; end: 101d43ef3; -[_TtC34SCMemPlatBackupFlipperServicesImpl27MemPlatBackupFlipperService pushToValdiMarshaller:] */

void FUN_101d43ee8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000105f5fe80(param_3,param_1);
  func_0x000105f5fe68();
  func_0x000105f5fe60();
  func_0x000105f5fdfc();
  func_0x000105f5fe18();
  return;
}



/* Entry: 101d43ef4; end: 101d43f4f;  */

void FUN_101d43ef4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 101d43f50; end: 101d4406b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d43f50(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    func_0x0001000285a8(0x112e280e8,&UNK_10da10470);
    func_0x000107c613fc();
    pcVar3 = FUN_101d4406c;
    func_0x0001000bdd8c(FUN_101d4406c,0);
    func_0x00010028985c(0);
    func_0x000107c610f8();
    func_0x000103a6ac00(pcVar3);
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11309bf10);
    puVar1 = &UNK_11047a730;
    func_0x000107c613fc(&UNK_11047a730,0x18,7);
    *(undefined8 *)(puVar1 + 0x10) = uVar4;
    func_0x0001000285a8(0x112e280e8,&UNK_10da10470);
    func_0x000107c613fc();
    func_0x000107c615f4(uVar4,2);
    pcVar3 = FUN_101d4410c;
    func_0x0001000bdd8c(FUN_101d4410c,puVar1);
    uVar2 = 0;
    func_0x00010028985c(0);
    func_0x000107c610f8();
    func_0x000103a6ac00(pcVar3,uVar2);
    func_0x000107c615e8(uVar4);
  }
  return;
}



/* Entry: 101d4406c; end: 101d4409b;  */

void FUN_101d4406c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  func_0x000101d43bd4();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 101d4409c; end: 101d4410b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4409c(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = 0;
  FUN_101d43c68();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e280b8) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c615f0(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101d4410c; end: 101d4411b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4410c(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar4 = &lStack_40;
  lVar2 = 0;
  FUN_101d43c68();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e280b8) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c615f0(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101d4411c; end: 101d441b7;  */

void FUN_101d4411c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101d441b8; end: 101d442df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d441b8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    func_0x0001000285a8(0x112e280e8,&UNK_10da10470);
    func_0x000107c613fc();
    pcVar3 = FUN_101d4406c;
    func_0x0001000bdd8c(FUN_101d4406c,0);
    uVar2 = 0;
    func_0x00010028985c(0);
    func_0x000107c610f8();
    func_0x000103a6ac00(pcVar3,uVar2);
  }
  else {
    uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11309bf10);
    puVar1 = &UNK_11047a758;
    func_0x000107c613fc(&UNK_11047a758,0x18,7);
    *(undefined8 *)(puVar1 + 0x10) = uVar4;
    func_0x0001000285a8(0x112e280e8,&UNK_10da10470);
    func_0x000107c613fc();
    func_0x000107c615f4(uVar4,2);
    pcVar3 = FUN_101d442e0;
    func_0x0001000bdd8c(FUN_101d442e0,puVar1);
    uVar2 = 0;
    func_0x00010028985c(0);
    func_0x000107c610f8();
    func_0x000103a6ac00(pcVar3,uVar2);
    func_0x000107c615e8(uVar4);
  }
  *param_1 = pcVar3;
  return;
}



/* Entry: 101d442e0; end: 101d442e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d442e0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lStack_40;
  long lStack_38;
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  plVar4 = &lStack_40;
  lVar2 = 0;
  FUN_101d43c68();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar3 + _DAT_112e280b8) = uVar5;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c615f0(uVar5);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101d442e4; end: 101d4433f; -[_TtC40SCMemPlatBackupJobSchedulingServicesImpl15BackupScheduler init] */

void FUN_101d442e4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMemPlatBackupJobSchedulingServicesImpl.BackupScheduler",0x38,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101d44310);
  (*pcVar1)();
}



/* Entry: 101d44340; end: 101d44387; -[_TtC40SCMemPlatBackupJobSchedulingServicesImpl15BackupScheduler .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101d4435c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d44360) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d44340(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e281c0));
  return;
}



/* Entry: 101d44388; end: 101d443a7;  */

void FUN_101d44388(void)

{
  func_0x000107c61168(&PTR_PTR_112802cd0);
  return;
}



/* Entry: 101d443a8; end: 101d443b7;  */

void FUN_101d443a8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101d443b8; end: 101d44647;  */

/* WARNING: Removing unreachable block (ram,0x000101d44484) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101d443b8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  
  func_0x0001000285a8(0x112d69a88,&UNK_10d97b880);
  uVar9 = 0x18;
  func_0x000107c613fc();
  puVar1 = (undefined8 *)0x0;
  func_0x00010095c380();
  puVar2 = puVar1;
  func_0x0001000d224c(&puStack_98);
  puVar4 = puStack_98;
  if (puStack_98 == (undefined *)0x0) {
    FUN_101d44884();
    puVar4 = &UNK_11047a908;
    func_0x000107c613f8(&UNK_11047a908,puVar2,0,0);
    *puVar2 = 0;
    puVar2[1] = 0;
    func_0x00010488ade0();
    func_0x000107c614ac(puVar4);
    uVar9 = puVar1[2];
    uVar5 = uVar9;
    func_0x000107c6157c(uVar9);
    func_0x000103edf384();
    func_0x000107c61574(puVar1);
    func_0x000107c61574(uVar9);
  }
  else {
    uVar5 = param_1;
    func_0x000107c51f50(param_1);
    func_0x000107c61180();
    uVar3 = uVar5;
    func_0x000107c5ee30();
    func_0x000107c61170(uVar5);
    func_0x0001000d224c(&puStack_98);
    FUN_101d4550c();
    func_0x0001000834e4(&puStack_98);
    func_0x0001000d224c(&puStack_98);
    puVar6 = puStack_98;
    func_0x000107c4f7c0(puStack_98);
    func_0x000107c61180();
    func_0x000107c615e8(puStack_98);
    uVar5 = uVar3;
    func_0x000107c5ee20(uVar3,uVar9);
    puVar7 = &UNK_11047a828;
    func_0x000107c613fc(&UNK_11047a828,0x20,7);
    *(undefined8 **)(puVar7 + 0x10) = puVar1;
    *(undefined8 *)(puVar7 + 0x18) = param_1;
    pcStack_78 = FUN_101d448c4;
    puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_90 = 0x42000000;
    puStack_88 = &UNK_100ff4e14;
    puStack_80 = &UNK_11047a840;
    ppuVar8 = &puStack_98;
    puStack_70 = puVar7;
    func_0x000107c60bc4(ppuVar8);
    puVar7 = puStack_70;
    func_0x000107c6157c(puVar1);
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar7);
    func_0x000107c5c2c0(puVar4);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61170(param_1);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(uVar5);
    uVar10 = puVar1[2];
    uVar5 = uVar10;
    func_0x000107c6157c(uVar10);
    func_0x000103edf384();
    func_0x000107c61574(uVar10);
    func_0x00010006c090(uVar3,uVar9);
    func_0x000107c61574(puVar1);
    func_0x000107c615e8(puVar4);
  }
  return uVar5;
}



/* Entry: 101d44648; end: 101d44827;  */

/* WARNING: Possible PIC construction at 0x000101d446b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d447a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d446b4) */
/* WARNING: Removing unreachable block (ram,0x000101d446b8) */
/* WARNING: Removing unreachable block (ram,0x000101d446ec) */
/* WARNING: Removing unreachable block (ram,0x000101d446c8) */
/* WARNING: Removing unreachable block (ram,0x000101d446d8) */
/* WARNING: Removing unreachable block (ram,0x000101d447d8) */
/* WARNING: Removing unreachable block (ram,0x000101d446f4) */
/* WARNING: Removing unreachable block (ram,0x000101d446e0) */
/* WARNING: Removing unreachable block (ram,0x000101d447f8) */
/* WARNING: Removing unreachable block (ram,0x000101d447a8) */

void FUN_101d44648(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c614b0();
    func_0x000107c5ed2c(param_1);
    func_0x000107c3fcb0();
    func_0x000107c42210(param_1);
    func_0x000107c61180();
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  func_0x000100b60084();
  return;
}



/* Entry: 101d44828; end: 101d44883; -[_TtC40SCMemPlatBackupJobSchedulingServicesImpl15BackupScheduler scheduleBackupJobWithJobConfig:] */

void FUN_101d44828(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_101d443b8(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101d44884; end: 101d448c3;  */

void FUN_101d44884(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e28200 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10da10528;
  func_0x000107c61520(&UNK_10da10528,&UNK_11047a908);
  puRam0000000112e28200 = puVar1;
  return;
}



/* Entry: 101d448c4; end: 101d448e7;  */

/* WARNING: Possible PIC construction at 0x000101d446b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d447a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d446b4) */
/* WARNING: Removing unreachable block (ram,0x000101d446b8) */
/* WARNING: Removing unreachable block (ram,0x000101d446ec) */
/* WARNING: Removing unreachable block (ram,0x000101d446c8) */
/* WARNING: Removing unreachable block (ram,0x000101d446d8) */
/* WARNING: Removing unreachable block (ram,0x000101d447d8) */
/* WARNING: Removing unreachable block (ram,0x000101d446f4) */
/* WARNING: Removing unreachable block (ram,0x000101d446e0) */
/* WARNING: Removing unreachable block (ram,0x000101d447f8) */
/* WARNING: Removing unreachable block (ram,0x000101d447a8) */

void FUN_101d448c4(long param_1)

{
  long unaff_x20;
  
  if (param_1 != 0) {
    func_0x000107c614b0();
    func_0x000107c5ed2c(param_1);
    func_0x000107c3fcb0();
    func_0x000107c42210(param_1);
    func_0x000107c61180();
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  func_0x000100b60084(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}


