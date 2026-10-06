/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105690b84; end: 105690d73; -[SCAppBadFramePerformanceMonitor initWithPageName:badFrameStatsTracker:circumstanceEngine:logger:] */

undefined1 *
FUN_105690b84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puStack_58 = PTR_PTR_1126e9928;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = 0;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126bcb38;
    _objc_alloc();
    uVar2 = 0;
    func_0x000105691f7c(0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010a00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010bf9a2a0(*(undefined8 *)((long)puVar1 + 0x30));
    puVar3 = PTR_PTR_1126bcb38;
    _objc_alloc();
    uVar2 = 1;
    func_0x000105691f7c(1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c010a00();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar4);
    _objc_release(uVar2);
    func_0x00010bf9a2a0(*(undefined8 *)((long)puVar1 + 0x38));
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar3);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105690d74; end: 105690e4f; -[SCAppBadFramePerformanceMonitor enterIntoNewPage:fromPage:] */

void FUN_105690d74(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  FUN_105691f90();
  if (((uVar1 & 1) == 0) && (*(long *)(param_1 + 8) == 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(uVar3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar3;
  }
  else {
    uVar1 = param_3;
    FUN_105691f90();
    if (((int)uVar1 == 0) ||
       (uVar1 = param_3, func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x18)),
       (uVar1 & 1) != 0)) goto LAB_105690e34;
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    *(ulong *)(param_1 + 0x18) = param_3;
    _objc_release(uVar2);
    func_0x00010bf94180(*(undefined8 *)(param_1 + 0x30),param_2,param_4,
                        *(undefined8 *)(param_1 + 0x10));
    func_0x00010bf9a2a0(*(undefined8 *)(param_1 + 0x30));
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x20) = 0;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = param_4;
  }
  _objc_release(uVar2);
LAB_105690e34:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105690e50; end: 105690e87; -[SCAppBadFramePerformanceMonitor _didEnterBackground] */

void FUN_105690e50(long param_1,undefined8 param_2)

{
  func_0x00010bf94180(*(undefined8 *)(param_1 + 0x30),param_2,*(undefined8 *)(param_1 + 8),
                      *(undefined8 *)(param_1 + 0x10));
  func_0x00010bf94180(*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010be92150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__reset_1125821f0);
  return;
}



/* Entry: 105690e88; end: 105690eaf; -[SCAppBadFramePerformanceMonitor _didEnterForeground] */

/* WARNING: Possible PIC construction at 0x000105690e9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105690ea0) */

void FUN_105690e88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf9a2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x30),PTR_s_eventStart_1125c4250)
  ;
  return;
}



/* Entry: 105690eb0; end: 105690eeb; -[SCAppBadFramePerformanceMonitor _reset] */

void FUN_105690eb0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105690eec; end: 105690f4b; -[SCAppBadFramePerformanceMonitor .cxx_destruct] */

void FUN_105690eec(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105690f4c; end: 105690fb7; -[SCAppBadFrameServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105690f4c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11272762c);
  _objc_destroyWeak(param_1 + _DAT_112727628);
  _objc_destroyWeak(param_1 + _DAT_112727624);
  _objc_destroyWeak(param_1 + _DAT_112727620);
  _objc_destroyWeak(param_1 + _DAT_112727634);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112727630,0);
  return;
}



/* Entry: 105690fb8; end: 10569114f; -[SCBadFrameAnalytics initWithEvent:badFrameStatsTracker:traceSpanName:logger:] */

undefined1 *
FUN_105690fb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e9930;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    FUN_105691f60();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar4);
    _objc_retain(param_5);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar4);
    _objc_retain(param_4);
    uVar4 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126bcb48;
    _objc_alloc();
    func_0x00010c0271a0();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    *(undefined8 *)((long)puVar1 + 0x50) = 0xffffffffffffffff;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105691150; end: 1056912ef; -[SCBadFrameAnalytics eventStart] */

void FUN_105691150(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar8 = param_1;
  _objc_release(puVar1);
  func_0x00010c276060(*(undefined8 *)(param_2 + 0x40));
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar9 = uVar8;
  func_0x00010bfb6b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c276580();
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c276040();
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c2766c0();
  func_0x00010c2766a0(*(undefined8 *)(param_2 + 0x40));
  uVar10 = uVar9;
  func_0x00010c0b6dc0(PTR_PTR_1126ae4f0);
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1056912f0;
  puStack_b0 = &UNK_1108a6788;
  lStack_a8 = param_2;
  _objc_retain(uVar2);
  uStack_a0 = uVar2;
  uStack_98 = uVar8;
  uStack_90 = uVar9;
  uStack_88 = param_1;
  uStack_80 = uVar3;
  uStack_78 = uVar4;
  uStack_70 = uVar5;
  uStack_68 = uVar10;
  func_0x00010c0f7fc0(uVar7,param_3,&puStack_c8);
  if (*(long *)(param_2 + 0x50) != -1) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2dea0();
    _objc_release(puVar1);
  }
  if (*(long *)(param_2 + 0x18) != 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf17b60();
    *(undefined **)(param_2 + 0x50) = puVar6;
    _objc_release(puVar1);
  }
  _objc_release(uStack_a0);
  _objc_release(uVar2);
  return;
}



/* Entry: 1056912f0; end: 105691343;  */

void FUN_1056912f0(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bcb50;
  _objc_alloc();
  func_0x00010bff67a0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x60));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x30) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105691344; end: 1056914b7; -[SCBadFrameAnalytics eventEnd] */

void FUN_105691344(undefined8 param_1,long param_2,undefined8 param_3)

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
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  uVar7 = param_1;
  _objc_release(puVar1);
  func_0x00010c276060(*(undefined8 *)(param_2 + 0x40));
  uVar2 = *(undefined8 *)(param_2 + 0x40);
  uVar8 = uVar7;
  func_0x00010bfb6b80();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c276580();
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c276040();
  uVar5 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010c2766c0();
  func_0x00010c2766a0(*(undefined8 *)(param_2 + 0x40));
  uVar9 = uVar8;
  func_0x00010c0b6dc0(PTR_PTR_1126ae4f0);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c0 = 0xc2000000;
  pcStack_b8 = FUN_1056914b8;
  puStack_b0 = &UNK_1108a6788;
  lStack_a8 = param_2;
  _objc_retain(uVar2);
  uStack_a0 = uVar2;
  uStack_98 = uVar7;
  uStack_90 = uVar8;
  uStack_88 = param_1;
  uStack_80 = uVar3;
  uStack_78 = uVar4;
  uStack_70 = uVar5;
  uStack_68 = uVar9;
  func_0x00010c0f7fc0(uVar6,param_3,&puStack_c8);
  if (*(long *)(param_2 + 0x18) != 0) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar1);
    *(undefined8 *)(param_2 + 0x50) = 0xffffffffffffffff;
  }
  _objc_release(uStack_a0);
  _objc_release(uVar2);
  return;
}



/* Entry: 1056914b8; end: 10569150b;  */

void FUN_1056914b8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bcb50;
  _objc_alloc();
  func_0x00010bff67a0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x60));
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  *(undefined **)(*(long *)(param_1 + 0x20) + 0x38) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10569150c; end: 1056915fb; -[SCBadFrameAnalytics reportEventWithPage:prevPage:] */

void FUN_10569150c(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  long lStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((*(long *)(param_2 + 8) == 1) ||
     ((param_4 != 0 && (lVar1 = param_4, FUN_105691f90(), (int)lVar1 != 0)))) {
    func_0x00010bfd36e0(*(undefined8 *)(param_2 + 0x40));
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_1056915fc;
    puStack_68 = &UNK_11084d788;
    lStack_60 = param_2;
    _objc_retain(param_4);
    lStack_58 = param_4;
    _objc_retain(param_5);
    uStack_50 = param_5;
    uStack_48 = param_1;
    func_0x00010c0f7fc0(uVar2,param_3,&puStack_80);
    _objc_release(uStack_50);
    _objc_release(lStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 1056915fc; end: 10569180b;  */

void FUN_1056915fc(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  long lVar11;
  undefined8 uVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  
  func_0x00010bf9a360(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x38));
  dVar13 = param_1;
  func_0x00010bf9a360(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x30));
  dVar14 = (param_1 - dVar13) * 60.0;
  lVar11 = (long)dVar14;
  lVar3 = *(long *)(*(long *)(param_2 + 0x20) + 0x38);
  func_0x00010c276580(lVar3);
  lVar4 = *(long *)(*(long *)(param_2 + 0x20) + 0x30);
  func_0x00010c276580(lVar4);
  uVar10 = lVar11 - (lVar3 - lVar4);
  lVar11 = *(long *)(*(long *)(param_2 + 0x20) + 0x38);
  func_0x00010c276040();
  lVar5 = *(long *)(*(long *)(param_2 + 0x20) + 0x30);
  func_0x00010c276040();
  lVar6 = *(long *)(*(long *)(param_2 + 0x20) + 0x38);
  func_0x00010c2766c0();
  lVar7 = *(long *)(*(long *)(param_2 + 0x20) + 0x30);
  func_0x00010c2766c0();
  func_0x00010bfd36c0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x38));
  dVar16 = dVar14;
  func_0x00010bfd36c0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x30));
  dVar14 = dVar14 - dVar16;
  uVar8 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010bdd25c0(uVar8,param_3,*(undefined8 *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x30))
  ;
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b6d60(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x38));
  dVar15 = dVar16;
  func_0x00010c0b6d60(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x30));
  dVar16 = dVar16 - dVar15;
  dVar15 = 0.0;
  if (0.0 <= dVar16) {
    dVar15 = dVar16;
  }
  lVar1 = *(long *)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf14fe0(*(undefined8 *)(lVar1 + 0x38));
  dVar17 = dVar16;
  func_0x00010bf14fe0(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x30));
  func_0x00010be8f3a0(param_1 - dVar13,dVar16 - dVar17,dVar14,*(undefined8 *)(param_2 + 0x38),dVar15
                      ,lVar1,param_3,uVar2,uVar12,lVar3 - lVar4,
                      uVar10 & ((long)uVar10 >> 0x3f ^ 0xffffffffffffffffU),uVar8,0,lVar11 - lVar5,
                      lVar6 - lVar7);
  puVar9 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (*(long *)(param_2 + 0x28) != 0) {
    lVar4 = *(long *)(*(long *)(param_2 + 0x20) + 0x20);
    func_0x00010c0e00e0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar4;
    func_0x00010c067fc0();
    func_0x00010c0df780(puVar9,param_3,lVar3 + 1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(*(long *)(param_2 + 0x20) + 0x20),param_3,puVar9,
                        *(undefined8 *)(param_2 + 0x28));
    _objc_release(puVar9);
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 10569180c; end: 10569186b; -[SCBadFrameAnalytics endAndReportEventWithPage:prevPage:] */

void FUN_10569180c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf99dc0(param_1);
  func_0x00010c132d20(param_1,param_2,param_3,param_4);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10569186c; end: 105691d03; -[SCBadFrameAnalytics _reportBadFrameEvent:prevPage:eventDurationInSec:badFrameDurationInMs:totalFrameCount:totalDroppedFrameCount:durationBuckets:jankFrameDurationMs:totalBadFrameCount:totalHangsCount:totalHangFrameDurationMs:hangThresholdMs:mainThreadCpuTimeMs:] */

void FUN_10569186c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,long param_8,undefined8 param_9
                  ,undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  double dVar5;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_13);
  dVar5 = param_1;
  _log2(param_1);
  puVar1 = PTR_PTR_1126bcb58;
  _objc_retain(param_12);
  func_0x00010bf04e00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2ad580(param_1 * 1000.0);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5320(puVar1,param_7,(long)dVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bbd80(puVar1,param_7,*(undefined8 *)(param_6 + 0x10));
  _objc_unsafeClaimAutoreleasedReturnValue();
  if (param_8 == 0) {
    func_0x00010c2ad600(puVar1,param_7,0);
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    uVar2 = *(undefined8 *)(param_6 + 0x20);
    func_0x00010c0e00e0(uVar2,param_7,param_8);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067fc0();
    func_0x00010c2ad600(puVar1,param_7,uVar3);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  func_0x00010c2a9120(param_2,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bb840(puVar1,param_7,param_10);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bb7c0(puVar1,param_7,param_11);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b1e80(puVar1,param_7,param_13);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bb7a0(puVar1,param_7,param_14);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2bb860(puVar1,param_7,param_15);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2af080(param_3,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2af0a0(param_4,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b3500(param_5,puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = param_12;
  func_0x00010c14da60(param_12,param_7,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c067fc0();
  func_0x00010c2ae4e0(puVar1,param_7,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_12;
  func_0x00010c14da60(param_12,param_7,1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c067fc0();
  func_0x00010c2ae500(puVar1,param_7,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_12;
  func_0x00010c14da60(param_12,param_7,2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c067fc0();
  func_0x00010c2ae520(puVar1,param_7,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_12;
  func_0x00010c14da60(param_12,param_7,3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c067fc0();
  func_0x00010c2ae540(puVar1,param_7,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_12;
  func_0x00010c14da60(param_12,param_7,4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c067fc0();
  func_0x00010c2ae560(puVar1,param_7,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_12;
  func_0x00010c14da60(param_12,param_7,5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c067fc0();
  func_0x00010c2ae580(puVar1,param_7,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_12;
  func_0x00010c14da60(param_12,param_7,6);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c067fc0();
  func_0x00010c2ae5a0(puVar1,param_7,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_12;
  func_0x00010c14da60(param_12,param_7,7);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c067fc0();
  func_0x00010c2ae5c0(puVar1,param_7,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  uVar3 = param_12;
  func_0x00010c14da60(param_12,param_7,8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_12);
  uVar2 = uVar3;
  func_0x00010c067fc0(uVar3);
  func_0x00010c2ae5e0(puVar1,param_7,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c2a8ae0(puVar1,param_7,param_8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b5ca0(puVar1,param_7,param_9);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bf21f60(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a0f20(*(undefined8 *)(param_6 + 0x48),param_7,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar1);
  _objc_release(param_13);
  _objc_release(param_9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 105691d04; end: 105691e73; -[SCBadFrameAnalytics _badFrameDurationBucketsWithPage:prevPage:] */

void FUN_105691d04(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  
  uVar1 = *(ulong *)(param_1 + 0x38);
  func_0x00010bf14fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(ulong *)(param_1 + 0x30);
  func_0x00010bf14fc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar1;
  func_0x00010bf529e0();
  uVar4 = uVar2;
  func_0x00010bf529e0();
  if (uVar4 <= uVar9) {
    uVar9 = uVar4;
  }
  if (uVar9 != 0) {
    uVar9 = 0;
    do {
      puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      uVar4 = uVar1;
      func_0x00010c0dfd40(uVar1,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c067fc0();
      uVar6 = uVar2;
      func_0x00010c0dfd40(uVar2,param_2,uVar9);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar6;
      func_0x00010c067fc0();
      func_0x00010c0df780(puVar8,param_2,uVar5 - uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar3,param_2,puVar8);
      _objc_release(puVar8);
      _objc_release(uVar6);
      _objc_release(uVar4);
      uVar9 = uVar9 + 1;
      uVar4 = uVar1;
      func_0x00010bf529e0();
      uVar5 = uVar2;
      func_0x00010bf529e0();
      if (uVar5 <= uVar4) {
        uVar4 = uVar5;
      }
    } while (uVar9 < uVar4);
  }
  puVar8 = puVar3;
  func_0x00010bf51e00(puVar3);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105691e74; end: 105691ee7; -[SCBadFrameAnalytics dealloc] */

void FUN_105691e74(long param_1)

{
  undefined *puVar1;
  long lStack_30;
  undefined *puStack_28;
  
  if (*(long *)(param_1 + 0x50) != -1) {
    puVar1 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2dea0();
    _objc_release(puVar1);
  }
  puStack_28 = PTR_PTR_1126e9930;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 105691ee8; end: 105691f5f; -[SCBadFrameAnalytics .cxx_destruct] */

void FUN_105691ee8(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105691f60; end: 105691f8f;  */

undefined ** FUN_105691f60(long param_1)

{
  undefined **ppuVar1;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110db7a38;
  if (param_1 != 0) {
    ppuVar1 = &PTR____CFConstantStringClassReference_110df4e78;
  }
  return ppuVar1;
}



/* Entry: 105691f90; end: 10569203f;  */

uint FUN_105691f90(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  
  _objc_retain();
  if ((param_1 == 0) ||
     (uVar1 = param_1,
     func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f5a858),
     (uVar1 & 1) != 0)) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010c0720c0(param_1,param_2,&PTR____CFConstantStringClassReference_110f5a838);
    uVar2 = (uint)uVar1 ^ 1;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 105692040; end: 1056920af; -[SCSwipePerformanceMonitor _pageViewDidChange:] */

void FUN_105692040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1056920b0;
  puStack_20 = &UNK_110872390;
  uStack_18 = param_1;
  func_0x00010c0c02c0(param_3,param_2,&puStack_38,&PTR___NSConcreteGlobalBlock_1108a67b8,
                      &PTR___NSConcreteGlobalBlock_1108a67d8,&PTR___NSConcreteGlobalBlock_1108a67f8)
  ;
  return;
}



/* Entry: 1056920b0; end: 10569213b;  */

void FUN_1056920b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126afdd8;
  func_0x00010bfc8740(PTR_PTR_1126afdd8,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  *(undefined **)(*(long *)(param_1 + 0x20) + 8) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  puVar1 = PTR_PTR_1126afdd8;
  func_0x00010bfc8740(PTR_PTR_1126afdd8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf96a60(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10569213c; end: 105692147;  */

void FUN_10569213c(void)

{
  return;
}



/* Entry: 105692148; end: 105692193; -[SCInteractionJankStats initWithTotalDuration:jankDuration:] */

void FUN_105692148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126e9940;
  uStack_30 = param_3;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_1;
    *(undefined8 *)((long)puVar1 + 0x10) = param_2;
  }
  return;
}



/* Entry: 105692194; end: 1056921b7; -[SCInteractionJankStats copyWithZone:] */

undefined8 FUN_105692194(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1056921b8; end: 10569224b; -[SCInteractionJankStats hash] */

ulong * FUN_1056921b8(long param_1,undefined8 param_2,ulong *param_3)

{
  ulong uVar1;
  bool bVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong *puVar6;
  double dVar7;
  double dVar8;
  ulong uStack_28;
  ulong uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar5 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_28 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_28 = uStack_28 ^ uStack_28 >> 0x16;
  uVar5 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_20 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_20 = uStack_20 ^ uStack_20 >> 0x16;
  puVar3 = &uStack_28;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
    puVar6 = (ulong *)0x1;
  }
  else {
    puVar6 = (ulong *)0x0;
    if ((puVar3 != (ulong *)0x0) && (param_3 != (ulong *)0x0)) {
      puVar6 = puVar3;
      _objc_opt_class(puVar3);
      puVar4 = param_3;
      _objc_opt_isKindOfClass(param_3,puVar6);
      if (((ulong)puVar4 & 1) != 0) {
        dVar8 = ABS((double)puVar3[1] - (double)param_3[1]);
        dVar7 = ABS((double)puVar3[1] + (double)param_3[1]) * 2.220446049250313e-16;
        bVar2 = true;
        if ((2.2250738585072014e-308 <= dVar8) && (bVar2 = false, !NAN(dVar8) && !NAN(dVar7))) {
          bVar2 = dVar8 < dVar7;
        }
        if (bVar2) {
          dVar7 = ABS((double)puVar3[2] + (double)param_3[2]) * 2.220446049250313e-16;
          if (dVar7 <= 2.2250738585072014e-308) {
            dVar7 = 2.2250738585072014e-308;
          }
          puVar6 = (ulong *)(ulong)(ABS((double)puVar3[2] - (double)param_3[2]) < dVar7);
          goto LAB_105692310;
        }
      }
      puVar6 = (ulong *)0x0;
    }
  }
LAB_105692310:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10569224c; end: 10569232b; -[SCInteractionJankStats isEqual:] */

bool FUN_10569224c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
    if ((param_1 != 0) && (param_3 != 0)) {
      uVar2 = param_1;
      _objc_opt_class(param_1);
      uVar3 = param_3;
      _objc_opt_isKindOfClass(param_3,uVar2);
      if ((uVar3 & 1) != 0) {
        dVar5 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
        dVar4 = ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar5) && (bVar1 = false, !NAN(dVar5) && !NAN(dVar4))) {
          bVar1 = dVar5 < dVar4;
        }
        if (bVar1) {
          dVar4 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                  2.220446049250313e-16;
          if (dVar4 <= 2.2250738585072014e-308) {
            dVar4 = 2.2250738585072014e-308;
          }
          bVar1 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10)) < dVar4;
          goto LAB_105692310;
        }
      }
      bVar1 = false;
    }
  }
LAB_105692310:
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10569232c; end: 105692333; -[SCInteractionJankStats totalDuration] */

undefined8 FUN_10569232c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105692334; end: 10569233b; -[SCInteractionJankStats jankDuration] */

undefined8 FUN_105692334(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10569233c; end: 105692403; -[SCBadFrameStatsSnapshot initWithBadFrameBuckets:badFrameDurationMs:hangFrameDurationMs:eventTime:totalFrameCount:totalBadFrameCount:totalHangsCount:mainThreadCpuTimeMs:] */

undefined1 *
FUN_10569233c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_7);
  puStack_68 = PTR_PTR_1126e9948;
  uStack_70 = param_5;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_2;
    *(undefined8 *)((long)puVar1 + 0x20) = param_3;
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    *(undefined8 *)((long)puVar1 + 0x30) = param_9;
    *(undefined8 *)((long)puVar1 + 0x38) = param_10;
    *(undefined8 *)((long)puVar1 + 0x40) = param_4;
  }
  _objc_release(param_7);
  return (undefined1 *)puVar1;
}



/* Entry: 105692404; end: 105692427; -[SCBadFrameStatsSnapshot copyWithZone:] */

undefined8 FUN_105692404(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105692428; end: 10569252b; -[SCBadFrameStatsSnapshot hash] */

undefined8 * FUN_105692428(long param_1,undefined8 param_2,undefined8 *param_3)

{
  ulong uVar1;
  long lVar2;
  bool bVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  double dVar9;
  double dVar10;
  undefined8 uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar7 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_60 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_60 = uStack_60 ^ uStack_60 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_58 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_58 = uStack_58 ^ uStack_58 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_50 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_48 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x28));
  uStack_40 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  lVar2 = *(long *)(param_1 + 0x38);
  lStack_38 = -lVar2;
  if (-1 < lVar2) {
    lStack_38 = lVar2;
  }
  uVar7 = ~*(ulong *)(param_1 + 0x40) + *(ulong *)(param_1 + 0x40) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_30 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  puVar5 = &uStack_68;
  uStack_68 = uVar4;
  func_0x000100505190(puVar5,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar5;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar5 == param_3) {
LAB_10569269c:
    puVar8 = (undefined8 *)0x1;
  }
  else {
    puVar8 = (undefined8 *)0x0;
    if ((puVar5 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1056926a0;
    puVar8 = puVar5;
    _objc_opt_class(puVar5);
    puVar6 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if ((((ulong)puVar6 & 1) != 0) &&
       (((puVar5[5] == param_3[5] && (puVar5[6] == param_3[6])) && (puVar5[7] == param_3[7])))) {
      dVar10 = ABS((double)puVar5[2] - (double)param_3[2]);
      dVar9 = ABS((double)puVar5[2] + (double)param_3[2]) * 2.220446049250313e-16;
      bVar3 = true;
      if ((2.2250738585072014e-308 <= dVar10) && (bVar3 = false, !NAN(dVar10) && !NAN(dVar9))) {
        bVar3 = dVar10 < dVar9;
      }
      if (bVar3) {
        dVar10 = ABS((double)puVar5[3] - (double)param_3[3]);
        dVar9 = ABS((double)puVar5[3] + (double)param_3[3]) * 2.220446049250313e-16;
        bVar3 = true;
        if ((2.2250738585072014e-308 <= dVar10) && (bVar3 = false, !NAN(dVar10) && !NAN(dVar9))) {
          bVar3 = dVar10 < dVar9;
        }
        if (bVar3) {
          dVar10 = ABS((double)puVar5[4] - (double)param_3[4]);
          dVar9 = ABS((double)puVar5[4] + (double)param_3[4]) * 2.220446049250313e-16;
          bVar3 = true;
          if ((2.2250738585072014e-308 <= dVar10) && (bVar3 = false, !NAN(dVar10) && !NAN(dVar9))) {
            bVar3 = dVar10 < dVar9;
          }
          if (bVar3) {
            dVar9 = ABS((double)puVar5[8] - (double)param_3[8]);
            if ((dVar9 < 2.2250738585072014e-308) ||
               (dVar9 < ABS((double)puVar5[8] + (double)param_3[8]) * 2.220446049250313e-16)) {
              puVar8 = (undefined8 *)puVar5[1];
              if (puVar8 != (undefined8 *)param_3[1]) {
                func_0x00010c071ae0();
                goto LAB_1056926a0;
              }
              goto LAB_10569269c;
            }
          }
        }
      }
    }
    puVar8 = (undefined8 *)0x0;
  }
LAB_1056926a0:
  _objc_release(param_3);
  return puVar8;
}



/* Entry: 10569252c; end: 1056926bb; -[SCBadFrameStatsSnapshot isEqual:] */

long FUN_10569252c(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10569269c:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1056926a0;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28) &&
         (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))) &&
        (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
        dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
          dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if (bVar1) {
            dVar5 = ABS(*(double *)(param_1 + 0x40) - *(double *)(param_3 + 0x40));
            if ((dVar5 < 2.2250738585072014e-308) ||
               (dVar5 < ABS(*(double *)(param_1 + 0x40) + *(double *)(param_3 + 0x40)) *
                        2.220446049250313e-16)) {
              lVar4 = *(long *)(param_1 + 8);
              if (lVar4 != *(long *)(param_3 + 8)) {
                func_0x00010c071ae0();
                goto LAB_1056926a0;
              }
              goto LAB_10569269c;
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_1056926a0:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 1056926bc; end: 1056926c3; -[SCBadFrameStatsSnapshot badFrameBuckets] */

undefined8 FUN_1056926bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1056926c4; end: 1056926cb; -[SCBadFrameStatsSnapshot badFrameDurationMs] */

undefined8 FUN_1056926c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1056926cc; end: 1056926d3; -[SCBadFrameStatsSnapshot hangFrameDurationMs] */

undefined8 FUN_1056926cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1056926d4; end: 1056926db; -[SCBadFrameStatsSnapshot eventTime] */

undefined8 FUN_1056926d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1056926dc; end: 1056926e3; -[SCBadFrameStatsSnapshot totalFrameCount] */

undefined8 FUN_1056926dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 1056926e4; end: 1056926eb; -[SCBadFrameStatsSnapshot totalBadFrameCount] */

undefined8 FUN_1056926e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 1056926ec; end: 1056926f3; -[SCBadFrameStatsSnapshot totalHangsCount] */

undefined8 FUN_1056926ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1056926f4; end: 1056926fb; -[SCBadFrameStatsSnapshot mainThreadCpuTimeMs] */

undefined8 FUN_1056926f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1056926fc; end: 105692707; -[SCBadFrameStatsSnapshot .cxx_destruct] */

void FUN_1056926fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105692708; end: 10569277b; -[SCAppBadFrameBlizzardLogger initWithLogger:] */

undefined1 * FUN_105692708(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9950;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10569277c; end: 105692a87; -[SCAppBadFrameBlizzardLogger logAppBadFrameWithParams:] */

void FUN_10569277c(double param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126bcb68;
  _objc_opt_new(PTR_PTR_1126bcb68);
  lVar2 = param_4;
  func_0x00010bf0e960(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16b8e0(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c110280(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e1840(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010c27ee80(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c21b280(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_4;
  func_0x00010bf9a4c0(param_4);
  func_0x00010c197d80(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010c276580(param_4);
  func_0x00010c2183c0(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010c276440(param_4);
  func_0x00010c218300(puVar1,param_3,lVar2);
  func_0x00010bf99d80(param_4);
  func_0x00010c1977e0(puVar1,param_3,(long)param_1);
  lVar2 = param_4;
  func_0x00010c0f1100(param_4);
  func_0x00010c1d8060(puVar1,param_3,lVar2);
  func_0x00010bf14fe0(param_4);
  func_0x00010c16eac0(puVar1,param_3,(long)param_1);
  lVar2 = param_4;
  func_0x00010c276040(param_4);
  func_0x00010c217fc0(puVar1,param_3,lVar2);
  func_0x00010bfd36e0(param_4);
  func_0x00010c1a5580(puVar1,param_3,(long)param_1);
  lVar2 = param_4;
  func_0x00010c2766c0(param_4);
  func_0x00010c218420(puVar1,param_3,lVar2);
  func_0x00010bfd36c0(param_4);
  func_0x00010c1a5560(puVar1,param_3,(long)param_1);
  func_0x00010c0b6d60(param_4);
  func_0x00010c1c1a80(puVar1,param_3,(long)param_1);
  lVar2 = param_4;
  func_0x00010c085360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_4;
    func_0x00010c085360(param_4);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c067fc0();
    func_0x00010c1b6540(puVar1,param_3,lVar3);
    _objc_release(lVar2);
  }
  lVar2 = param_4;
  func_0x00010bfb6940(param_4);
  func_0x00010c19f120(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010bfb6960(param_4);
  func_0x00010c19f140(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010bfb6980(param_4);
  func_0x00010c19f160(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010bfb69a0(param_4);
  func_0x00010c19f180(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010bfb69c0(param_4);
  func_0x00010c19f1a0(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010bfb69e0(param_4);
  func_0x00010c19f1c0(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010bfb6a00(param_4);
  func_0x00010c19f1e0(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010bfb6a20(param_4);
  func_0x00010c19f200(puVar1,param_3,lVar2);
  lVar2 = param_4;
  func_0x00010bfb6a40(param_4);
  func_0x00010c19f220(puVar1,param_3,lVar2);
  puVar4 = PTR_PTR_1126b2930;
  func_0x00010bf5e640(PTR_PTR_1126b2930);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010bf22880();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d69a0(puVar1,param_3,puVar5);
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar6 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e60();
  _objc_release(uVar6);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105692a88; end: 105692a93; -[SCAppBadFrameBlizzardLogger .cxx_destruct] */

void FUN_105692a88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105692a94; end: 105692c7f; -[SCAppBadFrameLogParameters initWithBadFrameDurationMs:hangFrameDurationMs:pageDurationSec:eventDurationMs:jankFrameDurationMs:pageDurationBucket:eventVisitNum:totalFrameCount:totalDroppedFrameCount:totalBadFrameCount:totalHangsCount:hangThresholdMs:mainThreadCpuTimeMs:frameBucket0:frameBucket1:frameBucket2:frameBucket3:frameBucket4:frameBucket5:frameBucket6:frameBucket7:frameBucket8:attribution:prev_attribution:uiEventName:] */

undefined8 *
FUN_105692a94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  _objc_retain(param_9);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  puStack_a0 = PTR_PTR_1126e9958;
  puVar1 = &uStack_a8;
  uStack_a8 = param_7;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar1[1] = param_1;
    puVar1[2] = param_2;
    puVar1[3] = param_3;
    puVar1[4] = param_4;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    puVar1[6] = param_10;
    puVar1[7] = param_11;
    puVar1[8] = param_12;
    puVar1[9] = param_13;
    puVar1[10] = param_14;
    puVar1[0xb] = param_15;
    puVar1[0xc] = param_5;
    puVar1[0xd] = param_6;
    puVar1[0xe] = param_16;
    puVar1[0xf] = param_17;
    puVar1[0x10] = param_18;
    puVar1[0x11] = param_19;
    puVar1[0x12] = param_20;
    puVar1[0x13] = param_21;
    puVar1[0x14] = param_22;
    puVar1[0x15] = param_23;
    puVar1[0x16] = param_24;
    uVar2 = param_25;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x17];
    puVar1[0x17] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_26;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x18];
    puVar1[0x18] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_27;
    func_0x00010bf51e00();
    uVar3 = puVar1[0x19];
    puVar1[0x19] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_9);
  return puVar1;
}



/* Entry: 105692c80; end: 105692ca3; -[SCAppBadFrameLogParameters copyWithZone:] */

undefined8 FUN_105692c80(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105692ca4; end: 105692e53; -[SCAppBadFrameLogParameters hash] */

ulong * FUN_105692ca4(long param_1,undefined8 param_2,undefined1 *param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 *puVar8;
  double dVar9;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar4 = &uStack_100;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar7 = ~*(ulong *)(param_1 + 8) + *(ulong *)(param_1 + 8) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_100 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_100 = uStack_100 ^ uStack_100 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_f8 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_f8 = uStack_f8 ^ uStack_f8 >> 0x16;
  uVar7 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_f0 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_f0 = uStack_f0 ^ uStack_f0 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_e8 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_e8 = uStack_e8 ^ uStack_e8 >> 0x16;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfde980();
  uStack_d8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x30));
  uStack_d0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x38));
  uStack_c8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x40));
  uStack_c0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x48));
  uStack_b8 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x50));
  uStack_b0 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x58));
  uStack_98 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x70));
  uStack_90 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x78));
  uStack_88 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x80));
  uStack_80 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x88));
  uStack_78 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x90));
  uStack_70 = MP_INT_ABS(*(undefined8 *)(param_1 + 0x98));
  uVar7 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar1 = ~*(ulong *)(param_1 + 0x68) + *(ulong *)(param_1 + 0x68) * 0x40000;
  uVar7 = (uVar7 ^ uVar7 >> 0x1f) * 0x15;
  uStack_a8 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_a8 = uStack_a8 ^ uStack_a8 >> 0x16;
  uVar7 = (uVar1 ^ uVar1 >> 0x1f) * 0x15;
  uStack_a0 = (uVar7 ^ uVar7 >> 0xb) * 0x41;
  uStack_a0 = uStack_a0 ^ uStack_a0 >> 0x16;
  uStack_68 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xa0));
  uStack_60 = MP_INT_ABS(*(undefined8 *)(param_1 + 0xa8));
  lVar6 = *(long *)(param_1 + 0xb0);
  uStack_50 = *(undefined8 *)(param_1 + 0xb8);
  lStack_58 = -lVar6;
  if (-1 < lVar6) {
    lStack_58 = lVar6;
  }
  uStack_e0 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0xc0);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 200);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_40 = uVar3;
  func_0x000100505190(&uStack_100,0x19);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar4;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar4 == (ulong *)param_3) {
LAB_105693144:
    puVar8 = (undefined1 *)0x1;
  }
  else {
    puVar8 = (undefined1 *)0x0;
    if ((puVar4 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105693150;
    puVar8 = (undefined1 *)puVar4;
    _objc_opt_class(puVar4);
    puVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar8);
    if (((((((ulong)puVar5 & 1) != 0) &&
          ((((*(long *)((long)puVar4 + 0x30) == *(long *)(param_3 + 0x30) &&
             (*(long *)((long)puVar4 + 0x38) == *(long *)(param_3 + 0x38))) &&
            (*(long *)((long)puVar4 + 0x40) == *(long *)(param_3 + 0x40))) &&
           ((*(long *)((long)puVar4 + 0x48) == *(long *)(param_3 + 0x48) &&
            (*(long *)((long)puVar4 + 0x50) == *(long *)(param_3 + 0x50))))))) &&
         (*(long *)((long)puVar4 + 0x58) == *(long *)(param_3 + 0x58))) &&
        ((((*(long *)((long)puVar4 + 0x70) == *(long *)(param_3 + 0x70) &&
           (*(long *)((long)puVar4 + 0x78) == *(long *)(param_3 + 0x78))) &&
          ((*(long *)((long)puVar4 + 0x80) == *(long *)(param_3 + 0x80) &&
           (((*(long *)((long)puVar4 + 0x88) == *(long *)(param_3 + 0x88) &&
             (*(long *)((long)puVar4 + 0x90) == *(long *)(param_3 + 0x90))) &&
            (*(long *)((long)puVar4 + 0x98) == *(long *)(param_3 + 0x98))))))) &&
         ((*(long *)((long)puVar4 + 0xa0) == *(long *)(param_3 + 0xa0) &&
          (*(long *)((long)puVar4 + 0xa8) == *(long *)(param_3 + 0xa8))))))) &&
       (*(long *)((long)puVar4 + 0xb0) == *(long *)(param_3 + 0xb0))) {
      dVar9 = ABS(*(double *)((long)puVar4 + 8) - *(double *)(param_3 + 8));
      if ((dVar9 < 2.2250738585072014e-308) ||
         (dVar9 < ABS(*(double *)((long)puVar4 + 8) + *(double *)(param_3 + 8)) *
                  2.220446049250313e-16)) {
        dVar9 = ABS(*(double *)((long)puVar4 + 0x10) - *(double *)(param_3 + 0x10));
        if ((dVar9 < 2.2250738585072014e-308) ||
           (dVar9 < ABS(*(double *)((long)puVar4 + 0x10) + *(double *)(param_3 + 0x10)) *
                    2.220446049250313e-16)) {
          dVar9 = ABS(*(double *)((long)puVar4 + 0x18) - *(double *)(param_3 + 0x18));
          if ((dVar9 < 2.2250738585072014e-308) ||
             (dVar9 < ABS(*(double *)((long)puVar4 + 0x18) + *(double *)(param_3 + 0x18)) *
                      2.220446049250313e-16)) {
            dVar9 = ABS(*(double *)((long)puVar4 + 0x20) - *(double *)(param_3 + 0x20));
            if ((dVar9 < 2.2250738585072014e-308) ||
               (dVar9 < ABS(*(double *)((long)puVar4 + 0x20) + *(double *)(param_3 + 0x20)) *
                        2.220446049250313e-16)) {
              dVar9 = ABS(*(double *)((long)puVar4 + 0x60) - *(double *)(param_3 + 0x60));
              if ((dVar9 < 2.2250738585072014e-308) ||
                 (dVar9 < ABS(*(double *)((long)puVar4 + 0x60) + *(double *)(param_3 + 0x60)) *
                          2.220446049250313e-16)) {
                dVar9 = ABS(*(double *)((long)puVar4 + 0x68) - *(double *)(param_3 + 0x68));
                if (((((dVar9 < 2.2250738585072014e-308) ||
                      (dVar9 < ABS(*(double *)((long)puVar4 + 0x68) + *(double *)(param_3 + 0x68)) *
                               2.220446049250313e-16)) &&
                     ((lVar6 = *(long *)((long)puVar4 + 0x28), lVar6 == *(long *)(param_3 + 0x28) ||
                      (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                    ((lVar6 = *(long *)((long)puVar4 + 0xb8), lVar6 == *(long *)(param_3 + 0xb8) ||
                     (func_0x00010c071ae0(), (int)lVar6 != 0)))) &&
                   ((lVar6 = *(long *)((long)puVar4 + 0xc0), lVar6 == *(long *)(param_3 + 0xc0) ||
                    (func_0x00010c071ae0(), (int)lVar6 != 0)))) {
                  puVar8 = *(undefined1 **)((long)puVar4 + 200);
                  if (puVar8 != *(undefined1 **)(param_3 + 200)) {
                    func_0x00010c071ae0();
                    goto LAB_105693150;
                  }
                  goto LAB_105693144;
                }
              }
            }
          }
        }
      }
    }
    puVar8 = (undefined1 *)0x0;
  }
LAB_105693150:
  _objc_release(param_3);
  return (ulong *)puVar8;
}



/* Entry: 105692e54; end: 10569316b; -[SCAppBadFrameLogParameters isEqual:] */

long FUN_105692e54(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  double dVar4;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105693144:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105693150;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((((((uVar2 & 1) != 0) &&
          ((((*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30) &&
             (*(long *)(param_1 + 0x38) == *(long *)(param_3 + 0x38))) &&
            (*(long *)(param_1 + 0x40) == *(long *)(param_3 + 0x40))) &&
           ((*(long *)(param_1 + 0x48) == *(long *)(param_3 + 0x48) &&
            (*(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50))))))) &&
         (*(long *)(param_1 + 0x58) == *(long *)(param_3 + 0x58))) &&
        ((((*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70) &&
           (*(long *)(param_1 + 0x78) == *(long *)(param_3 + 0x78))) &&
          ((*(long *)(param_1 + 0x80) == *(long *)(param_3 + 0x80) &&
           (((*(long *)(param_1 + 0x88) == *(long *)(param_3 + 0x88) &&
             (*(long *)(param_1 + 0x90) == *(long *)(param_3 + 0x90))) &&
            (*(long *)(param_1 + 0x98) == *(long *)(param_3 + 0x98))))))) &&
         ((*(long *)(param_1 + 0xa0) == *(long *)(param_3 + 0xa0) &&
          (*(long *)(param_1 + 0xa8) == *(long *)(param_3 + 0xa8))))))) &&
       (*(long *)(param_1 + 0xb0) == *(long *)(param_3 + 0xb0))) {
      dVar4 = ABS(*(double *)(param_1 + 8) - *(double *)(param_3 + 8));
      if ((dVar4 < 2.2250738585072014e-308) ||
         (dVar4 < ABS(*(double *)(param_1 + 8) + *(double *)(param_3 + 8)) * 2.220446049250313e-16))
      {
        dVar4 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
        if ((dVar4 < 2.2250738585072014e-308) ||
           (dVar4 < ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) *
                    2.220446049250313e-16)) {
          dVar4 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
          if ((dVar4 < 2.2250738585072014e-308) ||
             (dVar4 < ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) *
                      2.220446049250313e-16)) {
            dVar4 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
            if ((dVar4 < 2.2250738585072014e-308) ||
               (dVar4 < ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) *
                        2.220446049250313e-16)) {
              dVar4 = ABS(*(double *)(param_1 + 0x60) - *(double *)(param_3 + 0x60));
              if ((dVar4 < 2.2250738585072014e-308) ||
                 (dVar4 < ABS(*(double *)(param_1 + 0x60) + *(double *)(param_3 + 0x60)) *
                          2.220446049250313e-16)) {
                dVar4 = ABS(*(double *)(param_1 + 0x68) - *(double *)(param_3 + 0x68));
                if (((((dVar4 < 2.2250738585072014e-308) ||
                      (dVar4 < ABS(*(double *)(param_1 + 0x68) + *(double *)(param_3 + 0x68)) *
                               2.220446049250313e-16)) &&
                     ((lVar3 = *(long *)(param_1 + 0x28), lVar3 == *(long *)(param_3 + 0x28) ||
                      (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                    ((lVar3 = *(long *)(param_1 + 0xb8), lVar3 == *(long *)(param_3 + 0xb8) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)))) &&
                   ((lVar3 = *(long *)(param_1 + 0xc0), lVar3 == *(long *)(param_3 + 0xc0) ||
                    (func_0x00010c071ae0(), (int)lVar3 != 0)))) {
                  lVar3 = *(long *)(param_1 + 200);
                  if (lVar3 != *(long *)(param_3 + 200)) {
                    func_0x00010c071ae0();
                    goto LAB_105693150;
                  }
                  goto LAB_105693144;
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105693150:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10569316c; end: 105693173; -[SCAppBadFrameLogParameters badFrameDurationMs] */

undefined8 FUN_10569316c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105693174; end: 10569317b; -[SCAppBadFrameLogParameters hangFrameDurationMs] */

undefined8 FUN_105693174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10569317c; end: 105693183; -[SCAppBadFrameLogParameters pageDurationSec] */

undefined8 FUN_10569317c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105693184; end: 10569318b; -[SCAppBadFrameLogParameters eventDurationMs] */

undefined8 FUN_105693184(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10569318c; end: 105693193; -[SCAppBadFrameLogParameters jankFrameDurationMs] */

undefined8 FUN_10569318c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105693194; end: 10569319b; -[SCAppBadFrameLogParameters pageDurationBucket] */

undefined8 FUN_105693194(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10569319c; end: 1056931a3; -[SCAppBadFrameLogParameters eventVisitNum] */

undefined8 FUN_10569319c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1056931a4; end: 1056931ab; -[SCAppBadFrameLogParameters totalFrameCount] */

undefined8 FUN_1056931a4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1056931ac; end: 1056931b3; -[SCAppBadFrameLogParameters totalDroppedFrameCount] */

undefined8 FUN_1056931ac(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1056931b4; end: 1056931bb; -[SCAppBadFrameLogParameters totalBadFrameCount] */

undefined8 FUN_1056931b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1056931bc; end: 1056931c3; -[SCAppBadFrameLogParameters totalHangsCount] */

undefined8 FUN_1056931bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1056931c4; end: 1056931cb; -[SCAppBadFrameLogParameters hangThresholdMs] */

undefined8 FUN_1056931c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1056931cc; end: 1056931d3; -[SCAppBadFrameLogParameters mainThreadCpuTimeMs] */

undefined8 FUN_1056931cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1056931d4; end: 1056931db; -[SCAppBadFrameLogParameters frameBucket0] */

undefined8 FUN_1056931d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1056931dc; end: 1056931e3; -[SCAppBadFrameLogParameters frameBucket1] */

undefined8 FUN_1056931dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1056931e4; end: 1056931eb; -[SCAppBadFrameLogParameters frameBucket2] */

undefined8 FUN_1056931e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1056931ec; end: 1056931f3; -[SCAppBadFrameLogParameters frameBucket3] */

undefined8 FUN_1056931ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1056931f4; end: 1056931fb; -[SCAppBadFrameLogParameters frameBucket4] */

undefined8 FUN_1056931f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1056931fc; end: 105693203; -[SCAppBadFrameLogParameters frameBucket5] */

undefined8 FUN_1056931fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 105693204; end: 10569320b; -[SCAppBadFrameLogParameters frameBucket6] */

undefined8 FUN_105693204(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa0);
}



/* Entry: 10569320c; end: 105693213; -[SCAppBadFrameLogParameters frameBucket7] */

undefined8 FUN_10569320c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xa8);
}



/* Entry: 105693214; end: 10569321b; -[SCAppBadFrameLogParameters frameBucket8] */

undefined8 FUN_105693214(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb0);
}



/* Entry: 10569321c; end: 105693223; -[SCAppBadFrameLogParameters attribution] */

undefined8 FUN_10569321c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xb8);
}



/* Entry: 105693224; end: 10569322b; -[SCAppBadFrameLogParameters prev_attribution] */

undefined8 FUN_105693224(long param_1)

{
  return *(undefined8 *)(param_1 + 0xc0);
}



/* Entry: 10569322c; end: 105693233; -[SCAppBadFrameLogParameters uiEventName] */

undefined8 FUN_10569322c(long param_1)

{
  return *(undefined8 *)(param_1 + 200);
}



/* Entry: 105693234; end: 10569327b; -[SCAppBadFrameLogParameters .cxx_destruct] */

void FUN_105693234(long param_1)

{
  _objc_storeStrong(param_1 + 200,0);
  _objc_storeStrong(param_1 + 0xc0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x28,0);
  return;
}



/* Entry: 10569327c; end: 105693297; +[SCAppBadFrameLogParametersBuilder appBadFrameLogParameters] */

void FUN_10569327c(void)

{
  _objc_alloc_init(PTR_PTR_1126bcb58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105693298; end: 105693777; +[SCAppBadFrameLogParametersBuilder appBadFrameLogParametersFromExistingAppBadFrameLogParameters:] */

void FUN_105693298(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined8 uVar27;
  undefined *puVar28;
  undefined8 uVar29;
  undefined *puVar30;
  
  puVar1 = PTR_PTR_1126bcb58;
  _objc_retain(param_3);
  func_0x00010bf04e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf14fe0(param_3);
  puVar2 = puVar1;
  func_0x00010c2a9120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd36c0(param_3);
  puVar3 = puVar2;
  func_0x00010c2af080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1120(param_3);
  puVar4 = puVar3;
  func_0x00010c2b5340();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99d80(param_3);
  puVar5 = puVar4;
  func_0x00010c2ad580();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c085360();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2b1e80(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0f1100(param_3);
  puVar9 = puVar7;
  func_0x00010c2b5320(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf9a4c0(param_3);
  puVar10 = puVar9;
  func_0x00010c2ad600(puVar9,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c276580(param_3);
  puVar11 = puVar10;
  func_0x00010c2bb840(puVar10,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c276440(param_3);
  puVar12 = puVar11;
  func_0x00010c2bb7c0(puVar11,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c276040(param_3);
  puVar13 = puVar12;
  func_0x00010c2bb7a0(puVar12,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c2766c0(param_3);
  puVar14 = puVar13;
  func_0x00010c2bb860(puVar13,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfd36e0(param_3);
  puVar15 = puVar14;
  func_0x00010c2af0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b6d60(param_3);
  puVar16 = puVar15;
  func_0x00010c2b3500();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bfb6940(param_3);
  puVar17 = puVar16;
  func_0x00010c2ae4e0(puVar16,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bfb6960(param_3);
  puVar18 = puVar17;
  func_0x00010c2ae500(puVar17,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bfb6980(param_3);
  puVar19 = puVar18;
  func_0x00010c2ae520(puVar18,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bfb69a0(param_3);
  puVar20 = puVar19;
  func_0x00010c2ae540(puVar19,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bfb69c0(param_3);
  puVar21 = puVar20;
  func_0x00010c2ae560(puVar20,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bfb69e0(param_3);
  puVar22 = puVar21;
  func_0x00010c2ae580(puVar21,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bfb6a00(param_3);
  puVar23 = puVar22;
  func_0x00010c2ae5a0(puVar22,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bfb6a20(param_3);
  puVar24 = puVar23;
  func_0x00010c2ae5c0(puVar23,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bfb6a40(param_3);
  puVar25 = puVar24;
  func_0x00010c2ae5e0(puVar24,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010bf0e960(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar26 = puVar25;
  func_0x00010c2a8ae0(puVar25,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar27 = param_3;
  func_0x00010c110280(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar28 = puVar26;
  func_0x00010c2b5ca0(puVar26,param_2,uVar27);
  _objc_retainAutoreleasedReturnValue();
  uVar29 = param_3;
  func_0x00010c27ee80(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar30 = puVar28;
  func_0x00010c2bbd80(puVar28,param_2,uVar29);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar29);
  _objc_release(puVar28);
  _objc_release(uVar27);
  _objc_release(puVar26);
  _objc_release(uVar8);
  _objc_release(puVar25);
  _objc_release(puVar24);
  _objc_release(puVar23);
  _objc_release(puVar22);
  _objc_release(puVar21);
  _objc_release(puVar20);
  _objc_release(puVar19);
  _objc_release(puVar18);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar30);
  return;
}



/* Entry: 105693778; end: 1056937fb; -[SCAppBadFrameLogParametersBuilder build] */

void FUN_105693778(long param_1)

{
  _objc_alloc(PTR_PTR_1126bcb70);
  func_0x00010bff67c0(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                      *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                      *(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1056937fc; end: 105693803; -[SCAppBadFrameLogParametersBuilder withBadFrameDurationMs:] */

void FUN_1056937fc(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 8) = param_1;
  return;
}



/* Entry: 105693804; end: 10569380b; -[SCAppBadFrameLogParametersBuilder withHangFrameDurationMs:] */

void FUN_105693804(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x10) = param_1;
  return;
}



/* Entry: 10569380c; end: 105693813; -[SCAppBadFrameLogParametersBuilder withPageDurationSec:] */

void FUN_10569380c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 105693814; end: 10569381b; -[SCAppBadFrameLogParametersBuilder withEventDurationMs:] */

void FUN_105693814(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x20) = param_1;
  return;
}



/* Entry: 10569381c; end: 105693853; -[SCAppBadFrameLogParametersBuilder withJankFrameDurationMs:] */

long FUN_10569381c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 105693854; end: 10569385b; -[SCAppBadFrameLogParametersBuilder withPageDurationBucket:] */

void FUN_105693854(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x30) = param_3;
  return;
}



/* Entry: 10569385c; end: 105693863; -[SCAppBadFrameLogParametersBuilder withEventVisitNum:] */

void FUN_10569385c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 105693864; end: 10569386b; -[SCAppBadFrameLogParametersBuilder withTotalFrameCount:] */

void FUN_105693864(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x40) = param_3;
  return;
}



/* Entry: 10569386c; end: 105693873; -[SCAppBadFrameLogParametersBuilder withTotalDroppedFrameCount:] */

void FUN_10569386c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x48) = param_3;
  return;
}



/* Entry: 105693874; end: 10569387b; -[SCAppBadFrameLogParametersBuilder withTotalBadFrameCount:] */

void FUN_105693874(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x50) = param_3;
  return;
}



/* Entry: 10569387c; end: 105693883; -[SCAppBadFrameLogParametersBuilder withTotalHangsCount:] */

void FUN_10569387c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Entry: 105693884; end: 10569388b; -[SCAppBadFrameLogParametersBuilder withHangThresholdMs:] */

void FUN_105693884(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x60) = param_1;
  return;
}



/* Entry: 10569388c; end: 105693893; -[SCAppBadFrameLogParametersBuilder withMainThreadCpuTimeMs:] */

void FUN_10569388c(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x68) = param_1;
  return;
}



/* Entry: 105693894; end: 10569389b; -[SCAppBadFrameLogParametersBuilder withFrameBucket0:] */

void FUN_105693894(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x70) = param_3;
  return;
}



/* Entry: 10569389c; end: 1056938a3; -[SCAppBadFrameLogParametersBuilder withFrameBucket1:] */

void FUN_10569389c(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x78) = param_3;
  return;
}



/* Entry: 1056938a4; end: 1056938ab; -[SCAppBadFrameLogParametersBuilder withFrameBucket2:] */

void FUN_1056938a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x80) = param_3;
  return;
}



/* Entry: 1056938ac; end: 1056938b3; -[SCAppBadFrameLogParametersBuilder withFrameBucket3:] */

void FUN_1056938ac(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x88) = param_3;
  return;
}



/* Entry: 1056938b4; end: 1056938bb; -[SCAppBadFrameLogParametersBuilder withFrameBucket4:] */

void FUN_1056938b4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x90) = param_3;
  return;
}



/* Entry: 1056938bc; end: 1056938c3; -[SCAppBadFrameLogParametersBuilder withFrameBucket5:] */

void FUN_1056938bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x98) = param_3;
  return;
}



/* Entry: 1056938c4; end: 1056938cb; -[SCAppBadFrameLogParametersBuilder withFrameBucket6:] */

void FUN_1056938c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa0) = param_3;
  return;
}



/* Entry: 1056938cc; end: 1056938d3; -[SCAppBadFrameLogParametersBuilder withFrameBucket7:] */

void FUN_1056938cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0xa8) = param_3;
  return;
}


