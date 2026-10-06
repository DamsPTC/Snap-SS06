/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101a45624; end: 101a45627; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isTacomaBackupEnabledForSnapDocSnaps] */

uint FUN_101a45624(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000100c0ba78();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a45628; end: 101a4567f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isFaceTaggingEnabled] */

uint FUN_101a45628(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd00000000000001d,0x800000010efca830,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a45680; end: 101a45713; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isFriendsTabEnabled] */

uint FUN_101a45680(undefined8 param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd00000000000001d,0x800000010efca830,0,param_1);
  uVar2 = 0;
  if ((uVar1 & 1) != 0) {
    uVar2 = 0;
    func_0x000100858660(2,0xd000000000000012,0x800000010efca850,0,param_1);
  }
  func_0x000107c61170(param_1);
  return uVar2 & 1;
}



/* Entry: 101a45714; end: 101a4576b; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isFriendsTabBackfillVisibilityEnabled] */

uint FUN_101a45714(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000031,0x800000010efca7f0,1,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a4576c; end: 101a457fb; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl faceEmbeddingModelKey] */

void FUN_101a4576c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  uVar1 = 2;
  uVar2 = 0xd000000000000018;
  FUN_101a4aeb4(2,0xd000000000000018,0x800000010efca7b0,0xd000000000000018,0x800000010efca7d0,
                param_1);
  func_0x000107c61170(param_1);
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 101a457fc; end: 101a45827; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl faceEmbeddingModelDeliveryCOFKey] */

void FUN_101a457fc(void)

{
  func_0x000107c5fadc(0xd00000000000001d,0x800000010efca790);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101a45828; end: 101a4587f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isFaceTaggingAsyncNativeBridgeEnabled] */

uint FUN_101a45828(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000029,0x800000010efca760,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a45880; end: 101a458d7; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isFaceTaggingAsyncSnapStoreEnabled] */

uint FUN_101a45880(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000026,0x800000010efca730,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a458d8; end: 101a45947; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldSaveUnencryptedNonSnapDocSnap] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a458d8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112deec80);
  func_0x000107c61174();
  FUN_101a45bd8(uVar1,0xd00000000000002c,0x800000010efcaa50,0,param_1);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a45948; end: 101a459b7; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldDisableMERAccessFeatures] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a45948(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112deec80);
  func_0x000107c61174();
  FUN_101a45bd8(uVar1,0xd00000000000002c,0x800000010efcaa20,0,param_1);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a459b8; end: 101a45a3b; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldSnapDocManagerWriteIsEncryptedFlag] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a459b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x0001044d809c(0);
  func_0x000107c61174(param_1);
  func_0x0001000d224c(&uStack_38);
  uVar1 = uStack_38;
  func_0x0001044d7f64(uStack_38);
  func_0x000107c61170(param_1);
  func_0x000107c615e8(uStack_38);
  return (uint)uVar1 & 1;
}



/* Entry: 101a45a3c; end: 101a45a93; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl disableCloudFSContentEncryptionHintCopy] */

uint FUN_101a45a3c(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 1;
  func_0x000100858660(1,0xd00000000000003e,0x800000010efca9e0,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a45a94; end: 101a45aeb; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldSaveDownloadedNonSnapDocMediaWithoutLocalEncryption] */

uint FUN_101a45a94(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 1;
  func_0x000100858660(1,0xd000000000000045,0x800000010efca990,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a45aec; end: 101a45bd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a45aec(void)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  uint uVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  uVar4 = 0xd000000000000028;
  uVar5 = 0;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 != 0) {
    func_0x000107c615f0(lStack_68);
    func_0x000107c5eea0(puVar6);
    func_0x000107c5fadc(0xd000000000000028,0x800000010efca960);
    lVar2 = lStack_68;
    func_0x000107c3ebd4(lStack_68);
    uVar5 = (uint)lVar2;
    func_0x000107c61170(uVar4);
    lVar2 = lStack_68;
    func_0x00010085883c(lStack_68);
    func_0x0001000d224c(auStack_90);
    puVar3 = auStack_90;
    func_0x0001000a8868(puVar3,uStack_78);
    func_0x0001008599bc(lVar2,0,puVar6,uStack_78,uStack_70,puVar3);
    func_0x000107c615ec(lStack_68,2);
    (**(code **)(lVar7 + 8))(puVar6,lVar1);
    func_0x0001000834e4(auStack_90);
  }
  return uVar5 & 1;
}



/* Entry: 101a45bd8; end: 101a45d2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a45bd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 != 0) {
    func_0x000107c615f0(lStack_68);
    func_0x000107c5eea0(puVar4);
    func_0x000107c5fadc(param_2,param_3);
    lVar2 = lStack_68;
    func_0x000107c3ebd4(lStack_68);
    param_4 = (uint)lVar2;
    func_0x000107c61170(param_2);
    lVar2 = lStack_68;
    func_0x00010085883c(lStack_68);
    func_0x0001000d224c(auStack_90);
    puVar3 = auStack_90;
    func_0x0001000a8868(puVar3,uStack_78);
    func_0x0001008599bc(lVar2,0,puVar4,uStack_78,uStack_70,puVar3);
    func_0x000107c615ec(lStack_68,2);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
    func_0x0001000834e4(auStack_90);
  }
  return param_4 & 1;
}



/* Entry: 101a45d30; end: 101a45e87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a45d30(undefined8 param_1,undefined8 param_2,uint param_3)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = 0;
  uVar4 = param_2;
  func_0x000107c5eea4();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 != 0) {
    func_0x000107c615f0(lStack_58);
    func_0x000107c5eea0(puVar5);
    FUN_101a48ebc(param_2);
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar4);
    lVar2 = lStack_58;
    func_0x000107c3ebd4(lStack_58);
    param_3 = (uint)lVar2;
    func_0x000107c61170(param_2);
    lVar2 = lStack_58;
    func_0x00010085883c(lStack_58);
    func_0x0001000d224c(auStack_80);
    puVar3 = auStack_80;
    func_0x0001000a8868(puVar3,uStack_68);
    func_0x0001008599bc(lVar2,0,puVar5,uStack_68,uStack_60,puVar3);
    func_0x000107c615ec(lStack_58,2);
    (**(code **)(lVar6 + 8))(puVar5,lVar1);
    func_0x0001000834e4(auStack_80);
  }
  return param_3 & 1;
}



/* Entry: 101a45e88; end: 101a45edf; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl memTwoDebugToggleKillSwitch] */

uint FUN_101a45e88(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd00000000000002c,0x800000010efcaa80,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a45ee0; end: 101a45f37; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldCenterEntryPointPosition] */

uint FUN_101a45ee0(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  func_0x000100858660(3,0xd000000000000028,0x800000010efcab60,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a45f38; end: 101a4607f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a45f38(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112deec90);
  func_0x000107c615f0(uVar6);
  func_0x000107c5eea0(puVar5);
  uVar2 = 0xd000000000000029;
  func_0x000107c5fadc(0xd000000000000029,0x800000010efcab30);
  uVar3 = uVar6;
  func_0x000107c4980c(uVar6);
  func_0x000107c61170(uVar2);
  uVar2 = uVar6;
  func_0x00010085883c(uVar6);
  func_0x0001000d224c(auStack_78);
  puVar4 = auStack_78;
  func_0x0001000a8868(puVar4,uStack_60);
  func_0x0001008599bc(uVar2,1,puVar5,uStack_60,uStack_58,puVar4);
  func_0x000107c615e8(uVar6);
  (**(code **)(lVar7 + 8))(puVar5,lVar1);
  func_0x0001000834e4(auStack_78);
  return (long)(int)uVar3;
}



/* Entry: 101a46080; end: 101a460b3; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl entryPointLabelCooldownWindow] */

undefined8 FUN_101a46080(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a45f38();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a460b4; end: 101a4610b; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl enableYearEndRecapBadge] */

uint FUN_101a460b4(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  func_0x000100858660(3,0xd000000000000024,0x800000010efcab00,1,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a4610c; end: 101a46253;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101a4610c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112deec90);
  func_0x000107c615f0(uVar6);
  func_0x000107c5eea0(puVar5);
  uVar2 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010efcaad0);
  uVar3 = uVar6;
  func_0x000107c4c0d0(uVar6);
  func_0x000107c61170(uVar2);
  uVar2 = uVar6;
  func_0x00010085883c(uVar6);
  func_0x0001000d224c(auStack_78);
  puVar4 = auStack_78;
  func_0x0001000a8868(puVar4,uStack_60);
  func_0x0001008599bc(uVar2,1,puVar5,uStack_60,uStack_58,puVar4);
  func_0x000107c615e8(uVar6);
  (**(code **)(lVar7 + 8))(puVar5,lVar1);
  func_0x0001000834e4(auStack_78);
  return uVar3;
}



/* Entry: 101a46254; end: 101a46287; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl yearEndRecapBadgeExpirationInSeconds] */

undefined8 FUN_101a46254(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a4610c();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a46288; end: 101a462df; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl enableSwipeUpHint] */

uint FUN_101a46288(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  func_0x000100858660(3,0xd000000000000015,0x800000010efcaab0,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a462e0; end: 101a46337; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl memoriesMonetizationEnabled] */

uint FUN_101a462e0(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  func_0x000100858660(3,0xd00000000000001d,0x800000010efcae00,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a46338; end: 101a4638f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl memoriesMonetizationKillSwitchEnabled] */

uint FUN_101a46338(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  func_0x000100858660(3,0xd00000000000001a,0x800000010efcade0,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a46390; end: 101a463e7; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl memoriesMonetizationSettingsKillSwitchEnabled] */

uint FUN_101a46390(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  func_0x000100858660(3,0xd00000000000002a,0x800000010efcadb0,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a463e8; end: 101a4643f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl memoriesMonetizationBannerLowStorageEnabled] */

uint FUN_101a463e8(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000030,0x800000010efcad70,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a46440; end: 101a46593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a46440(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = 750000000;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(unaff_x20 + _DAT_112deec88);
  if (lVar7 != 0) {
    func_0x000107c615f0(lVar7);
    func_0x000107c5eea0(puVar6);
    uVar2 = 0xd00000000000002b;
    func_0x000107c5fadc(0xd00000000000002b,0x800000010efcad40);
    lVar5 = lVar7;
    func_0x000107c4c0d0(lVar7);
    func_0x000107c61170(uVar2);
    lVar3 = lVar7;
    func_0x00010085883c(lVar7);
    func_0x0001000d224c(auStack_78);
    puVar4 = auStack_78;
    func_0x0001000a8868(puVar4,uStack_60);
    func_0x0001008599bc(lVar3,1,puVar6,uStack_60,uStack_58,puVar4);
    func_0x000107c615e8(lVar7);
    (**(code **)(lVar8 + 8))(puVar6,lVar1);
    func_0x0001000834e4(auStack_78);
  }
  return lVar5;
}



/* Entry: 101a46594; end: 101a465c7; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl memoriesMonetizationLowStorageThreshold] */

undefined8 FUN_101a46594(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a46440();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a465c8; end: 101a4661f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl memoriesMonetizationDisableSigTrayForBanner] */

uint FUN_101a465c8(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd00000000000002d,0x800000010efcad10,1,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a46620; end: 101a46677; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl memoriesSettingsNewUIEnabled] */

uint FUN_101a46620(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000020,0x800000010efcace0,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a46678; end: 101a467bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a46678(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112deec90);
  func_0x000107c615f0(uVar6);
  func_0x000107c5eea0(puVar5);
  uVar2 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010efcaca0);
  uVar3 = uVar6;
  func_0x000107c4980c(uVar6);
  func_0x000107c61170(uVar2);
  uVar2 = uVar6;
  func_0x00010085883c(uVar6);
  func_0x0001000d224c(auStack_78);
  puVar4 = auStack_78;
  func_0x0001000a8868(puVar4,uStack_60);
  func_0x0001008599bc(uVar2,1,puVar5,uStack_60,uStack_58,puVar4);
  func_0x000107c615e8(uVar6);
  (**(code **)(lVar7 + 8))(puVar5,lVar1);
  func_0x0001000834e4(auStack_78);
  return (long)(int)uVar3;
}



/* Entry: 101a467c0; end: 101a467f3; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl memoriesHomeGridQuotaNewUpsellCooldownMinutes] */

undefined8 FUN_101a467c0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a46678();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a467f4; end: 101a4684b; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl memoriesHomeGridQuotaNewUpsell] */

uint FUN_101a467f4(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  func_0x000100858660(3,0xd000000000000023,0x800000010efcac70,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a4684c; end: 101a469a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a4684c(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  uint uVar6;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(unaff_x20 + _DAT_112deec88);
  if (lVar8 == 0) {
    uVar6 = 1;
  }
  else {
    func_0x000107c615f0(lVar8);
    func_0x000107c5eea0(puVar7);
    uVar2 = 0xd00000000000001a;
    func_0x000107c5fadc(0xd00000000000001a,0x800000010efcac50);
    lVar3 = lVar8;
    func_0x000107c4980c();
    func_0x000107c61170(uVar2);
    lVar4 = lVar8;
    func_0x00010085883c(lVar8);
    func_0x0001000d224c(auStack_78);
    puVar5 = auStack_78;
    func_0x0001000a8868(puVar5,uStack_60);
    func_0x0001008599bc(lVar4,1,puVar7,uStack_60,uStack_58,puVar5);
    func_0x000107c615e8(lVar8);
    (**(code **)(lVar9 + 8))(puVar7,lVar1);
    func_0x0001000834e4(auStack_78);
    uVar6 = (uint)lVar3;
    if (2 < uVar6) {
      uVar6 = 3;
    }
  }
  return uVar6;
}



/* Entry: 101a469a4; end: 101a469c7;  */

uint FUN_101a469a4(uint param_1)

{
  FUN_101a4684c();
  return param_1 & 0xff;
}



/* Entry: 101a469c8; end: 101a46a1f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldEnableS2RLogging] */

uint FUN_101a469c8(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd00000000000001c,0x800000010efcaea0,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a46a20; end: 101a46a77; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl disableAdditionalGalleryExceptionLogging] */

uint FUN_101a46a20(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000039,0x800000010efcae60,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a46a78; end: 101a46acf; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldRemoveInvalidStreamingContent] */

uint FUN_101a46a78(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  func_0x000100858660(3,0xd000000000000031,0x800000010efcae20,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a46ad0; end: 101a46ad7; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl enableSnapDocDebugIcon] */

undefined8 FUN_101a46ad0(void)

{
  return 0;
}



/* Entry: 101a46ad8; end: 101a46b47; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl enableNewSnapDocSaveServiceGlobally] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a46ad8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112deec80);
  func_0x000107c61174();
  FUN_101a45bd8(uVar1,0xd000000000000026,0x800000010efcb060,0,param_1);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a46b48; end: 101a46bb7; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl enableTimelinePreviewForMemoriesSnapDocReEdit] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a46b48(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112deec80);
  func_0x000107c61174();
  FUN_101a45bd8(uVar1,0xd000000000000034,0x800000010efcb020,0,param_1);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a46bb8; end: 101a46c27; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl convertNonSnapDocSnapsToSnapDocForPreview] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a46bb8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112deec80);
  func_0x000107c61174();
  FUN_101a45bd8(uVar1,0xd000000000000028,0x800000010efcaff0,0,param_1);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a46c28; end: 101a46c97; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl importCameraRollAssetsAsSnapDoc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a46c28(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112deec80);
  func_0x000107c61174();
  FUN_101a45bd8(uVar1,0xd000000000000028,0x800000010efcafc0,0,param_1);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a46c98; end: 101a46cfb; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl disableSnapEditorSnapDocInMemories] */

uint FUN_101a46c98(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000015,0x800000010efcafa0,1,param_1);
  func_0x000107c61170(param_1);
  return (uVar1 ^ 0xffffffff) & 1;
}



/* Entry: 101a46cfc; end: 101a46d53; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl disableNewSnapDocValidationInSnapsTab] */

uint FUN_101a46cfc(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd00000000000002c,0x800000010efcaf70,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a46d54; end: 101a46dab; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl disableNewSnapDocDurationCalculation] */

uint FUN_101a46d54(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000029,0x800000010efcaf40,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a46dac; end: 101a46e03; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl enableSnapDocSaveValidation] */

uint FUN_101a46dac(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000027,0x800000010efcaf10,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a46e04; end: 101a46e5b; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isSnapDocSaveValidationEnabled] */

uint FUN_101a46e04(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000028,0x800000010efcaee0,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a46e5c; end: 101a46fa7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a46e5c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112deec90);
  func_0x000107c615f0(uVar6);
  func_0x000107c5eea0(puVar5);
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010efcaec0);
  uVar3 = uVar6;
  func_0x000107c4980c(uVar6);
  func_0x000107c61170(uVar2);
  uVar2 = uVar6;
  func_0x00010085883c(uVar6);
  func_0x0001000d224c(auStack_78);
  puVar4 = auStack_78;
  func_0x0001000a8868(puVar4,uStack_60);
  func_0x0001008599bc(uVar2,1,puVar5,uStack_60,uStack_58,puVar4);
  func_0x000107c615e8(uVar6);
  (**(code **)(lVar7 + 8))(puVar5,lVar1);
  func_0x0001000834e4(auStack_78);
  return (long)(int)uVar3;
}



/* Entry: 101a46fa8; end: 101a46fdb; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl snapDocByteLimit] */

undefined8 FUN_101a46fa8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a46e5c();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a46fdc; end: 101a4704b; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl isRenderingGifsCameraRollKillswitchEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a46fdc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112deec78);
  func_0x000107c61174();
  FUN_101a45bd8(uVar1,0xd000000000000022,0x800000010efcbb70,0,param_1);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a4704c; end: 101a470bb; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl canSkipFeaturedStoryNotificationPrefetch] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a4704c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112deec80);
  func_0x000107c61174();
  FUN_101a45bd8(uVar1,0xd00000000000002b,0x800000010efcbb40,0,param_1);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a470bc; end: 101a4712b; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl discardUnselectedFiltesFromSojuOverlay] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a470bc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112deec78);
  func_0x000107c61174();
  FUN_101a45bd8(uVar1,0xd00000000000002c,0x800000010efcbb10,0,param_1);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a4712c; end: 101a4726f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101a4712c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112deec90);
  func_0x000107c615f0(uVar6);
  func_0x000107c5eea0(puVar5);
  uVar2 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010efcbae0);
  uVar3 = uVar6;
  func_0x000107c3ebd4(uVar6);
  func_0x000107c61170(uVar2);
  uVar2 = uVar6;
  func_0x00010085883c(uVar6);
  func_0x0001000d224c(auStack_78);
  puVar4 = auStack_78;
  func_0x0001000a8868(puVar4,uStack_60);
  func_0x0001008599bc(uVar2,0,puVar5,uStack_60,uStack_58,puVar4);
  func_0x000107c615e8(uVar6);
  (**(code **)(lVar7 + 8))(puVar5,lVar1);
  func_0x0001000834e4(auStack_78);
  return uVar3;
}



/* Entry: 101a47270; end: 101a472a3; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl migrateToSDNPrefetchHandler] */

uint FUN_101a47270(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a4712c();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a472a4; end: 101a47313; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl enableMonthlyCameraRollSummary] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a472a4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112deec78);
  func_0x000107c61174();
  FUN_101a45bd8(uVar1,0xd000000000000022,0x800000010efcbab0,0,param_1);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a47314; end: 101a4747f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a47314(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_80 [24];
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&lStack_58);
  if (lStack_58 == 0) {
    lVar6 = 0xc;
  }
  else {
    func_0x000107c615f0(lStack_58);
    func_0x000107c5eea0(puVar5);
    uVar2 = 0xd00000000000002a;
    func_0x000107c5fadc(0xd00000000000002a,0x800000010efcba80);
    lVar6 = lStack_58;
    func_0x000107c4980c(lStack_58);
    func_0x000107c61170(uVar2);
    lVar6 = (long)(int)lVar6;
    lVar3 = lStack_58;
    func_0x00010085883c(lStack_58);
    func_0x0001000d224c(auStack_80);
    puVar4 = auStack_80;
    func_0x0001000a8868(puVar4,uStack_68);
    func_0x0001008599bc(lVar3,1,puVar5,uStack_68,uStack_60,puVar4);
    func_0x000107c615ec(lStack_58,2);
    (**(code **)(lVar7 + 8))(puVar5,lVar1);
    func_0x0001000834e4(auStack_80);
  }
  return lVar6;
}



/* Entry: 101a47480; end: 101a474b3; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl monthlyCameraRollSummaryLookbackWindowInMonths] */

undefined8 FUN_101a47480(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a47314();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a474b4; end: 101a47523; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldUseNonEncryptedDatabase] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a474b4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112deec80);
  func_0x000107c61174();
  FUN_101a45bd8(uVar1,0xd000000000000029,0x800000010efcba50,0,param_1);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a47524; end: 101a47593; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldSkipEgoCipherDoubleWrite] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_101a47524(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112deec80);
  func_0x000107c61174();
  FUN_101a45bd8(uVar1,0xd00000000000002b,0x800000010efcba20,0,param_1);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101a47594; end: 101a475eb; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl disableTabBarRTL] */

uint FUN_101a47594(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  func_0x000100858660(3,0xd000000000000020,0x800000010efcb9f0,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a475ec; end: 101a47643; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldDeferClientGenStoryGenerationUntilPageLoad] */

uint FUN_101a475ec(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  func_0x000100858660(3,0xd00000000000003e,0x800000010efcb9b0,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a47644; end: 101a4769b; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldEnabledSyncSecurityThrottle] */

uint FUN_101a47644(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  func_0x000100858660(3,0xd000000000000022,0x800000010efcb980,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a4769c; end: 101a476f3; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldEnableClusterRecentCRStory] */

uint FUN_101a4769c(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  func_0x000100858660(3,0xd000000000000022,0x800000010efcb950,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a476f4; end: 101a4774b; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldAutosavePublicStoryFromCameraRoll] */

uint FUN_101a476f4(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  func_0x000100858660(3,0xd000000000000031,0x800000010efcb910,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a4774c; end: 101a477a3; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldDisableSelectedTabInvisibleFix] */

uint FUN_101a4774c(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  func_0x000100858660(3,0xd000000000000022,0x800000010efcb8e0,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a477a4; end: 101a477fb; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldEnableOptimisticRebaseForSync] */

uint FUN_101a477a4(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  func_0x000100858660(3,0xd000000000000022,0x800000010efcb8b0,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a477fc; end: 101a47853; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl useUpdatedFtrStoriesLayout] */

uint FUN_101a477fc(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 3;
  func_0x000100858660(3,0xd000000000000026,0x800000010efcb880,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a47854; end: 101a4785f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl enableTentativeUnresponsiveMemoriesFix] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101a47854(long param_1)

{
  long lVar1;
  undefined1 uStack_21;
  
  lVar1 = *(long *)(param_1 + _DAT_112deecb0);
  if (lVar1 == 0) {
    uStack_21 = 0;
  }
  else {
    func_0x000107c61174();
    func_0x000107c6157c(lVar1);
    func_0x0001000d224c(&uStack_21);
    func_0x000107c61574(lVar1);
    func_0x000107c61170(param_1);
  }
  return uStack_21;
}



/* Entry: 101a47860; end: 101a47967; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldUseUpdatedMEOFiltering] */

uint FUN_101a47860(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000023,0x800000010efcb850,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a47968; end: 101a47a4b; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl forceFullResyncIfDataBeforeTimeStamp] */

undefined8 FUN_101a47968(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101a478b8();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a47a4c; end: 101a47a7f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl runModeForForceFullResyncIfDataBeforeTimeStamp] */

undefined8 FUN_101a47a4c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101a4799c();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a47a80; end: 101a47ad7; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldShowSpotlightButtonOnPreview] */

uint FUN_101a47a80(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd00000000000002a,0x800000010efcb7b0,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a47ad8; end: 101a47b2f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldSpotlightButtonOnPreviewUseNewColor] */

uint FUN_101a47ad8(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd00000000000002d,0x800000010efcb780,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a47b30; end: 101a47c83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a47b30(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(unaff_x20 + _DAT_112deec88);
  if (lVar6 == 0) {
    lVar7 = 0;
  }
  else {
    func_0x000107c615f0(lVar6);
    func_0x000107c5eea0(puVar5);
    uVar2 = 0xd00000000000003f;
    func_0x000107c5fadc(0xd00000000000003f,0x800000010efcb740);
    lVar7 = lVar6;
    func_0x000107c4980c(lVar6);
    func_0x000107c61170(uVar2);
    lVar7 = (long)(int)lVar7;
    lVar3 = lVar6;
    func_0x00010085883c(lVar6);
    func_0x0001000d224c(auStack_78);
    puVar4 = auStack_78;
    func_0x0001000a8868(puVar4,uStack_60);
    func_0x0001008599bc(lVar3,1,puVar5,uStack_60,uStack_58,puVar4);
    func_0x000107c615e8(lVar6);
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    func_0x0001000834e4(auStack_78);
  }
  return lVar7;
}



/* Entry: 101a47c84; end: 101a47cb7; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl previewSpotlightButtonMinimumVideoDurationSeconds] */

undefined8 FUN_101a47c84(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a47b30();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a47cb8; end: 101a47d0f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldDismissPresentingOpera] */

uint FUN_101a47cb8(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000031,0x800000010efcb700,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a47d10; end: 101a47d67; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldExcludeCameraRollFromSelectAll] */

uint FUN_101a47d10(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000032,0x800000010efcb6c0,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a47d68; end: 101a47dbf; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldRemoveCRSectionForMonthlyAlbums] */

uint FUN_101a47d68(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000028,0x800000010efcb690,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a47dc0; end: 101a47e17; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldRemoveMonthClusters] */

uint FUN_101a47dc0(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd00000000000001d,0x800000010efcb670,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a47e18; end: 101a47f63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101a47e18(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar8 = *(ulong *)(unaff_x20 + _DAT_112deec90);
  func_0x000107c615f0(uVar8);
  func_0x000107c5eea0(puVar7);
  uVar3 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010efcb650);
  uVar4 = uVar8;
  func_0x000107c4980c();
  func_0x000107c61170(uVar3);
  uVar5 = uVar8;
  func_0x00010085883c(uVar8);
  func_0x0001000d224c(auStack_78);
  puVar6 = auStack_78;
  func_0x0001000a8868(puVar6,uStack_60);
  func_0x0001008599bc(uVar5,1,puVar7,uStack_60,uStack_58,puVar6);
  func_0x000107c615e8(uVar8);
  (**(code **)(lVar9 + 8))(puVar7,lVar2);
  func_0x0001000834e4(auStack_78);
  if (-1 < (int)uVar4) {
    return uVar4 & 0xffffffff;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101a47f64);
  (*pcVar1)();
}



/* Entry: 101a47f64; end: 101a47f97; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl photosFetchLimit] */

undefined8 FUN_101a47f64(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a47e18();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a47f98; end: 101a47fef; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldShowMonetizationBannerOnTopOnly] */

uint FUN_101a47f98(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd00000000000002f,0x800000010efcb620,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a47ff0; end: 101a48143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a47ff0(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(unaff_x20 + _DAT_112deec88);
  if (lVar6 == 0) {
    lVar7 = 0x5a0;
  }
  else {
    func_0x000107c615f0(lVar6);
    func_0x000107c5eea0(puVar5);
    uVar2 = 0xd000000000000033;
    func_0x000107c5fadc(0xd000000000000033,0x800000010efcb5e0);
    lVar7 = lVar6;
    func_0x000107c4980c(lVar6);
    func_0x000107c61170(uVar2);
    lVar7 = (long)(int)lVar7;
    lVar3 = lVar6;
    func_0x00010085883c(lVar6);
    func_0x0001000d224c(auStack_78);
    puVar4 = auStack_78;
    func_0x0001000a8868(puVar4,uStack_60);
    func_0x0001008599bc(lVar3,1,puVar5,uStack_60,uStack_58,puVar4);
    func_0x000107c615e8(lVar6);
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    func_0x0001000834e4(auStack_78);
  }
  return lVar7;
}



/* Entry: 101a48144; end: 101a48177; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl monetizationBannerCooldownInMinutes] */

undefined8 FUN_101a48144(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a47ff0();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a48178; end: 101a481cf; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldShowTempStorageCluster] */

uint FUN_101a48178(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd00000000000001c,0x800000010efcb5c0,1,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a481d0; end: 101a48227; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldShowQuotaThumbnailStates] */

uint FUN_101a481d0(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000026,0x800000010efcb590,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a48228; end: 101a4827f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldShowQuotaStatusBar] */

uint FUN_101a48228(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd00000000000001c,0x800000010efcb570,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a48280; end: 101a482d7; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldShowLockedSnapModalCard] */

uint FUN_101a48280(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000022,0x800000010efcb540,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a482d8; end: 101a4832f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl enableCREmbeddedMetadataSave] */

uint FUN_101a482d8(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd00000000000002b,0x800000010efc99b0,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a48330; end: 101a48483;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101a48330(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar8 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(unaff_x20 + _DAT_112deec88);
  if (lVar6 == 0) {
    lVar7 = -1;
  }
  else {
    func_0x000107c615f0(lVar6);
    func_0x000107c5eea0(puVar5);
    uVar2 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010efcb510);
    lVar7 = lVar6;
    func_0x000107c4980c(lVar6);
    func_0x000107c61170(uVar2);
    lVar7 = (long)(int)lVar7;
    lVar3 = lVar6;
    func_0x00010085883c(lVar6);
    func_0x0001000d224c(auStack_78);
    puVar4 = auStack_78;
    func_0x0001000a8868(puVar4,uStack_60);
    func_0x0001008599bc(lVar3,1,puVar5,uStack_60,uStack_58,puVar4);
    func_0x000107c615e8(lVar6);
    (**(code **)(lVar8 + 8))(puVar5,lVar1);
    func_0x0001000834e4(auStack_78);
  }
  return lVar7;
}



/* Entry: 101a48484; end: 101a484b7; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl operaCachedItemsLimit] */

undefined8 FUN_101a48484(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101a48330();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101a484b8; end: 101a4850f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl updateSnapAfterSavingEditsOnPreview] */

uint FUN_101a484b8(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000029,0x800000010efcb4e0,1,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a48510; end: 101a48567; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldReloadDataAfterSave] */

uint FUN_101a48510(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000025,0x800000010efcb4b0,1,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a48568; end: 101a485bf; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl useNewMultiSelectSendButton] */

uint FUN_101a48568(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd00000000000002e,0x800000010efcb480,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a485c0; end: 101a48617; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl pausePlaybackOnOperaSpotlightQuickPost] */

uint FUN_101a485c0(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000034,0x800000010efcb440,1,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a48618; end: 101a4866f; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl shouldUpdateMemoriesOpenSourceAfterOpen] */

uint FUN_101a48618(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000035,0x800000010efcb400,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}



/* Entry: 101a48670; end: 101a486c7; -[_TtC30MemoriesExperimentServicesImpl29MemoriesExperimentServiceImpl enableCrossTabSelectionGuards] */

uint FUN_101a48670(undefined8 param_1)

{
  uint uVar1;
  
  func_0x000107c61174();
  uVar1 = 0;
  func_0x000100858660(2,0xd000000000000026,0x800000010efcb3d0,0,param_1);
  func_0x000107c61170(param_1);
  return uVar1 & 1;
}


