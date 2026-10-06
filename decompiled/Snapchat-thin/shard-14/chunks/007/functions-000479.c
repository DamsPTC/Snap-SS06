/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b5e79dc; end: 10b5e7a67;  */

void FUN_10b5e79dc(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c086560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c086560(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b5e7a68; end: 10b5e7acb;  */

undefined ** FUN_10b5e7a68(void)

{
  int iVar1;
  
  if ((bRam00000001138466e0 & 1) == 0) {
    iVar1 = 0x138466e0;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(&DAT_105004938,&PTR_PTR_1133b7d08,0x100000000);
      ___cxa_guard_release(0x1138466e0);
    }
  }
  return &PTR_PTR_1133b7d08;
}



/* Entry: 10b5e7acc; end: 10b5e7b53;  */

void FUN_10b5e7acc(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 7) || (puVar1[3] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5e7b54; end: 10b5e7bdf;  */

void FUN_10b5e7b54(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c0d5020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c0d5020(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b5e7be0; end: 10b5e7bf3; +[SCDocPrefItem objectClassFunctionPointer] */

undefined1  [16] FUN_10b5e7be0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = FUN_10b5e7c1c;
  auVar1._0_8_ = FUN_10b5e7bf4;
  return auVar1;
}



/* Entry: 10b5e7bf4; end: 10b5e7c1b;  */

int FUN_10b5e7bf4(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = 0xf7805ef;
  _strcmp(&DAT_10f7805ef,param_1);
  return -(uint)(iVar1 != 0);
}



/* Entry: 10b5e7c1c; end: 10b5e7cd3;  */

bool FUN_10b5e7c1c(int param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  ulong uVar4;
  
  if (param_1 != 0) {
    return false;
  }
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  func_0x000107c310d8(param_2,&UNK_10f780605);
  _sqlite3_bind_int64();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 7) ||
     (uVar4 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[3], uVar4 == 0)) {
    _sqlite3_bind_null(param_2,2);
  }
  else {
    puVar2 = (uint *)((long)piVar1 + uVar4);
    puVar3 = (undefined4 *)((long)puVar2 + (ulong)*puVar2);
    _sqlite3_bind_text(param_2,2,puVar3 + 1,*puVar3,0);
  }
  _sqlite3_step(param_2);
  return (int)param_2 == 0x65;
}



/* Entry: 10b5e7cd4; end: 10b5e7e87;  */

void FUN_10b5e7cd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  _objc_retain(param_3);
  _objc_opt_self(param_2);
  puVar8 = PTR_PTR_1126e0350;
  if (param_3 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_3;
    func_0x00010c086560(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3;
    func_0x00010c0d5020(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_3;
    func_0x00010c2950a0(param_3);
    lVar4 = param_3;
    func_0x00010c294fa0(param_3);
    lVar5 = param_3;
    func_0x00010c295060(param_3);
    lVar6 = param_3;
    func_0x00010c2950e0(param_3);
    func_0x00010c295020(param_3);
    uVar9 = param_1;
    func_0x00010c294fe0(param_3);
    lVar7 = param_3;
    func_0x00010c295000();
    _objc_retainAutoreleasedReturnValue();
    func_0x000107c30690(param_1,uVar9,puVar8,0xffffffffffffffff,lVar1,lVar2,lVar3,lVar4,lVar5,lVar6,
                        lVar7);
    _objc_release(lVar7);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar8 + 0x10) = 1;
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10b5e7e88; end: 10b5e7e9f; -[SCTrackedDocObjectContextInfo instance] */

void FUN_10b5e7e88(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5e7ea0; end: 10b5e7eab; -[SCTrackedDocObjectContextInfo setInstance:] */

void FUN_10b5e7ea0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 8,param_3);
  return;
}



/* Entry: 10b5e7eac; end: 10b5e7eb3; -[SCTrackedDocObjectContextInfo createdAt] */

undefined8 FUN_10b5e7eac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5e7eb4; end: 10b5e7ee3; -[SCTrackedDocObjectContextInfo setCreatedAt:] */

void FUN_10b5e7eb4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10b5e7ee4; end: 10b5e7eeb; -[SCTrackedDocObjectContextInfo state] */

undefined8 FUN_10b5e7ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b5e7eec; end: 10b5e7ef3; -[SCTrackedDocObjectContextInfo setState:] */

void FUN_10b5e7eec(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 10b5e7ef4; end: 10b5e7f1f; -[SCTrackedDocObjectContextInfo .cxx_destruct] */

void FUN_10b5e7ef4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b5e7f20; end: 10b5e7fa7; -[SCDocObjectActivityMonitorInstanceTracker shuttingDownInstance:atPath:] */

void FUN_10b5e7f20(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar1 = param_1;
  func_0x00010be39160(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c209fc0(lVar1,param_2,2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 10b5e7fa8; end: 10b5e802f; -[SCDocObjectActivityMonitorInstanceTracker shutDownInstance:atPath:] */

void FUN_10b5e7fa8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar1 = param_1;
  func_0x00010be39160(param_1,param_2,param_3,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  func_0x00010c209fc0(lVar1,param_2,3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x20);
  return;
}



/* Entry: 10b5e8030; end: 10b5e8127; -[SCDocObjectActivityMonitorInstanceTracker trackedInstancesAtPath:withTarget:] */

void FUN_10b5e8030(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_4);
  uVar3 = (undefined1)*(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010bfacbe0();
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_10b5e8128;
  puStack_58 = &UNK_110d25520;
  uStack_50 = param_4;
  uStack_48 = uVar3;
  _objc_retain(param_4);
  uVar2 = uVar1;
  func_0x000107c31908(uVar1,&puStack_70);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(param_4);
  _os_unfair_lock_unlock(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b5e8128; end: 10b5e81ff;  */

void FUN_10b5e8128(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c067b40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126e03a0;
    _objc_alloc(PTR_PTR_1126e03a0);
    func_0x00010c252440(param_2);
    lVar2 = param_2;
    func_0x00010bf5a4a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c071ae0(lVar1);
    func_0x00010c04bf00(puVar3);
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 10b5e8200; end: 10b5e82df; -[SCDocObjectActivityMonitorInstanceTracker _infoForInstance:path:] */

void FUN_10b5e8200(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c0e00e0(lVar1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10b5e82e0;
  puStack_40 = &UNK_110d25550;
  _objc_retain(param_3);
  lVar2 = lVar1;
  uStack_38 = param_3;
  func_0x00010bfece40(lVar1,param_2,&puStack_58);
  if (lVar2 == 0x7fffffffffffffff) {
    lVar3 = 0;
  }
  else {
    lVar3 = lVar1;
    func_0x00010c0dfd40(lVar1,param_2,lVar2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uStack_38);
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10b5e82e0; end: 10b5e831f;  */

bool FUN_10b5e82e0(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c067b40(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x20);
  _objc_release();
  return param_2 == lVar1;
}



/* Entry: 10b5e8320; end: 10b5e835b; -[SCDocObjectActivityMonitorInstanceTracker .cxx_destruct] */

void FUN_10b5e8320(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5e835c; end: 10b5e8943; -[SCDocObjectLoggingActivityMonitor docObjectContextDidEncounterError:contexts:fatal:] */

/* WARNING: Removing unreachable block (ram,0x00010b5e8470) */

void FUN_10b5e835c(long param_1,undefined8 param_2,int *param_3,long param_4,undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_4);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_4);
  puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x00010c25cd40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df760(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf070e0(puVar3);
  _objc_release(puVar5);
  _objc_release(puVar4);
  func_0x00010bf070e0(puVar3);
  if (*(char *)((long)param_3 + 0x27) < '\0') {
    func_0x000107c3192c(&uStack_80,*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 6));
  }
  else {
    uStack_78 = *(undefined8 *)(param_3 + 6);
    uStack_80 = *(undefined8 *)(param_3 + 4);
    uStack_70 = *(undefined8 *)(param_3 + 8);
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_alloc();
  func_0x00010c057e20();
  if (puVar4 != (undefined *)0x0) {
    func_0x00010bf070e0(puVar3);
  }
  puVar5 = puVar3;
  func_0x00010c08fa60();
  if ((param_4 != 0) && (puVar5 < (undefined *)0x3f)) {
    func_0x00010bf070e0(puVar3);
    lVar6 = param_4;
    func_0x00010bf446e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf070e0(puVar3);
    _objc_release(lVar6);
  }
  puVar5 = puVar3;
  func_0x00010c25cfc0();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c08fa60();
  puVar8 = puVar5;
  if (puVar7 < (undefined *)0x41) {
    _objc_retain(puVar5);
  }
  else {
    func_0x00010c260c80(puVar5);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(param_4);
  FUN_10b5e8d1c(uVar11,puVar8,param_5,1);
  _objc_release(puVar8);
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)param_5 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110f63db8;
    if (*param_3 != 1) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110f63d98;
    }
    ppuVar2 = &PTR____CFConstantStringClassReference_110f63dd8;
    if (*param_3 != 2) {
      ppuVar2 = ppuVar1;
    }
    _objc_retain(ppuVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df760();
    _objc_retainAutoreleasedReturnValue();
    if (*(char *)((long)param_3 + 0x27) < '\0') {
      func_0x000107c3192c(&uStack_a0,*(undefined8 *)(param_3 + 4),*(undefined8 *)(param_3 + 6));
    }
    else {
      uStack_98 = *(undefined8 *)(param_3 + 6);
      uStack_a0 = *(undefined8 *)(param_3 + 4);
      lStack_90 = *(long *)(param_3 + 8);
    }
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    func_0x00010c057e20();
    if (*(char *)((long)param_3 + 0x3f) < '\0') {
      func_0x000107c3192c(&uStack_c0,*(undefined8 *)(param_3 + 10),*(undefined8 *)(param_3 + 0xc));
    }
    else {
      uStack_b8 = *(undefined8 *)(param_3 + 0xc);
      uStack_c0 = *(undefined8 *)(param_3 + 10);
      lStack_b0 = *(long *)(param_3 + 0xe);
    }
    puVar8 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_alloc();
    func_0x00010c057e20();
    lVar9 = param_4;
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar6);
    lVar10 = param_1;
    func_0x00010bdfafc0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00(puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar10);
    _objc_release(lVar6);
    _objc_release(lVar9);
    _objc_release(puVar8);
    if (lStack_b0 < 0) {
      __ZdlPv(uStack_c0);
    }
    _objc_release(puVar7);
    if (lStack_90 < 0) {
      __ZdlPv(uStack_a0);
    }
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(ppuVar2);
    (**(code **)(param_1 + 8))(puVar3);
    if (*(char *)(param_1 + 0x28) == '\x01') {
      puVar4 = PTR__OBJC_CLASS___NSException_1126af520;
      func_0x00010bf9aa60(PTR__OBJC_CLASS___NSException_1126af520);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c11f000();
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_4);
  return;
}



/* Entry: 10b5e8944; end: 10b5e8977; -[SCDocObjectLoggingActivityMonitor docObjectContextDidEncounterDiskFull] */

void FUN_10b5e8944(long param_1)

{
  long *plVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  (**(code **)(param_1 + 8))(&PTR____CFConstantStringClassReference_110f63d18);
  puStack_28 = (undefined1 *)&uStack_40;
  if (*(long *)(param_1 + 0x18) != 0) {
    plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 8);
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(*plVar1 + 0x18))(plVar1,&UNK_110d256b8,&uStack_40,1);
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10b5e8978; end: 10b5e89d3; -[SCDocObjectLoggingActivityMonitor docObjectContextShuttingDown] */

void FUN_10b5e8978(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c23b580(uVar2,param_2,lVar1,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b5e89d4; end: 10b5e8a2f; -[SCDocObjectLoggingActivityMonitor docObjectContextShutDown] */

void FUN_10b5e89d4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c23b4c0(uVar2,param_2,lVar1,*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10b5e8a30; end: 10b5e8acf; -[SCDocObjectLoggingActivityMonitor _descriptionForTrackedInstances:] */

void FUN_10b5e8a30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c278c00(uVar3,param_2,*(undefined8 *)(param_1 + 0x20),param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x000107c31908();
  uVar2 = uVar1;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10b5e8ad0; end: 10b5e8c5f;  */

void FUN_10b5e8ad0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  func_0x00010c252440();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c0f58a0(param_2);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_2;
  func_0x00010bf5aac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  func_0x00010c0df720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c080b60(param_2);
  func_0x00010c0df6e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 10b5e8c60; end: 10b5e8ca3; -[SCDocObjectLoggingActivityMonitor .cxx_destruct] */

void FUN_10b5e8c60(long param_1)

{
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10b5e8ca4; end: 10b5e8d1b;  */

void FUN_10b5e8ca4(long param_1,undefined8 param_2)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined1 *puStack_28;
  
  if (param_1 != 0) {
    uStack_40 = 0;
    uStack_38 = 0;
    uStack_30 = 0;
    (**(code **)(**(long **)(param_1 + 8) + 0x18))
              (*(long **)(param_1 + 8),&UNK_110d256b8,&uStack_40,param_2);
    puStack_28 = (undefined1 *)&uStack_40;
    func_0x000107c278ac(&puStack_28);
  }
  return;
}



/* Entry: 10b5e8d1c; end: 10b5e8f03;  */

undefined *
FUN_10b5e8d1c(long param_1,undefined *param_2,undefined8 *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined *unaff_x23;
  undefined1 *unaff_x24;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined1 *puStack_e0;
  undefined *puStack_d8;
  undefined8 *puStack_d0;
  undefined1 *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 *puStack_80;
  undefined1 auStack_78 [24];
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  uVar6 = (undefined1)param_4;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = param_3;
  _objc_retain(param_2);
  uVar7 = (undefined1)param_6;
  puVar11 = (undefined1 *)0x0;
  if (param_1 != 0) {
    plVar10 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (undefined *)0x0) {
      unaff_x23 = &UNK_10f7809fd;
    }
    else {
      unaff_x23 = param_2;
      _objc_retainAutorelease();
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    unaff_x24 = auStack_78;
    func_0x000107c278b8(auStack_78,unaff_x23);
    puVar1 = &UNK_10f780a36;
    if ((int)param_3 == 0) {
      puVar1 = &UNK_10f780a3b;
    }
    func_0x000107c278b8(auStack_60,puVar1);
    uStack_98 = 0;
    uStack_90 = 0;
    uStack_88 = 0;
    func_0x000107c27984(&uStack_98,auStack_78,&lStack_48,2);
    param_3 = &uStack_98;
    puVar5 = &uStack_98;
    (**(code **)(*plVar10 + 0x18))(plVar10,&UNK_110d25758);
    puStack_80 = param_3;
    func_0x000107c278ac(&puStack_80);
    lVar9 = 0;
    puVar11 = auStack_78;
    do {
      if ((&cStack_49)[lVar9] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar9));
      }
      uVar7 = (undefined1)param_6;
      uVar6 = (undefined1)param_4;
      lVar9 = lVar9 + -0x18;
    } while (lVar9 != -0x30);
  }
  puVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  puVar2 = puVar1;
  __Unwind_Resume();
  ppuVar3 = &puStack_f0;
  pcStack_a8 = FUN_10b5e8f04;
  puStack_e0 = unaff_x24;
  puStack_d8 = unaff_x23;
  puStack_d0 = param_3;
  puStack_c8 = puVar11;
  puStack_c0 = puVar1;
  puStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(param_5);
  puStack_e8 = PTR_PTR_1127065d0;
  puStack_f0 = puVar2;
  _objc_msgSendSuper2(&puStack_f0,PTR_s_init_1125d9248);
  if (ppuVar3 != (undefined **)0x0) {
    *(undefined8 **)((long)ppuVar3 + 0x10) = puVar5;
    *(undefined1 *)((long)ppuVar3 + 8) = uVar6;
    uVar4 = param_5;
    func_0x00010bf51e00();
    uVar8 = *(undefined8 *)((long)ppuVar3 + 0x18);
    *(undefined8 *)((long)ppuVar3 + 0x18) = uVar4;
    _objc_release(uVar8);
    *(undefined1 *)((long)ppuVar3 + 9) = uVar7;
  }
  _objc_release(param_5);
  return (undefined *)ppuVar3;
}



/* Entry: 10b5e8f04; end: 10b5e8fa3; -[SCTrackedDocObjectContextInstance initWithState:pathExists:creationTime:isTarget:] */

undefined1 *
FUN_10b5e8f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1127065d0;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 9) = param_6;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10b5e8fa4; end: 10b5e8fc7; -[SCTrackedDocObjectContextInstance copyWithZone:] */

undefined8 FUN_10b5e8fa4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10b5e8fc8; end: 10b5e903b; -[SCTrackedDocObjectContextInstance hash] */

undefined8 * FUN_10b5e8fc8(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = (ulong)*(byte *)(param_1 + 8);
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  puVar2 = &uStack_48;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10b5e90e0;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       (((puVar2[2] != param_3[2] || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) ||
        (*(char *)((long)puVar2 + 9) != *(char *)((long)param_3 + 9))))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10b5e90e0;
    }
    puVar4 = (undefined8 *)puVar2[3];
    if (puVar4 != (undefined8 *)param_3[3]) {
      func_0x00010c071ae0();
      goto LAB_10b5e90e0;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10b5e90e0:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10b5e903c; end: 10b5e90fb; -[SCTrackedDocObjectContextInstance isEqual:] */

long FUN_10b5e903c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10b5e90e0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       (((*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10) ||
         (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) ||
        (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      goto LAB_10b5e90e0;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10b5e90e0;
    }
  }
  lVar3 = 1;
LAB_10b5e90e0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10b5e90fc; end: 10b5e9103; -[SCTrackedDocObjectContextInstance state] */

undefined8 FUN_10b5e90fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5e9104; end: 10b5e910b; -[SCTrackedDocObjectContextInstance pathExists] */

undefined1 FUN_10b5e9104(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10b5e910c; end: 10b5e9113; -[SCTrackedDocObjectContextInstance creationTime] */

undefined8 FUN_10b5e910c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10b5e9114; end: 10b5e911b; -[SCTrackedDocObjectContextInstance isTarget] */

undefined1 FUN_10b5e9114(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10b5e911c; end: 10b5e9127; -[SCTrackedDocObjectContextInstance .cxx_destruct] */

void FUN_10b5e911c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10b5e9128; end: 10b5e9157; -[SCDispatchLock .cxx_destruct] */

void FUN_10b5e9128(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10b5e9158; end: 10b5e9aef;  */

bool FUN_10b5e9158(ulong param_1)

{
  func_0x00010bf3ec40();
  return (param_1 & 0xff) == 1;
}



/* Entry: 10b5e9af0; end: 10b5e9b4f; -[SCSQLiteDocObjectFetchedResultObservationToken dealloc] */

void FUN_10b5e9af0(long param_1)

{
  long lVar1;
  long lStack_30;
  undefined *puStack_28;
  
  lVar1 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  FUN_10b5eae64();
  _objc_release(lVar1);
  puStack_28 = PTR_PTR_1127065e0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b5e9b50; end: 10b5e9b57; -[SCSQLiteDocObjectFetchedResultObservationToken .cxx_destruct] */

void FUN_10b5e9b50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x20);
  return;
}



/* Entry: 10b5e9b58; end: 10b5e9c37;  */

void FUN_10b5e9b58(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_2);
  lVar1 = param_1[1];
  if (*param_1 == 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
  else {
    _objc_retainBlock();
    lVar2 = *param_1;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    uStack_50 = 0x10b5e9d80;
    puStack_48 = &UNK_1107d0af0;
    lStack_38 = lVar1;
    _objc_retain(param_2);
    uStack_40 = param_2;
    _objc_retain(lVar1);
    func_0x000107c27d8c(lVar2,&puStack_60);
    _objc_release(uStack_40);
    _objc_release(lStack_38);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 10b5e9c38; end: 10b5e9c77;  */

long FUN_10b5e9c38(long param_1)

{
  if (*(char *)(param_1 + 0x3f) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x28));
  }
  if (*(char *)(param_1 + 0x27) < '\0') {
    __ZdlPv(*(undefined8 *)(param_1 + 0x10));
  }
  return param_1;
}



/* Entry: 10b5e9c78; end: 10b5e9c8b;  */

void FUN_10b5e9c78(undefined8 param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)&DAT_10f62a4d8;
  func_0x000104bd47e8();
  lVar2 = *plVar1;
  *plVar1 = param_2;
  if (lVar2 != 0) {
    if ((char)plVar1[2] == '\x01') {
      func_0x00010b5e9cd4(lVar2 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar2);
    return;
  }
  return;
}



/* Entry: 10b5e9c8c; end: 10b5e9d77;  */

void FUN_10b5e9c8c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x00010b5e9cd4(lVar1 + 0x10);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b5e9d78; end: 10b5e9d8f;  */

void FUN_10b5e9d78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdba64c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__CFRelease_11034a768)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10b5e9d90; end: 10b5e9de7;  */

undefined8 FUN_10b5e9d90(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long alStack_38 [2];
  char cStack_28;
  
  uVar2 = *param_2;
  FUN_10b5e9de8(alStack_38);
  lVar1 = alStack_38[0];
  alStack_38[0] = 0;
  if (lVar1 != 0) {
    if (cStack_28 == '\x01') {
      FUN_10b5e9f04(lVar1 + 0x18);
    }
    __ZdlPv(lVar1);
  }
  return uVar2;
}



/* Entry: 10b5e9de8; end: 10b5e9f03;  */

void FUN_10b5e9de8(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10b5e9e9c;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10b5e9e9c;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10b5e9e9c:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10b5e9f04; end: 10b5e9fcf;  */

long * FUN_10b5e9f04(long *param_1)

{
  long lVar1;
  
  func_0x00010b5e9f3c(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b5e9fd0; end: 10b5ea0eb;  */

void FUN_10b5e9fd0(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10b5ea084;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10b5ea084;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10b5ea084:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10b5ea0ec; end: 10b5ea15f;  */

long * FUN_10b5ea0ec(long *param_1)

{
  long lVar1;
  
  func_0x00010b5ea124(param_1,param_1[2]);
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b5ea160; end: 10b5ea18b; -[SCSQLiteDocObjectBlockFetching .cxx_destruct] */

long * FUN_10b5ea160(long param_1)

{
  long lVar1;
  long lStack_28;
  
  _objc_storeStrong(param_1 + 0x18,0);
  lStack_28 = *(long *)(param_1 + 8);
  if ((lStack_28 != 0) && (*(long *)(param_1 + 0x10) != 0)) {
    func_0x000100105070(*(long *)(param_1 + 0x10),&lStack_28);
    lVar1 = lStack_28;
    lStack_28 = 0;
    if (lVar1 != 0) {
      func_0x000107c310d4();
      func_0x000107c60e14();
    }
  }
  return (long *)(param_1 + 8);
}



/* Entry: 10b5ea18c; end: 10b5ea193; -[SCSQLiteDocObjectBlockFetching .cxx_construct] */

void FUN_10b5ea18c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}



/* Entry: 10b5ea194; end: 10b5ea20b;  */

void FUN_10b5ea194(long *param_1)

{
  long lVar1;
  long lVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  *(undefined1 *)(param_1 + 0xd) = 0;
  __ZNSt3__15mutex6unlockEv(param_1 + 5);
  _dispatch_group_wait(param_1[4],0xffffffffffffffff);
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  while (lVar1 != lVar2) {
    lVar2 = lVar2 + -8;
    func_0x000107c27dac(lVar2,0);
  }
  param_1[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 5);
  return;
}



/* Entry: 10b5ea20c; end: 10b5ea2ab; -[SCSQLiteDocObjectContext dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5ea20c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  *(undefined1 *)(param_1 + _DAT_11278eb24) = 1;
  func_0x000107c27dac(param_1 + _DAT_11278eb14,0);
  FUN_10b5ea2ac(*(undefined8 *)(param_1 + _DAT_11278eb1c));
  puStack_28 = PTR_PTR_1127065f8;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10b5ea2ac; end: 10b5ea2e3;  */

void FUN_10b5ea2ac(long *param_1)

{
  long lVar1;
  long lVar2;
  
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  *(undefined1 *)((long)param_1 + 0x69) = 1;
  __ZNSt3__15mutex6unlockEv(param_1 + 5);
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  *(undefined1 *)(param_1 + 0xd) = 0;
  __ZNSt3__15mutex6unlockEv(param_1 + 5);
  _dispatch_group_wait(param_1[4],0xffffffffffffffff);
  __ZNSt3__15mutex4lockEv(param_1 + 5);
  lVar1 = *param_1;
  lVar2 = param_1[1];
  while (lVar1 != lVar2) {
    lVar2 = lVar2 + -8;
    func_0x000107c27dac(lVar2,0);
  }
  param_1[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd478. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__15mutex6unlockEv_110346788)(param_1 + 5);
  return;
}



/* Entry: 10b5ea2e4; end: 10b5ea3cb; -[SCSQLiteDocObjectContext shutdownAsynchronously:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5ea2e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  *(undefined1 *)(param_1 + _DAT_11278eb24) = 1;
  func_0x00010bf87780(*(undefined8 *)(param_1 + _DAT_11278eb18));
  uVar2 = *(undefined8 *)(param_1 + _DAT_11278eb04);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b5ea3cc;
  puStack_48 = &UNK_1107d0af0;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = 0x20;
  func_0x000107c27d90(0x20,&puStack_60);
  func_0x000107c27d8c(uVar2,uVar1);
  _objc_release(uVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10b5ea3cc; end: 10b5ea42b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5ea3cc(long param_1)

{
  func_0x000107c27dac(*(long *)(param_1 + 0x20) + (long)_DAT_11278eb14,0);
  FUN_10b5ea2ac(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278eb1c));
  func_0x00010bf87760(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11278eb18));
                    /* WARNING: Could not recover jumptable at 0x00010b5ea428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
  return;
}



/* Entry: 10b5ea42c; end: 10b5ea72f; -[SCSQLiteDocObjectContext fetchWithBlock:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5ea42c(undefined *param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  puVar4 = PTR_PTR_1126b04a8;
  func_0x00010bf877e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar2 = param_3;
  if (param_1 == puVar4) {
    (**(code **)(param_3 + 0x10))(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar1 = (undefined **)PTR_PTR_1126e0378;
    func_0x000107c306dc();
    _objc_retainAutoreleasedReturnValue();
    if (ppuVar1 == (undefined **)0x0) {
      _objc_autoreleasePoolPush();
      puVar5 = *(undefined **)(param_1 + _DAT_11278eb28);
      puVar4 = PTR_PTR_1126e03a8;
      _objc_alloc();
      func_0x000107c306e0(&puStack_70,*(undefined8 *)(param_1 + _DAT_11278eb1c));
      _objc_retain(param_1);
      ppuVar3 = (undefined **)0x0;
      if (puVar4 != (undefined *)0x0) {
        puStack_58 = PTR_PTR_1127065f0;
        ppuVar3 = &puStack_60;
        puStack_60 = puVar4;
        _objc_msgSendSuper2(ppuVar3,PTR_s_init_1125d9248);
        if (ppuVar3 != (undefined **)0x0) {
          _objc_retain(param_1);
          puVar4 = ppuVar3[3];
          ppuVar3[3] = param_1;
          _objc_release(puVar4);
          ppuVar3[2] = puStack_68;
          ppuVar3[1] = puStack_70;
          puStack_70 = (undefined *)0x0;
          puStack_68 = (undefined *)0x0;
          ppuVar3[4] = puVar5;
        }
      }
      _objc_release(param_1);
      func_0x000107c27da8(&puStack_70);
      puVar6 = ppuVar3[1];
      puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
      func_0x00010bf60460(PTR__OBJC_CLASS___NSThread_1126b47e0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c26d3e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(puVar5);
      _objc_release(puVar4);
      if (puVar6 != (undefined *)0x0) {
        func_0x000107c310d8(puVar6,&DAT_10f519150);
        _sqlite3_step();
      }
      (**(code **)(param_3 + 0x10))(param_3);
      _objc_retainAutoreleasedReturnValue();
      if (puVar6 != (undefined *)0x0) {
        func_0x000107c310d8(puVar6,&UNK_10f51916d);
        _sqlite3_step();
      }
      puVar4 = PTR__OBJC_CLASS___NSThread_1126b47e0;
      func_0x00010bf60460(PTR__OBJC_CLASS___NSThread_1126b47e0);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c26d3e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_autoreleasePoolPop(ppuVar1);
    }
    else {
      (**(code **)(param_3 + 0x10))(param_3);
      _objc_retainAutoreleasedReturnValue();
      ppuVar3 = ppuVar1;
    }
    _objc_release(ppuVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 10b5ea730; end: 10b5ea753; -[SCSQLiteDocObjectContext unsafeObserveWithoutDispatch:changeHandler:] */

void FUN_10b5ea730(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c306e4(param_1,param_3,0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5ea754; end: 10b5ea777; -[SCSQLiteDocObjectContext unsafeObserveFetchedResultWithoutDispatch:changeHandler:] */

void FUN_10b5ea754(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c306e8(param_1,param_3,0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5ea778; end: 10b5ea973;  */

void FUN_10b5ea778(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  char cStack_59;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char cStack_41;
  
  _objc_retain(param_2);
  func_0x000107c278b8(&uStack_58,&UNK_10f780b74);
  uVar3 = param_3;
  _strlen(param_3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_58,param_3,uVar3);
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
            (&uStack_58,&UNK_10f780b83,0x19);
  if (cStack_41 < '\0') {
    func_0x000107c3192c(&uStack_70,uStack_58,uStack_50);
  }
  else {
    uStack_68 = uStack_50;
    uStack_70 = uStack_58;
    cStack_59 = cStack_41;
  }
  lVar1 = param_1;
  func_0x000107c310dc(param_1,&uStack_70);
  if (cStack_59 < '\0') {
    __ZdlPv(uStack_70);
  }
  _sqlite3_bind_int64(lVar1,1,param_4);
  lVar2 = lVar1;
  _sqlite3_step();
  if ((int)lVar2 == 100) {
    lVar2 = lVar1;
    _sqlite3_column_blob(lVar1,0);
    if (lVar2 == 0) {
      _sqlite3_errcode(*(undefined8 *)(param_1 + 0x58));
      _sqlite3_extended_errcode(*(undefined8 *)(param_1 + 0x58));
      uVar3 = 0;
      goto LAB_10b5ea8b8;
    }
    _sqlite3_column_bytes(lVar1,0);
    uVar3 = param_2;
    func_0x00010bfe9d80(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1eeb60();
  }
  else {
    uVar3 = 0;
  }
  _sqlite3_reset(lVar1);
  _sqlite3_clear_bindings(lVar1);
LAB_10b5ea8b8:
  if (cStack_41 < '\0') {
    __ZdlPv(uStack_58);
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10b5ea974; end: 10b5eae23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5ea974(long param_1)

{
  ulong uVar1;
  undefined8 *******pppppppuVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 ******ppppppuVar8;
  undefined8 ******ppppppuVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 ******ppppppuVar19;
  ulong *puVar20;
  long *plVar21;
  long *plVar22;
  long lVar23;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined8 *****pppppuStack_88;
  undefined8 uStack_80;
  undefined8 ******ppppppuStack_78;
  int iStack_70;
  char cStack_61;
  
  if ((param_1 != 0) && (lVar6 = *(long *)(param_1 + _DAT_11278eb14), lVar6 != 0)) {
    func_0x000107c310d8(lVar6,&DAT_10f519150);
    iVar4 = (int)lVar6;
    _sqlite3_step();
    lVar6 = (long)_DAT_11278eb58;
    if (iVar4 == 0x65) {
      *(undefined1 *)(param_1 + lVar6) = 1;
      lVar6 = *(long *)(param_1 + _DAT_11278eb14);
      plVar21 = *(long **)(lVar6 + 0x70);
      if (plVar21 != (long *)0x0) {
        iVar4 = 0;
        do {
          puVar20 = (ulong *)(plVar21 + 2);
          lVar7 = lVar6 + 0x60;
          FUN_10b5ec038(lVar7,*puVar20,puVar20);
          plVar17 = (long *)(param_1 + _DAT_11278eb5c);
          uVar13 = plVar17[1];
          if ((uVar13 != 0) && (plVar17[3] != 0)) {
            uVar14 = *puVar20;
            uVar15 = uVar13 - 1;
            if ((uVar13 & uVar15) == 0) {
              uVar16 = uVar15 & uVar14;
            }
            else {
              uVar16 = uVar14;
              if (uVar13 <= uVar14) {
                uVar16 = 0;
                if (uVar13 != 0) {
                  uVar16 = uVar14 / uVar13;
                }
                uVar16 = uVar14 - uVar16 * uVar13;
              }
            }
            plVar17 = *(long **)(*plVar17 + uVar16 * 8);
            if (plVar17 != (long *)0x0) {
              for (plVar17 = (long *)*plVar17; plVar17 != (long *)0x0; plVar17 = (long *)*plVar17) {
                uVar18 = plVar17[1];
                if (uVar18 == uVar14) {
                  if (plVar17[2] == uVar14) {
                    lVar23 = param_1 + _DAT_11278eb40;
                    func_0x000107c30718(lVar23,puVar20);
                    if (lVar23 != 0) {
                      plVar22 = *(long **)(lVar7 + 0x28);
                      goto joined_r0x00010b5eaad4;
                    }
                    break;
                  }
                }
                else {
                  if ((uVar13 & uVar15) == 0) {
                    uVar18 = uVar18 & uVar15;
                  }
                  else if (uVar13 <= uVar18) {
                    uVar1 = 0;
                    if (uVar13 != 0) {
                      uVar1 = uVar18 / uVar13;
                    }
                    uVar18 = uVar18 - uVar1 * uVar13;
                  }
                  if (uVar18 != uVar16) break;
                }
              }
            }
          }
LAB_10b5eaaa8:
          plVar21 = (long *)*plVar21;
        } while (plVar21 != (long *)0x0);
        lVar6 = *(long *)(param_1 + _DAT_11278eb14);
      }
      func_0x000107c310d8(lVar6,&UNK_10f51916d);
      _sqlite3_step();
      lVar6 = (long)_DAT_11278eb58;
    }
    *(undefined1 *)(param_1 + lVar6) = 0;
  }
  return;
joined_r0x00010b5eaad4:
  if (plVar22 == (long *)0x0) goto LAB_10b5eaaa8;
  if (*(int *)(plVar22 + 3) != 2) {
    uVar13 = *puVar20;
    ppppppuVar19 = (undefined8 ******)plVar22[2];
    lVar23 = *(long *)(param_1 + _DAT_11278eb14);
    pppppuStack_88 = ppppppuVar19;
    if (lVar23 == 0) {
      if (0x1ff < iVar4) goto LAB_10b5ead34;
    }
    else {
      ppppppuVar8 = ppppppuVar19;
      (*(code *)plVar17[3])();
      func_0x000107c278b8(&ppppppuStack_78,&UNK_10f780b9d);
      uVar14 = uVar13;
      _strlen(uVar13);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppppuStack_78,uVar13,uVar14);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppppuStack_78,&UNK_10f780bb2,0x34);
      uVar14 = uVar13;
      _strlen(uVar13);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppppuStack_78,uVar13,uVar14);
      ppppppuVar9 = ppppppuVar19;
      _strlen(ppppppuVar19);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppppuStack_78,ppppppuVar19,ppppppuVar9);
      __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm
                (&ppppppuStack_78,&UNK_10f780be7,5);
      uStack_80 = 0;
      uVar10 = *(undefined8 *)(lVar23 + 0x58);
      iVar12 = iStack_70;
      pppppppuVar2 = (undefined8 *******)ppppppuStack_78;
      if (-1 < cStack_61) {
        iVar12 = (int)cStack_61;
        pppppppuVar2 = &ppppppuStack_78;
      }
      _sqlite3_prepare_v2(uVar10,pppppppuVar2,iVar12,&uStack_80,0);
      if ((int)uVar10 == 0) {
        iVar12 = iVar4;
        if (iVar4 < 0x200) {
          iVar12 = 0x1ff;
        }
        bVar3 = true;
        do {
          uVar10 = uStack_80;
          _sqlite3_step();
          if ((int)uVar10 != 100) goto LAB_10b5eac74;
          uVar10 = uStack_80;
          _sqlite3_column_int64(uStack_80,0);
          uVar11 = uStack_80;
          _sqlite3_column_blob(uStack_80,1);
          ppppppuVar19 = ppppppuVar8;
          (*(code *)plVar17[4])(ppppppuVar8,lVar23,uVar11,uVar10);
          if (((ulong)ppppppuVar19 & 1) == 0) {
            iVar5 = (int)*(undefined8 *)(lVar23 + 0x58);
            _sqlite3_extended_errcode();
            bVar3 = (bool)(iVar5 == 0x813 & bVar3);
          }
          iVar4 = iVar4 + 1;
        } while (iVar12 + 1 != iVar4);
        uVar10 = uStack_80;
        _sqlite3_step();
        bVar3 = (bool)((int)uVar10 != 100 & bVar3);
        iVar4 = iVar12 + 1;
LAB_10b5eac74:
        _sqlite3_finalize(uStack_80);
      }
      else {
        bVar3 = false;
      }
      if (cStack_61 < '\0') {
        __ZdlPv(ppppppuStack_78);
      }
      if (!bVar3 && 0x1ff < iVar4) {
LAB_10b5ead34:
        ppppppuStack_78 = &pppppuStack_88;
        lVar7 = lVar7 + 0x18;
        func_0x00010507ce00(lVar7,&pppppuStack_88,&UNK_10dd5b8f9,&ppppppuStack_78,&uStack_80);
        *(undefined4 *)(lVar7 + 0x18) = 1;
        func_0x000107c310d8(*(undefined8 *)(param_1 + _DAT_11278eb14),&UNK_10f51916d);
        _sqlite3_step();
        _objc_initWeak(&ppppppuStack_78,param_1);
        uVar10 = *(undefined8 *)(param_1 + _DAT_11278eb04);
        puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_a8 = 0xc2000000;
        pcStack_a0 = FUN_10b5eae24;
        puStack_98 = &UNK_110876b10;
        _objc_copyWeak(auStack_90,&ppppppuStack_78);
        func_0x000107c27d8c(uVar10,&puStack_b0);
        _objc_destroyWeak(auStack_90);
        _objc_destroyWeak(&ppppppuStack_78);
        return;
      }
      if (bVar3) {
        ppppppuStack_78 = &pppppuStack_88;
        lVar23 = lVar7 + 0x18;
        func_0x00010507ce00(lVar23,&pppppuStack_88,&UNK_10dd5b8f9,&ppppppuStack_78,&uStack_80);
        *(undefined4 *)(lVar23 + 0x18) = 2;
      }
    }
  }
  plVar22 = (long *)*plVar22;
  goto joined_r0x00010b5eaad4;
}



/* Entry: 10b5eae24; end: 10b5eae63;  */

void FUN_10b5eae24(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  FUN_10b5ea974();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10b5eae64; end: 10b5eb40b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5eae64(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  if (param_1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar1 = *(undefined8 *)(param_1 + _DAT_11278eb04);
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    uStack_78 = 0x10b5eaf20;
    puStack_70 = &UNK_110982ac8;
    _objc_copyWeak(auStack_68,auStack_48);
    uStack_60 = param_2;
    uStack_58 = param_3;
    uStack_50 = param_4;
    func_0x000107c27d8c(uVar1,&puStack_88);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_48);
  }
  return;
}



/* Entry: 10b5eb40c; end: 10b5eb50f; -[SCSQLiteDocObjectContext buildIndexes:forTable:tableFunctionPointer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5eb40c(long param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278eb04);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc6000000;
  pcStack_90 = FUN_10b5eb510;
  puStack_88 = &UNK_110d25988;
  _objc_copyWeak(auStack_80,auStack_48);
  lStack_78 = 0;
  lStack_70 = 0;
  uStack_68 = 0;
  FUN_10b5ebd90(&lStack_78,*param_3,param_3[1],param_3[1] - *param_3 >> 3);
  uStack_60 = param_4;
  uStack_58 = param_5;
  uStack_50 = param_6;
  func_0x000107c27d8c(uVar1,&puStack_a0);
  if (lStack_78 != 0) {
    lStack_70 = lStack_78;
    __ZdlPv();
  }
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 10b5eb510; end: 10b5eb99f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5eb510(long param_1)

{
  long *plVar1;
  ulong uVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long *plVar11;
  long *plVar12;
  long *plVar13;
  ulong uVar14;
  ulong uVar15;
  long *plVar16;
  ulong unaff_x23;
  ulong uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uStack_68;
  undefined1 uStack_59;
  long lStack_58;
  
  lVar5 = param_1 + 0x20;
  _objc_loadWeakRetained();
  uVar15 = *(ulong *)(param_1 + 0x40);
  lVar20 = *(long *)(param_1 + 0x50);
  lVar19 = *(long *)(param_1 + 0x48);
  uStack_68 = uVar15;
  if (lVar5 == 0) goto LAB_10b5eb914;
  plVar1 = (long *)(lVar5 + _DAT_11278eb5c);
  uVar17 = plVar1[1];
  if (uVar17 != 0) {
    uVar7 = uVar17 - 1;
    if ((uVar17 & uVar7) == 0) {
      unaff_x23 = uVar7 & uVar15;
    }
    else {
      unaff_x23 = uVar15;
      if (uVar17 <= uVar15) {
        uVar10 = 0;
        if (uVar17 != 0) {
          uVar10 = uVar15 / uVar17;
        }
        unaff_x23 = uVar15 - uVar10 * uVar17;
      }
    }
    puVar9 = *(undefined8 **)(*plVar1 + unaff_x23 * 8);
    if (puVar9 != (undefined8 *)0x0) {
      for (plVar16 = (long *)*puVar9; plVar16 != (long *)0x0; plVar16 = (long *)*plVar16) {
        uVar10 = plVar16[1];
        if (uVar10 == uVar15) {
          if (plVar16[2] == uVar15) goto LAB_10b5eb868;
        }
        else {
          if ((uVar17 & uVar7) == 0) {
            uVar10 = uVar10 & uVar7;
          }
          else if (uVar17 <= uVar10) {
            uVar8 = 0;
            if (uVar17 != 0) {
              uVar8 = uVar10 / uVar17;
            }
            uVar10 = uVar10 - uVar8 * uVar17;
          }
          if (uVar10 != unaff_x23) break;
        }
      }
    }
  }
  plVar16 = (long *)0x28;
  __Znwm();
  *plVar16 = 0;
  plVar16[1] = uVar15;
  plVar16[3] = 0;
  plVar16[4] = 0;
  plVar16[2] = uVar15;
  if ((uVar17 == 0) || (*(float *)(plVar1 + 4) * (float)uVar17 < (float)(plVar1[3] + 1))) {
    uVar7 = 1;
    if (2 < uVar17) {
      uVar7 = (ulong)((uVar17 & uVar17 - 1) != 0);
    }
    uVar7 = uVar7 | uVar17 << 1;
    uVar10 = (ulong)((float)(plVar1[3] + 1) / *(float *)(plVar1 + 4));
    if (uVar7 <= uVar10) {
      uVar7 = uVar10;
    }
    if (uVar7 - 1 == 0) {
      uVar7 = 2;
    }
    else if ((uVar7 & uVar7 - 1) != 0) {
      __ZNSt3__112__next_primeEm();
      uVar17 = plVar1[1];
    }
    if (uVar17 < uVar7) {
LAB_10b5eb68c:
      if (uVar7 >> 0x3d != 0) {
        func_0x000104bd35f4();
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10b5eb978);
        (*pcVar4)();
      }
      lVar18 = uVar7 << 3;
      __Znwm();
      lVar6 = *plVar1;
      *plVar1 = lVar18;
      if (lVar6 != 0) {
        __ZdlPv();
        lVar18 = *plVar1;
      }
      plVar1[1] = uVar7;
      _bzero(lVar18,uVar7 << 3);
      plVar11 = (long *)plVar1[2];
      uVar17 = uVar7;
      if (plVar11 != (long *)0x0) {
        uVar10 = plVar11[1];
        uVar8 = uVar7 - 1;
        if ((uVar7 & uVar8) == 0) {
          uVar10 = uVar10 & uVar8;
        }
        else if (uVar7 <= uVar10) {
          uVar14 = 0;
          if (uVar7 != 0) {
            uVar14 = uVar10 / uVar7;
          }
          uVar10 = uVar10 - uVar14 * uVar7;
        }
        *(long **)(lVar18 + uVar10 * 8) = plVar1 + 2;
        plVar12 = (long *)*plVar11;
        while (plVar12 != (long *)0x0) {
          uVar14 = plVar12[1];
          if ((uVar7 & uVar8) == 0) {
            uVar14 = uVar14 & uVar8;
          }
          else if (uVar7 <= uVar14) {
            uVar2 = 0;
            if (uVar7 != 0) {
              uVar2 = uVar14 / uVar7;
            }
            uVar14 = uVar14 - uVar2 * uVar7;
          }
          plVar13 = plVar12;
          if (uVar14 != uVar10) {
            if (*(long *)(lVar18 + uVar14 * 8) == 0) {
              *(long **)(lVar18 + uVar14 * 8) = plVar11;
              uVar10 = uVar14;
            }
            else {
              *plVar11 = *plVar12;
              *plVar12 = **(undefined8 **)(lVar18 + uVar14 * 8);
              **(long **)(lVar18 + uVar14 * 8) = (long)plVar12;
              plVar13 = plVar11;
            }
          }
          plVar11 = plVar13;
          plVar12 = (long *)*plVar13;
        }
      }
    }
    else if (uVar7 < uVar17) {
      uVar10 = (ulong)((float)(ulong)plVar1[3] / *(float *)(plVar1 + 4));
      if ((uVar17 < 3) || ((uVar17 & uVar17 - 1) != 0)) {
        __ZNSt3__112__next_primeEm();
      }
      else if (1 < uVar10) {
        uVar10 = 1L << (-LZCOUNT(uVar10 - 1) & 0x3fU);
      }
      if (uVar7 <= uVar10) {
        uVar7 = uVar10;
      }
      if (uVar7 < uVar17) {
        if (uVar7 != 0) goto LAB_10b5eb68c;
        lVar18 = *plVar1;
        *plVar1 = 0;
        if (lVar18 != 0) {
          __ZdlPv();
        }
        plVar1[1] = 0;
        uVar17 = 0;
      }
      else {
        uVar17 = plVar1[1];
      }
    }
    if ((uVar17 & uVar17 - 1) == 0) {
      unaff_x23 = uVar17 - 1 & uVar15;
    }
    else {
      unaff_x23 = uVar15;
      if (uVar17 <= uVar15) {
        uVar7 = 0;
        if (uVar17 != 0) {
          uVar7 = uVar15 / uVar17;
        }
        unaff_x23 = uVar15 - uVar7 * uVar17;
      }
    }
  }
  lVar18 = *plVar1;
  plVar11 = *(long **)(lVar18 + unaff_x23 * 8);
  if (plVar11 == (long *)0x0) {
    plVar11 = plVar1 + 2;
    *plVar16 = *plVar11;
    *plVar11 = (long)plVar16;
    *(long **)(lVar18 + unaff_x23 * 8) = plVar11;
    if (*plVar16 != 0) {
      uVar7 = *(ulong *)(*plVar16 + 8);
      if ((uVar17 & uVar17 - 1) == 0) {
        uVar7 = uVar7 & uVar17 - 1;
      }
      else if (uVar17 <= uVar7) {
        uVar10 = 0;
        if (uVar17 != 0) {
          uVar10 = uVar7 / uVar17;
        }
        uVar7 = uVar7 - uVar10 * uVar17;
      }
      *(long **)(lVar18 + uVar7 * 8) = plVar16;
    }
  }
  else {
    *plVar16 = *plVar11;
    *plVar11 = (long)plVar16;
  }
  plVar1[3] = plVar1[3] + 1;
LAB_10b5eb868:
  plVar16[4] = lVar20;
  plVar16[3] = lVar19;
  lVar19 = *(long *)(lVar5 + _DAT_11278eb14) + 0x60;
  FUN_10b5ec038(lVar19,uVar15,&uStack_68);
  lVar20 = *(long *)(param_1 + 0x28);
  lVar18 = *(long *)(param_1 + 0x30);
  if (lVar20 != lVar18) {
    bVar3 = false;
    do {
      lVar6 = lVar19 + 0x18;
      func_0x000107c27e14(lVar6,lVar20);
      if (lVar6 == 0) {
        lVar6 = lVar19 + 0x18;
        lStack_58 = lVar20;
        func_0x00010507ce00(lVar6,lVar20,&UNK_10dd5b8f9,&lStack_58,&uStack_59);
        *(undefined4 *)(lVar6 + 0x18) = 0;
      }
      else {
        bVar3 = (bool)(*(int *)(lVar6 + 0x18) != 2 | bVar3);
      }
      lVar20 = lVar20 + 8;
    } while (lVar20 != lVar18);
    if ((bVar3) && ((*(byte *)(lVar5 + _DAT_11278eb58) & 1) == 0)) {
      FUN_10b5ea974(lVar5);
    }
  }
LAB_10b5eb914:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar5);
  return;
}



/* Entry: 10b5eb9a0; end: 10b5eb9fb;  */

void FUN_10b5eb9a0(long param_1,long param_2)

{
  _objc_copyWeak(param_1 + 0x20,param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  FUN_10b5ebd90();
  return;
}



/* Entry: 10b5eb9fc; end: 10b5eba2b;  */

void FUN_10b5eb9fc(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    *(long *)(param_1 + 0x30) = *(long *)(param_1 + 0x28);
    __ZdlPv();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x20);
  return;
}



/* Entry: 10b5eba2c; end: 10b5ebac7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5eba2c(long param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  
  if (param_1 != 0) {
    pbVar1 = (byte *)(param_1 + _DAT_11278eb60);
    do {
      bVar2 = *pbVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(pbVar1,0x10);
      if (bVar4) {
        *pbVar1 = 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if ((bVar2 & 1) == 0) {
      uVar5 = *(undefined8 *)(param_1 + _DAT_11278eb10);
      func_0x00010c25ce20(uVar5,param_2,&PTR____CFConstantStringClassReference_110df8fd8);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc3520();
      _fopen();
      _fclose();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar5);
      return;
    }
  }
  return;
}



/* Entry: 10b5ebac8; end: 10b5ebc67; -[SCSQLiteDocObjectContext .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5ebac8(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  
  _objc_storeStrong(param_1 + _DAT_11278eb20,0);
  plVar1 = (long *)(param_1 + _DAT_11278eb54);
  plVar2 = (long *)plVar1[2];
  while (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    FUN_10b5ebf94(plVar2 + 3);
    __ZdlPv(plVar2);
    plVar2 = (long *)lVar3;
  }
  lVar3 = *plVar1;
  *plVar1 = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  plVar1 = (long *)(param_1 + _DAT_11278eb50);
  plVar2 = (long *)plVar1[2];
  while (plVar2 != (long *)0x0) {
    lVar3 = *plVar2;
    FUN_10b5ea0ec(plVar2 + 3);
    __ZdlPv(plVar2);
    plVar2 = (long *)lVar3;
  }
  lVar3 = *plVar1;
  *plVar1 = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  plVar1 = (long *)(param_1 + _DAT_11278eb4c);
  plVar2 = (long *)plVar1[2];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    __ZdlPv();
  }
  lVar3 = *plVar1;
  *plVar1 = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  func_0x000107c30720(param_1 + _DAT_11278eb40);
  func_0x00010b5ec2a8(param_1 + _DAT_11278eb44);
  func_0x00010b5ec2a8(param_1 + _DAT_11278eb48);
  plVar1 = (long *)(param_1 + _DAT_11278eb5c);
  plVar2 = (long *)plVar1[2];
  while (plVar2 != (long *)0x0) {
    plVar2 = (long *)*plVar2;
    __ZdlPv();
  }
  lVar3 = *plVar1;
  *plVar1 = 0;
  if (lVar3 != 0) {
    __ZdlPv();
  }
  func_0x000107c306d0(param_1 + _DAT_11278eb1c,0);
  func_0x000107c27dac(param_1 + _DAT_11278eb14,0);
  _objc_storeStrong(param_1 + _DAT_11278eb18,0);
  _objc_storeStrong(param_1 + _DAT_11278eb10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11278eb04,0);
  return;
}



/* Entry: 10b5ebc68; end: 10b5ebc77; -[SCSQLiteDocObjectContext diagnoseForConflictingInstances:] */

void FUN_10b5ebc68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c126370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_registerDocObjectContextInstance_1126272f8,param_1);
  return;
}



/* Entry: 10b5ebc78; end: 10b5ebc8f; -[SCSQLiteDocObjectContext isActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

byte FUN_10b5ebc78(long param_1)

{
  return *(byte *)(param_1 + _DAT_11278eb24) ^ 1;
}



/* Entry: 10b5ebc90; end: 10b5ebcbf; -[SCSQLiteDocObjectContext dbPath] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5ebc90(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11278eb10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10b5ebcc0; end: 10b5ebd7b; -[SCSQLiteDocObjectContext temporarilyRaisePriorityToQoS:andEnqueue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5ebcc0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined4 uStack_38;
  
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10b5ebd7c;
  puStack_48 = &UNK_110d259b8;
  uStack_38 = (undefined4)param_3;
  uStack_40 = param_4;
  _objc_retain(param_4);
  uVar1 = 0x20;
  func_0x000107c27d94(0x20,param_3,0,&puStack_60);
  func_0x000107c27d8c(*(undefined8 *)(param_1 + _DAT_11278eb04),uVar1);
  _objc_release(uVar1);
  _objc_release(uStack_40);
  _objc_release(param_4);
  return;
}



/* Entry: 10b5ebd7c; end: 10b5ebd8f;  */

void FUN_10b5ebd7c(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010b5ebd88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10b5ebd90; end: 10b5ebe07;  */

void FUN_10b5ebd90(long param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  
  if (param_4 != 0) {
    func_0x00010887d310(param_1,param_4);
    lVar1 = *(long *)(param_1 + 8);
    param_3 = param_3 - param_2;
    if (param_3 != 0) {
      _memmove(lVar1,param_2,param_3);
    }
    *(long *)(param_1 + 8) = lVar1 + param_3;
  }
  return;
}



/* Entry: 10b5ebe08; end: 10b5ebe73;  */

void FUN_10b5ebe08(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  if (lVar3 != 0) {
    lVar2 = param_1[1];
    lVar1 = lVar3;
    if (lVar3 != lVar2) {
      do {
        lVar2 = lVar2 + -8;
        func_0x000107c27dac(lVar2,0);
      } while (lVar2 != lVar3);
      lVar1 = *param_1;
    }
    param_1[1] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b5ebe74; end: 10b5ebf93;  */

void FUN_10b5ebe74(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      FUN_10b5ea0ec(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b5ebf94; end: 10b5ebfef;  */

long * FUN_10b5ebf94(long *param_1)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = (long *)param_1[2];
  while (plVar1 != (long *)0x0) {
    lVar2 = *plVar1;
    func_0x00010b5e9cd4(plVar1 + 2);
    __ZdlPv(plVar1);
    plVar1 = (long *)lVar2;
  }
  lVar2 = *param_1;
  *param_1 = 0;
  if (lVar2 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 10b5ebff0; end: 10b5ec037;  */

void FUN_10b5ebff0(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c306bc(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b5ec038; end: 10b5ec25f;  */

long * FUN_10b5ec038(long *param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  ulong unaff_x24;
  
  uVar8 = param_1[1];
  if (uVar8 != 0) {
    uVar3 = uVar8 - 1;
    if ((uVar8 & uVar3) == 0) {
      unaff_x24 = uVar3 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar8 <= param_2) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = param_2 / uVar8;
        }
        unaff_x24 = param_2 - uVar6 * uVar8;
      }
    }
    plVar5 = *(long **)(*param_1 + unaff_x24 * 8);
    if (plVar5 != (long *)0x0) {
      for (plVar5 = (long *)*plVar5; plVar5 != (long *)0x0; plVar5 = (long *)*plVar5) {
        uVar6 = plVar5[1];
        if (uVar6 == param_2) {
          if (plVar5[2] == param_2) {
            return plVar5;
          }
        }
        else {
          if ((uVar8 & uVar3) == 0) {
            uVar6 = uVar6 & uVar3;
          }
          else if (uVar8 <= uVar6) {
            uVar1 = 0;
            if (uVar8 != 0) {
              uVar1 = uVar6 / uVar8;
            }
            uVar6 = uVar6 - uVar1 * uVar8;
          }
          if (uVar6 != unaff_x24) break;
        }
      }
    }
  }
  plVar5 = param_1 + 2;
  plVar2 = (long *)0x40;
  __Znwm();
  *plVar2 = 0;
  plVar2[1] = param_2;
  plVar2[2] = *param_3;
  plVar2[4] = 0;
  plVar2[3] = 0;
  plVar2[6] = 0;
  plVar2[5] = 0;
  *(undefined4 *)(plVar2 + 7) = 0x3f800000;
  if ((uVar8 == 0) || (*(float *)(param_1 + 4) * (float)uVar8 < (float)(param_1[3] + 1))) {
    uVar3 = 1;
    if (2 < uVar8) {
      uVar3 = (ulong)((uVar8 & uVar8 - 1) != 0);
    }
    uVar3 = uVar3 | uVar8 << 1;
    uVar8 = (ulong)((float)(param_1[3] + 1) / *(float *)(param_1 + 4));
    if (uVar3 <= uVar8) {
      uVar3 = uVar8;
    }
    func_0x000107c27e10(param_1,uVar3);
    uVar8 = param_1[1];
    if ((uVar8 & uVar8 - 1) == 0) {
      unaff_x24 = uVar8 - 1 & param_2;
    }
    else {
      unaff_x24 = param_2;
      if (uVar8 <= param_2) {
        uVar3 = 0;
        if (uVar8 != 0) {
          uVar3 = param_2 / uVar8;
        }
        unaff_x24 = param_2 - uVar3 * uVar8;
      }
    }
  }
  lVar4 = *param_1;
  plVar7 = *(long **)(lVar4 + unaff_x24 * 8);
  if (plVar7 == (long *)0x0) {
    *plVar2 = *plVar5;
    *plVar5 = (long)plVar2;
    *(long **)(lVar4 + unaff_x24 * 8) = plVar5;
    if (*plVar2 != 0) {
      uVar3 = *(ulong *)(*plVar2 + 8);
      if ((uVar8 & uVar8 - 1) == 0) {
        uVar3 = uVar3 & uVar8 - 1;
      }
      else if (uVar8 <= uVar3) {
        uVar6 = 0;
        if (uVar8 != 0) {
          uVar6 = uVar3 / uVar8;
        }
        uVar3 = uVar3 - uVar6 * uVar8;
      }
      *(long **)(lVar4 + uVar3 * 8) = plVar2;
    }
  }
  else {
    *plVar2 = *plVar7;
    *plVar7 = (long)plVar2;
  }
  param_1[3] = param_1[3] + 1;
  return plVar2;
}



/* Entry: 10b5ec260; end: 10b5ec2df;  */

void FUN_10b5ec260(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    if ((char)param_1[2] == '\x01') {
      func_0x000107c30700(lVar1 + 0x18);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(lVar1);
    return;
  }
  return;
}



/* Entry: 10b5ec2e0; end: 10b5ec4b3;  */

void FUN_10b5ec2e0(long *param_1,long *param_2,long *param_3,undefined8 *param_4,long *param_5)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long lVar12;
  long *unaff_x22;
  long lVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  undefined1 *unaff_x29;
  code *unaff_x30;
  long *plStack_90;
  long *plStack_88;
  long *plStack_80;
  long *plStack_78;
  long *plStack_70;
  long *plStack_68;
  
  puVar1 = &stack0xfffffffffffffff0;
  if ((long)param_5 < 1) {
    return;
  }
  plVar5 = param_1 + 2;
  puVar14 = (undefined8 *)param_1[1];
  if (*plVar5 - (long)puVar14 >> 3 < (long)param_5) {
    lVar10 = *param_1;
    uVar3 = (long)param_5 + ((long)puVar14 - lVar10 >> 3);
    if (uVar3 >> 0x3d == 0) {
      uVar9 = *plVar5 - lVar10;
      uVar11 = (long)uVar9 >> 2;
      if (uVar11 <= uVar3) {
        uVar11 = uVar3;
      }
      if (0x7ffffffffffffff7 < uVar9) {
        uVar11 = 0x1fffffffffffffff;
      }
      plStack_68 = plVar5;
      if (uVar11 == 0) {
        plStack_88 = (long *)0x0;
      }
      else {
        func_0x000107c306a4();
        plStack_88 = plVar5;
      }
      plStack_80 = (long *)((long)plStack_88 + ((long)param_2 - lVar10));
      plStack_70 = plStack_88 + uVar11;
      lVar10 = (long)param_5 << 3;
      param_5 = plStack_80 + (long)param_5;
      plVar5 = plStack_80;
      do {
        lVar13 = *param_3;
        _objc_retain(lVar13);
        *plVar5 = lVar13;
        lVar10 = lVar10 + -8;
        param_3 = param_3 + 1;
        plVar5 = plVar5 + 1;
      } while (lVar10 != 0);
      plStack_78 = param_5;
      func_0x000107c306b0(param_1,&plStack_88,param_2);
      func_0x000107c306a8(&plStack_88);
      return;
    }
    plVar8 = param_3;
    FUN_10b5e9c78();
    func_0x000107c306a8(&plStack_88);
    unaff_x30 = FUN_10b5ec4b4;
    plVar6 = plVar5;
    __Unwind_Resume();
    register0x00000008 = (BADSPACEBASE *)&plStack_90;
    plVar7 = param_2;
    param_2 = plVar8;
    unaff_x19 = plVar5;
    unaff_x20 = param_3;
    unaff_x21 = param_1;
    unaff_x22 = param_5;
    unaff_x29 = puVar1;
  }
  else {
    plVar7 = (long *)((long)puVar14 - (long)param_2 >> 3);
    plVar6 = param_3;
    if ((long)plVar7 < (long)param_5) {
      puVar4 = puVar14;
      puVar2 = puVar14;
      for (puVar16 = (undefined8 *)((long)param_3 + ((long)puVar14 - (long)param_2));
          plStack_90 = plVar7, puVar16 != param_4; puVar16 = puVar16 + 1) {
        uVar15 = *puVar16;
        _objc_retain(uVar15);
        *puVar4 = uVar15;
        puVar2 = puVar2 + 1;
        puVar4 = puVar4 + 1;
        plVar7 = plStack_90;
      }
      param_1[1] = (long)puVar2;
      if ((long)plVar7 < 1) {
        return;
      }
      func_0x000107c306ac(param_1,param_2,puVar14,param_2 + (long)param_5);
    }
    else {
      func_0x000107c306ac(param_1,param_2,puVar14,param_2 + (long)param_5);
      plVar7 = param_5;
    }
  }
  *(long **)((long)register0x00000008 + -0x30) = unaff_x22;
  *(long **)((long)register0x00000008 + -0x28) = unaff_x21;
  *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
  *(long **)((long)register0x00000008 + -0x18) = unaff_x19;
  *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
  *(code **)((long)register0x00000008 + -8) = unaff_x30;
  lVar10 = (long)plVar7 << 3;
  do {
    lVar12 = *plVar6;
    _objc_retain(lVar12);
    lVar13 = *param_2;
    *param_2 = lVar12;
    _objc_release(lVar13);
    lVar10 = lVar10 + -8;
    param_2 = param_2 + 1;
    plVar6 = plVar6 + 1;
  } while (lVar10 != 0);
  return;
}



/* Entry: 10b5ec4b4; end: 10b5ec4ff;  */

void FUN_10b5ec4b4(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_2 = param_2 << 3;
  do {
    uVar2 = *param_1;
    _objc_retain(uVar2);
    uVar1 = *param_3;
    *param_3 = uVar2;
    _objc_release(uVar1);
    param_2 = param_2 + -8;
    param_3 = param_3 + 1;
    param_1 = param_1 + 1;
  } while (param_2 != 0);
  return;
}



/* Entry: 10b5ec500; end: 10b5ec54b;  */

void FUN_10b5ec500(long param_1)

{
  long *plVar1;
  undefined8 uStack_28;
  
  if (param_1 != 0) {
    for (plVar1 = *(long **)(param_1 + 0x20); plVar1 != (long *)0x0; plVar1 = (long *)*plVar1) {
      uStack_28 = plVar1[2];
      func_0x00010b5ec678(*(undefined8 *)(param_1 + 8),&uStack_28);
    }
  }
  return;
}



/* Entry: 10b5ec54c; end: 10b5ec57b; -[SCSQLiteDocObjectTransactionContext error] */

void FUN_10b5ec54c(long param_1)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    func_0x00010b9af238(param_1 + 0x48);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5ec57c; end: 10b5ec5bf; -[SCSQLiteDocObjectTransactionContext abort] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10b5ec57c(long param_1)

{
  if ((*(byte *)(param_1 + 0xf0) & 1) != 0) {
    return;
  }
  *(undefined1 *)(param_1 + 0xf0) = 1;
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    *(undefined1 *)(param_1 + _DAT_11278eb08) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10b5ec5c0; end: 10b5ec63f; -[SCSQLiteDocObjectTransactionContext fetchWithBlock:] */

void FUN_10b5ec5c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  param_1 = param_1 + 0x40;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bfab6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 10b5ec640; end: 10b5ec6eb;  */

void FUN_10b5ec640(undefined8 *param_1)

{
  if (param_1 != (undefined8 *)0x0) {
    FUN_10b5ec640(*param_1);
    FUN_10b5ec640(param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_1);
    return;
  }
  return;
}



/* Entry: 10b5ec6ec; end: 10b5ec83f;  */

void FUN_10b5ec6ec(undefined8 *param_1,long *param_2,long *param_3)

{
  ulong uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar4 = param_2[1];
  uVar3 = param_3[1];
  uVar7 = uVar4 - 1;
  if ((uVar4 & uVar7) == 0) {
    uVar3 = uVar7 & uVar3;
  }
  else if (uVar4 <= uVar3) {
    uVar8 = 0;
    if (uVar4 != 0) {
      uVar8 = uVar3 / uVar4;
    }
    uVar3 = uVar3 - uVar8 * uVar4;
  }
  lVar6 = *param_2;
  plVar2 = *(long **)(lVar6 + uVar3 * 8);
  do {
    plVar5 = plVar2;
    plVar2 = (long *)*plVar5;
  } while ((long *)*plVar5 != param_3);
  if (plVar5 != param_2 + 2) {
    uVar8 = plVar5[1];
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10b5ec7a0;
  }
  if (*param_3 != 0) {
    uVar8 = *(ulong *)(*param_3 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar1 = 0;
      if (uVar4 != 0) {
        uVar1 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar1 * uVar4;
    }
    if (uVar8 == uVar3) goto LAB_10b5ec7a0;
  }
  *(undefined8 *)(lVar6 + uVar3 * 8) = 0;
LAB_10b5ec7a0:
  lVar9 = *param_3;
  if (lVar9 != 0) {
    uVar8 = *(ulong *)(lVar9 + 8);
    if ((uVar4 & uVar7) == 0) {
      uVar8 = uVar8 & uVar7;
    }
    else if (uVar4 <= uVar8) {
      uVar7 = 0;
      if (uVar4 != 0) {
        uVar7 = uVar8 / uVar4;
      }
      uVar8 = uVar8 - uVar7 * uVar4;
    }
    if (uVar8 != uVar3) {
      *(long **)(lVar6 + uVar8 * 8) = plVar5;
      lVar9 = *param_3;
    }
  }
  *plVar5 = lVar9;
  *param_3 = 0;
  param_2[3] = param_2[3] + -1;
  *param_1 = param_3;
  param_1[1] = param_2 + 2;
  *(undefined1 *)(param_1 + 2) = 1;
  *(undefined4 *)((long)param_1 + 0x11) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}



/* Entry: 10b5ec840; end: 10b5ec8db; -[SCDocObjectContextRegisteredInstance initWithDiagnosticInfo:creationDate:] */

undefined1 *
FUN_10b5ec840(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112706608;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10b5ec8dc; end: 10b5ec9f7; -[SCDocObjectContextRegisteredInstance conflictsWith:] */

undefined8 FUN_10b5ec8dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf71c20();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar1;
  func_0x00010c06b700();
  if ((int)uVar6 == 0) {
    uVar6 = 0;
  }
  else {
    uVar2 = param_3;
    func_0x00010bf71c20();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010c06b700();
    if ((int)uVar6 == 0) {
      uVar6 = 0;
    }
    else {
      func_0x00010bf71c20(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_1;
      func_0x00010bf65920();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = param_3;
      func_0x00010bf71c20(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bf65920();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x00010c0720c0(uVar3,param_2,uVar5);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_release(param_1);
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar6;
}



/* Entry: 10b5ec9f8; end: 10b5eca0f; -[SCDocObjectContextRegisteredInstance diagnosticInfo] */

void FUN_10b5ec9f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10b5eca10; end: 10b5eca17; -[SCDocObjectContextRegisteredInstance creationDate] */

undefined8 FUN_10b5eca10(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10b5eca18; end: 10b5eca43; -[SCDocObjectContextRegisteredInstance .cxx_destruct] */

void FUN_10b5eca18(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10b5eca44; end: 10b5ecadb; -[SCConflictingDocObjectContextDiagnoser initWithCurrentDateProvider:] */

undefined1 * FUN_10b5eca44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112706610;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


