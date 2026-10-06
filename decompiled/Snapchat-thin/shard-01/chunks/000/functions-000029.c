/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c5d250; end: 100c5d3d7; -[SCFeatureCameraBottomUIArbitratorImpl initWithContenders:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_100c5d250(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  puStack_d0 = PTR_PTR_1126f0608;
  puVar2 = &uStack_d8;
  uStack_d8 = param_1;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (puVar2 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_1127430d4;
    func_0x000107c61174(param_3);
    uVar3 = *(undefined8 *)((long)puVar2 + lVar4);
    *(long *)((long)puVar2 + lVar4) = param_3;
    func_0x000107c61170(uVar3);
    lVar4 = param_3;
    func_0x000107c4c280();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar2 + (long)_DAT_1127430d8);
    *(long *)((long)puVar2 + (long)_DAT_1127430d8) = lVar4;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar2 + (long)_DAT_1127430dc) = 0x7fffffffffffffff;
    func_0x000107c61174(param_3);
    lVar4 = param_3;
    func_0x000107c4080c();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          func_0x000107c61128(param_3);
        }
        func_0x000107c52fc8(*(undefined8 *)(lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
      lVar4 = param_3;
      func_0x000107c4080c();
    }
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar2;
  }
  func_0x000107c60e78();
  puVar2 = (undefined8 *)PTR_PTR_1126c8cf8;
  func_0x000107c61160(PTR_PTR_1126c8cf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return puVar2;
}



/* Entry: 100c5d3d8; end: 100c5d3f3;  */

void FUN_100c5d3d8(void)

{
  func_0x000107c61160(PTR_PTR_1126c8cf8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c5d3f4; end: 100c5d40f; -[SCFeatureBatchCaptureImpl setCameraBottomUIArbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5d3f4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_112740464,param_3);
  return;
}



/* Entry: 100c5d410; end: 100c5d443;  */

void FUN_100c5d410(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 != 0) {
    func_0x000107c3cd30(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c5d444; end: 100c5d50b; -[SCSpectaclesSsidScanner _updateWifiSsid] */

/* WARNING: Possible PIC construction at 0x000100c5d4b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c5d4d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c5d4f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c5d4bc) */
/* WARNING: Removing unreachable block (ram,0x000100c5d4c8) */
/* WARNING: Removing unreachable block (ram,0x000100c5d4dc) */
/* WARNING: Removing unreachable block (ram,0x000100c5d4f4) */

void FUN_100c5d444(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b6728;
  func_0x000107c41068();
  func_0x000107c61180();
  puVar2 = param_1;
  func_0x000107c40ffc();
  func_0x000107c61180();
  if (puVar1 != puVar2) {
    func_0x000107c40ffc(param_1);
    func_0x000107c61180();
    func_0x000107c49d0c(puVar1,param_2,param_1);
    puVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 100c5d50c; end: 100c5d6bb; +[SCNetworkInterfaces currentWifiSsid] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5d50c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174();
  lVar1 = param_1;
  func_0x000107c611a4();
  func_0x000107c60a74();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  func_0x000107c61174();
  lVar2 = lVar1;
  func_0x000107c4080c();
  lVar6 = 0;
  if (lVar2 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      lVar7 = lVar6;
      do {
        if (*plStack_120 != lVar8) {
          func_0x000107c61128(lVar1);
        }
        lVar3 = *(long *)(lStack_128 + lVar9 * 8);
        func_0x000107c60a70();
        lVar4 = lVar3;
        func_0x000107c4d9e8();
        func_0x000107c61180();
        func_0x000107c61170();
        lVar6 = lVar7;
        if (lVar4 != 0) {
          lVar6 = lVar3;
          func_0x000107c4d9e8(lVar3);
          func_0x000107c61180();
          func_0x000107c61170(lVar7);
        }
        func_0x000107c61170(lVar3);
        lVar9 = lVar9 + 1;
        lVar7 = lVar6;
      } while (lVar2 != lVar9);
      lVar2 = lVar1;
      puVar5 = &uStack_130;
      func_0x000107c4080c();
    } while (lVar2 != 0);
  }
  func_0x000107c61170(lVar1);
  func_0x000107c61170(lVar1);
  func_0x000107c611a8(param_1);
  lVar1 = param_1;
  func_0x000107c61170(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar6);
    return;
  }
  func_0x000107c60e78();
  func_0x000107c611a8(param_1);
  func_0x000107c60bd8(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(lVar1 + _DAT_11274286c,puVar5);
  return;
}



/* Entry: 100c5d6bc; end: 100c5d6cf; -[SCFeatureLensFeedImpl setCameraBottomUIArbitrator:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5d6bc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11274286c,param_3);
  return;
}



/* Entry: 100c5d6d0; end: 100c5d6ff;  */

bool FUN_100c5d6d0(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 100c5d700; end: 100c5d783;  */

void FUN_100c5d700(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar3 = PTR_PTR_1126c8870;
    func_0x000107c610f4(PTR_PTR_1126c8870);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    func_0x000107c46074(puVar3,param_2,uVar2);
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c5d784; end: 100c5dacb;  */

undefined * FUN_100c5d784(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
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
  undefined *puVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c61160(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar5 = PTR_PTR_1126c8818;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4b140();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c50878(puVar5,param_2,uVar4);
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  puStack_a8 = puVar5;
  func_0x000107c4f5c0();
  func_0x000107c61180();
  uVar7 = uVar6;
  func_0x000107c4af94();
  func_0x000107c61180();
  uVar8 = uVar7;
  func_0x000107c42e38();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  uStack_a0 = uVar8;
  func_0x000107c4f5c0();
  func_0x000107c61180();
  uVar10 = uVar9;
  func_0x000107c4b124();
  func_0x000107c61180();
  uVar11 = uVar10;
  func_0x000107c42e38();
  func_0x000107c61180();
  uVar12 = *(undefined8 *)(param_1 + 0x20);
  uStack_98 = uVar11;
  func_0x000107c4f5c0();
  func_0x000107c61180();
  uVar13 = uVar12;
  func_0x000107c4b3e4();
  func_0x000107c61180();
  uVar14 = uVar13;
  func_0x000107c42e38();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(param_1 + 0x20);
  uStack_90 = uVar14;
  func_0x000107c4f5c0();
  func_0x000107c61180();
  uVar16 = uVar15;
  func_0x000107c4b3e8();
  func_0x000107c61180();
  uVar17 = uVar16;
  func_0x000107c42e38();
  func_0x000107c61180();
  uVar18 = *(undefined8 *)(param_1 + 0x28);
  uStack_88 = uVar17;
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar19 = *(undefined8 *)(param_1 + 0x30);
  uStack_80 = uVar18;
  func_0x000107c4afa4();
  func_0x000107c61180();
  uVar20 = uVar19;
  func_0x000107c42e38();
  func_0x000107c61180();
  puVar21 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_78 = uVar20;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_a8,7);
  func_0x000107c61180();
  func_0x000107c3d7a0(puVar1,param_2,puVar21);
  func_0x000107c61170(puVar21);
  func_0x000107c61170(uVar20);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  puVar5 = PTR_PTR_1126c8818;
  lVar22 = *(long *)(param_1 + 0x20);
  func_0x000107c4f5c0();
  func_0x000107c61180();
  lVar23 = lVar22;
  func_0x000107c4b0ac();
  func_0x000107c61180();
  lVar24 = lVar23;
  func_0x000107c42e38();
  func_0x000107c61180();
  func_0x000107c50878(puVar5,param_2,lVar24);
  func_0x000107c61180();
  func_0x000107c3d798(puVar1,param_2,puVar5);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return puVar1;
  }
  func_0x000107c60e78();
  return *(undefined **)(lVar22 + 0xe0);
}



/* Entry: 100c5dacc; end: 100c5dad3; -[SCMutablePublicCameraFeatureCatalog lensFavoritesTabBarButton] */

undefined8 FUN_100c5dacc(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe0);
}



/* Entry: 100c5dad4; end: 100c5db1f; +[SCFeatureCameraRevertedUIContender revertedContender:] */

void FUN_100c5dad4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c8818;
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c46070();
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c5db20; end: 100c5db8b; -[SCFeatureCameraRevertedUIContender initWithContender:] */

undefined1 * FUN_100c5db20(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f0628;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + 8),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c5db8c; end: 100c5db93; -[SCMutablePublicCameraFeatureCatalog lensCollectionsBackButton] */

undefined8 FUN_100c5db8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 100c5db94; end: 100c5db9b; -[SCMutablePublicCameraFeatureCatalog lensFavoritesButton] */

undefined8 FUN_100c5db94(long param_1)

{
  return *(undefined8 *)(param_1 + 0xd8);
}



/* Entry: 100c5db9c; end: 100c5dba3; -[SCMutablePublicCameraFeatureCatalog lensSendToButton] */

undefined8 FUN_100c5db9c(long param_1)

{
  return *(undefined8 *)(param_1 + 0xe8);
}



/* Entry: 100c5dba4; end: 100c5dbab; -[SCMutablePublicCameraFeatureCatalog lensSendToTabBarButton] */

undefined8 FUN_100c5dba4(long param_1)

{
  return *(undefined8 *)(param_1 + 0xf0);
}



/* Entry: 100c5dbac; end: 100c5dbc3; -[SCCameraMainCameraLensFeatureProviderPluginWorkflow lensCollectionsTabBar] */

void FUN_100c5dbac(long param_1)

{
  func_0x000107c61148(param_1 + 0x1a8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c5dbc4; end: 100c5dc73; -[SCFeatureCompositeUIArbitrator initWithContenders:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100c5dbc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f0618;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127430f4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127430f4) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c5dc74; end: 100c5dd33;  */

void FUN_100c5dc74(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c79f0;
    func_0x000107c610f4(PTR_PTR_1126c79f0);
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    puStack_48 = &UNK_1060a656c;
    puStack_40 = &UNK_11090bfb0;
    puVar1 = PTR_PTR_1126ae720;
    lStack_38 = param_1;
    func_0x000107c3e4fc(PTR_PTR_1126ae720,param_2,&puStack_58);
    func_0x000107c61180();
    func_0x000107c480b4(puVar2,param_2,puVar1);
    func_0x000107c61170(puVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c5dd34; end: 100c5ddc7; -[SCFeatureMicrophoneModeLoggingImpl initWithPreviewPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100c5dd34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  puStack_38 = PTR_PTR_1126ef818;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11273e698;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11273e69c) = 0x7fffffffffffffff;
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c5ddc8; end: 100c5ddf7;  */

bool FUN_100c5ddc8(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 100c5ddf8; end: 100c5de6f;  */

void FUN_100c5ddf8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c88b0;
    func_0x000107c610f4(PTR_PTR_1126c88b0);
    lVar1 = param_1 + 0x68;
    func_0x000107c61148(lVar1);
    func_0x000107c4698c(puVar2,param_2,lVar1);
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c5de70; end: 100c5df2b; -[SCFeatureLensCollectionsBarImpl initWithFooterItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_100c5de70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126f0370;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c611a0((undefined1 *)((long)puVar1 + (long)_DAT_11274253c),param_3);
  }
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c5df2c; end: 100c5dfc3; -[SCCameraMainCameraLensFeatureProviderPluginWorkflow _lensExplorerTabBarItemEnabled] */

long FUN_100c5df2c(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x138;
  func_0x000107c61148();
  lVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  lVar2 = lVar1;
  func_0x000107c426e0();
  if ((int)lVar2 == 0) {
    lVar2 = 1;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4b10c(lVar1);
  }
  func_0x000107c61170(lVar1);
  return lVar2;
}



/* Entry: 100c5dfc4; end: 100c5e2bb;  */

void FUN_100c5dfc4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined **ppuVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar2 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar2 == 0) {
    puVar19 = (undefined *)0x0;
  }
  else {
    puVar19 = PTR_PTR_1126c7960;
    func_0x000107c610f4();
    uVar3 = *(undefined8 *)(lVar2 + 0x48);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c3f32c();
    func_0x000107c61180();
    uVar17 = *(undefined8 *)(lVar2 + 0x108);
    uVar5 = *(undefined8 *)(lVar2 + 0x88);
    func_0x000107c3f0fc();
    func_0x000107c61180();
    uVar6 = *(undefined8 *)(lVar2 + 0x88);
    func_0x000107c3f598();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)(lVar2 + 0x88);
    func_0x000107c3f0f4();
    func_0x000107c61180();
    uVar18 = *(undefined8 *)(lVar2 + 0xc0);
    uVar8 = *(undefined8 *)(lVar2 + 0x110);
    func_0x000107c4aeb4();
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_100c5e2bc;
    puStack_88 = &UNK_11084e7d0;
    uVar20 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar20);
    ppuVar9 = &puStack_a0;
    uStack_80 = uVar20;
    FUN_100c5e2bc();
    func_0x000107c61180();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_100c5e398;
    puStack_b0 = &UNK_11084e7d0;
    uVar20 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar20);
    ppuVar10 = &puStack_c8;
    uStack_a8 = uVar20;
    FUN_100c5e398();
    func_0x000107c61180();
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c4f5c0();
    func_0x000107c61180();
    uVar20 = uVar11;
    func_0x000107c3e6cc();
    func_0x000107c61180();
    uVar12 = uVar20;
    func_0x000107c42e38();
    func_0x000107c61180();
    uVar13 = uVar12;
    func_0x000107c499a4();
    func_0x000107c61180();
    uVar14 = *(undefined8 *)(lVar2 + 0x20);
    func_0x000107c3f300();
    uVar15 = *(undefined8 *)(lVar2 + 0x38);
    func_0x000107c3f330();
    func_0x000107c61180();
    puStack_f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_100c5e484;
    puStack_d8 = &UNK_11084e7d0;
    uVar21 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar21);
    ppuVar16 = &puStack_f0;
    uStack_d0 = uVar21;
    FUN_100c5e484();
    func_0x000107c61180();
    func_0x000107c49608(puVar19,param_2,uVar4,uVar17,uVar5,uVar6,uVar7,uVar18,uVar8,ppuVar9,ppuVar10
                        ,uVar13,uVar14,uVar15,ppuVar16);
    func_0x000107c61170(ppuVar16);
    func_0x000107c61170(uStack_d0);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar13);
    func_0x000107c61170(uVar12);
    func_0x000107c61170(uVar20);
    func_0x000107c61170(uVar11);
    func_0x000107c61170(ppuVar10);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(ppuVar9);
    func_0x000107c61170(uStack_80);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar19);
  return;
}



/* Entry: 100c5e2bc; end: 100c5e397;  */

void FUN_100c5e2bc(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c5e398; end: 100c5e473;  */

void FUN_100c5e398(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c5e474; end: 100c5e483; -[_TtC18SCCameraUIServices18SCCameraUIServices cameraZoomIndicatorVisibilityBehaviorSubject] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5e474(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1130385f8));
  return;
}



/* Entry: 100c5e484; end: 100c5e55f;  */

void FUN_100c5e484(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c5e560; end: 100c5eccf; -[SCFeatureZoomFactorsImpl initWithZoomFactorsConfig:valdiRuntimeProvider:cameraHardwareServicesAPI:captureDeviceManager:cameraHardwareResource:featureSettingsService:lensCarouselManager:cameraUserActionLogger:musicMode:isBatchCaptureActivatedObservable:cameraViewType:cameraZoomIndicatorVisibilityBehaviorSubject:timerModeFeature:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100c5e560(undefined4 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_160 [8];
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
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
  func_0x000107c61174(param_15);
  func_0x000107c61174(param_16);
  puStack_80 = PTR_PTR_1126efff8;
  puVar1 = &uStack_88;
  uStack_88 = param_2;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar9 = (long)_DAT_1127414a8;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_1127414ac,param_5);
    lVar9 = (long)_DAT_1127414b0;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_6;
    func_0x000107c61170(uVar2);
    lVar9 = (long)_DAT_1127414b4;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_7;
    func_0x000107c61170(uVar2);
    lVar10 = (long)_DAT_1127414b8;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined8 *)((long)puVar1 + lVar10) = param_8;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_1127414bc,param_9);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_1127414c0,param_10);
    lVar9 = (long)_DAT_1127414c4;
    func_0x000107c61174(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_12;
    func_0x000107c61170(uVar2);
    lVar9 = (long)_DAT_1127414c8;
    func_0x000107c61174(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_16;
    func_0x000107c61170(uVar2);
    lVar9 = (long)_DAT_1127414cc;
    func_0x000107c61174(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = param_13;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127414d0) = param_14;
    func_0x000107c611a0((long)puVar1 + (long)_DAT_1127414d4,param_15);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar10);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c44bec();
    *(char *)((long)puVar1 + (long)_DAT_1127414d8) = (char)uVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar10);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c44b9c();
    *(char *)((long)puVar1 + (long)_DAT_1127414dc) = (char)uVar4;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar10);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = uVar3;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c5c7b4();
    func_0x000107c61180();
    uVar7 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127414e0);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127414e0) = uVar4;
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar3);
    uVar7 = *(undefined8 *)((long)puVar1 + lVar10);
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = uVar7;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c3e588();
    func_0x000107c61180();
    uVar3 = uVar4;
    func_0x000107c40794();
    lVar9 = (long)_DAT_1127414e4;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined8 *)((long)puVar1 + lVar9) = uVar3;
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar7);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar10);
    func_0x000107c5c734(uVar4);
    func_0x000107c61180();
    uVar2 = uVar4;
    func_0x000107c5bcc0();
    func_0x000107c61180();
    func_0x000107c5ea14();
    *(undefined4 *)((long)puVar1 + (long)_DAT_1127414e8) = param_1;
    func_0x000107c61170(uVar2);
    func_0x000107c61170(uVar4);
    if (*(long *)((long)puVar1 + lVar9) == 0) {
      func_0x000107c3c588(puVar1);
    }
    func_0x000107c61144(auStack_90,puVar1);
    puVar5 = PTR_PTR_1126ae720;
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_100c5fd8c;
    puStack_a0 = &UNK_1109127b8;
    func_0x000107c6111c(auStack_98,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127414ec);
    *(undefined **)((long)puVar1 + (long)_DAT_1127414ec) = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_e0 = puVar6;
    uStack_d8 = 0xc2000000;
    puStack_d0 = &UNK_10619944c;
    puStack_c8 = &UNK_110858d90;
    func_0x000107c6111c(auStack_c0,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127414f0);
    *(undefined **)((long)puVar1 + (long)_DAT_1127414f0) = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_108 = puVar6;
    uStack_100 = 0xc2000000;
    puStack_f8 = &UNK_10619948c;
    puStack_f0 = &UNK_1109127e8;
    func_0x000107c6111c(auStack_e8,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127414f4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127414f4) = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_130 = puVar6;
    uStack_128 = 0xc2000000;
    puStack_120 = &UNK_1061994cc;
    puStack_118 = &UNK_110858d90;
    func_0x000107c6111c(auStack_110,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127414f8);
    *(undefined **)((long)puVar1 + (long)_DAT_1127414f8) = puVar5;
    func_0x000107c61170(uVar2);
    puVar5 = PTR_PTR_1126ae720;
    puStack_158 = puVar6;
    uStack_150 = 0xc2000000;
    puStack_148 = &UNK_10619950c;
    puStack_140 = &UNK_110912818;
    func_0x000107c61174(param_11);
    uStack_138 = param_11;
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127414fc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127414fc) = puVar5;
    func_0x000107c61170(uVar2);
    puVar6 = PTR_PTR_1126ae720;
    func_0x000107c6111c(auStack_160,auStack_90);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741500);
    *(undefined **)((long)puVar1 + (long)_DAT_112741500) = puVar6;
    func_0x000107c61170(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112741504) = 0xffffffffffffffff;
    puVar6 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741508);
    *(undefined **)((long)puVar1 + (long)_DAT_112741508) = puVar6;
    func_0x000107c61170(uVar2);
    func_0x000107c3c288(puVar1);
    func_0x000107c61120(auStack_160);
    func_0x000107c61170(uStack_138);
    func_0x000107c61120(auStack_110);
    func_0x000107c61120(auStack_e8);
    func_0x000107c61120(auStack_c0);
    func_0x000107c61120(auStack_98);
    func_0x000107c61120(auStack_90);
  }
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_15);
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
  return puVar1;
}



/* Entry: 100c5ecd0; end: 100c5ecdf; -[SCManagedCapturerState hasUltraWideSupportedDevice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100c5ecd0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075c48);
}



/* Entry: 100c5ece0; end: 100c5ecef; -[SCManagedCapturerState hasTelephotoSupportedDevice] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_100c5ece0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_113075c50);
}



/* Entry: 100c5ecf0; end: 100c5ecff; -[SCManagedCapturerState telephotoSwitchZoomThreshold] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5ecf0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_113075c58));
  return;
}



/* Entry: 100c5ed00; end: 100c5ed5b; -[SCManagedCapturerState backCamerasOpticalZoomFactors] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5ed00(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_113075c60);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    func_0x0001002ed07c(0);
    lVar2 = lVar1;
    func_0x000107c61434(lVar1);
    func_0x000107c5fc48();
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100c5ed5c; end: 100c5ed6b; -[SCManagedCapturerState zoomFactor] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100c5ed5c(long param_1)

{
  return *(undefined4 *)(param_1 + _DAT_113075c30);
}



/* Entry: 100c5ed6c; end: 100c5f7ef; -[SCFeatureZoomFactorsImpl _registerObservers] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5ed6c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_430 [8];
  undefined *puStack_428;
  undefined8 uStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined8 *puStack_408;
  undefined8 *puStack_400;
  undefined8 *puStack_3f8;
  undefined8 *puStack_3f0;
  undefined8 *puStack_3e8;
  undefined8 *puStack_3e0;
  undefined8 *puStack_3d8;
  undefined1 auStack_3d0 [8];
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined8 *puStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 *puStack_398;
  undefined8 *puStack_390;
  undefined8 *puStack_388;
  undefined8 *puStack_380;
  undefined8 *puStack_378;
  undefined1 auStack_370 [8];
  undefined *puStack_368;
  undefined8 uStack_360;
  code *pcStack_358;
  undefined *puStack_350;
  undefined8 *puStack_348;
  undefined8 *puStack_340;
  undefined8 *puStack_338;
  undefined8 *puStack_330;
  undefined8 *puStack_328;
  undefined8 *puStack_320;
  undefined8 *puStack_318;
  undefined1 auStack_310 [8];
  undefined *puStack_308;
  undefined8 uStack_300;
  undefined *puStack_2f8;
  undefined *puStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 *puStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 *puStack_2b8;
  undefined1 auStack_2b0 [8];
  undefined *puStack_2a8;
  undefined8 uStack_2a0;
  undefined *puStack_298;
  undefined *puStack_290;
  undefined8 *puStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 *puStack_270;
  undefined8 *puStack_268;
  undefined8 *puStack_260;
  undefined8 *puStack_258;
  undefined1 auStack_250 [8];
  undefined *puStack_248;
  undefined8 uStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 *puStack_228;
  undefined8 *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined8 *puStack_200;
  undefined8 *puStack_1f8;
  undefined1 auStack_1f0 [8];
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined1 auStack_1c8 [8];
  undefined *puStack_1c0;
  undefined8 uStack_1b8;
  code *pcStack_1b0;
  undefined *puStack_1a8;
  undefined8 *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 *puStack_190;
  undefined8 *puStack_188;
  undefined8 *puStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined1 auStack_168 [8];
  undefined8 uStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined1 uStack_148;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined1 auStack_80 [16];
  
  func_0x000107c61144(auStack_80,param_1);
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x2020000000;
  uStack_88 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  puStack_d8 = &uStack_e0;
  uStack_e0 = 0;
  uStack_d0 = 0x2020000000;
  uStack_c8 = 0;
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x2020000000;
  uStack_e8 = 0;
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x2020000000;
  uStack_108 = 0;
  puStack_138 = &uStack_140;
  uStack_140 = 0;
  uStack_130 = 0x2020000000;
  uStack_128 = 0;
  puStack_158 = &uStack_160;
  uStack_160 = 0;
  uStack_150 = 0x2020000000;
  uStack_148 = 0;
  lVar9 = (long)_DAT_112741564;
  if (*(long *)(param_1 + lVar9) == 0) {
    puVar1 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar8 = *(undefined8 *)(param_1 + lVar9);
    *(undefined **)(param_1 + lVar9) = puVar1;
    func_0x000107c61170(uVar8);
    lVar9 = (long)_DAT_1127414b8;
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    uVar8 = uVar2;
    func_0x000107c4c238();
    func_0x000107c61180();
    uVar3 = uVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar7 = uVar3;
    func_0x000107c52094();
    func_0x000107c61180();
    uVar4 = uVar7;
    func_0x000107c5d58c();
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_1c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1b8 = 0xc2000000;
    pcStack_1b0 = FUN_100c717e8;
    puStack_1a8 = &UNK_1109128d8;
    func_0x000107c6111c(auStack_168,auStack_80);
    puStack_1a0 = &uStack_a0;
    puStack_198 = &uStack_c0;
    puStack_190 = &uStack_e0;
    puStack_188 = &uStack_120;
    puStack_180 = &uStack_140;
    puStack_178 = &uStack_100;
    puStack_170 = &uStack_160;
    uVar5 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar2);
    uVar5 = *(undefined8 *)(param_1 + lVar9);
    func_0x000107c5c734(uVar5);
    func_0x000107c61180();
    uVar8 = uVar5;
    func_0x000107c4c238();
    func_0x000107c61180();
    uVar3 = uVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar7 = uVar3;
    func_0x000107c5bce8();
    func_0x000107c61180();
    puStack_1e8 = puVar1;
    uStack_1e0 = 0xc2000000;
    pcStack_1d8 = FUN_100c71a7c;
    puStack_1d0 = &UNK_11090d240;
    func_0x000107c6111c(auStack_1c8,auStack_80);
    uVar4 = uVar7;
    func_0x000107c5c320(uVar7);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar5);
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    uVar8 = uVar2;
    func_0x000107c4c238();
    func_0x000107c61180();
    uVar3 = uVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar7 = uVar3;
    func_0x000107c4b5d4();
    func_0x000107c61180();
    uVar4 = uVar7;
    func_0x000107c5d58c();
    func_0x000107c61180();
    puStack_248 = puVar1;
    uStack_240 = 0xc2000000;
    puStack_238 = &UNK_10619cba0;
    puStack_230 = &UNK_110912938;
    puStack_228 = &uStack_a0;
    func_0x000107c6111c(auStack_1f0,auStack_80);
    puStack_220 = &uStack_c0;
    puStack_218 = &uStack_e0;
    puStack_210 = &uStack_120;
    puStack_208 = &uStack_140;
    puStack_200 = &uStack_100;
    puStack_1f8 = &uStack_160;
    uVar5 = uVar4;
    func_0x000107c5c320(uVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    uVar8 = uVar2;
    func_0x000107c4c238();
    func_0x000107c61180();
    uVar3 = uVar8;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar7 = uVar3;
    func_0x000107c41948();
    func_0x000107c61180();
    uVar4 = uVar7;
    func_0x000107c5d58c();
    func_0x000107c61180();
    puStack_2a8 = puVar1;
    uStack_2a0 = 0xc2000000;
    puStack_298 = &UNK_10619ccfc;
    puStack_290 = &UNK_110912998;
    func_0x000107c6111c(auStack_250,auStack_80);
    puStack_288 = &uStack_c0;
    puStack_280 = &uStack_a0;
    puStack_278 = &uStack_e0;
    puStack_270 = &uStack_120;
    puStack_268 = &uStack_140;
    puStack_260 = &uStack_100;
    puStack_258 = &uStack_160;
    uVar5 = uVar4;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar2);
    uVar2 = *(undefined8 *)(param_1 + lVar9);
    func_0x000107c5c734(uVar2);
    func_0x000107c61180();
    uVar4 = uVar2;
    func_0x000107c4c238();
    func_0x000107c61180();
    uVar7 = uVar4;
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar3 = uVar7;
    func_0x000107c4c940();
    func_0x000107c61180();
    uVar8 = uVar3;
    func_0x000107c5d58c();
    func_0x000107c61180();
    puStack_308 = puVar1;
    uStack_300 = 0xc2000000;
    puStack_2f8 = &UNK_10619cefc;
    puStack_2f0 = &UNK_110912a58;
    puStack_2e8 = &uStack_100;
    func_0x000107c6111c(auStack_2b0,auStack_80);
    puStack_2e0 = &uStack_a0;
    puStack_2d8 = &uStack_c0;
    puStack_2d0 = &uStack_e0;
    puStack_2c8 = &uStack_120;
    puStack_2c0 = &uStack_140;
    puStack_2b8 = &uStack_160;
    uVar5 = uVar8;
    func_0x000107c5c320(uVar8);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar5);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar2);
    lVar9 = param_1 + _DAT_1127414c0;
    func_0x000107c61148();
    puStack_368 = puVar1;
    uStack_360 = 0xc2000000;
    pcStack_358 = FUN_100c5f888;
    puStack_350 = &UNK_110912ab8;
    puVar6 = auStack_310;
    func_0x000107c6111c(puVar6,auStack_80);
    puStack_348 = &uStack_140;
    puStack_340 = &uStack_a0;
    puStack_338 = &uStack_c0;
    puStack_330 = &uStack_e0;
    puStack_328 = &uStack_120;
    puStack_320 = &uStack_100;
    puStack_318 = &uStack_160;
    func_0x000100078e94();
    func_0x000107c61180();
    func_0x000107c5dc68(lVar9);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar9);
    uVar8 = *(undefined8 *)(param_1 + _DAT_1127414cc);
    puStack_3c8 = puVar1;
    uStack_3c0 = 0xc2000000;
    puStack_3b8 = &UNK_10619d370;
    puStack_3b0 = &UNK_110912a88;
    puStack_3a8 = &uStack_120;
    func_0x000107c6111c(auStack_370,auStack_80);
    puStack_3a0 = &uStack_a0;
    puStack_398 = &uStack_c0;
    puStack_390 = &uStack_e0;
    puStack_388 = &uStack_140;
    puStack_380 = &uStack_100;
    puStack_378 = &uStack_160;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar8);
    uVar7 = *(undefined8 *)(param_1 + _DAT_1127414c4);
    func_0x000107c42e38();
    func_0x000107c61180();
    uVar3 = uVar7;
    func_0x000107c4d23c();
    func_0x000107c61180();
    puStack_428 = puVar1;
    uStack_420 = 0xc2000000;
    puStack_418 = &UNK_10619d408;
    puStack_410 = &UNK_110912ae8;
    puStack_408 = &uStack_e0;
    func_0x000107c6111c(auStack_3d0,auStack_80);
    puStack_400 = &uStack_a0;
    puStack_3f8 = &uStack_c0;
    puStack_3f0 = &uStack_120;
    puStack_3e8 = &uStack_140;
    puStack_3e0 = &uStack_100;
    puStack_3d8 = &uStack_160;
    uVar8 = uVar3;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar7);
    uVar7 = *(undefined8 *)(param_1 + _DAT_1127414c8);
    func_0x000107c42e38(uVar7);
    func_0x000107c61180();
    uVar8 = uVar7;
    func_0x000107c5ca58();
    func_0x000107c61180();
    func_0x000107c6111c(auStack_430,auStack_80);
    uVar3 = uVar8;
    func_0x000107c5c320();
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(uVar3);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar7);
    func_0x000107c61120(auStack_430);
    func_0x000107c61120(auStack_3d0);
    func_0x000107c61120(auStack_370);
    func_0x000107c61120(auStack_310);
    func_0x000107c61120(auStack_2b0);
    func_0x000107c61120(auStack_250);
    func_0x000107c61120(auStack_1f0);
    func_0x000107c61120(auStack_1c8);
    func_0x000107c61120(auStack_168);
  }
  func_0x000107c60bcc(&uStack_160,8);
  func_0x000107c60bcc(&uStack_140,8);
  func_0x000107c60bcc(&uStack_120,8);
  func_0x000107c60bcc(&uStack_100,8);
  func_0x000107c60bcc(&uStack_e0,8);
  func_0x000107c60bcc(&uStack_c0,8);
  func_0x000107c60bcc(&uStack_a0,8);
  func_0x000107c61120(auStack_80);
  return;
}



/* Entry: 100c5f7f0; end: 100c5f887;  */

void FUN_100c5f7f0(long param_1,long param_2)

{
  func_0x000107c60bc8(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
  func_0x000107c60bc8(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  func_0x000107c60bc8(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  func_0x000107c60bc8(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
  func_0x000107c60bc8(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  func_0x000107c60bc8(param_1 + 0x48,*(undefined8 *)(param_2 + 0x48),8);
  func_0x000107c60bc8(param_1 + 0x50,*(undefined8 *)(param_2 + 0x50),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_copyWeak_11034d210)(param_1 + 0x58,param_2 + 0x58);
  return;
}



/* Entry: 100c5f888; end: 100c5fa4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5f888(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  param_1 = param_1 + 0x58;
  func_0x000107c61148();
  if (((param_1 != 0) && (param_2 != 0)) && (param_3 == 0)) {
    func_0x000107c61144(auStack_68,param_1);
    lVar1 = param_2;
    func_0x000107c5c734(param_2);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c3d168();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000100078e94();
    func_0x000107c61180();
    lVar4 = lVar2;
    func_0x000107c4da8c(lVar2);
    func_0x000107c61180();
    func_0x000107c6111c(auStack_70,auStack_68);
    lVar5 = lVar4;
    func_0x000107c5c320(lVar4);
    func_0x000107c61180();
    func_0x000107c3e924();
    func_0x000107c61170(lVar5);
    func_0x000107c61170(lVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar1);
    func_0x000107c61120(auStack_70);
    func_0x000107c61120(auStack_68);
  }
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 100c5fa4c; end: 100c5fae3;  */

void FUN_100c5fa4c(long param_1,undefined1 param_2)

{
  func_0x000107c3ebcc();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = param_2;
  param_1 = param_1 + 0x58;
  func_0x000107c61148(param_1);
  func_0x000107c3cd40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c5fae4; end: 100c5fc5f; -[SCFeatureZoomFactorsImpl _updatedObservableStateWithIsARSessionActive:isMultiCamActive:isMusicFeatureActive:isBatchCaptureActive:isLensCarouselActive:isVideoRecording:isTimerCountingDown:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5fae4(long param_1,undefined8 param_2,byte param_3,byte param_4,ulong param_5,
                  uint param_6,uint param_7,byte param_8,byte param_9)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  puVar4 = PTR_PTR_1126aff08;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127414b0);
  func_0x000107c5c734(uVar2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c40ee8();
  func_0x000107c61180();
  func_0x000107c4193c();
  func_0x000107c49a88();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
  uVar1 = (uint)puVar4 ^ 1;
  *(byte *)(param_1 + _DAT_112741514) = (param_3 | param_4 | param_8 | (byte)uVar1) & 1;
  if ((((((param_9 & 1) == 0) && ((param_8 & 1) == 0)) && ((param_3 & 1) == 0)) &&
      (((param_4 & 1) == 0 && ((param_5 & 1) == 0)))) &&
     (((param_6 & 1) == 0 && (((param_7 & 1) == 0 && (uVar1 == 0)))))) {
    lVar6 = (long)_DAT_1127414f4;
    lVar5 = *(long *)(param_1 + lVar6);
    func_0x000107c4500c();
    func_0x000107c61180();
    if (lVar5 == 0) {
      *(undefined1 *)(param_1 + _DAT_112741524) = 0;
    }
    else {
      uVar2 = *(undefined8 *)(param_1 + lVar6);
      func_0x000107c5c734();
      func_0x000107c61180();
      uVar3 = uVar2;
      func_0x000107c49eac();
      *(byte *)(param_1 + _DAT_112741524) = (byte)uVar3 ^ 1;
      func_0x000107c61170(uVar2);
    }
    func_0x000107c61170(lVar5);
  }
  else {
    *(undefined1 *)(param_1 + _DAT_112741524) = 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bedd010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updatePillViewVisibility_112594da8);
  return;
}



/* Entry: 100c5fc60; end: 100c5fcbf; -[SCCameraHardwareServicesAPIImpl currentCapturerState] */

void FUN_100c5fc60(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5bcc0();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c40794();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100c5fcc0; end: 100c5fd7b; -[SCFeatureZoomFactorsImpl _updatePillViewVisibility] */

/* WARNING: Possible PIC construction at 0x000100c5fd00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c5fd60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c5fd04) */
/* WARNING: Removing unreachable block (ram,0x000100c5fd18) */
/* WARNING: Removing unreachable block (ram,0x000100c5fd1c) */
/* WARNING: Removing unreachable block (ram,0x000100c5fd64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5fcc0(undefined8 param_1)

{
  func_0x000107c3c128();
  func_0x000107c61180();
  func_0x000107c550d8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c5fd7c; end: 100c5fd8b; -[SCFeatureZoomFactorsImpl _pillView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5fd7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127414ec),PTR_s_target_112678178);
  return;
}



/* Entry: 100c5fd8c; end: 100c5fdcb;  */

void FUN_100c5fd8c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c3b2e0();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 100c5fdcc; end: 100c5fe97; -[SCFeatureZoomFactorsImpl _createNativePillView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5fdcc(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  lVar1 = param_2;
  func_0x000107c3b300();
  func_0x000107c61180();
  puVar2 = PTR_PTR_1126c8750;
  func_0x000107c610f4(PTR_PTR_1126c8750);
  lVar3 = param_2;
  func_0x000107c3c744(param_2);
  uVar4 = *(undefined8 *)(param_2 + _DAT_1127414a8);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  func_0x000107c41980();
  func_0x000107c4960c(0x4040000000000000,param_1,puVar2,param_3,lVar1,lVar3,
                      *(undefined8 *)(param_2 + _DAT_1127414fc),1,param_2);
  func_0x000107c61170(uVar4);
  func_0x000107c5a830(0x3f800000,puVar2);
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c5fe98; end: 100c5ff6f; -[SCFeatureZoomFactorsImpl _createPillViewZoomStops] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c5fe98(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127414e4);
  func_0x000107c40794(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e16c(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8,param_2,uVar1);
  func_0x000107c61180();
  if (*(char *)(param_1 + _DAT_1127414dc) == '\x01') {
    func_0x000107c5c7b8(param_1,param_2,0);
    func_0x000107c61180();
    func_0x000107c61170();
    if (param_1 != 0) goto LAB_100c5ff40;
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c4d958(0x40000000,PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c61180();
  func_0x000107c3d798(puVar2,param_2,puVar3);
  func_0x000107c61170(puVar3);
LAB_100c5ff40:
  puVar3 = puVar2;
  func_0x000107c40794(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c5ff70; end: 100c60013; -[SCFeatureZoomFactorsImpl _shouldEnableZoomFactorsDialView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c5ff70(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127414a8);
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5abe4();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 100c60014; end: 100c60087; -[SCCameraZoomFactorsConfigurationImpl initWithCircumstanceEngine:] */

undefined1 * FUN_100c60014(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c61174(param_3);
  puStack_28 = PTR_PTR_1126e76a0;
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



/* Entry: 100c60088; end: 100c6008f; -[SCCameraZoomFactorsConfigurationImpl shouldEnableZoomFactorsDial] */

undefined8 FUN_100c60088(void)

{
  return 0;
}



/* Entry: 100c60090; end: 100c6009b; -[SCCameraZoomFactorsConfigurationImpl dialViewLongPressMinDuration] */

undefined8 FUN_100c60090(void)

{
  return 0x3fceb851eb851eb8;
}



/* Entry: 100c6009c; end: 100c601fb; -[SCZoomFactorsPillView initWithZoomFactorsStops:pillHeight:isButtonLongPressEnabled:longPressMinDuration:logger:useSimplifiedUI:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100c6009c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined1 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1126f0010;
  uStack_70 = param_3;
  func_0x000107c61154(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_70,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x000107c3acbc();
    func_0x000107c61180();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127415b4);
    *(undefined1 **)((long)puVar1 + (long)_DAT_1127415b4) = puVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127415b8) = param_1;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127415bc) = 0x3ff8000000000000;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127415c0) = 0x4024000000000000;
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127415c4) = param_6;
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127415c8) = param_2;
    lVar4 = (long)_DAT_1127415cc;
    func_0x000107c61174(param_7);
    uVar3 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    func_0x000107c61170(uVar3);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127415d0) = param_8;
    func_0x000107c611a0((undefined1 *)((long)puVar1 + (long)_DAT_1127415d4),param_9);
    func_0x000107c3c604(puVar1);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 100c601fc; end: 100c6048b; -[SCZoomFactorsPillView _adaptedZoomFactorsStops:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c601fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined *puVar29;
  undefined *puVar30;
  long lVar31;
  undefined8 uVar32;
  long lVar33;
  long lVar34;
  float fVar35;
  double dVar36;
  double dVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined *puStack_258;
  undefined *puStack_250;
  undefined *puStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  undefined *puStack_208;
  long lStack_200;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 auStack_110 [128];
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  dVar36 = 0.0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  lVar31 = param_3;
  func_0x000107c5b5c8(param_3,param_2,PTR_s_compare__1125ae690);
  func_0x000107c61180();
  lVar34 = lVar31;
  func_0x000107c4080c();
  if (lVar34 == 0) {
    puVar29 = (undefined *)0x0;
    puStack_158 = (undefined *)0x0;
    puVar30 = (undefined *)0x0;
  }
  else {
    puVar29 = (undefined *)0x0;
    puStack_158 = (undefined *)0x0;
    puVar30 = (undefined *)0x0;
    lVar27 = *plStack_140;
    do {
      lVar28 = 0;
      do {
        if (*plStack_140 != lVar27) {
          func_0x000107c61128(lVar31);
        }
        uVar32 = *(undefined8 *)(lStack_148 + lVar28 * 8);
        func_0x000107c436dc(uVar32);
        fVar35 = SUB84(dVar36,0);
        if (1.0 <= fVar35) {
          func_0x000107c436dc(uVar32);
          dVar37 = ABS((double)fVar35 + -1.0);
          dVar36 = ABS((double)fVar35 + 1.0) * 2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar37) && (bVar1 = false, !NAN(dVar37) && !NAN(dVar36)))
          {
            bVar1 = dVar37 < dVar36;
          }
          if (bVar1) {
            puVar3 = puVar29;
            if (puVar29 == (undefined *)0x0) {
              puVar29 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x000107c3e15c();
              func_0x000107c61180();
              puVar3 = puVar29;
              goto LAB_100c603b8;
            }
            goto LAB_100c603c4;
          }
          func_0x000107c436dc(uVar32);
          if (1.0 < SUB84(dVar36,0)) {
            puVar3 = puStack_158;
            if (puStack_158 == (undefined *)0x0) {
              puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
              func_0x000107c3e15c();
              func_0x000107c61180();
              puStack_158 = puVar3;
              goto LAB_100c603b8;
            }
            goto LAB_100c603c4;
          }
        }
        else {
          puVar3 = puVar30;
          if (puVar30 == (undefined *)0x0) {
            puVar30 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
            func_0x000107c3e15c();
            func_0x000107c61180();
            puVar3 = puVar30;
LAB_100c603b8:
            func_0x000107c3d798(puVar2,param_2,puVar3);
          }
LAB_100c603c4:
          func_0x000107c3d798(puVar3,param_2,uVar32);
        }
        lVar28 = lVar28 + 1;
      } while (lVar34 != lVar28);
      lVar34 = lVar31;
      func_0x000107c4080c(lVar31,param_2,&uStack_150,auStack_110,0x10);
    } while (lVar34 != 0);
  }
  func_0x000107c61170(lVar31);
  puVar3 = puVar2;
  func_0x000107c40794();
  func_0x000107c61170(puStack_158);
  func_0x000107c61170(puVar29);
  func_0x000107c61170(puVar30);
  func_0x000107c61170(puVar2);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_90) {
    func_0x000107c60e78();
    lStack_200 = *(long *)PTR____stack_chk_guard_11034bdc0;
    func_0x000107c5a050();
    lVar34 = (long)_DAT_1127415b8;
    dVar36 = *(double *)(param_3 + lVar34);
    lVar31 = param_3;
    func_0x000107c4aba4(param_3);
    func_0x000107c61180();
    func_0x000107c539d4(dVar36 * 0.5);
    func_0x000107c61170(lVar31);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f4();
    uVar32 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar38 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar39 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar40 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x000107c469a4(uVar32,uVar38,uVar39,uVar40);
    func_0x000107c5a050();
    lVar31 = (long)_DAT_1127415d0;
    if ((*(byte *)(param_3 + lVar31) & 1) == 0) {
      puVar29 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
      func_0x000107c61180();
    }
    else {
      puVar30 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xffffffff80000023);
      func_0x000107c61180();
      puVar29 = puVar30;
      func_0x000107c3fdd0(0x3fe0000000000000);
      func_0x000107c61180();
      func_0x000107c61170(puVar30);
    }
    func_0x000107c52b50(puVar2,param_2,puVar29);
    puVar30 = puVar2;
    func_0x000107c4aba4(puVar2);
    func_0x000107c61180();
    func_0x000107c562fc();
    func_0x000107c61170(puVar30);
    dVar36 = *(double *)(param_3 + lVar34);
    puVar30 = puVar2;
    func_0x000107c4aba4(puVar2);
    func_0x000107c61180();
    func_0x000107c539d4(dVar36 * 0.5);
    func_0x000107c61170(puVar30);
    puVar30 = puVar2;
    func_0x000107c4aba4(puVar2);
    func_0x000107c61180();
    func_0x000107c52e0c(0x3fe0000000000000);
    func_0x000107c61170(puVar30);
    puVar30 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    func_0x000107c61180();
    puVar3 = puVar30;
    func_0x000107c3fdd0(0x3fb999999999999a);
    func_0x000107c61180();
    func_0x000107c61178();
    func_0x000107c3ab24();
    puVar4 = puVar2;
    func_0x000107c4aba4(puVar2);
    func_0x000107c61180();
    func_0x000107c52df8();
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar30);
    func_0x000107c3d89c(param_3,param_2,puVar2);
    if ((*(byte *)(param_3 + lVar31) & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
      func_0x000107c610f4();
      func_0x000107c469a4(uVar32,uVar38,uVar39,uVar40);
      func_0x000107c5a050();
      puVar4 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
      func_0x000107c42448(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,0x10);
      func_0x000107c61180();
      func_0x000107c54418(puVar3,param_2,puVar4);
      func_0x000107c3d89c(puVar2,param_2,puVar3);
      puVar30 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      puVar5 = puVar3;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      puVar6 = puVar2;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      puVar7 = puVar5;
      func_0x000107c40280(puVar5,param_2,puVar6);
      func_0x000107c61180();
      puVar8 = puVar3;
      puStack_220 = puVar7;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      puVar9 = puVar2;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      puVar10 = puVar8;
      func_0x000107c40280(puVar8,param_2,puVar9);
      func_0x000107c61180();
      puVar11 = puVar3;
      puStack_218 = puVar10;
      func_0x000107c50890();
      func_0x000107c61180();
      puVar12 = puVar2;
      func_0x000107c50890(puVar2);
      func_0x000107c61180();
      puVar13 = puVar11;
      func_0x000107c40280(puVar11,param_2,puVar12);
      func_0x000107c61180();
      puVar14 = puVar3;
      puStack_210 = puVar13;
      func_0x000107c4ace0();
      func_0x000107c61180();
      puVar15 = puVar2;
      func_0x000107c4ace0(puVar2);
      func_0x000107c61180();
      puVar16 = puVar14;
      func_0x000107c40280(puVar14,param_2,puVar15);
      func_0x000107c61180();
      puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
      puStack_208 = puVar16;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_220,4);
      func_0x000107c61180();
      func_0x000107c3d048(puVar30,param_2,puVar17);
      func_0x000107c61170(puVar17);
      func_0x000107c61170(puVar16);
      func_0x000107c61170(puVar15);
      func_0x000107c61170(puVar14);
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar12);
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar9);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(puVar3);
    }
    lVar31 = param_3;
    func_0x000107c3b1e4();
    func_0x000107c61180();
    func_0x000107c3d89c(puVar2,param_2,lVar31);
    uVar32 = *(undefined8 *)(param_3 + _DAT_1127415dc);
    *(long *)(param_3 + _DAT_1127415dc) = lVar31;
    func_0x000107c61174(lVar31);
    func_0x000107c61170(uVar32);
    puVar30 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar3 = puVar2;
    func_0x000107c44d9c();
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c40290(*(undefined8 *)(param_3 + lVar34));
    func_0x000107c61180();
    puVar5 = puVar2;
    puStack_268 = puVar4;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar34 = param_3;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar6 = puVar5;
    func_0x000107c40280(puVar5,param_2,lVar34);
    func_0x000107c61180();
    puVar7 = puVar2;
    puStack_260 = puVar6;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar27 = param_3;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c40280(puVar7,param_2,lVar27);
    func_0x000107c61180();
    puVar9 = puVar2;
    puStack_258 = puVar8;
    func_0x000107c50890();
    func_0x000107c61180();
    lVar28 = param_3;
    func_0x000107c50890();
    func_0x000107c61180();
    puVar10 = puVar9;
    func_0x000107c40280(puVar9,param_2,lVar28);
    func_0x000107c61180();
    puVar11 = puVar2;
    puStack_250 = puVar10;
    func_0x000107c4ace0();
    func_0x000107c61180();
    lVar18 = param_3;
    func_0x000107c4ace0();
    func_0x000107c61180();
    puVar12 = puVar11;
    func_0x000107c40280(puVar11,param_2,lVar18);
    func_0x000107c61180();
    lVar19 = lVar31;
    puStack_248 = puVar12;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar13 = puVar2;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    lVar20 = lVar19;
    func_0x000107c40280(lVar19,param_2,puVar13);
    func_0x000107c61180();
    lVar21 = lVar31;
    lStack_240 = lVar20;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar14 = puVar2;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    lVar22 = lVar21;
    func_0x000107c40280(lVar21,param_2,puVar14);
    func_0x000107c61180();
    lVar23 = lVar31;
    lStack_238 = lVar22;
    func_0x000107c50890();
    func_0x000107c61180();
    puVar15 = puVar2;
    func_0x000107c50890();
    func_0x000107c61180();
    lVar33 = (long)_DAT_1127415bc;
    lVar24 = lVar23;
    func_0x000107c40284(-*(double *)(param_3 + lVar33),lVar23,param_2,puVar15);
    func_0x000107c61180();
    lVar25 = lVar31;
    lStack_230 = lVar24;
    func_0x000107c4ace0();
    func_0x000107c61180();
    puVar16 = puVar2;
    func_0x000107c4ace0(puVar2);
    func_0x000107c61180();
    lVar26 = lVar25;
    func_0x000107c40284(*(undefined8 *)(param_3 + lVar33),lVar25,param_2,puVar16);
    func_0x000107c61180();
    puVar17 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_228 = lVar26;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_268,9);
    func_0x000107c61180();
    func_0x000107c3d048(puVar30,param_2,puVar17);
    func_0x000107c61170(lVar31);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(lVar26);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(lVar25);
    func_0x000107c61170(lVar24);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(lVar23);
    func_0x000107c61170(lVar22);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(lVar21);
    func_0x000107c61170(lVar20);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(lVar19);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(lVar18);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(lVar28);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(lVar27);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(lVar34);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar29);
    func_0x000107c61170(puVar2);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_200) {
      return;
    }
    func_0x000107c60e78();
    puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    func_0x000107c610f4(PTR__OBJC_CLASS___UIStackView_1126aefe8);
    func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    func_0x000107c5a050();
    puVar29 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    func_0x000107c61180();
    func_0x000107c52b50(puVar3,param_2,puVar29);
    func_0x000107c61170(puVar29);
    func_0x000107c52b2c(puVar3,param_2,0);
    func_0x000107c52610(puVar3,param_2,3);
    func_0x000107c54280(puVar3,param_2,0);
    func_0x000107c59594(0,puVar3);
    func_0x000107c3c640(puVar2,param_2,puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c6048c; end: 100c60d0b; -[SCZoomFactorsPillView _setUpViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6048c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
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
  long lVar19;
  long lVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  double dVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5a050(param_1,param_2,0);
  lVar32 = (long)_DAT_1127415b8;
  dVar33 = *(double *)(param_1 + lVar32);
  lVar30 = param_1;
  func_0x000107c4aba4(param_1);
  func_0x000107c61180();
  func_0x000107c539d4(dVar33 * 0.5);
  func_0x000107c61170(lVar30);
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  func_0x000107c610f4();
  uVar34 = *(undefined8 *)PTR__CGRectZero_110347608;
  uVar35 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
  uVar36 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
  uVar37 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
  func_0x000107c469a4(uVar34,uVar35,uVar36,uVar37);
  func_0x000107c5a050();
  lVar30 = (long)_DAT_1127415d0;
  if ((*(byte *)(param_1 + lVar30) & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    func_0x000107c61180();
  }
  else {
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xffffffff80000023);
    func_0x000107c61180();
    puVar3 = puVar2;
    func_0x000107c3fdd0(0x3fe0000000000000);
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
  }
  func_0x000107c52b50(puVar1,param_2,puVar3);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(puVar2);
  dVar33 = *(double *)(param_1 + lVar32);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c539d4(dVar33 * 0.5);
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c52e0c(0x3fe0000000000000);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
  func_0x000107c61180();
  puVar4 = puVar2;
  func_0x000107c3fdd0(0x3fb999999999999a);
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ab24();
  puVar5 = puVar1;
  func_0x000107c4aba4(puVar1);
  func_0x000107c61180();
  func_0x000107c52df8();
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar2);
  func_0x000107c3d89c(param_1,param_2,puVar1);
  if ((*(byte *)(param_1 + lVar30) & 1) == 0) {
    puVar4 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
    func_0x000107c610f4();
    func_0x000107c469a4(uVar34,uVar35,uVar36,uVar37);
    func_0x000107c5a050();
    puVar5 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
    func_0x000107c42448(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8,param_2,0x10);
    func_0x000107c61180();
    func_0x000107c54418(puVar4,param_2,puVar5);
    func_0x000107c3d89c(puVar1,param_2,puVar4);
    puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar6 = puVar4;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar7 = puVar1;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar8 = puVar6;
    func_0x000107c40280(puVar6,param_2,puVar7);
    func_0x000107c61180();
    puVar9 = puVar4;
    puStack_c0 = puVar8;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar10 = puVar1;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar11 = puVar9;
    func_0x000107c40280(puVar9,param_2,puVar10);
    func_0x000107c61180();
    puVar12 = puVar4;
    puStack_b8 = puVar11;
    func_0x000107c50890();
    func_0x000107c61180();
    puVar13 = puVar1;
    func_0x000107c50890(puVar1);
    func_0x000107c61180();
    puVar14 = puVar12;
    func_0x000107c40280(puVar12,param_2,puVar13);
    func_0x000107c61180();
    puVar15 = puVar4;
    puStack_b0 = puVar14;
    func_0x000107c4ace0();
    func_0x000107c61180();
    puVar16 = puVar1;
    func_0x000107c4ace0(puVar1);
    func_0x000107c61180();
    puVar17 = puVar15;
    func_0x000107c40280(puVar15,param_2,puVar16);
    func_0x000107c61180();
    puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar17;
    func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_c0,4);
    func_0x000107c61180();
    func_0x000107c3d048(puVar2,param_2,puVar18);
    func_0x000107c61170(puVar18);
    func_0x000107c61170(puVar17);
    func_0x000107c61170(puVar16);
    func_0x000107c61170(puVar15);
    func_0x000107c61170(puVar14);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar11);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar4);
  }
  lVar30 = param_1;
  func_0x000107c3b1e4();
  func_0x000107c61180();
  func_0x000107c3d89c(puVar1,param_2,lVar30);
  uVar34 = *(undefined8 *)(param_1 + _DAT_1127415dc);
  *(long *)(param_1 + _DAT_1127415dc) = lVar30;
  func_0x000107c61174(lVar30);
  func_0x000107c61170(uVar34);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  puVar4 = puVar1;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40290(*(undefined8 *)(param_1 + lVar32));
  func_0x000107c61180();
  puVar6 = puVar1;
  puStack_108 = puVar5;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar32 = param_1;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c40280(puVar6,param_2,lVar32);
  func_0x000107c61180();
  puVar8 = puVar1;
  puStack_100 = puVar7;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar19 = param_1;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c40280(puVar8,param_2,lVar19);
  func_0x000107c61180();
  puVar10 = puVar1;
  puStack_f8 = puVar9;
  func_0x000107c50890();
  func_0x000107c61180();
  lVar20 = param_1;
  func_0x000107c50890();
  func_0x000107c61180();
  puVar11 = puVar10;
  func_0x000107c40280(puVar10,param_2,lVar20);
  func_0x000107c61180();
  puVar12 = puVar1;
  puStack_f0 = puVar11;
  func_0x000107c4ace0();
  func_0x000107c61180();
  lVar21 = param_1;
  func_0x000107c4ace0();
  func_0x000107c61180();
  puVar13 = puVar12;
  func_0x000107c40280(puVar12,param_2,lVar21);
  func_0x000107c61180();
  lVar22 = lVar30;
  puStack_e8 = puVar13;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar14 = puVar1;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar23 = lVar22;
  func_0x000107c40280(lVar22,param_2,puVar14);
  func_0x000107c61180();
  lVar24 = lVar30;
  lStack_e0 = lVar23;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar15 = puVar1;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar25 = lVar24;
  func_0x000107c40280(lVar24,param_2,puVar15);
  func_0x000107c61180();
  lVar26 = lVar30;
  lStack_d8 = lVar25;
  func_0x000107c50890();
  func_0x000107c61180();
  puVar16 = puVar1;
  func_0x000107c50890();
  func_0x000107c61180();
  lVar31 = (long)_DAT_1127415bc;
  lVar27 = lVar26;
  func_0x000107c40284(-*(double *)(param_1 + lVar31),lVar26,param_2,puVar16);
  func_0x000107c61180();
  lVar28 = lVar30;
  lStack_d0 = lVar27;
  func_0x000107c4ace0();
  func_0x000107c61180();
  puVar17 = puVar1;
  func_0x000107c4ace0(puVar1);
  func_0x000107c61180();
  lVar29 = lVar28;
  func_0x000107c40284(*(undefined8 *)(param_1 + lVar31),lVar28,param_2,puVar17);
  func_0x000107c61180();
  puVar18 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_c8 = lVar29;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_108,9);
  func_0x000107c61180();
  func_0x000107c3d048(puVar2,param_2,puVar18);
  func_0x000107c61170(lVar30);
  func_0x000107c61170(puVar18);
  func_0x000107c61170(lVar29);
  func_0x000107c61170(puVar17);
  func_0x000107c61170(lVar28);
  func_0x000107c61170(lVar27);
  func_0x000107c61170(puVar16);
  func_0x000107c61170(lVar26);
  func_0x000107c61170(lVar25);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(lVar24);
  func_0x000107c61170(lVar23);
  func_0x000107c61170(puVar14);
  func_0x000107c61170(lVar22);
  func_0x000107c61170(puVar13);
  func_0x000107c61170(lVar21);
  func_0x000107c61170(puVar12);
  func_0x000107c61170(puVar11);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(lVar19);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(lVar32);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return;
  }
  func_0x000107c60e78();
  puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f4(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x000107c5a050();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  func_0x000107c61180();
  func_0x000107c52b50(puVar3,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c52b2c(puVar3,param_2,0);
  func_0x000107c52610(puVar3,param_2,3);
  func_0x000107c54280(puVar3,param_2,0);
  func_0x000107c59594(0,puVar3);
  func_0x000107c3c640(puVar1,param_2,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c60d0c; end: 100c60dcb; -[SCZoomFactorsPillView _createButtonsStackView] */

void FUN_100c60d0c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f4(PTR__OBJC_CLASS___UIStackView_1126aefe8);
  func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x000107c5a050();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
  func_0x000107c61180();
  func_0x000107c52b50(puVar1,param_2,puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c52b2c(puVar1,param_2,0);
  func_0x000107c52610(puVar1,param_2,3);
  func_0x000107c54280(puVar1,param_2,0);
  func_0x000107c59594(0,puVar1);
  func_0x000107c3c640(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c60dcc; end: 100c60fcb; -[SCZoomFactorsPillView _setupButtonStackViewZoomFactors:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100c60dcc(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,long param_5,
             undefined8 param_6,undefined1 *param_7)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 **ppuVar6;
  undefined1 uVar7;
  undefined1 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  float fVar16;
  undefined1 *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_7);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x000107c3e15c();
  func_0x000107c61180();
  uVar15 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lVar11 = *(long *)(param_5 + _DAT_1127415b4);
  func_0x000107c61174(lVar11);
  uVar7 = SUB81(&uStack_140,0);
  puVar8 = auStack_100;
  uVar9 = 0x10;
  lVar13 = lVar11;
  func_0x000107c4080c();
  if (lVar13 != 0) {
    lVar14 = *plStack_130;
    do {
      lVar12 = 0;
      do {
        if (*plStack_130 != lVar14) {
          func_0x000107c61128(lVar11);
        }
        uVar9 = *(undefined8 *)(lStack_138 + lVar12 * 8);
        puVar5 = PTR_PTR_1126c8770;
        func_0x000107c610f4(PTR_PTR_1126c8770);
        func_0x000107c4d9a4();
        func_0x000107c61180();
        func_0x000107c436dc();
        param_2 = *(double *)(param_5 + _DAT_1127415b8) +
                  *(double *)(param_5 + _DAT_1127415bc) * -2.0;
        param_3 = *(undefined8 *)(param_5 + _DAT_1127415c0);
        param_4 = *(undefined8 *)(param_5 + _DAT_1127415c8);
        func_0x000107c49604(puVar5);
        func_0x000107c61170(uVar9);
        func_0x000107c3d798(puVar4);
        func_0x000107c3d5b4(param_7);
        func_0x000107c61170(puVar5);
        lVar12 = lVar12 + 1;
      } while (lVar13 != lVar12);
      uVar7 = SUB81(&uStack_140,0);
      puVar8 = auStack_100;
      uVar9 = 0x10;
      lVar13 = lVar11;
      func_0x000107c4080c();
    } while (lVar13 != 0);
  }
  func_0x000107c61170(lVar11);
  puVar5 = puVar4;
  func_0x000107c40794();
  uVar10 = *(undefined8 *)(param_5 + _DAT_1127415e0);
  *(undefined **)(param_5 + _DAT_1127415e0) = puVar5;
  func_0x000107c61170(uVar10);
  func_0x000107c61170(puVar4);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return param_7;
  }
  func_0x000107c60e78();
  ppuVar6 = &puStack_1c0;
  func_0x000107c61174(puVar8);
  func_0x000107c61174(uVar9);
  puStack_1b8 = PTR_PTR_1126f0018;
  puStack_1c0 = param_7;
  func_0x000107c61154(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&puStack_1c0,
                      PTR_s_initWithFrame__1125e2948);
  if (ppuVar6 == (undefined1 **)0x0) goto LAB_100c61118;
  *(undefined1 *)((long)ppuVar6 + (long)_DAT_1127415e4) = uVar7;
  *(undefined8 *)((long)ppuVar6 + (long)_DAT_1127415e8) = param_4;
  *(double *)((long)ppuVar6 + (long)_DAT_1127415ec) = param_2;
  *(undefined8 *)((long)ppuVar6 + (long)_DAT_1127415f0) = param_3;
  lVar13 = (long)_DAT_1127415f4;
  func_0x000107c61174(puVar8);
  uVar10 = *(undefined8 *)((long)ppuVar6 + lVar13);
  *(undefined1 **)((long)ppuVar6 + lVar13) = puVar8;
  func_0x000107c61170(uVar10);
  func_0x000107c611a0((undefined1 *)((long)ppuVar6 + (long)_DAT_1127415f8),uVar9);
  fVar16 = (float)uVar15;
  fVar2 = ABS(fVar16 + -1.0);
  fVar1 = ABS(fVar16 + 1.0) * 2.220446e-16;
  bVar3 = true;
  if ((0.0 <= fVar2) && (bVar3 = false, !NAN(fVar2) && !NAN(fVar1))) {
    bVar3 = fVar2 < fVar1;
  }
  if (bVar3) {
    uVar10 = 1;
LAB_100c61100:
    *(undefined8 *)((long)ppuVar6 + (long)_DAT_1127415fc) = uVar10;
  }
  else {
    if (fVar16 < 1.0) {
      uVar10 = 0;
      goto LAB_100c61100;
    }
    if (1.0 < fVar16) {
      uVar10 = 2;
      goto LAB_100c61100;
    }
  }
  func_0x000107c3c608(uVar15,ppuVar6);
LAB_100c61118:
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar8);
  return (undefined1 *)ppuVar6;
}



/* Entry: 100c60fcc; end: 100c6114b; -[SCZoomFactorsPillViewButton initWithZoomFactor:buttonSize:fontSize:isLongPressEnabled:longPressMinDuration:logger:delegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_100c60fcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9)

{
  float fVar1;
  float fVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  float fVar7;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar4 = &uStack_70;
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_68 = PTR_PTR_1126f0018;
  uStack_70 = param_5;
  func_0x000107c61154(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18),&uStack_70,
                      PTR_s_initWithFrame__1125e2948);
  if (puVar4 == (undefined8 *)0x0) goto LAB_100c61118;
  *(undefined1 *)((long)puVar4 + (long)_DAT_1127415e4) = param_7;
  *(undefined8 *)((long)puVar4 + (long)_DAT_1127415e8) = param_4;
  *(undefined8 *)((long)puVar4 + (long)_DAT_1127415ec) = param_2;
  *(undefined8 *)((long)puVar4 + (long)_DAT_1127415f0) = param_3;
  lVar6 = (long)_DAT_1127415f4;
  func_0x000107c61174(param_8);
  uVar5 = *(undefined8 *)((long)puVar4 + lVar6);
  *(undefined8 *)((long)puVar4 + lVar6) = param_8;
  func_0x000107c61170(uVar5);
  func_0x000107c611a0((undefined1 *)((long)puVar4 + (long)_DAT_1127415f8),param_9);
  fVar7 = (float)param_1;
  fVar2 = ABS(fVar7 + -1.0);
  fVar1 = ABS(fVar7 + 1.0) * 2.220446e-16;
  bVar3 = true;
  if ((0.0 <= fVar2) && (bVar3 = false, !NAN(fVar2) && !NAN(fVar1))) {
    bVar3 = fVar2 < fVar1;
  }
  if (bVar3) {
    uVar5 = 1;
LAB_100c61100:
    *(undefined8 *)((long)puVar4 + (long)_DAT_1127415fc) = uVar5;
  }
  else {
    if (fVar7 < 1.0) {
      uVar5 = 0;
      goto LAB_100c61100;
    }
    if (1.0 < fVar7) {
      uVar5 = 2;
      goto LAB_100c61100;
    }
  }
  func_0x000107c3c608(param_1,puVar4);
LAB_100c61118:
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  return (undefined1 *)puVar4;
}



/* Entry: 100c6114c; end: 100c61603; -[SCZoomFactorsPillViewButton _setUpViewsWithZoomFactor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6114c(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  int iVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  double dVar15;
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
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c5a050(param_2,param_3,0);
  lVar1 = param_2;
  func_0x000107c4aba4(param_2);
  func_0x000107c61180();
  func_0x000107c562fc();
  func_0x000107c61170(lVar1);
  lVar14 = (long)_DAT_1127415ec;
  dVar15 = *(double *)(param_2 + lVar14);
  lVar1 = param_2;
  func_0x000107c4aba4(param_2);
  func_0x000107c61180();
  func_0x000107c539d4(dVar15 * 0.5);
  func_0x000107c61170(lVar1);
  func_0x000107c6088c(&uStack_d0,0x3fe999999999999a,0x3fe999999999999a);
  uStack_f8 = uStack_c8;
  uStack_100 = uStack_d0;
  uStack_e8 = uStack_b8;
  uStack_f0 = uStack_c0;
  uStack_d8 = uStack_a8;
  uStack_e0 = uStack_b0;
  func_0x000107c5a03c(param_2,param_3,&uStack_100);
  lVar1 = param_2;
  func_0x000107c4aba4(param_2);
  func_0x000107c61180();
  func_0x000107c52e0c(0);
  func_0x000107c61170(lVar1);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd5);
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3fdd0(0x3fa999999999999a);
  func_0x000107c61180();
  func_0x000107c61178();
  func_0x000107c3ab24();
  lVar1 = param_2;
  func_0x000107c4aba4(param_2);
  func_0x000107c61180();
  func_0x000107c52df8();
  func_0x000107c61170(lVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f4();
  func_0x000107c48c2c();
  func_0x000107c3d6fc(param_2);
  if (*(char *)(param_2 + _DAT_1127415e4) == '\x01') {
    puVar3 = PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8;
    func_0x000107c610f4(PTR__OBJC_CLASS___UILongPressGestureRecognizer_1126b0da8);
    func_0x000107c48c2c();
    func_0x000107c56704(*(undefined8 *)(param_2 + _DAT_1127415e8));
    func_0x000107c3d6fc(param_2,param_3,puVar3);
    func_0x000107c61170(puVar3);
  }
  puVar3 = PTR__OBJC_CLASS___UILabel_1126aec30;
  func_0x000107c610f4();
  func_0x000107c469a4(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar13 = (long)_DAT_112741600;
  uVar12 = *(undefined8 *)(param_2 + lVar13);
  *(undefined **)(param_2 + lVar13) = puVar3;
  func_0x000107c61170(uVar12);
  func_0x000107c5a050(*(undefined8 *)(param_2 + lVar13),param_3,0);
  func_0x000107c59c74(*(undefined8 *)(param_2 + lVar13),param_3,1);
  puVar3 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x000107c3eb94(*(undefined8 *)(param_2 + _DAT_1127415f0),
                      *(undefined8 *)(param_2 + _DAT_1127415f0),PTR__OBJC_CLASS___UIFont_1126aec38,
                      param_3,*(undefined8 *)PTR__UIFontTextStyleCaption1_110345be8,0);
  func_0x000107c61180();
  func_0x000107c54adc(*(undefined8 *)(param_2 + lVar13),param_3,puVar3);
  func_0x000107c61170(puVar3);
  lVar1 = param_2;
  func_0x000107c3c94c(param_1,param_2,param_3,0);
  func_0x000107c61180();
  func_0x000107c59c6c(*(undefined8 *)(param_2 + lVar13),param_3,lVar1);
  func_0x000107c61170(lVar1);
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0xd5);
  func_0x000107c61180();
  func_0x000107c59c78(*(undefined8 *)(param_2 + lVar13),param_3,puVar3);
  func_0x000107c61170(puVar3);
  func_0x000107c3d89c(param_2,param_3,*(undefined8 *)(param_2 + lVar13));
  puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar1 = param_2;
  func_0x000107c44d9c();
  func_0x000107c61180();
  lVar4 = lVar1;
  func_0x000107c40290(*(undefined8 *)(param_2 + lVar14));
  func_0x000107c61180();
  lVar5 = param_2;
  lStack_a0 = lVar4;
  func_0x000107c5e308();
  func_0x000107c61180();
  lVar6 = lVar5;
  func_0x000107c40290(*(undefined8 *)(param_2 + lVar14));
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_2 + lVar13);
  lStack_98 = lVar6;
  func_0x000107c3f75c();
  func_0x000107c61180();
  lVar14 = param_2;
  func_0x000107c3f75c(param_2);
  func_0x000107c61180();
  uVar12 = uVar7;
  func_0x000107c40280(uVar7,param_3,lVar14);
  func_0x000107c61180();
  uVar8 = *(undefined8 *)(param_2 + lVar13);
  uStack_90 = uVar12;
  func_0x000107c3f764();
  func_0x000107c61180();
  lVar13 = param_2;
  func_0x000107c3f764(param_2);
  func_0x000107c61180();
  uVar9 = uVar8;
  func_0x000107c40280(uVar8,param_3,lVar13);
  func_0x000107c61180();
  puVar10 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_88 = uVar9;
  func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_3,&lStack_a0,4);
  func_0x000107c61180();
  func_0x000107c3d048(puVar3,param_3,puVar10);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(lVar14);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar1);
  iVar11 = 0;
  func_0x000107c5a838(param_2);
  func_0x000107c61170(puVar2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  func_0x000107c60e78();
  puVar3 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x000107c610f4();
  func_0x000107c3c3fc(puVar2);
  func_0x000107c4699c(puVar3,param_3,&PTR____CFConstantStringClassReference_110e29f18);
  puVar2 = puVar3;
  func_0x000107c44b6c();
  if ((int)puVar2 != 0) {
    puVar2 = puVar3;
    func_0x000107c4adac(puVar3);
    func_0x000107c416c0(puVar3,param_3,puVar2 + -2,2);
  }
  puVar2 = puVar3;
  func_0x000107c44a40(puVar3,param_3,&PTR____CFConstantStringClassReference_110e43a58);
  if ((int)puVar2 != 0) {
    func_0x000107c416c0(puVar3,param_3,0,1);
  }
  if (iVar11 != 0) {
    func_0x000107c3df20(puVar3,param_3,&PTR____CFConstantStringClassReference_110dbf278);
  }
  puVar2 = puVar3;
  func_0x000107c40794(puVar3);
  func_0x000107c61170(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c61604; end: 100c616ef; -[SCZoomFactorsPillViewButton _stringFromZoomFactor:isSelected:] */

void FUN_100c61604(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
  func_0x000107c610f4();
  func_0x000107c3c3fc(param_1);
  func_0x000107c4699c(puVar1,param_2,&PTR____CFConstantStringClassReference_110e29f18);
  puVar2 = puVar1;
  func_0x000107c44b6c();
  if ((int)puVar2 != 0) {
    puVar2 = puVar1;
    func_0x000107c4adac(puVar1);
    func_0x000107c416c0(puVar1,param_2,puVar2 + -2,2);
  }
  puVar2 = puVar1;
  func_0x000107c44a40(puVar1,param_2,&PTR____CFConstantStringClassReference_110e43a58);
  if ((int)puVar2 != 0) {
    func_0x000107c416c0(puVar1,param_2,0,1);
  }
  if (param_3 != 0) {
    func_0x000107c3df20(puVar1,param_2,&PTR____CFConstantStringClassReference_110dbf278);
  }
  puVar2 = puVar1;
  func_0x000107c40794(puVar1);
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c616f0; end: 100c61703; -[SCZoomFactorsPillViewButton _roundNumberDownToOneDecimal:] */

float FUN_100c616f0(float param_1)

{
  return (float)(int)(param_1 * 10.0) / 10.0;
}



/* Entry: 100c61704; end: 100c617cf; -[SCZoomFactorsPillViewButton setZoomFactor:isSelected:] */

/* WARNING: Possible PIC construction at 0x000100c6174c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c61750) */
/* WARNING: Removing unreachable block (ram,0x000100c61774) */
/* WARNING: Removing unreachable block (ram,0x000100c61798) */
/* WARNING: Removing unreachable block (ram,0x000100c61760) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c61704(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x000107c3c94c();
  func_0x000107c61180();
  func_0x000107c59c6c(*(undefined8 *)(param_1 + _DAT_112741600),param_2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 100c617d0; end: 100c618c3;  */

void FUN_100c617d0(undefined8 param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  
  if ((param_2 >> 1 & 1) != 0) {
    uVar1 = param_2 >> 4 & 1;
    if ((param_2 & 0x28) == 0) {
      uVar1 = 1;
    }
    if (((param_2 >> 2 & 1) == 0) || (uVar1 == 0)) {
      uVar2 = 1;
      if ((param_2 & 0x40000) == 0) {
        uVar2 = 2;
      }
      goto LAB_100c61810;
    }
  }
  uVar2 = 0;
LAB_100c61810:
  func_0x000107c61184();
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3,uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c618c4; end: 100c618f7; -[SCNetworkConnectivityMonitor connectivityStatus] */

undefined8 FUN_100c618c4(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c611ec(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c611f0(param_1 + 0x18);
  return uVar1;
}



/* Entry: 100c618f8; end: 100c61907;  */

void FUN_100c618f8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bea2db0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__setConnectivityStatus_prevConne_112586510,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 100c61908; end: 100c61a2f; -[SCNetworkConnectivityMonitor _setConnectivityStatus:prevConnectivityStatus:] */

/* WARNING: Possible PIC construction at 0x000100c619d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c619a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c619a8) */
/* WARNING: Removing unreachable block (ram,0x000100c619dc) */
/* WARNING: Removing unreachable block (ram,0x000100c619ac) */

void FUN_100c61908(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_3 == param_4) {
    return;
  }
  puVar1 = PTR_PTR_1126ba4e8;
  func_0x000107c49b90(PTR_PTR_1126ba4e8,param_2,param_4);
  if (((ulong)puVar1 & 1) == 0) {
    func_0x000107c49b90(PTR_PTR_1126ba4e8,param_2,param_3);
    func_0x000107c53788(param_1,param_2,param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    puVar1 = PTR_PTR_1126e0188;
    func_0x000107c610f4(PTR_PTR_1126e0188);
    func_0x000107c4629c();
    func_0x000107c4d664(uVar2,param_2,puVar1);
  }
  else {
    func_0x000107c53788(param_1,param_2,param_3);
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    puVar1 = PTR_PTR_1126e0188;
    func_0x000107c610f4(PTR_PTR_1126e0188);
    func_0x000107c4629c();
    func_0x000107c4d664(uVar2,param_2,puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 100c61a30; end: 100c61a5f; -[SCNetworkConnectivityMonitor setConnectivityStatus:] */

void FUN_100c61a30(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c611ec(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x18);
  return;
}



/* Entry: 100c61a60; end: 100c61ab7; +[_TtC36SCNetworkConnectivityMonitorServices13SCNetworkUtil connectivityValueForTracing:] */

undefined8 FUN_100c61a60(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lStack_18;
  
  uVar1 = param_3 + 1;
  if ((uVar1 < 6) && ((0x2fU >> (ulong)((uint)uVar1 & 0x1f) & 1) != 0)) {
    return *(undefined8 *)(&UNK_10dd0c810 + uVar1 * 8);
  }
  lStack_18 = param_3;
  func_0x000107c60614(&UNK_11077d010,&lStack_18,&UNK_11077d010,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100c61ab8);
  (*pcVar2)();
}



/* Entry: 100c61ab8; end: 100c61c4b; -[SCZoomFactorsPillView setZoomFactor:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c61ab8(undefined8 param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  
  *(float *)(param_2 + _DAT_1127415d8) = (float)param_1;
  lVar10 = (long)_DAT_1127415b4;
  uVar1 = *(ulong *)(param_2 + lVar10);
  uVar7 = param_1;
  func_0x000107c40808();
  uVar2 = *(ulong *)(param_2 + lVar10);
  func_0x000107c40808();
  uVar9 = uVar1;
  if (1 < uVar2) {
    uVar2 = 1;
    do {
      uVar3 = *(undefined8 *)(param_2 + lVar10);
      func_0x000107c4d9a4(uVar3,param_3,uVar2);
      func_0x000107c61180();
      uVar4 = uVar3;
      func_0x000107c4d9a4();
      func_0x000107c61180();
      func_0x000107c436dc();
      uVar8 = uVar7;
      func_0x000107c61170(uVar4);
      func_0x000107c61170(uVar3);
      uVar9 = uVar2;
      if ((float)param_1 < (float)uVar7) break;
      uVar2 = uVar2 + 1;
      uVar5 = *(ulong *)(param_2 + lVar10);
      func_0x000107c40808();
      uVar9 = uVar1;
      uVar7 = uVar8;
    } while (uVar2 < uVar5);
  }
  lVar11 = (long)_DAT_1127415e0;
  lVar6 = *(long *)(param_2 + lVar11);
  func_0x000107c40808();
  if (lVar6 != 0) {
    uVar1 = 0;
    do {
      uVar7 = *(undefined8 *)(param_2 + lVar11);
      func_0x000107c4d9a4(uVar7,param_3,uVar1);
      func_0x000107c61180();
      if (uVar9 - 1 == uVar1) {
        func_0x000107c5a838(param_1,uVar7,param_3,1);
      }
      else {
        uVar8 = *(undefined8 *)(param_2 + lVar10);
        func_0x000107c4d9a4(uVar8,param_3,uVar1);
        func_0x000107c61180();
        uVar4 = uVar8;
        func_0x000107c4d9a4();
        func_0x000107c61180();
        func_0x000107c436dc();
        func_0x000107c5a838(uVar7,param_3,0);
        func_0x000107c61170(uVar4);
        func_0x000107c61170(uVar8);
      }
      func_0x000107c61170(uVar7);
      uVar1 = uVar1 + 1;
      uVar2 = *(ulong *)(param_2 + lVar11);
      func_0x000107c40808();
    } while (uVar1 < uVar2);
  }
  return;
}



/* Entry: 100c61c4c; end: 100c6210b; -[SCZoomFactorsPillViewButton _animateViewWithIsSelected:] */

void FUN_100c61c4c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
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
  
  puVar1 = PTR__OBJC_CLASS___CASpringAnimation_1126b5720;
  func_0x000107c3dd18(PTR__OBJC_CLASS___CASpringAnimation_1126b5720,param_2,
                      &PTR____CFConstantStringClassReference_110dc8938);
  func_0x000107c61180();
  ppuVar7 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c4ca8;
  if (param_3 == 0) {
    ppuVar7 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111847a0;
  }
  func_0x000107c54ce4();
  func_0x000107c59e64(puVar1,param_2,ppuVar7);
  func_0x000107c5a874(puVar1);
  func_0x000107c54358(puVar1);
  func_0x000107c53de8(0x4034000000000000,puVar1);
  func_0x000107c598c4(0x4072c00000000000,puVar1);
  func_0x000107c56300(0x3ff0000000000000,puVar1);
  func_0x000107c55404(0,puVar1);
  puVar2 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x000107c3dd18(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110e20958);
  func_0x000107c61180();
  if ((param_3 & 1) == 0) {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c3fdd0(0x3fb999999999999a);
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c61178();
    func_0x000107c3ab24();
    func_0x000107c54ce4(puVar2,param_2,puVar5);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c61178();
    func_0x000107c3ab24();
    func_0x000107c59e64(puVar2,param_2,puVar4);
    ppuVar7 = (undefined **)0x0;
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c61178();
    func_0x000107c3ab24();
    func_0x000107c54ce4(puVar2,param_2,puVar4);
    func_0x000107c61170(puVar3);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c3fdd0(0x3fb999999999999a);
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c61178();
    func_0x000107c3ab24();
    func_0x000107c59e64(puVar2,param_2,puVar5);
    func_0x000107c61170(puVar4);
    ppuVar7 = &PTR__OBJC_CLASS___NSConstantDoubleNumber_1111847b0;
  }
  func_0x000107c61170(puVar3);
  func_0x000107c54358(0x3fd3333333333333,puVar2);
  puVar3 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x000107c43be0(0x3f000000,0x3fe66666,0x3f800000,0x3f800000,
                      PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  func_0x000107c61180();
  func_0x000107c59dfc(puVar2,param_2,puVar3);
  func_0x000107c61170(puVar3);
  ppuVar6 = &PTR____CFConstantStringClassReference_110e42c38;
  puVar3 = PTR__OBJC_CLASS___CABasicAnimation_1126b5708;
  func_0x000107c3dd18(PTR__OBJC_CLASS___CABasicAnimation_1126b5708,param_2,
                      &PTR____CFConstantStringClassReference_110e42c38);
  func_0x000107c61180();
  func_0x000107c54ce4();
  func_0x000107c59e64(puVar3,param_2,ppuVar7);
  func_0x000107c54358(0x3fd3333333333333,puVar3);
  puVar4 = PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140;
  func_0x000107c43be0(0x3f000000,0x3fe66666,0x3f800000,0x3f800000,
                      PTR__OBJC_CLASS___CAMediaTimingFunction_1126b6140);
  func_0x000107c61180();
  func_0x000107c59dfc(puVar3,param_2,puVar4);
  func_0x000107c61170(puVar4);
  uVar8 = param_1;
  func_0x000107c4aba4(param_1);
  func_0x000107c61180();
  func_0x000107c3d5a4();
  func_0x000107c61170(uVar8);
  uVar8 = param_1;
  func_0x000107c4aba4(param_1);
  func_0x000107c61180();
  func_0x000107c3d5a4();
  func_0x000107c61170(uVar8);
  uVar8 = param_1;
  func_0x000107c4aba4(param_1);
  func_0x000107c61180();
  func_0x000107c3d5a4();
  func_0x000107c61170(uVar8);
  if (param_3 == 0) {
    func_0x000107c6088c(&uStack_a0,0x3fe999999999999a,0x3fe999999999999a);
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    uStack_b8 = uStack_88;
    uStack_c0 = uStack_90;
    uStack_a8 = uStack_78;
    uStack_b0 = uStack_80;
    func_0x000107c5a03c(param_1,param_2,&uStack_d0);
    ppuVar7 = (undefined **)PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd6);
    func_0x000107c61180();
  }
  else {
    uStack_c8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uStack_d0 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uStack_b8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uStack_c0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    uStack_a8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uStack_b0 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    uStack_a0 = uStack_d0;
    uStack_98 = uStack_c8;
    uStack_90 = uStack_c0;
    uStack_88 = uStack_b8;
    uStack_80 = uStack_b0;
    uStack_78 = uStack_a8;
    func_0x000107c5a03c(param_1,param_2,&uStack_d0);
    ppuVar6 = (undefined **)PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x000107c5af88(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xd5);
    func_0x000107c61180();
    ppuVar7 = ppuVar6;
    func_0x000107c3fdd0(0x3fb999999999999a);
    func_0x000107c61180();
  }
  func_0x000107c61178(ppuVar7);
  func_0x000107c3ab24();
  uVar8 = param_1;
  func_0x000107c4aba4(param_1);
  func_0x000107c61180();
  func_0x000107c52b50();
  func_0x000107c61170(uVar8);
  uVar8 = 0;
  if (param_3 != 0) {
    func_0x000107c61170(ppuVar7);
    uVar8 = 0x3fd0000000000000;
    ppuVar7 = ppuVar6;
  }
  func_0x000107c61170(ppuVar7);
  func_0x000107c4aba4(param_1);
  func_0x000107c61180();
  func_0x000107c52e0c(uVar8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 100c6210c; end: 100c6216f; -[SCCameraUIZoomIndicatorVisibilityState initWithIsVisible:offsetFromCameraTimer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6210c(undefined8 param_1,long param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_2;
  func_0x000107c614f0();
  *(undefined1 *)(param_2 + _DAT_1130386c8) = param_4;
  *(undefined8 *)(param_2 + _DAT_1130386d0) = param_1;
  lStack_40 = param_2;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 100c62170; end: 100c621e3;  */

/* WARNING: Possible PIC construction at 0x000100c62190: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c621a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c621c0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c621ac) */
/* WARNING: Removing unreachable block (ram,0x000100c62194) */
/* WARNING: Removing unreachable block (ram,0x000100c621c4) */

void FUN_100c62170(long param_1)

{
  func_0x000107c61120(param_1 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_dispose_11034bce8)(*(undefined8 *)(param_1 + 0x50),8);
  return;
}



/* Entry: 100c621e4; end: 100c62253;  */

void FUN_100c621e4(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c4d1e4(param_1);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100c62254; end: 100c62263; -[SCFeatureMusicImpl musicPickerSelectionObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c62254(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11273eb24);
}



/* Entry: 100c62264; end: 100c622d3;  */

void FUN_100c62264(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x000107c5ca54(param_1);
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x000107c42e38();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 100c622d4; end: 100c62303;  */

bool FUN_100c622d4(long param_1)

{
  param_1 = param_1 + 0x20;
  func_0x000107c61148(param_1);
  func_0x000107c61170();
  return param_1 != 0;
}



/* Entry: 100c62304; end: 100c6250f;  */

void FUN_100c62304(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar1 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar1 == 0) {
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126c7a90;
    func_0x000107c610f4();
    puVar8 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_100c62510;
    puStack_88 = &UNK_11084e7d0;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar7);
    ppuVar3 = &puStack_a0;
    uStack_80 = uVar7;
    FUN_100c62510(ppuVar3);
    func_0x000107c61180();
    puStack_c8 = puVar8;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_100c625ec;
    puStack_b0 = &UNK_11084e7d0;
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar7);
    ppuVar4 = &puStack_c8;
    uStack_a8 = uVar7;
    FUN_100c625ec(ppuVar4);
    func_0x000107c61180();
    uVar10 = *(undefined8 *)(lVar1 + 0x50);
    uVar11 = *(undefined8 *)(lVar1 + 0xd8);
    uVar7 = *(undefined8 *)(lVar1 + 0x78);
    func_0x000107c3f0fc(uVar7);
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(lVar1 + 0x28);
    puStack_f0 = puVar8;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_100c626c8;
    puStack_d8 = &UNK_11084e7d0;
    uVar9 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar9);
    ppuVar5 = &puStack_f0;
    uStack_d0 = uVar9;
    FUN_100c626c8();
    func_0x000107c61180();
    lVar6 = *(long *)(lVar1 + 0x10);
    func_0x000107c519ac();
    uVar9 = *(undefined8 *)(lVar1 + 0x1c8);
    func_0x000107c3d0d8();
    func_0x000107c61180();
    func_0x000107c45c80(puVar2,param_2,ppuVar3,ppuVar4,uVar10,uVar11,uVar7,uVar12,ppuVar5,
                        lVar6 == 0xb);
    puVar8 = puVar2;
    func_0x000107c4b6f4();
    func_0x000107c61180();
    func_0x000107c61170(puVar2);
    func_0x000107c61170(uVar9);
    func_0x000107c61170(ppuVar5);
    func_0x000107c61170(uStack_d0);
    func_0x000107c61170(uVar7);
    func_0x000107c61170(ppuVar4);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(ppuVar3);
    func_0x000107c61170(uStack_80);
  }
  func_0x000107c61170(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 100c62510; end: 100c625eb;  */

void FUN_100c62510(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c625ec; end: 100c626c7;  */

void FUN_100c625ec(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c626c8; end: 100c627a3;  */

void FUN_100c626c8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c627a4; end: 100c629af; -[SCCameraTimerModeFeatureInitializer initWithCameraUserActionLogger:captureComponent:featureUpdateEventSubject:legacyCameraTooltipsService:cameraHardwareServicesAPI:cameraConfiguration:speedModeFeature:directorModeActive:cameraModeActivationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100c627a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_12);
  puStack_68 = PTR_PTR_1126efef8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_112740d74;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_3;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740d78;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_4;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740d7c;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_5;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740d80;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_6;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740d84;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_7;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740d88;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    func_0x000107c61170(uVar2);
    lVar3 = (long)_DAT_112740d8c;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112740d90) = param_10;
    lVar3 = (long)_DAT_112740d94;
    func_0x000107c61174(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_12;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100c629b0; end: 100c629b7; -[SCCameraTimerModeFeatureInitializer enabled] */

undefined8 FUN_100c629b0(void)

{
  return 1;
}



/* Entry: 100c629b8; end: 100c62a37; -[SCCameraTimerModeFeatureInitializer createInstance] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c629b8(void)

{
  func_0x000107c610f4(PTR_PTR_1126c8638);
  func_0x000107c45c80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c62a38; end: 100c62c9b; -[SCFeatureTimerModeImpl initWithCameraUserActionLogger:captureComponent:featureUpdateEventSubject:legacyCameraTooltipsService:cameraHardwareServicesAPI:cameraConfiguration:speedModeFeature:directorModeActive:cameraModeActivationController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_100c62a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined1 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_12);
  puStack_68 = PTR_PTR_1126f01f8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    lVar4 = (long)_DAT_11274166c;
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_3;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112741670;
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_4;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112741674;
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_5;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112741678;
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_6;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_11274167c;
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_7;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112741680;
    func_0x000107c61174(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_8;
    func_0x000107c61170(uVar2);
    lVar4 = (long)_DAT_112741684;
    func_0x000107c61174(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar4);
    *(undefined8 *)((long)puVar1 + lVar4) = param_9;
    func_0x000107c61170(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_112741688) = param_10;
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274168c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274168c) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae568;
    func_0x000107c610fc();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741690);
    *(undefined **)((long)puVar1 + (long)_DAT_112741690) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_112741694);
    *(undefined **)((long)puVar1 + (long)_DAT_112741694) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c611a0((long)puVar1 + (long)_DAT_112741698,param_12);
    puVar3 = PTR_PTR_1126ae810;
    func_0x000107c61160();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11274169c);
    *(undefined **)((long)puVar1 + (long)_DAT_11274169c) = puVar3;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return puVar1;
}



/* Entry: 100c62c9c; end: 100c62d9b; -[SCCameraTimerModeFeatureInitializer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c62cc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c62ce0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c62d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c62d20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c62d04) */
/* WARNING: Removing unreachable block (ram,0x000100c62ce4) */
/* WARNING: Removing unreachable block (ram,0x000100c62cc4) */
/* WARNING: Removing unreachable block (ram,0x000100c62d24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c62c9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112740d94,0);
  return;
}



/* Entry: 100c62d9c; end: 100c62daf; -[SCFeatureTimerModeImpl setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c62d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_1127416e8,param_3);
  return;
}



/* Entry: 100c62db0; end: 100c62e03; -[SCFeatureTimerModeImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c62db0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = (long)_DAT_1127416a4;
  func_0x000107c61174(param_3);
  func_0x000107c611a0(param_1 + lVar1,param_3);
  func_0x000107c3b1c8(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c62e04; end: 100c6302b; -[SCFeatureTimerModeImpl _createAndSetupView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c62e04(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [8];
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  func_0x000107c61174(param_3);
  func_0x000107c61144(auStack_68,param_1);
  puVar1 = PTR_PTR_1126ae720;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  puStack_88 = &UNK_1061a58d8;
  puStack_80 = &UNK_110913a68;
  func_0x000107c6111c(auStack_70,auStack_68);
  func_0x000107c61174(param_3);
  uStack_78 = param_3;
  func_0x000107c3e4fc();
  func_0x000107c61180();
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127416d0);
  *(undefined **)(param_1 + _DAT_1127416d0) = puVar1;
  func_0x000107c61170(uVar5);
  func_0x000107c3c648(param_1);
  puVar2 = PTR_PTR_1126b6ae8;
  func_0x000107c5a9f0(PTR_PTR_1126b6ae8);
  func_0x000107c61180();
  puVar1 = PTR_PTR_1126ae960;
  puVar3 = PTR_PTR_1126c82e8;
  func_0x000107c5ca54(PTR_PTR_1126c82e8);
  func_0x000107c61180();
  func_0x000107c3f044(puVar1);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126ae970;
  func_0x000107c4ca90(PTR_PTR_1126ae970);
  func_0x000107c61180();
  func_0x000107c61174(PTR___dispatch_main_q_11034be20);
  func_0x000107c6111c(auStack_a0,auStack_68);
  func_0x000107c5e070(puVar2);
  func_0x000107c611b0();
  func_0x000107c61170(PTR___dispatch_main_q_11034be20);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61120(auStack_a0);
  func_0x000107c61170(uStack_78);
  func_0x000107c61120(auStack_70);
  func_0x000107c61120(auStack_68);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c6302c; end: 100c6323b; -[SCFeatureTimerModeImpl _setupCameraModeActivationInfoObserver] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6302c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  func_0x000107c61144(auStack_78,param_1);
  lVar6 = (long)_DAT_112741698;
  lVar1 = param_1 + lVar6;
  func_0x000107c61148(lVar1);
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x000107c43bb4();
  func_0x000107c61180();
  lVar4 = lVar3;
  func_0x000107c421ac();
  func_0x000107c61180();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  puStack_90 = &UNK_1061a6098;
  puStack_88 = &UNK_11090baf0;
  func_0x000107c6111c(auStack_80,auStack_78);
  lVar5 = lVar4;
  func_0x000107c5c320(lVar4);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  param_1 = param_1 + lVar6;
  func_0x000107c61148(param_1);
  lVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c446a0();
  func_0x000107c61180();
  func_0x000107c6111c(auStack_a8,auStack_78);
  lVar3 = lVar2;
  func_0x000107c5c320(lVar2);
  func_0x000107c61180();
  func_0x000107c3e924();
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61120(auStack_a8);
  func_0x000107c61120(auStack_80);
  func_0x000107c61120(auStack_78);
  return;
}



/* Entry: 100c6323c; end: 100c632ab; -[_TtC24CameraModeActivationImpl30CameraModeActivationController handsFreeCameraModeStateObservableObjc] */

void FUN_100c6323c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  uVar1 = 0;
  func_0x00010080b714(0);
  func_0x000107c6157c(param_1);
  puVar2 = &UNK_102a33010;
  func_0x0001000bfde0(&UNK_102a33010,0,uVar1);
  puVar3 = puVar2;
  func_0x0001004575f0();
  func_0x000107c61574(param_1);
  func_0x000107c61574(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c632ac; end: 100c632b3; +[SCAttributedCameraTask timerMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c632ac(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  func_0x000107c614ec();
  lVar1 = param_1;
  func_0x000107c610f8();
  *(undefined1 *)(lVar1 + _DAT_11309aeb0) = 0x12;
  *(undefined8 *)(lVar1 + _DAT_11309aeb8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec0) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aec8) = 0;
  *(undefined8 *)(lVar1 + _DAT_11309aed0) = 0;
  lStack_30 = lVar1;
  lStack_28 = param_1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c632b4; end: 100c632c3; -[SCFeatureTimerModeImpl timerStateObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c632b4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112741690);
}



/* Entry: 100c632c4; end: 100c6339b; -[SCFeatureZoomFactorsImpl configureWithView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c632c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_3);
  lVar3 = (long)_DAT_11274150c;
  func_0x000107c61174(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = param_3;
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126ae720;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_100c635d4;
  puStack_40 = &UNK_110868d10;
  uStack_38 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c3e4fc(puVar2,param_2,&puStack_58);
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112741510);
  *(undefined **)(param_1 + _DAT_112741510) = puVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c3c604(param_1);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 100c6339c; end: 100c635d3; -[SCFeatureZoomFactorsImpl _setUpViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c6339c(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = param_1;
  if ((*(byte *)(param_1 + _DAT_112741520) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112741520) = 1;
    lVar1 = *(long *)(param_1 + _DAT_1127414ec);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5a050(lVar1,param_2,0);
      uVar2 = *(undefined8 *)(param_1 + _DAT_112741510);
      func_0x000107c5c734(uVar2);
      func_0x000107c61180();
      func_0x000107c3d89c();
      func_0x000107c61170(uVar2);
      puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      lVar3 = lVar1;
      func_0x000107c3ec1c();
      func_0x000107c61180();
      lVar11 = (long)_DAT_11274150c;
      uVar4 = *(undefined8 *)(param_1 + lVar11);
      func_0x000107c3f250();
      func_0x000107c61180();
      uVar2 = uVar4;
      func_0x000107c5cbe4();
      func_0x000107c61180();
      lVar5 = lVar3;
      func_0x000107c40284(0xc028000000000000,lVar3,param_2,uVar2);
      func_0x000107c61180();
      lVar6 = lVar1;
      lStack_78 = lVar5;
      func_0x000107c3f75c();
      func_0x000107c61180();
      uVar7 = *(undefined8 *)(param_1 + lVar11);
      func_0x000107c3f250(uVar7);
      func_0x000107c61180();
      uVar10 = uVar7;
      func_0x000107c3f75c();
      func_0x000107c61180();
      lVar11 = lVar6;
      func_0x000107c40280(lVar6,param_2,uVar10);
      func_0x000107c61180();
      puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
      lStack_70 = lVar11;
      func_0x000107c3e17c(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&lStack_78,2);
      func_0x000107c61180();
      func_0x000107c3d048(puVar9,param_2,puVar8);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(lVar11);
      func_0x000107c61170(uVar10);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(lVar6);
      func_0x000107c61170(lVar5);
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c550d8(lVar1,param_2,*(undefined1 *)(param_1 + _DAT_112741524));
    }
    func_0x000107c61170();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  puVar9 = PTR_PTR_1126b40c0;
  func_0x000107c61160(PTR_PTR_1126b40c0);
  func_0x000107c5726c();
  uVar10 = *(undefined8 *)(lVar1 + 0x20);
  func_0x000107c5ea18(uVar10);
  func_0x000107c61180();
  uVar2 = uVar10;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c3e2c8();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 100c635d4; end: 100c6364f;  */

void FUN_100c635d4(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b40c0;
  func_0x000107c61160(PTR_PTR_1126b40c0);
  func_0x000107c5726c();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5ea18(uVar2);
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c3e2c8();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c63650; end: 100c6365f; -[SCCameraOverlayView zoomFactorsViewContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_100c63650(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11276285c);
}



/* Entry: 100c63660; end: 100c636ab;  */

bool FUN_100c63660(long param_1)

{
  bool bVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  func_0x000107c61148();
  if (param_1 == 0) {
    bVar1 = false;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x000107c3f300(lVar2);
    bVar1 = lVar2 != 9;
  }
  func_0x000107c61170(param_1);
  return bVar1;
}



/* Entry: 100c636ac; end: 100c638c7;  */

void FUN_100c636ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  lVar2 = param_1 + 0x28;
  func_0x000107c61148();
  if (lVar2 == 0) {
    puVar13 = (undefined *)0x0;
  }
  else {
    puVar13 = PTR_PTR_1126c79c8;
    func_0x000107c610f4();
    uVar8 = *(undefined8 *)(lVar2 + 0x28);
    uVar11 = *(undefined8 *)(lVar2 + 0x38);
    uVar9 = *(undefined8 *)(lVar2 + 0xd0);
    uVar3 = *(undefined8 *)(lVar2 + 0x88);
    func_0x000107c3f0f4(uVar3);
    func_0x000107c61180();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    uVar10 = *(undefined8 *)(lVar2 + 0x1d0);
    uVar14 = *(undefined8 *)(lVar2 + 0x30);
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_100c638c8;
    puStack_88 = &UNK_11084e7d0;
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar12);
    ppuVar4 = &puStack_a0;
    uStack_80 = uVar12;
    FUN_100c638c8();
    func_0x000107c61180();
    puStack_c8 = puVar1;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_100c639a4;
    puStack_b0 = &UNK_11084e7d0;
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar12);
    ppuVar5 = &puStack_c8;
    uStack_a8 = uVar12;
    FUN_100c639a4();
    func_0x000107c61180();
    puStack_f0 = puVar1;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_100c63a80;
    puStack_d8 = &UNK_11084e7d0;
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar12);
    ppuVar6 = &puStack_f0;
    uStack_d0 = uVar12;
    FUN_100c63a80();
    func_0x000107c61180();
    puStack_118 = puVar1;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_100c63b5c;
    puStack_100 = &UNK_11084e7d0;
    uVar12 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c61174(uVar12);
    ppuVar7 = &puStack_118;
    uStack_f8 = uVar12;
    FUN_100c63b5c();
    func_0x000107c61180();
    func_0x000107c45c50(puVar13,param_2,uVar8,uVar11,uVar9,uVar3,uVar10,uVar14,ppuVar4,ppuVar5,
                        ppuVar6,ppuVar7,*(undefined8 *)(lVar2 + 0x1a0));
    func_0x000107c61170(ppuVar7);
    func_0x000107c61170(uStack_f8);
    func_0x000107c61170(ppuVar6);
    func_0x000107c61170(uStack_d0);
    func_0x000107c61170(ppuVar5);
    func_0x000107c61170(uStack_a8);
    func_0x000107c61170(ppuVar4);
    func_0x000107c61170(uStack_80);
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 100c638c8; end: 100c639a3;  */

void FUN_100c638c8(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c639a4; end: 100c63a7f;  */

void FUN_100c639a4(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c63a80; end: 100c63b5b;  */

void FUN_100c63a80(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c4f5c0(uVar1);
  func_0x000107c61180();
  func_0x000107c61144(auStack_28,uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = PTR_PTR_1126b0120;
  func_0x000107c610f4(PTR_PTR_1126b0120);
  func_0x000107c6111c(auStack_30,auStack_28);
  func_0x000107c482ac(puVar2);
  func_0x000107c61120(auStack_30);
  func_0x000107c61120(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}


