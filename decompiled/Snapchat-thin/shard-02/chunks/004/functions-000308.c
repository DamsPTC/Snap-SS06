/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101d4878c; end: 101d48807; -[_TtC27SCMemPlatBackupServicesImpl30MemPlatBackupRuntimeConditions getDeviceBatteryPercentage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_101d4878c(float param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = _DAT_112e28700;
  uVar3 = *(ulong *)(param_2 + _DAT_112e28700);
  lVar2 = param_2;
  func_0x000107c61174();
  func_0x000107c49a9c();
  if ((uVar3 & 1) == 0) {
    func_0x000107c52c24(*(undefined8 *)(param_2 + lVar1),param_3,1);
  }
  func_0x000107c3e70c(*(undefined8 *)(param_2 + lVar1));
  func_0x000107c61170(lVar2);
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  return (double)param_1;
}



/* Entry: 101d48808; end: 101d4886b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_101d48808(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar3 = *(ulong *)(unaff_x20 + _DAT_112e28700);
  uVar2 = uVar3;
  func_0x000107c49a9c();
  if ((uVar2 & 1) == 0) {
    func_0x000107c52c24(uVar3,param_2,1);
  }
  uVar2 = uVar3;
  func_0x000107c3e720();
  if (uVar2 == 2) {
    bVar1 = true;
  }
  else {
    func_0x000107c3e720(uVar3);
    bVar1 = uVar3 == 3;
  }
  return bVar1;
}



/* Entry: 101d4886c; end: 101d4889f; -[_TtC27SCMemPlatBackupServicesImpl30MemPlatBackupRuntimeConditions isDeviceCharging] */

uint FUN_101d4886c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101d48808();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 101d488a0; end: 101d488af; -[_TtC27SCMemPlatBackupServicesImpl30MemPlatBackupRuntimeConditions isAppInForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_101d488a0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112e286f8);
}



/* Entry: 101d488b0; end: 101d48923; -[_TtC27SCMemPlatBackupServicesImpl30MemPlatBackupRuntimeConditions isDataSaverEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101d488b0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112e28718);
  lVar2 = lVar1;
  if (lVar1 != 0) {
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar2 = 0;
    }
    else {
      lVar2 = lVar1;
      func_0x000107c41288();
      func_0x000107c61170(lVar1);
    }
    func_0x000107c61170(param_1);
  }
  return lVar2;
}



/* Entry: 101d48924; end: 101d489b3; -[_TtC27SCMemPlatBackupServicesImpl30MemPlatBackupRuntimeConditions isBackupOnCellularEnabled] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_101d48924(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = *(ulong *)(param_1 + _DAT_112e28718);
  uVar3 = uVar2;
  if (uVar2 != 0) {
    func_0x000107c61174();
    func_0x000107c5c734();
    func_0x000107c61180();
    if (uVar2 == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = uVar2;
      func_0x000107c41288();
      if ((uVar3 & 1) == 0) {
        uVar3 = uVar2;
        func_0x000107c43c40(uVar2);
        uVar1 = uVar2;
      }
      else {
        uVar3 = 0;
        uVar1 = param_1;
        param_1 = uVar2;
      }
      func_0x000107c61170(uVar1);
    }
    func_0x000107c61170(param_1);
  }
  return uVar3;
}



/* Entry: 101d489b4; end: 101d489bb; -[_TtC27SCMemPlatBackupServicesImpl30MemPlatBackupRuntimeConditions getDailyCellularUploadUsageBytes] */

undefined8 FUN_101d489b4(void)

{
  return 0;
}



/* Entry: 101d489bc; end: 101d489c3; -[_TtC27SCMemPlatBackupServicesImpl30MemPlatBackupRuntimeConditions getDailyCellularUploadQuotaBytes] */

undefined8 FUN_101d489bc(void)

{
  return 0;
}



/* Entry: 101d489c4; end: 101d489cb; -[_TtC27SCMemPlatBackupServicesImpl30MemPlatBackupRuntimeConditions getDayThresholdForForceCellularUpload] */

undefined8 FUN_101d489c4(void)

{
  return 0;
}



/* Entry: 101d489cc; end: 101d489db; -[_TtC27SCMemPlatBackupServicesImpl30MemPlatBackupRuntimeConditions appMovedToBackground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d489cc(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112e286f8) = 0;
  return;
}



/* Entry: 101d489dc; end: 101d489f3; -[_TtC27SCMemPlatBackupServicesImpl30MemPlatBackupRuntimeConditions appCameToForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d489dc(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_112e286f8) = 1;
  return;
}



/* Entry: 101d489f4; end: 101d489f7; -[_TtC27SCMemPlatBackupServicesImpl19MemPlatBackupStatus onBackupSummaryChangedWithSummary:] */

void FUN_101d489f4(void)

{
  return;
}



/* Entry: 101d489f8; end: 101d48a17;  */

void FUN_101d489f8(void)

{
  func_0x000107c61168(&PTR_PTR_1128031e8);
  return;
}



/* Entry: 101d48a18; end: 101d48a53; -[_TtC27SCMemPlatBackupServicesImpl19MemPlatBackupStatus init] */

void FUN_101d48a18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_101d489f8();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101d48a54; end: 101d48a83;  */

void FUN_101d48a54(void)

{
  FUN_101d489f8();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101d48a84; end: 101d48d13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d48a84(undefined8 param_1,undefined8 param_2,int param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  if (param_3 != 0) {
    func_0x000107c60f38(*(undefined8 *)(unaff_x20 + _DAT_112e28798));
    puVar1 = &UNK_11047afd8;
    func_0x000107c613fc(&UNK_11047afd8,0x18,7);
    func_0x000107c61614(puVar1 + 0x10);
    puVar2 = &UNK_11047b000;
    func_0x000107c613fc(&UNK_11047b000,0x28,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    *(undefined8 *)(puVar2 + 0x18) = param_12;
    *(undefined8 *)(puVar2 + 0x20) = param_13;
    func_0x000107c6157c(param_13);
    func_0x0001000d224c(&uStack_68);
    func_0x0001000d224c(&uStack_70);
    puVar1 = &UNK_11047b028;
    func_0x000107c613fc(&UNK_11047b028,0x5c,7);
    *(undefined8 *)(puVar1 + 0x10) = param_1;
    *(undefined8 *)(puVar1 + 0x18) = param_2;
    *(int *)(puVar1 + 0x20) = param_3;
    *(undefined8 *)(puVar1 + 0x28) = param_8;
    *(undefined8 *)(puVar1 + 0x30) = param_9;
    *(undefined8 *)(puVar1 + 0x38) = param_4;
    *(undefined8 *)(puVar1 + 0x40) = param_5;
    *(undefined8 *)(puVar1 + 0x48) = param_6;
    *(undefined8 *)(puVar1 + 0x50) = param_7;
    *(undefined4 *)(puVar1 + 0x58) = param_10;
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_2);
    func_0x000107c61434(param_9);
    func_0x000100de78a0(param_5,param_6);
    func_0x000107c61174(param_7);
    uVar3 = uStack_70;
    func_0x0001048898b8(uStack_70,1,FUN_101d4e1d8,puVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uStack_68);
    func_0x000107c61170(uStack_70);
    func_0x000107c61574(puVar1);
    puVar1 = &UNK_11047b050;
    func_0x000107c613fc(&UNK_11047b050,0x20,7);
    *(code **)(puVar1 + 0x10) = FUN_101d4e1cc;
    *(undefined **)(puVar1 + 0x18) = puVar2;
    puVar4 = &UNK_11047b078;
    func_0x000107c613fc(&UNK_11047b078,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_101d4e214;
    *(undefined **)(puVar4 + 0x18) = puVar1;
    func_0x000107c6157c(puVar2);
    uVar5 = 0;
    func_0x00010488a220(0,1,FUN_101d4e21c,puVar4);
    func_0x000107c61574(uVar3);
    func_0x000107c61574(puVar4);
    puVar1 = &UNK_11047b0a0;
    func_0x000107c613fc(&UNK_11047b0a0,0x20,7);
    *(code **)(puVar1 + 0x10) = FUN_101d4e1cc;
    *(undefined **)(puVar1 + 0x18) = puVar2;
    func_0x000107c6157c(puVar2);
    func_0x000104888fc0(0,1,FUN_101d4e244,puVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c61574(uVar5);
    func_0x000107c61574(puVar1);
  }
  return;
}



/* Entry: 101d48d14; end: 101d48db3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d48d14(uint param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(param_2 + _DAT_112e28798);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c60f3c(uVar1);
    func_0x000107c61170(uVar1);
  }
  (*param_3)(param_1 & 1);
  return;
}



/* Entry: 101d48db4; end: 101d48f6f;  */

undefined8
FUN_101d48db4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8,ulong param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  puVar1 = PTR_PTR_1126a9488;
  func_0x000107c610f8(PTR_PTR_1126a9488);
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c46acc(puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c5fadc(param_5,param_6);
  func_0x000107c53474(puVar1);
  func_0x000107c61170(param_5);
  if (param_7 != 0) {
    func_0x000107c5fc48(param_7,PTR___sSSN_11034da80);
  }
  func_0x000107c54018(puVar1);
  func_0x000107c61170(param_7);
  if (param_9 >> 0x3c < 0xf) {
    func_0x000107c5ee20(param_8,param_9);
  }
  else {
    param_8 = 0;
  }
  func_0x000107c54064(puVar1);
  func_0x000107c61170(param_8);
  func_0x000107c56484(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c570b0(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c3d5cc(uVar4);
  func_0x000107c61180();
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  uVar3 = uVar4;
  func_0x000103edf4f0(uVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  return uVar3;
}



/* Entry: 101d48f70; end: 101d491a7;  */

void FUN_101d48f70(code *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  (*param_1)(1);
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000096,0x800000010f00e970);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_41 = 0;
  func_0x000107c603d0(&uStack_41,&uStack_40,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(0x726f727265206f6e,0xe800000000000000);
  uVar3 = uStack_38;
  uVar1 = uStack_40;
  func_0x000107c5fadc(uStack_40,uStack_38);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_40 = 0x6c6961746564;
  uStack_38 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_40,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd0000000000000ac;
  func_0x000107c5fadc(0xd0000000000000ac,0x800000010f00ea10);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101d491a8; end: 101d491cf;  */

void FUN_101d491a8(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 101d491d0; end: 101d49433;  */

void FUN_101d491d0(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  (*param_2)(0);
  func_0x000107c614cc(param_1,auStack_48,auStack_60);
  uVar3 = uStack_58;
  uVar5 = uStack_50;
  func_0x000107c60640(uStack_58,uStack_50);
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000096,0x800000010f00e970);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_71 = 1;
  func_0x000107c603d0(&uStack_71,&uStack_70,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(uVar3,uVar5);
  uVar3 = uStack_68;
  uVar1 = uStack_70;
  func_0x000107c5fadc(uStack_70,uStack_68);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_70 = 0x6c6961746564;
  uStack_68 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_70,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd0000000000000ac;
  func_0x000107c5fadc(0xd0000000000000ac,0x800000010f00ea10);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c6142c(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101d49434; end: 101d495cf; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager addBackupOperationForEntryId:operationType:dependencyEntryIds:detailedState:approximateTotalMediaSizeInBytes:cloudSyncOperationRequestID:origin:completion:] */

/* WARNING: Possible PIC construction at 0x000101d4957c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101d495a8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d49580) */
/* WARNING: Removing unreachable block (ram,0x000101d495ac) */

void FUN_101d49434(undefined8 param_1,undefined *param_2,undefined8 param_3,undefined4 param_4,
                  long param_5,long param_6,undefined8 param_7,undefined8 param_8,undefined4 param_9
                  ,undefined4 param_10,undefined8 param_11)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  func_0x000107c60bc4();
  func_0x000107c5faec();
  puVar3 = param_2;
  if (param_5 != 0) {
    puVar3 = PTR___sSSN_11034da80;
    func_0x000107c5fc54(param_5);
  }
  if (param_6 == 0) {
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_8);
    func_0x000107c61174(param_1);
    puVar5 = (undefined *)0xf000000000000000;
    puVar4 = puVar3;
  }
  else {
    lVar1 = param_6;
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_8);
    func_0x000107c61174(param_1);
    func_0x000107c5ee30(param_6);
    puVar4 = puVar3;
    func_0x000107c61170(lVar1);
    puVar5 = puVar3;
  }
  uVar2 = param_8;
  func_0x000107c5faec(param_8);
  func_0x000107c61170(param_8);
  puVar3 = &UNK_11047b690;
  func_0x000107c613fc(&UNK_11047b690,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_11;
  FUN_101d48a84(param_3,param_2,param_4,param_5,param_6,puVar5,param_7,uVar2,puVar4,param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(puVar4);
  return;
}



/* Entry: 101d495d0; end: 101d4977b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d495d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_58);
  func_0x0001000d224c(&uStack_60);
  puVar1 = &UNK_11047b0c8;
  func_0x000107c613fc(&UNK_11047b0c8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c61434(param_1);
  uVar2 = uStack_60;
  func_0x0001048898b8(uStack_60,1,FUN_101d4e24c,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61574(puVar1);
  puVar1 = &UNK_11047b0f0;
  func_0x000107c613fc(&UNK_11047b0f0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  puVar3 = &UNK_11047b118;
  func_0x000107c613fc(&UNK_11047b118,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_101d4e264;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  func_0x000107c6157c(param_3);
  uVar4 = 0;
  func_0x00010488a220(0,1,FUN_101d4e7d8,puVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
  puVar1 = &UNK_11047b140;
  func_0x000107c613fc(&UNK_11047b140,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x000107c6157c(param_3);
  func_0x000104888fc0(0,1,0x101d4e26c,puVar1);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 101d4977c; end: 101d4980f;  */

undefined8 FUN_101d4977c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  func_0x000107c5fc48(param_2,PTR___sSSN_11034da80);
  func_0x000107c518b8(uVar2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  uVar1 = uVar2;
  func_0x000103edf4f0(uVar2);
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 101d49810; end: 101d49a47;  */

void FUN_101d49810(code *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  (*param_1)(1);
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000034,0x800000010f00e8e0);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_41 = 0;
  func_0x000107c603d0(&uStack_41,&uStack_40,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(0x726f727265206f6e,0xe800000000000000);
  uVar3 = uStack_38;
  uVar1 = uStack_40;
  func_0x000107c5fadc(uStack_40,uStack_38);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_40 = 0x6c6961746564;
  uStack_38 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_40,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd00000000000004a;
  func_0x000107c5fadc(0xd00000000000004a,0x800000010f00e920);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101d49a48; end: 101d49cab;  */

void FUN_101d49a48(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  (*param_2)(0);
  func_0x000107c614cc(param_1,auStack_48,auStack_60);
  uVar3 = uStack_58;
  uVar5 = uStack_50;
  func_0x000107c60640(uStack_58,uStack_50);
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000034,0x800000010f00e8e0);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_71 = 1;
  func_0x000107c603d0(&uStack_71,&uStack_70,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(uVar3,uVar5);
  uVar3 = uStack_68;
  uVar1 = uStack_70;
  func_0x000107c5fadc(uStack_70,uStack_68);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_70 = 0x6c6961746564;
  uStack_68 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_70,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd00000000000004a;
  func_0x000107c5fadc(0xd00000000000004a,0x800000010f00e920);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c6142c(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101d49cac; end: 101d49cc7; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager scheduleBackupJobsForAddSnapsActionForEntryIds:completion:] */

void FUN_101d49cac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11047b668;
  func_0x000107c60bc4();
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c613fc(&UNK_11047b668,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_101d495d0(param_3,0x101d4e830,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101d49cc8; end: 101d49e3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d49cc8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x0001000d224c(&uStack_48);
  func_0x0001000d224c(&uStack_50);
  uVar1 = uStack_50;
  func_0x0001048898b8(uStack_50,1,0x101d4e854,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uStack_48);
  func_0x000107c61170(uStack_50);
  puVar2 = &UNK_11047b168;
  func_0x000107c613fc(&UNK_11047b168,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar3 = &UNK_11047b190;
  func_0x000107c613fc(&UNK_11047b190,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x101d4e274;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c6157c(param_2);
  uVar4 = 0;
  func_0x00010488a220(0,1,0x101d4e7ec,puVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar3);
  puVar2 = &UNK_11047b1b8;
  func_0x000107c613fc(&UNK_11047b1b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000104888fc0(0,1,0x101d4e27c,puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 101d49e3c; end: 101d4a073;  */

void FUN_101d49e3c(code *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  (*param_1)(1);
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000036,0x800000010f00e850);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_41 = 0;
  func_0x000107c603d0(&uStack_41,&uStack_40,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(0x726f727265206f6e,0xe800000000000000);
  uVar3 = uStack_38;
  uVar1 = uStack_40;
  func_0x000107c5fadc(uStack_40,uStack_38);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_40 = 0x6c6961746564;
  uStack_38 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_40,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd00000000000004c;
  func_0x000107c5fadc(0xd00000000000004c,0x800000010f00e890);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101d4a074; end: 101d4a2d7;  */

void FUN_101d4a074(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  (*param_2)(0);
  func_0x000107c614cc(param_1,auStack_48,auStack_60);
  uVar3 = uStack_58;
  uVar5 = uStack_50;
  func_0x000107c60640(uStack_58,uStack_50);
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000036,0x800000010f00e850);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_71 = 1;
  func_0x000107c603d0(&uStack_71,&uStack_70,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(uVar3,uVar5);
  uVar3 = uStack_68;
  uVar1 = uStack_70;
  func_0x000107c5fadc(uStack_70,uStack_68);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_70 = 0x6c6961746564;
  uStack_68 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_70,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd00000000000004c;
  func_0x000107c5fadc(0xd00000000000004c,0x800000010f00e890);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c6142c(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101d4a2d8; end: 101d4a34b; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager scheduleBackupJobsForIncompleteOperationsWithCompletion:] */

void FUN_101d4a2d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  puVar1 = &UNK_11047b640;
  func_0x000107c613fc(&UNK_11047b640,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  func_0x000107c61174(param_1);
  FUN_101d49cc8(0x101d4e82c,puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101d4a34c; end: 101d4a363;  */

void FUN_101d4a34c(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d4a364,0,0);
  return;
}



/* Entry: 101d4a364; end: 101d4a3c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4a364(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101d4a3c4;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_101d4a410();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101d4a3c4; end: 101d4a40f;  */

void FUN_101d4a3c4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  if (*(long *)(*unaff_x22 + 0x30) != 0) {
    func_0x000107c61654();
  }
                    /* WARNING: Could not recover jumptable at 0x000101d4a40c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101d4a410; end: 101d4a55b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4a410(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x0001048898b8(uStack_40,1,FUN_101d4e840,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uStack_38);
  func_0x000107c61170(uStack_40);
  puVar2 = &UNK_11047b7a8;
  func_0x000107c613fc(&UNK_11047b7a8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  puVar3 = &UNK_11047b7d0;
  func_0x000107c613fc(&UNK_11047b7d0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x101d4e7c0;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  uVar4 = 0;
  func_0x00010488a220(0,1,0x101d4e814,puVar3);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar3);
  puVar2 = &UNK_11047b7f8;
  func_0x000107c613fc(&UNK_11047b7f8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  func_0x000104888fc0(0,1,0x101d4e7c8,puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 101d4a55c; end: 101d4a5c7;  */

undefined8 FUN_101d4a55c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  func_0x000107c518bc(uVar1);
  func_0x000107c61180();
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  uVar2 = uVar1;
  func_0x000103edf4f0(uVar1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101d4a5c8; end: 101d4a803;  */

void FUN_101d4a5c8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd00000000000002b,0x800000010f00e7d0);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_51 = 0;
  func_0x000107c603d0(&uStack_51,&uStack_50,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(0x726f727265206f6e,0xe800000000000000);
  uVar3 = uStack_48;
  uVar1 = uStack_50;
  func_0x000107c5fadc(uStack_50,uStack_48);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_50 = 0x6c6961746564;
  uStack_48 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_50,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd000000000000041;
  func_0x000107c5fadc(0xd000000000000041,0x800000010f00e800);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61450(param_1);
  return;
}



/* Entry: 101d4a804; end: 101d4aac3;  */

void FUN_101d4a804(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c614cc(param_1,auStack_58,auStack_70);
  uVar3 = uStack_68;
  uVar5 = uStack_60;
  func_0x000107c60640(uStack_68,uStack_60);
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd00000000000002b,0x800000010f00e7d0);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_81 = 1;
  func_0x000107c603d0(&uStack_81,&uStack_80,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(uVar3,uVar5);
  uVar3 = uStack_78;
  uVar1 = uStack_80;
  func_0x000107c5fadc(uStack_80,uStack_78);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_80 = 0x6c6961746564;
  uStack_78 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd000000000000041;
  func_0x000107c5fadc(0xd000000000000041,0x800000010f00e800);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c6142c(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  puVar6 = (undefined8 *)PTR___ss5ErrorWS_11034ee10;
  func_0x000107c613f8();
  *puVar6 = param_1;
  func_0x000107c614b0(param_1);
  func_0x000107c61454(param_2,uVar3);
  return;
}



/* Entry: 101d4aac4; end: 101d4abef; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager scheduleBackupJobsForIncompleteOperationsWithCompletionHandler:] */

void FUN_101d4aac4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  
  lVar2 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  func_0x000107c60bc4();
  puVar1 = &UNK_11047b5c8;
  func_0x000107c613fc(&UNK_11047b5c8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  lVar2 = 0;
  func_0x000107c5fd0c();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(&stack0xffffffffffffffd0 + -extraout_x8,1,1,lVar2);
  puVar3 = &UNK_11047b5f0;
  func_0x000107c613fc(&UNK_11047b5f0,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = &UNK_10da10b00;
  *(undefined **)(puVar3 + 0x28) = puVar1;
  puVar1 = &UNK_11047b618;
  func_0x000107c613fc(&UNK_11047b618,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined **)(puVar1 + 0x20) = &UNK_10da10b08;
  *(undefined **)(puVar1 + 0x28) = puVar3;
  func_0x000107c61174(param_1);
  func_0x000100e8e0b0(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&UNK_10da10b10,puVar1);
  func_0x000107c61574();
  return;
}



/* Entry: 101d4abf0; end: 101d4ac2f;  */

void FUN_101d4abf0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  func_0x000107c61174(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d4ac30,0,0);
  return;
}



/* Entry: 101d4ac30; end: 101d4ac8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4ac30(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101d4ac90;
  func_0x000107c61448(unaff_x22 + 0x10,1);
  FUN_101d4a410();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101d4ac90; end: 101d4acf3;  */

void FUN_101d4ac90(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x60) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101d4acf4;
  }
  else {
    func_0x000107c61654();
    pcVar1 = FUN_101d4ad34;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d4acf4; end: 101d4ad33;  */

void FUN_101d4acf4(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x58));
  (**(code **)(lVar1 + 0x10))(lVar1,0);
                    /* WARNING: Could not recover jumptable at 0x000101d4ad30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d4ad34; end: 101d4ad9b;  */

void FUN_101d4ad34(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar3 = *(long *)(unaff_x22 + 0x50);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x58));
  uVar2 = uVar1;
  func_0x000107c5ed2c(uVar1);
  func_0x000107c614ac(uVar1);
  (**(code **)(lVar3 + 0x10))(lVar3,uVar2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101d4ad98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d4ad9c; end: 101d4af87;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_101d4ad9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126b2798;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x0001000d224c(&uStack_68);
  func_0x0001000d224c(&uStack_70);
  puVar2 = &UNK_11047b1e0;
  func_0x000107c613fc(&UNK_11047b1e0,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = unaff_x20;
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112e28770,&PTR_PTR_1126a9478);
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar1);
  func_0x000107c61174();
  uVar4 = uStack_70;
  func_0x0001048898b8(uStack_70,1,FUN_101d4e284,puVar2,uVar3);
  func_0x000107c61574(uStack_68);
  func_0x000107c61170(uStack_70);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11047b208;
  func_0x000107c613fc(&UNK_11047b208,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_3);
  uVar3 = 0;
  func_0x00010488a220(0,1,0x101d4e2a0,puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11047b230;
  func_0x000107c613fc(&UNK_11047b230,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  func_0x000107c6157c(param_5);
  func_0x000104888fc0(0,1,FUN_101d4e2bc,puVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar2);
  return puVar1;
}



/* Entry: 101d4af88; end: 101d4b09f;  */

undefined8
FUN_101d4af88(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar1 = *param_1;
  func_0x000107c3e60c(uVar1,param_2,param_2);
  func_0x000107c61180();
  puVar2 = &UNK_11047b708;
  func_0x000107c613fc(&UNK_11047b708,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  uStack_50 = 0x101d4e70c;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_11047b720;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(uVar1);
  func_0x000107c61174(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c3d5fc(param_3);
  func_0x000107c60bd0(ppuVar3);
  func_0x0001000285a8(0x112e28778,&UNK_10da10b18);
  uVar4 = uVar1;
  func_0x000103edf20c(uVar1);
  func_0x000107c61170(uVar1);
  return uVar4;
}



/* Entry: 101d4b0a0; end: 101d4b34b;  */

void FUN_101d4b0a0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 uStack_51;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000107c3f474();
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000028,0x800000010f00e760);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_51 = 2;
  func_0x000107c603d0(&uStack_51,&uStack_50,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(0x726f727265206f6e,0xe800000000000000);
  uVar3 = uStack_48;
  uVar1 = uStack_50;
  func_0x000107c5fadc(uStack_50,uStack_48);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_50 = 0x6c6961746564;
  uStack_48 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_50,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd00000000000003e;
  func_0x000107c5fadc(0xd00000000000003e,0x800000010f00e790);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  puVar5 = &UNK_11047b758;
  func_0x000107c613fc(&UNK_11047b758,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = param_2;
  func_0x000107c61174(param_2);
  uVar3 = 0xa3;
  func_0x000100859150(0xa3,0,0x48,4,0,0,&UNK_10da10b28,puVar5,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar3);
  return;
}



/* Entry: 101d4b34c; end: 101d4b363;  */

void FUN_101d4b34c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x90) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101d4b364,0,0);
  return;
}



/* Entry: 101d4b364; end: 101d4b3ff;  */

void FUN_101d4b364(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101d4b400;
  lVar1 = unaff_x22 + 0x10;
  func_0x000107c61448(lVar1,1);
  uVar2 = 0x112d61d38;
  func_0x0001000285a8(0x112d61d38,&UNK_10d927cc0);
  *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
  *(undefined **)(unaff_x22 + 0x60) = &UNK_10117968c;
  *(undefined **)(unaff_x22 + 0x68) = &UNK_11047b770;
  *(long *)(unaff_x22 + 0x70) = lVar1;
  func_0x000107c51914(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101d4b400; end: 101d4b457;  */

void FUN_101d4b400(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x98) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101d4b458;
  }
  else {
    pcVar1 = FUN_101d4b464;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101d4b458; end: 101d4b463;  */

void FUN_101d4b458(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000101d4b460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d4b464; end: 101d4b49f;  */

void FUN_101d4b464(void)

{
  long unaff_x22;
  
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x000101d4b49c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101d4b4a0; end: 101d4b70f;  */

void FUN_101d4b4a0(long *param_1,code *param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_31;
  
  lVar1 = *param_1;
  func_0x000107c42a28();
  func_0x000107c61180();
  if (lVar1 == 0) {
    (*param_4)();
    uStack_50 = 0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c602fc(0x12);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
    func_0x000107c5fb78(0x205d,0xe200000000000000);
    func_0x000107c5fb78(0xd000000000000028,0x800000010f00e760);
    func_0x000107c5fb78(0x20,0xe100000000000000);
    uStack_31 = 0;
    func_0x000107c603d0(&uStack_31,&uStack_50,&UNK_11047adb8,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0x206874697720,0xe600000000000000);
    func_0x000107c5fb78(0x726f727265206f6e,0xe800000000000000);
    uVar3 = uStack_48;
    uVar2 = uStack_50;
    func_0x000107c5fadc(uStack_50,uStack_48);
    func_0x000107c6142c(uVar3);
    lVar1 = 0x112d39140;
    func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
    func_0x000107c61534();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    uStack_50 = 0x6c6961746564;
    uStack_48 = 0xe600000000000000;
    func_0x000107c602d4(lVar1 + 0x20,&uStack_50,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    uVar3 = 0;
    FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    *(undefined8 *)(lVar1 + 0x60) = uVar3;
    *(undefined8 *)(lVar1 + 0x48) = uVar2;
    func_0x000107c61174(uVar2);
    lVar4 = lVar1;
    func_0x000100dfa3f0(lVar1);
    func_0x000107c61588(lVar1);
    func_0x000100e1766c(lVar1 + 0x20);
    lVar5 = lVar4;
    func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar4);
    lVar1 = -0x2fffffffffffffc2;
    func_0x000107c5fadc(0xd00000000000003e,0x800000010f00e790);
    func_0x000107c2c4c0(0x40,lVar5,lVar1);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(lVar5);
  }
  else {
    (*param_2)();
  }
  func_0x000107c61170(lVar1);
  return;
}



/* Entry: 101d4b710; end: 101d4b9eb;  */

void FUN_101d4b710(undefined8 param_1,code *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126a9480;
  func_0x000107c610f8(PTR_PTR_1126a9480);
  uVar4 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f00e6d0);
  func_0x000107c45e7c(puVar1);
  func_0x000107c61170(uVar4);
  (*param_2)(puVar1);
  func_0x000107c614cc(param_1,auStack_58,auStack_70);
  uVar4 = uStack_68;
  uVar6 = uStack_60;
  func_0x000107c60640(uStack_68,uStack_60);
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000028,0x800000010f00e760);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_81 = 1;
  func_0x000107c603d0(&uStack_81,&uStack_80,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(uVar4,uVar6);
  uVar4 = uStack_78;
  uVar2 = uStack_80;
  func_0x000107c5fadc(uStack_80,uStack_78);
  func_0x000107c6142c(uVar4);
  lVar3 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar3 + 0x18) = 2;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  uStack_80 = 0x6c6961746564;
  uStack_78 = 0xe600000000000000;
  func_0x000107c602d4(lVar3 + 0x20,&uStack_80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar4 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar3 + 0x60) = uVar4;
  *(undefined8 *)(lVar3 + 0x48) = uVar2;
  func_0x000107c61174(uVar2);
  lVar5 = lVar3;
  func_0x000100dfa3f0(lVar3);
  func_0x000107c61588(lVar3);
  func_0x000100e1766c(lVar3 + 0x20);
  lVar3 = lVar5;
  func_0x000107c5f9dc(lVar5,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar5);
  uVar4 = 0xd00000000000003e;
  func_0x000107c5fadc(0xd00000000000003e,0x800000010f00e790);
  func_0x000107c2c4c0(0x40,lVar3,uVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c6142c(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101d4b9ec; end: 101d4bacf; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager backupWithBackupOptions:onSuccess:onError:] */

void FUN_101d4b9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_11047b578;
  func_0x000107c613fc(&UNK_11047b578,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = &UNK_11047b5a0;
  func_0x000107c613fc(&UNK_11047b5a0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar3 = param_3;
  FUN_101d4ad9c(param_3,0x101d4e83c,puVar1,FUN_101d4e828,puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101d4bad0; end: 101d4bcc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_101d4bad0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR_PTR_1126b2798;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x0001000d224c(&uStack_68);
  func_0x0001000d224c(&uStack_70);
  puVar2 = &UNK_11047b258;
  func_0x000107c613fc(&UNK_11047b258,0x18,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  puVar3 = &UNK_11047b280;
  func_0x000107c613fc(&UNK_11047b280,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0x101d4e2c4;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  uVar4 = 0;
  FUN_101d4e6a8(0,0x112e28770,&PTR_PTR_1126a9478);
  func_0x000107c61174(puVar1);
  uVar5 = uStack_70;
  func_0x0001048898b8(uStack_70,1,FUN_101d4e2cc,puVar3,uVar4);
  func_0x000107c61574(uStack_68);
  func_0x000107c61170(uStack_70);
  func_0x000107c61574(puVar3);
  puVar2 = &UNK_11047b2a8;
  func_0x000107c613fc(&UNK_11047b2a8,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_2);
  uVar4 = 0;
  func_0x00010488a220(0,1,0x101d4e324,puVar2);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11047b2d0;
  func_0x000107c613fc(&UNK_11047b2d0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_4);
  func_0x000104888fc0(0,1,FUN_101d4e340,puVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar2);
  return puVar1;
}



/* Entry: 101d4bcc4; end: 101d4bdbf;  */

undefined8 FUN_101d4bcc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar2 = &puStack_70;
  func_0x000107c3e5f0();
  func_0x000107c61180();
  puVar1 = &UNK_11047b6b8;
  func_0x000107c613fc(&UNK_11047b6b8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  pcStack_50 = FUN_101d4e6e8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000b0c7c;
  puStack_58 = &UNK_11047b6d0;
  puStack_48 = puVar1;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c3d5fc(param_2);
  func_0x000107c60bd0(ppuVar2);
  func_0x0001000285a8(0x112e28778,&UNK_10da10b18);
  uVar3 = param_1;
  func_0x000103edf20c(param_1);
  func_0x000107c61170(param_1);
  return uVar3;
}



/* Entry: 101d4bdc0; end: 101d4c24f;  */

void FUN_101d4bdc0(long *param_1,code *param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_51;
  
  lVar1 = *param_1;
  pcVar7 = param_2;
  func_0x000107c42a28();
  func_0x000107c61180();
  if (lVar1 == 0) {
    (*param_4)();
    uStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c602fc(0x12);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
    func_0x000107c5fb78(0x205d,0xe200000000000000);
    func_0x000107c5fb78(0xd000000000000029,0x800000010f00e6f0);
    func_0x000107c5fb78(0x20,0xe100000000000000);
    uStack_51 = 0;
    func_0x000107c603d0(&uStack_51,&uStack_78,&UNK_11047adb8,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0x206874697720,0xe600000000000000);
    func_0x000107c5fb78(0x726f727265206f6e,0xe800000000000000);
    uVar2 = uStack_70;
    uVar4 = uStack_78;
    func_0x000107c5fadc(uStack_78,uStack_70);
    func_0x000107c6142c(uVar2);
    lVar1 = 0x112d39140;
    func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
    func_0x000107c61534();
    *(undefined8 *)(lVar1 + 0x18) = 2;
    *(undefined8 *)(lVar1 + 0x10) = 1;
    uStack_78 = 0x6c6961746564;
    uStack_70 = 0xe600000000000000;
    func_0x000107c602d4(lVar1 + 0x20,&uStack_78,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    uVar2 = 0;
    FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    *(undefined8 *)(lVar1 + 0x60) = uVar2;
    *(undefined8 *)(lVar1 + 0x48) = uVar4;
    func_0x000107c61174(uVar4);
    lVar5 = lVar1;
    func_0x000100dfa3f0(lVar1);
    func_0x000107c61588(lVar1);
    func_0x000100e1766c(lVar1 + 0x20);
    lVar6 = lVar5;
    func_0x000107c5f9dc(lVar5,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar5);
    uVar2 = 0xd00000000000003f;
    func_0x000107c5fadc(0xd00000000000003f,0x800000010f00e720);
    func_0x000107c2c4c0(0x40,lVar6,uVar2);
  }
  else {
    (*param_2)();
    lVar5 = lVar1;
    func_0x000107c4cd90(lVar1);
    func_0x000107c61180();
    lVar6 = lVar5;
    func_0x000107c5faec();
    func_0x000107c61170(lVar5);
    uStack_78 = 0;
    uStack_70 = 0xe000000000000000;
    func_0x000107c61434(pcVar7);
    func_0x000107c602fc(0x12);
    func_0x000107c5fb78(0x5b,0xe100000000000000);
    func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
    func_0x000107c5fb78(0x205d,0xe200000000000000);
    func_0x000107c5fb78(0xd000000000000029,0x800000010f00e6f0);
    func_0x000107c5fb78(0x20,0xe100000000000000);
    uStack_51 = 1;
    func_0x000107c603d0(&uStack_51,&uStack_78,&UNK_11047adb8,
                        PTR___ss26DefaultStringInterpolationVN_11034ec00,
                        PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
    func_0x000107c5fb78(0x206874697720,0xe600000000000000);
    func_0x000107c5fb78(lVar6,pcVar7);
    func_0x000107c6142c(pcVar7);
    uVar2 = uStack_70;
    uVar4 = uStack_78;
    func_0x000107c5fadc(uStack_78,uStack_70);
    func_0x000107c6142c(uVar2);
    lVar5 = 0x112d39140;
    func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
    func_0x000107c61534();
    *(undefined8 *)(lVar5 + 0x18) = 2;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    uStack_78 = 0x6c6961746564;
    uStack_70 = 0xe600000000000000;
    func_0x000107c602d4(lVar5 + 0x20,&uStack_78,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    uVar2 = 0;
    FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    *(undefined8 *)(lVar5 + 0x60) = uVar2;
    *(undefined8 *)(lVar5 + 0x48) = uVar4;
    func_0x000107c61174(uVar4);
    lVar3 = lVar5;
    func_0x000100dfa3f0(lVar5);
    func_0x000107c61588(lVar5);
    func_0x000100e1766c(lVar5 + 0x20);
    lVar6 = lVar3;
    func_0x000107c5f9dc(lVar3,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar3);
    uVar2 = 0xd00000000000003f;
    func_0x000107c5fadc(0xd00000000000003f,0x800000010f00e720);
    func_0x000107c2c4c0(0x40,lVar6,uVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(pcVar7);
  }
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101d4c250; end: 101d4c523;  */

void FUN_101d4c250(undefined8 param_1,code *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar1 = PTR_PTR_1126a9480;
  func_0x000107c610f8(PTR_PTR_1126a9480);
  uVar6 = 0xd000000000000015;
  uVar8 = 0x800000010f00e6d0;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f00e6d0);
  func_0x000107c45e7c(puVar1);
  func_0x000107c61170(uVar6);
  (*param_2)(puVar1);
  puVar2 = puVar1;
  func_0x000107c4cd90(puVar1);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5faec();
  func_0x000107c61170(puVar2);
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c61434(uVar8);
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000029,0x800000010f00e6f0);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_61 = 1;
  func_0x000107c603d0(&uStack_61,&uStack_60,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(puVar3,uVar8);
  func_0x000107c6142c(uVar8);
  uVar6 = uStack_58;
  uVar4 = uStack_60;
  func_0x000107c5fadc(uStack_60,uStack_58);
  func_0x000107c6142c(uVar6);
  lVar5 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar5 + 0x18) = 2;
  *(undefined8 *)(lVar5 + 0x10) = 1;
  uStack_60 = 0x6c6961746564;
  uStack_58 = 0xe600000000000000;
  func_0x000107c602d4(lVar5 + 0x20,&uStack_60,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar6 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar5 + 0x60) = uVar6;
  *(undefined8 *)(lVar5 + 0x48) = uVar4;
  func_0x000107c61174(uVar4);
  lVar7 = lVar5;
  func_0x000100dfa3f0(lVar5);
  func_0x000107c61588(lVar5);
  func_0x000100e1766c(lVar5 + 0x20);
  lVar5 = lVar7;
  func_0x000107c5f9dc(lVar7,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar7);
  uVar6 = 0xd00000000000003f;
  func_0x000107c5fadc(0xd00000000000003f,0x800000010f00e720);
  func_0x000107c2c4c0(0x40,lVar5,uVar6);
  func_0x000107c61170(puVar1);
  func_0x000107c6142c(uVar8);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar6);
  return;
}



/* Entry: 101d4c524; end: 101d4c6a3; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager backupForLogoutActionOnSuccess:onError:] */

void FUN_101d4c524(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar1 = &UNK_11047b528;
  func_0x000107c613fc(&UNK_11047b528,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  puVar2 = &UNK_11047b550;
  func_0x000107c613fc(&UNK_11047b550,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  uVar3 = 0x101d4e838;
  FUN_101d4bad0(0x101d4e838,puVar1,FUN_101d4e4d0,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101d4c6a4; end: 101d4c70f;  */

undefined8 FUN_101d4c6a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  func_0x000107c518c4(uVar1);
  func_0x000107c61180();
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  uVar2 = uVar1;
  func_0x000103edf4f0(uVar1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101d4c710; end: 101d4c95f;  */

void FUN_101d4c710(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  func_0x000107c614cc(param_1,auStack_48,auStack_60);
  uVar3 = uStack_58;
  uVar5 = uStack_50;
  func_0x000107c60640(uStack_58,uStack_50);
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd00000000000002e,0x800000010f00e650);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_71 = 1;
  func_0x000107c603d0(&uStack_71,&uStack_70,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(uVar3,uVar5);
  uVar3 = uStack_68;
  uVar1 = uStack_70;
  func_0x000107c5fadc(uStack_70,uStack_68);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_70 = 0x6c6961746564;
  uStack_68 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_70,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd000000000000044;
  func_0x000107c5fadc(0xd000000000000044,0x800000010f00e680);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c6142c(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101d4c960; end: 101d4c987; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager schedulePendingBackupJobsForEnteringMemories] */

void FUN_101d4c960(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000101d4c5e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101d4c988; end: 101d4cb23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4c988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_58);
  func_0x0001000d224c(&uStack_60);
  puVar1 = &UNK_11047b2f8;
  func_0x000107c613fc(&UNK_11047b2f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  uVar2 = 0;
  FUN_101d4e6a8(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  func_0x000107c61434(param_1);
  uVar3 = uStack_60;
  func_0x0001048898b8(uStack_60,1,FUN_101d4e348,puVar1,uVar2);
  func_0x000107c61574(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61574(puVar1);
  puVar1 = &UNK_11047b320;
  func_0x000107c613fc(&UNK_11047b320,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x000107c6157c(param_3);
  uVar2 = 0;
  func_0x00010488a220(0,1,FUN_101d4e360,puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar1);
  puVar1 = &UNK_11047b348;
  func_0x000107c613fc(&UNK_11047b348,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x000107c6157c(param_3);
  func_0x000104888fc0(0,1,FUN_101d4e3d0,puVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 101d4cb24; end: 101d4cbb7;  */

undefined8 FUN_101d4cb24(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  func_0x000107c5fc48(param_2,PTR___sSSN_11034da80);
  func_0x000107c416b4(uVar2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x0001000285a8(0x112d55e78,&UNK_10d91cd60);
  uVar1 = uVar2;
  func_0x000103edf20c(uVar2);
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 101d4cbb8; end: 101d4ce1f;  */

void FUN_101d4cbb8(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  (*param_2)(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c614cc(param_1,auStack_48,auStack_60);
  uVar3 = uStack_58;
  uVar5 = uStack_50;
  func_0x000107c60640(uStack_58,uStack_50);
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd00000000000003a,0x800000010f00e5b0);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_71 = 1;
  func_0x000107c603d0(&uStack_71,&uStack_70,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(uVar3,uVar5);
  uVar3 = uStack_68;
  uVar1 = uStack_70;
  func_0x000107c5fadc(uStack_70,uStack_68);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_70 = 0x6c6961746564;
  uStack_68 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_70,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd000000000000050;
  func_0x000107c5fadc(0xd000000000000050,0x800000010f00e5f0);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c6142c(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101d4ce20; end: 101d4ce3b; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager deleteBackupOperationsAndDescendantsWithEntryIds:completion:] */

void FUN_101d4ce20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11047b500;
  func_0x000107c60bc4();
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c613fc(&UNK_11047b500,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_101d4c988(param_3,FUN_101d4e490,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101d4ce3c; end: 101d4cee3;  */

void FUN_101d4ce3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,code *param_7)

{
  func_0x000107c60bc4();
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  func_0x000107c613fc(param_5,0x18,7);
  *(undefined8 *)(param_5 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  (*param_7)(param_3,param_6,param_5);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 101d4cee4; end: 101d4d083;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4cee4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x0001000d224c(&uStack_58);
  func_0x0001000d224c(&uStack_60);
  puVar1 = &UNK_11047b370;
  func_0x000107c613fc(&UNK_11047b370,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  uVar2 = 0;
  FUN_101d4e6a8(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61434(param_2);
  uVar3 = uStack_60;
  func_0x0001048898b8(uStack_60,1,FUN_101d4e3d8,puVar1,uVar2);
  func_0x000107c61574(uStack_58);
  func_0x000107c61170(uStack_60);
  func_0x000107c61574(puVar1);
  puVar1 = &UNK_11047b398;
  func_0x000107c613fc(&UNK_11047b398,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_4);
  uVar2 = 0;
  func_0x00010488a220(0,1,0x101d4e3f0,puVar1);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(puVar1);
  puVar1 = &UNK_11047b3c0;
  func_0x000107c613fc(&UNK_11047b3c0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_4);
  func_0x000104888fc0(0,1,FUN_101d4e408,puVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 101d4d084; end: 101d4d10f;  */

undefined8 FUN_101d4d084(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c449e8(uVar2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
  uVar1 = uVar2;
  func_0x000103edf20c(uVar2);
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 101d4d110; end: 101d4d35b;  */

void FUN_101d4d110(undefined8 *param_1,code *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_31;
  
  func_0x000107c3ebcc(*param_1);
  (*param_2)();
  uStack_50 = 0;
  uStack_48 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000038,0x800000010f00e520);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_31 = 0;
  func_0x000107c603d0(&uStack_31,&uStack_50,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(0x726f727265206f6e,0xe800000000000000);
  uVar3 = uStack_48;
  uVar1 = uStack_50;
  func_0x000107c5fadc(uStack_50,uStack_48);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_50 = 0x6c6961746564;
  uStack_48 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_50,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd00000000000004e;
  func_0x000107c5fadc(0xd00000000000004e,0x800000010f00e560);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101d4d35c; end: 101d4d5bf;  */

void FUN_101d4d35c(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  (*param_2)(0);
  func_0x000107c614cc(param_1,auStack_48,auStack_60);
  uVar3 = uStack_58;
  uVar5 = uStack_50;
  func_0x000107c60640(uStack_58,uStack_50);
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000038,0x800000010f00e520);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_71 = 1;
  func_0x000107c603d0(&uStack_71,&uStack_70,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(uVar3,uVar5);
  uVar3 = uStack_68;
  uVar1 = uStack_70;
  func_0x000107c5fadc(uStack_70,uStack_68);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_70 = 0x6c6961746564;
  uStack_68 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_70,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd00000000000004e;
  func_0x000107c5fadc(0xd00000000000004e,0x800000010f00e560);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c6142c(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101d4d5c0; end: 101d4d65f; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager hasOperationForCloudSyncOperationRequestID:completion:] */

void FUN_101d4d5c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_11047b4d8;
  func_0x000107c613fc(&UNK_11047b4d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  func_0x000107c61174(param_1);
  FUN_101d4cee4(param_3,param_2,FUN_101d4e47c,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101d4d660; end: 101d4d81b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4d660(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001000d224c(&uStack_68);
  func_0x0001000d224c(&uStack_70);
  puVar1 = &UNK_11047b3e8;
  func_0x000107c613fc(&UNK_11047b3e8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c61434(param_1);
  uVar2 = uStack_70;
  func_0x0001048898b8(uStack_70,1,FUN_101d4e410,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(uStack_68);
  func_0x000107c61170(uStack_70);
  func_0x000107c61574(puVar1);
  puVar1 = &UNK_11047b410;
  func_0x000107c613fc(&UNK_11047b410,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  puVar3 = &UNK_11047b438;
  func_0x000107c613fc(&UNK_11047b438,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_101d4e428;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  func_0x000107c6157c(param_3);
  uVar4 = 0;
  func_0x00010488a220(0,1,0x101d4e800,puVar3);
  func_0x000107c61574(uVar2);
  func_0x000107c61574(puVar3);
  puVar1 = &UNK_11047b460;
  func_0x000107c613fc(&UNK_11047b460,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  func_0x000107c6157c(param_5);
  func_0x000104888fc0(0,1,0x101d4e430,puVar1);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 101d4d81c; end: 101d4d8af;  */

undefined8 FUN_101d4d81c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_1;
  func_0x000107c5fc48(param_2,PTR___sSSN_11034da80);
  func_0x000107c416b8(uVar2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  func_0x0001000285a8(0x112d51a30,&UNK_10d925850);
  uVar1 = uVar2;
  func_0x000103edf4f0(uVar2);
  func_0x000107c61170(uVar2);
  return uVar1;
}



/* Entry: 101d4d8b0; end: 101d4dae3;  */

void FUN_101d4d8b0(code *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  (*param_1)();
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000049,0x800000010f00e470);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_41 = 0;
  func_0x000107c603d0(&uStack_41,&uStack_40,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(0x726f727265206f6e,0xe800000000000000);
  uVar3 = uStack_38;
  uVar1 = uStack_40;
  func_0x000107c5fadc(uStack_40,uStack_38);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_40 = 0x6c6961746564;
  uStack_38 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_40,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd00000000000005f;
  func_0x000107c5fadc(0xd00000000000005f,0x800000010f00e4c0);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101d4dae4; end: 101d4dd97;  */

void FUN_101d4dae4(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uStack_a1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  func_0x000107c614cc(param_1,auStack_58,auStack_70);
  uVar3 = uStack_60;
  func_0x000107c60640(uStack_68,uStack_60);
  (*param_2)();
  func_0x000107c6142c(uVar3);
  func_0x000107c614cc(param_1,auStack_78,auStack_90);
  uVar3 = uStack_88;
  uVar5 = uStack_80;
  func_0x000107c60640(uStack_88,uStack_80);
  uStack_a0 = 0;
  uStack_98 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000049,0x800000010f00e470);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_a1 = 1;
  func_0x000107c603d0(&uStack_a1,&uStack_a0,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(uVar3,uVar5);
  uVar3 = uStack_98;
  uVar1 = uStack_a0;
  func_0x000107c5fadc(uStack_a0,uStack_98);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_a0 = 0x6c6961746564;
  uStack_98 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_a0,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd00000000000005f;
  func_0x000107c5fadc(0xd00000000000005f,0x800000010f00e4c0);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c6142c(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101d4dd98; end: 101d4de77; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager deleteBackupOperationsForRequestIDs:onSuccess:onFailure:] */

/* WARNING: Possible PIC construction at 0x000101d4de5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101d4de60) */

void FUN_101d4dd98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  puVar1 = &UNK_11047b488;
  func_0x000107c613fc(&UNK_11047b488,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  puVar2 = &UNK_11047b4b0;
  func_0x000107c613fc(&UNK_11047b4b0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  func_0x000107c61174(param_1);
  FUN_101d4d660(param_3,0x101d4e438,puVar1,FUN_101d4e444,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101d4de78; end: 101d4deaf; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager waitForAllAddOperationToTacomaToFinish] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4de78(undefined8 param_1)

{
  func_0x000107c61174();
  func_0x000107c5ffb4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101d4deb0; end: 101d4ded7;  */

void FUN_101d4deb0(undefined8 *param_1)

{
  func_0x000107c5af4c(*param_1);
  return;
}



/* Entry: 101d4ded8; end: 101d4e12f;  */

void FUN_101d4ded8(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  func_0x000107c614cc(param_1,auStack_48,auStack_60);
  uVar3 = uStack_58;
  uVar5 = uStack_50;
  func_0x000107c60640(uStack_58,uStack_50);
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0x6976726553646e65,0xec00000029286563);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_71 = 1;
  func_0x000107c603d0(&uStack_71,&uStack_70,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(uVar3,uVar5);
  uVar3 = uStack_68;
  uVar1 = uStack_70;
  func_0x000107c5fadc(uStack_70,uStack_68);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_70 = 0x6c6961746564;
  uStack_68 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_70,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f00e440);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c6142c(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101d4e130; end: 101d4e1cb; -[_TtC27SCMemPlatBackupServicesImpl20MemPlatBackupManager endService] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4e130(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_38);
  uVar1 = 0;
  func_0x00010488a220(0,1,FUN_101d4deb0,0);
  func_0x000107c61574(uStack_38);
  func_0x000104888fc0(0,1,FUN_101d4ded8,0);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101d4e1cc; end: 101d4e1d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101d4e1cc(uint param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_58,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + _DAT_112e28798);
    func_0x000107c61174(uVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c60f3c(uVar3);
    func_0x000107c61170(uVar3);
  }
  (*pcVar1)(param_1 & 1);
  return;
}



/* Entry: 101d4e1d8; end: 101d4e213;  */

void FUN_101d4e1d8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d48db4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined4 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined4 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 101d4e214; end: 101d4e21b;  */

void FUN_101d4e214(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  (**(code **)(unaff_x20 + 0x10))(1,*(undefined8 *)(unaff_x20 + 0x18));
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000096,0x800000010f00e970);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_41 = 0;
  func_0x000107c603d0(&uStack_41,&uStack_40,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(0x726f727265206f6e,0xe800000000000000);
  uVar3 = uStack_38;
  uVar1 = uStack_40;
  func_0x000107c5fadc(uStack_40,uStack_38);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_40 = 0x6c6961746564;
  uStack_38 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_40,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd0000000000000ac;
  func_0x000107c5fadc(0xd0000000000000ac,0x800000010f00ea10);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101d4e21c; end: 101d4e243;  */

void FUN_101d4e21c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101d4e244; end: 101d4e24b;  */

void FUN_101d4e244(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  (**(code **)(unaff_x20 + 0x10))(0,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c614cc(param_1,auStack_48,auStack_60);
  uVar3 = uStack_58;
  uVar5 = uStack_50;
  func_0x000107c60640(uStack_58,uStack_50);
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000096,0x800000010f00e970);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_71 = 1;
  func_0x000107c603d0(&uStack_71,&uStack_70,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(uVar3,uVar5);
  uVar3 = uStack_68;
  uVar1 = uStack_70;
  func_0x000107c5fadc(uStack_70,uStack_68);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_70 = 0x6c6961746564;
  uStack_68 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_70,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd0000000000000ac;
  func_0x000107c5fadc(0xd0000000000000ac,0x800000010f00ea10);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c6142c(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101d4e24c; end: 101d4e263;  */

void FUN_101d4e24c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d4977c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d4e264; end: 101d4e283;  */

void FUN_101d4e264(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 uStack_41;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  (**(code **)(unaff_x20 + 0x10))(1,*(undefined8 *)(unaff_x20 + 0x18));
  uStack_40 = 0;
  uStack_38 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000034,0x800000010f00e8e0);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_41 = 0;
  func_0x000107c603d0(&uStack_41,&uStack_40,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(0x726f727265206f6e,0xe800000000000000);
  uVar3 = uStack_38;
  uVar1 = uStack_40;
  func_0x000107c5fadc(uStack_40,uStack_38);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_40 = 0x6c6961746564;
  uStack_38 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_40,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd00000000000004a;
  func_0x000107c5fadc(0xd00000000000004a,0x800000010f00e920);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101d4e284; end: 101d4e2bb;  */

void FUN_101d4e284(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d4af88(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101d4e2bc; end: 101d4e2cb;  */

void FUN_101d4e2bc(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 uStack_81;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  puVar2 = PTR_PTR_1126a9480;
  func_0x000107c610f8(PTR_PTR_1126a9480,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  uVar5 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f00e6d0);
  func_0x000107c45e7c(puVar2);
  func_0x000107c61170(uVar5);
  (*pcVar1)(puVar2);
  func_0x000107c614cc(param_1,auStack_58,auStack_70);
  uVar5 = uStack_68;
  uVar7 = uStack_60;
  func_0x000107c60640(uStack_68,uStack_60);
  uStack_80 = 0;
  uStack_78 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000028,0x800000010f00e760);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_81 = 1;
  func_0x000107c603d0(&uStack_81,&uStack_80,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(uVar5,uVar7);
  uVar5 = uStack_78;
  uVar3 = uStack_80;
  func_0x000107c5fadc(uStack_80,uStack_78);
  func_0x000107c6142c(uVar5);
  lVar4 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  uStack_80 = 0x6c6961746564;
  uStack_78 = 0xe600000000000000;
  func_0x000107c602d4(lVar4 + 0x20,&uStack_80,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar5 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar4 + 0x60) = uVar5;
  *(undefined8 *)(lVar4 + 0x48) = uVar3;
  func_0x000107c61174(uVar3);
  lVar6 = lVar4;
  func_0x000100dfa3f0(lVar4);
  func_0x000107c61588(lVar4);
  func_0x000100e1766c(lVar4 + 0x20);
  lVar4 = lVar6;
  func_0x000107c5f9dc(lVar6,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar6);
  uVar5 = 0xd00000000000003e;
  func_0x000107c5fadc(0xd00000000000003e,0x800000010f00e790);
  func_0x000107c2c4c0(0x40,lVar4,uVar5);
  func_0x000107c61170(puVar2);
  func_0x000107c6142c(uVar7);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 101d4e2cc; end: 101d4e2f7;  */

void FUN_101d4e2cc(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Entry: 101d4e2f8; end: 101d4e33f;  */

void FUN_101d4e2f8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101d4e340; end: 101d4e347;  */

void FUN_101d4e340(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined1 uStack_61;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  puVar2 = PTR_PTR_1126a9480;
  func_0x000107c610f8(PTR_PTR_1126a9480,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  uVar7 = 0xd000000000000015;
  uVar9 = 0x800000010f00e6d0;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f00e6d0);
  func_0x000107c45e7c(puVar2);
  func_0x000107c61170(uVar7);
  (*pcVar1)(puVar2);
  puVar3 = puVar2;
  func_0x000107c4cd90(puVar2);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x000107c5faec();
  func_0x000107c61170(puVar3);
  uStack_60 = 0;
  uStack_58 = 0xe000000000000000;
  func_0x000107c61434(uVar9);
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000029,0x800000010f00e6f0);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_61 = 1;
  func_0x000107c603d0(&uStack_61,&uStack_60,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(puVar4,uVar9);
  func_0x000107c6142c(uVar9);
  uVar7 = uStack_58;
  uVar5 = uStack_60;
  func_0x000107c5fadc(uStack_60,uStack_58);
  func_0x000107c6142c(uVar7);
  lVar6 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar6 + 0x18) = 2;
  *(undefined8 *)(lVar6 + 0x10) = 1;
  uStack_60 = 0x6c6961746564;
  uStack_58 = 0xe600000000000000;
  func_0x000107c602d4(lVar6 + 0x20,&uStack_60,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar7 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar6 + 0x60) = uVar7;
  *(undefined8 *)(lVar6 + 0x48) = uVar5;
  func_0x000107c61174(uVar5);
  lVar8 = lVar6;
  func_0x000100dfa3f0(lVar6);
  func_0x000107c61588(lVar6);
  func_0x000100e1766c(lVar6 + 0x20);
  lVar6 = lVar8;
  func_0x000107c5f9dc(lVar8,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar8);
  uVar7 = 0xd00000000000003f;
  func_0x000107c5fadc(0xd00000000000003f,0x800000010f00e720);
  func_0x000107c2c4c0(0x40,lVar6,uVar7);
  func_0x000107c61170(puVar2);
  func_0x000107c6142c(uVar9);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(uVar7);
  return;
}



/* Entry: 101d4e348; end: 101d4e35f;  */

void FUN_101d4e348(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d4cb24(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101d4e360; end: 101d4e3cf;  */

void FUN_101d4e360(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long unaff_x20;
  undefined *puStack_38;
  
  pcVar2 = *(code **)(unaff_x20 + 0x10);
  puStack_38 = (undefined *)0x0;
  func_0x000107c5fc50(*param_1,&puStack_38,PTR___sSSN_11034da80);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puStack_38 != (undefined *)0x0) {
    puVar1 = puStack_38;
  }
  (*pcVar2)(puVar1);
  func_0x000107c6142c(puVar1);
  return;
}



/* Entry: 101d4e3d0; end: 101d4e3d7;  */

void FUN_101d4e3d0(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  (**(code **)(unaff_x20 + 0x10))
            (PTR___swiftEmptyArrayStorage_11034f1c8,*(code **)(unaff_x20 + 0x10),
             *(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c614cc(param_1,auStack_48,auStack_60);
  uVar3 = uStack_58;
  uVar5 = uStack_50;
  func_0x000107c60640(uStack_58,uStack_50);
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd00000000000003a,0x800000010f00e5b0);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_71 = 1;
  func_0x000107c603d0(&uStack_71,&uStack_70,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(uVar3,uVar5);
  uVar3 = uStack_68;
  uVar1 = uStack_70;
  func_0x000107c5fadc(uStack_70,uStack_68);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_70 = 0x6c6961746564;
  uStack_68 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_70,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd000000000000050;
  func_0x000107c5fadc(0xd000000000000050,0x800000010f00e5f0);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c6142c(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101d4e3d8; end: 101d4e407;  */

void FUN_101d4e3d8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d4d084(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101d4e408; end: 101d4e40f;  */

void FUN_101d4e408(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 uStack_71;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  (**(code **)(unaff_x20 + 0x10))(0,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c614cc(param_1,auStack_48,auStack_60);
  uVar3 = uStack_58;
  uVar5 = uStack_50;
  func_0x000107c60640(uStack_58,uStack_50);
  uStack_70 = 0;
  uStack_68 = 0xe000000000000000;
  func_0x000107c602fc(0x12);
  func_0x000107c5fb78(0x5b,0xe100000000000000);
  func_0x000107c5fb78(0xd000000000000013,0x800000010f00e420);
  func_0x000107c5fb78(0x205d,0xe200000000000000);
  func_0x000107c5fb78(0xd000000000000038,0x800000010f00e520);
  func_0x000107c5fb78(0x20,0xe100000000000000);
  uStack_71 = 1;
  func_0x000107c603d0(&uStack_71,&uStack_70,&UNK_11047adb8,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c5fb78(0x206874697720,0xe600000000000000);
  func_0x000107c5fb78(uVar3,uVar5);
  uVar3 = uStack_68;
  uVar1 = uStack_70;
  func_0x000107c5fadc(uStack_70,uStack_68);
  func_0x000107c6142c(uVar3);
  lVar2 = 0x112d39140;
  func_0x0001000285a8(0x112d39140,&UNK_10d902e00);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 2;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  uStack_70 = 0x6c6961746564;
  uStack_68 = 0xe600000000000000;
  func_0x000107c602d4(lVar2 + 0x20,&uStack_70,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
  uVar3 = 0;
  FUN_101d4e6a8(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
  *(undefined8 *)(lVar2 + 0x60) = uVar3;
  *(undefined8 *)(lVar2 + 0x48) = uVar1;
  func_0x000107c61174(uVar1);
  lVar4 = lVar2;
  func_0x000100dfa3f0(lVar2);
  func_0x000107c61588(lVar2);
  func_0x000100e1766c(lVar2 + 0x20);
  lVar2 = lVar4;
  func_0x000107c5f9dc(lVar4,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                      PTR___ss11AnyHashableVSHsWP_11034e450);
  func_0x000107c6142c(lVar4);
  uVar3 = 0xd00000000000004e;
  func_0x000107c5fadc(0xd00000000000004e,0x800000010f00e560);
  func_0x000107c2c4c0(0x40,lVar2,uVar3);
  func_0x000107c6142c(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  return;
}



/* Entry: 101d4e410; end: 101d4e427;  */

void FUN_101d4e410(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_101d4d81c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}


