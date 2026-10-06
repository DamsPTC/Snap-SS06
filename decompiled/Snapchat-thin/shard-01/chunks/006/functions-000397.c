/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10122ef2c; end: 10122f04f;  */

/* WARNING: Possible PIC construction at 0x00010122f02c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122f01c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010122f030) */
/* WARNING: Removing unreachable block (ram,0x00010122f020) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122ef2c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c3e8cc();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3e8e4();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = unaff_x20;
      func_0x000107c3fa0c();
      func_0x000107c61180();
      if (lVar4 != 0) {
        uVar5 = 0;
        FUN_10122dcc4(0);
        func_0x000107c613fc();
        FUN_10122d8e4(lVar1,lVar2,lVar3,lVar4,uVar5);
        uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d6a068);
        *(long *)(unaff_x20 + _DAT_112d6a068) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_release_11034f4c0)(uVar5);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10122f050; end: 10122f077; -[SCFSTCustomUINotifPermissionEntryPoint begin] */

void FUN_10122f050(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10122ef2c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10122f078; end: 10122f0bb; -[SCFSTCustomUINotifPermissionEntryPoint end] */

void FUN_10122f078(undefined8 param_1)

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



/* Entry: 10122f0bc; end: 10122f32b;  */

void FUN_10122f0bc(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0xd000000000000019;
    if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10eeea0)) ||
       (func_0x000107c605b8(0xd000000000000019,0x800000010ef11160,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52c50();
    }
    else {
      if ((param_2 != -0x2fffffffffffffe9) || (param_3 != -0x7ffffffef10d0360)) {
        uVar2 = 0xd000000000000017;
        func_0x000107c605b8(0xd000000000000017,0x800000010ef2fca0,param_2,param_3,0);
        if ((uVar2 & 1) == 0) {
          uVar2 = 0;
          if (((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10ed550)) &&
             (func_0x000107c605b8(0xd00000000000001a,0x800000010ef12ab0,param_2,param_3,0),
             (uVar2 & 1) == 0)) {
            func_0x000107c602fc(0x15);
            func_0x000107c6142c(0xe000000000000000);
            func_0x000107c5fb78(param_2,param_3);
            func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                "FSTCustomUINotifPermission/SCFSTCustomUINotifPermissionEntryPoint.swift"
                                ,0x47,2,0x30,0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10122f32c);
            (*pcVar1)();
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c53414();
          goto LAB_10122f148;
        }
      }
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c52c60();
    }
  }
LAB_10122f148:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 10122f32c; end: 10122f3d7; -[SCFSTCustomUINotifPermissionEntryPoint setValue:forIvarName:] */

void FUN_10122f32c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10122f0bc(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 10122f3d8; end: 10122f473; -[SCFSTCustomUINotifPermissionEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122f3d8(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d6a048,0);
  func_0x000107c61614(param_1 + _DAT_112d6a050,0);
  func_0x000107c61614(param_1 + _DAT_112d6a058,0);
  func_0x000107c61614(param_1 + _DAT_112d6a060,0);
  *(undefined8 *)(param_1 + _DAT_112d6a068) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10122f474; end: 10122f4a7;  */

void FUN_10122f474(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10122f4a8; end: 10122f50f; -[SCFSTCustomUINotifPermissionEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122f4a8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6a048);
  func_0x000107c61610(param_1 + _DAT_112d6a050);
  func_0x000107c61610(param_1 + _DAT_112d6a058);
  func_0x000107c61610(param_1 + _DAT_112d6a060);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6a068));
  return;
}



/* Entry: 10122f510; end: 10122f52f;  */

void FUN_10122f510(void)

{
  func_0x000107c61168(&PTR_PTR_1127bd6c8);
  return;
}



/* Entry: 10122f530; end: 10122f79f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_10122f530(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  long lVar1;
  undefined8 unaff_x20;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x000107c613fc();
  lVar2 = param_2;
  func_0x000107c4d81c();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar3;
    func_0x000107c44224();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
  }
  lVar3 = param_2;
  func_0x000107c4d81c();
  func_0x000107c61180();
  lVar1 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1;
    func_0x000107c44224();
    func_0x000107c61180();
    func_0x000107c615e8(lVar1);
  }
  if (lVar2 != 0) {
    func_0x000107c5545c(lVar2);
  }
  if (lVar3 == 0) {
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
  }
  else {
    func_0x000107c5545c(lVar3);
    func_0x000107c615f0(lVar3);
    uVar4 = param_4;
    func_0x000107c42e5c(param_4);
    func_0x000107c61180();
    func_0x000107c57564(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c615f0(lVar3);
    uVar4 = param_5;
    func_0x000107c3ddb0(param_5);
    func_0x000107c61180();
    func_0x000107c52768(lVar3);
    func_0x000107c615e8(lVar3);
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(param_6 + _DAT_11307d3e0);
    func_0x000107c615f0(lVar3);
    func_0x000107c615f0(uVar4);
    func_0x000107c55270(lVar3);
    func_0x000107c615e8(uVar4);
    func_0x000107c61170(param_3);
    func_0x000107c61170(param_6);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    func_0x000107c61170(param_4);
    func_0x000107c61170(param_5);
    func_0x000107c615ec(lVar3,2);
  }
  func_0x000107c615e8(lVar2);
  return unaff_x20;
}



/* Entry: 10122f7a0; end: 10122f7bb;  */

void FUN_10122f7a0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10122f7bc; end: 10122f7db;  */

void FUN_10122f7bc(void)

{
  func_0x000107c61168(&PTR_PTR_112d6a0d8);
  return;
}



/* Entry: 10122f7dc; end: 10122f7e7; -[SCNotificationPresenterDependencyInjectorEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122f7dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a130;
  func_0x000107c61428(param_1 + _DAT_112d6a130,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10122f7e8; end: 10122f7f3; -[SCNotificationPresenterDependencyInjectorEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122f7e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a130;
  func_0x000107c61428(param_1 + _DAT_112d6a130,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10122f7f4; end: 10122f7ff; -[SCNotificationPresenterDependencyInjectorEntryPoint notificationsServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122f7f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a138;
  func_0x000107c61428(param_1 + _DAT_112d6a138,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10122f800; end: 10122f80b; -[SCNotificationPresenterDependencyInjectorEntryPoint setNotificationsServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122f800(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a138;
  func_0x000107c61428(param_1 + _DAT_112d6a138,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10122f80c; end: 10122f817; -[SCNotificationPresenterDependencyInjectorEntryPoint intentDonatingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122f80c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a140;
  func_0x000107c61428(param_1 + _DAT_112d6a140,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10122f818; end: 10122f823; -[SCNotificationPresenterDependencyInjectorEntryPoint setIntentDonatingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122f818(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a140;
  func_0x000107c61428(param_1 + _DAT_112d6a140,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10122f824; end: 10122f82f; -[SCNotificationPresenterDependencyInjectorEntryPoint plusServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122f824(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a148;
  func_0x000107c61428(param_1 + _DAT_112d6a148,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10122f830; end: 10122f83b; -[SCNotificationPresenterDependencyInjectorEntryPoint setPlusServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122f830(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a148;
  func_0x000107c61428(param_1 + _DAT_112d6a148,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10122f83c; end: 10122f847; -[SCNotificationPresenterDependencyInjectorEntryPoint extensionStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122f83c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a150;
  func_0x000107c61428(param_1 + _DAT_112d6a150,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10122f848; end: 10122f853; -[SCNotificationPresenterDependencyInjectorEntryPoint setExtensionStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122f848(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a150;
  func_0x000107c61428(param_1 + _DAT_112d6a150,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10122f854; end: 10122f85f; -[SCNotificationPresenterDependencyInjectorEntryPoint imageFetchingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122f854(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a158;
  func_0x000107c61428(param_1 + _DAT_112d6a158,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10122f860; end: 10122f8a3;  */

void FUN_10122f860(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 10122f8a4; end: 10122f8af; -[SCNotificationPresenterDependencyInjectorEntryPoint setImageFetchingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10122f8a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a158;
  func_0x000107c61428(param_1 + _DAT_112d6a158,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10122f8b0; end: 10122f903;  */

void FUN_10122f8b0(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10122f904; end: 10122fcb7;  */

/* WARNING: Possible PIC construction at 0x00010122f9f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122fb04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122fb9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122fbd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122fc10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122fc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122fc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122fc50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122fc60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122fc70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122fa98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122faa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122fa78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122fa88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010122fa68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010122fa8c) */
/* WARNING: Removing unreachable block (ram,0x00010122fa7c) */
/* WARNING: Removing unreachable block (ram,0x00010122faac) */
/* WARNING: Removing unreachable block (ram,0x00010122fa9c) */
/* WARNING: Removing unreachable block (ram,0x00010122fc74) */
/* WARNING: Removing unreachable block (ram,0x00010122fc64) */
/* WARNING: Removing unreachable block (ram,0x00010122fc54) */
/* WARNING: Removing unreachable block (ram,0x00010122fc34) */
/* WARNING: Removing unreachable block (ram,0x00010122fc7c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x00010122fc24) */
/* WARNING: Removing unreachable block (ram,0x00010122fc14) */
/* WARNING: Removing unreachable block (ram,0x00010122fbd8) */
/* WARNING: Removing unreachable block (ram,0x00010122fba0) */
/* WARNING: Removing unreachable block (ram,0x00010122fb08) */
/* WARNING: Removing unreachable block (ram,0x00010122fb34) */
/* WARNING: Removing unreachable block (ram,0x00010122fb0c) */
/* WARNING: Removing unreachable block (ram,0x00010122fb38) */
/* WARNING: Removing unreachable block (ram,0x00010122fb44) */
/* WARNING: Removing unreachable block (ram,0x00010122fb54) */
/* WARNING: Removing unreachable block (ram,0x00010122fc4c) */
/* WARNING: Removing unreachable block (ram,0x00010122fb58) */
/* WARNING: Removing unreachable block (ram,0x00010122f9f8) */
/* WARNING: Removing unreachable block (ram,0x00010122fad8) */
/* WARNING: Removing unreachable block (ram,0x00010122f9fc) */
/* WARNING: Removing unreachable block (ram,0x00010122fadc) */
/* WARNING: Removing unreachable block (ram,0x00010122fa6c) */

void FUN_10122f904(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c4d86c();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c49828();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar3 = unaff_x20;
        func_0x000107c4ea90();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar3 = unaff_x20;
          func_0x000107c42c70();
          func_0x000107c61180();
          if (lVar3 != 0) {
            func_0x000107c45074();
            func_0x000107c61180();
            if (unaff_x20 != 0) {
              FUN_10122f7bc();
              func_0x000107c613fc();
              func_0x000107c4d81c(lVar2);
              func_0x000107c61180();
              func_0x000107c5c734();
              func_0x000107c61180();
              lVar1 = lVar2;
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10122fcb8; end: 10122fcdf; -[SCNotificationPresenterDependencyInjectorEntryPoint begin] */

void FUN_10122fcb8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_10122f904();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10122fce0; end: 10122fd23; -[SCNotificationPresenterDependencyInjectorEntryPoint end] */

void FUN_10122fce0(undefined8 param_1)

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



/* Entry: 10122fd24; end: 101230073;  */

void FUN_10122fd24(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10d02e0)) {
      uVar2 = 0xd000000000000015;
      func_0x000107c605b8(0xd000000000000015,0x800000010ef2fd20,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10d02c0)) ||
           (func_0x000107c605b8(0xd000000000000016,0x800000010ef2fd40,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c55458();
        }
        else {
          uVar2 = 0;
          if (((param_2 == 0x7672655373756c70) && (param_3 == -0x13ffffff8c9a9c97)) ||
             (func_0x000107c605b8(0x7672655373756c70,0xec00000073656369,param_2,param_3,0),
             (uVar2 & 1) != 0)) {
            func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c57584();
          }
          else {
            uVar2 = 0;
            if (((param_2 == -0x2fffffffffffffe8) && (param_3 == -0x7ffffffef10d02a0)) ||
               (func_0x000107c605b8(0xd000000000000018,0x800000010ef2fd60,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c547d4();
            }
            else {
              if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10d0280)) {
                uVar2 = 0xd000000000000015;
                func_0x000107c605b8(0xd000000000000015,0x800000010ef2fd80,param_2,param_3,0);
                if ((uVar2 & 1) == 0) {
                  func_0x000107c602fc(0x15);
                  func_0x000107c6142c(0xe000000000000000);
                  func_0x000107c5fb78(param_2,param_3);
                  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                      "NotificationPresenterDependencyInjector/SCNotificationPresenterDependencyInjectorEntryPoint.swift"
                                      ,0x61,2,0x3a,0);
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x101230074);
                  (*pcVar1)();
                }
              }
              func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c55274();
            }
          }
        }
        goto LAB_10122fdb0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c56b48();
  }
LAB_10122fdb0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 101230074; end: 10123011f; -[SCNotificationPresenterDependencyInjectorEntryPoint setValue:forIvarName:] */

void FUN_101230074(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_10122fd24(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101230120; end: 1012301e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101230120(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d6a130,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a138,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a140,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a148,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a150,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d6a158,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6a160) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012301e4; end: 101230203; -[SCNotificationPresenterDependencyInjectorEntryPoint init] */

void FUN_1012301e4(void)

{
  FUN_101230120();
  return;
}



/* Entry: 101230204; end: 101230237;  */

void FUN_101230204(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101230238; end: 1012302bf; -[SCNotificationPresenterDependencyInjectorEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101230238(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d6a130);
  func_0x000107c61610(param_1 + _DAT_112d6a138);
  func_0x000107c61610(param_1 + _DAT_112d6a140);
  func_0x000107c61610(param_1 + _DAT_112d6a148);
  func_0x000107c61610(param_1 + _DAT_112d6a150);
  func_0x000107c61610(param_1 + _DAT_112d6a158);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d6a160));
  return;
}



/* Entry: 1012302c0; end: 1012302df;  */

void FUN_1012302c0(void)

{
  func_0x000107c61168(&PTR_PTR_1127bd7a0);
  return;
}



/* Entry: 1012302e0; end: 10123034b;  */

void FUN_1012302e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  return;
}



/* Entry: 10123034c; end: 10123040b;  */

/* WARNING: Possible PIC construction at 0x0001012303f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012303f8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10123034c(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010099be78();
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_101231b40(0);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  FUN_101230a30(lVar1,uVar2);
  *(undefined ***)(lVar1 + _DAT_112d6a2a0 + 8) = &PTR_DAT_110396670;
  func_0x000107c61604();
  func_0x000107c4d508(uVar2);
  func_0x000107c61180();
  func_0x000107c4f6f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10123040c; end: 101230627;  */

/* WARNING: Possible PIC construction at 0x000101230524: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123058c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010123059c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012305d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012305ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101230604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012305f0) */
/* WARNING: Removing unreachable block (ram,0x0001012305f4) */
/* WARNING: Removing unreachable block (ram,0x0001012305d4) */
/* WARNING: Removing unreachable block (ram,0x0001012305a0) */
/* WARNING: Removing unreachable block (ram,0x000101230590) */
/* WARNING: Removing unreachable block (ram,0x000101230528) */
/* WARNING: Removing unreachable block (ram,0x000101230608) */
/* WARNING: Removing unreachable block (ram,0x00010123060c) */

void FUN_10123040c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = 0x6e776f6e6b6e75;
  if (param_1 == 1) {
    uVar3 = 0x746867696c;
  }
  uVar1 = 0xe700000000000000;
  if (param_1 == 1) {
    uVar1 = 0xe500000000000000;
  }
  uVar2 = 0x6b726164;
  if (param_1 != 2) {
    uVar2 = uVar3;
  }
  uVar3 = 0xe400000000000000;
  if (param_1 != 2) {
    uVar3 = uVar1;
  }
  uVar1 = 0x6d6574737973;
  if (param_1 != 0) {
    uVar1 = uVar2;
  }
  uVar2 = 0xe600000000000000;
  if (param_1 != 0) {
    uVar2 = uVar3;
  }
  uVar3 = 0x6c616974696e69;
  func_0x000107c5fadc(0x6c616974696e69,0xe700000000000000);
  func_0x000107c5fadc(uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c5e508(param_3);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 101230628; end: 101230693;  */

void FUN_101230628(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101230694; end: 1012306b3;  */

void FUN_101230694(void)

{
  FUN_10123034c();
  return;
}



/* Entry: 1012306b4; end: 101230723;  */

undefined8 FUN_1012306b4(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long *unaff_x20;
  
  uVar3 = *(undefined8 *)(*unaff_x20 + 0x48);
  func_0x00010099be78();
  puVar2 = PTR_PTR_1126b33b8;
  func_0x000107c61168();
  func_0x000107c3de38();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    FUN_10123040c(uVar3,param_1,puVar2);
    func_0x000107c61170(puVar2);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101230724);
  (*pcVar1)();
}



/* Entry: 101230724; end: 1012308b7;  */

/* WARNING: Possible PIC construction at 0x0001012307c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012307e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012307f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101230890: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012307f8) */
/* WARNING: Removing unreachable block (ram,0x0001012307fc) */
/* WARNING: Removing unreachable block (ram,0x0001012307e4) */
/* WARNING: Removing unreachable block (ram,0x0001012307c4) */
/* WARNING: Removing unreachable block (ram,0x000101230858) */
/* WARNING: Removing unreachable block (ram,0x000101230884) */
/* WARNING: Removing unreachable block (ram,0x0001012307c8) */
/* WARNING: Removing unreachable block (ram,0x000101230894) */

void FUN_101230724(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c610f8(PTR_PTR_1126aead8);
  func_0x000107c4807c();
  func_0x00010439c014(0);
  func_0x000107c610f8();
  func_0x00010439b9d8(0x1c,0,0,0xffffffffffffffff,0,0,0xd,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c5c360(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1012308b8; end: 101230923; -[_TtC37SCAppAppearanceSettingsImplementation31AppAppearanceSettingsEntryPoint plusManagementDidDismiss] */

/* WARNING: Possible PIC construction at 0x000101230900: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101230904) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_1012308b8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x40);
  func_0x000107c6157c();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(*(undefined8 *)(param_1 + 0x40));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101230924; end: 10123098f; -[_TtC37SCAppAppearanceSettingsImplementation31AppAppearanceSettingsEntryPoint plusSubscribeDidDismiss] */

/* WARNING: Possible PIC construction at 0x00010123096c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101230970) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_101230924(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x38);
  func_0x000107c6157c();
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(*(undefined8 *)(param_1 + 0x38));
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 101230990; end: 1012309ff;  */

void FUN_101230990(void)

{
  func_0x000107c61168(&PTR_PTR_112d6a1d0);
  return;
}



/* Entry: 101230a00; end: 101230a2f;  */

bool FUN_101230a00(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101230a30; end: 101230bcf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101230a30(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  lVar1 = _DAT_112d6a288;
  puVar3 = &stack0xffffffffffffffb0;
  puVar2 = PTR__OBJC_CLASS___UITableView_1126aed40;
  func_0x000107c610f8();
  func_0x000107c469d8(0,0,0,0);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = unaff_x20 + _DAT_112d6a2a0;
  *(undefined8 *)(lVar1 + 8) = 0;
  func_0x000107c61614(lVar1,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d6a290) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d6a298) = param_2;
  FUN_101231b40();
  puVar2 = PTR_s_initWithNibName_bundle__1125e9850;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61154(&stack0xffffffffffffffb0,puVar2,0,0);
  func_0x000107c61180();
  func_0x000107c61174();
  puVar4 = puVar3;
  func_0x000107c44ca0();
  func_0x000107c61180();
  func_0x000107c53fcc();
  func_0x000107c61170(puVar4);
  func_0x000107c61174(puVar3);
  puVar4 = puVar3;
  func_0x000107c3f648();
  func_0x000107c61180();
  func_0x000107c53224();
  func_0x000107c615e8(puVar4);
  func_0x000107c61170(puVar3);
  puVar4 = puVar3;
  func_0x000107c59a2c(puVar3);
  FUN_101231cd0();
  func_0x000107c5fadc();
  func_0x000107c6142c(puVar2);
  func_0x000107c59e18(puVar3);
  func_0x000107c61170(puVar4);
  func_0x000107c53dec(puVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar3);
  return puVar3;
}



/* Entry: 101230bd0; end: 101230c77; -[_TtC37SCAppAppearanceSettingsImplementation35AppAppearanceSettingsViewController initWithNibName:bundle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101230bd0(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = _DAT_112d6a288;
  puVar3 = PTR__OBJC_CLASS___UITableView_1126aed40;
  func_0x000107c610f8();
  func_0x000107c469d8(0,0,0,0);
  *(undefined **)(param_1 + lVar1) = puVar3;
  param_1 = param_1 + _DAT_112d6a2a0;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000048,0x800000010ef27040,
                      "SCAppAppearanceSettingsImplementation/AppAppearanceSettingsViewController.swift"
                      ,0x4f,2,0x35,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101230c78);
  (*pcVar2)();
}



/* Entry: 101230c78; end: 101230d1f; -[_TtC37SCAppAppearanceSettingsImplementation35AppAppearanceSettingsViewController initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101230c78(long param_1)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = _DAT_112d6a288;
  puVar3 = PTR__OBJC_CLASS___UITableView_1126aed40;
  func_0x000107c610f8();
  func_0x000107c469d8(0,0,0,0);
  *(undefined **)(param_1 + lVar1) = puVar3;
  param_1 = param_1 + _DAT_112d6a2a0;
  *(undefined8 *)(param_1 + 8) = 0;
  func_0x000107c61614(param_1,0);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCAppAppearanceSettingsImplementation/AppAppearanceSettingsViewController.swift"
                      ,0x4f,2,0x3a,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101230d20);
  (*pcVar2)();
}



/* Entry: 101230d20; end: 101230e17; -[_TtC37SCAppAppearanceSettingsImplementation35AppAppearanceSettingsViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101230d20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lStack_50;
  long lStack_48;
  
  lVar2 = 0;
  func_0x000107c5eff8();
  lVar7 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar5 = (long)&lStack_50 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_101231b40();
  puVar1 = PTR_s_viewWillAppear__1126853f0;
  lStack_50 = param_1;
  lStack_48 = lVar3;
  func_0x000107c61174();
  plVar4 = &lStack_50;
  func_0x000107c61154(plVar4,puVar1,param_3);
  func_0x00010099be78();
  func_0x000107c5efe0(lVar5);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112d6a288);
  func_0x000107c5efd4();
  func_0x000107c51c48(uVar6);
  func_0x000107c61170(plVar4);
  (**(code **)(lVar7 + 8))(lVar5,lVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101230e18; end: 101230e1b; -[_TtC37SCAppAppearanceSettingsImplementation35AppAppearanceSettingsViewController preferredStatusBarStyle] */

undefined8 FUN_101230e18(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  if (param_1 != 0) {
    func_0x00010c279540();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1;
    func_0x00010c292b20();
    _objc_release(param_1);
    uVar1 = 3;
    if (lVar2 == 2) {
      uVar1 = 1;
    }
    return uVar1;
  }
  return 3;
}



/* Entry: 101230e1c; end: 101230ee7; -[_TtC37SCAppAppearanceSettingsImplementation35AppAppearanceSettingsViewController setNeedsStatusBarAppearanceUpdate] */

void FUN_101230e1c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = param_1;
  FUN_101231b40();
  puVar2 = PTR_s_setNeedsStatusBarAppearanceUpdat_1126509d8;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_40,puVar2);
  puVar2 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  puVar3 = puVar2;
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c4ecbc(param_1);
  func_0x000107c517f0(puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c5a9c4(puVar2);
  func_0x000107c61180();
  func_0x000107c4ecd4(param_1);
  func_0x000107c517ec(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101230ee8; end: 101230f4b; -[_TtC37SCAppAppearanceSettingsImplementation35AppAppearanceSettingsViewController didSelectDismissalActionWithHeaderItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101230ee8(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d6a298);
  func_0x000107c61174();
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3dd74();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101230f4c; end: 101230fb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101230f4c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112d6a298);
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3dd70();
    func_0x000107c615e8();
  }
  FUN_101231b40();
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101230fb4; end: 101231033; -[_TtC37SCAppAppearanceSettingsImplementation35AppAppearanceSettingsViewController dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101230fb4(long param_1)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = *(long *)(param_1 + _DAT_112d6a298);
  func_0x000107c61174();
  func_0x000107c4168c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3dd70();
    func_0x000107c615e8();
  }
  FUN_101231b40();
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101231034; end: 10123108b; -[_TtC37SCAppAppearanceSettingsImplementation35AppAppearanceSettingsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101231034(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6a288));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6a290));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d6a298));
  param_1 = param_1 + _DAT_112d6a2a0;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10123108c; end: 1012310b7; -[_TtC37SCAppAppearanceSettingsImplementation35AppAppearanceSettingsViewController initWithNibName:bundle:transitionType:] */

void FUN_10123108c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAppAppearanceSettingsImplementation.AppAppearanceSettingsViewController",
                      0x49,"init(nibName:bundle:transitionType:)",0x24,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012310b8);
  (*pcVar1)();
}



/* Entry: 1012310b8; end: 101231173;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012310b8(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  long lVar3;
  
  func_0x000107c5efe4();
  if (param_2 == 3) {
    lVar1 = unaff_x20 + _DAT_112d6a2a0;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_101230724();
      func_0x000107c615e8(lVar1);
    }
    lVar1 = 0;
    func_0x000107c5eff8();
    UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(lVar1 + -8) + 0x38);
    uVar2 = 1;
  }
  else {
    lVar1 = 0;
    func_0x000107c5eff8();
    lVar3 = *(long *)(lVar1 + -8);
    (**(code **)(lVar3 + 0x10))(param_1,param_3,lVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 0x38);
    uVar2 = 0;
  }
                    /* WARNING: Could not recover jumptable at 0x000101231170. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar2,1,lVar1);
  return;
}



/* Entry: 101231174; end: 101231543; -[_TtC37SCAppAppearanceSettingsImplementation35AppAppearanceSettingsViewController tableView:willSelectRowAtIndexPath:] */

void FUN_101231174(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112d54580;
  func_0x0001000285a8(0x112d54580,&UNK_10d91b480);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = (long)puVar6 - extraout_x8_00;
  func_0x000107c5efdc(puVar6,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1012310b8(lVar4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  pcVar5 = *(code **)(lVar7 + 8);
  (*pcVar5)(puVar6,lVar1);
  lVar2 = lVar4;
  (**(code **)(lVar7 + 0x30))(lVar4,1,lVar1);
  uVar3 = 0;
  if ((int)lVar2 != 1) {
    func_0x000107c5efd4(0);
    (*pcVar5)(lVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101231544; end: 10123162f; -[_TtC37SCAppAppearanceSettingsImplementation35AppAppearanceSettingsViewController tableView:didSelectRowAtIndexPath:] */

void FUN_101231544(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long lVar3;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  func_0x000107c5efdc(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_4)
  ;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_1;
  func_0x000107c5efe4();
  func_0x0001012312b8();
  func_0x000107c5efd4();
  func_0x000107c51c48(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Entry: 101231630; end: 101231633;  */

void FUN_101231630(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d6a278 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d6a280;
  func_0x00010002969c(0x112d6a280,&UNK_10d92d888);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112d6a278 = puVar2;
  return;
}



/* Entry: 101231634; end: 101231683;  */

void FUN_101231634(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112d6a278 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d6a280;
  func_0x00010002969c(0x112d6a280,&UNK_10d92d888);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112d6a278 = puVar2;
  return;
}



/* Entry: 101231684; end: 10123168b; -[_TtC37SCAppAppearanceSettingsImplementation35AppAppearanceSettingsViewController tableView:numberOfRowsInSection:] */

undefined8 FUN_101231684(void)

{
  return 4;
}



/* Entry: 10123168c; end: 1012319ff;  */

undefined8 FUN_10123168c(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong unaff_x20;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 uStack_58;
  
  uVar2 = 0;
  FUN_101231c60();
  uVar3 = 0x112d6a2d0;
  uStack_58 = uVar2;
  func_0x0001000285a8(0x112d6a2d0,&UNK_10d92d938);
  puVar7 = &uStack_58;
  func_0x000107c5fb18(puVar7);
  func_0x00010257b364(uVar2,puVar7,uVar3,param_2,uVar2);
  func_0x000107c6142c();
  func_0x000107c5efe4();
  uVar6 = uVar2;
  if (uVar3 == 3) {
    uVar4 = uVar2;
    func_0x000107c5d200(uVar2);
    func_0x000107c61180();
    func_0x000107c52520();
    func_0x000107c61170(uVar4);
    uVar4 = uVar2;
    func_0x000107c5d200(uVar2);
    func_0x000107c61180();
    uVar5 = uVar4;
    FUN_101231d9c();
    puVar8 = puVar7;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar7);
    func_0x000107c59e44(uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    uVar4 = uVar2;
    func_0x000107c5d200(uVar2);
    func_0x000107c61180();
    uVar5 = uVar4;
    func_0x000101231dbc();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar8);
    func_0x000107c5405c(uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c5d200(uVar2);
    func_0x000107c61180();
    func_0x000107c58dd8();
  }
  else {
    func_0x000107c5efe4();
    if (2 < uVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101231a00);
      (*pcVar1)();
    }
    lVar9 = *(long *)(uVar3 * 8 + 0x112d6a300);
    uVar4 = uVar2;
    func_0x000107c5d200(uVar2);
    func_0x000107c61180();
    func_0x000107c52520();
    func_0x000107c61170(uVar4);
    uVar4 = uVar2;
    func_0x000107c5d200(uVar2);
    func_0x000107c61180();
    uVar5 = uVar4;
    if (lVar9 == 2) {
      func_0x000101231e20();
    }
    else if (lVar9 == 1) {
      func_0x000101231e00();
    }
    else if (lVar9 == 0) {
      func_0x000101231de0();
    }
    else {
      uVar5 = 0;
      puVar7 = (undefined8 *)0xe000000000000000;
    }
    puVar8 = puVar7;
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar7);
    func_0x000107c59e44(uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    uVar4 = uVar2;
    func_0x000107c5d200(uVar2);
    func_0x000107c61180();
    uVar5 = uVar4;
    if (lVar9 == 2) {
      func_0x000101231e84();
    }
    else if (lVar9 == 1) {
      func_0x000101231e60();
    }
    else if (lVar9 == 0) {
      func_0x000101231e3c();
    }
    else {
      uVar5 = 0;
      puVar8 = (undefined8 *)0xe000000000000000;
    }
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar8);
    func_0x000107c5405c(uVar4);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
    func_0x000107c5d200(uVar2);
    func_0x000107c61180();
    func_0x00010099be78();
    func_0x000107c58dd8(uVar6);
  }
  func_0x000107c61170(uVar6);
  uVar6 = uVar2;
  func_0x000107c5d200(uVar2);
  func_0x000107c61180();
  func_0x000107c52170();
  func_0x000107c61170(uVar6);
  func_0x000107c5eff4();
  func_0x000107c5c68c();
  uVar3 = unaff_x20;
  func_0x000107c5efe4();
  if ((long)(uVar3 | unaff_x20) < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1012319fc);
    (*pcVar1)();
  }
  func_0x000107c30a60(1,uVar3,unaff_x20);
  func_0x000107c59a2c(uVar2);
  return uVar2;
}



/* Entry: 101231a00; end: 101231ac7; -[_TtC37SCAppAppearanceSettingsImplementation35AppAppearanceSettingsViewController tableView:cellForRowAtIndexPath:] */

void FUN_101231a00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  
  lVar1 = 0;
  func_0x000107c5eff8();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x000107c5efdc(puVar3,param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar2 = param_3;
  FUN_10123168c(param_3,puVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  (**(code **)(lVar4 + 8))(puVar3,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101231ac8; end: 101231b3f; -[_TtC37SCAppAppearanceSettingsImplementation35AppAppearanceSettingsViewController loadScrollView] */

undefined8 FUN_101231ac8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_101231bac();
  func_0x000107c6117c();
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 101231b40; end: 101231b5f;  */

void FUN_101231b40(void)

{
  func_0x000107c61168(&PTR_PTR_1127bd888);
  return;
}



/* Entry: 101231b60; end: 101231ba3;  */

void FUN_101231b60(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000104070250();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101231ba4; end: 101231bab; -[_TtC37SCAppAppearanceSettingsImplementation35AppAppearanceSettingsViewController pageViewName] */

undefined8 FUN_101231ba4(void)

{
  return 0x10e;
}



/* Entry: 101231bac; end: 101231c5f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101231bac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_38;
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d6a288);
  uVar1 = 0;
  FUN_101231c60();
  uVar2 = 0x112d6a2d0;
  uStack_38 = uVar1;
  func_0x0001000285a8(0x112d6a2d0,&UNK_10d92d938);
  puVar3 = &uStack_38;
  func_0x000107c5fb18(puVar3,uVar2);
  func_0x00010257b4d8(uVar1,puVar3,uVar2,uVar1);
  func_0x000107c6142c(uVar2);
  func_0x000107c53fcc(uVar4);
  func_0x000107c53e08(uVar4);
  func_0x000107c58f5c(uVar4);
  return uVar4;
}



/* Entry: 101231c60; end: 101231ca3;  */

void FUN_101231c60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d366c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b5a18;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d366c8 = puVar1;
  return;
}



/* Entry: 101231ca4; end: 101231cc7;  */

undefined8 FUN_101231ca4(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 101231cc8; end: 101231ccb; -[_TtC37SCAppAppearanceSettingsImplementation35AppAppearanceSettingsViewController defaultProjectNameV3] */

void FUN_101231cc8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000104070250();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101231ccc; end: 101231ccf; -[_TtC37SCAppAppearanceSettingsImplementation35AppAppearanceSettingsViewController defaultProjectNameV2] */

void FUN_101231ccc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000104070250();
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101231cd0; end: 101231d9b;  */

undefined1  [16] FUN_101231cd0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe3;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef2ff10);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef2fee0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101231d9c);
  (*pcVar1)();
}



/* Entry: 101231d9c; end: 101231ea7;  */

undefined1  [16] FUN_101231d9c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x745f6d6f74737563;
  func_0x000107c5fadc(0x745f6d6f74737563,0xec000000656c7469);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef2fee0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101231f58);
  (*pcVar1)();
}



/* Entry: 101231ea8; end: 101231f57;  */

undefined1  [16] FUN_101231ea8(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef2fee0);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101231f58);
  (*pcVar1)();
}



/* Entry: 101231f58; end: 101231f63; -[SCAppAppearanceSettingsEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101231f58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a358;
  func_0x000107c61428(param_1 + _DAT_112d6a358,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101231f64; end: 101231f6f; -[SCAppAppearanceSettingsEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101231f64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a358;
  func_0x000107c61428(param_1 + _DAT_112d6a358,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101231f70; end: 101231f7b; -[SCAppAppearanceSettingsEntryPoint appStorageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101231f70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a360;
  func_0x000107c61428(param_1 + _DAT_112d6a360,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101231f7c; end: 101231f87; -[SCAppAppearanceSettingsEntryPoint setAppStorageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101231f7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a360;
  func_0x000107c61428(param_1 + _DAT_112d6a360,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101231f88; end: 101231f93; -[SCAppAppearanceSettingsEntryPoint grapheneServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101231f88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a368;
  func_0x000107c61428(param_1 + _DAT_112d6a368,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101231f94; end: 101231f9f; -[SCAppAppearanceSettingsEntryPoint setGrapheneServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101231f94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a368;
  func_0x000107c61428(param_1 + _DAT_112d6a368,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101231fa0; end: 101231fab; -[SCAppAppearanceSettingsEntryPoint plusServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101231fa0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a370;
  func_0x000107c61428(param_1 + _DAT_112d6a370,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101231fac; end: 101231fb7; -[SCAppAppearanceSettingsEntryPoint setPlusServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101231fac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a370;
  func_0x000107c61428(param_1 + _DAT_112d6a370,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101231fb8; end: 101231fc3; -[SCAppAppearanceSettingsEntryPoint plusSubscribeScopeServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101231fb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a378;
  func_0x000107c61428(param_1 + _DAT_112d6a378,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101231fc4; end: 101232007;  */

void FUN_101231fc4(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 101232008; end: 101232013; -[SCAppAppearanceSettingsEntryPoint setPlusSubscribeScopeServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101232008(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a378;
  func_0x000107c61428(param_1 + _DAT_112d6a378,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101232014; end: 101232067;  */

void FUN_101232014(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101232068; end: 1012320af; -[SCAppAppearanceSettingsEntryPoint plusSubscribeScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101232068(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a380;
  func_0x000107c61428(param_1 + _DAT_112d6a380,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1012320b0; end: 1012320bb; -[SCAppAppearanceSettingsEntryPoint setPlusSubscribeScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012320b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a380;
  func_0x000107c61428(param_1 + _DAT_112d6a380,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1012320bc; end: 101232103; -[SCAppAppearanceSettingsEntryPoint plusManagementScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012320bc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d6a388;
  func_0x000107c61428(param_1 + _DAT_112d6a388,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101232104; end: 10123210f; -[SCAppAppearanceSettingsEntryPoint setPlusManagementScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101232104(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d6a388;
  func_0x000107c61428(param_1 + _DAT_112d6a388,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101232110; end: 10123216f;  */

void FUN_101232110(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101232170; end: 10123248f;  */

/* WARNING: Possible PIC construction at 0x000101232338: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101232348: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101232358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101232368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101232378: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101232450: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101232460: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101232420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101232430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101232400: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101232410: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012323f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101232414) */
/* WARNING: Removing unreachable block (ram,0x000101232404) */
/* WARNING: Removing unreachable block (ram,0x000101232434) */
/* WARNING: Removing unreachable block (ram,0x000101232424) */
/* WARNING: Removing unreachable block (ram,0x000101232464) */
/* WARNING: Removing unreachable block (ram,0x000101232454) */
/* WARNING: Removing unreachable block (ram,0x00010123237c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Removing unreachable block (ram,0x00010123236c) */
/* WARNING: Removing unreachable block (ram,0x00010123235c) */
/* WARNING: Removing unreachable block (ram,0x00010123234c) */
/* WARNING: Removing unreachable block (ram,0x00010123233c) */
/* WARNING: Removing unreachable block (ram,0x0001012323f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101232170(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c3de80();
    func_0x000107c61180();
    if (lVar2 != 0) {
      lVar3 = unaff_x20;
      func_0x000107c444a8();
      func_0x000107c61180();
      if (lVar3 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar4 = unaff_x20;
        func_0x000107c4ea90();
        func_0x000107c61180();
        if (lVar4 == 0) {
          func_0x000107c61170(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar5 = unaff_x20;
          func_0x000107c4eab0();
          func_0x000107c61180();
          if (lVar5 != 0) {
            lVar6 = unaff_x20;
            func_0x000107c4eaa8();
            func_0x000107c61180();
            if (lVar6 != 0) {
              func_0x000107c4ea64();
              func_0x000107c61180();
              if (unaff_x20 == 0) {
                func_0x000107c61170(lVar1);
                lVar1 = lVar2;
              }
              else {
                lVar7 = 0;
                FUN_101230990();
                func_0x000107c613fc();
                *(long *)(lVar7 + 0x10) = lVar2;
                *(long *)(lVar7 + 0x18) = lVar1;
                *(long *)(lVar7 + 0x20) = lVar3;
                *(long *)(lVar7 + 0x28) = lVar4;
                *(long *)(lVar7 + 0x30) = lVar5;
                *(long *)(lVar7 + 0x38) = lVar6;
                *(long *)(lVar7 + 0x40) = unaff_x20;
                *(undefined8 *)(lVar7 + 0x48) = 0;
                func_0x000107c61174(lVar1);
                func_0x000107c61174();
                func_0x000107c61174();
                func_0x000107c61174(lVar1);
                func_0x000107c61174();
                func_0x000107c61174(lVar4);
                func_0x000107c61174(lVar5);
                func_0x000107c61174(lVar6);
                func_0x000107c61174();
                lVar3 = unaff_x20;
                func_0x00010099be78();
                *(long *)(lVar7 + 0x48) = lVar3;
                FUN_101231b40(0);
                func_0x000107c610f8();
                FUN_101230a30(lVar2,lVar1);
                lVar2 = lVar2 + _DAT_112d6a2a0;
                *(undefined ***)(lVar2 + 8) = &PTR_DAT_110396670;
                func_0x000107c61604(lVar2,lVar7);
                func_0x000107c4d508(*(undefined8 *)(lVar7 + 0x18));
                func_0x000107c61180();
                func_0x000107c4f6f4();
                lVar1 = unaff_x20;
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 101232490; end: 1012324b7; -[SCAppAppearanceSettingsEntryPoint begin] */

void FUN_101232490(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101232170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012324b8; end: 101232577;  */

/* WARNING: Possible PIC construction at 0x000101232518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010123251c) */
/* WARNING: Removing unreachable block (ram,0x000101232574) */
/* WARNING: Removing unreachable block (ram,0x000101232520) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012324b8(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  if (*(long *)(unaff_x20 + _DAT_112d6a390) == 0) {
    func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_end_1125c29d0);
  }
  else {
    func_0x000107c6157c(*(long *)(unaff_x20 + _DAT_112d6a390));
    func_0x00010099be78();
    func_0x000107c61168(PTR_PTR_1126b33b8);
    func_0x000107c3de38();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101232578; end: 1012325ab; -[SCAppAppearanceSettingsEntryPoint end] */

void FUN_101232578(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1012324b8();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1012325ac; end: 101232967;  */

void FUN_1012325ac(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0;
    if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10d00d0)) ||
       (func_0x000107c605b8(0xd000000000000012,0x800000010ef2ff30,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c527cc();
    }
    else {
      uVar2 = 0;
      if (((param_2 == -0x2ffffffffffffff0) && (param_3 == -0x7ffffffef10e3fc0)) ||
         (func_0x000107c605b8(0xd000000000000010,0x800000010ef1c040,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c54f40();
      }
      else {
        uVar2 = 0;
        if (((param_2 == 0x7672655373756c70) && (param_3 == -0x13ffffff8c9a9c97)) ||
           (func_0x000107c605b8(0x7672655373756c70,0xec00000073656369,param_2,param_3,0),
           (uVar2 & 1) != 0)) {
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c57584();
        }
        else {
          if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10dfca0)) {
            uVar2 = 0;
            func_0x000107c605b8(0xd00000000000001a,0x800000010ef20360,param_2,param_3,0);
            if ((uVar2 & 1) == 0) {
              uVar2 = 0xd000000000000019;
              if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10dfbf0)) ||
                 (func_0x000107c605b8(0xd000000000000019,0x800000010ef20410,param_2,param_3,0),
                 (uVar2 & 1) != 0)) {
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c57598();
              }
              else {
                if ((param_2 != -0x2fffffffffffffe6) || (param_3 != -0x7ffffffef10eec40)) {
                  uVar2 = 0;
                  func_0x000107c605b8(0xd00000000000001a,0x800000010ef113c0,param_2,param_3,0);
                  if ((uVar2 & 1) == 0) {
                    func_0x000107c602fc(0x15);
                    func_0x000107c6142c(0xe000000000000000);
                    func_0x000107c5fb78(param_2,param_3);
                    func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                                        "SCAppAppearanceSettingsImplementation/SCAppAppearanceSettingsEntryPoint.swift"
                                        ,0x4d,2,0x42,0);
                    /* WARNING: Does not return */
                    pcVar1 = (code *)SoftwareBreakpoint(1,0x101232968);
                    (*pcVar1)();
                  }
                }
                func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
                func_0x000107c605b0();
                func_0x000107c57570();
              }
              goto LAB_101232638;
            }
          }
          func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
          func_0x000107c605b0();
          func_0x000107c575a0();
        }
      }
    }
  }
LAB_101232638:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}


