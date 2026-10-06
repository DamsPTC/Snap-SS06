/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066d3c7c; end: 1066d3cf7; -[SCLensExplorerCategoryDynamicFetchingColleague isCacheValid] */

uint FUN_1066d3c7c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bdd1c20();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf04920();
  _objc_release(param_1);
  return (uint)uVar1 ^ 1;
}



/* Entry: 1066d3cf8; end: 1066d3dab;  */

undefined8 FUN_1066d3cf8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf643e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
    lVar1 = param_2;
    func_0x00010bf643e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7ec0(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2d060(uVar3);
    _objc_release(uVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_2);
  return uVar3;
}



/* Entry: 1066d3dac; end: 1066d3f47; -[SCLensExplorerCategoryDynamicFetchingColleague requestItemsForSectionIdentifier:] */

void FUN_1066d3dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bde4940();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0b3ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26fac0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2780c0();
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = lVar2;
    func_0x00010bf643e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfa7ec0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c13cfe0(uVar1);
    _objc_release(uVar6);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1066d3f48; end: 1066d3fa7;  */

void FUN_1066d3f48(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be2f1e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066d3fa8; end: 1066d4033; -[SCLensExplorerCategoryDynamicFetchingColleague refreshItemsForSectionIdentifier:] */

void FUN_1066d3fa8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar2 = param_1;
  func_0x00010bde4940();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = lVar2;
    func_0x00010bf643e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1253a0(uVar4,param_2,lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13cfe0(uVar1,param_2,uVar4,0);
    _objc_release(uVar4);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1066d4034; end: 1066d41cf; -[SCLensExplorerCategoryDynamicFetchingColleague requestTailItemsForSectionIdentifier:] */

void FUN_1066d4034(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010bde4940();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c0b3ae0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0b3ac0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c26fac0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2780c0();
    _objc_initWeak(auStack_58,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar6 = *(undefined8 *)(param_1 + 0x18);
    lVar3 = lVar2;
    func_0x00010bf643e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfaaca0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010c13cfe0(uVar1);
    _objc_release(uVar6);
    _objc_release(lVar3);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar5);
    _objc_release(lVar4);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return;
}



/* Entry: 1066d41d0; end: 1066d422f;  */

void FUN_1066d41d0(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be2f1e0(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066d4230; end: 1066d436f; -[SCLensExplorerCategoryDynamicFetchingColleague _configurationFromSectionIdentifier:] */

void FUN_1066d4230(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  func_0x00010bdd1c20(param_1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x1066d42e8;
  puStack_40 = &UNK_110934a18;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bfb2040(param_1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066d4370; end: 1066d444b; -[SCLensExplorerCategoryDynamicFetchingColleague _handleRequestResult:entryPoint:viewType:] */

void FUN_1066d4370(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1066d444c;
  puStack_70 = &UNK_110934fa8;
  uStack_68 = param_1;
  _objc_retain(param_4);
  puStack_c0 = puVar1;
  uStack_b8 = 0xc2000000;
  uStack_b0 = 0x1066d44a8;
  puStack_a8 = &UNK_11088cdd0;
  uStack_a0 = param_1;
  uStack_98 = param_4;
  uStack_90 = param_5;
  uStack_60 = param_4;
  uStack_58 = param_5;
  _objc_retain(param_4);
  func_0x00010c0c0800(param_3,param_2,&puStack_88,&puStack_c0);
  _objc_release(uStack_98);
  _objc_release(uStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1066d444c; end: 1066d450b;  */

void FUN_1066d444c(long param_1,long param_2)

{
  long lVar1;
  
  func_0x00010c0cc0c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf4d6a0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0a95d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),
             PTR_s_logLensExplorerAppearenceWithEnt_112607f80,*(undefined8 *)(param_1 + 0x28),
             *(undefined8 *)(param_1 + 0x30),lVar1 != 0);
  return;
}



/* Entry: 1066d450c; end: 1066d45e7; -[SCLensExplorerCategoryDynamicFetchingColleague _subscribeToSections:] */

void FUN_1066d450c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  uVar1 = param_3;
  func_0x00010c25ff60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1066d45e8; end: 1066d462f;  */

void FUN_1066d45e8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdc8180();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066d4630; end: 1066d466b; -[SCLensExplorerCategoryDynamicFetchingColleague _avalibleSectionConfigurations] */

void FUN_1066d4630(long param_1)

{
  undefined8 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066d466c; end: 1066d46d3; -[SCLensExplorerCategoryDynamicFetchingColleague _addSectionConfigurations:] */

void FUN_1066d466c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x30);
  uVar1 = param_3;
  func_0x00010bf51e00();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  _objc_release(uVar2);
  _os_unfair_lock_unlock(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066d46d4; end: 1066d473b; -[SCLensExplorerCategoryDynamicFetchingColleague .cxx_destruct] */

void FUN_1066d46d4(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1066d473c; end: 1066d47af; -[SCLensExplorerCategoryPageNetworkMonitoringColleague initWithNetworkConnectivityMonitor:] */

undefined1 * FUN_1066d473c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2800;
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



/* Entry: 1066d47b0; end: 1066d4923; -[SCLensExplorerCategoryPageNetworkMonitoringColleague startMonitoringNetworkRestorationIfNeeded] */

void FUN_1066d47b0(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  if (*(long *)(param_1 + 0x10) == 0) {
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c06f000();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      _objc_initWeak(auStack_48,param_1);
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0d7a00();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfad7a0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar5;
      func_0x00010c268560();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_50,auStack_48);
      uVar7 = uVar6;
      func_0x00010c25ff60();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = *(undefined8 *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = uVar7;
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
  }
  return;
}



/* Entry: 1066d4924; end: 1066d4947;  */

bool FUN_1066d4924(undefined8 param_1,long param_2)

{
  func_0x00010bf5e480(param_2);
  return param_2 - 1U < 0xfffffffffffffffe;
}



/* Entry: 1066d4948; end: 1066d498b;  */

void FUN_1066d4948(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + 0x18;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf7a200();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066d498c; end: 1066d49b7; -[SCLensExplorerCategoryPageNetworkMonitoringColleague stopMonitoringNetworkStatus] */

void FUN_1066d498c(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066d49b8; end: 1066d49cf; -[SCLensExplorerCategoryPageNetworkMonitoringColleague delegate] */

void FUN_1066d49b8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066d49d0; end: 1066d49db; -[SCLensExplorerCategoryPageNetworkMonitoringColleague setDelegate:] */

void FUN_1066d49d0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x18,param_3);
  return;
}



/* Entry: 1066d49dc; end: 1066d4a13; -[SCLensExplorerCategoryPageNetworkMonitoringColleague .cxx_destruct] */

void FUN_1066d49dc(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066d4a14; end: 1066d4a8b; -[SCLensExplorerCellVisibilityStrategy initWithMediator:] */

undefined1 * FUN_1066d4a14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f2808;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    *(undefined8 *)((long)puVar1 + 0x18) = 0x3fe0000000000000;
    *(undefined8 *)((long)puVar1 + 0x10) = 0x3fd0000000000000;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066d4a8c; end: 1066d4a9b; -[SCLensExplorerCellVisibilityStrategy isVisibleCell:visibleFraction:] */

bool FUN_1066d4a8c(double param_1,long param_2)

{
  return *(double *)(param_2 + 0x10) < param_1;
}



/* Entry: 1066d4a9c; end: 1066d4b4f; -[SCLensExplorerCellVisibilityStrategy willDisplayCell:indexPath:visibleFraction:] */

void FUN_1066d4a9c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(double *)(param_2 + 0x10) < param_1) {
    lVar1 = param_2 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c2a61e0();
    _objc_release(lVar1);
  }
  if (*(double *)(param_2 + 0x18) < param_1) {
    param_2 = param_2 + 8;
    _objc_loadWeakRetained(param_2);
    func_0x00010c2a61e0();
    _objc_release(param_2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1066d4b50; end: 1066d4c03; -[SCLensExplorerCellVisibilityStrategy didEndDisplayingCell:indexPath:visibleFraction:] */

void FUN_1066d4b50(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(double *)(param_2 + 0x10) < param_1) {
    lVar1 = param_2 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf75940();
    _objc_release(lVar1);
  }
  if (*(double *)(param_2 + 0x18) < param_1) {
    param_2 = param_2 + 8;
    _objc_loadWeakRetained(param_2);
    func_0x00010bf75940();
    _objc_release(param_2);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1066d4c04; end: 1066d4d0f; -[SCLensExplorerCellVisibilityStrategy processCellVisibilityChange:indexPath:oldVisibleFraction:newVisibleFraction:] */

void FUN_1066d4c04(double param_1,double param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  double dVar4;
  double dVar5;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  dVar4 = *(double *)(param_3 + 0x10);
  bVar1 = false;
  bVar2 = true;
  bVar3 = false;
  if (param_1 <= dVar4) {
    bVar1 = false;
    bVar2 = false;
    bVar3 = true;
    if (!NAN(param_2) && !NAN(dVar4)) {
      bVar1 = param_2 < dVar4;
      bVar2 = param_2 == dVar4;
      bVar3 = false;
    }
  }
  if (bVar2 || bVar1 != bVar3) {
    dVar5 = *(double *)(param_3 + 0x18);
    bVar1 = false;
    bVar2 = true;
    bVar3 = false;
    if (param_1 <= dVar5) {
      bVar1 = false;
      bVar2 = false;
      bVar3 = true;
      if (!NAN(param_2) && !NAN(dVar5)) {
        bVar1 = param_2 < dVar5;
        bVar2 = param_2 == dVar5;
        bVar3 = false;
      }
    }
    if (!bVar2 && bVar1 == bVar3) {
      param_3 = param_3 + 8;
      _objc_loadWeakRetained(param_3);
      goto LAB_1066d4cc4;
    }
    bVar1 = false;
    bVar2 = true;
    if (dVar5 < param_1) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(param_2) && !NAN(dVar5)) {
        bVar1 = param_2 == dVar5;
        bVar2 = dVar5 <= param_2;
      }
    }
    if (!bVar2 || bVar1) {
      param_3 = param_3 + 8;
      _objc_loadWeakRetained(param_3);
    }
    else {
      bVar1 = false;
      bVar2 = true;
      if (dVar4 < param_1) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(param_2) && !NAN(dVar4)) {
          bVar1 = param_2 == dVar4;
          bVar2 = dVar4 <= param_2;
        }
      }
      if (bVar2 && !bVar1) goto LAB_1066d4cd0;
      param_3 = param_3 + 8;
      _objc_loadWeakRetained(param_3);
    }
    func_0x00010bf75940();
  }
  else {
    param_3 = param_3 + 8;
    _objc_loadWeakRetained(param_3);
LAB_1066d4cc4:
    func_0x00010c2a61e0();
  }
  _objc_release(param_3);
LAB_1066d4cd0:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1066d4d10; end: 1066d4d17; -[SCLensExplorerCellVisibilityStrategy .cxx_destruct] */

void FUN_1066d4d10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1066d4d18; end: 1066d4e8b; -[SCLensExplorerCollectionViewColleague initWithMediator:collectionView:visibleCellsTracker:cellVisibilityStrategy:disableReloadAnimations:] */

undefined1 *
FUN_1066d4d18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar2 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126f2810;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar2 + 8),param_3);
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x28);
    *(undefined8 *)((long)puVar2 + 0x28) = param_4;
    _objc_release(uVar3);
    func_0x00010c18b5e0(param_4);
    func_0x00010c189840(param_4);
    func_0x00010c1e04a0(param_4);
    func_0x00010c1e0700(param_4);
    _objc_retain(param_5);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x20);
    *(undefined8 *)((long)puVar2 + 0x20) = param_5;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x38);
    *(undefined8 *)((long)puVar2 + 0x38) = param_6;
    _objc_release(uVar3);
    uVar1 = (undefined1)*(undefined8 *)((long)puVar2 + 0x20);
    func_0x00010c137900();
    *(undefined1 *)((long)puVar2 + 0x40) = uVar1;
    *(undefined1 *)((long)puVar2 + 0x41) = param_7;
    uVar3 = *(undefined8 *)((long)puVar2 + 0x30);
    *(undefined ***)((long)puVar2 + 0x30) = &PTR____CFConstantStringClassReference_110e59758;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)((long)puVar2 + 0x28);
    _objc_opt_class(PTR__OBJC_CLASS___UICollectionViewCell_1126b48a8);
    func_0x00010c126000(uVar3);
    func_0x00010beae740(puVar2);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar2;
}



/* Entry: 1066d4e8c; end: 1066d504f; -[SCLensExplorerCollectionViewColleague _setupObservables] */

void FUN_1066d4e8c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  *(undefined **)(param_1 + 0x48) = puVar1;
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x50);
  *(undefined **)(param_1 + 0x50) = puVar1;
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  *(undefined **)(param_1 + 0x58) = puVar1;
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126ae568;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x60);
  *(undefined **)(param_1 + 0x60) = puVar1;
  _objc_release(uVar5);
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined **)(param_1 + 0x10) = puVar1;
  _objc_release(uVar5);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010c156bc0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0e0ec0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  lVar4 = lVar3;
  func_0x00010c25ff60(lVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar5);
  return;
}



/* Entry: 1066d5050; end: 1066d509f;  */

void FUN_1066d5050(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be01820(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066d50a0; end: 1066d5383; -[SCLensExplorerCollectionViewColleague _didUpdateSections:] */

void FUN_1066d50a0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_3);
      }
      lVar9 = *(long *)(lVar7 * 8);
      lVar3 = lVar9;
      func_0x00010c125f20(lVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf97ce0();
      _objc_release(lVar3);
      func_0x00010c127220();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar9;
      func_0x00010bf52a60();
      lVar2 = lRam0000000000000000;
      while (lVar3 != 0) {
        lVar8 = 0;
        do {
          if (lRam0000000000000000 != lVar2) {
            _objc_enumerationMutation(lVar9);
          }
          uVar10 = *(undefined8 *)(lVar8 * 8);
          uVar11 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c29bfc0(uVar10);
          uVar4 = uVar10;
          func_0x00010c29d2e0(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c13fda0(uVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c126060(uVar11);
          _objc_release(uVar10);
          _objc_release(uVar4);
          lVar8 = lVar8 + 1;
        } while (lVar3 != lVar8);
        lVar3 = lVar9;
        func_0x00010bf52a60();
      }
      _objc_release(lVar9);
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar5);
    lVar5 = param_3;
    func_0x00010bf52a60();
  }
  lVar7 = *(long *)(param_1 + 0x18);
  _objc_retain(lVar7);
  lVar5 = lVar7;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar5 != 0) {
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar7);
      }
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
    lVar5 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  lVar5 = *(long *)(param_1 + 0x18);
  *(long *)(param_1 + 0x18) = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c126010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(lVar5 + 0x20) + 0x28),
             PTR_s_registerClass_forCellWithReuseId_112627220);
  return;
}



/* Entry: 1066d5384; end: 1066d5393;  */

void FUN_1066d5384(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c126010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),
             PTR_s_registerClass_forCellWithReuseId_112627220,param_3,param_2);
  return;
}



/* Entry: 1066d5394; end: 1066d546f; -[SCLensExplorerCollectionViewColleague _cellIsPlaceholderAtIndexPath:inCollectionView:] */

bool FUN_1066d5394(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5,
                  undefined8 param_6,long param_7,long param_8)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  if (((*(char *)(param_5 + 0x40) == '\x01') && (param_8 == *(long *)(param_5 + 0x28))) &&
     (lVar1 = param_7, func_0x00010c08fa60(), lVar1 == 2)) {
    lVar1 = param_8;
    func_0x00010bf408e0(param_8);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08c980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    func_0x00010bfb68e0(lVar2);
    bVar3 = param_4 == *(double *)(PTR__CGSizeZero_110347620 + 8) &&
            param_3 == *(double *)PTR__CGSizeZero_110347620;
    _objc_release(lVar2);
  }
  else {
    bVar3 = false;
  }
  _objc_release(param_8);
  _objc_release(param_7);
  return bVar3;
}



/* Entry: 1066d5470; end: 1066d5477; -[SCLensExplorerCollectionViewColleague reloadData] */

void FUN_1066d5470(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_reloadData_112627cf8)
  ;
  return;
}



/* Entry: 1066d5478; end: 1066d547f; -[SCLensExplorerCollectionViewColleague reloadItemsAtIndexPaths:] */

void FUN_1066d5478(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_reloadItemsAtIndexPaths__112627d98);
  return;
}



/* Entry: 1066d5480; end: 1066d55e3; -[SCLensExplorerCollectionViewColleague performBatchUpdates:completion:] */

void FUN_1066d5480(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(char *)(param_1 + 0x41) == '\x01') {
    func_0x00010c168420(PTR__OBJC_CLASS___UIView_1126aec20);
  }
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f8420(uVar1);
  func_0x00010c168420(PTR__OBJC_CLASS___UIView_1126aec20);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066d55e4; end: 1066d5657;  */

void FUN_1066d55e4(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x20), lVar2 != 0)) {
    (**(code **)(lVar2 + 0x10))(lVar2,*(undefined8 *)(lVar1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1066d5658; end: 1066d5727; -[SCLensExplorerCollectionViewColleague scrollToItemIfPossibleAtIndexPath:] */

void FUN_1066d5658(double param_1,undefined8 param_2,double param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  if (param_6 != 0) {
    lVar1 = *(long *)(param_4 + 0x28);
    func_0x00010c08c980(lVar1,param_5,param_6);
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      func_0x00010bfb68e0(lVar1);
      param_3 = param_1 + param_3;
      func_0x00010bf20c00(*(undefined8 *)(param_4 + 0x28));
      _CGRectGetWidth();
      if (param_3 <= param_1) {
        func_0x00010bf4c7c0(*(undefined8 *)(param_4 + 0x28));
        uVar2 = *(undefined8 *)(param_4 + 0x28);
        func_0x00010bf4cdc0(uVar2);
        func_0x00010c182300(uVar2,param_5,0);
      }
      else {
        func_0x00010c1525a0(*(undefined8 *)(param_4 + 0x28),param_5,param_6,0x10,0);
      }
    }
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_6);
  return;
}



/* Entry: 1066d5728; end: 1066d58a7; -[SCLensExplorerCollectionViewColleague visibleCells] */

void FUN_1066d5728(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c29fe60(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_alloc();
  uVar4 = uVar2;
  func_0x00010bf529e0(uVar2);
  func_0x00010bffc4a0(puVar3,param_2,uVar4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1066d5800;
  puStack_48 = &UNK_110935018;
  lStack_40 = param_1;
  _objc_retain();
  puStack_38 = puVar3;
  func_0x00010bf97ce0(uVar2,param_2,&puStack_60);
  puVar1 = puStack_38;
  _objc_retain(puVar3);
  _objc_release(puVar1);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066d58a8; end: 1066d58b3; -[SCLensExplorerCollectionViewColleague allCells] */

void FUN_1066d58a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c29fe70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_visibleItemsInCollectionView__1126859c0,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1066d58b4; end: 1066d5ac3; -[SCLensExplorerCollectionViewColleague collectionViewWillAppear] */

void FUN_1066d58b4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_5;
  func_0x00010beffc80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar6 != 0) {
    dVar14 = *(double *)PTR__CGSizeZero_110347620;
    dVar15 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        lVar13 = lVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0();
        bVar3 = false;
        if ((param_3 == dVar14) && (bVar3 = false, !NAN(param_4) && !NAN(dVar15))) {
          bVar3 = param_4 == dVar15;
        }
        if (!bVar3) {
          lVar7 = param_5 + 8;
          _objc_loadWeakRetained(lVar7);
          func_0x00010bf46d20();
          _objc_release(lVar7);
          lVar7 = param_5 + 8;
          _objc_loadWeakRetained(lVar7);
          func_0x00010c2a6020();
          _objc_release(lVar7);
          puVar2 = PTR_DAT_1126a55c0;
          _objc_retain(lVar13);
          lVar8 = lVar13;
          func_0x00010010fab4(lVar13,puVar2);
          lVar7 = lVar13;
          if ((int)lVar8 == 0) {
            lVar7 = 0;
          }
          _objc_retain(lVar7);
          _objc_release(lVar13);
          if (lVar7 != 0) {
            func_0x00010bddc500(param_5);
            func_0x00010c2239e0(lVar13);
            uVar11 = *(undefined8 *)(param_5 + 0x38);
            func_0x00010c29fda0(lVar13);
            func_0x00010c2a6040(uVar11);
          }
          _objc_release(lVar7);
        }
        _objc_release(lVar13);
        lVar12 = lVar12 + 1;
      } while (lVar6 != lVar12);
      lVar6 = lVar5;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(lVar5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = lVar4;
  func_0x00010beffc80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar6;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar10 != 0) {
    dVar14 = *(double *)PTR__CGSizeZero_110347620;
    dVar15 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    do {
      lVar13 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar6);
        }
        lVar7 = lVar5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0();
        bVar3 = false;
        if ((param_3 == dVar14) && (bVar3 = false, !NAN(param_4) && !NAN(dVar15))) {
          bVar3 = param_4 == dVar15;
        }
        if (!bVar3) {
          lVar8 = lVar4 + 8;
          _objc_loadWeakRetained(lVar8);
          func_0x00010bf758c0();
          _objc_release(lVar8);
          puVar2 = PTR_DAT_1126a55c0;
          _objc_retain(lVar7);
          lVar9 = lVar7;
          func_0x00010010fab4(lVar7,puVar2);
          lVar8 = lVar7;
          if ((int)lVar9 == 0) {
            lVar8 = 0;
          }
          _objc_retain(lVar8);
          _objc_release(lVar7);
          if (lVar8 != 0) {
            uVar11 = *(undefined8 *)(lVar4 + 0x38);
            func_0x00010c29fda0(lVar7);
            func_0x00010bf758e0(uVar11);
          }
          _objc_release(lVar8);
        }
        _objc_release(lVar7);
        lVar13 = lVar13 + 1;
      } while (lVar10 != lVar13);
      lVar10 = lVar6;
      func_0x00010bf52a60();
    } while (lVar10 != 0);
  }
  _objc_release(lVar6);
  _objc_release(lVar5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be80930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1066d5ac4; end: 1066d5c9b; -[SCLensExplorerCollectionViewColleague collectionViewWillDisappear] */

void FUN_1066d5ac4(undefined8 param_1,undefined8 param_2,double param_3,double param_4,long param_5)

{
  long lVar1;
  undefined *puVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  double dVar13;
  double dVar14;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_5;
  func_0x00010beffc80();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar6 != 0) {
    dVar13 = *(double *)PTR__CGSizeZero_110347620;
    dVar14 = *(double *)(PTR__CGSizeZero_110347620 + 8);
    do {
      lVar12 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar5);
        }
        lVar7 = lVar4;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb68e0();
        bVar3 = false;
        if ((param_3 == dVar13) && (bVar3 = false, !NAN(param_4) && !NAN(dVar14))) {
          bVar3 = param_4 == dVar14;
        }
        if (!bVar3) {
          lVar8 = param_5 + 8;
          _objc_loadWeakRetained(lVar8);
          func_0x00010bf758c0();
          _objc_release(lVar8);
          puVar2 = PTR_DAT_1126a55c0;
          _objc_retain(lVar7);
          lVar9 = lVar7;
          func_0x00010010fab4(lVar7,puVar2);
          lVar8 = lVar7;
          if ((int)lVar9 == 0) {
            lVar8 = 0;
          }
          _objc_retain(lVar8);
          _objc_release(lVar7);
          if (lVar8 != 0) {
            uVar11 = *(undefined8 *)(param_5 + 0x38);
            func_0x00010c29fda0(lVar7);
            func_0x00010bf758e0(uVar11);
          }
          _objc_release(lVar8);
        }
        _objc_release(lVar7);
        lVar12 = lVar12 + 1;
      } while (lVar6 != lVar12);
      lVar6 = lVar5;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(lVar5);
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010be80930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)();
  return;
}



/* Entry: 1066d5c9c; end: 1066d5c9f; -[SCLensExplorerCollectionViewColleague collectionViewDidAppear] */

void FUN_1066d5c9c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be80930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__processCellsVisibilityChange_11257dbe8);
  return;
}



/* Entry: 1066d5ca0; end: 1066d5e47; -[SCLensExplorerCollectionViewColleague _processCellsVisibilityChange] */

void FUN_1066d5ca0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1;
  func_0x00010beffc80();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = 0;
  lVar4 = lVar3;
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_100;
  lVar5 = lVar4;
  func_0x00010bf52a60();
  lVar2 = lRam0000000000000000;
  while (lVar5 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar2) {
        _objc_enumerationMutation(lVar4);
      }
      lVar6 = lVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar6;
      func_0x00010010fab4();
      lVar1 = lVar6;
      if ((int)lVar7 == 0) {
        lVar1 = 0;
      }
      _objc_retain(lVar1);
      if (lVar1 != 0) {
        func_0x00010c29fda0(lVar6);
        uVar11 = uVar10;
        func_0x00010bddc500(param_1);
        func_0x00010c2239e0(lVar6);
        func_0x00010c1146a0(uVar10,uVar11,*(undefined8 *)(param_1 + 0x38));
      }
      _objc_release(lVar1);
      _objc_release(lVar6);
      lVar9 = lVar9 + 1;
    } while (lVar5 != lVar9);
    puVar8 = auStack_100;
    lVar5 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar8);
  lVar3 = lVar3 + 8;
  _objc_loadWeakRetained(lVar3);
  func_0x00010c1078c0();
  _objc_release(puVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 1066d5e48; end: 1066d5e8f; -[SCLensExplorerCollectionViewColleague collectionView:prefetchItemsAtIndexPaths:] */

void FUN_1066d5e48(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1078c0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066d5e90; end: 1066d5ed7; -[SCLensExplorerCollectionViewColleague collectionView:cancelPrefetchingForItemsAtIndexPaths:] */

void FUN_1066d5e90(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  param_1 = param_1 + 8;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf2eac0();
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066d5ed8; end: 1066d5fef; -[SCLensExplorerCollectionViewColleague collectionView:orthogonalLayout:sizeForItemAtIndexPath:] */

undefined1  [16]
FUN_1066d5ed8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_7);
  uVar1 = *(ulong *)(param_3 + 0x18);
  func_0x00010bf529e0();
  uVar2 = param_7;
  func_0x00010c1554e0();
  if (uVar2 < uVar1) {
    uVar1 = *(ulong *)(param_3 + 0x18);
    uVar2 = param_7;
    func_0x00010c1554e0(param_7);
    func_0x00010c0dfd40(uVar1,param_4,uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c084820();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    func_0x00010bf529e0();
    uVar3 = param_7;
    func_0x00010c0840e0();
    if (uVar3 < uVar1) {
      uVar1 = param_7;
      func_0x00010c0840e0(param_7);
      uVar3 = uVar2;
      func_0x00010c0dfd40(uVar2,param_4,uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf34080();
      _objc_release(uVar3);
    }
    else {
      param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
      param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
    }
    _objc_release(uVar2);
  }
  else {
    param_1 = *(undefined8 *)PTR__CGSizeZero_110347620;
    param_2 = *(undefined8 *)(PTR__CGSizeZero_110347620 + 8);
  }
  _objc_release(param_7);
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Entry: 1066d5ff0; end: 1066d5ff7; -[SCLensExplorerCollectionViewColleague numberOfSectionsInCollectionView:] */

void FUN_1066d5ff0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x18),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1066d5ff8; end: 1066d607b; -[SCLensExplorerCollectionViewColleague collectionView:numberOfItemsInSection:] */

undefined8 FUN_1066d5ff8(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf529e0();
  if (param_4 < uVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c0dfd40(uVar2,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c084820();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  else {
    uVar4 = 0;
  }
  return uVar4;
}



/* Entry: 1066d607c; end: 1066d626b; -[SCLensExplorerCollectionViewColleague collectionView:cellForItemAtIndexPath:] */

void FUN_1066d607c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf529e0();
  uVar2 = param_4;
  func_0x00010c1554e0();
  if (uVar1 <= uVar2) {
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf6e0c0(uVar6,param_2,*(undefined8 *)(param_1 + 0x30),param_4);
    _objc_retainAutoreleasedReturnValue();
    goto LAB_1066d6240;
  }
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = param_4;
  func_0x00010c1554e0(param_4);
  func_0x00010c0dfd40(uVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c084820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  lVar3 = param_1;
  func_0x00010bddc320(param_1,param_2,param_4,param_3);
  if ((int)lVar3 == 0) {
    uVar1 = uVar2;
    func_0x00010bf529e0();
    uVar4 = param_4;
    func_0x00010c0840e0();
    if (uVar1 <= uVar4) goto LAB_1066d6220;
    uVar1 = param_4;
    func_0x00010c0840e0(param_4);
    uVar4 = uVar2;
    func_0x00010c0dfd40(uVar2,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar2;
    func_0x00010bf529e0();
    uVar5 = param_4;
    func_0x00010c0840e0();
    if (uVar1 == uVar5 + 1) {
      lVar3 = param_1 + 8;
      _objc_loadWeakRetained(lVar3);
      uVar1 = param_4;
      func_0x00010c1554e0(param_4);
      func_0x00010bf7a520(lVar3,param_2,uVar1);
      _objc_release(lVar3);
    }
    uVar1 = uVar4;
    func_0x00010c13fda0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010bf6e0c0(param_3,param_2,uVar1,param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    param_1 = param_1 + 8;
    _objc_loadWeakRetained(param_1);
    func_0x00010bf46d20();
    _objc_release(param_1);
    _objc_release(uVar4);
  }
  else {
LAB_1066d6220:
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf6e0c0(uVar6,param_2,*(undefined8 *)(param_1 + 0x30),param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar2);
LAB_1066d6240:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 1066d626c; end: 1066d647b; -[SCLensExplorerCollectionViewColleague collectionView:viewForSupplementaryElementOfKind:atIndexPath:] */

void FUN_1066d626c(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = *(ulong *)(param_1 + 0x18);
  func_0x00010bf529e0();
  uVar2 = param_5;
  func_0x00010c1554e0();
  if (uVar2 < uVar1) {
    lVar8 = *(long *)(param_1 + 0x18);
    uVar2 = param_5;
    func_0x00010c1554e0(param_5);
    func_0x00010c0dfd40(lVar8,param_2,uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar8;
    func_0x00010c127220();
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_1066d647c;
    puStack_70 = &UNK_110935048;
    _objc_retain(param_4);
    lVar4 = lVar3;
    uStack_68 = param_4;
    func_0x00010bfb2040(lVar3,param_2,&puStack_88);
    _objc_retainAutoreleasedReturnValue();
    if (lVar4 == 0) {
      puVar7 = PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20;
      _objc_opt_new(PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20);
    }
    else {
      lVar5 = lVar4;
      func_0x00010c29d2e0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar4;
      func_0x00010c13fda0(lVar4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_3;
      func_0x00010bf6e120(param_3,param_2,lVar5,lVar6,param_5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar6);
      _objc_release(lVar5);
      param_1 = param_1 + 8;
      _objc_loadWeakRetained(param_1);
      lVar5 = lVar8;
      func_0x00010c155f60(lVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf474c0(param_1,param_2,puVar7,param_4,param_5,lVar5);
      _objc_release(lVar5);
      _objc_release(param_1);
    }
    _objc_release(lVar4);
    _objc_release(uStack_68);
    _objc_release(lVar3);
    _objc_release(lVar8);
  }
  else {
    puVar7 = PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20;
    _objc_opt_new(PTR__OBJC_CLASS___UICollectionReusableView_1126b0d20);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1066d647c; end: 1066d64c3;  */

undefined8 FUN_1066d647c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c29d2e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c0720c0();
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 1066d64c4; end: 1066d65b7; -[SCLensExplorerCollectionViewColleague collectionView:willDisplayCell:forItemAtIndexPath:] */

void FUN_1066d64c4(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_1;
  func_0x00010bddc320();
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c2a6020();
    _objc_release(lVar3);
    puVar1 = PTR_DAT_1126a55c0;
    _objc_retain(param_4);
    lVar4 = param_4;
    func_0x00010010fab4(param_4,puVar1);
    lVar3 = param_4;
    if ((int)lVar4 == 0) {
      lVar3 = 0;
    }
    _objc_retain(lVar3);
    _objc_release(param_4);
    if (lVar3 != 0) {
      func_0x00010bddc500(param_1);
      func_0x00010c2239e0(param_4);
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c29fda0(param_4);
      func_0x00010c2a6040(uVar5);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1066d65b8; end: 1066d6693; -[SCLensExplorerCollectionViewColleague collectionView:didEndDisplayingCell:forItemAtIndexPath:] */

void FUN_1066d65b8(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar2 = param_1;
  func_0x00010bddc320();
  if ((uVar2 & 1) == 0) {
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010bf758c0();
    _objc_release(lVar3);
    puVar1 = PTR_DAT_1126a55c0;
    _objc_retain(param_4);
    lVar4 = param_4;
    func_0x00010010fab4(param_4,puVar1);
    lVar3 = param_4;
    if ((int)lVar4 == 0) {
      lVar3 = 0;
    }
    _objc_retain(lVar3);
    _objc_release(param_4);
    if (lVar3 != 0) {
      uVar5 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c29fda0(param_4);
      func_0x00010bf758e0(uVar5);
    }
    _objc_release(lVar3);
  }
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1066d6694; end: 1066d67c3; -[SCLensExplorerCollectionViewColleague _cellVisibleFraction:inCollectionView:] */

double FUN_1066d6694(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  func_0x00010bfb68e0(param_7);
  uVar1 = param_7;
  func_0x00010c262ca0(param_7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf513e0(param_1,param_2,param_8,param_6,uVar1);
  uVar2 = param_1;
  uVar4 = param_2;
  dVar5 = param_3;
  dVar6 = param_4;
  _objc_release(uVar1);
  func_0x00010bfb68e0(param_7);
  dVar7 = dVar6;
  _objc_release(param_7);
  func_0x00010bf20c00(param_8);
  _objc_release(param_8);
  _CGRectIntersection(uVar2,uVar4,dVar5,dVar7,param_1,param_2,param_3,param_4);
  dVar3 = 0.0;
  if (0.0 < param_3 * dVar6) {
    dVar3 = (dVar5 * dVar7) / (param_3 * dVar6);
  }
  return dVar3;
}



/* Entry: 1066d67c4; end: 1066d67eb; -[SCLensExplorerCollectionViewColleague scrollViewDidScroll:] */

void FUN_1066d67c4(long param_1)

{
  func_0x00010be80920();
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_next__112614028,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1066d67ec; end: 1066d67fb; -[SCLensExplorerCollectionViewColleague scrollViewWillBeginDragging:] */

void FUN_1066d67ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_next__112614028,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1066d67fc; end: 1066d680b; -[SCLensExplorerCollectionViewColleague scrollViewDidEndDecelerating:] */

void FUN_1066d67fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x58),PTR_s_next__112614028,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1066d680c; end: 1066d681b; -[SCLensExplorerCollectionViewColleague scrollViewDidEndDragging:willDecelerate:] */

void FUN_1066d680c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_next__112614028,*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1066d681c; end: 1066d6823; -[SCLensExplorerCollectionViewColleague didScrollObservable] */

undefined8 FUN_1066d681c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1066d6824; end: 1066d682b; -[SCLensExplorerCollectionViewColleague willBeginDraggingObservable] */

undefined8 FUN_1066d6824(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1066d682c; end: 1066d6833; -[SCLensExplorerCollectionViewColleague didEndDeceleratingObservable] */

undefined8 FUN_1066d682c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1066d6834; end: 1066d683b; -[SCLensExplorerCollectionViewColleague didEndDraggingObservable] */

undefined8 FUN_1066d6834(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1066d683c; end: 1066d68d3; -[SCLensExplorerCollectionViewColleague .cxx_destruct] */

void FUN_1066d683c(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1066d68d4; end: 1066d6bfb; -[SCLensExplorerCreatorsSectionViewModel initWithSectionConfiguration:sectionLayoutConfiguration:previewsLimit:previewContainerSize:fullCellSize:mediator:sectionHeaderProvider:actionHandler:dataStore:imagesDataStore:creatorPreviewFetcher:avatartImageDownloading:avatarProvider:performer:styleOverride:] */

undefined8 *
FUN_1066d68d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_98;
  undefined *puStack_90;
  
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  puStack_90 = PTR_PTR_1126f2818;
  puVar1 = &uStack_98;
  uStack_98 = param_5;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_7);
    uVar2 = puVar1[8];
    puVar1[8] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[9];
    puVar1[9] = param_8;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 1,param_10);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    _objc_retain(param_13);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_13;
    _objc_release(uVar2);
    _objc_retain(param_14);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_14;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0xf];
    puVar1[0xf] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cd068;
    _objc_opt_new();
    uVar2 = puVar1[0x14];
    puVar1[0x14] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x16];
    puVar1[0x16] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_18;
    _objc_release(uVar2);
    puVar1[3] = param_9;
    puVar1[4] = param_1;
    puVar1[5] = param_2;
    puVar1[6] = param_3;
    puVar1[7] = param_4;
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c292ae0();
    *(bool *)(puVar1 + 2) = puVar4 == (undefined *)0x1;
    _objc_release(puVar3);
    puVar1[0xc] = param_19;
  }
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_8);
  _objc_release(param_7);
  return puVar1;
}



/* Entry: 1066d6bfc; end: 1066d6c23; -[SCLensExplorerCreatorsSectionViewModel sectionConfiguration] */

void FUN_1066d6bfc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066d6c24; end: 1066d6c4b; -[SCLensExplorerCreatorsSectionViewModel sectionLayoutConfiguration] */

void FUN_1066d6c24(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066d6c4c; end: 1066d6ce3; -[SCLensExplorerCreatorsSectionViewModel identifierToCellClassMap] */

void FUN_1066d6c4c(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _objc_opt_class();
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar2 = *(long *)(puVar1 + 0x50);
    func_0x00010bfdfcc0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    lVar5 = lVar2;
    func_0x00010c13fda0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06d500();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)puVar1 == 0) {
      lVar3 = lVar2;
      func_0x00010c29d2e0(lVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c06d500();
      _objc_release(lVar3);
      _objc_release(lVar5);
      if (((ulong)puVar4 & 1) == 0) {
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      _objc_release(lVar5);
    }
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
      ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(lVar2 + 0x98),PTR_s_count_1125b2420);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066d6ce4; end: 1066d6df7; -[SCLensExplorerCreatorsSectionViewModel supplementaryModels] */

void FUN_1066d6ce4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 0x50);
  func_0x00010bfdfcc0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar2 = lVar1;
  func_0x00010c13fda0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c06d500();
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if ((int)puVar3 == 0) {
    lVar4 = lVar1;
    func_0x00010c29d2e0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c06d500();
    _objc_release(lVar4);
    _objc_release(lVar2);
    puVar3 = PTR____NSArray0__struct_11034ab48;
    if (((ulong)puVar5 & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
    }
  }
  else {
    _objc_release(lVar2);
    puVar3 = PTR____NSArray0__struct_11034ab48;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(lVar1 + 0x98),PTR_s_count_1125b2420);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066d6df8; end: 1066d6dff; -[SCLensExplorerCreatorsSectionViewModel contentCount] */

void FUN_1066d6df8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf529f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x98),PTR_s_count_1125b2420);
  return;
}



/* Entry: 1066d6e00; end: 1066d6e77; -[SCLensExplorerCreatorsSectionViewModel reuseIdentifierForIndex:] */

undefined ** FUN_1066d6e00(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  
  uVar1 = *(ulong *)(param_1 + 0x98);
  func_0x00010bf529e0();
  if (param_3 < uVar1) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c0dfd40(uVar2,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c076d80();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e59798;
    if ((int)uVar3 == 0) {
      ppuVar4 = &PTR____CFConstantStringClassReference_110e59778;
    }
    _objc_release(uVar2);
  }
  else {
    ppuVar4 = (undefined **)0x0;
  }
  return ppuVar4;
}



/* Entry: 1066d6e78; end: 1066d6f07; -[SCLensExplorerCreatorsSectionViewModel indexOfItemWithIdentifier:] */

undefined8 FUN_1066d6e78(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1066d6f08;
  puStack_30 = &UNK_110935078;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfece40(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 1066d6f08; end: 1066d6f6f;  */

undefined8 FUN_1066d6f08(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010bf5b4e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bf5b440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(param_2);
  return uVar2;
}



/* Entry: 1066d6f70; end: 1066d6f77; -[SCLensExplorerCreatorsSectionViewModel sizeForIndex:] */

void FUN_1066d6f70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c084a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x48),PTR_s_itemSize_1125fecb0);
  return;
}



/* Entry: 1066d6f78; end: 1066d70b3; -[SCLensExplorerCreatorsSectionViewModel prefetchItemsForIndexes:] */

void FUN_1066d6f78(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined1 *puVar15;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar13 = param_3;
  func_0x00010bf52a60();
  if (lVar13 != 0) {
    lVar12 = *plStack_110;
    do {
      lVar14 = 0;
      do {
        if (*plStack_110 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        uVar1 = *(ulong *)(lStack_118 + lVar14 * 8);
        func_0x00010c2827c0();
        uVar2 = *(ulong *)(param_1 + 0x98);
        func_0x00010bf529e0();
        if (uVar1 < uVar2) {
          uVar3 = *(undefined8 *)(param_1 + 0x98);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c107c40(*(undefined8 *)(param_1 + 0x88));
          _objc_release(uVar3);
        }
        lVar14 = lVar14 + 1;
      } while (lVar13 != lVar14);
      lVar13 = param_3;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar13 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  puVar11 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  puVar4 = (undefined1 *)puVar5;
  func_0x00010bf52a60();
  if (puVar4 != (undefined1 *)0x0) {
    lVar13 = *plStack_230;
    do {
      puVar15 = (undefined1 *)0x0;
      do {
        if (*plStack_230 != lVar13) {
          _objc_enumerationMutation(puVar5);
        }
        uVar1 = *(ulong *)(lStack_238 + (long)puVar15 * 8);
        func_0x00010c2827c0();
        uVar2 = *(ulong *)(param_3 + 0x98);
        func_0x00010bf529e0();
        if (uVar1 < uVar2) {
          uVar3 = *(undefined8 *)(param_3 + 0x98);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf2eaa0(*(undefined8 *)(param_3 + 0x88));
          _objc_release(uVar3);
        }
        puVar15 = puVar15 + 1;
      } while (puVar4 != puVar15);
      puVar4 = (undefined1 *)puVar5;
      puVar11 = &uStack_240;
      func_0x00010bf52a60();
    } while (puVar4 != (undefined1 *)0x0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar11);
  uVar3 = *(undefined8 *)((long)puVar5 + 0x98);
  func_0x00010c0dfd40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR_DAT_1126a55c8;
  _objc_retain(puVar11);
  puVar15 = (undefined1 *)puVar11;
  func_0x00010010fab4(puVar11,puVar8);
  puVar4 = (undefined1 *)puVar11;
  if ((int)puVar15 == 0) {
    puVar4 = (undefined1 *)0x0;
  }
  _objc_retain(puVar4);
  _objc_release(puVar11);
  uVar6 = *(undefined8 *)((long)puVar5 + 0x40);
  func_0x00010c155f60(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9360(puVar4);
  _objc_release(uVar6);
  puVar8 = PTR_DAT_1126a4e90;
  _objc_retain(puVar11);
  puVar7 = (undefined1 *)puVar11;
  func_0x00010010fab4(puVar11,puVar8);
  puVar15 = (undefined1 *)puVar11;
  if ((int)puVar7 == 0) {
    puVar15 = (undefined1 *)0x0;
  }
  _objc_retain(puVar15);
  _objc_release(puVar11);
  func_0x00010c161980(puVar15);
  puVar8 = PTR_PTR_1126cd070;
  _objc_retain(puVar11);
  _objc_opt_class(puVar8);
  puVar9 = (undefined1 *)puVar11;
  _objc_opt_isKindOfClass(puVar11,puVar8);
  puVar7 = (undefined1 *)puVar11;
  if (((ulong)puVar9 & 1) == 0) {
    puVar7 = (undefined1 *)0x0;
  }
  _objc_retain(puVar7);
  _objc_release(puVar11);
  if (puVar7 != (undefined1 *)0x0) {
    puVar9 = (undefined1 *)puVar11;
    func_0x00010bf132a0(puVar11);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa200();
    _objc_release(puVar9);
    func_0x00010c28a7c0(puVar11);
  }
  puVar8 = PTR_DAT_1126a55d0;
  _objc_retain(puVar11);
  puVar10 = (undefined1 *)puVar11;
  func_0x00010010fab4(puVar11,puVar8);
  puVar9 = (undefined1 *)puVar11;
  if ((int)puVar10 == 0) {
    puVar9 = (undefined1 *)0x0;
  }
  _objc_retain(puVar9);
  _objc_release(puVar11);
  if (puVar9 != (undefined1 *)0x0) {
    func_0x00010be658c0(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222900(puVar11);
    _objc_release(puVar5);
  }
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar15);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar11);
  return;
}



/* Entry: 1066d70b4; end: 1066d71ef; -[SCLensExplorerCreatorsSectionViewModel cancelPrefetchingForItemsAtIndexes:] */

void FUN_1066d70b4(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar12 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar2 = param_3;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar13 = *plStack_110;
    do {
      lVar14 = 0;
      do {
        if (*plStack_110 != lVar13) {
          _objc_enumerationMutation(param_3);
        }
        uVar3 = *(ulong *)(lStack_118 + lVar14 * 8);
        func_0x00010c2827c0();
        uVar4 = *(ulong *)(param_1 + 0x98);
        func_0x00010bf529e0();
        if (uVar3 < uVar4) {
          uVar5 = *(undefined8 *)(param_1 + 0x98);
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf2eaa0(*(undefined8 *)(param_1 + 0x88));
          _objc_release(uVar5);
        }
        lVar14 = lVar14 + 1;
      } while (lVar2 != lVar14);
      lVar2 = param_3;
      puVar12 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar12);
  uVar5 = *(undefined8 *)(param_3 + 0x98);
  func_0x00010c0dfd40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = PTR_DAT_1126a55c8;
  _objc_retain(puVar12);
  puVar6 = (undefined1 *)puVar12;
  func_0x00010010fab4(puVar12,puVar9);
  puVar1 = (undefined1 *)puVar12;
  if ((int)puVar6 == 0) {
    puVar1 = (undefined1 *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar12);
  uVar7 = *(undefined8 *)(param_3 + 0x40);
  func_0x00010c155f60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9360(puVar1);
  _objc_release(uVar7);
  puVar9 = PTR_DAT_1126a4e90;
  _objc_retain(puVar12);
  puVar8 = (undefined1 *)puVar12;
  func_0x00010010fab4(puVar12,puVar9);
  puVar6 = (undefined1 *)puVar12;
  if ((int)puVar8 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  _objc_retain(puVar6);
  _objc_release(puVar12);
  func_0x00010c161980(puVar6);
  puVar9 = PTR_PTR_1126cd070;
  _objc_retain(puVar12);
  _objc_opt_class(puVar9);
  puVar10 = (undefined1 *)puVar12;
  _objc_opt_isKindOfClass(puVar12,puVar9);
  puVar8 = (undefined1 *)puVar12;
  if (((ulong)puVar10 & 1) == 0) {
    puVar8 = (undefined1 *)0x0;
  }
  _objc_retain(puVar8);
  _objc_release(puVar12);
  if (puVar8 != (undefined1 *)0x0) {
    puVar10 = (undefined1 *)puVar12;
    func_0x00010bf132a0(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa200();
    _objc_release(puVar10);
    func_0x00010c28a7c0(puVar12);
  }
  puVar9 = PTR_DAT_1126a55d0;
  _objc_retain(puVar12);
  puVar11 = (undefined1 *)puVar12;
  func_0x00010010fab4(puVar12,puVar9);
  puVar10 = (undefined1 *)puVar12;
  if ((int)puVar11 == 0) {
    puVar10 = (undefined1 *)0x0;
  }
  _objc_retain(puVar10);
  _objc_release(puVar12);
  if (puVar10 != (undefined1 *)0x0) {
    func_0x00010be658c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222900(puVar12);
    _objc_release(param_3);
  }
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar1);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 1066d71f0; end: 1066d73eb; -[SCLensExplorerCreatorsSectionViewModel configureCell:index:] */

void FUN_1066d71f0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c0dfd40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_DAT_1126a55c8;
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010010fab4(param_3,puVar6);
  uVar1 = param_3;
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c155f60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f9360(uVar1);
  _objc_release(uVar4);
  puVar6 = PTR_DAT_1126a4e90;
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010010fab4(param_3,puVar6);
  uVar3 = param_3;
  if ((int)uVar5 == 0) {
    uVar3 = 0;
  }
  _objc_retain(uVar3);
  _objc_release(param_3);
  func_0x00010c161980(uVar3);
  puVar6 = PTR_PTR_1126cd070;
  _objc_retain(param_3);
  _objc_opt_class(puVar6);
  uVar7 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar6);
  uVar5 = param_3;
  if ((uVar7 & 1) == 0) {
    uVar5 = 0;
  }
  _objc_retain(uVar5);
  _objc_release(param_3);
  if (uVar5 != 0) {
    uVar7 = param_3;
    func_0x00010bf132a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1aa200();
    _objc_release(uVar7);
    func_0x00010c28a7c0(param_3);
  }
  puVar6 = PTR_DAT_1126a55d0;
  _objc_retain(param_3);
  uVar8 = param_3;
  func_0x00010010fab4(param_3,puVar6);
  uVar7 = param_3;
  if ((int)uVar8 == 0) {
    uVar7 = 0;
  }
  _objc_retain(uVar7);
  _objc_release(param_3);
  if (uVar7 != 0) {
    func_0x00010be658c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c222900(param_3);
    _objc_release(param_1);
  }
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066d73ec; end: 1066d73ef; -[SCLensExplorerCreatorsSectionViewModel willAppearCell:index:] */

void FUN_1066d73ec(void)

{
  return;
}



/* Entry: 1066d73f0; end: 1066d748f; -[SCLensExplorerCreatorsSectionViewModel didDisappearCell:index:clearMedia:] */

void FUN_1066d73f0(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cd070;
  _objc_opt_class(PTR_PTR_1126cd070);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x88);
    uVar3 = param_3;
    func_0x00010c29d560(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2eaa0(uVar4);
    _objc_release(uVar3);
    func_0x00010c222900(param_3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066d7490; end: 1066d7497; -[SCLensExplorerCreatorsSectionViewModel configureSupplementaryView:kind:] */

void FUN_1066d7490(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf47050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_configureHeader_viewKind__1125af5b8);
  return;
}



/* Entry: 1066d7498; end: 1066d749b; -[SCLensExplorerCreatorsSectionViewModel warmup] */

void FUN_1066d7498(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec6b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__subscribeOnDataStoreItems_11258f480);
  return;
}



/* Entry: 1066d749c; end: 1066d74a3; -[SCLensExplorerCreatorsSectionViewModel cancelAllDownloads] */

void FUN_1066d749c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dcd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x68),PTR_s_cancelAllDownloads_1125a90d8);
  return;
}



/* Entry: 1066d74a4; end: 1066d74e3; -[SCLensExplorerCreatorsSectionViewModel hasMoreItems] */

undefined8 FUN_1066d74a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c12a440(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfd93c0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 1066d74e4; end: 1066d74eb; -[SCLensExplorerCreatorsSectionViewModel diffIdentifier] */

void FUN_1066d74e4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c155f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_sectionIdentifier_1126331f8);
  return;
}



/* Entry: 1066d74ec; end: 1066d75fb; -[SCLensExplorerCreatorsSectionViewModel _subscribeOnDataStoreItems] */

void FUN_1066d74ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010bf00280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 1066d75fc; end: 1066d7643;  */

void FUN_1066d75fc(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee3ca0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066d7644; end: 1066d77f3; -[SCLensExplorerCreatorsSectionViewModel _updateViewModelsWithItems:] */

void FUN_1066d7644(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bee9ba0();
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_1066d77f4;
  uStack_60 = 0x1066d7804;
  uStack_58 = 0;
  lVar2 = lVar1;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8240();
  _objc_release(lVar2);
  uVar3 = *(undefined8 *)(param_1 + 0xa0);
  func_0x00010bf7ed00();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(lVar1);
  _objc_retain(uVar3);
  func_0x00010c0f7fc0(uVar4);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(lVar1);
  _objc_release(uVar3);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 1066d77f4; end: 1066d780b;  */

void FUN_1066d77f4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1066d780c; end: 1066d783f;  */

void FUN_1066d780c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x98);
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066d7840; end: 1066d7953;  */

void FUN_1066d7840(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  lVar4 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(lVar4 + 0x98);
  *(undefined8 *)(lVar4 + 0x98) = uVar2;
  _objc_release(uVar1);
  lVar4 = *(long *)(param_1 + 0x20) + 8;
  _objc_loadWeakRetained(lVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0672e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c12f3e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0d1960(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf7e640(lVar4,param_2,uVar6,uVar2,uVar1,uVar3,0);
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(lVar4);
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x78);
  lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 0x98);
  func_0x00010bf529e0(lVar4);
  func_0x00010c0df760(puVar5,param_2,lVar4 == 0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1066d7954; end: 1066d7b83; -[SCLensExplorerCreatorsSectionViewModel _viewModelsFromItems:] */

void FUN_1066d7954(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(param_3);
  func_0x00010bf0a0e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf529e0();
  if (uVar4 != 0) {
    uVar4 = 0;
    do {
      uStack_a0 = 0;
      uStack_90 = 0x3032000000;
      pcStack_88 = FUN_1066d77f4;
      uStack_80 = 0x1066d7804;
      uStack_78 = 0;
      uVar3 = param_3;
      puStack_98 = &uStack_a0;
      func_0x00010c0dfd40(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0be960();
      _objc_release(uVar3);
      if (puStack_98[5] != 0) {
        puVar2 = PTR_PTR_1126cce58;
        func_0x00010bf34280(*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                            *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                            PTR_PTR_1126cce58);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(puVar2);
      }
      __Block_object_dispose(&uStack_a0,8);
      _objc_release(uStack_78);
      uVar4 = uVar4 + 1;
      uVar3 = param_3;
      func_0x00010bf529e0();
    } while (uVar4 < uVar3);
  }
  uVar3 = *(ulong *)(param_1 + 0x70);
  func_0x00010c12a440();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfd93c0();
  _objc_release(uVar3);
  if ((uVar4 & 1) != 0) {
    puVar2 = PTR_PTR_1126cce58;
    func_0x00010c09cc60(PTR_PTR_1126cce58);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(puVar2);
  }
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066d7b84; end: 1066d7bbb;  */

void FUN_1066d7b84(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066d7bbc; end: 1066d7cc7; -[SCLensExplorerCreatorsSectionViewModel _observableForViewModel:] */

void FUN_1066d7bbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x88);
  _objc_retain(param_3);
  func_0x00010bfa96a0(uVar4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c14f680();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0xb0);
  uVar2 = param_3;
  func_0x00010bf5b4e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf13320(uVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010bf41860(uVar1,param_2,uVar3,&PTR___NSConcreteGlobalBlock_1109350c8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c2519e0(uVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1066d7cc8; end: 1066d7cef;  */

void FUN_1066d7cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf34390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126cce58,PTR_s_cellViewModelWithViewModel_previ_1125aaa88,param_2,param_3);
  return;
}



/* Entry: 1066d7cf0; end: 1066d7cf7; -[SCLensExplorerCreatorsSectionViewModel isEmptyObservable] */

undefined8 FUN_1066d7cf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1066d7cf8; end: 1066d7dbf; -[SCLensExplorerCreatorsSectionViewModel .cxx_destruct] */

void FUN_1066d7cf8(long param_1)

{
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 1066d7dc0; end: 1066d7dc7; -[SCLensExplorerDynamicSectionsProviderColleague initWithMediator:sectionFactory:sectionConfigurations:] */

void FUN_1066d7dc0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c02a290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithMediator_sectionFactory__1125e8288);
  return;
}



/* Entry: 1066d7dc8; end: 1066d7f8b; -[SCLensExplorerDynamicSectionsProviderColleague initWithMediator:sectionFactory:sectionConfigurations:recreatesSectionsForConfigurationChanges:] */

undefined1 *
FUN_1066d7dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126f2820;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126cd068;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined **)((long)puVar1 + 0x50) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined **)((long)puVar1 + 0x58) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x60);
    *(undefined **)((long)puVar1 + 0x60) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x68);
    *(undefined **)((long)puVar1 + 0x68) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x80);
    *(undefined **)((long)puVar1 + 0x80) = puVar3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x70) = param_6;
    puVar3 = PTR____NSArray0__struct_11034ab48;
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined **)((long)puVar1 + 0x48) = PTR____NSArray0__struct_11034ab48;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}


