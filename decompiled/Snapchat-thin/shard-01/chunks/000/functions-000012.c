/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100c0fe4c; end: 100c0fe53; -[SCMixerInternalNamespaceData fetchLocationMetadata] */

undefined8 FUN_100c0fe4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 100c0fe54; end: 100c0fe5b; -[SCMixerInternalNamespaceData mixerRequestMetadata] */

undefined8 FUN_100c0fe54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 100c0fe5c; end: 100c0fe63; -[SCMixerRequestMetadata contextualInfo] */

undefined8 FUN_100c0fe5c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100c0fe64; end: 100c0fe6b; -[SCMixerRequestMetadata paginationToken] */

undefined8 FUN_100c0fe64(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c0fe6c; end: 100c0ffdf; -[SCMixerUpdateStrategyMetadata initWithScheduleNamespace:activeItemsCount:ttl:lastUpdateDate:fetchLocationMetadata:contextualInfo:paginationToken:] */

undefined1 *
FUN_100c0fe6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174(param_9);
  puStack_58 = PTR_PTR_11270a400;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    func_0x000107c61170(uVar3);
  }
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c0ffe0; end: 100c100f3; -[SCLensScheduleNamespaceUpdateStrategy namespaceToUpdateForUpdateMetadata:updatingParams:] */

void FUN_100c0ffe0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar1 = param_4;
  func_0x000107c5d710();
  if (lVar1 == 3) {
    uVar4 = param_3;
    func_0x000107c3feb8(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8f448);
    func_0x000107c61180();
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    lVar1 = param_4;
    func_0x000107c5d710(param_4);
    func_0x000107c5ab54(uVar4,param_2,param_3,lVar1);
    if ((int)uVar4 != 0) {
      puVar2 = PTR_PTR_1126ae6b8;
      func_0x000107c42538(PTR_PTR_1126ae6b8);
      func_0x000107c61180();
      goto LAB_100c100d0;
    }
    uVar3 = *(undefined8 *)(param_1 + 8);
    func_0x000107c5c734(uVar3);
    func_0x000107c61180();
    uVar4 = uVar3;
    func_0x000107c4d438();
    func_0x000107c61180();
    func_0x000107c61170(uVar3);
  }
  puVar2 = PTR_PTR_1126ae6b8;
  func_0x000107c4a8a4(PTR_PTR_1126ae6b8,param_2,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
LAB_100c100d0:
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c100f4; end: 100c101bf; -[SCMixerBackgroundUpdateBlocker shouldBlockUpdateMetadata:updatingMode:] */

bool FUN_100c100f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  if (param_4 == 1) {
    lVar2 = *(long *)(param_1 + 8);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c4aa88();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x000107c5c734();
    func_0x000107c61180();
    lVar2 = lVar4;
    func_0x000107c44f98();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (lVar3 == 0) {
      bVar1 = false;
    }
    else if (lVar2 == 0) {
      bVar1 = true;
    }
    else {
      lVar4 = lVar2;
      func_0x000107c3fec0(lVar2,param_2,lVar3);
      bVar1 = lVar4 == -1;
    }
    func_0x000107c61170(lVar2);
    func_0x000107c61170(lVar3);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 100c101c0; end: 100c1025b;  */

void FUN_100c101c0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar5 = PTR_PTR_1126de3a0;
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x000107c5c734(uVar3);
  func_0x000107c61180();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c5c734(uVar4);
  func_0x000107c61180();
  func_0x000107c3ccc4(puVar5,param_2,uVar3,uVar1,uVar2,uVar4,*(undefined8 *)(param_1 + 0x40));
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100c1025c; end: 100c102cb;  */

void FUN_100c1025c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae790;
  func_0x000107c610f4(PTR_PTR_1126ae790);
  func_0x000107c470d0();
  puVar2 = PTR_PTR_1126de3c8;
  func_0x000107c610f4(PTR_PTR_1126de3c8);
  func_0x000107c468e0();
  func_0x000107c61170(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c102cc; end: 100c1043f; -[SCMixerNamespaceDataUpdater initWithFetcher:metadataStoreProvider:feedMetadataStoreProvider:lensDataConfig:performer:] */

undefined1 *
FUN_100c102cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_58 = PTR_PTR_112701628;
  uStack_60 = param_1;
  func_0x000107c61154(&uStack_60,PTR_s_init_1125d9248);
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
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    func_0x000107c61170(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x000107c520a4();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    func_0x000107c61170(uVar2);
    *(undefined4 *)((long)puVar1 + 0x40) = 0;
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c10440; end: 100c104fb; +[SCLensScheduleNamespaceServiceEntryPoint _updateStrategyWithUpdateStateProvider:fetchingInfoProvider:lensCarouselStudySettings:lensDataConfig:interactionHistoryProvider:] */

void FUN_100c10440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de498;
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c610f4(puVar1);
  func_0x000107c468e4();
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c104fc; end: 100c1050b; -[SCMixerScheduledNamespaceManager namespaceDataObservableWithNamespaceProvider:feedDataProvider:] */

void FUN_100c104fc(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d5390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_namespaceDataObservableForNamesp_112612ef8,*(undefined8 *)(param_1 + 8));
  return;
}



/* Entry: 100c1050c; end: 100c105e7; -[SCMixerNamespaceDocObjectStore namespaceDataObservableForNamespaces:] */

void FUN_100c1050c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  func_0x000107c61174(param_3);
  lVar1 = param_3;
  func_0x000107c40808();
  if (lVar1 == 0) {
    puVar3 = (undefined *)0x0;
  }
  else {
    func_0x000107c3bf68(param_1,param_2,param_3);
    func_0x000107c61180();
    uVar2 = param_1;
    func_0x000107c3dbc0();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    puVar3 = PTR_PTR_1126ae6b8;
    func_0x000107c4cd50(PTR_PTR_1126ae6b8,param_2,uVar2);
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 100c105e8; end: 100c10803; -[SCMixerNamespaceDocObjectStore _namespaceDataSubjectsForNamespaces:] */

undefined1 *
FUN_100c105e8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long unaff_x23;
  undefined8 unaff_x24;
  long lVar9;
  long lVar10;
  long lStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined *puStack_158;
  long lStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  puVar6 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c40808(param_3);
  func_0x000107c41998();
  func_0x000107c61180();
  func_0x000107c611ec(param_1 + 0x50);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  func_0x000107c61174(param_3);
  puVar7 = auStack_e8;
  uVar8 = 0x10;
  lVar2 = param_3;
  func_0x000107c4080c();
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          func_0x000107c61128(param_3);
        }
        unaff_x24 = *(undefined8 *)(lStack_128 + lVar10 * 8);
        unaff_x23 = param_1;
        func_0x000107c3c968();
        func_0x000107c61180();
        func_0x000107c3ef0c();
        func_0x000107c61180();
        func_0x000107c56bd8(puVar1);
        func_0x000107c61170(unaff_x24);
        func_0x000107c61170(unaff_x23);
        lVar10 = lVar10 + 1;
      } while (lVar2 != lVar10);
      puVar7 = auStack_e8;
      uVar8 = 0x10;
      lVar2 = param_3;
      puVar6 = &uStack_130;
      func_0x000107c4080c();
    } while (lVar2 != 0);
  }
  func_0x000107c61170(param_3);
  puVar3 = puVar1;
  func_0x000107c40794(puVar1);
  func_0x000107c611f0(param_1 + 0x50);
  func_0x000107c61170(puVar1);
  lVar2 = param_3;
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return puVar3;
  }
  func_0x000107c60e78();
  func_0x000107c611f0(param_1 + 0x50);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_3);
  lVar9 = lVar2;
  func_0x000107c60bd8();
  plVar4 = &lStack_180;
  pcStack_138 = FUN_100c10804;
  uStack_170 = unaff_x24;
  lStack_168 = unaff_x23;
  lStack_160 = lVar2;
  puStack_158 = puVar1;
  lStack_150 = param_1;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x000107c61174(puVar6);
  func_0x000107c61174(puVar7);
  func_0x000107c61174(uVar8);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_178 = PTR_PTR_1127016e8;
  lStack_180 = lVar9;
  func_0x000107c61154(&lStack_180,PTR_s_init_1125d9248);
  if (plVar4 != (long *)0x0) {
    func_0x000107c61174(uVar8);
    uVar5 = *(undefined8 *)((long)plVar4 + 8);
    *(undefined8 *)((long)plVar4 + 8) = uVar8;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(puVar6);
    uVar5 = *(undefined8 *)((long)plVar4 + 0x10);
    *(undefined8 **)((long)plVar4 + 0x10) = puVar6;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(puVar7);
    uVar5 = *(undefined8 *)((long)plVar4 + 0x18);
    *(undefined1 **)((long)plVar4 + 0x18) = puVar7;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_6);
    uVar5 = *(undefined8 *)((long)plVar4 + 0x20);
    *(undefined8 *)((long)plVar4 + 0x20) = param_6;
    func_0x000107c61170(uVar5);
    func_0x000107c61174(param_7);
    uVar5 = *(undefined8 *)((long)plVar4 + 0x28);
    *(undefined8 *)((long)plVar4 + 0x28) = param_7;
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar6);
  return (undefined1 *)plVar4;
}



/* Entry: 100c10804; end: 100c10927; -[SCLensScheduleNamespaceTtlUpdateStrategy initWithFetchingInfoProvider:dataUpdateStateProvider:lensCarouselStudySettings:lensDataConfig:interactionHistoryProvider:] */

undefined1 *
FUN_100c10804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  puStack_48 = PTR_PTR_1127016e8;
  uStack_50 = param_1;
  func_0x000107c61154(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x000107c61174(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    func_0x000107c61170(uVar2);
    func_0x000107c61174(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    func_0x000107c61170(uVar2);
  }
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c10928; end: 100c109c7; -[SCLensScheduleNamespaceTtlUpdateStrategy namespacesToUpdateFromUpdateMetadata:updatingParams:] */

void FUN_100c10928(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000107c61174(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_100c10a7c;
  puStack_48 = &UNK_110c8f418;
  uStack_40 = param_1;
  uStack_38 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c3feb8(param_3,param_2,&puStack_60);
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 100c109c8; end: 100c10a7b; -[SCMixerNamespaceDocObjectStore _subjectForNamespace:] */

void FUN_100c109c8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x000107c3ef0c(param_3);
  func_0x000107c61180();
  func_0x000107c611e8(param_1 + 0x50);
  puVar1 = *(undefined **)(param_1 + 0x40);
  func_0x000107c4d9e8(puVar1,param_2,param_3);
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126ae820;
    func_0x000107c61160(PTR_PTR_1126ae820);
    func_0x000107c56bd8(*(undefined8 *)(param_1 + 0x40),param_2,puVar1,param_3);
  }
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c10a7c; end: 100c10c57;  */

void FUN_100c10a7c(long param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  func_0x000107c61174(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x000107c5d710(*(undefined8 *)(param_1 + 0x28));
  func_0x000107c3bb5c();
  uVar9 = param_2;
  if (iVar1 != 0) {
    uVar2 = *(ulong *)(param_1 + 0x20);
    func_0x000107c3aff0();
    if ((uVar2 & 1) == 0) {
      func_0x000107c518f4(param_2);
      func_0x000107c61180();
    }
    else {
      uVar9 = 0;
    }
    goto LAB_100c10c1c;
  }
  uVar3 = *(ulong *)(param_1 + 0x28);
  func_0x000107c4062c();
  func_0x000107c61180();
  uVar2 = param_2;
  func_0x000107c4062c();
  func_0x000107c61180();
  uVar4 = uVar3;
  func_0x000107c5b41c();
  uVar5 = uVar2;
  func_0x000107c5b41c();
  if (uVar4 == uVar5) {
    uVar4 = uVar3;
    func_0x000107c3f27c();
    uVar5 = uVar2;
    func_0x000107c3f27c();
    if (uVar4 != uVar5) goto LAB_100c10be0;
    uVar4 = uVar3;
    func_0x000107c5b3f0();
    uVar5 = uVar2;
    func_0x000107c5b3f0();
    if (uVar4 != uVar5) goto LAB_100c10be0;
    uVar4 = uVar3;
    func_0x000107c4ec30();
    func_0x000107c61180();
    uVar5 = uVar2;
    func_0x000107c4ec30();
    func_0x000107c61180();
    if (uVar4 == uVar5) {
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
    }
    else {
      uVar6 = uVar3;
      func_0x000107c4ec30();
      func_0x000107c61180();
      uVar7 = uVar2;
      func_0x000107c4ec30(uVar2);
      func_0x000107c61180();
      uVar8 = uVar6;
      func_0x000107c49d0c();
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar4);
      if ((uVar8 & 1) == 0) goto LAB_100c10be0;
    }
    uVar9 = 0;
  }
  else {
LAB_100c10be0:
    func_0x000107c518f4(param_2);
    func_0x000107c61180();
  }
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
LAB_100c10c1c:
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
  return;
}



/* Entry: 100c10c58; end: 100c10cbb; -[_TtC34SCMemPlatBackupMonitorServicesImpl14BackupEventBus currentEvent] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c10c58(long param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  func_0x00010006c804();
  uVar1 = *(undefined8 *)(param_1 + _DAT_112e284c8);
  func_0x000107c61174(uVar1);
  func_0x000100070bfc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c10cbc; end: 100c10ee3; -[SCLensScheduleNamespaceTtlUpdateStrategy _isNamespaceDataShouldBeUpdated:updatingMode:] */

bool FUN_100c10cbc(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  double dVar7;
  double dVar8;
  
  func_0x000107c61174(param_3);
  uVar5 = param_3;
  func_0x000107c5d094();
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x000107c5d384();
  dVar8 = (double)((uVar3 & 0xffffffff) / 1000);
  func_0x000107c61170(uVar5);
  uVar5 = param_3;
  func_0x000107c4aa88(param_3);
  func_0x000107c61180();
  uVar3 = uVar5;
  func_0x000107c4132c();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  puVar4 = PTR_PTR_1126de870;
  uVar5 = param_3;
  func_0x000107c3d12c(param_3);
  func_0x000107c4dd78(puVar4,param_2,uVar3,uVar5);
  if (puVar4 == (undefined *)0x1) {
    uVar5 = *(ulong *)(param_1 + 0x18);
    func_0x000107c4a0d0(uVar5,param_2,param_3);
    if ((uVar5 & 1) == 0) {
      iVar2 = (int)*(undefined8 *)(param_1 + 0x10);
      func_0x000107c5ab68();
      if (iVar2 == 0) goto LAB_100c10eac;
    }
    uVar5 = param_3;
    func_0x000107c4aa88();
    func_0x000107c61180();
    if (uVar5 != 0) {
      puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x000107c61180();
      uVar6 = param_3;
      func_0x000107c4aa88(param_3);
      func_0x000107c61180();
      func_0x000107c5c9ec(puVar4,param_2,uVar6);
      dVar7 = dVar8;
      func_0x000107c4cf8c(*(undefined8 *)(param_1 + 0x10));
      func_0x000107c61170(uVar6);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(uVar5);
      bVar1 = dVar7 <= dVar8;
      goto LAB_100c10eb8;
    }
  }
  else {
    if (puVar4 != (undefined *)0x0) {
      bVar1 = false;
      goto LAB_100c10eb8;
    }
    if ((param_4 == 1) && (uVar5 = param_3, func_0x000107c3d12c(), uVar5 != 0)) {
      uVar5 = param_3;
      func_0x000107c4aa88();
      func_0x000107c61180();
      func_0x000107c61170();
      if (uVar5 != 0) {
        puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
        func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
        func_0x000107c61180();
        uVar5 = param_3;
        func_0x000107c4aa88(param_3);
        func_0x000107c61180();
        func_0x000107c5c9ec(puVar4,param_2,uVar5);
        dVar7 = dVar8;
        func_0x000107c4cf8c(*(undefined8 *)(param_1 + 0x10));
        bVar1 = dVar7 <= dVar8;
        func_0x000107c61170(uVar5);
        func_0x000107c61170(puVar4);
        goto LAB_100c10eb8;
      }
    }
  }
LAB_100c10eac:
  bVar1 = true;
LAB_100c10eb8:
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_3);
  return bVar1;
}



/* Entry: 100c10ee4; end: 100c10eeb; -[SCMixerUpdateStrategyMetadata ttl] */

undefined8 FUN_100c10ee4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c10eec; end: 100c10ef3; -[SCMixerUpdateStrategyMetadata lastUpdateDate] */

undefined8 FUN_100c10eec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100c10ef4; end: 100c10efb; -[SCMixerUpdateStrategyMetadata activeItemsCount] */

undefined8 FUN_100c10ef4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c10efc; end: 100c10f83; +[SCScheduledLensMetadataStoreUpdateManager onUpdateActionWithNextScheduleFetchDate:scheduledLensesCount:] */

undefined8 FUN_100c10efc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  uVar3 = 0;
  if (param_4 != 0) {
    if (param_3 == 0) {
      uVar3 = 1;
    }
    else {
      puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x000107c41324(PTR__OBJC_CLASS___NSDate_1126ae770);
      func_0x000107c61180();
      lVar2 = param_3;
      func_0x000107c3fec0(param_3,param_2,puVar1);
      func_0x000107c61170(puVar1);
      uVar3 = 0;
      if (lVar2 != -1) {
        uVar3 = 2;
      }
    }
  }
  func_0x000107c61170(param_3);
  return uVar3;
}



/* Entry: 100c10f84; end: 100c10f8b; -[SCMixerUpdateStrategyMetadata contextualInfo] */

undefined8 FUN_100c10f84(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100c10f8c; end: 100c11027; -[SCObserverAsyncUnsubscriber setDisposable:] */

/* WARNING: Possible PIC construction at 0x000100c10ff4: Changing call to branch */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c10f8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c61174(param_3);
  lVar2 = (long)_DAT_1127967ac;
  func_0x000107c611ec(param_1 + lVar2);
  if (*(char *)(param_1 + _DAT_1127967a8) == '\x01') {
    func_0x000107c4218c(param_3);
    func_0x000107c611f0(param_1 + lVar2);
    uVar1 = param_3;
  }
  else {
    lVar2 = (long)_DAT_1127967b0;
    func_0x000107c61174(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c11028; end: 100c1103b; -[SCQueuePerformerSubscriptionObservable .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100c11028(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127966e8,0);
  return;
}



/* Entry: 100c1103c; end: 100c1109b; -[SCMixerUpdateStrategyMetadata .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c11054: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1106c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c11084: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c11070) */
/* WARNING: Removing unreachable block (ram,0x000100c11058) */
/* WARNING: Removing unreachable block (ram,0x000100c11088) */

void FUN_100c1103c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x38,0);
  return;
}



/* Entry: 100c1109c; end: 100c114b7;  */

void FUN_100c1109c(ulong param_1)

{
  ulong *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined *apuStack_78 [3];
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + 0x10));
  if (param_1 >> 0x3e == 0) {
    uVar15 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar15 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar15 = param_1;
    }
    func_0x000107c60480();
  }
  puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar15 != 0) {
    apuStack_78[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
    FUN_100c11668(0,uVar15 & ((long)uVar15 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100c114a8);
      (*pcVar3)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      puVar13 = (undefined8 *)(param_1 + 0x20);
      do {
        puVar16 = apuStack_78[0];
        uVar11 = *puVar13;
        uVar5 = uVar11;
        func_0x000107c614f0();
        func_0x000107c615f0(uVar11);
        FUN_100c1173c();
        func_0x000107c615e8(uVar11);
        uVar18 = *(ulong *)(puVar16 + 0x10);
        apuStack_78[0] = puVar16;
        if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar18) {
          FUN_100c11668(1 < *(ulong *)(puVar16 + 0x18),uVar18 + 1,1);
        }
        *(ulong *)(apuStack_78[0] + 0x10) = uVar18 + 1;
        *(undefined8 *)(apuStack_78[0] + uVar18 * 8 + 0x20) = uVar5;
        uVar15 = uVar15 - 1;
        puVar13 = puVar13 + 1;
        puVar16 = apuStack_78[0];
      } while (uVar15 != 0);
    }
    else {
      uVar18 = 0;
      do {
        puVar16 = apuStack_78[0];
        uVar17 = uVar18;
        func_0x000101ebd7a0(uVar18,param_1);
        uVar19 = uVar17;
        func_0x000107c614f0();
        FUN_100c1173c();
        func_0x000107c615e8(uVar17);
        uVar17 = *(ulong *)(puVar16 + 0x10);
        apuStack_78[0] = puVar16;
        if (*(ulong *)(puVar16 + 0x18) >> 1 <= uVar17) {
          FUN_100c11668(1 < *(ulong *)(puVar16 + 0x18),uVar17 + 1,1);
        }
        uVar18 = uVar18 + 1;
        *(ulong *)(apuStack_78[0] + 0x10) = uVar17 + 1;
        *(ulong *)(apuStack_78[0] + uVar17 * 8 + 0x20) = uVar19;
        puVar16 = apuStack_78[0];
      } while (uVar15 != uVar18);
    }
  }
  puVar4 = puVar16;
  FUN_100c15eb4(puVar16);
  func_0x000107c6142c(puVar16);
  uVar15 = *(ulong *)(unaff_x20 + 0x38);
  lVar2 = *(long *)(unaff_x20 + 0x40);
  func_0x0001000a8868(unaff_x20 + 0x20,uVar15);
  (**(code **)(lVar2 + 8))(puVar4,uVar15,lVar2);
  func_0x000107c6142c(puVar4);
  if (param_1 >> 0x3e == 0) {
    uVar18 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar18 = param_1 & 0xffffffffffffff8;
    if ((param_1 & 0x8000000000000000) != 0) {
      uVar18 = param_1;
    }
    func_0x000107c60480();
  }
  if (uVar18 != 0) {
    uVar17 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100c11488);
          (*pcVar3)();
        }
        uVar19 = *(ulong *)(param_1 + uVar17 * 8 + 0x20);
        func_0x000107c615f0(uVar19);
        uVar10 = uVar15;
      }
      else {
        uVar19 = uVar17;
        uVar10 = param_1;
        func_0x000101ebd7a0();
      }
      if (SCARRY8(uVar17,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100c11484);
        (*pcVar3)();
      }
      uVar14 = uVar17 + 1;
      uVar15 = uVar19;
      func_0x000107c44fdc();
      func_0x000107c61180();
      uVar6 = uVar15;
      func_0x000107c5faec();
      func_0x000107c61170(uVar15);
      func_0x000107c61428(unaff_x20 + 0x68,apuStack_78,0x21,0);
      func_0x000107c615f0(uVar19);
      uVar7 = *(ulong *)(unaff_x20 + 0x68);
      func_0x000107c61558();
      lVar12 = *(long *)(unaff_x20 + 0x68);
      *(undefined8 *)(unaff_x20 + 0x68) = 0x8000000000000000;
      uVar8 = uVar6;
      uVar9 = uVar10;
      func_0x000100029284();
      uVar15 = (ulong)~(uint)uVar9 & 1;
      lVar2 = *(long *)(lVar12 + 0x10) + uVar15;
      if (SCARRY8(*(long *)(lVar12 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100c1148c);
        (*pcVar3)();
      }
      if (*(long *)(lVar12 + 0x18) < lVar2) {
        FUN_100c1c188(lVar2,uVar7);
        uVar8 = uVar6;
        uVar15 = uVar10;
        func_0x000100029284();
        if (((uint)uVar9 & 1) != ((uint)uVar15 & 1)) {
          func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100c114b8);
          (*pcVar3)();
        }
LAB_100c113d4:
        if ((uVar9 & 1) == 0) goto LAB_100c113dc;
LAB_100c11288:
        uVar5 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar8 * 8);
        *(ulong *)(*(long *)(lVar12 + 0x38) + uVar8 * 8) = uVar19;
        func_0x000107c6142c(uVar10);
        func_0x000107c615e8(uVar5);
      }
      else {
        uVar15 = uVar9;
        if ((uVar7 & 1) != 0) goto LAB_100c113d4;
        func_0x000101ebe2fc();
        if ((uVar9 & 1) != 0) goto LAB_100c11288;
LAB_100c113dc:
        lVar2 = lVar12 + (uVar8 >> 6) * 8;
        *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (uVar8 & 0x3f);
        puVar1 = (ulong *)(*(long *)(lVar12 + 0x30) + uVar8 * 0x10);
        *puVar1 = uVar6;
        puVar1[1] = uVar10;
        *(ulong *)(*(long *)(lVar12 + 0x38) + uVar8 * 8) = uVar19;
        if (SCARRY8(*(long *)(lVar12 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100c11490);
          (*pcVar3)();
        }
        *(long *)(lVar12 + 0x10) = *(long *)(lVar12 + 0x10) + 1;
      }
      uVar5 = *(undefined8 *)(unaff_x20 + 0x68);
      *(long *)(unaff_x20 + 0x68) = lVar12;
      func_0x000107c6142c(uVar5);
      func_0x000107c614a8(apuStack_78);
      func_0x000107c615e8(uVar19);
      uVar17 = uVar17 + 1;
    } while (uVar14 != uVar18);
  }
  FUN_100c1c424();
  return;
}



/* Entry: 100c114b8; end: 100c11513;  */

void FUN_100c114b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de6a8;
  func_0x000107c61174(param_2);
  func_0x000107c610f4(puVar1);
  func_0x000107c4792c();
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 100c11514; end: 100c11667;  */

undefined * FUN_100c11514(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100c11668);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x112e38b10;
    FUN_100c11684(0x112e38b10,&PTR__OBJC_CLASS___UNNotificationCategory_1126a9788,0x112e38b50,
                  &UNK_10da23348);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_100c116fc(0,0x112e38b10,&PTR__OBJC_CLASS___UNNotificationCategory_1126a9788);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 100c11668; end: 100c11683;  */

void FUN_100c11668(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100c11514();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 100c11684; end: 100c116fb;  */

void FUN_100c11684(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_100c116fc(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 100c116fc; end: 100c1173b;  */

void FUN_100c116fc(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100c1173c; end: 100c11a03;  */

undefined * FUN_100c1173c(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *unaff_x20;
  undefined *puVar12;
  ulong uVar13;
  long lStack_70;
  ulong uStack_68;
  
  puVar12 = unaff_x20;
  func_0x000107c3d008();
  func_0x000107c61180();
  puVar4 = (undefined *)0x0;
  FUN_100c116fc(0,0x112d65830,&PTR_PTR_1126c08c0);
  puVar5 = puVar12;
  func_0x000107c5fc54(puVar12,puVar4);
  func_0x000107c61170(puVar12);
  if ((ulong)puVar5 >> 0x3e == 0) {
    puVar12 = *(undefined **)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar12 = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar5) {
      puVar12 = puVar5;
    }
    func_0x000107c60480();
    puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar8;
  if (puVar12 != (undefined *)0x0) {
    uVar13 = 0;
    do {
      if (((ulong)puVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100c118fc);
          (*pcVar3)();
        }
        uVar7 = *(ulong *)(puVar5 + uVar13 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar13;
        func_0x000101ebd944(uVar13,puVar5,&PTR_PTR_1126c08c0,0x112d65830);
      }
      if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100c118f8);
        (*pcVar3)();
      }
      puVar11 = (undefined *)(uVar13 + 1);
      puVar4 = unaff_x20;
      uStack_68 = uVar7;
      FUN_100c12cfc(&lStack_70,&uStack_68,unaff_x20,param_1);
      func_0x000107c61170(uVar7);
      lVar2 = lStack_70;
      if (lStack_70 != 0) {
        puVar6 = puVar8;
        func_0x000107c61550();
        if ((((int)puVar6 == 0) || ((long)puVar8 < 0)) ||
           (puVar6 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar8 >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar4 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar8) {
              puVar4 = puVar8;
            }
            func_0x000107c60480(puVar4);
          }
          puVar4 = puVar4 + 1;
          puVar6 = (undefined *)0x0;
          FUN_100c13594(0,puVar4,1,puVar8);
        }
        uVar10 = (ulong)puVar6 & 0xffffffffffffff8;
        uVar7 = *(ulong *)(uVar10 + 0x10);
        puVar1 = (undefined *)(uVar7 + 1);
        puVar8 = puVar6;
        if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar7) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
          puVar4 = puVar1;
          FUN_100c13594(puVar8,puVar1,1,puVar6);
          uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
        }
        *(undefined **)(uVar10 + 0x10) = puVar1;
        *(long *)(uVar10 + uVar7 * 8 + 0x20) = lVar2;
      }
      uVar13 = uVar13 + 1;
    } while (puVar11 != puVar12);
  }
  func_0x000107c6142c(puVar5);
  func_0x000107c44fdc();
  func_0x000107c61180();
  if (unaff_x20 == (undefined *)0x0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar4);
  }
  uVar9 = 0;
  FUN_100c116fc(0,0x112e38b40,&PTR__OBJC_CLASS___UNNotificationAction_1126a9798);
  puVar4 = puVar8;
  func_0x000107c5fc48(puVar8,uVar9);
  func_0x000107c6142c(puVar8);
  puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  puVar5 = PTR__OBJC_CLASS___UNNotificationCategory_1126a9788;
  func_0x000107c61168(PTR__OBJC_CLASS___UNNotificationCategory_1126a9788);
  func_0x000107c3f714();
  func_0x000107c61180();
  func_0x000107c61170(unaff_x20);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar12);
  return puVar5;
}



/* Entry: 100c11a04; end: 100c11a67; -[_TtC37SCAddFriendNotificationCategoryPlugin35AddFriendNotificationCategoryPlugin actions] */

void FUN_100c11a04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_100c11a68();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  FUN_100c12528(0,0x112d65830,&PTR_PTR_1126c08c0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 100c11a68; end: 100c11beb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100c11a68(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112df91a8;
  lVar2 = *(long *)(unaff_x20 + _DAT_112df91a8);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    func_0x000100c11acc();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61434();
    func_0x000107c6142c(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar3;
}



/* Entry: 100c11bec; end: 100c11c03;  */

void FUN_100c11bec(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5c078;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f5c078,
                      &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 100c11c04; end: 100c11cb7; -[SCMixerUpdateNamespaceData initWithNamespaces:mixerUpdateParameters:namespaceGroupId:] */

undefined1 *
FUN_100c11c04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  puStack_38 = PTR_PTR_112701820;
  uStack_40 = param_1;
  func_0x000107c61154(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    func_0x000107c61170(uVar3);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100c11cb8; end: 100c11cbb; +[SCMixerLoggingHelper displayLogForNamespaceData:onlyInMemory:] */

void FUN_100c11cb8(void)

{
  return;
}



/* Entry: 100c11cbc; end: 100c11cdf; -[SCMixerUpdateParameters copyWithZone:] */

undefined8 FUN_100c11cbc(undefined8 param_1)

{
  func_0x000107c61174();
  return param_1;
}



/* Entry: 100c11ce0; end: 100c11d87;  */

/* WARNING: Possible PIC construction at 0x000100c11d48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c11d64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c11d4c) */
/* WARNING: Removing unreachable block (ram,0x000100c11d68) */

void FUN_100c11ce0(long param_1,undefined8 param_2)

{
  func_0x000107c61174(param_2);
  func_0x000107c61148(param_1 + 0x20);
  func_0x000107c4d434(param_2);
  func_0x000107c61180();
  func_0x000107c4cfe8(param_2);
  func_0x000107c61180();
  func_0x000107c4d41c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 100c11d88; end: 100c11d8f; -[SCMixerUpdateNamespaceData namespaces] */

undefined8 FUN_100c11d88(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c11d90; end: 100c11d97; -[SCMixerUpdateNamespaceData mixerUpdateParameters] */

undefined8 FUN_100c11d90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c11d98; end: 100c11daf; -[SCMixerUpdateNamespaceData namespaceGroupId] */

undefined8 FUN_100c11d98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c11db0; end: 100c11e43; -[SCMixerNamespaceService _updateNamespaces:mixerUpdateParameters:groupId:] */

/* WARNING: Possible PIC construction at 0x000100c11e20: Changing call to branch */

void FUN_100c11db0(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  lVar1 = param_3;
  func_0x000107c40808();
  if (lVar1 == 0 && param_5 == 0) {
    func_0x000107c61170(param_4);
  }
  else {
    param_3 = *(long *)(param_1 + 0x10);
    func_0x000107c5c734(param_3);
    func_0x000107c61180();
    func_0x000107c5d588();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c11e44; end: 100c12043; +[SCMixerNamespaceService _namespaceDataFromInternalNamespaceData:] */

void FUN_100c11e44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar2 = PTR_PTR_1126de640;
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c3d128(param_3);
  func_0x000107c61180();
  func_0x000107c3bf28(puVar2,param_2,uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar3 = PTR_PTR_1126de640;
  uVar1 = param_3;
  func_0x000107c4ec28(param_3);
  func_0x000107c61180();
  func_0x000107c3bf28(puVar3,param_2,uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar4 = PTR_PTR_1126de648;
  func_0x000107c610f4();
  uVar1 = param_3;
  func_0x000107c518f4(param_3);
  func_0x000107c61180();
  uVar5 = param_3;
  func_0x000107c5d094();
  func_0x000107c61180();
  uVar6 = param_3;
  func_0x000107c4aa88(param_3);
  func_0x000107c61180();
  uVar7 = param_3;
  func_0x000107c4d6d4(param_3);
  func_0x000107c61180();
  uVar8 = param_3;
  func_0x000107c427b0();
  func_0x000107c61180();
  uVar9 = param_3;
  func_0x000107c4aa18();
  func_0x000107c61180();
  uVar10 = param_3;
  func_0x000107c43184();
  func_0x000107c61180();
  uVar11 = param_3;
  func_0x000107c4cfcc();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c484a8(puVar4,param_2,uVar1,puVar2,puVar3,uVar5,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11
                     );
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 100c12044; end: 100c12073; -[SCMixerUpdateNamespaceData .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c1205c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c12060) */

void FUN_100c12044(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 100c12074; end: 100c120d3; +[SCMixerNamespaceService _metadataItemsArrayFromInternalMetadataItemsArray:] */

void FUN_100c12074(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc0000000;
  uStack_28 = 0x100c120dc;
  puStack_20 = &UNK_110c8e728;
  uStack_18 = param_1;
  func_0x000107c3feb8(param_3,param_2,&puStack_38);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c120d4; end: 100c120e7; -[SCMappedObserver complete] */

void FUN_100c120d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf436f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x10),PTR_s_complete_1125ae760);
  return;
}



/* Entry: 100c120e8; end: 100c121e3; +[SCMixerNamespaceService _metadataItemFromInternalMetadataItem:] */

void FUN_100c120e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_10aeac8fc;
  puStack_30 = &UNK_10aeac90c;
  uStack_28 = 0;
  func_0x000107c4c5c4(param_3);
  uVar1 = puStack_48[5];
  func_0x000107c61174(uVar1);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c121e4; end: 100c12267; -[SCMixerInternalMetadataItem matchCtItem:lens:] */

/* WARNING: Possible PIC construction at 0x000100c12250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c12254) */

void FUN_100c121e4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_100c1224c;
    lVar1 = 0x18;
    param_3 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_100c1224c;
    lVar1 = 0x10;
  }
  (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + lVar1));
LAB_100c1224c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100c12268; end: 100c122af;  */

void FUN_100c12268(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126d8840;
  func_0x000107c4b560(PTR_PTR_1126d8840,param_2,param_2);
  func_0x000107c61180();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 100c122b0; end: 100c1231b; +[SCMixerMetadataItem lensWithLensMetadata:] */

void FUN_100c122b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  puVar1 = PTR_PTR_1126d8840;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c1231c; end: 100c1235f; -[SCMixerMetadataItem internalInit] */

void FUN_100c1231c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_112701a20;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c12360; end: 100c1242b; +[SCNotificationCategoryAction regularActionWithActionIdentifier:title:actionName:option:] */

void FUN_100c12360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  puVar1 = PTR_PTR_1126c08c0;
  func_0x000107c610f4();
  puVar2 = puVar1;
  func_0x000107c498b8();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_3);
  *(undefined8 *)(puVar2 + 0x28) = param_6;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 100c1242c; end: 100c1246f; -[SCNotificationCategoryAction internalInit] */

void FUN_100c1242c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  func_0x000107c61174();
  puStack_28 = PTR_PTR_1126eb200;
  uStack_30 = param_1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 100c12470; end: 100c12487;  */

void FUN_100c12470(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110f5c098;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110f5c098,
                      &PTR____CFConstantStringClassReference_110e61f78,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 100c12488; end: 100c12527;  */

void FUN_100c12488(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    func_0x000100c124e4();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d65838;
  plVar5 = (long *)&UNK_10d92d510;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 100c12528; end: 100c12567;  */

void FUN_100c12528(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 100c12568; end: 100c1256f; -[SCMixerInternalNamespaceData preCachedItems] */

undefined8 FUN_100c12568(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c12570; end: 100c12577; -[SCMixerInternalNamespaceData noFillLensMetadata] */

undefined8 FUN_100c12570(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100c12578; end: 100c1257f; -[SCMixerInternalNamespaceData encryptedUserTrackData] */

undefined8 FUN_100c12578(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100c12580; end: 100c12587; -[SCMixerInternalNamespaceData lastMixerRequestId] */

undefined8 FUN_100c12580(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100c12588; end: 100c127a3; -[SCMixerNamespaceData initWithScheduleNamespace:activeItems:preCachedItems:ttl:lastUpdateDate:noFillLensMetadata:encryptedUserTrackData:lastMixerRequestId:fetchLocationMetadata:mixerRequestMetadata:] */

undefined8 *
FUN_100c12588(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_112701a28;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_10;
    func_0x000107c40794();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_11;
    func_0x000107c40794();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_12;
    func_0x000107c40794();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x000107c61170(uVar3);
  }
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



/* Entry: 100c127a4; end: 100c127b3;  */

void FUN_100c127a4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9b2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126de668,PTR_s__scheduleNamespaceDataFromMixerN_112584658,param_2);
  return;
}



/* Entry: 100c127b4; end: 100c129d7; +[SCMixerScheduleNamespaceServiceAdapter _scheduleNamespaceDataFromMixerNamespaceData:] */

void FUN_100c127b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  func_0x000107c61174(param_3);
  uVar1 = param_3;
  func_0x000107c3d128();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c3feb8();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  uVar1 = param_3;
  func_0x000107c4ec28();
  func_0x000107c61180();
  uVar3 = uVar1;
  func_0x000107c3feb8();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  puVar4 = PTR_PTR_1126de668;
  func_0x000107c3bd18(PTR_PTR_1126de668,param_2,uVar2);
  func_0x000107c61180();
  puVar5 = PTR_PTR_1126de338;
  func_0x000107c610f4();
  uVar1 = param_3;
  func_0x000107c518f4();
  func_0x000107c61180();
  uVar6 = param_3;
  func_0x000107c5d094(param_3);
  func_0x000107c61180();
  uVar7 = param_3;
  func_0x000107c4aa88(param_3);
  func_0x000107c61180();
  uVar8 = param_3;
  func_0x000107c4d6d4();
  func_0x000107c61180();
  uVar9 = param_3;
  func_0x000107c427b0();
  func_0x000107c61180();
  uVar10 = param_3;
  func_0x000107c4aa18();
  func_0x000107c61180();
  uVar11 = param_3;
  func_0x000107c43184();
  func_0x000107c61180();
  uVar12 = param_3;
  func_0x000107c4cfcc();
  func_0x000107c61180();
  func_0x000107c61170(param_3);
  func_0x000107c484b0(puVar5,param_2,uVar1,uVar2,uVar3,puVar4,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
                      uVar12);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 100c129d8; end: 100c129df; -[SCMixerNamespaceData activeItems] */

undefined8 FUN_100c129d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 100c129e0; end: 100c12abf;  */

void FUN_100c129e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  func_0x000107c61174(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_10aead34c;
  puStack_30 = &UNK_10aead35c;
  uStack_28 = 0;
  func_0x000107c4c5c4(param_2);
  uVar1 = puStack_48[5];
  func_0x000107c61174(uVar1);
  func_0x000107c60bcc(&uStack_50,8);
  func_0x000107c61170(uStack_28);
  func_0x000107c61170(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 100c12ac0; end: 100c12b43; -[SCMixerMetadataItem matchCtItem:lens:] */

/* WARNING: Possible PIC construction at 0x000100c12b2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c12b30) */

void FUN_100c12ac0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_100c12b28;
    lVar1 = 0x18;
    param_3 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_100c12b28;
    lVar1 = 0x10;
  }
  (**(code **)(param_3 + 0x10))(param_3,*(undefined8 *)(param_1 + lVar1));
LAB_100c12b28:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100c12b44; end: 100c12b7b;  */

void FUN_100c12b44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c61174(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 100c12b7c; end: 100c12b83; -[SCMixerNamespaceData preCachedItems] */

undefined8 FUN_100c12b7c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 100c12b84; end: 100c12cfb; +[SCMixerScheduleNamespaceServiceAdapter _lensesMapFromLenses:] */

void FUN_100c12b84(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined8 *extraout_x8;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar14 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x000107c61174(param_3);
  puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x000107c40808(param_3);
  func_0x000107c41998();
  func_0x000107c61180();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x000107c61174(param_3);
  puVar4 = param_3;
  func_0x000107c4080c();
  if (puVar4 != (undefined8 *)0x0) {
    lVar13 = *plStack_110;
    do {
      puVar14 = (undefined8 *)0x0;
      do {
        if (*plStack_110 != lVar13) {
          func_0x000107c61128(param_3);
        }
        lVar12 = *(long *)(lStack_118 + (long)puVar14 * 8);
        func_0x000107c4b1dc();
        func_0x000107c61180();
        lVar5 = lVar12;
        func_0x000107c4adac();
        if (lVar5 != 0) {
          func_0x000107c56bd8(puVar3);
        }
        func_0x000107c61170(lVar12);
        puVar14 = (undefined8 *)((long)puVar14 + 1);
      } while (puVar4 != puVar14);
      puVar4 = param_3;
      puVar14 = &uStack_120;
      func_0x000107c4080c();
    } while (puVar4 != (undefined8 *)0x0);
  }
  func_0x000107c61170(param_3);
  puVar6 = puVar3;
  func_0x000107c40794();
  func_0x000107c61170(puVar3);
  func_0x000107c61170();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
    return;
  }
  func_0x000107c60e78();
  uVar11 = *param_3;
  *extraout_x8 = 0;
  puVar3 = &UNK_110496570;
  func_0x000107c613fc(&UNK_110496570,0x28,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar14;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 **)(puVar3 + 0x20) = extraout_x8;
  puVar6 = &UNK_110496598;
  func_0x000107c613fc(&UNK_110496598,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_100c13284;
  *(undefined **)(puVar6 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_190 = FUN_100c13088;
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0x42000000;
  pcStack_1a0 = FUN_100c12fdc;
  puStack_198 = &UNK_1104965b0;
  ppuVar7 = &puStack_1b0;
  puStack_188 = puVar6;
  func_0x000107c60bc4(ppuVar7);
  puVar8 = puStack_188;
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  puVar8 = &UNK_1104965e8;
  func_0x000107c613fc(&UNK_1104965e8,0x28,7);
  *(undefined8 **)(puVar8 + 0x10) = puVar14;
  *(undefined8 *)(puVar8 + 0x18) = param_2;
  *(undefined8 **)(puVar8 + 0x20) = extraout_x8;
  puVar9 = &UNK_110496610;
  func_0x000107c613fc(&UNK_110496610,0x20,7);
  *(code **)(puVar9 + 0x10) = FUN_100c148f0;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  pcStack_190 = FUN_100c1492c;
  puStack_1b0 = puVar1;
  uStack_1a8 = 0x42000000;
  pcStack_1a0 = FUN_100c146c4;
  puStack_198 = &UNK_110496628;
  ppuVar10 = &puStack_1b0;
  puStack_188 = puVar9;
  func_0x000107c60bc4(ppuVar10);
  puVar1 = puStack_188;
  func_0x000107c615f0(param_2);
  func_0x000107c6157c(puVar9);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6ec(uVar11);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c61574(puVar3);
  puVar3 = puVar6;
  func_0x000107c61544(puVar6,"",0x99,0x8f,0x27,1);
  func_0x000107c61574(puVar8);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100c12f2c);
    (*pcVar2)();
  }
  puVar3 = puVar9;
  func_0x000107c61544(puVar9,"",0x99,0x9a,0x20,1);
  func_0x000107c61574(puVar9);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100c12f30);
  (*pcVar2)();
}



/* Entry: 100c12cfc; end: 100c12f2f;  */

void FUN_100c12cfc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar9 = *param_2;
  *param_1 = 0;
  puVar3 = &UNK_110496570;
  func_0x000107c613fc(&UNK_110496570,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 **)(puVar3 + 0x20) = param_1;
  puVar4 = &UNK_110496598;
  func_0x000107c613fc(&UNK_110496598,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_100c13284;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_70 = FUN_100c13088;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100c12fdc;
  puStack_78 = &UNK_1104965b0;
  ppuVar5 = &puStack_90;
  puStack_68 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_68;
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_1104965e8;
  func_0x000107c613fc(&UNK_1104965e8,0x28,7);
  *(undefined8 *)(puVar6 + 0x10) = param_4;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 **)(puVar6 + 0x20) = param_1;
  puVar7 = &UNK_110496610;
  func_0x000107c613fc(&UNK_110496610,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_100c148f0;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_70 = FUN_100c1492c;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100c146c4;
  puStack_78 = &UNK_110496628;
  ppuVar8 = &puStack_90;
  puStack_68 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar1 = puStack_68;
  func_0x000107c615f0(param_3);
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c6ec(uVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x99,0x8f,0x27,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100c12f2c);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x99,0x9a,0x20,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100c12f30);
  (*pcVar2)();
}



/* Entry: 100c12f30; end: 100c12f47;  */

void FUN_100c12f30(long param_1,long param_2)

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



/* Entry: 100c12f48; end: 100c12fdb; -[SCNotificationCategoryAction matchRegularAction:textInputAction:] */

/* WARNING: Possible PIC construction at 0x000100c12fc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c12fc8) */

void FUN_100c12f48(long param_1,undefined8 param_2,long param_3,long param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48),
                 *(undefined8 *)(param_1 + 0x50),*(undefined8 *)(param_1 + 0x58));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
               *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 100c12fdc; end: 100c13087;  */

/* WARNING: Possible PIC construction at 0x000100c13060: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c13064) */

void FUN_100c12fdc(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = param_2;
  func_0x000107c5faec(param_2);
  uVar3 = uVar2;
  func_0x000107c5faec(param_3);
  if (param_4 == 0) {
    param_4 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = uVar3;
    func_0x000107c5faec(param_4);
  }
  (*pcVar1)(param_2,uVar2,param_3,uVar3,param_4,uVar4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 100c13088; end: 100c130a7;  */

void FUN_100c13088(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 100c130a8; end: 100c131b3;  */

/* WARNING: Removing unreachable block (ram,0x000100c131b0) */

undefined1  [16]
FUN_100c130a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  
  if (param_5 == 3) {
    ppuVar5 = &PTR____CFConstantStringClassReference_110f9f158;
    ppuVar4 = ppuVar5;
    uVar6 = param_2;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f9f158);
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f9f158);
    func_0x000107c61170(ppuVar4);
  }
  else {
    ppuVar5 = (undefined **)0x0;
    uVar6 = 0xe000000000000000;
  }
  func_0x000107c61434(param_2);
  func_0x000107c5fb78(0x23,0xe100000000000000);
  uVar1 = 0;
  if (param_4 != 0) {
    uVar1 = param_3;
  }
  lVar2 = -0x2000000000000000;
  if (param_4 != 0) {
    lVar2 = param_4;
  }
  func_0x000107c61434(param_4);
  func_0x000107c5fb78(uVar1,lVar2);
  func_0x000107c6142c(lVar2);
  func_0x000107c5fb78(0x23,0xe100000000000000);
  func_0x000107c5fb78(ppuVar5,uVar6);
  func_0x000107c6142c(uVar6);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Entry: 100c131b4; end: 100c13283;  */

/* WARNING: Possible PIC construction at 0x000100c1325c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c13260) */

void FUN_100c131b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_100c130a8(param_1,param_2,param_5,param_6,param_7);
  func_0x000107c5fadc();
  func_0x000107c6142c(param_2);
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c61168(PTR__OBJC_CLASS___UNNotificationAction_1126a9798);
  func_0x000107c3cff0();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 100c13284; end: 100c132ab;  */

void FUN_100c13284(void)

{
  FUN_100c131b4();
  return;
}



/* Entry: 100c132ac; end: 100c132b3; -[SCMixerNamespaceData scheduleNamespace] */

undefined8 FUN_100c132ac(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c132b4; end: 100c132bb; -[SCMixerNamespaceData ttl] */

undefined8 FUN_100c132b4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 100c132bc; end: 100c132c3; -[SCMixerNamespaceData lastUpdateDate] */

undefined8 FUN_100c132bc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 100c132c4; end: 100c132cb; -[SCMixerNamespaceData noFillLensMetadata] */

undefined8 FUN_100c132c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 100c132cc; end: 100c132d3; -[SCMixerNamespaceData encryptedUserTrackData] */

undefined8 FUN_100c132cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 100c132d4; end: 100c132db; -[SCMixerNamespaceData lastMixerRequestId] */

undefined8 FUN_100c132d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 100c132dc; end: 100c132e3; -[SCMixerNamespaceData fetchLocationMetadata] */

undefined8 FUN_100c132dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 100c132e4; end: 100c132eb; -[SCMixerNamespaceData mixerRequestMetadata] */

undefined8 FUN_100c132e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 100c132ec; end: 100c1354b; -[SCLensScheduleNamespaceData initWithScheduleNamespace:activeLenses:preCachedLenses:activeLensesMap:ttl:lastUpdateDate:noFillLensMetadata:encryptedUserTrackData:lastMixerRequestId:fetchLocationMetadata:mixerRequestMetadata:] */

undefined8 *
FUN_100c132ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_11270a3b8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000107c40794();
    uVar3 = puVar1[1];
    puVar1[1] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_4;
    func_0x000107c40794();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_5;
    func_0x000107c40794();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_6;
    func_0x000107c40794();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_7;
    func_0x000107c40794();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_8;
    func_0x000107c40794();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_9;
    func_0x000107c40794();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_10;
    func_0x000107c40794();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_11;
    func_0x000107c40794();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_12;
    func_0x000107c40794();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    func_0x000107c61170(uVar3);
    uVar2 = param_13;
    func_0x000107c40794();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    func_0x000107c61170(uVar3);
  }
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



/* Entry: 100c1354c; end: 100c13557;  */

void FUN_100c1354c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 100c13558; end: 100c1357b;  */

void FUN_100c13558(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c1357c; end: 100c13593;  */

void FUN_100c1357c(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 100c13594; end: 100c136bb;  */

ulong FUN_100c13594(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c136bc);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_100c136bc(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100c136b8);
      (*pcVar1)();
    }
    FUN_100c1423c(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 100c136bc; end: 100c1375b;  */

undefined * FUN_100c136bc(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112e38b40;
    FUN_100c11684(0x112e38b40,&PTR__OBJC_CLASS___UNNotificationAction_1126a9798,0x112e38b48,
                  &UNK_10da23338);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 100c1375c; end: 100c137eb; -[SCMixerNamespaceData .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c13774: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1378c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c137a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c137bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c137d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c137c0) */
/* WARNING: Removing unreachable block (ram,0x000100c137a8) */
/* WARNING: Removing unreachable block (ram,0x000100c13790) */
/* WARNING: Removing unreachable block (ram,0x000100c13778) */
/* WARNING: Removing unreachable block (ram,0x000100c137d8) */

void FUN_100c1375c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x50,0);
  return;
}



/* Entry: 100c137ec; end: 100c13863; -[SCMixerMetadataItem .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000100c13804: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c13808) */

void FUN_100c137ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 100c13864; end: 100c13a13; -[SCScheduledLensFilteredMetadataStore _updateMetadataStoreWithNamespaceData:] */

/* WARNING: Possible PIC construction at 0x000100c138c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c138ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c1391c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c139f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c13978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c139a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100c139d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100c139a4) */
/* WARNING: Removing unreachable block (ram,0x000100c1397c) */
/* WARNING: Removing unreachable block (ram,0x000100c139fc) */
/* WARNING: Removing unreachable block (ram,0x000100c13988) */
/* WARNING: Removing unreachable block (ram,0x000100c13920) */
/* WARNING: Removing unreachable block (ram,0x000100c138f0) */
/* WARNING: Removing unreachable block (ram,0x000100c138c8) */
/* WARNING: Removing unreachable block (ram,0x000100c13944) */
/* WARNING: Removing unreachable block (ram,0x000100c138d4) */
/* WARNING: Removing unreachable block (ram,0x000100c139d4) */
/* WARNING: Removing unreachable block (ram,0x000100c139f4) */

void FUN_100c13864(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c518f4(param_3);
  func_0x000107c61180();
  func_0x000107c4d420();
  func_0x000107c61180();
  func_0x000107c49d0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 100c13a14; end: 100c13a1b; -[SCLensScheduleNamespaceData scheduleNamespace] */

undefined8 FUN_100c13a14(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 100c13a1c; end: 100c13a23; -[SCLensScheduleNamespaceData activeLenses] */

undefined8 FUN_100c13a1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}


