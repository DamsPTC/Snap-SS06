/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1066f85fc; end: 1066f8657;  */

void FUN_1066f85fc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ccc38;
  func_0x00010c093120(PTR_PTR_1126ccc38,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ccc20;
  func_0x00010c094c60(PTR_PTR_1126ccc20);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066f8658; end: 1066f87e7; +[SCLensExplorerResponseParser renderStrategyFromStrategy:] */

void FUN_1066f8658(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  puVar1 = PTR_PTR_1126ccd88;
  func_0x00010c298de0(PTR_PTR_1126ccd88);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ccf40;
  func_0x00010bf6a480();
  uVar5 = 0;
  puVar2 = puVar1;
  if (param_3 < 1) {
    if ((param_3 != -0x4524111) && (param_3 != 0)) goto LAB_1066f876c;
    puVar2 = PTR_PTR_1126ccd88;
    func_0x00010c298de0(PTR_PTR_1126ccd88);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 == 1) {
      puVar2 = PTR_PTR_1126ccd88;
      func_0x00010bfe4400(PTR_PTR_1126ccd88,param_2,0);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      uVar5 = 1;
      puVar6 = (undefined *)0x5;
      goto LAB_1066f876c;
    }
    if (param_3 != 2) {
      if (param_3 == 3) {
        puVar2 = PTR_PTR_1126ccd88;
        func_0x00010c298de0(PTR_PTR_1126ccd88);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        uVar5 = 0;
        puVar6 = (undefined *)0x2;
      }
      goto LAB_1066f876c;
    }
    puVar2 = PTR_PTR_1126ccd88;
    func_0x00010bfe4400(PTR_PTR_1126ccd88,param_2,0);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar1);
  puVar6 = PTR_PTR_1126ccf40;
  func_0x00010bf6a480();
  uVar5 = 0;
LAB_1066f876c:
  puVar3 = PTR_PTR_1126ccd80;
  _objc_alloc(PTR_PTR_1126ccd80);
  puVar4 = PTR_PTR_1126ccf40;
  func_0x00010c0c2f40();
  puVar1 = PTR_PTR_1126ccf40;
  func_0x00010c0cdbe0();
  if (puVar1 <= puVar6) {
    puVar1 = puVar6;
  }
  if (puVar1 <= puVar4) {
    puVar4 = puVar1;
  }
  func_0x00010c04ad80(0,0,puVar3,param_2,puVar4,puVar2,uVar5,0,0,0);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1066f87e8; end: 1066f89cf; +[SCLensExplorerResponseParser renderStrategyFromCategoryStrategy:] */

void FUN_1066f87e8(float param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  bool bVar1;
  int iVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  double dVar11;
  
  _objc_retain(param_4);
  func_0x00010c097540(param_2,param_3,param_4);
  uVar3 = param_4;
  func_0x00010c2480a0();
  if ((int)uVar3 == 0) {
    puVar10 = PTR_PTR_1126ccf40;
    func_0x00010bf6a480();
  }
  else {
    puVar10 = (undefined *)(long)(int)uVar3;
  }
  uVar3 = param_4;
  func_0x00010c27dd80(param_4);
  bVar1 = (int)uVar3 == 1;
  uVar3 = param_4;
  func_0x00010c0ed100();
  iVar2 = (int)uVar3;
  puVar9 = PTR_PTR_1126ccd88;
  if (iVar2 != 1) {
    if (iVar2 == 0) {
      func_0x00010bfe4400(PTR_PTR_1126ccd88,param_3,0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_1066f88bc;
    }
    if (iVar2 != -0x4524111) {
      puVar9 = (undefined *)0x0;
      goto LAB_1066f88bc;
    }
  }
  func_0x00010c298de0(PTR_PTR_1126ccd88);
  _objc_retainAutoreleasedReturnValue();
LAB_1066f88bc:
  puVar4 = PTR_PTR_1126ccd80;
  _objc_alloc(PTR_PTR_1126ccd80);
  puVar5 = PTR_PTR_1126ccf40;
  func_0x00010c0c2f40();
  puVar6 = PTR_PTR_1126ccf40;
  func_0x00010c0cdbe0();
  if (puVar6 <= puVar10) {
    puVar6 = puVar10;
  }
  if (puVar6 <= puVar5) {
    puVar5 = puVar6;
  }
  func_0x00010c0852a0(param_4);
  dVar11 = (double)param_1;
  uVar3 = param_4;
  func_0x00010c2902c0(param_4);
  uVar7 = param_4;
  func_0x00010c2902e0(param_4);
  uVar8 = param_4;
  func_0x00010bfd8740();
  if ((uVar8 & 1) == 0) {
    func_0x00010c04ad80(dVar11,0,puVar4,param_3,puVar5,puVar9,bVar1,uVar3,uVar7,param_2);
  }
  else {
    uVar8 = param_4;
    func_0x00010c097560(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c26e960();
    func_0x00010c04ad80(dVar11,(double)param_1,puVar4,param_3,puVar5,puVar9,bVar1,uVar3,uVar7,
                        param_2);
    _objc_release(uVar8);
  }
  _objc_release(puVar9);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1066f89d0; end: 1066f8a93; +[SCLensExplorerResponseParser lensTileLayoutFromStrategy:] */

undefined8 FUN_1066f89d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  uVar3 = param_3;
  func_0x00010bfd8740();
  if ((int)uVar3 != 0) {
    uVar3 = param_3;
    func_0x00010c097560();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010c097580();
    _objc_release(uVar3);
    if ((int)uVar1 == 1) {
      uVar3 = param_3;
      func_0x00010c097560();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010c1062a0();
      _objc_release(uVar3);
      iVar2 = (int)uVar1;
      if ((iVar2 != -0x4524111) && (iVar2 != 0)) {
        if (iVar2 == 2) {
          uVar3 = 2;
        }
        else {
          uVar3 = 1;
        }
        goto LAB_1066f8a70;
      }
    }
  }
  uVar3 = 0;
LAB_1066f8a70:
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 1066f8a94; end: 1066f8a9f; +[SCLensExplorerResponseParser feedActionFromActivationAction:] */

bool FUN_1066f8a94(undefined8 param_1,undefined8 param_2,int param_3)

{
  return param_3 == 1;
}



/* Entry: 1066f8aa0; end: 1066f8b33; -[SCLensExplorerDynamicQueryCoordinator initWithQueryCoordinatorFactory:] */

undefined1 * FUN_1066f8aa0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f29b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066f8b34; end: 1066f8b47; -[SCLensExplorerDynamicQueryCoordinator isEmpty] */

void FUN_1066f8b34(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe9cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126ae558,PTR_s_immediateFutureWithValue__1125d80f0,
             PTR____kCFBooleanFalse_11034ab60);
  return;
}



/* Entry: 1066f8b48; end: 1066f8baf; -[SCLensExplorerDynamicQueryCoordinator canPerformQuery:] */

undefined8 FUN_1066f8b48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010bde9940(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bf2d060();
  _objc_release(param_3);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 1066f8bb0; end: 1066f8c6f; -[SCLensExplorerDynamicQueryCoordinator resultsForQuery:updatingBlock:] */

void FUN_1066f8bb0(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_3 != 0) {
    lVar1 = param_3;
    func_0x00010c11d680();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar3 != 0) {
      func_0x00010bde9940(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c13cfe0();
      _objc_release(param_1);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066f8c70; end: 1066f8c73; -[SCLensExplorerDynamicQueryCoordinator handleFeedItems:remoteState:forQueryResult:] */

void FUN_1066f8c70(void)

{
  return;
}



/* Entry: 1066f8c74; end: 1066f8c77; -[SCLensExplorerDynamicQueryCoordinator reset] */

void FUN_1066f8c74(void)

{
  return;
}



/* Entry: 1066f8c78; end: 1066f8d83; -[SCLensExplorerDynamicQueryCoordinator _coordinatorForQuery:] */

void FUN_1066f8c78(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c11d680();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar3 = lVar1;
    func_0x00010c155f60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      lVar2 = lVar1;
      func_0x00010c155f60(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _os_unfair_lock_lock(param_1 + 0x18);
      lVar3 = *(long *)(param_1 + 0x10);
      func_0x00010c0e00e0(lVar3,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 == 0) {
        lVar3 = *(long *)(param_1 + 8);
        func_0x00010c0965e0(lVar3,param_2,lVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,lVar3,lVar2);
      }
      _os_unfair_lock_unlock(param_1 + 0x18);
      _objc_release(lVar2);
      goto LAB_1066f8d48;
    }
  }
  lVar3 = 0;
LAB_1066f8d48:
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1066f8d84; end: 1066f8d8b; -[SCLensExplorerDynamicQueryCoordinator isLoading] */

undefined1 FUN_1066f8d84(long param_1)

{
  return *(undefined1 *)(param_1 + 0x1c);
}



/* Entry: 1066f8d8c; end: 1066f8d93; -[SCLensExplorerDynamicQueryCoordinator currentQuery] */

undefined8 FUN_1066f8d8c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1066f8d94; end: 1066f8d9b; -[SCLensExplorerDynamicQueryCoordinator setCurrentQuery:] */

void FUN_1066f8d94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 1066f8d9c; end: 1066f8dd7; -[SCLensExplorerDynamicQueryCoordinator .cxx_destruct] */

void FUN_1066f8d9c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f8dd8; end: 1066f8e4b; -[SCLensExplorerExternalRefreshCompositHandler initWithRefreshHandlers:] */

undefined1 * FUN_1066f8dd8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f29c0;
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



/* Entry: 1066f8e4c; end: 1066f8f37; -[SCLensExplorerExternalRefreshCompositHandler handleUpdatesWithCategoriesFetcher:] */

void FUN_1066f8e4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1066f8f38;
  puStack_50 = &UNK_1109362c0;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c0b8600(uVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1066f8f44;
  puStack_78 = &UNK_110842e18;
  puVar1 = PTR_PTR_1126b0418;
  uStack_70 = uVar2;
  func_0x00010bf54280(PTR_PTR_1126b0418,param_2,&puStack_90);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066f8f38; end: 1066f8f43;  */

void FUN_1066f8f38(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfd3050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_2,PTR_s_handleUpdatesWithCategoriesFetch_1125d25b8,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1066f8f44; end: 1066f9033;  */

void FUN_1066f8f44(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x00010bf86d40(*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(lVar4 + 8,0);
  return;
}



/* Entry: 1066f9034; end: 1066f903f; -[SCLensExplorerExternalRefreshCompositHandler .cxx_destruct] */

void FUN_1066f9034(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f9040; end: 1066f90e3; -[SCLensExplorerExternalRefreshFavortireHandler initWithLensFavoritesObservable:studySettings:] */

undefined1 *
FUN_1066f9040(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f29c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066f90e4; end: 1066f91c7; -[SCLensExplorerExternalRefreshFavortireHandler handleUpdatesWithCategoriesFetcher:] */

void FUN_1066f90e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be88920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c093ba0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1066f91c8;
  puStack_48 = &UNK_1109362f0;
  uStack_40 = param_3;
  lStack_38 = lVar1;
  _objc_retain(lVar1);
  _objc_retain(param_3);
  uVar3 = uVar2;
  func_0x00010c25ff60(uVar2,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lStack_38);
  _objc_release(uStack_40);
  _objc_release(lVar1);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1066f91c8; end: 1066f9203;  */

void FUN_1066f91c8(long param_1,long param_2)

{
  func_0x00010c247520();
  if (param_2 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00010c1255b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_refreshSectionsWithIdentifiers__112626f88,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  return;
}



/* Entry: 1066f9204; end: 1066f927f; -[SCLensExplorerExternalRefreshFavortireHandler _refreshSectionIdentifiers] */

void FUN_1066f9204(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuStack_30;
  undefined **ppuStack_28;
  undefined **ppuStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e04238;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110f30d58;
  ppuStack_20 = &PTR____CFConstantStringClassReference_110f30c18;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_30,3);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 1066f9280; end: 1066f92af; -[SCLensExplorerExternalRefreshFavortireHandler .cxx_destruct] */

void FUN_1066f9280(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f92b0; end: 1066f9323; -[SCLensExplorerExternalRefreshSubscriptionsHandler initWithSnapProProfilesProvider:] */

undefined1 * FUN_1066f92b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f29d0;
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



/* Entry: 1066f9324; end: 1066f93db; -[SCLensExplorerExternalRefreshSubscriptionsHandler handleUpdatesWithCategoriesFetcher:] */

void FUN_1066f9324(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c0e6c00(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1066f93dc;
  puStack_40 = &UNK_110936320;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c25ff60(uVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1066f93dc; end: 1066f946f;  */

void FUN_1066f93dc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  ppuStack_30 = &PTR____CFConstantStringClassReference_110ee15d8;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1255a0(uVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar1 + 8,0);
  return;
}



/* Entry: 1066f9470; end: 1066f947b; -[SCLensExplorerExternalRefreshSubscriptionsHandler .cxx_destruct] */

void FUN_1066f9470(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f947c; end: 1066f94ef; -[SCLensExplorerHTTPRanker initWithHTTPMetadataService:] */

undefined1 * FUN_1066f947c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f29d8;
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



/* Entry: 1066f94f0; end: 1066f9587; -[SCLensExplorerHTTPRanker activateLensExplorerContext] */

void FUN_1066f94f0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined **ppuStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  ppuStack_30 = &PTR____CFConstantStringClassReference_110e44958;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&ppuStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c183600(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c12ba30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar1 + 8),PTR_s_removeContext__1126288a8,
             &PTR____CFConstantStringClassReference_110e44958);
  return;
}



/* Entry: 1066f9588; end: 1066f959b; -[SCLensExplorerHTTPRanker deactivateLensExplorerContext] */

void FUN_1066f9588(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12ba30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeContext__1126288a8,
             &PTR____CFConstantStringClassReference_110e44958);
  return;
}



/* Entry: 1066f959c; end: 1066f95a7; -[SCLensExplorerHTTPRanker .cxx_destruct] */

void FUN_1066f959c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066f95a8; end: 1066f9627;  */

uint FUN_1066f95a8(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  
  uVar3 = 1;
  if ((param_2 != 0) && (param_2 != param_1)) {
    func_0x00010bf13f60(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126aecb0;
    func_0x00010c0d83c0(PTR_PTR_1126aecb0);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c071ae0(param_2);
    uVar3 = (uint)lVar2 ^ 1;
    _objc_release(puVar1);
    _objc_release(param_2);
  }
  return uVar3;
}



/* Entry: 1066f9628; end: 1066f978b; -[SCLensExplorerBaseRouter initWithLensExplorerFactory:dependencyProvider:loggerFactory:configuration:pageUIConfiguration:infoCardSource:storyConfiguration:] */

undefined1 *
FUN_1066f9628(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_1126f29e0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x58);
    *(undefined8 *)((long)puVar1 + 0x58) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x70);
    *(undefined8 *)((long)puVar1 + 0x70) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x80) = param_8;
    *(undefined1 *)((long)puVar1 + 0x28) = 0;
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x90);
    *(undefined8 *)((long)puVar1 + 0x90) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x98);
    *(undefined8 *)((long)puVar1 + 0x98) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x88);
    *(undefined **)((long)puVar1 + 0x88) = puVar3;
    _objc_release(uVar2);
    func_0x00010beb1780(puVar1);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1066f978c; end: 1066f9a43; -[SCLensExplorerBaseRouter _setupWithLensExplorerDependencyProvider:storyConfiguration:] */

void FUN_1066f978c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_108 [8];
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar2 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_release(uVar2);
  uVar7 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar7);
  puVar3 = PTR_PTR_1126ae720;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1066f9a44;
  puStack_90 = &UNK_1108669a0;
  _objc_retain(param_3);
  uStack_88 = param_3;
  _objc_retain(param_4);
  uStack_80 = param_4;
  uStack_78 = uVar7;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  *(undefined **)(param_1 + 0x18) = puVar3;
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ae720;
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1066f9aa4;
  puStack_b8 = &UNK_110855710;
  _objc_retain(param_3);
  uStack_b0 = param_3;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar3;
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126ae720;
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x1066f9aac;
  puStack_e0 = &UNK_110855710;
  _objc_retain(param_3);
  uStack_d8 = param_3;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar3;
  _objc_release(uVar2);
  _objc_initWeak(auStack_100,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c2939a0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = uVar2;
  _objc_release(uVar6);
  uVar4 = *(ulong *)(param_1 + 0x98);
  func_0x00010bf7fe20();
  if ((uVar4 & 1) == 0) {
    uVar2 = param_3;
    func_0x00010bf07a00(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar2;
    func_0x00010bf75dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_108,auStack_100);
    uVar5 = uVar6;
    func_0x00010c25ff60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_108);
  }
  _objc_destroyWeak(auStack_100);
  _objc_release(uStack_d8);
  _objc_release(uStack_b0);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uVar7);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1066f9a44; end: 1066f9aa3;  */

void FUN_1066f9a44(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2596e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25aa20(uVar3,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1066f9aa4; end: 1066f9ab3;  */

void FUN_1066f9aa4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf5b690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_creatorProfilePresenter_1125b4748);
  return;
}



/* Entry: 1066f9ab4; end: 1066f9adf;  */

void FUN_1066f9ab4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd0320();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066f9ae0; end: 1066f9b6f; -[SCLensExplorerBaseRouter currentlyPresentedLensExplorerViewController] */

void FUN_1066f9ae0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 0x40);
  _objc_retain(lVar3);
  lVar1 = lVar3;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  while (lVar1 != 0) {
    lVar2 = lVar3;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar1 = lVar2;
    func_0x00010c10f940();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    lVar3 = lVar2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1066f9b70; end: 1066f9bcf; -[SCLensExplorerBaseRouter lensExplorerUIContainer] */

void FUN_1066f9b70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  func_0x00010bf60fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038f40(puVar1,param_2,param_1,1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066f9bd0; end: 1066f9c97; -[SCLensExplorerBaseRouter singleCategoryViewControllerWithModelProvider:isLensCollectionCategory:accessoryView:] */

void FUN_1066f9bd0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f1ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f1b60(uVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  puVar1 = PTR_PTR_1126cd340;
  _objc_alloc(PTR_PTR_1126cd340);
  func_0x00010bffd100();
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1066f9c98; end: 1066f9e23; -[SCLensExplorerBaseRouter singleCategoryViewControllerWithPresentationType:accessoryView:] */

void FUN_1066f9c98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_1066f9e24;
  uStack_40 = 0x1066f9e34;
  uStack_38 = 0;
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  func_0x00010c0bcf60(param_3);
  func_0x00010c23cac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_80,8);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1066f9e24; end: 1066f9e3b;  */

void FUN_1066f9e24(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1066f9e3c; end: 1066fa053;  */

void FUN_1066f9e3c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR_PTR_1126cce48;
  _objc_retain(param_2);
  _objc_alloc();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c092e20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf33160();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0124c0();
  _objc_release(param_2);
  lVar5 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined **)(lVar5 + 0x28) = puVar1;
  _objc_release(uVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1066fa054; end: 1066fa087; -[SCLensExplorerBaseRouter isPresenting] */

bool FUN_1066fa054(long param_1)

{
  func_0x00010bf60fc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_1 != 0;
}



/* Entry: 1066fa088; end: 1066fa0c7; -[SCLensExplorerBaseRouter presentFeedFullPageWith:] */

void FUN_1066fa088(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x00010c23cae0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10e400(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066fa0c8; end: 1066fa0cb; -[SCLensExplorerBaseRouter presentLensExplorerFrom:accessoryView:] */

void FUN_1066fa0c8(void)

{
  return;
}



/* Entry: 1066fa0cc; end: 1066fa0cf; -[SCLensExplorerBaseRouter presentLensExplorerWith:accessoryView:] */

void FUN_1066fa0cc(void)

{
  return;
}



/* Entry: 1066fa0d0; end: 1066fa197; -[SCLensExplorerBaseRouter presentLensExplorerViewController:fromViewController:uiContainer:completion:] */

void FUN_1066fa0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,long param_6)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_5 == 0) {
    func_0x00010c10eda0(param_4);
  }
  else {
    uVar1 = param_5;
    _objc_opt_respondsToSelector(param_5,PTR_s_attachUI_completion__1125a0c10);
    if ((uVar1 & 1) == 0) {
      func_0x00010bf0c980(param_5);
      (**(code **)(param_6 + 0x10))(param_6);
    }
    else {
      func_0x00010bf0c9a0(param_5);
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066fa198; end: 1066fa233; -[SCLensExplorerBaseRouter dismissIfNeededWithAnimated:completion:] */

void FUN_1066fa198(ulong param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_4);
  uVar1 = param_1;
  func_0x00010c07ab40();
  if ((uVar1 & 1) == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4);
    }
  }
  else {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c093580();
    _objc_release(lVar2);
    if ((param_3 & 1) == 0) {
      func_0x00010c1984e0(*(undefined8 *)(param_1 + 0x60),param_2,3);
    }
    *(undefined1 *)(param_1 + 0x28) = 1;
    func_0x00010bfaf7c0(param_1,param_2,param_3,param_4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1066fa234; end: 1066fa317; -[SCLensExplorerBaseRouter removeViewController] */

void FUN_1066fa234(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c137fe0(*(undefined8 *)(param_1 + 0x58));
  func_0x00010c2569c0(*(undefined8 *)(param_1 + 0x60));
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar1);
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x88));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = 0;
  _objc_release(uVar1);
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c0935c0();
  _objc_release(lVar2);
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c093600();
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066fa318; end: 1066fa38b; -[SCLensExplorerBaseRouter handleApplicationDidEnterBackground] */

void FUN_1066fa318(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  func_0x00010bf60fc0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf60ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_1066f95a8();
  _objc_release(uVar2);
  if ((int)uVar3 != 0) {
    func_0x00010bf83b40(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066fa38c; end: 1066fa4c7; -[SCLensExplorerBaseRouter finishDismissWorkflowAnimated:completion:] */

void FUN_1066fa38c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_1066fa4c8;
  puStack_60 = &UNK_110848708;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  ppuVar1 = &puStack_78;
  uStack_58 = param_4;
  _objc_retainBlock();
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    (*(code *)ppuVar1[2])(ppuVar1);
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c10fd00(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84b00();
    _objc_release(uVar3);
  }
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  return;
}



/* Entry: 1066fa4c8; end: 1066fa513;  */

void FUN_1066fa4c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c12f160();
  _objc_release(lVar1);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001066fa504. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1066fa514; end: 1066fa69f; -[SCLensExplorerBaseRouter presentCreatorViewControllerWithCreator:source:] */

void FUN_1066fa514(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07aae0();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) goto LAB_1066fa688;
  uVar2 = param_3;
  func_0x00010c2427a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c08fa60();
  uVar3 = param_3;
  if (uVar1 == 0) {
    _objc_release(uVar2);
LAB_1066fa5d8:
    puVar4 = PTR_PTR_1126b6560;
    func_0x00010c2923e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c292e20(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf430e0(puVar4,param_2,uVar3,uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
  }
  else {
    uVar1 = param_3;
    func_0x00010c242800();
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126b6560;
    if ((uVar1 & 1) != 0) goto LAB_1066fa5d8;
    func_0x00010c2427a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11a820(puVar4,param_2,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10bd00();
  _objc_release(uVar5);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c093620();
  _objc_release(param_1);
  _objc_release(puVar4);
LAB_1066fa688:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066fa6a0; end: 1066fa78b; -[SCLensExplorerBaseRouter presentStoryWithCreatorStory:baseView:] */

void FUN_1066fa6a0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
  uVar5 = *(ulong *)(param_1 + 0x40);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  if (uVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec4c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10f080(uVar4);
    _objc_release(param_1);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066fa78c; end: 1066fa897; -[SCLensExplorerBaseRouter presentStoryWithStoryId:sectionId:baseView:] */

void FUN_1066fa78c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___UIViewController_1126af898;
  uVar5 = *(ulong *)(param_1 + 0x40);
  _objc_retain(uVar5);
  _objc_opt_class(puVar2);
  uVar3 = uVar5;
  _objc_opt_isKindOfClass(uVar5,puVar2);
  uVar1 = uVar5;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar5);
  if (uVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bec4c80(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10f220(uVar4);
    _objc_release(param_1);
    _objc_release(uVar4);
  }
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066fa898; end: 1066faa97; -[SCLensExplorerBaseRouter presentLiveLensPreviewCameraWithLensItem:fromCategoryId:] */

void FUN_1066fa898(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010c092e20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0933e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010c26fac0(lVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2780a0();
  _objc_release(lVar1);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar3 = lVar1;
  func_0x00010c093640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar4 = param_3;
  func_0x00010c0ba1a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(param_3);
  puVar5 = PTR_PTR_1126ae6b0;
  _objc_alloc(PTR_PTR_1126ae6b0);
  puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c025e20(puVar5);
  _objc_release(puVar6);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf60fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0(PTR_PTR_1126ae6b8);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c10b6a0(uVar7);
  _objc_release(puVar6);
  _objc_release(param_1);
  _objc_release(uVar7);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(lVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c23ae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (lVar1,PTR_s_showWithPresentViewController__11266c5b8,*(undefined8 *)(lVar2 + 0x40));
  return;
}



/* Entry: 1066faa98; end: 1066faaa7; -[SCLensExplorerBaseRouter presentOnboardingPresentable:] */

void FUN_1066faa98(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23ae50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_showWithPresentViewController__11266c5b8,*(undefined8 *)(param_1 + 0x40))
  ;
  return;
}



/* Entry: 1066faaa8; end: 1066fab4b; -[SCLensExplorerBaseRouter presentInfoCardWithLensItem:] */

void FUN_1066faaa8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x00010c0ba1a0(param_3,param_2,0);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010bfedaa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = uVar1;
  _objc_release(uVar4);
  uVar2 = *(ulong *)(param_1 + 0x78);
  func_0x00010c07aae0();
  if ((uVar2 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x78);
    lVar3 = param_1;
    func_0x00010bf60fc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10c800(uVar1,param_2,lVar3,param_3,*(undefined8 *)(param_1 + 0x80),0);
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1066fab4c; end: 1066faeb7; -[SCLensExplorerBaseRouter presentLensTopicWithStoryItem:] */

void FUN_1066fab4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uStack_128;
  undefined8 *puStack_120;
  undefined8 uStack_118;
  code *pcStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  _objc_retain(param_3);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uStack_88 = 0x3032000000;
  pcStack_80 = FUN_1066f9e24;
  uStack_78 = 0x1066f9e34;
  uStack_70 = 0;
  puStack_c0 = &uStack_c8;
  uStack_c8 = 0;
  uStack_b8 = 0x3032000000;
  pcStack_b0 = FUN_1066f9e24;
  uStack_a8 = 0x1066f9e34;
  uStack_a0 = 0;
  puStack_f0 = &uStack_f8;
  uStack_f8 = 0;
  uStack_e8 = 0x3032000000;
  pcStack_e0 = FUN_1066f9e24;
  uStack_d8 = 0x1066f9e34;
  uStack_d0 = 0;
  puStack_120 = &uStack_128;
  uStack_128 = 0;
  uStack_118 = 0x3032000000;
  pcStack_110 = FUN_1066f9e24;
  uStack_108 = 0x1066f9e34;
  uStack_100 = 0;
  uVar1 = param_3;
  func_0x00010bf0cb60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c0540();
  _objc_release(uVar1);
  if (puStack_90[5] != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c097700();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    _objc_release(uVar10);
    uVar2 = *(ulong *)(param_1 + 0x10);
    func_0x00010c07aae0();
    if ((uVar2 & 1) == 0) {
      puVar3 = PTR_PTR_1126cd350;
      _objc_alloc();
      uVar4 = puStack_120[5];
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = puStack_120[5];
      func_0x00010c292e20(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = puStack_120[5];
      func_0x00010c2427a0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0e1aa0();
      func_0x00010c06d940();
      uVar1 = param_3;
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar1;
      func_0x00010c11fc00();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = param_3;
      func_0x00010c0b3ae0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c11fc20();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c024600(puVar3);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_release(uVar10);
      _objc_release(uVar1);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      lVar9 = param_1;
      func_0x00010c0938e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c10cd60(*(undefined8 *)(param_1 + 0x10));
      _objc_release(lVar9);
      _objc_release(puVar3);
    }
  }
  __Block_object_dispose(&uStack_128,8);
  _objc_release(uStack_100);
  __Block_object_dispose(&uStack_f8,8);
  _objc_release(uStack_d0);
  __Block_object_dispose(&uStack_c8,8);
  _objc_release(uStack_a0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(uStack_70);
  _objc_release(param_3);
  return;
}



/* Entry: 1066faeb8; end: 1066faf9b;  */

void FUN_1066faeb8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066faf9c; end: 1066faff7; -[SCLensExplorerBaseRouter handlePickedItem:selectionTrigger:] */

void FUN_1066faf9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010c093560();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066faff8; end: 1066fb067; -[SCLensExplorerBaseRouter presentActionSheet:completion:] */

void FUN_1066faff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf60fc0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10af80();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1066fb068; end: 1066fb0af; -[SCLensExplorerBaseRouter lensReplyParameters] */

void FUN_1066fb068(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c093640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1066fb0b0; end: 1066fb17f; -[SCLensExplorerBaseRouter presentSingleCategoryPage:] */

void FUN_1066fb0b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126aefc0;
  if (*(long *)(param_1 + 0x40) != 0) {
    _objc_retain(param_3);
    _objc_alloc(puVar1);
    func_0x00010c0402e0();
    uVar2 = param_3;
    func_0x00010c27acc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c219b20(puVar1,param_2,uVar2);
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010c0cfbe0(param_3);
    _objc_release(param_3);
    func_0x00010c1c8b80(puVar1,param_2,uVar2);
    func_0x00010bf60fc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c10eda0();
    _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar1);
    return;
  }
  return;
}



/* Entry: 1066fb180; end: 1066fb1d7; -[SCLensExplorerBaseRouter modularCameraSendEvent:] */

void FUN_1066fb180(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1066fb1d8;
  puStack_20 = &UNK_1108450c8;
  uStack_18 = param_1;
  func_0x00010c0bd520(param_3,param_2,0,&puStack_38);
  return;
}



/* Entry: 1066fb1d8; end: 1066fb22b;  */

void FUN_1066fb1d8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c092e20(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0933e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010c0a9600(uVar2,param_2,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1066fb22c; end: 1066fb29f; -[SCLensExplorerBaseRouter requestDismissForController:source:completion:] */

void FUN_1066fb22c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  _objc_retain(param_5);
  if (param_4 == 0) {
    uVar1 = param_1;
    func_0x00010c0932e0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1984e0();
    _objc_release(uVar1);
  }
  func_0x00010bf83b40(param_1,param_2,param_4 == 0,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 1066fb2a0; end: 1066fb35b; -[SCLensExplorerBaseRouter _storyPresenterEventHander] */

void FUN_1066fb2a0(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  ppuVar1 = &puStack_50;
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  uStack_40 = 0x1066fb328;
  puStack_38 = &UNK_11085c360;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retainBlock(&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1066fb35c; end: 1066fb3d7; -[SCLensExplorerBaseRouter _notifyStoryEvent:] */

void FUN_1066fb35c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  uVar2 = uVar1;
  _objc_opt_respondsToSelector();
  _objc_release(uVar1);
  if ((uVar2 & 1) != 0) {
    param_1 = param_1 + 0x30;
    _objc_loadWeakRetained(param_1);
    func_0x00010c093540();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1066fb3d8; end: 1066fb3ef; -[SCLensExplorerBaseRouter delegate] */

void FUN_1066fb3d8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x30);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066fb3f0; end: 1066fb3fb; -[SCLensExplorerBaseRouter setDelegate:] */

void FUN_1066fb3f0(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x30,param_3);
  return;
}



/* Entry: 1066fb3fc; end: 1066fb413; -[SCLensExplorerBaseRouter lifeCycleDelegate] */

void FUN_1066fb3fc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1066fb414; end: 1066fb41f; -[SCLensExplorerBaseRouter setLifeCycleDelegate:] */

void FUN_1066fb414(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x38,param_3);
  return;
}



/* Entry: 1066fb420; end: 1066fb427; -[SCLensExplorerBaseRouter currentViewController] */

undefined8 FUN_1066fb420(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 1066fb428; end: 1066fb457; -[SCLensExplorerBaseRouter setCurrentViewController:] */

void FUN_1066fb428(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066fb458; end: 1066fb45f; -[SCLensExplorerBaseRouter navigationController] */

undefined8 FUN_1066fb458(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 1066fb460; end: 1066fb48f; -[SCLensExplorerBaseRouter setNavigationController:] */

void FUN_1066fb460(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066fb490; end: 1066fb497; -[SCLensExplorerBaseRouter lensExplorerDependencyProvider] */

undefined8 FUN_1066fb490(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 1066fb498; end: 1066fb49f; -[SCLensExplorerBaseRouter lensExplorerFactory] */

undefined8 FUN_1066fb498(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 1066fb4a0; end: 1066fb4a7; -[SCLensExplorerBaseRouter lensExplorerLoggingSession] */

undefined8 FUN_1066fb4a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 1066fb4a8; end: 1066fb4d7; -[SCLensExplorerBaseRouter setLensExplorerLoggingSession:] */

void FUN_1066fb4a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066fb4d8; end: 1066fb4df; -[SCLensExplorerBaseRouter userSettings] */

undefined8 FUN_1066fb4d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x68);
}



/* Entry: 1066fb4e0; end: 1066fb4e7; -[SCLensExplorerBaseRouter loggerFactory] */

undefined8 FUN_1066fb4e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x70);
}



/* Entry: 1066fb4e8; end: 1066fb4ef; -[SCLensExplorerBaseRouter infoCardsPresenter] */

undefined8 FUN_1066fb4e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x78);
}



/* Entry: 1066fb4f0; end: 1066fb4f7; -[SCLensExplorerBaseRouter infoCardSource] */

undefined8 FUN_1066fb4f0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x80);
}



/* Entry: 1066fb4f8; end: 1066fb4ff; -[SCLensExplorerBaseRouter disposable] */

undefined8 FUN_1066fb4f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x88);
}



/* Entry: 1066fb500; end: 1066fb52f; -[SCLensExplorerBaseRouter setDisposable:] */

void FUN_1066fb500(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(param_1 + 0x88) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1066fb530; end: 1066fb537; -[SCLensExplorerBaseRouter configuration] */

undefined8 FUN_1066fb530(long param_1)

{
  return *(undefined8 *)(param_1 + 0x90);
}



/* Entry: 1066fb538; end: 1066fb53f; -[SCLensExplorerBaseRouter pageUIConfiguration] */

undefined8 FUN_1066fb538(long param_1)

{
  return *(undefined8 *)(param_1 + 0x98);
}



/* Entry: 1066fb540; end: 1066fb547; -[SCLensExplorerBaseRouter isDismissProcessStarted] */

undefined1 FUN_1066fb540(long param_1)

{
  return *(undefined1 *)(param_1 + 0x28);
}



/* Entry: 1066fb548; end: 1066fb623; -[SCLensExplorerBaseRouter .cxx_destruct] */

void FUN_1066fb548(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_destroyWeak(param_1 + 0x38);
  _objc_destroyWeak(param_1 + 0x30);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066fb624; end: 1066fb72f; -[SCLensExplorerRouterV3 initWithLensExplorerFactory:dependencyProvider:loggerFactory:configuration:pageUIConfiguration:externalRefreshHandler:headerActionButtonFactory:infoCardSource:searchType:storyConfiguration:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_1066fb624(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126f29e8;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithLensExplorerFactory_depe_1125e6918,param_3,param_4,
                      param_5,param_6,param_7,param_10,param_12);
  if (puVar1 != (undefined8 *)0x0) {
    lVar3 = (long)_DAT_11274e7ec;
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_8;
    _objc_release(uVar2);
    lVar3 = (long)_DAT_11274e7f0;
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar3);
    *(undefined8 *)((long)puVar1 + lVar3) = param_9;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11274e7f4) = param_11;
  }
  _objc_release(param_9);
  _objc_release(param_8);
  return puVar1;
}



/* Entry: 1066fb730; end: 1066fb8ff; -[SCLensExplorerRouterV3 cardTransitionShouldBeginWithView:touchLocation:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1066fb730(double param_1,double param_2,ulong param_3,undefined8 param_4,ulong param_5)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  _objc_retain(param_5);
  uVar2 = param_3;
  func_0x00010bf60ba0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c10fd00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  if (uVar3 != 0) {
    uVar2 = param_3;
    func_0x00010bfedb60();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c07aae0();
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    if ((uVar3 & 1) == 0) {
      _objc_retain(param_5);
      _objc_opt_class(puVar4);
      uVar3 = param_5;
      _objc_opt_isKindOfClass(param_5,puVar4);
      uVar2 = param_5;
      if ((uVar3 & 1) == 0) {
        uVar2 = 0;
      }
      _objc_retain(uVar2);
      _objc_release(param_5);
      lVar7 = (long)_DAT_11274e7f8;
      uVar5 = *(undefined8 *)(param_3 + lVar7);
      *(ulong *)(param_3 + lVar7) = uVar2;
      _objc_release(uVar5);
      if (*(long *)(param_3 + lVar7) != 0) {
        uVar3 = param_3;
        func_0x00010bf60ba0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = PTR_PTR_1126cd358;
        _objc_opt_class(PTR_PTR_1126cd358);
        uVar6 = uVar3;
        _objc_opt_isKindOfClass(uVar3,puVar4);
        uVar2 = uVar3;
        if ((uVar6 & 1) == 0) {
          uVar2 = 0;
        }
        _objc_retain(uVar2);
        _objc_release(uVar3);
        if (uVar2 == 0) {
LAB_1066fb87c:
          func_0x00010bf4cdc0(*(undefined8 *)(param_3 + lVar7));
          func_0x00010befda00(*(undefined8 *)(param_3 + lVar7));
          bVar1 = param_2 + param_1 <= 0.0;
        }
        else {
          uVar8 = *(ulong *)(param_3 + lVar7);
          uVar6 = uVar3;
          func_0x00010c152980();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (uVar8 != uVar6) goto LAB_1066fb87c;
          func_0x00010c29c580(uVar3);
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar3;
          func_0x00010bf529e0();
          bVar1 = uVar6 == 0;
          _objc_release(uVar3);
        }
        _objc_release(uVar2);
        goto LAB_1066fb8a4;
      }
    }
  }
  bVar1 = false;
LAB_1066fb8a4:
  _objc_release(param_5);
  return bVar1;
}



/* Entry: 1066fb900; end: 1066fb903; -[SCLensExplorerRouterV3 cardToExpandTransition] */

void FUN_1066fb900(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf60bb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_currentViewController_1125b5c90);
  return;
}



/* Entry: 1066fb904; end: 1066fba0f; -[SCLensExplorerRouterV3 cardTransitionWillBeginWithView:] */

void FUN_1066fb904(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010bf6b020(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c093580();
  _objc_release(uVar1);
  _objc_initWeak(auStack_38,param_1);
  func_0x00010bf60ba0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf84b00(param_1);
  _objc_release(param_1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1066fba10; end: 1066fba7f;  */

void FUN_1066fba10(long param_1)

{
  long lVar1;
  long lVar2;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010bf60ba0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c10fd00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 == 0) {
      func_0x00010c12f160(param_1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


