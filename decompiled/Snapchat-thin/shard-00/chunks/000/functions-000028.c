/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1000bc298; end: 1000bc31f;  */

undefined8 FUN_1000bc298(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_1000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1000bc320; end: 1000bc323;  */

void FUN_1000bc320(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000bc324; end: 1000bc34f;  */

void FUN_1000bc324(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000bc350; end: 1000bc357;  */

void FUN_1000bc350(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7560;
  func_0x000107c610f8();
  func_0x000107c4655c();
  func_0x000107c61170(unaff_x20);
  *param_1 = puVar1;
  return;
}



/* Entry: 1000bc358; end: 1000bc3ab;  */

void FUN_1000bc358(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000ad7c4();
  puVar1 = PTR_PTR_1126a7560;
  func_0x000107c610f8();
  func_0x000107c4655c();
  func_0x000107c61170(param_2);
  *param_1 = puVar1;
  return;
}



/* Entry: 1000bc3ac; end: 1000bc41f; -[SCDeviceMotionServices initWithDeviceMotionManager:] */

undefined1 * FUN_1000bc3ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112704fb8;
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



/* Entry: 1000bc420; end: 1000bc42b;  */

void FUN_1000bc420(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000ad7c4(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  uVar3 = uVar2;
  func_0x0001000ad7c4();
  puVar4 = PTR_PTR_1126a7088;
  func_0x000107c610f8();
  func_0x000107c4755c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  *param_1 = puVar4;
  return;
}



/* Entry: 1000bc42c; end: 1000bc4bf;  */

void FUN_1000bc42c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x0001000ad7c4();
  uVar1 = param_2;
  func_0x0001000ad7c4();
  uVar2 = uVar1;
  func_0x0001000ad7c4();
  puVar3 = PTR_PTR_1126a7088;
  func_0x000107c610f8();
  func_0x000107c4755c();
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 1000bc4c0; end: 1000bc58b; -[SCCameraLoggingServices initWithLoggingQueue:blizzardLogger:perfLogger:] */

undefined1 *
FUN_1000bc4c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_38 = PTR_PTR_112702bc0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000bc58c; end: 1000bc5bf;  */

void FUN_1000bc58c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000bc5c0; end: 1000bc5c7; -[SCManagedCaptureSessionImpl hardwarePerformer] */

undefined8 FUN_1000bc5c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1000bc5c8; end: 1000bc5cf; -[SCDeviceMotionServices deviceMotionManager] */

undefined8 FUN_1000bc5c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1000bc5d0; end: 1000bc5d7; -[SCCameraLoggingServices blizzardLogger] */

undefined8 FUN_1000bc5d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1000bc5d8; end: 1000bc5df; -[SCCameraLoggingServices perfLogger] */

undefined8 FUN_1000bc5d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1000bc5e0; end: 1000bc5f3; -[SCApplicationLifecycleEventsImpl willResignActive] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000bc5e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113091df0));
  return;
}



/* Entry: 1000bc5f4; end: 1000bc67b; +[SCAbandonedDirectoryCheck markDirectory:] */

undefined8 FUN_1000bc5f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c61174(param_3);
  func_0x000107c41324(puVar1);
  func_0x000107c61180();
  uStack_38 = 0;
  uVar2 = param_3;
  func_0x000107c57e54(param_3,param_2,puVar1,
                      *(undefined8 *)PTR__NSURLContentModificationDateKey_11034aaf8,&uStack_38);
  func_0x000107c61170(param_3);
  func_0x000107c61170(puVar1);
  return uVar2;
}



/* Entry: 1000bc67c; end: 1000bc95b; -[SCCurrentPageTrackerImplementation beginSubscriptionWith:willResignActiveObservable:didEnterBackgroundObservable:] */

void FUN_1000bc67c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_d0 [8];
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = PTR_PTR_1126ae810;
  func_0x000107c61160();
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  func_0x000107c61170(uVar4);
  func_0x000107c61144(auStack_78,param_1);
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x000107c4c188(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x000107c4da80(param_3);
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_1085a7858;
  puStack_88 = &UNK_110846510;
  func_0x000107c6111c(auStack_80,auStack_78);
  uVar3 = uVar4;
  func_0x000107c5c320(uVar4);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x000107c4c188(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  func_0x000107c61180();
  uVar4 = param_4;
  func_0x000107c4da80(param_4);
  func_0x000107c61180();
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  puStack_b8 = &UNK_1085a788c;
  puStack_b0 = &UNK_110846510;
  func_0x000107c6111c(auStack_a8,auStack_78);
  uVar3 = uVar4;
  func_0x000107c5c320(uVar4);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar2);
  puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
  func_0x000107c4c188(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
  func_0x000107c61180();
  uVar4 = param_5;
  func_0x000107c4da80(param_5);
  func_0x000107c61180();
  func_0x000107c6111c(auStack_d0,auStack_78);
  uVar3 = uVar4;
  func_0x000107c5c320(uVar4);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61120(auStack_d0);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1000bc95c; end: 1000bcbf7; -[SCAudioSessionImpl initWithPerformer:notificationCenter:proximityDevice:systemBlizzardLogger:appStartExperimentReader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1000bc95c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 *param_7)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *extraout_x8;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_7);
  puStack_b8 = PTR_PTR_1126e74d8;
  puVar1 = &uStack_c0;
  uStack_c0 = param_1;
  func_0x000107c61154(puVar1,PTR_s_initWithPerformer_notificationCe_1125289f8,param_3,param_4,
                      param_5,param_6);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    lVar5 = (long)_DAT_112720c9c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    lVar9 = (long)_DAT_112720ca0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    lVar10 = (long)_DAT_112720ca4;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    lVar11 = (long)_DAT_112720ca8;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    lVar12 = (long)_DAT_112720cac;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined **)((long)puVar1 + lVar12) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    lVar13 = (long)_DAT_112720cb0;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    lVar6 = (long)_DAT_112720cb4;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    lVar7 = (long)_DAT_112720cb8;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar2;
    func_0x000107c61170(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c61160();
    lVar8 = (long)_DAT_112720cbc;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    func_0x000107c61170(uVar4);
    uStack_b0 = *(undefined8 *)((long)puVar1 + lVar5);
    uStack_a8 = *(undefined8 *)((long)puVar1 + lVar9);
    uStack_a0 = *(undefined8 *)((long)puVar1 + lVar10);
    uStack_98 = *(undefined8 *)((long)puVar1 + lVar11);
    uStack_90 = *(undefined8 *)((long)puVar1 + lVar12);
    uStack_88 = *(undefined8 *)((long)puVar1 + lVar13);
    uStack_80 = *(undefined8 *)((long)puVar1 + lVar6);
    uStack_78 = *(undefined8 *)((long)puVar1 + lVar7);
    uStack_70 = *(undefined8 *)((long)puVar1 + lVar8);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x000107c3e17c();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_112720cc0);
    *(undefined **)((long)puVar1 + (long)_DAT_112720cc0) = puVar2;
    func_0x000107c61170(uVar4);
    puVar3 = param_7;
    func_0x000107c3ebd4();
    *(char *)((long)puVar1 + (long)_DAT_112720cc4) = (char)puVar3;
    puVar3 = param_7;
    func_0x000107c3ebd4();
    *(char *)((long)puVar1 + (long)_DAT_112720cc8) = (char)puVar3;
  }
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar1;
  }
  func_0x000107c60e78();
  func_0x0001000ad7c4();
  uVar4 = 0;
  FUN_100097cfc(0);
  func_0x000107c610f8();
  FUN_1000bcde0(param_7,uVar4);
  *extraout_x8 = param_7;
  return param_7;
}



/* Entry: 1000bcbf8; end: 1000bcc3b;  */

void FUN_1000bcbf8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001000ad7c4();
  uVar1 = 0;
  FUN_100097cfc(0);
  func_0x000107c610f8();
  FUN_1000bcde0(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 1000bcc3c; end: 1000bcddf; -[SCAudioSessionCore initWithPerformer:notificationCenter:proximityDevice:systemBlizzardLogger:] */

undefined1 *
FUN_1000bcc3c(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1126e74d0;
  uStack_50 = param_2;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c52030();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c40fe0();
    func_0x000107c61180();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined1 **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar4);
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    func_0x000107c61170(uVar4);
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c52030(puVar1);
    func_0x000107c61180();
    func_0x000107c4e144();
    *(undefined4 *)((long)puVar1 + 0x18) = param_1;
    func_0x000107c61170(puVar2);
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c52030();
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c51b18();
    *(char *)((long)puVar1 + 0x1c) = (char)puVar3;
    func_0x000107c61170(puVar2);
    func_0x000107c61174(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined8 *)((long)puVar1 + 0x50) = param_4;
    func_0x000107c61170(uVar4);
    func_0x000107c61174(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined8 *)((long)puVar1 + 0x68) = param_5;
    func_0x000107c61170(uVar4);
    func_0x000107c3cc48(puVar1);
    func_0x000107c3c69c(puVar1);
    func_0x000107c61174(param_6);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_6;
    func_0x000107c61170(uVar4);
    func_0x000107c53fcc(*(undefined8 *)((long)puVar1 + 0x58));
    func_0x000107c61174(param_7);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_7;
    func_0x000107c61170(uVar4);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1000bcde0; end: 1000bcedf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_1000bcde0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lStack_78;
  long lStack_70;
  undefined1 auStack_68 [24];
  
  FUN_1000285a8(0x112da9848,&UNK_10d991ca0);
  lVar2 = param_1;
  FUN_1000bda74();
  lVar3 = lVar2;
  FUN_100097cfc();
  lVar4 = lVar3;
  func_0x000107c610f8();
  *(long *)(lVar4 + _DAT_113083e08) = lVar2;
  lVar5 = lVar2;
  func_0x000107c6157c();
  FUN_1000bf56c();
  func_0x000107c61428(0x113813c10,auStack_68,1,0);
  uVar1 = lRam0000000113813c10;
  lRam0000000113813c10 = lVar5;
  func_0x000107c61170(uVar1);
  plVar6 = &lStack_78;
  lStack_78 = lVar4;
  lStack_70 = lVar3;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  func_0x000107c61574(lVar2);
  func_0x000107c61170(param_1);
  func_0x000107c614f0();
  func_0x000107c61464();
  return plVar6;
}



/* Entry: 1000bcee0; end: 1000bcf13; -[SCAudioSessionCore session] */

void FUN_1000bcee0(ulong param_1)

{
  func_0x000107c3bb7c();
  if ((param_1 & 1) == 0) {
    func_0x000107c5a9f0(PTR__OBJC_CLASS___AVAudioSession_1126b6de8);
    func_0x000107c61180();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000bcf14; end: 1000bcf1b; -[SCObservable observeOn:] */

void FUN_1000bcf14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e0e90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_observeOn_preferSynchronous__112615db8,param_3,0);
  return;
}



/* Entry: 1000bcf1c; end: 1000bcf7f; -[SCObservable observeOn:preferSynchronous:] */

void FUN_1000bcf1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126e2e40;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c47d8c();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1000bcf80; end: 1000bcf8f;  */

void FUN_1000bcf80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e81fdc8);
  return;
}



/* Entry: 1000bcf90; end: 1000bcfd3;  */

void FUN_1000bcf90(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  func_0x000107c61524(param_1,0,1,&puStack_18,param_1 + 0x58);
  return;
}



/* Entry: 1000bcfd4; end: 1000bd24b; -[SCCameraHardwareResourceImpl initWithQueuePerformer:deviceMotionManager:blizzardLogger:perfLogger:managedCapturerStateCoordinator:isCaptureDeviceManagerEnabled:] */

undefined1 *
FUN_1000bcfd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_68 = PTR_PTR_1126e75b8;
  uStack_70 = param_1;
  func_0x000107c61154(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined8 *)((long)puVar1 + 0x60) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x38) = param_8;
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b6fd0;
    func_0x000107c610f4();
    func_0x000107c45a0c();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b6fd8;
    func_0x000107c610f4();
    func_0x000107c47de8();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined **)((long)puVar1 + 0x70) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x78);
    *(undefined **)((long)puVar1 + 0x78) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x3a) = 0;
    puVar3 = PTR_PTR_1126b6fe0;
    func_0x000107c610f4();
    func_0x000107c45cf8();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126b6fe8;
    func_0x000107c4c234(PTR_PTR_1126b6fe8);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c3ecc8();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c59840();
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    puVar3 = PTR_PTR_1126afed0;
    func_0x000107c4d73c();
    *(undefined **)((long)puVar1 + 0xc0) = puVar3;
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000bd24c; end: 1000bd2ab;  */

void FUN_1000bd24c(undefined8 *param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  func_0x0001000bb6d0();
  func_0x000107c61180();
  if (param_2 != 0) {
    puVar2 = PTR_PTR_1126b7200;
    func_0x000107c610f8();
    func_0x000107c474b0();
    func_0x000107c61170(param_2);
    *param_1 = puVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000bd2ac);
  (*pcVar1)();
}



/* Entry: 1000bd2ac; end: 1000bd3ab; -[SCZstdLocalizedStringLookup initWithLocale:] */

undefined8 * FUN_1000bd2ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  func_0x000107c61174(param_3);
  puStack_48 = PTR_PTR_1126e76e8;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSBundle_1126aea78;
    func_0x000107c4c12c(PTR__OBJC_CLASS___NSBundle_1126aea78);
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c3ee14();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    puVar2 = PTR_PTR_1126b7200;
    func_0x000107c3bda8();
    func_0x000107c61180();
    func_0x000107c61174(0);
    uVar4 = puVar1[2];
    puVar1[2] = puVar2;
    func_0x000107c61170(uVar4);
    if (puVar1[2] == 0) {
      func_0x000107c61170(0);
    }
    func_0x000107c61170(puVar3);
  }
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 1000bd3ac; end: 1000bd90f; +[SCZstdLocalizedStringLookup _loadStringsForLocale:withMainBundleURL:error:] */

void FUN_1000bd3ac(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined8 *in_x3;
  long *in_x4;
  long lVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined8 *puVar23;
  undefined *puStack_178;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(in_x3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c51804();
  func_0x000107c61180();
  puVar18 = in_x3;
  func_0x000107c3ac04();
  func_0x000107c61180();
  puVar3 = in_x3;
  func_0x000107c3ac04();
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c5c170(puVar2);
  func_0x000107c61180();
  puVar5 = puVar18;
  func_0x000107c3ac04();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSFileManager_1126aff20;
  func_0x000107c415e0();
  func_0x000107c61180();
  puVar6 = puVar3;
  func_0x000107c4e430();
  func_0x000107c61180();
  puVar7 = puVar4;
  puVar9 = puVar6;
  func_0x000107c43418();
  func_0x000107c61170(puVar6);
  if ((int)puVar7 == 0) {
LAB_1000bd554:
    puVar23 = (undefined8 *)0x0;
  }
  else {
    puVar6 = puVar5;
    func_0x000107c4e430();
    func_0x000107c61180();
    puVar7 = puVar4;
    puVar9 = puVar6;
    func_0x000107c43418();
    func_0x000107c61170(puVar6);
    puVar6 = (undefined8 *)PTR__OBJC_CLASS___NSData_1126ae778;
    if ((int)puVar7 == 0) goto LAB_1000bd554;
    puVar23 = puVar3;
    func_0x000107c4e430();
    func_0x000107c61180();
    puVar9 = puVar23;
    func_0x000107c412f4();
    func_0x000107c61180();
    func_0x000107c61170(puVar23);
    puVar8 = (undefined8 *)PTR__OBJC_CLASS___NSData_1126ae778;
    if ((puVar6 == (undefined8 *)0x0) || (*in_x4 != 0)) {
      puVar23 = (undefined8 *)0x0;
    }
    else {
      puVar23 = puVar5;
      func_0x000107c4e430();
      func_0x000107c61180();
      puVar9 = puVar23;
      func_0x000107c412f4();
      func_0x000107c61180();
      func_0x000107c61170(puVar23);
      if ((puVar8 == (undefined8 *)0x0) || (*in_x4 != 0)) {
        puVar23 = (undefined8 *)0x0;
      }
      else {
        puVar9 = (undefined8 *)PTR_PTR_1126b7200;
        puVar11 = puVar8;
        func_0x000107c3b430();
        func_0x000107c61180();
        if ((puVar9 == (undefined8 *)0x0) || (*in_x4 != 0)) {
          puVar23 = (undefined8 *)0x0;
          puVar9 = puVar11;
        }
        else {
          puVar7 = PTR__OBJC_CLASS___NSPropertyListSerialization_1126b7208;
          puVar11 = puVar6;
          func_0x000107c4f50c();
          func_0x000107c61180();
          if ((puVar7 == (undefined *)0x0) || (*in_x4 != 0)) {
            puVar23 = (undefined8 *)0x0;
            puVar9 = puVar11;
          }
          else {
            puVar10 = PTR__OBJC_CLASS___NSPropertyListSerialization_1126b7208;
            func_0x000107c4f50c();
            func_0x000107c61180();
            if ((puVar10 == (undefined *)0x0) || (*in_x4 != 0)) {
              puVar23 = (undefined8 *)0x0;
            }
            else {
              puVar11 = (undefined8 *)PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
              func_0x000107c41988();
              func_0x000107c61180();
              lStack_128 = 0;
              uStack_130 = 0;
              uStack_118 = 0;
              plStack_120 = (long *)0x0;
              uStack_108 = 0;
              uStack_110 = 0;
              uStack_f8 = 0;
              uStack_100 = 0;
              func_0x000107c61174(puVar7);
              puVar9 = &uStack_130;
              puStack_178 = puVar7;
              func_0x000107c4080c();
              if (puStack_178 != (undefined *)0x0) {
                lVar19 = *plStack_120;
                do {
                  puVar21 = (undefined *)0x0;
                  do {
                    if (*plStack_120 != lVar19) {
                      func_0x000107c61128(puVar7);
                    }
                    puVar23 = *(undefined8 **)(lStack_128 + (long)puVar21 * 8);
                    puVar12 = puVar7;
                    func_0x000107c4d9e8();
                    func_0x000107c61180();
                    puVar13 = puVar10;
                    puVar9 = puVar23;
                    func_0x000107c4d9e8();
                    func_0x000107c61180();
                    if (puVar13 != (undefined *)0x0) {
                      if (puVar12 == (undefined *)0x0) {
                        func_0x000107c61170(puVar13);
                        func_0x000107c61170(puVar7);
                        puVar23 = (undefined8 *)0x0;
                        goto LAB_1000bd86c;
                      }
                      puVar14 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
                      func_0x000107c41988();
                      func_0x000107c61180();
                      puVar22 = puVar12;
                      func_0x000107c40808();
                      if (puVar22 != (undefined *)0x0) {
                        puVar22 = (undefined *)0x0;
                        do {
                          puVar15 = puVar12;
                          func_0x000107c4d9a4(puVar12);
                          func_0x000107c61180();
                          puVar16 = puVar13;
                          func_0x000107c4d9a4();
                          func_0x000107c61180();
                          puVar17 = puVar16;
                          func_0x000107c4adac();
                          if (puVar17 != (undefined *)0x0) {
                            func_0x000107c56bd8(puVar14);
                          }
                          func_0x000107c61170(puVar16);
                          func_0x000107c61170(puVar15);
                          puVar22 = puVar22 + 1;
                          puVar15 = puVar12;
                          func_0x000107c40808();
                        } while (puVar22 < puVar15);
                      }
                      func_0x000107c5c178(puVar23);
                      func_0x000107c61180();
                      func_0x000107c56bd8(puVar11);
                      func_0x000107c61170(puVar23);
                      func_0x000107c61170(puVar14);
                    }
                    func_0x000107c61170(puVar13);
                    func_0x000107c61170(puVar12);
                    puVar21 = puVar21 + 1;
                  } while (puVar21 != puStack_178);
                  puVar9 = &uStack_130;
                  puStack_178 = puVar7;
                  func_0x000107c4080c();
                } while (puStack_178 != (undefined *)0x0);
              }
              func_0x000107c61170(puVar7);
              func_0x000107c61174(puVar11);
              puVar23 = puVar11;
LAB_1000bd86c:
              func_0x000107c61170(puVar11);
            }
            func_0x000107c61170(puVar10);
          }
          func_0x000107c61170(puVar7);
        }
        func_0x000107c61170();
      }
      func_0x000107c61170(puVar8);
    }
    func_0x000107c61170(puVar6);
  }
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(puVar2);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) goto LAB_107c61110;
  func_0x000107c60e78();
  func_0x000107c61174(puVar9);
  puVar18 = puVar9;
  func_0x000107c61174();
  if (lRam00000001137fe540 != -1) {
    puVar18 = (undefined8 *)0x1137fe540;
    FUN_10002a2fc(0x1137fe540,&PTR___NSConcreteGlobalBlock_110d9f288);
  }
  FUN_1000bdc48();
  puVar3 = puVar9;
  func_0x000107c60858(puVar9,0x8000100);
  if (puVar3 == (undefined8 *)0x0) {
    puVar3 = puVar9;
    func_0x000107c61178();
    func_0x000107c3ac4c();
    if (puVar3 != (undefined8 *)0x0) goto LAB_1000bd984;
LAB_1000bd98c:
    func_0x000107c61170(puVar9);
LAB_1000bd9d4:
    func_0x000107c610f4(in_x3);
    func_0x000107c469a0();
    puVar23 = in_x3;
  }
  else {
LAB_1000bd984:
    if ((*(byte *)(puVar18 + 0x39) & 1) != 0) goto LAB_1000bd98c;
    *(undefined1 *)(puVar18 + 0x39) = 1;
    FUN_1000bdf8c();
    bVar1 = *(byte *)((long)puVar18 + 0x1c9);
    if ((bVar1 & 1) == 0) {
      uVar20 = puVar18[0x36];
    }
    else {
      uVar20 = 0;
    }
    puVar18[0x37] = 0;
    *(undefined2 *)(puVar18 + 0x39) = 0;
    func_0x000107c61170(puVar9);
    if (bVar1 != 0) goto LAB_1000bd9d4;
    puVar18 = (undefined8 *)0x0;
    func_0x000107c60850(0,uVar20,0x8000100);
    puVar23 = puVar18;
    if (in_x3 == puRam00000001137fe538) {
      puVar23 = (undefined8 *)0x0;
      func_0x000107c60848(0,0,puVar18);
      func_0x000107c607f0(puVar18);
    }
  }
  func_0x000107c61170(puVar9);
LAB_107c61110:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar23);
  return;
}



/* Entry: 1000bd910; end: 1000bda73;  */

void FUN_1000bd910(long param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_3);
  lVar3 = param_3;
  func_0x000107c61174();
  if (lRam00000001137fe540 != -1) {
    lVar3 = 0x1137fe540;
    FUN_10002a2fc(0x1137fe540,&PTR___NSConcreteGlobalBlock_110d9f288);
  }
  FUN_1000bdc48();
  lVar2 = param_3;
  func_0x000107c60858(param_3,0x8000100);
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x000107c61178();
    func_0x000107c3ac4c();
    if (lVar2 != 0) goto LAB_1000bd984;
LAB_1000bd98c:
    func_0x000107c61170(param_3);
  }
  else {
LAB_1000bd984:
    if ((*(byte *)(lVar3 + 0x1c8) & 1) != 0) goto LAB_1000bd98c;
    *(undefined1 *)(lVar3 + 0x1c8) = 1;
    FUN_1000bdf8c();
    bVar1 = *(byte *)(lVar3 + 0x1c9);
    if ((bVar1 & 1) == 0) {
      uVar4 = *(undefined8 *)(lVar3 + 0x1b0);
    }
    else {
      uVar4 = 0;
    }
    *(undefined8 *)(lVar3 + 0x1b8) = 0;
    *(undefined2 *)(lVar3 + 0x1c8) = 0;
    func_0x000107c61170(param_3);
    if (bVar1 == 0) {
      lVar2 = 0;
      func_0x000107c60850(0,uVar4,0x8000100);
      lVar3 = lVar2;
      if (param_1 == lRam00000001137fe538) {
        lVar3 = 0;
        func_0x000107c60848(0,0,lVar2);
        func_0x000107c607f0(lVar2);
      }
      goto LAB_1000bd9ec;
    }
  }
  func_0x000107c610f4(param_1);
  func_0x000107c469a0();
  lVar3 = param_1;
LAB_1000bd9ec:
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1000bda74; end: 1000bdb03;  */

undefined8 FUN_1000bda74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar1 = 0xff;
  func_0x000107c60188(0xff,uVar4);
  uVar2 = 0;
  FUN_1000bcf80(0,uVar1);
  puVar3 = &UNK_1107a6d40;
  func_0x000107c613fc(&UNK_1107a6d40,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  func_0x000107c613fc(uVar2,0x18,7);
  func_0x000107c61174(param_1);
  FUN_1000bdd8c(FUN_1000ca85c,puVar3);
  return uVar2;
}



/* Entry: 1000bdb04; end: 1000bdba7; -[SCAsyncObservable initWithParentObservable:queue:preferSynchronous:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1000bdb04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_11270e428;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_initWithParentObservable__1125ea888,param_3);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11279662c;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112796630) = param_5;
  }
  func_0x000107c61170(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 1000bdba8; end: 1000bdc47;  */

void FUN_1000bdba8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  func_0x000107c6124c(0x1137fe548,&UNK_10bd58984);
  uVar1 = 0;
  func_0x000107c60738(0,3000,0);
  uRam00000001137fe730 = 3000;
  uRam00000001137fe728 = 0;
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uRam00000001137fe720 = uVar1;
  func_0x000107c61158();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puRam00000001137fe550 = puVar2;
  func_0x000107c61158();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puRam00000001137fe558 = puVar3;
  func_0x000107c61158();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puRam00000001137fe560 = puVar2;
  func_0x000107c61158();
  puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  puRam00000001137fe568 = puVar3;
  func_0x000107c61158();
  puRam00000001137fe538 = puVar2;
  return;
}



/* Entry: 1000bdc48; end: 1000bdcd7;  */

long FUN_1000bdc48(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c4a02c();
  if (((ulong)puVar1 & 1) == 0) {
    lVar2 = lRam00000001137fe548;
    func_0x000107c61248();
    if (lVar2 == 0) {
      func_0x000107c60738();
      uVar3 = 0;
      func_0x000107c60738(0,3000,0);
      *(undefined8 *)(lVar2 + 0x1b8) = 0;
      *(undefined8 *)(lVar2 + 0x1c0) = 3000;
      *(undefined8 *)(lVar2 + 0x1b0) = uVar3;
      *(undefined2 *)(lVar2 + 0x1c8) = 0;
      func_0x000107c612a0(lRam00000001137fe548,lVar2);
    }
  }
  else {
    lVar2 = 0x1137fe570;
  }
  return lVar2;
}



/* Entry: 1000bdcd8; end: 1000bdd7f; -[SCAsyncObservable subscribe:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000bdcd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c61174(param_3);
  func_0x000107c4e358(param_1);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126e2e38;
  func_0x000107c610f4(PTR_PTR_1126e2e38);
  func_0x000107c47b70();
  func_0x000107c61170(param_3);
  uVar2 = param_1;
  func_0x000107c5c310(param_1,param_2,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1000bdd80; end: 1000bdd8b;  */

void FUN_1000bdd80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e81fe34);
  return;
}



/* Entry: 1000bdd8c; end: 1000bde37;  */

void FUN_1000bdd8c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  long extraout_x8;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_1000bdd80(0,*(undefined8 *)(*unaff_x20 + 0x50));
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = (undefined8 *)(&stack0xffffffffffffffc0 + -extraout_x8);
  func_0x00010006c1b8(0,lVar1);
  *puVar2 = param_1;
  *(undefined8 *)(&stack0xffffffffffffffc8 + -extraout_x8) = param_2;
  func_0x000107c6159c(puVar2,lVar1,0);
  func_0x0001000bf530();
  unaff_x20[2] = (long)puVar2;
  return;
}



/* Entry: 1000bde38; end: 1000bde3f;  */

void FUN_1000bde38(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbffa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericValueMetadata_11034f228)();
  return;
}



/* Entry: 1000bde40; end: 1000bdeb7;  */

void FUN_1000bde40(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_30 = PTR___syycWV_11034f1c0 + 0x40;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  func_0x000107c6143c();
  if (uVar2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61528(param_1,0,2,&puStack_30);
  }
  return;
}



/* Entry: 1000bdeb8; end: 1000bdf8b; -[SCAsyncObserver initWithObservable:observer:queue:preferSynchronous:] */

undefined1 *
FUN_1000bdeb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puStack_48 = PTR_PTR_11270e430;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + 0x20) = param_6;
  }
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000bdf8c; end: 1000bf40f;  */

void FUN_1000bdf8c(long param_1,long param_2,long *param_3)

{
  char cVar1;
  uint6 uVar2;
  undefined1 auVar3 [16];
  ushort uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  byte bVar11;
  byte *pbVar12;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  long lVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  bool bVar22;
  int iVar23;
  
  lVar16 = param_1;
  func_0x000107c613d0();
  if (0 < lVar16) {
    lVar15 = 0;
    bVar22 = true;
    do {
      lVar10 = param_1 + lVar15;
      func_0x000107c610ac(lVar10,0x25,lVar16 - lVar15);
      lVar21 = lVar10 - param_1;
      lVar20 = lVar16;
      if (lVar10 != 0) {
        lVar20 = lVar21;
      }
      if (bVar22) {
        if ((lVar20 < lVar16) && (*(char *)(param_1 + lVar20 + 1) != '%')) {
          if (1 < lVar16 - lVar20) {
            lVar18 = (lVar16 + -2) - lVar20;
            pbVar12 = (byte *)(param_1 + 1 + lVar20);
            do {
              bVar11 = *pbVar12;
              if (bVar11 == 0x24) goto LAB_1000be678;
              bVar22 = lVar18 != 0;
              lVar18 = lVar18 + -1;
              pbVar12 = pbVar12 + 1;
            } while (0xfffffff5 < bVar11 - 0x3a && bVar22);
          }
          goto LAB_1000be078;
        }
        bVar22 = true;
      }
      else {
LAB_1000be078:
        bVar22 = false;
      }
      lVar18 = lVar20 - lVar15;
      lVar19 = *(long *)(param_2 + 0x1b8);
      lVar7 = *(long *)(param_2 + 0x1b0);
      if (*(long *)(param_2 + 0x1c0) <= lVar19 + lVar18) {
        lVar19 = (lVar19 + lVar18) * 2;
        lVar7 = 0;
        func_0x000107c60748(0,*(long *)(param_2 + 0x1b0),lVar19,0);
        *(long *)(param_2 + 0x1b0) = lVar7;
        *(long *)(param_2 + 0x1c0) = lVar19;
        lVar19 = *(long *)(param_2 + 0x1b8);
      }
      func_0x000107c610b4(lVar7 + lVar19,param_1 + lVar15,lVar18);
      lVar18 = *(long *)(param_2 + 0x1b8) + lVar18;
      *(long *)(param_2 + 0x1b8) = lVar18;
      if (lVar10 == 0) break;
      lVar15 = param_1 + lVar21;
      bVar11 = *(byte *)(lVar15 + 1);
      if (bVar11 < 0x53) {
        if (bVar11 == 0x25) {
          lVar15 = *(long *)(param_2 + 0x1b0);
          if (*(long *)(param_2 + 0x1c0) <= lVar18 + 1) {
            lVar10 = (lVar18 + 1) * 2;
            lVar15 = 0;
            func_0x000107c60748(0,*(long *)(param_2 + 0x1b0),lVar10,0);
            *(long *)(param_2 + 0x1b0) = lVar15;
            *(long *)(param_2 + 0x1c0) = lVar10;
            lVar18 = *(long *)(param_2 + 0x1b8);
          }
          *(undefined1 *)(lVar15 + lVar18) = 0x25;
          lVar10 = *(long *)(param_2 + 0x1b8) + 1;
LAB_1000be440:
          *(long *)(param_2 + 0x1b8) = lVar10;
          lVar15 = lVar21 + 2;
        }
        else {
          if (bVar11 != 0x40) {
            if (bVar11 != 0x43) goto LAB_1000be300;
            goto LAB_1000be184;
          }
          puVar13 = (undefined8 *)*param_3;
          *param_3 = (long)(puVar13 + 1);
          puVar17 = (undefined *)*puVar13;
          func_0x000107c61174(puVar17);
          func_0x0001000be6b4(puVar17,0,param_2,0,0);
LAB_1000be2ec:
          lVar15 = lVar21 + 2;
          func_0x000107c61170(puVar17);
        }
      }
      else {
        if (bVar11 == 0x53) {
LAB_1000be184:
          if (bVar11 == 0x53) {
            lVar15 = 0;
            plVar14 = (long *)*param_3;
            *param_3 = (long)(plVar14 + 1);
            do {
              lVar10 = lVar15 * 2;
              lVar15 = lVar15 + 1;
            } while (*(short *)(*plVar14 + lVar10) != 0);
          }
          else {
            *param_3 = *param_3 + 8;
          }
          puVar17 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x000107c610f4();
          func_0x000107c45d74();
          puVar8 = puVar17;
          func_0x000107c61178();
          func_0x000107c3ac4c();
          if (puVar8 == (undefined *)0x0) {
            *(undefined1 *)(param_2 + 0x1c9) = 1;
            func_0x000107c61170(puVar17);
            return;
          }
          puVar9 = puVar8;
          func_0x000107c613d0();
          lVar15 = *(long *)(param_2 + 0x1b8);
          lVar10 = *(long *)(param_2 + 0x1b0);
          if (*(long *)(param_2 + 0x1c0) <= (long)(puVar9 + lVar15)) {
            lVar15 = (long)(puVar9 + lVar15) * 2;
            lVar10 = 0;
            func_0x000107c60748(0,*(long *)(param_2 + 0x1b0),lVar15,0);
            *(long *)(param_2 + 0x1b0) = lVar10;
            *(long *)(param_2 + 0x1c0) = lVar15;
            lVar15 = *(long *)(param_2 + 0x1b8);
          }
          func_0x000107c610b4(lVar10 + lVar15,puVar8,puVar9);
          *(undefined **)(param_2 + 0x1b8) = puVar9 + *(long *)(param_2 + 0x1b8);
          goto LAB_1000be2ec;
        }
        if (bVar11 == 0x73) {
          plVar14 = (long *)*param_3;
          *param_3 = (long)(plVar14 + 1);
          lVar15 = *plVar14;
          if (lVar15 == 0) {
            lVar15 = *(long *)(param_2 + 0x1b8);
            lVar10 = *(long *)(param_2 + 0x1b0);
            if (*(long *)(param_2 + 0x1c0) <= lVar15 + 6) {
              lVar15 = (lVar15 + 6) * 2;
              lVar10 = 0;
              func_0x000107c60748(0,*(long *)(param_2 + 0x1b0),lVar15,0);
              *(long *)(param_2 + 0x1b0) = lVar10;
              *(long *)(param_2 + 0x1c0) = lVar15;
              lVar15 = *(long *)(param_2 + 0x1b8);
            }
            *(undefined2 *)((undefined4 *)(lVar10 + lVar15) + 1) = 0x296c;
            *(undefined4 *)(lVar10 + lVar15) = 0x6c756e28;
            lVar10 = 6;
          }
          else {
            lVar10 = lVar15;
            func_0x000107c613d0();
            lVar20 = *(long *)(param_2 + 0x1b8);
            lVar18 = *(long *)(param_2 + 0x1b0);
            if (*(long *)(param_2 + 0x1c0) <= lVar20 + lVar10) {
              lVar20 = (lVar20 + lVar10) * 2;
              lVar18 = 0;
              func_0x000107c60748(0,*(long *)(param_2 + 0x1b0),lVar20,0);
              *(long *)(param_2 + 0x1b0) = lVar18;
              *(long *)(param_2 + 0x1c0) = lVar20;
              lVar20 = *(long *)(param_2 + 0x1b8);
            }
            func_0x000107c610b4(lVar18 + lVar20,lVar15,lVar10);
          }
          lVar10 = *(long *)(param_2 + 0x1b8) + lVar10;
          goto LAB_1000be440;
        }
        if (bVar11 == 0x6e) goto LAB_1000be678;
LAB_1000be300:
        lVar10 = -1;
        do {
          lVar18 = lVar10;
          if (lVar18 - (lVar16 - lVar21 & (lVar16 - lVar21 >> 0x3f ^ 0xffffffffffffffffU)) == -1)
          goto LAB_1000be678;
          iVar5 = (int)*(char *)(lVar15 + lVar18 + 1);
          func_0x000107c60e80();
          iVar23 = iVar5 << 0x18;
          iVar6 = -(uint)(((byte)iVar5 & 0xfb) == 0x61);
          uVar2 = CONCAT15((char)(-(uint)(iVar23 == 0x75000000) >> 8),
                           CONCAT14((char)-(uint)(iVar23 == 0x75000000),
                                    -(uint)(iVar23 == 0x78000000))) & 0xffff0000ffff;
          auVar3[2] = (char)-(uint)(iVar23 == 0x64000000);
          auVar3._0_2_ = -(ushort)(((byte)iVar5 & 0xef) == 99);
          auVar3[3] = (char)(-(uint)(iVar23 == 0x64000000) >> 8);
          auVar3[4] = (char)-(uint)(iVar23 == 0x69000000);
          auVar3[5] = (char)(-(uint)(iVar23 == 0x69000000) >> 8);
          auVar3[6] = (char)-(uint)(iVar23 == 0x6f000000);
          auVar3[7] = (char)(-(uint)(iVar23 == 0x6f000000) >> 8);
          auVar3[8] = (char)uVar2;
          auVar3[9] = (char)(uVar2 >> 8);
          auVar3[10] = (char)(uVar2 >> 0x20);
          auVar3[0xb] = (char)(uVar2 >> 0x28);
          auVar3[0xc] = (char)-(uint)(iVar23 == 0x66000000);
          auVar3[0xd] = (char)(-(uint)(iVar23 == 0x66000000) >> 8);
          auVar3[0xe] = (char)iVar6;
          auVar3[0xf] = (char)((uint)iVar6 >> 8);
          uVar4 = NEON_umaxv(auVar3,2);
        } while (((uVar4 & 1) == 0) &&
                (lVar10 = lVar18 + 1, iVar5 << 0x18 != 0x70000000 && iVar5 << 0x18 != 0x67000000));
        if ((lVar18 == 0x7ffffffffffffffd) ||
           ((lVar10 = lVar18 + 2, 0x1e < lVar10 ||
            (cVar1 = *(char *)(lVar15 + lVar18 + 1), iVar6 = (int)cVar1, cVar1 == 'O')))) {
LAB_1000be678:
          *(undefined1 *)(param_2 + 0x1c9) = 1;
          return;
        }
        func_0x000107c60e80();
        if (iVar6 < 0x69) {
          if (iVar6 < 0x65) {
            if (iVar6 != 0x61) {
              if (iVar6 != 99) {
                if (iVar6 != 100) goto LAB_1000be678;
                goto LAB_1000be4d8;
              }
LAB_1000be580:
              func_0x000107c610b4(param_2 + 400,lVar15,lVar10);
              *(undefined1 *)(param_2 + lVar18 + 0x192) = 0;
              *param_3 = *param_3 + 8;
              goto LAB_1000be5b0;
            }
          }
          else if (2 < iVar6 - 0x65U) goto LAB_1000be678;
          func_0x000107c610b4(param_2 + 400,lVar15,lVar10);
          *(undefined1 *)(param_2 + lVar18 + 0x192) = 0;
          *param_3 = *param_3 + 8;
        }
        else {
          if (iVar6 < 0x70) {
            if (iVar6 != 0x69) {
              if (iVar6 != 0x6f) goto LAB_1000be678;
              goto LAB_1000be4c0;
            }
LAB_1000be4d8:
            bVar11 = *(byte *)(lVar15 + lVar18);
            if (bVar11 < 0x71) {
              if ((bVar11 == 0x68) || ((bVar11 != 0x6a && (bVar11 != 0x6c)))) goto LAB_1000be580;
              goto LAB_1000be550;
            }
            if (bVar11 != 0x7a) {
LAB_1000be51c:
              if (bVar11 == 0x74) goto LAB_1000be550;
              if (bVar11 != 0x71) goto LAB_1000be580;
            }
            func_0x000107c610b4(param_2 + 400,lVar15,lVar18);
            *(undefined4 *)(param_2 + lVar18 + 400) = 0x646c6c;
          }
          else {
            if (iVar6 != 0x70) {
              if ((iVar6 != 0x75) && (iVar6 != 0x78)) goto LAB_1000be678;
LAB_1000be4c0:
              bVar11 = *(byte *)(lVar15 + lVar18);
              if (bVar11 < 0x6c) {
                if ((bVar11 == 0x68) || (bVar11 != 0x6a)) goto LAB_1000be580;
              }
              else if (bVar11 != 0x6c) goto LAB_1000be51c;
            }
LAB_1000be550:
            func_0x000107c610b4(param_2 + 400,lVar15,lVar10);
            *(undefined1 *)(param_2 + lVar18 + 0x192) = 0;
          }
          *param_3 = *param_3 + 8;
        }
LAB_1000be5b0:
        lVar10 = param_2;
        func_0x000107c61318(param_2,400,param_2 + 400);
        lVar15 = *(long *)(param_2 + 0x1b8);
        iVar6 = (int)lVar10;
        lVar10 = *(long *)(param_2 + 0x1b0);
        if (*(long *)(param_2 + 0x1c0) <= lVar15 + iVar6) {
          lVar15 = (lVar15 + iVar6) * 2;
          lVar10 = 0;
          func_0x000107c60748(0,*(long *)(param_2 + 0x1b0),lVar15,0);
          *(long *)(param_2 + 0x1b0) = lVar10;
          *(long *)(param_2 + 0x1c0) = lVar15;
          lVar15 = *(long *)(param_2 + 0x1b8);
        }
        func_0x000107c610b4(lVar10 + lVar15,param_2,(long)iVar6);
        *(long *)(param_2 + 0x1b8) = *(long *)(param_2 + 0x1b8) + (long)iVar6;
        lVar15 = lVar20 + lVar18 + 2;
      }
    } while (lVar15 < lVar16);
  }
  lVar16 = *(long *)(param_2 + 0x1b8);
  lVar15 = *(long *)(param_2 + 0x1b0);
  if (*(long *)(param_2 + 0x1c0) <= lVar16 + 1) {
    lVar16 = (lVar16 + 1) * 2;
    lVar15 = 0;
    func_0x000107c60748(0,*(long *)(param_2 + 0x1b0),lVar16,0);
    *(long *)(param_2 + 0x1b0) = lVar15;
    *(long *)(param_2 + 0x1c0) = lVar16;
    lVar16 = *(long *)(param_2 + 0x1b8);
  }
  *(undefined1 *)(lVar15 + lVar16) = 0;
  *(long *)(param_2 + 0x1b8) = *(long *)(param_2 + 0x1b8) + 1;
  return;
}



/* Entry: 1000bf410; end: 1000bf44b; -[SCAudioSessionCore _isRecordPermissionRequestSkipEnabled] */

undefined8 FUN_1000bf410(void)

{
  if (lRam00000001136ba2a0 != -1) {
    FUN_10002a2fc(0x1136ba2a0,&PTR___NSConcreteGlobalBlock_110875ec0);
  }
  return 0;
}



/* Entry: 1000bf44c; end: 1000bf45f; -[SCAsyncObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000bf44c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11279662c,0);
  return;
}



/* Entry: 1000bf460; end: 1000bf473; -[SCDerivedObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000bf460(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127966f8,0);
  return;
}



/* Entry: 1000bf474; end: 1000bf56b;  */

/* WARNING: Possible PIC construction at 0x0001000bf4b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000bf4bc) */

void FUN_1000bf474(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c4f2b0(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  func_0x000107c61180();
  func_0x000107c3e148();
  func_0x000107c61180();
  func_0x000107c40404();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1000bf56c; end: 1000bf587;  */

undefined * FUN_1000bf56c(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_50 = FUN_1000ca560;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1000ca520;
  puStack_58 = &UNK_1107a6d58;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  return puVar1;
}



/* Entry: 1000bf588; end: 1000bf637;  */

undefined * FUN_1000bf588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  ppuVar2 = &puStack_70;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = param_2;
  uStack_58 = param_3;
  uStack_50 = param_1;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  return puVar1;
}



/* Entry: 1000bf638; end: 1000bf64f;  */

void FUN_1000bf638(long param_1,long param_2)

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



/* Entry: 1000bf650; end: 1000bf677;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000bf650(void)

{
  FUN_1000bf56c();
  return;
}



/* Entry: 1000bf678; end: 1000bf7b3; -[SCFrameProcessLatencyReporterImpl initWithBlizzardLogger:perfLogger:] */

undefined1 *
FUN_1000bf678(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_48 = PTR_PTR_1126e75c0;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = 0x7fefffffffffffff;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xb8);
    *(undefined8 *)((long)puVar1 + 0xb8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0xc0);
    *(undefined8 *)((long)puVar1 + 0xc0) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    func_0x000107c610f4();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x000107c5c200(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c61180();
    func_0x000107c470d0();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x000107c41988();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined **)((long)puVar1 + 0x98) = puVar3;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0xd0) = 0;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000bf7b4; end: 1000bf81f; +[SCDeckHierarchyImpl primaryDeckHierarchyWithCurrentPageTracker:circumstanceEngine:] */

void FUN_1000bf7b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df598;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c462a8();
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1000bf820; end: 1000bf8f7; -[SCDeckHierarchyImpl initWithCurrentPageTracker:circumstanceEngine:] */

undefined1 *
FUN_1000bf820(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112705508;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    func_0x000107c61170(uVar2);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    func_0x000107c61174(uVar4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000bf8f8; end: 1000bf90f;  */

void FUN_1000bf8f8(long param_1,long param_2)

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



/* Entry: 1000bf910; end: 1000bf9af; -[SCCapturerTokenSetImpl initWithPerformer:] */

undefined1 * FUN_1000bf910(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126e75f0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c57314(puVar1);
    puVar2 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x000107c5e15c(PTR__OBJC_CLASS___NSHashTable_1126b4538);
    func_0x000107c61180();
    func_0x000107c59e8c(puVar1);
    func_0x000107c61170(puVar2);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000bf9b0; end: 1000bfa53; -[SCCrashLastPageViewListener initWithObservationQueue:appInsightsMetadataStorage:] */

undefined1 *
FUN_1000bf9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_1126e7368;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000bfa54; end: 1000bfa7b; -[SCCurrentPageTrackerImplementation currentPageEvent] */

void FUN_1000bfa54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c61174(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000bfa7c; end: 1000bfb83; -[SCCrashLastPageViewListener subscribeOnCurrentPageEvent:] */

void FUN_1000bfa7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  if (*(long *)(param_1 + 0x10) == 0) {
    func_0x000107c61144(auStack_38,param_1);
    uVar1 = param_3;
    func_0x000107c4da80();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_40,auStack_38);
    uVar2 = uVar1;
    func_0x000107c5c320();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar1);
    func_0x000107c61120(auStack_40);
    func_0x000107c61120(auStack_38);
  }
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1000bfb84; end: 1000bfbf7; -[SCDeckRootContainerProvider initWithPrimaryDeckHierarchy:] */

undefined1 * FUN_1000bfb84(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_112705510;
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



/* Entry: 1000bfbf8; end: 1000bfbfb;  */

void FUN_1000bfbf8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000bfbfc; end: 1000bfc27;  */

void FUN_1000bfbfc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1000bfc28; end: 1000bfc47; -[_TtC27SCDeckServiceImplementation25DeckServiceImplementation deckTransitionEvent] */

void FUN_1000bfc28(long param_1)

{
  func_0x000107c41424(*(undefined8 *)(param_1 + 0x18));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000bfc48; end: 1000bfc4f; -[SCDeckHierarchyImpl deckTransitionEvent] */

undefined8 FUN_1000bfc48(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1000bfc50; end: 1000bfd73; -[SCAsyncObserver next:] */

void FUN_1000bfc50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  if (*(char *)(param_1 + 0x20) == '\x01') {
    puVar1 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x000107c40fcc();
    func_0x000107c61180();
    puVar2 = puVar1;
    func_0x000107c49cec();
    func_0x000107c61170(puVar1);
    if ((int)puVar2 != 0) {
      func_0x000107c4d664(*(undefined8 *)(param_1 + 0x10));
      goto LAB_1000bfd3c;
    }
  }
  func_0x000107c61144(auStack_38,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_3);
  func_0x000107c3d7d8(uVar3);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
LAB_1000bfd3c:
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 1000bfd74; end: 1000bfda3; -[SCCapturerTokenSetImpl setPerformer:] */

void FUN_1000bfd74(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000bfda4; end: 1000bfdd3; -[SCCapturerTokenSetImpl setTokenSet:] */

void FUN_1000bfda4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1000bfdd4; end: 1000bfddf;  */

void FUN_1000bfdd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&UNK_10e820b6c);
  return;
}



/* Entry: 1000bfde0; end: 1000bff87;  */

long * FUN_1000bfde0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  FUN_1000bfdd4(0,*(undefined8 *)(*unaff_x20 + 0x50));
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  FUN_1000c0ea8(lVar1);
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  return unaff_x20;
}



/* Entry: 1000bff88; end: 1000bff8b;  */

void FUN_1000bff88(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1000bff8c; end: 1000bffcf;  */

void FUN_1000bff8c(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___syycWV_11034f1c0 + 0x40;
  func_0x000107c61524(param_1,0,1,&puStack_18,param_1 + 0xb8);
  return;
}



/* Entry: 1000bffd0; end: 1000bffdf;  */

void FUN_1000bffd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_28 = param_2;
  uStack_20 = param_3;
  uStack_18 = param_4;
  func_0x000107c614dc(param_1,&uStack_28,&DAT_10e820638);
  return;
}



/* Entry: 1000bffe0; end: 1000c0023;  */

void FUN_1000bffe0(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___sBoWV_11034d678 + 0x40;
  func_0x000107c61524(param_1,0,1,&puStack_18,param_1 + 0x98);
  return;
}



/* Entry: 1000c0024; end: 1000c008f; -[SCCaptureSessionRuntimeErrorHandler initWithCaptureResource:] */

undefined1 * FUN_1000c0024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e75d0;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000c0090; end: 1000c02d7; +[SCManagedCapturerStateBuilder managedCapturerState] */

void FUN_1000c0090(void)

{
  func_0x000107c614ec();
  func_0x000107c610f8();
  func_0x000107c453e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1000c02d8; end: 1000c02f7; -[SCManagedCapturerStateBuilder init] */

void FUN_1000c02d8(void)

{
  func_0x0001000c00ac();
  return;
}



/* Entry: 1000c02f8; end: 1000c033b; -[SCManagedCapturerStateBuilder build] */

void FUN_1000c02f8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1000c033c();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1000c033c; end: 1000c0a73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c033c(long param_1)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  undefined *puVar26;
  long lVar27;
  long unaff_x20;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uStack_110;
  undefined4 uStack_ec;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_88;
  long lStack_78;
  long lStack_70;
  
  bVar3 = *(byte *)(unaff_x20 + _DAT_113075c98);
  if (bVar3 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075c98) = 0;
  }
  bVar4 = *(byte *)(unaff_x20 + _DAT_113075ca0);
  if (bVar4 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075ca0) = 0;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075ca8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_88 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_88 = *puVar1;
  }
  bVar5 = *(byte *)(unaff_x20 + _DAT_113075cb8);
  if (bVar5 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075cb8) = 0;
  }
  bVar6 = *(byte *)(unaff_x20 + _DAT_113075cc0);
  if (bVar6 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075cc0) = 0;
  }
  bVar7 = *(byte *)(unaff_x20 + _DAT_113075cc8);
  if (bVar7 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075cc8) = 0;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075cd0);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_a0 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_a0 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075cd8);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_a8 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_a8 = *puVar1;
  }
  bVar8 = *(byte *)(unaff_x20 + _DAT_113075ce8);
  if (bVar8 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075ce8) = 0;
  }
  bVar9 = *(byte *)(unaff_x20 + _DAT_113075cf0);
  if (bVar9 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075cf0) = 0;
  }
  bVar10 = *(byte *)(unaff_x20 + _DAT_113075cf8);
  if (bVar10 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075cf8) = 0;
  }
  bVar11 = *(byte *)(unaff_x20 + _DAT_113075d08);
  if (bVar11 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075d08) = 0;
  }
  bVar12 = *(byte *)(unaff_x20 + _DAT_113075d10);
  if (bVar12 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075d10) = 0;
  }
  bVar13 = *(byte *)(unaff_x20 + _DAT_113075d18);
  if (bVar13 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075d18) = 0;
  }
  bVar14 = *(byte *)(unaff_x20 + _DAT_113075d20);
  if (bVar14 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075d20) = 0;
  }
  bVar15 = *(byte *)(unaff_x20 + _DAT_113075d28);
  if (bVar15 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075d28) = 0;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075d30);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_d0 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_d0 = *puVar1;
  }
  bVar16 = *(byte *)(unaff_x20 + _DAT_113075d38);
  if (bVar16 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075d38) = 0;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075d40);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_e0 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_e0 = *puVar1;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075d48);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_e8 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_e8 = *puVar1;
  }
  puVar2 = (undefined4 *)(unaff_x20 + _DAT_113075d50);
  if (*(char *)(puVar2 + 1) == '\x01') {
    uStack_ec = 0;
    *puVar2 = 0;
    *(undefined1 *)(puVar2 + 1) = 0;
  }
  else {
    uStack_ec = *puVar2;
  }
  bVar17 = *(byte *)(unaff_x20 + _DAT_113075d58);
  if (bVar17 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075d58) = 0;
  }
  bVar18 = *(byte *)(unaff_x20 + _DAT_113075d60);
  if (bVar18 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075d60) = 0;
  }
  bVar19 = *(byte *)(unaff_x20 + _DAT_113075d68);
  if (bVar19 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075d68) = 0;
  }
  bVar20 = *(byte *)(unaff_x20 + _DAT_113075d70);
  if (bVar20 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075d70) = 0;
  }
  bVar21 = *(byte *)(unaff_x20 + _DAT_113075d88);
  if (bVar21 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075d88) = 0;
  }
  bVar22 = *(byte *)(unaff_x20 + _DAT_113075d90);
  if (bVar22 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075d90) = 0;
  }
  bVar23 = *(byte *)(unaff_x20 + _DAT_113075d98);
  if (bVar23 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075d98) = 0;
  }
  bVar24 = *(byte *)(unaff_x20 + _DAT_113075da0);
  if (bVar24 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075da0) = 0;
  }
  bVar25 = *(byte *)(unaff_x20 + _DAT_113075da8);
  if (bVar25 == 2) {
    *(undefined1 *)(unaff_x20 + _DAT_113075da8) = 0;
  }
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_113075db0);
  if (*(char *)(puVar1 + 1) == '\x01') {
    uStack_110 = 0;
    *puVar1 = 0;
    *(undefined1 *)(puVar1 + 1) = 0;
  }
  else {
    uStack_110 = *puVar1;
  }
  uVar32 = *(undefined8 *)(unaff_x20 + _DAT_113075cb0);
  uVar31 = *(undefined8 *)(unaff_x20 + _DAT_113075ce0);
  uVar30 = *(undefined8 *)(unaff_x20 + _DAT_113075d00);
  uVar29 = *(undefined8 *)(unaff_x20 + _DAT_113075d78);
  uVar28 = *(undefined8 *)(unaff_x20 + _DAT_113075d80);
  FUN_1000c0a74();
  lVar27 = param_1;
  func_0x000107c610f8();
  *(byte *)(lVar27 + _DAT_113075b78) = bVar3 & 1;
  *(byte *)(lVar27 + _DAT_113075b80) = bVar4 & 1;
  *(undefined8 *)(lVar27 + _DAT_113075b88) = uStack_88;
  *(undefined8 *)(lVar27 + _DAT_113075b90) = uVar32;
  *(byte *)(lVar27 + _DAT_113075b98) = bVar5 & 1;
  *(byte *)(lVar27 + _DAT_113075ba0) = bVar6 & 1;
  *(byte *)(lVar27 + _DAT_113075ba8) = bVar7 & 1;
  *(undefined8 *)(lVar27 + _DAT_113075bb0) = uStack_a0;
  *(undefined8 *)(lVar27 + _DAT_113075bb8) = uStack_a8;
  *(undefined8 *)(lVar27 + _DAT_113075bc0) = uVar31;
  *(byte *)(lVar27 + _DAT_113075bc8) = bVar8 & 1;
  *(byte *)(lVar27 + _DAT_113075bd0) = bVar9 & 1;
  *(byte *)(lVar27 + _DAT_113075bd8) = bVar10 & 1;
  *(undefined8 *)(lVar27 + _DAT_113075be0) = uVar30;
  *(byte *)(lVar27 + _DAT_113075be8) = bVar11 & 1;
  *(byte *)(lVar27 + _DAT_113075bf0) = bVar12 & 1;
  *(byte *)(lVar27 + _DAT_113075bf8) = bVar13 & 1;
  *(byte *)(lVar27 + _DAT_113075c00) = bVar14 & 1;
  *(byte *)(lVar27 + _DAT_113075c08) = bVar15 & 1;
  *(undefined8 *)(lVar27 + _DAT_113075c10) = uStack_d0;
  *(byte *)(lVar27 + _DAT_113075c18) = bVar16 & 1;
  *(undefined8 *)(lVar27 + _DAT_113075c20) = uStack_e0;
  *(undefined8 *)(lVar27 + _DAT_113075c28) = uStack_e8;
  *(undefined4 *)(lVar27 + _DAT_113075c30) = uStack_ec;
  *(byte *)(lVar27 + _DAT_113075c38) = bVar17 & 1;
  *(byte *)(lVar27 + _DAT_113075c40) = bVar18 & 1;
  *(byte *)(lVar27 + _DAT_113075c48) = bVar19 & 1;
  *(byte *)(lVar27 + _DAT_113075c50) = bVar20 & 1;
  *(undefined8 *)(lVar27 + _DAT_113075c58) = uVar29;
  *(undefined8 *)(lVar27 + _DAT_113075c60) = uVar28;
  *(byte *)(lVar27 + _DAT_113075c68) = bVar21 & 1;
  *(byte *)(lVar27 + _DAT_113075c70) = bVar22 & 1;
  *(byte *)(lVar27 + _DAT_113075c78) = bVar23 & 1;
  *(byte *)(lVar27 + _DAT_113075c80) = bVar24 & 1;
  *(byte *)(lVar27 + _DAT_113075c88) = bVar25 & 1;
  *(undefined8 *)(lVar27 + _DAT_113075c90) = uStack_110;
  puVar26 = PTR_s_init_1125d9248;
  lStack_78 = lVar27;
  lStack_70 = param_1;
  func_0x000107c61174(uVar32);
  func_0x000107c61174(uVar31);
  func_0x000107c61174(uVar30);
  func_0x000107c61174(uVar29);
  func_0x000107c61434(uVar28);
  func_0x000107c61154(&lStack_78,puVar26);
  return;
}



/* Entry: 1000c0a74; end: 1000c0a93;  */

void FUN_1000c0a74(void)

{
  func_0x000107c61168(&PTR_PTR_1129ac040);
  return;
}



/* Entry: 1000c0a94; end: 1000c0bc7; +[SCStorageServicesFactory preferencesAtPath:] */

void FUN_1000c0a94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c6111c(auStack_40,auStack_38);
  func_0x000107c61174(param_3);
  func_0x000107c3e4fc(puVar1);
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126e0310;
  FUN_1000c0bf8(PTR_PTR_1126e0310,param_3,puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  func_0x000107c61120(auStack_40);
  func_0x000107c61120(auStack_38);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1000c0bc8; end: 1000c0bf7;  */

void FUN_1000c0bc8(long param_1,long param_2)

{
  func_0x000107c61174(*(undefined8 *)(param_2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x28,param_2 + 0x28);
  return;
}



/* Entry: 1000c0bf8; end: 1000c0c6b;  */

void FUN_1000c0bf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_2);
  func_0x000107c61168(param_1);
  puVar1 = PTR_PTR_1126e0300;
  func_0x000107c610f4(PTR_PTR_1126e0300);
  FUN_1000c0c6c();
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1000c0c6c; end: 1000c0e73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1000c0c6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  long lVar6;
  long lStack_50;
  undefined *puStack_48;
  
  plVar1 = &lStack_50;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  puVar5 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_48 = PTR_PTR_112706590;
    lStack_50 = param_1;
    func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
    puVar5 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      puVar2 = &UNK_10f7804f7;
      func_0x000107c60f50(&UNK_10f7804f7,0);
      uVar3 = *(undefined8 *)((long)plVar1 + (long)_DAT_11278e9ec);
      *(undefined **)((long)plVar1 + (long)_DAT_11278e9ec) = puVar2;
      func_0x000107c61170(uVar3);
      lVar6 = (long)_DAT_11278e9f0;
      func_0x000107c61174(param_2);
      uVar3 = *(undefined8 *)((long)plVar1 + lVar6);
      *(undefined8 *)((long)plVar1 + lVar6) = param_2;
      func_0x000107c61170(uVar3);
      uVar3 = param_3;
      func_0x000107c5c734();
      func_0x000107c61180();
      uVar4 = *(undefined8 *)((long)plVar1 + (long)_DAT_11278e9f4);
      *(undefined8 *)((long)plVar1 + (long)_DAT_11278e9f4) = uVar3;
      func_0x000107c61170(uVar4);
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x000107c61160();
      uVar3 = *(undefined8 *)((long)plVar1 + (long)_DAT_11278e9f8);
      *(undefined **)((long)plVar1 + (long)_DAT_11278e9f8) = puVar2;
      func_0x000107c61170(uVar3);
      uVar3 = 0;
      func_0x000107c60f4c(0,0x11,0);
      func_0x000107c61180();
      puVar2 = &UNK_10f780514;
      func_0x000107c60f50(&UNK_10f780514,uVar3);
      uVar4 = *(undefined8 *)((long)plVar1 + (long)_DAT_11278e9fc);
      *(undefined **)((long)plVar1 + (long)_DAT_11278e9fc) = puVar2;
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x000107c61160();
      uVar3 = *(undefined8 *)((long)plVar1 + (long)_DAT_11278ea00);
      *(undefined **)((long)plVar1 + (long)_DAT_11278ea00) = puVar2;
      func_0x000107c61170(uVar3);
      puVar2 = PTR_PTR_1126e0348;
      func_0x000107c61160();
      uVar3 = *(undefined8 *)((long)plVar1 + (long)_DAT_11278ea04);
      *(undefined **)((long)plVar1 + (long)_DAT_11278ea04) = puVar2;
      func_0x000107c61170();
      *(undefined1 *)((long)plVar1 + (long)_DAT_11278ea08) = 1;
      func_0x000107c60f34();
      uVar4 = *(undefined8 *)((long)plVar1 + (long)_DAT_11278ea0c);
      *(undefined8 *)((long)plVar1 + (long)_DAT_11278ea0c) = uVar3;
      func_0x000107c61170(uVar4);
    }
  }
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return puVar5;
}



/* Entry: 1000c0e74; end: 1000c0ea7; -[SCPreferences init] */

void FUN_1000c0e74(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_11270b938;
  uStack_20 = param_1;
  func_0x000107c61154(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000c0ea8; end: 1000c0ebb;  */

void FUN_1000c0ea8(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1000c0ebc; end: 1000c0f2f;  */

long * FUN_1000c0ebc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = 0;
  func_0x0001000c0eb0(0,*(undefined8 *)(*unaff_x20 + 0x50));
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = param_1;
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  func_0x0001000c0ea8(lVar1);
  func_0x000107c6157c();
  func_0x000107c6157c(param_2);
  return unaff_x20;
}



/* Entry: 1000c0f30; end: 1000c0f4f;  */

void FUN_1000c0f30(void)

{
  func_0x000107c61168(&PTR_PTR_1127d7f30);
  return;
}



/* Entry: 1000c0f50; end: 1000c0f7f;  */

void FUN_1000c0f50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1000c0f30();
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = uVar1;
  return;
}



/* Entry: 1000c0f80; end: 1000c0f83;  */

void FUN_1000c0f80(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbff98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocateGenericClassMetadata_11034f220)();
  return;
}



/* Entry: 1000c0f84; end: 1000c0fc7;  */

void FUN_1000c0f84(long param_1)

{
  undefined *puStack_18;
  
  puStack_18 = PTR___syycWV_11034f1c0 + 0x40;
  func_0x000107c61524(param_1,0,1,&puStack_18,param_1 + 0xb0);
  return;
}



/* Entry: 1000c0fc8; end: 1000c109f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c0fc8(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  lVar1 = _DAT_112da08c0;
  puVar2 = &UNK_10d9439c0;
  func_0x0001000c10c0();
  func_0x000107c61180();
  uVar3 = 0;
  FUN_1000c1164(0);
  func_0x000107c610f8();
  FUN_1000c12b8(puVar2,uVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112da08c8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112da08d0) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112da08d8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112da08e0) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112da08e8) = 1;
  *(undefined8 *)(unaff_x20 + _DAT_112da08f0) = 1;
  func_0x000107c61154(&stack0xffffffffffffffc0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000c10a0; end: 1000c10ef; -[SCManagedCapturerStateCoordinatorImpl init] */

void FUN_1000c10a0(void)

{
  FUN_1000c0fc8();
  return;
}



/* Entry: 1000c10f0; end: 1000c1163; -[SCMainQueuePerformerImpl initWithCaller:] */

undefined1 * FUN_1000c10f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar2 = &uStack_40;
  puStack_38 = PTR_PTR_11270b7d0;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  puVar1 = PTR___dispatch_main_q_11034be20;
  if (puVar2 != (undefined8 *)0x0) {
    func_0x000107c61174(PTR___dispatch_main_q_11034be20);
    uVar3 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined **)((long)puVar2 + 8) = puVar1;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar2 + 0x10) = param_3;
  }
  return (undefined1 *)puVar2;
}



/* Entry: 1000c1164; end: 1000c1183;  */

void FUN_1000c1164(void)

{
  func_0x000107c61168(&PTR_PTR_1127d8018);
  return;
}



/* Entry: 1000c1184; end: 1000c12b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c1184(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  bool bVar1;
  long lVar2;
  byte *pbVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined *puStack_b0;
  undefined *puStack_a8;
  byte abStack_60 [24];
  long lStack_48;
  
  pbVar3 = abStack_60;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  abStack_60[8] = 0xbd;
  abStack_60[9] = 0x9e;
  abStack_60[10] = 0x8d;
  abStack_60[0xb] = 0xa8;
  abStack_60[0xc] = 0x96;
  abStack_60[0xd] = 0x91;
  abStack_60[0xe] = 0x9b;
  abStack_60[0xf] = 0x90;
  abStack_60[0] = 0xaa;
  abStack_60[1] = 0xb6;
  abStack_60[2] = 0xac;
  abStack_60[3] = 0x8b;
  abStack_60[4] = 0x9e;
  abStack_60[5] = 0x8b;
  abStack_60[6] = 0x8a;
  abStack_60[7] = 0x8c;
  abStack_60[0x10] = 0x88;
  abStack_60[0x11] = 0;
  func_0x000107c613d0();
  if (pbVar3 != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)0x0;
    puVar11 = (undefined1 *)0x1;
    do {
      abStack_60[(long)puVar10] = ~abStack_60[(long)puVar10];
      bVar1 = puVar11 < pbVar3;
      puVar10 = puVar11;
      puVar11 = (undefined1 *)(ulong)((int)puVar11 + 1);
    } while (bVar1);
  }
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x000107c5c200();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c60af0();
  uVar6 = param_5;
  func_0x000107c6115c(param_5,puVar5);
  if ((uVar6 & 1) != 0) {
    func_0x000107c61174(param_5);
    uVar6 = uRam00000001137fbbe0;
    uRam00000001137fbbe0 = param_5;
    func_0x000107c61170(uVar6);
  }
  func_0x000107c51780(param_1,param_2,param_3,param_4);
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
    return;
  }
  func_0x000107c60e78();
  puVar7 = puVar4;
  func_0x000107c614f0();
  *(undefined8 *)(puVar4 + _DAT_112da0928) = 0;
  lVar2 = _DAT_112da0920;
  uVar8 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(puVar4 + lVar2) = uVar8;
  lVar2 = _DAT_112da0938;
  puVar9 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(puVar4 + lVar2) = puVar9;
  lVar2 = _DAT_112da0940;
  puVar9 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(puVar4 + lVar2) = puVar9;
  lVar2 = _DAT_112da0948;
  puVar9 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(puVar4 + lVar2) = puVar9;
  lVar2 = _DAT_112da0950;
  puVar9 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(puVar4 + lVar2) = puVar9;
  lVar2 = _DAT_112da0958;
  puVar9 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(puVar4 + lVar2) = puVar9;
  lVar2 = _DAT_112da0960;
  puVar9 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(puVar4 + lVar2) = puVar9;
  lVar2 = _DAT_112da0968;
  puVar9 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(puVar4 + lVar2) = puVar9;
  *(undefined **)(puVar4 + _DAT_112da0930) = puVar5;
  puStack_b0 = puVar4;
  puStack_a8 = puVar7;
  func_0x000107c61154(&puStack_b0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000c12b8; end: 1000c13fb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c12b8(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112da0928) = 0;
  lVar1 = _DAT_112da0920;
  uVar2 = 0;
  FUN_10006a340();
  func_0x000107c613fc();
  FUN_10006a360();
  *(undefined8 *)(unaff_x20 + lVar1) = uVar2;
  lVar1 = _DAT_112da0938;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112da0940;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112da0948;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112da0950;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112da0958;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112da0960;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  lVar1 = _DAT_112da0968;
  puVar3 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112da0930) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffb0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1000c13fc; end: 1000c14d3; -[SCManagedCapturerStateCoordinatorImpl setState:] */

/* WARNING: Possible PIC construction at 0x0001000c1438: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001000c143c) */

void FUN_1000c13fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x0001000c1450(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1000c14d4; end: 1000c153b; -[SCManagedCapturerStateBuilder .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c14d4(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113075cb0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113075ce0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113075d00));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_113075d78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_113075d80));
  return;
}



/* Entry: 1000c153c; end: 1000c1543; +[SCManagedCaptureDevicePositionOption none] */

undefined8 FUN_1000c153c(void)

{
  return 0;
}



/* Entry: 1000c1544; end: 1000c157f;  */

void FUN_1000c1544(void)

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



/* Entry: 1000c1580; end: 1000c15b3;  */

void FUN_1000c1580(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  FUN_100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}


