/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100787738; end: 100787743;  */

bool FUN_100787738(uint param_1)

{
  return param_1 < 3;
}



/* Entry: 100787744; end: 100787763;  */

void FUN_100787744(void)

{
  func_0x000107c61168(&PTR_PTR_1127f16a0);
  return;
}



/* Entry: 100787764; end: 100787b13;  */

byte FUN_100787764(long param_1)

{
  code *pcVar1;
  byte bVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x220) != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 0x220) + 0x178);
    bVar2 = 0;
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 8) == 0) {
        bVar2 = *(byte *)(lVar3 + 0x20);
      }
      else {
        bVar2 = 1;
      }
    }
    return bVar2 & 1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(0,0x1007869e4);
  (*pcVar1)();
}



/* Entry: 100787b14; end: 100787b97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100787b14(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffc0;
  *(undefined8 *)(unaff_x20 + _DAT_11303e6c0) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_11303e6c8) = uVar1;
  FUN_10020e2d0();
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return puVar2;
}



/* Entry: 100787b98; end: 100787bd3;  */

void FUN_100787b98(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100787bd4; end: 100787e97;  */

undefined8 * FUN_100787bd4(void)

{
  undefined8 *puVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  undefined8 uVar6;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  puVar1 = (undefined8 *)(unaff_x19 + 0x28);
  uVar6 = *unaff_x20;
  *unaff_x20 = 0;
  piVar5 = (int *)*puVar1;
  *puVar1 = uVar6;
  if (piVar5 != (int *)0x0) {
    do {
      iVar2 = *piVar5;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar5,0x10);
      if (bVar4) {
        *piVar5 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar2 + -1 == 0) {
      (**(code **)(piVar5 + 4))(piVar5);
    }
  }
  return puVar1;
}



/* Entry: 100787e98; end: 100787ecb;  */

void FUN_100787e98(long *param_1)

{
  func_0x000100684ed8();
                    /* WARNING: Could not recover jumptable at 0x000100787ec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



/* Entry: 100787ecc; end: 100787ecf;  */

void FUN_100787ecc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100787fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



/* Entry: 100787ed0; end: 100787fd7;  */

void FUN_100787ed0(long *param_1,undefined8 param_2,ulong param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long *plStack_60;
  
  uVar2 = param_3;
  FUN_100787ecc();
  func_0x000100787fec();
  uVar3 = param_3;
  FUN_100788004();
  lVar5 = param_1[0x12];
  FUN_100684f00(param_1[0x10]);
  (**(code **)(*plStack_60 + 0x18))();
  if (uVar3 - lVar5 <= uVar2) {
    uVar2 = uVar3 - lVar5;
  }
  func_0x0001006856e0();
  func_0x000107c610b8(param_3,(long)plStack_60 + param_1[0x12],uVar2);
  param_1[0x12] = param_1[0x12] + uVar2;
  FUN_100788ff8(param_2,uVar2,0);
  puVar1 = (undefined8 *)param_1[9];
  lVar5 = param_1[10];
  (**(code **)(*param_1 + 0x18))(param_1);
  plVar4 = param_1;
  FUN_100788004();
  (**(code **)*puVar1)(puVar1,lVar5,param_1,plVar4);
  return;
}



/* Entry: 100787fd8; end: 100788003;  */

void FUN_100787fd8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100787fe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x20))();
  return;
}



/* Entry: 100788004; end: 100788013;  */

void FUN_100788004(void)

{
  long *unaff_x19;
  
                    /* WARNING: Could not recover jumptable at 0x000100788010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x19 + 0x10))();
  return;
}



/* Entry: 100788014; end: 100788037;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100788014(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11272af60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100788038; end: 100788527; -[SCCloudSyncDependencyProvidingServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100788038(long param_1)

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
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined *puVar19;
  long lVar20;
  
  lVar20 = param_1;
  FUN_100788014();
  func_0x000107c61180();
  lVar1 = lVar20;
  func_0x000107c4cc44();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  lVar20 = param_1;
  FUN_100788014();
  func_0x000107c61180();
  lVar2 = lVar20;
  func_0x000107c4cb6c();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  lVar20 = param_1;
  FUN_100788014();
  func_0x000107c61180();
  lVar3 = lVar20;
  func_0x000107c4cc48();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11272af64;
    func_0x000107c61148();
  }
  lVar4 = lVar20;
  func_0x000107c3eba8();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11272af68;
    func_0x000107c61148();
  }
  lVar5 = lVar20;
  func_0x000107c4cb54();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11272af6c;
    func_0x000107c61148();
  }
  lVar6 = lVar20;
  func_0x000107c4d80c();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11272af70;
    func_0x000107c61148();
  }
  lVar7 = lVar20;
  func_0x000107c4e600();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11272af74;
    func_0x000107c61148();
  }
  lVar8 = lVar20;
  func_0x000107c3fc5c();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11272af78;
    func_0x000107c61148();
  }
  lVar9 = lVar20;
  func_0x000107c43434();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11272af7c;
    func_0x000107c61148();
  }
  lVar10 = lVar20;
  func_0x000107c4cb24();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11272af80;
    func_0x000107c61148();
  }
  lVar11 = lVar20;
  func_0x000107c4cb88();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11272af5c;
    func_0x000107c61148();
  }
  lVar12 = lVar20;
  func_0x000107c5da60();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11272af84;
    func_0x000107c61148();
  }
  lVar13 = lVar20;
  func_0x000107c4121c();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11272af88;
    func_0x000107c61148();
  }
  lVar14 = lVar20;
  func_0x000107c4cce0();
  func_0x000107c61180();
  func_0x000107c61170(lVar20);
  if (param_1 == 0) {
    lVar20 = 0;
  }
  else {
    lVar20 = param_1 + _DAT_11272af90;
    func_0x000107c61148();
  }
  lVar15 = param_1;
  FUN_1007885e0();
  func_0x000107c61180();
  lVar16 = lVar15;
  func_0x000107c4cb3c();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  lVar15 = param_1;
  FUN_1007885e0();
  func_0x000107c61180();
  lVar17 = lVar15;
  func_0x000107c4cb40();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  lVar15 = 0;
  if (param_1 != 0) {
    lVar15 = param_1 + _DAT_11272af94;
    func_0x000107c61148();
  }
  lVar18 = lVar15;
  func_0x000107c417cc();
  func_0x000107c61180();
  func_0x000107c61170(lVar15);
  puVar19 = PTR_PTR_1126bf738;
  func_0x000107c610f4();
  func_0x000107c4772c();
  func_0x000107c61170(lVar18);
  func_0x000107c61170(lVar17);
  func_0x000107c61170(lVar16);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(lVar12);
  func_0x000107c61170(lVar11);
  func_0x000107c61170(lVar10);
  func_0x000107c61170(lVar9);
  func_0x000107c61170(lVar8);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 100788528; end: 10078852f; -[SCMemoriesDataObjectStorageService memoriesProfile] */

undefined8 FUN_100788528(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100788530; end: 100788537; -[SCMemoriesDataObjectStorageService memoriesProfileHandler] */

undefined8 FUN_100788530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100788538; end: 100788577; -[_TtC33SCMemoriesBackupPerformerServices31MemoriesBackupPerformerServices performer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100788538(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1003a5b88();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100788578; end: 10078857f; -[SCCloudSyncLoggingServices cloudSyncLogger] */

undefined8 FUN_100788578(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100788580; end: 100788587; -[SCMemoriesFileManagerServices fileManager] */

undefined8 FUN_100788580(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100788588; end: 10078858f; -[SCMemoriesStorageServices memoriesAssetRepository] */

undefined8 FUN_100788588(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100788590; end: 1007885cf; -[_TtC26SCCloudSyncDataCapServices24CloudSyncDataCapServices dataCapManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100788590(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1003a5b88();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1007885d0; end: 1007885df; -[_TtC30SCMemoriesUserDefaultsServices30SCMemoriesUserDefaultsServices memoriesUserDefaultsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007885d0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303ea38));
  return;
}



/* Entry: 1007885e0; end: 100788603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1007885e0(long param_1)

{
  if (param_1 != 0) {
    func_0x000107c61148(param_1 + _DAT_11272af8c);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100788604; end: 100788613; -[_TtC30MemoriesCSAMKeyIvStoreServices30MemoriesCSAMKeyIvStoreServices memoriesCSAMKeyIvFetcherObjc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100788604(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff4998));
  return;
}



/* Entry: 100788614; end: 100788623; -[_TtC30MemoriesCSAMKeyIvStoreServices30MemoriesCSAMKeyIvStoreServices memoriesCSAMKeyIvSaver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100788614(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ff4990));
  return;
}



/* Entry: 100788624; end: 100788633; -[MemPlatBackupLoggingServices deprecationLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100788624(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_11303e6c8));
  return;
}



/* Entry: 100788634; end: 100788a1b; -[SCCloudSyncDependencyProvidingServices initWithMemoriesProfile:dataObjectContext:memoriesProfileHandler:boltDataUploader:cloudFS:notificationPool:performer:logger:fileManager:memoriesAssetRepository:memoriesExperimentService:cloudSyncDataCapManager:memoriesUserDefaultsManager:userSession:statusServices:memoriesCSAMKeyIvFetcherObjc:memoriesCSAMKeyIvSaver:memoriesLegacyBackupDeprecationLogger:] */

undefined8 *
FUN_100788634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  func_0x000107c61174(param_11);
  func_0x000107c61174(param_12);
  func_0x000107c61174(param_13);
  func_0x000107c61174(param_14);
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  func_0x000107c61174(param_17);
  func_0x000107c61174(param_18);
  func_0x000107c61174(param_19);
  func_0x000107c61174(param_20);
  puStack_70 = PTR_PTR_1126fbaa8;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = puVar1[5];
    puVar1[5] = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = puVar1[6];
    puVar1[6] = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = puVar1[3];
    puVar1[3] = param_7;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_9);
    uVar2 = puVar1[8];
    puVar1[8] = param_9;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_11);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_11;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_12);
    uVar2 = puVar1[4];
    puVar1[4] = param_12;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_13);
    uVar2 = puVar1[10];
    puVar1[10] = param_13;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_14);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_14;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_15);
    uVar2 = puVar1[0xc];
    puVar1[0xc] = param_15;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_16);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_16;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_17);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_17;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_18);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_18;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_19);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_19;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_20);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_20;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_20);
  func_0x000107c61170(param_19);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100788a1c; end: 100788aaf;  */

void FUN_100788a1c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x80));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100788ab0; end: 100788ab7;  */

void FUN_100788ab0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100788ab8; end: 100788b0b;  */

void FUN_100788ab8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x50);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100788b0c; end: 100788b1f;  */

void FUN_100788b0c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_1002c7f44();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  *(undefined8 *)(lVar1 + 0x38) = uStack_90;
  *(undefined8 *)(lVar1 + 0x40) = uStack_98;
  *(undefined8 *)(lVar1 + 0x48) = uStack_a0;
  puVar2 = PTR_PTR_1126a92c8;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174();
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar6 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar7 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar8 = uStack_98;
  func_0x000107c61174();
  uVar9 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar10 = uStack_68;
  func_0x000107c61174();
  uVar11 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar11 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f00d2b0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar11 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar11 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00d2e0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar11 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f00d310);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar11 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f00d330);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar11 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar11);
  func_0x000107c61174(uVar9);
  func_0x000107c61174();
  uVar11 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar11);
  func_0x000107c61174();
  puVar12 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  *(undefined **)(lVar1 + 0x50) = puVar12;
  *param_1 = lVar1;
  return;
}



/* Entry: 100788b20; end: 100788ff7;  */

void FUN_100788b20(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_1002c7f44();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  puVar1 = PTR_PTR_1126a92c8;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174();
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  uVar6 = uStack_90;
  func_0x000107c61174(uStack_90);
  uVar7 = uStack_98;
  func_0x000107c61174();
  uVar8 = uStack_a0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar9 = uStack_68;
  func_0x000107c61174();
  uVar10 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar10 = 0xd000000000000024;
  func_0x000107c5fadc(0xd000000000000024,0x800000010f00d2b0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar10 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar10 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00d2e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar10 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f00d310);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar6);
  func_0x000107c61174();
  uVar10 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f00d330);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar7);
  func_0x000107c61174();
  uVar10 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar10);
  func_0x000107c61174(uVar8);
  func_0x000107c61174();
  uVar10 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar10);
  func_0x000107c61174();
  puVar11 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  *(undefined **)(param_2 + 0x50) = puVar11;
  *param_1 = param_2;
  return;
}



/* Entry: 100788ff8; end: 100789203;  */

void FUN_100788ff8(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100789000. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))();
  return;
}



/* Entry: 100789204; end: 1007892e7; -[SCCloudSyncBackgroundUploadSchedulingServiceProvider provide] */

void FUN_100789204(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126d81e8;
  func_0x000107c610f4(PTR_PTR_1126d81e8);
  func_0x000107c458f4();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1007892e8; end: 10078935b; -[SCCloudSyncBackgroundUploadSchedulingServices initWithBackgroundUploadScheduler:] */

undefined1 * FUN_1007892e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fbaa0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10078935c; end: 1007893b7;  */

void FUN_10078935c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1007893b8; end: 1007893bf;  */

void FUN_1007893b8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 200);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 1007893c0; end: 100789413;  */

void FUN_1007893c0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 200);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 100789414; end: 10078a1db;  */

void FUN_100789414(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  FUN_100083b20(&uStack_120);
  FUN_1002bc450();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  *(undefined8 *)(param_2 + 0x88) = uStack_e8;
  *(undefined8 *)(param_2 + 0x90) = uStack_f0;
  *(undefined8 *)(param_2 + 0x98) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_100;
  *(undefined8 *)(param_2 + 0xa8) = uStack_108;
  *(undefined8 *)(param_2 + 0xb0) = uStack_110;
  *(undefined8 *)(param_2 + 0xb8) = uStack_118;
  *(undefined8 *)(param_2 + 0xc0) = uStack_120;
  puVar1 = PTR_PTR_1126a9410;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar15 = uStack_e0;
  func_0x000107c61174();
  uVar16 = uStack_e8;
  func_0x000107c61174();
  uVar17 = uStack_f0;
  func_0x000107c61174();
  uVar18 = uStack_f8;
  func_0x000107c61174();
  uVar19 = uStack_100;
  func_0x000107c61174(uStack_100);
  uVar22 = uStack_108;
  func_0x000107c61174();
  uVar23 = uStack_110;
  func_0x000107c61174();
  uVar24 = uStack_118;
  func_0x000107c61174();
  uVar25 = uStack_120;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar20 = auStack_70[0];
  func_0x000107c61174();
  uVar21 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar21 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar21);
  uVar26 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00d360);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00dca0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00d2e0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(uVar26);
  uVar21 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00d8a0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(uVar26);
  uVar21 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f00d310);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00d550);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef252f0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(uVar26);
  uVar21 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(uVar26);
  uVar21 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174(uVar26);
  uVar27 = 0xd000000000000013;
  uVar21 = uVar27;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar26);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar21);
  uVar28 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef1e0c0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00d670);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef3c3c0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000013,0x800000010f00d710);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar27);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar26 = 0xd000000000000010;
  uVar21 = uVar26;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar19);
  func_0x000107c61174();
  uVar21 = 0xd000000000000011;
  func_0x000107c5fadc(0xd000000000000011,0x800000010ef331c0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar21);
  func_0x000107c61174(uVar22);
  func_0x000107c61174();
  uVar21 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00dad0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar21 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00dcd0);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar21);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar28);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61174();
  uVar21 = uVar28;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  *(undefined8 *)(param_2 + 200) = uVar21;
  *param_1 = param_2;
  return;
}



/* Entry: 10078a1dc; end: 10078a22f;  */

void FUN_10078a1dc(void)

{
  long unaff_x20;
  
  FUN_100789414(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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



/* Entry: 10078a230; end: 10078a237;  */

void FUN_10078a230(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10078a238; end: 10078a28b;  */

void FUN_10078a238(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10078a28c; end: 10078a297;  */

void FUN_10078a28c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002a02d0();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a9408;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  puVar8 = puVar2;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined **)(lVar1 + 0x30) = puVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 10078a298; end: 10078a54b;  */

void FUN_10078a298(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002a02d0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a9408;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  puVar7 = puVar1;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined **)(param_2 + 0x30) = puVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 10078a54c; end: 10078a553;  */

undefined8 FUN_10078a54c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 10078a554; end: 10078a683;  */

void FUN_10078a554(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_ZR;
  long lVar1;
  long *plVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x9;
  int extraout_w10;
  long *plVar3;
  long *aplStack_70 [3];
  long *plStack_58;
  long lStack_50;
  undefined8 uStack_48;
  
  lVar1 = param_1 + 0x28;
  uStack_48 = param_2;
  FUN_100687710(lVar1,&uStack_48);
  if (lVar1 != 0) {
    FUN_10078a684(lVar1 + 0x18);
    plVar3 = *(long **)(lVar1 + 0x18);
    lStack_50 = *(long *)(lVar1 + 0x20);
    plStack_58 = plVar3;
    if (lStack_50 != 0) {
      do {
        FUN_10064ad10();
      } while (extraout_w10 != 0);
    }
    (**(code **)(*plVar3 + 0x28))(aplStack_70,plVar3);
    FUN_100688328((char)plVar3[0x24]);
    lVar1 = 0xc0;
    if ((bool)in_ZR) {
      lVar1 = extraout_x8;
    }
    FUN_10078a7ac(*(undefined8 *)(*aplStack_70[0] + 0x28),aplStack_70[0],
                  *(undefined8 *)((long)plVar3 + lVar1),param_3);
    func_0x00010067c8a8(aplStack_70);
    plVar3 = *(long **)(param_1 + 400);
    func_0x000100686b1c(plStack_58);
    lVar1 = 0xc0;
    if ((bool)in_ZR) {
      lVar1 = extraout_x9;
    }
    func_0x000107c60de8(aplStack_70,*(undefined8 *)(extraout_x8_00 + lVar1));
    plVar2 = plStack_58;
    FUN_100686d00(plStack_58);
    FUN_10078a7ac(*(undefined8 *)(*plVar3 + 0x28),plVar3,aplStack_70,plVar2);
    FUN_10078d440();
    func_0x00010067c914(&plStack_58);
  }
  return;
}



/* Entry: 10078a684; end: 10078a6c7;  */

void FUN_10078a684(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x240);
  lVar1 = param_1;
  func_0x000107c60d9c();
  *(long *)(param_1 + 0x240) = lVar1;
  lVar2 = (lVar1 - lVar2) / 1000000;
  lVar1 = *(long *)(param_1 + 0x1b0);
  if (*(long *)(param_1 + 0x1b0) <= lVar2) {
    lVar1 = lVar2;
  }
  *(long *)(param_1 + 0x1b0) = lVar1;
  return;
}



/* Entry: 10078a6c8; end: 10078a7ab; -[SCMemoriesSearchDatabaseServiceProvider provide] */

void FUN_10078a6c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126d8ce8;
  func_0x000107c610f4(PTR_PTR_1126d8ce8);
  func_0x000107c47738();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10078a7ac; end: 10078a7c3;  */

void FUN_10078a7ac(code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00010078a7b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 10078a7c4; end: 10078a92b;  */

ulong * FUN_10078a7c4(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined1 in_ZR;
  undefined8 *puVar2;
  ulong *puVar3;
  undefined8 **ppuVar4;
  undefined8 uVar5;
  undefined8 extraout_x8;
  code *extraout_x8_00;
  code *extraout_x8_01;
  long unaff_x19;
  undefined8 *puStack_110;
  undefined *puStack_108;
  undefined8 *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  undefined **ppuStack_70;
  undefined **ppuStack_68;
  undefined **ppuStack_60;
  undefined8 uStack_58;
  undefined8 uStack_38;
  
  puVar3 = &uStack_e0;
  func_0x000100689a14();
  uStack_e0 = param_1;
  uStack_d8 = param_2;
  uStack_d0 = param_3;
  uStack_c8 = param_4;
  uStack_38 = extraout_x8;
  FUN_10060f340();
  if ((int)param_1 != 0) {
    func_0x000107c3573c();
    (*extraout_x8_00)();
    if ((param_1 & 1) == 0) {
      param_3 = *(undefined8 *)(unaff_x19 + 0x10);
      func_0x000107c2c654(&uStack_c0,*(undefined8 *)(unaff_x19 + 8));
      uStack_a8 = uStack_d8;
      uStack_b0 = uStack_e0;
      uStack_98 = uStack_c8;
      uStack_a0 = uStack_d0;
      FUN_10089ca94(auStack_80);
      ppuVar1 = ppuStack_70;
      func_0x000107c35724();
      ppuStack_68 = (undefined **)&UNK_10b2d8be8;
      ppuStack_60 = &PTR_DAT_110cd2738;
      puVar2 = (undefined8 *)0x30;
      func_0x000107c60e20();
      puVar2[1] = uStack_b8;
      *puVar2 = uStack_c0;
      puVar2[3] = uStack_d8;
      puVar2[2] = uStack_e0;
      uStack_c0 = 0;
      uStack_b8 = 0;
      puVar2[5] = uStack_c8;
      puVar2[4] = uStack_d0;
      ppuVar1[3] = (undefined *)&PTR_FUN_110878a10;
      ppuVar1[4] = &UNK_10b2d8be8;
      ppuVar1[5] = (undefined *)&PTR_DAT_110cd2738;
      ppuVar1[6] = (undefined *)puVar2;
      uStack_58 = 0;
      func_0x000107c2c694(&ppuStack_60);
      ppuVar1 = ppuStack_70;
      ppuStack_70 = (undefined **)0x0;
      FUN_10067db54(auStack_80);
      func_0x00010067cd38(&uStack_c0);
      ppuStack_60 = ppuVar1;
      uStack_90 = 0;
      uStack_88 = 0;
      ppuStack_68 = ppuVar1 + 3;
      func_0x00010067cdbc(*(undefined8 *)(unaff_x19 + 0xe0));
      (*extraout_x8_01)();
      FUN_100576684(&ppuStack_68);
      puVar3 = &uStack_90;
      FUN_10068f378();
      goto LAB_10078a8c4;
    }
  }
  FUN_10078a9dc();
LAB_10078a8c4:
  func_0x00010068e834(uStack_38);
  if ((bool)in_ZR) {
    return puVar3;
  }
  func_0x000107c60e78();
  FUN_100576684(&ppuStack_68);
  puVar2 = &uStack_90;
  FUN_10068f378();
  func_0x000107c35748();
  ppuVar4 = &puStack_110;
  pcStack_e8 = FUN_10078a92c;
  puStack_f8 = puVar3;
  puStack_f0 = &stack0xfffffffffffffff0;
  func_0x000107c61174(param_3);
  puStack_108 = PTR_PTR_1126fc060;
  puStack_110 = puVar2;
  func_0x000107c61154(&puStack_110,PTR_s_init_1125d9248);
  if (ppuVar4 != (undefined8 **)0x0) {
    func_0x000107c61174(param_3);
    uVar5 = ppuVar4[1];
    ppuVar4[1] = (undefined8 *)param_3;
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61170(param_3);
  return (ulong *)ppuVar4;
}



/* Entry: 10078a92c; end: 10078a99f; -[SCMemoriesSearchDatabaseServices initWithMemoriesSearchDatabase:] */

undefined1 * FUN_10078a92c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fc060;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10078a9a0; end: 10078a9db;  */

void FUN_10078a9a0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10078a9dc; end: 10078aa07;  */

void FUN_10078a9dc(long *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010078a9f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(*param_1 + 0x28) + 0x28))
            (*(long **)(*param_1 + 0x28),param_1[1],param_1[2],param_1[3]);
  return;
}



/* Entry: 10078aa08; end: 10078aa47;  */

void FUN_10078aa08(undefined8 param_1)

{
  long unaff_x22;
  
  func_0x00010078a9f8();
  func_0x000107c4dda4(*(undefined8 *)(unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)(param_1);
  return;
}



/* Entry: 10078aa48; end: 10078adeb;  */

bool FUN_10078aa48(long param_1)

{
  if ((*(long *)(param_1 + 0x30) != 0) && (*(char *)(*(long *)(param_1 + 0x30) + 4) == '\0')) {
    return *(long *)(param_1 + 0x38) != 0;
  }
  return false;
}



/* Entry: 10078adec; end: 10078af77; -[SCHTTPRequestCallback onWriteCompleted:totalBytesWritten:totalBytesExpectedToWrite:] */

/* WARNING: Possible PIC construction at 0x00010078ae3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010078aec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010078aed0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010078aee0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010078af44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010078af54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010078af48) */
/* WARNING: Removing unreachable block (ram,0x00010078aee4) */
/* WARNING: Removing unreachable block (ram,0x00010078af3c) */
/* WARNING: Removing unreachable block (ram,0x00010078af34) */
/* WARNING: Removing unreachable block (ram,0x00010078af40) */
/* WARNING: Removing unreachable block (ram,0x00010078aed4) */
/* WARNING: Removing unreachable block (ram,0x00010078aec4) */
/* WARNING: Removing unreachable block (ram,0x00010078ae40) */
/* WARNING: Removing unreachable block (ram,0x00010078af58) */

void FUN_10078adec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c50300(uVar1);
  func_0x000107c61180();
  func_0x000107c50384();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10078af78; end: 10078af7f;  */

void FUN_10078af78(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10078af80; end: 10078afd3;  */

void FUN_10078af80(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10078afd4; end: 10078afdf;  */

void FUN_10078afd4(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_1002bbafc();
  func_0x000107c613fc();
  FUN_10078db08(uStack_48,uStack_50,uStack_58,uStack_60);
  *param_1 = uVar1;
  return;
}



/* Entry: 10078afe0; end: 10078b08b;  */

void FUN_10078afe0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100083b20(&uStack_58);
  FUN_100083b20(&uStack_60);
  FUN_1002bbafc();
  func_0x000107c613fc();
  FUN_10078db08(uStack_48,uStack_50,uStack_58,uStack_60);
  *param_1 = param_2;
  return;
}



/* Entry: 10078b08c; end: 10078b093;  */

void FUN_10078b08c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xe0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10078b094; end: 10078b0e7;  */

void FUN_10078b094(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0xe0);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10078b0e8; end: 10078c053;  */

void FUN_10078b0e8(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  FUN_100083b20(auStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_100083b20(&uStack_88);
  FUN_100083b20(&uStack_90);
  FUN_100083b20(&uStack_98);
  FUN_100083b20(&uStack_a0);
  FUN_100083b20(&uStack_a8);
  FUN_100083b20(&uStack_b0);
  FUN_100083b20(&uStack_b8);
  FUN_100083b20(&uStack_c0);
  FUN_100083b20(&uStack_c8);
  FUN_100083b20(&uStack_d0);
  FUN_100083b20(&uStack_d8);
  FUN_100083b20(&uStack_e0);
  FUN_100083b20(&uStack_e8);
  FUN_100083b20(&uStack_f0);
  FUN_100083b20(&uStack_f8);
  FUN_100083b20(&uStack_100);
  FUN_100083b20(&uStack_108);
  FUN_100083b20(&uStack_110);
  FUN_100083b20(&uStack_118);
  FUN_100083b20(&uStack_120);
  FUN_100083b20(&uStack_128);
  FUN_100083b20(&uStack_130);
  FUN_100083b20(&uStack_138);
  FUN_1002b89b4();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  *(undefined8 *)(param_2 + 0x78) = uStack_d8;
  *(undefined8 *)(param_2 + 0x80) = uStack_e0;
  *(undefined8 *)(param_2 + 0x88) = uStack_e8;
  *(undefined8 *)(param_2 + 0x90) = uStack_f0;
  *(undefined8 *)(param_2 + 0x98) = uStack_f8;
  *(undefined8 *)(param_2 + 0xa0) = uStack_100;
  *(undefined8 *)(param_2 + 0xa8) = uStack_108;
  *(undefined8 *)(param_2 + 0xb0) = uStack_110;
  *(undefined8 *)(param_2 + 0xb8) = uStack_118;
  *(undefined8 *)(param_2 + 0xc0) = uStack_120;
  *(undefined8 *)(param_2 + 200) = uStack_128;
  *(undefined8 *)(param_2 + 0xd0) = uStack_130;
  *(undefined8 *)(param_2 + 0xd8) = uStack_138;
  puVar1 = PTR_PTR_1126a9390;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174();
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174();
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174();
  uVar14 = uStack_d8;
  func_0x000107c61174();
  uVar17 = uStack_e0;
  func_0x000107c61174();
  uVar18 = uStack_e8;
  func_0x000107c61174();
  uVar19 = uStack_f0;
  func_0x000107c61174();
  uVar20 = uStack_f8;
  func_0x000107c61174();
  uVar21 = uStack_100;
  func_0x000107c61174();
  uVar22 = uStack_108;
  func_0x000107c61174();
  uVar23 = uStack_110;
  func_0x000107c61174();
  uVar24 = uStack_118;
  func_0x000107c61174();
  uVar25 = uStack_120;
  func_0x000107c61174();
  uVar26 = uStack_128;
  func_0x000107c61174();
  uVar27 = uStack_130;
  func_0x000107c61174();
  uVar28 = uStack_138;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar15 = auStack_70[0];
  func_0x000107c61174();
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar16);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef10dd0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar16 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef1de50);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar16 = 0xd00000000000001f;
  func_0x000107c5fadc(0xd00000000000001f,0x800000010f00d6a0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef3dbc0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010f00a420);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1dff0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar16 = 0xd00000000000001e;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010f00d8a0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010efbb890);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar16 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar16);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef19dd0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f00d550);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f00d480);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00d670);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef12320);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f00d2e0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar16);
  func_0x000107c61174(uVar23);
  func_0x000107c61174(uVar29);
  uVar16 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef21240);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar16);
  func_0x000107c61174(uVar24);
  func_0x000107c61174(uVar29);
  uVar16 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f00d8f0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar16 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef29e30);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174(uVar29);
  uVar16 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef13090);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar16);
  uVar29 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f00dad0);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar16 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f00a470);
  func_0x000107c5a49c(uVar29);
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar28);
  func_0x000107c61170(uVar16);
  func_0x000107c61174();
  uVar16 = uVar29;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar29);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar21);
  func_0x000107c61170(uVar22);
  func_0x000107c61170(uVar23);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar25);
  func_0x000107c61170(uVar26);
  func_0x000107c61170(uVar27);
  func_0x000107c61170(uVar28);
  *(undefined8 *)(param_2 + 0xe0) = uVar16;
  *param_1 = param_2;
  return;
}



/* Entry: 10078c054; end: 10078c0a7;  */

void FUN_10078c054(void)

{
  long unaff_x20;
  
  FUN_10078b0e8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
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
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8));
  return;
}



/* Entry: 10078c0a8; end: 10078c0af;  */

void FUN_10078c0a8(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10078c0b0; end: 10078c103;  */

void FUN_10078c0b0(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10078c104; end: 10078c10f;  */

void FUN_10078c104(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002a0538();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a9450;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar7 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef12da0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar2);
  uVar7 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(puVar2);
  uVar7 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174();
  uVar7 = uVar8;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 10078c110; end: 10078c3cb;  */

void FUN_10078c110(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002a0538();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a9450;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef12da0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar1);
  uVar6 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef109f0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(puVar1);
  uVar6 = 0x7265536873617263;
  func_0x000107c5fadc(0x7265536873617263,0xed00007365636976);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  uVar6 = uVar7;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 10078c3cc; end: 10078c58f; -[SCRequestInfoContainer onWriteCompletedTotalBytesSent:totalBytesExpectedToSend:] */

long FUN_10078c3cc(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = param_1;
  func_0x000107c5d778();
  func_0x000107c61180();
  func_0x000107c59fa4();
  func_0x000107c61170(lVar2);
  lVar2 = param_1;
  func_0x000107c5d778(param_1);
  func_0x000107c61180();
  func_0x000107c53628();
  func_0x000107c61170(lVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61174(uVar6);
  func_0x000107c611a4(uVar6);
  lVar3 = *(long *)(param_1 + 0x30);
  func_0x000107c40794();
  func_0x000107c611a8(uVar6);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(lVar3);
  lVar2 = lVar3;
  func_0x000107c4080c();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        func_0x000107c61128(lVar3);
      }
      lVar7 = *(long *)(lVar8 * 8);
      lVar4 = param_1;
      func_0x000107c5d778(param_1);
      func_0x000107c61180();
      (**(code **)(lVar7 + 0x10))(lVar7,lVar4,0);
      func_0x000107c61170(lVar4);
      lVar8 = lVar8 + 1;
    } while (lVar2 != lVar8);
    lVar2 = lVar3;
    func_0x000107c4080c();
  }
  func_0x000107c61170(lVar3);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return lVar3;
  }
  func_0x000107c60e78();
  func_0x000107c611a8(0);
  func_0x000107c60bd8();
  return *(long *)(lVar3 + 0x48);
}



/* Entry: 10078c590; end: 10078c597; -[SCRequestInfoContainer uploadProgress] */

undefined8 FUN_10078c590(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10078c598; end: 10078c5e3;  */

void FUN_10078c598(long param_1)

{
  if (param_1 != 0) {
    func_0x000100783bc0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10078c5e4; end: 10078c74f; -[SCMemoriesThumbnailLoggerServiceProvider provide] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10078c5e4(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11272bce4;
    func_0x000107c61148();
  }
  lVar1 = lVar6;
  func_0x000107c5dac4();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = param_1 + _DAT_11272bce8;
    func_0x000107c61148();
  }
  lVar2 = lVar6;
  func_0x000107c408d0();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  lVar6 = 0;
  if (param_1 != 0) {
    lVar6 = param_1 + _DAT_11272bce0;
    func_0x000107c61148();
  }
  lVar3 = lVar6;
  func_0x000107c51600();
  func_0x000107c61180();
  func_0x000107c61170(lVar6);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  puStack_68 = &UNK_1058d9ef0;
  puStack_60 = &UNK_1108bd420;
  puVar4 = PTR_PTR_1126ae720;
  lStack_58 = lVar1;
  lStack_50 = lVar3;
  lStack_48 = lVar2;
  func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_78);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126bfc58;
  func_0x000107c610f4(PTR_PTR_1126bfc58);
  func_0x000107c48ce0();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10078c750; end: 10078c7a7; -[_TtC33SCMemoriesThumbnailLoggerServices33SCMemoriesThumbnailLoggerServices initWithThumbnailLogger:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10078c750(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  *(undefined8 *)(param_1 + _DAT_112ff5450) = param_3;
  lVar2 = param_1;
  FUN_1002a05c4();
  puVar1 = PTR_s_init_1125d9248;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174(param_3);
  func_0x000107c61154(&lStack_30,puVar1);
  return;
}



/* Entry: 10078c7a8; end: 10078c7e3;  */

void FUN_10078c7a8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10078c7e4; end: 10078c7eb;  */

void FUN_10078c7e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10078c7ec; end: 10078c83f;  */

void FUN_10078c7ec(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x30);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10078c840; end: 10078c84b;  */

void FUN_10078c840(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20)
                ,*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002a0688();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  puVar2 = PTR_PTR_1126a9458;
  func_0x000107c610f8();
  uVar3 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar4 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar5 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x10) = puVar2;
  func_0x000107c61174();
  uVar6 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar7 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(puVar2);
  uVar7 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar7);
  uVar8 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar7 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f00d710);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar7);
  func_0x000107c61174(uVar5);
  func_0x000107c61174();
  uVar7 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar8);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar7);
  func_0x000107c61174();
  uVar7 = uVar8;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x30) = uVar7;
  *param_1 = lVar1;
  return;
}



/* Entry: 10078c84c; end: 10078cb07;  */

void FUN_10078c84c(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  FUN_100083b20(&uStack_68);
  FUN_100083b20(&uStack_70);
  FUN_100083b20(&uStack_78);
  FUN_100083b20(&uStack_80);
  FUN_1002a0688();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  puVar1 = PTR_PTR_1126a9458;
  func_0x000107c610f8();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar5 = uStack_68;
  func_0x000107c61174(uStack_68);
  uVar6 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(puVar1);
  uVar6 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar6);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174(uVar3);
  func_0x000107c61174();
  uVar6 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f00d710);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar6);
  func_0x000107c61174(uVar4);
  func_0x000107c61174();
  uVar6 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef1df40);
  func_0x000107c5a49c(uVar7);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61174();
  uVar6 = uVar7;
  func_0x000107c4f570();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x30) = uVar6;
  *param_1 = param_2;
  return;
}



/* Entry: 10078cb08; end: 10078cc27; -[SCRequestManagerRunningTaskState startSendingDataForRequest:requestType:] */

void FUN_10078cb08(undefined8 param_1,long param_2,undefined8 param_3,long param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  long lStack_70;
  long lStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c61174(param_4);
  uVar1 = param_5;
  func_0x000107c61174();
  if (param_4 != 0) {
    FUN_10068d8a0();
    func_0x000107c61180();
    uVar2 = uVar1;
    func_0x000107c4d9e8();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c49820();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar1);
    if ((uVar3 < 6) && ((1L << (uVar3 & 0x3f) & 0x26U) != 0)) {
      func_0x000107c6071c();
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_88 = 0xc2000000;
      puStack_80 = &UNK_10b275df0;
      puStack_78 = &UNK_110844fe0;
      lStack_70 = param_2;
      func_0x000107c61174(param_4);
      lStack_68 = param_4;
      uStack_60 = uVar3;
      uStack_58 = param_1;
      func_0x000107c4e524(uVar4,param_3,&puStack_90);
      func_0x000107c61170(lStack_68);
    }
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return;
}



/* Entry: 10078cc28; end: 10078cd7f;  */

/* WARNING: Possible PIC construction at 0x000100787874: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100787878) */
/* WARNING: Removing unreachable block (ram,0x000100787888) */

void FUN_10078cc28(undefined8 *param_1,undefined8 param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 *unaff_x19;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar3 = param_1[0x44];
  if ((lVar3 == 0) || (func_0x0001007869b8(), (int)lVar3 == 0)) {
    func_0x000107c37294();
    if ((*(byte *)(lVar3 + 0x440) & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10078cc7c);
      (*pcVar2)();
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x52) = 0;
    unaff_x29 = &stack0xfffffffffffffff0;
    FUN_100787764();
    if (((ulong)param_1 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x10078793c);
      (*pcVar2)();
    }
    *(undefined1 *)((long)unaff_x19 + 0x239) = 1;
    if (*(int *)(unaff_x19 + 0x52) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(0,0x100787948);
      (*pcVar2)();
    }
    unaff_x20 = *(long *)(unaff_x19[0x44] + 0x178);
    if (*(char *)(unaff_x20 + 0x22) != '\x01') {
      lVar8 = unaff_x19[0x51];
      uVar1 = *(undefined4 *)(lVar8 + 0x18);
      func_0x000100783950();
      lVar3 = 0x40;
      uStack_50 = param_2;
      func_0x000107c60e20();
      func_0x0001007839c4();
      *(undefined8 *)(lVar3 + 8) = 0x10078acb0;
      *(code **)(lVar3 + 0x10) = FUN_10078c598;
      *(undefined **)(lVar3 + 0x18) = &UNK_10b3e2fec;
      *(undefined8 *)(lVar3 + 0x20) = 0x10078ad14;
      *(undefined8 *)(lVar3 + 0x28) = 0;
      *(undefined8 **)(lVar3 + 0x30) = param_1;
      uStack_58 = 0;
      *(undefined8 *)(lVar3 + 0x38) = param_2;
      lStack_48 = lVar3;
      func_0x000100787950(unaff_x20,lVar8,uVar1,&lStack_48);
      func_0x000100787be0();
      func_0x000100787be8();
      if ((int)unaff_x20 != -1) {
        func_0x00010078ad14(unaff_x19,unaff_x20);
      }
      return;
    }
    unaff_x30 = 0x100787878;
    register0x00000008 = (BADSPACEBASE *)auStack_60;
    param_1 = unaff_x19;
  }
  if (param_1[0x4d] != 0) {
    *(long *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(undefined8 **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    FUN_1001317d0();
    uVar7 = *param_1;
    puVar4 = &UNK_10f75a7da;
    puVar6 = &UNK_10f75a795;
    FUN_10012dd4c((undefined1 *)((long)register0x00000008 + -0x40),&UNK_10f75a7da,&UNK_10f75a795,
                  0x2b2);
    func_0x000100783950();
    *(undefined **)((long)register0x00000008 + -0x58) = puVar4;
    *(undefined **)((long)register0x00000008 + -0x50) = puVar6;
    uVar5 = 0x10078ce78;
    func_0x00010078cd10(0x10078ce78,0,(undefined1 *)((long)register0x00000008 + -0x58),0);
    *(undefined8 *)((long)register0x00000008 + -0x48) = uVar5;
    func_0x00010013fa70(uVar7,(undefined1 *)((long)register0x00000008 + -0x40),
                        (undefined1 *)((long)register0x00000008 + -0x48));
    func_0x000100787be0();
    func_0x000100787be8();
  }
  return;
}



/* Entry: 10078cd80; end: 10078ce17; -[SCBandwidthEstimatorExperiment finishUploadBandwidthEstimationWithRequestKey:totalBytesExpectedToSend:] */

void FUN_10078cd80(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  if (param_3 != 0) {
    func_0x000107c40794();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    pcStack_58 = FUN_10078d56c;
    puStack_50 = &UNK_110844b80;
    lStack_48 = param_1;
    lStack_40 = param_3;
    uStack_38 = param_4;
    func_0x000107c61174();
    func_0x000107c4e524(uVar1,param_2,&puStack_68);
    func_0x000107c61170(lStack_40);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 10078ce18; end: 10078cf7b;  */

bool FUN_10078ce18(long param_1)

{
  if ((*(long *)(param_1 + 0x30) != 0) && (*(char *)(*(long *)(param_1 + 0x30) + 4) == '\0')) {
    return *(long *)(param_1 + 0x38) != 0;
  }
  return false;
}



/* Entry: 10078cf7c; end: 10078d05f; -[SCMemoriesVisualTagAnalyzerServiceProvider provide] */

void FUN_10078cf7c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126d8720;
  func_0x000107c610f4(PTR_PTR_1126d8720);
  func_0x000107c47774();
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10078d060; end: 10078d083;  */

void FUN_10078d060(long param_1)

{
  if (param_1 != 0) {
    func_0x000100783bc0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 10078d084; end: 10078d0f7; -[SCMemoriesVisualTagAnalyzerServices initWithMemoriesVisualTagAnalyzer:] */

undefined1 * FUN_10078d084(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126fc0a8;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10078d0f8; end: 10078d133;  */

void FUN_10078d0f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10078d134; end: 10078d13b;  */

void FUN_10078d134(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10078d13c; end: 10078d18f;  */

void FUN_10078d13c(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  FUN_100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x20);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 10078d190; end: 10078d197;  */

void FUN_10078d190(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  FUN_100083b20(&uStack_48,lVar1,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100083b20(&uStack_50);
  FUN_100287c64();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_50;
  FUN_10078d27c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar2 = uStack_50;
  func_0x000107c61174();
  uVar3 = uStack_48;
  func_0x000107c61174();
  uVar4 = uVar3;
  func_0x00010078d308();
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  uVar5 = uVar4;
  func_0x000107c6157c();
  FUN_10078d318();
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  *(undefined8 *)(lVar1 + 0x20) = uVar5;
  *param_1 = lVar1;
  return;
}



/* Entry: 10078d198; end: 10078d27b;  */

void FUN_10078d198(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  FUN_100083b20(&uStack_48);
  FUN_100083b20(&uStack_50);
  FUN_100287c64();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_50;
  FUN_10078d27c(0);
  func_0x000107c613fc();
  func_0x000107c61174(uStack_50);
  uVar1 = uStack_50;
  func_0x000107c61174();
  uVar2 = uStack_48;
  func_0x000107c61174();
  uVar3 = uVar2;
  func_0x00010078d308();
  *(undefined8 *)(param_2 + 0x10) = uVar3;
  uVar4 = uVar3;
  func_0x000107c6157c();
  FUN_10078d318();
  func_0x000107c61574(uVar3);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
  *(undefined8 *)(param_2 + 0x20) = uVar4;
  *param_1 = param_2;
  return;
}



/* Entry: 10078d27c; end: 10078d2f7;  */

void FUN_10078d27c(undefined8 param_1)

{
  if (lRam0000000112e12ab0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e680a54);
  return;
}



/* Entry: 10078d2f8; end: 10078d317;  */

void FUN_10078d2f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf278. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleasePoolPop_11034d1d0)();
  return;
}



/* Entry: 10078d318; end: 10078d41b;  */

void FUN_10078d318(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar1 = &UNK_1104659e0;
  func_0x000107c613fc(&UNK_1104659e0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  FUN_1000285a8(0x112e12a78,&UNK_10d9ee0f0);
  func_0x000107c613fc();
  func_0x000107c61174();
  puVar2 = &UNK_101ca2120;
  FUN_1000bdd8c(&UNK_101ca2120,puVar1);
  puVar1 = &UNK_110465a08;
  func_0x000107c613fc(&UNK_110465a08,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  FUN_1000285a8(0x112e12a80,&UNK_10d9ee0f8);
  func_0x000107c613fc();
  func_0x000107c61174(uVar4);
  puVar3 = &UNK_101ca21a4;
  FUN_1000bdd8c(&UNK_101ca21a4,puVar1);
  FUN_10029bc4c(0);
  func_0x000107c610f8();
  FUN_10078d47c(puVar2,puVar3);
  return;
}



/* Entry: 10078d41c; end: 10078d43f;  */

void FUN_10078d41c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10078d440; end: 10078d44b;  */

void FUN_10078d440(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10078d44c; end: 10078d47b;  */

void FUN_10078d44c(void)

{
  return;
}



/* Entry: 10078d47c; end: 10078d53f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10078d47c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long unaff_x20;
  
  puVar2 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112ff60c0) = param_1;
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ff60c8) = uVar1;
  *(undefined8 *)(unaff_x20 + _DAT_112ff60d0) = param_2;
  uVar1 = param_2;
  func_0x000107c6157c();
  FUN_1003a5b88();
  *(undefined8 *)(unaff_x20 + _DAT_112ff60d8) = uVar1;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  func_0x000107c61574(param_2);
  return puVar2;
}



/* Entry: 10078d540; end: 10078d56b;  */

void FUN_10078d540(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10078d56c; end: 10078d59f;  */

void FUN_10078d56c(long param_1,undefined8 param_2)

{
  func_0x000107c3cd10(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bee2e70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__updateUploadWorkloadWithRequest_112596540,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30),0);
  return;
}



/* Entry: 10078d5a0; end: 10078d5a7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10078d5a0(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_100286a78();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112ff4b70) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 10078d5a8; end: 10078d613;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10078d5a8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_100286a78();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112ff4b70) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}


