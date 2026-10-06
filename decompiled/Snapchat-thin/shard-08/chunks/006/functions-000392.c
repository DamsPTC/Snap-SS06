/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1062e4a4c; end: 1062e4b9f; -[SCOperaMediaAssetDataSource imageForKey:completion:] */

void FUN_1062e4a4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_1;
  func_0x00010bf0b4c0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1062e4ba0;
  puStack_50 = &UNK_11091b7f8;
  _objc_retain(param_4);
  lVar1 = lVar2;
  uStack_48 = param_4;
  func_0x00010c25ff60(lVar2,param_2,&puStack_68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _os_unfair_lock_lock(param_1 + 0x24);
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010c0e00e0(lVar2,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0e00e0(uVar3,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf86d40();
    _objc_release(uVar3);
  }
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x28),param_2,lVar1,param_3);
  _os_unfair_lock_unlock(param_1 + 0x24);
  _objc_release(lVar1);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062e4ba0; end: 1062e4be3;  */

void FUN_1062e4ba0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bfe6ac0(param_2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062e4be4; end: 1062e4c6f; -[SCOperaMediaAssetDataSource _threadSafeReleaseAssetWithKeyIfNecessary:] */

void FUN_1062e4be4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c0e00e0(lVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010be8a380(param_1,param_2,lVar1,param_3);
  }
  _objc_release(lVar1);
  _os_unfair_lock_unlock(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e4c70; end: 1062e4ce7; -[SCOperaMediaAssetDataSource _threadSafeGetAssetWithKey:] */

void FUN_1062e4c70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c0e00e0(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1062e4ce8; end: 1062e4d73; -[SCOperaMediaAssetDataSource _threadSafeRemoveAssetWithKey:] */

void FUN_1062e4ce8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x20);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _os_unfair_lock_lock(param_1 + 0x24);
  func_0x00010c12d3e0(*(undefined8 *)(param_1 + 0x28),param_2,param_3);
  _os_unfair_lock_unlock(param_1 + 0x24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e4d74; end: 1062e4def; -[SCOperaMediaAssetDataSource _threadSafeSetAsset:withKey:] */

void FUN_1062e4d74(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x20);
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x10),param_2,param_3,param_4);
  _os_unfair_lock_unlock(param_1 + 0x20);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e4df0; end: 1062e4e9b; -[SCOperaMediaAssetDataSource _releaseAsset:withKey:] */

void FUN_1062e4df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1062e4e9c;
  puStack_48 = &UNK_11084a078;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_1062e4f24;
  puStack_70 = &UNK_11091b828;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x00010c0be4e0(param_3,param_2,&puStack_60,&puStack_88);
  _objc_release(uStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062e4e9c; end: 1062e4f23;  */

void FUN_1062e4e9c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  _os_unfair_lock_lock(lVar2 + 0x24);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010bf86d40(lVar1);
  }
  _objc_release(lVar1);
  _os_unfair_lock_unlock(lVar2 + 0x24);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062e4f24; end: 1062e4f77;  */

void FUN_1062e4f24(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c128420();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062e4f78; end: 1062e4fbf; -[SCOperaMediaAssetDataSource .cxx_destruct] */

void FUN_1062e4f78(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062e4fc0; end: 1062e50bb; -[SCOperaMediaResolverErrorHandlerPlugin initWithMediaResolver:operaConfigProvider:] */

undefined8 *
FUN_1062e4fc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f0dd0;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_4);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[4];
    puVar1[4] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1062e50bc; end: 1062e5117;  */

void FUN_1062e50bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf91700();
  func_0x00010c0df6e0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1062e5118; end: 1062e5157; -[SCOperaMediaResolverErrorHandlerPlugin setOperaControlling:] */

void FUN_1062e5118(long param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c0d6240(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_storeWeak(param_1 + 0x18,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e5158; end: 1062e5163; -[SCOperaMediaResolverErrorHandlerPlugin setPlaylistItemController:] */

void FUN_1062e5158(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 1062e5164; end: 1062e526b; -[SCOperaMediaResolverErrorHandlerPlugin registeredEventsForOperaSession] */

void FUN_1062e5164(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined **ppuVar12;
  ulong uVar13;
  ulong in_x4;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126c95c8;
  func_0x00010c09d2c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c95c8;
  puStack_68 = puVar1;
  func_0x00010bf98f00();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b2338;
  puStack_60 = puVar2;
  func_0x00010c0c4e00();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2338;
  puStack_58 = puVar3;
  func_0x00010c0c4dc0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar12 = &puStack_68;
  uVar13 = 4;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_50 = puVar4;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(ppuVar12);
  _objc_retain(uVar13);
  _objc_retain(in_x4);
  puVar2 = PTR_PTR_1126c95c8;
  func_0x00010c09d2c0(PTR_PTR_1126c95c8);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = ppuVar12;
  func_0x00010c0720c0();
  _objc_release(puVar2);
  if ((int)ppuVar6 == 0) {
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c0c4e00(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar12;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)ppuVar6 != 0) {
      puVar2 = PTR_PTR_1126c9898;
      func_0x00010c0c6040(PTR_PTR_1126c9898);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
      uVar9 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar2);
      uVar8 = uVar7;
      if ((uVar9 & 1) == 0) {
        uVar8 = 0;
      }
      _objc_retain(uVar8);
      _objc_release(uVar7);
      puVar2 = PTR_PTR_1126c9898;
      func_0x00010c0844e0(PTR_PTR_1126c9898);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = in_x4;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar2);
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar10 = uVar9;
      _objc_opt_isKindOfClass(uVar9,puVar2);
      uVar7 = uVar9;
      if ((uVar10 & 1) == 0) {
        uVar7 = 0;
      }
      _objc_retain(uVar7);
      _objc_release(uVar9);
      uVar9 = uVar8;
      func_0x00010c14d1c0();
      if ((int)uVar9 != 0) {
        func_0x00010be8c320(puVar1);
      }
      goto LAB_1062e5514;
    }
    puVar2 = PTR_PTR_1126c95c8;
    func_0x00010bf98f00(PTR_PTR_1126c95c8);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar12;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)ppuVar6 != 0) {
      func_0x00010bdc97e0(puVar1);
      goto LAB_1062e5524;
    }
    puVar2 = PTR_PTR_1126b2338;
    func_0x00010c0c4dc0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar12;
    func_0x00010c0720c0();
    _objc_release(puVar2);
    if ((int)ppuVar6 == 0) goto LAB_1062e5524;
    puVar2 = PTR_PTR_1126b2348;
    func_0x00010c120300(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = in_x4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar9 = uVar8;
    _objc_opt_isKindOfClass(uVar8,puVar2);
    uVar7 = uVar8;
    if ((uVar9 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar8);
    uVar8 = uVar13;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar8);
    puVar2 = PTR_PTR_1126b2ca0;
    _objc_opt_class(PTR_PTR_1126b2ca0);
    uVar10 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar2);
    uVar8 = uVar9;
    if ((uVar10 & 1) == 0) {
      uVar8 = 0;
    }
    _objc_retain(uVar8);
    _objc_release(uVar9);
    uVar10 = uVar7;
    func_0x00010c14d800();
    _objc_release(uVar7);
    if (((int)uVar10 != 0) && (uVar8 != 0)) {
      lVar11 = *(long *)(puVar1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar11 != 0) {
        puVar1 = puVar1 + 0x10;
        _objc_loadWeakRetained(puVar1);
        func_0x00010c0c4280(uVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c101400(puVar1);
        _objc_release(uVar9);
        _objc_release(puVar1);
      }
    }
  }
  else {
    puVar2 = PTR_PTR_1126c9680;
    func_0x00010bf98900(PTR_PTR_1126c9680);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = in_x4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar9 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar2);
    uVar8 = uVar7;
    if ((uVar9 & 1) == 0) {
      uVar8 = 0;
    }
    _objc_retain(uVar8);
    _objc_release(uVar7);
    puVar2 = PTR_PTR_1126b6008;
    func_0x00010c0f12c0(PTR_PTR_1126b6008);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = in_x4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar10 = uVar9;
    _objc_opt_isKindOfClass(uVar9,puVar2);
    uVar7 = uVar9;
    if ((uVar10 & 1) == 0) {
      uVar7 = 0;
    }
    _objc_retain(uVar7);
    _objc_release(uVar9);
    uVar9 = uVar8;
    func_0x00010c0720c0();
    if ((int)uVar9 == 0) {
      uVar9 = uVar8;
      func_0x00010c0720c0();
      if ((int)uVar9 != 0) {
        func_0x00010bdc97e0(puVar1);
      }
    }
    else {
      func_0x00010be94b60(puVar1);
    }
LAB_1062e5514:
    _objc_release(uVar7);
  }
  _objc_release(uVar8);
LAB_1062e5524:
  _objc_release(in_x4);
  _objc_release(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar12);
  return;
}



/* Entry: 1062e526c; end: 1062e5707; -[SCOperaMediaResolverErrorHandlerPlugin operaViewDidSendEvent:page:params:] */

void FUN_1062e526c(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c95c8;
  func_0x00010c09d2c0(PTR_PTR_1126c95c8);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(puVar1);
  if ((int)uVar2 == 0) {
    puVar1 = PTR_PTR_1126b2338;
    func_0x00010c0c4e00(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if ((int)uVar2 != 0) {
      puVar1 = PTR_PTR_1126c9898;
      func_0x00010c0c6040(PTR_PTR_1126c9898);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
      _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
      uVar5 = uVar3;
      _objc_opt_isKindOfClass(uVar3,puVar1);
      uVar4 = uVar3;
      if ((uVar5 & 1) == 0) {
        uVar4 = 0;
      }
      _objc_retain(uVar4);
      _objc_release(uVar3);
      puVar1 = PTR_PTR_1126c9898;
      func_0x00010c0844e0(PTR_PTR_1126c9898);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = param_5;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
      uVar6 = uVar5;
      _objc_opt_isKindOfClass(uVar5,puVar1);
      uVar3 = uVar5;
      if ((uVar6 & 1) == 0) {
        uVar3 = 0;
      }
      _objc_retain(uVar3);
      _objc_release(uVar5);
      uVar5 = uVar4;
      func_0x00010c14d1c0();
      if ((int)uVar5 != 0) {
        func_0x00010be8c320(param_1);
      }
      goto LAB_1062e5514;
    }
    puVar1 = PTR_PTR_1126c95c8;
    func_0x00010bf98f00(PTR_PTR_1126c95c8);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if ((int)uVar2 != 0) {
      func_0x00010bdc97e0(param_1);
      goto LAB_1062e5524;
    }
    puVar1 = PTR_PTR_1126b2338;
    func_0x00010c0c4dc0(PTR_PTR_1126b2338);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010c0720c0();
    _objc_release(puVar1);
    if ((int)uVar2 == 0) goto LAB_1062e5524;
    puVar1 = PTR_PTR_1126b2348;
    func_0x00010c120300(PTR_PTR_1126b2348);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
    _objc_opt_class(PTR__OBJC_CLASS___NSError_1126ae858);
    uVar5 = uVar4;
    _objc_opt_isKindOfClass(uVar4,puVar1);
    uVar3 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar4);
    uVar4 = param_4;
    func_0x00010c118b40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    puVar1 = PTR_PTR_1126b2ca0;
    _objc_opt_class(PTR_PTR_1126b2ca0);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar1);
    uVar4 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar5);
    uVar6 = uVar3;
    func_0x00010c14d800();
    _objc_release(uVar3);
    if (((int)uVar6 != 0) && (uVar4 != 0)) {
      lVar7 = *(long *)(param_1 + 0x20);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar7 != 0) {
        param_1 = param_1 + 0x10;
        _objc_loadWeakRetained(param_1);
        func_0x00010c0c4280(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c101400(param_1);
        _objc_release(uVar5);
        _objc_release(param_1);
      }
    }
  }
  else {
    puVar1 = PTR_PTR_1126c9680;
    func_0x00010bf98900(PTR_PTR_1126c9680);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar5 = uVar3;
    _objc_opt_isKindOfClass(uVar3,puVar1);
    uVar4 = uVar3;
    if ((uVar5 & 1) == 0) {
      uVar4 = 0;
    }
    _objc_retain(uVar4);
    _objc_release(uVar3);
    puVar1 = PTR_PTR_1126b6008;
    func_0x00010c0f12c0(PTR_PTR_1126b6008);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = param_5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
    uVar6 = uVar5;
    _objc_opt_isKindOfClass(uVar5,puVar1);
    uVar3 = uVar5;
    if ((uVar6 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar5);
    uVar5 = uVar4;
    func_0x00010c0720c0();
    if ((int)uVar5 == 0) {
      uVar5 = uVar4;
      func_0x00010c0720c0();
      if ((int)uVar5 != 0) {
        func_0x00010bdc97e0(param_1);
      }
    }
    else {
      func_0x00010be94b60(param_1);
    }
LAB_1062e5514:
    _objc_release(uVar3);
  }
  _objc_release(uVar4);
LAB_1062e5524:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e5708; end: 1062e575f; -[SCOperaMediaResolverErrorHandlerPlugin _advanceToNextPage] */

void FUN_1062e5708(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1 = param_1 + 0x18;
  _objc_loadWeakRetained(param_1);
  puVar1 = PTR_PTR_1126c98a0;
  func_0x00010c0689a0(PTR_PTR_1126c98a0,param_2,0xb);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d6080(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062e5760; end: 1062e5843; -[SCOperaMediaResolverErrorHandlerPlugin _removeFromPlaylistIfNotVisible:error:] */

void FUN_1062e5760(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    uVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    uVar2 = uVar1;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = uVar4;
    func_0x00010be36bc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      param_1 = param_1 + 0x10;
      _objc_loadWeakRetained(param_1);
      func_0x00010c12db80();
      _objc_release(param_1);
    }
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e5844; end: 1062e59db; -[SCOperaMediaResolverErrorHandlerPlugin _resolveMediaForPageId:] */

void FUN_1062e5844(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010c101440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar6 = *(undefined8 *)(param_1 + 8);
    lVar1 = param_1 + 0x10;
    _objc_loadWeakRetained(lVar1);
    lVar3 = lVar1;
    func_0x00010c101260();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf5ee40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12d120(uVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar1);
    _objc_initWeak(auStack_58,param_1);
    uVar6 = *(undefined8 *)(param_1 + 8);
    _objc_copyWeak(auStack_60,auStack_58);
    _objc_retain(lVar2);
    func_0x00010c13abe0(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_60);
    _objc_destroyWeak(auStack_58);
    _objc_release(lVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1062e59dc; end: 1062e5aaf;  */

void FUN_1062e59dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_1062e5ab0;
  puStack_48 = &UNK_110841fb0;
  _objc_copyWeak(auStack_38,param_1 + 0x28);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  func_0x0001000d76cc("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1062e5ab0; end: 1062e5b03;  */

void FUN_1062e5ab0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010be36bc0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdfe360(lVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1062e5b04; end: 1062e5b4b; -[SCOperaMediaResolverErrorHandlerPlugin _didFinishResolvingForPageWithId:] */

void FUN_1062e5b04(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  func_0x00010c101400();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062e5b4c; end: 1062e5b8b; -[SCOperaMediaResolverErrorHandlerPlugin .cxx_destruct] */

void FUN_1062e5b4c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_destroyWeak(param_1 + 0x18);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062e5b8c; end: 1062e5c4b;  */

void FUN_1062e5b8c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x00010bf26860(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_1;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c0c46a0();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b08b8;
  _objc_alloc(PTR_PTR_1126b08b8);
  func_0x00010c0295e0();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1062e5c4c; end: 1062e6053;  */

void FUN_1062e5c4c(undefined *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,int param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined1 **ppuStack_100;
  code *pcStack_f8;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined4 uStack_84;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined **ppuStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_84 = param_5;
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126bff90;
  func_0x00010c100200();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = param_1;
  uStack_78 = param_3;
  FUN_1062e5b8c();
  _objc_retainAutoreleasedReturnValue();
  puStack_80 = puVar8;
  func_0x00010c2aae20(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf0e960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c46a0();
  ppuStack_70 = &PTR____CFConstantStringClassReference_110e135d8;
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1060;
  _objc_alloc(PTR_PTR_1126b1060);
  func_0x00010c032f60();
  puVar4 = PTR_PTR_1126b1378;
  if (param_6 == 0) {
    func_0x00010c108220(PTR_PTR_1126b1378);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c294220();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(puVar3);
  _objc_release(puVar2);
  func_0x00010c2b70a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(puVar8);
  func_0x00010c2bbcc0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  lVar5 = param_2;
  func_0x00010bf92c80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010bf92c60(param_2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 != 0) {
    puVar8 = PTR_PTR_1126c98a8;
    _objc_alloc(PTR_PTR_1126c98a8);
    func_0x00010c020b60();
    func_0x00010c2ad2c0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar8);
  }
  func_0x00010c2bc3a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar8 = PTR_PTR_1126b8010;
  _objc_alloc(PTR_PTR_1126b8010);
  func_0x00010c0003a0();
  func_0x00010c2b5b20(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  func_0x00010c2b74a0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010c0cc0c0();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar8;
  func_0x00010bf9c720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  if (puVar2 == (undefined *)0x0) {
    puVar8 = param_1;
    func_0x00010bf0e960(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c46a0();
    _objc_release(puVar8);
    puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf65600(0x40f5180000000000,PTR__OBJC_CLASS___NSDate_1126ae770);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010c2ad7e0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2a7460(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  puVar8 = param_1;
  func_0x00010bf0e960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360();
  func_0x00010c2bc8c0(puVar1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126bfef0;
  _objc_alloc();
  lVar7 = param_2;
  func_0x00010c0c5440();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c6c20(param_2);
  puVar3 = puVar1;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029760();
  _objc_release(puVar3);
  _objc_release(lVar7);
  _objc_release(puVar2);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(puStack_80);
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    pcStack_98 = FUN_1062e6054;
    lStack_d8 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uStack_e8 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
    uStack_e0 = param_3;
    lStack_d0 = lVar7;
    puStack_c8 = puVar3;
    puStack_c0 = puVar8;
    puStack_b8 = puVar1;
    lStack_b0 = param_2;
    puStack_a8 = param_1;
    puStack_a0 = &stack0xfffffffffffffff0;
    _objc_retain(param_3);
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf99240();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release();
    puVar8 = puVar4;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_d8) {
      ___stack_chk_fail();
      pcStack_f8 = FUN_1062e6140;
      uStack_110 = param_3;
      puStack_108 = puVar4;
      ppuStack_100 = &puStack_a0;
      _objc_retain();
      puVar1 = puVar2;
      func_0x00010c0c6c20();
      if ((puVar1 == (undefined *)0x2) ||
         (puVar1 = puVar2, func_0x00010c0c6c20(), puVar1 == (undefined *)0x1)) {
        puStack_138 = &uStack_140;
        uStack_140 = 0;
        uStack_130 = 0x3032000000;
        pcStack_128 = FUN_1062e628c;
        uStack_120 = 0x1062e629c;
        uStack_118 = 0;
        func_0x00010c0c1140(puVar2);
        if (puStack_138[5] == 0) {
          puVar8 = (undefined *)0x0;
        }
        else {
          puVar8 = PTR_PTR_1126c98b0;
          func_0x00010bfe94a0(PTR_PTR_1126c98b0);
          _objc_retainAutoreleasedReturnValue();
        }
        __Block_object_dispose(&uStack_140,8);
        _objc_release(uStack_118);
      }
      else {
        puVar8 = (undefined *)0x0;
      }
      _objc_release(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1062e6054; end: 1062e613f;  */

void FUN_1062e6054(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)PTR__NSLocalizedDescriptionKey_110345568;
  uStack_50 = param_2;
  _objc_retain(param_2);
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_68 = FUN_1062e6140;
    uStack_80 = param_2;
    puStack_78 = puVar2;
    puStack_70 = &stack0xfffffffffffffff0;
    _objc_retain();
    puVar2 = puVar1;
    func_0x00010c0c6c20();
    if ((puVar2 == (undefined *)0x2) ||
       (puVar2 = puVar1, func_0x00010c0c6c20(), puVar2 == (undefined *)0x1)) {
      puStack_a8 = &uStack_b0;
      uStack_b0 = 0;
      uStack_a0 = 0x3032000000;
      pcStack_98 = FUN_1062e628c;
      uStack_90 = 0x1062e629c;
      uStack_88 = 0;
      func_0x00010c0c1140(puVar1);
      if (puStack_a8[5] == 0) {
        puVar2 = (undefined *)0x0;
      }
      else {
        puVar2 = PTR_PTR_1126c98b0;
        func_0x00010bfe94a0(PTR_PTR_1126c98b0);
        _objc_retainAutoreleasedReturnValue();
      }
      __Block_object_dispose(&uStack_b0,8);
      _objc_release(uStack_88);
    }
    else {
      puVar2 = (undefined *)0x0;
    }
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062e6140; end: 1062e628b;  */

void FUN_1062e6140(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  lVar1 = param_1;
  func_0x00010c0c6c20();
  if ((lVar1 == 2) || (lVar1 = param_1, func_0x00010c0c6c20(), lVar1 == 1)) {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x3032000000;
    pcStack_38 = FUN_1062e628c;
    uStack_30 = 0x1062e629c;
    uStack_28 = 0;
    func_0x00010c0c1140(param_1);
    if (puStack_48[5] == 0) {
      puVar2 = (undefined *)0x0;
    }
    else {
      puVar2 = PTR_PTR_1126c98b0;
      func_0x00010bfe94a0(PTR_PTR_1126c98b0);
      _objc_retainAutoreleasedReturnValue();
    }
    __Block_object_dispose(&uStack_50,8);
    _objc_release(uStack_28);
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1062e628c; end: 1062e62a7;  */

void FUN_1062e628c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1062e62a8; end: 1062e63eb;  */

void FUN_1062e62a8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  
  func_0x00010b7f5374();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar3 = *(undefined8 *)(lVar4 + 0x28);
    *(undefined **)(lVar4 + 0x28) = puVar1;
    _objc_release(uVar3);
    if (*(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28) == 0) {
      lVar4 = param_2;
      _objc_retainAutorelease();
      func_0x00010bf25f00();
      puVar1 = (undefined *)0x0;
      if (lVar4 != 0) {
        puVar2 = PTR__OBJC_CLASS___NSMutableString_1126af7f8;
        func_0x00010c25d900(PTR__OBJC_CLASS___NSMutableString_1126af7f8);
        _objc_retainAutoreleasedReturnValue();
        lVar4 = 0;
        do {
          puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
          func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf070e0(puVar2);
          _objc_release(puVar1);
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0x10);
        puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        func_0x00010c25da60(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar2);
      }
      _objc_release(puVar1);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062e63ec; end: 1062e645b;  */

void FUN_1062e63ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d040();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062e645c; end: 1062e645f;  */

void FUN_1062e645c(void)

{
  return;
}



/* Entry: 1062e6460; end: 1062e64b3;  */

void FUN_1062e6460(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain();
  _objc_opt_new(puVar1);
  func_0x00010c1d0640();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062e64b4; end: 1062e67d3;  */

void FUN_1062e64b4(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined1 auStack_80 [48];
  
  _objc_retain();
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  func_0x00010c1d0640();
  uVar2 = param_2;
  func_0x00010c0c3fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0c6c20();
  _objc_release(uVar2);
  if ((uVar3 < 0xb) && (uVar3 != 3)) {
    if (1 < uVar3 - 1) goto LAB_1062e6584;
    uVar3 = param_2;
    func_0x00010bf26800(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
  }
  else {
    uVar2 = param_2;
    func_0x00010bf26800(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126bcba8;
    uVar2 = param_1;
    func_0x00010c299160(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25c800(puVar4);
    _objc_release(uVar2);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar4);
    puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c263c60(PTR_PTR_1126bcba8);
    func_0x00010c0df6e0(puVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(puVar1);
    _objc_release(puVar4);
    func_0x00010c1d0640(puVar1);
    func_0x00010c1d0640(puVar1);
    uVar2 = param_1;
    func_0x00010c299160();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0d5720();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar3;
    func_0x00010c279200();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    if (uVar5 != 0) {
      func_0x00010c0d5d20(uVar5);
      func_0x00010c106f40(auStack_80,uVar5);
      puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
      func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar1);
      _objc_release(puVar4);
    }
    _objc_release(uVar5);
  }
  _objc_release(uVar3);
LAB_1062e6584:
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062e67d4; end: 1062e698f;  */

void FUN_1062e67d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_2);
  _objc_retain(param_1);
  _objc_opt_new(puVar1);
  uVar2 = param_1;
  func_0x00010bfe6ac0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uVar3 = param_2;
  func_0x00010bf26880(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1d0640(puVar1);
  _objc_release(uVar3);
  puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
  func_0x00010c23d0a0(uVar2);
  func_0x00010c297120(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(puVar1);
  _objc_release(puVar4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062e6990; end: 1062e6b9f;  */

void FUN_1062e6990(ulong param_1)

{
  undefined **ppuVar1;
  bool bVar2;
  ulong uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  if (param_1 == 0) {
    puVar11 = (undefined *)0x0;
  }
  else {
    uVar3 = param_1;
    func_0x00010c14d180();
    if ((uVar3 & 1) == 0) {
      uVar3 = param_1;
      func_0x00010c14d360();
      if ((uVar3 & 1) == 0) {
        uVar3 = param_1;
        func_0x00010c14d340();
        ppuVar10 = &PTR____CFConstantStringClassReference_110dc3e98;
        if ((uVar3 & 1) == 0) {
          uVar3 = param_1;
          func_0x00010c14d160();
          bVar2 = (int)uVar3 == 0;
          ppuVar10 = &PTR____CFConstantStringClassReference_110e49a78;
          if (bVar2) {
            ppuVar10 = &PTR____CFConstantStringClassReference_110dc3e98;
          }
          ppuVar4 = &PTR____CFConstantStringClassReference_110e49a98;
          if (bVar2) {
            ppuVar4 = &PTR____CFConstantStringClassReference_110db9c98;
          }
        }
        else {
          ppuVar4 = &PTR____CFConstantStringClassReference_110e1c718;
        }
      }
      else {
        ppuVar10 = &PTR____CFConstantStringClassReference_110e49a38;
        ppuVar4 = &PTR____CFConstantStringClassReference_110e49a58;
      }
    }
    else {
      ppuVar10 = &PTR____CFConstantStringClassReference_110e499f8;
      ppuVar4 = &PTR____CFConstantStringClassReference_110e49a18;
    }
    func_0x00010bcbeaa8(ppuVar10,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bcbeaa8(ppuVar4,0);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = param_1;
    func_0x00010c14d420();
    puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    ppuVar1 = &PTR____CFConstantStringClassReference_110db3738;
    if ((int)uVar3 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e1af98;
    }
    _objc_retain(ppuVar1);
    func_0x00010bf72080();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
    _objc_release(ppuVar4);
    _objc_release(ppuVar10);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    _objc_retain();
    puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    uVar3 = param_1;
    func_0x00010c09ce60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      uVar3 = param_1;
      func_0x00010c09ce60(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar3;
      func_0x0001062e6eac();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010befa120(puVar5);
      _objc_release(uVar6);
    }
    uVar3 = param_1;
    func_0x00010c0c3fe0(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x0001062e6eac();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    func_0x00010befa120(puVar5);
    uVar3 = param_1;
    func_0x00010c0ef4a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      uVar3 = param_1;
      func_0x00010c0ef4a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x0001062e6eac();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010befa120(puVar5);
      _objc_release(uVar7);
    }
    uVar3 = param_1;
    func_0x00010c260dc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (uVar3 != 0) {
      uVar3 = param_1;
      func_0x00010c260dc0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar3;
      func_0x0001062e6eac();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010befa120(puVar5);
      _objc_release(uVar7);
    }
    uVar3 = param_1;
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c46a0();
    _objc_release(uVar3);
    uVar3 = param_1;
    func_0x00010bf0e960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c29d360();
    _objc_release(uVar3);
    func_0x00010bf7fc40(param_1);
    puVar8 = PTR_PTR_1126c98b8;
    _objc_alloc(PTR_PTR_1126c98b8);
    uVar3 = param_1;
    func_0x00010bf0e960(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0c46a0();
    func_0x00010c003d80(puVar8);
    _objc_release(uVar3);
    puVar11 = PTR_PTR_1126c98c0;
    _objc_alloc(PTR_PTR_1126c98c0);
    uVar3 = param_1;
    func_0x00010c0c4280(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c077940(param_1);
    func_0x00010c047be0(puVar11);
    _objc_release(uVar3);
    _objc_release(puVar8);
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1062e6ba0; end: 1062e6f87;  */

void FUN_1062e6ba0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  lVar2 = param_1;
  func_0x00010c09ce60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010c09ce60(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x0001062e6eac();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010befa120(puVar1);
    _objc_release(lVar3);
  }
  lVar2 = param_1;
  func_0x00010c0c3fe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x0001062e6eac();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010befa120(puVar1);
  lVar2 = param_1;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010c0ef4a0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x0001062e6eac();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010befa120(puVar1);
    _objc_release(lVar4);
  }
  lVar2 = param_1;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_1;
    func_0x00010c260dc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x0001062e6eac();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010befa120(puVar1);
    _objc_release(lVar4);
  }
  lVar2 = param_1;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c46a0();
  _objc_release(lVar2);
  lVar2 = param_1;
  func_0x00010bf0e960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d360();
  _objc_release(lVar2);
  func_0x00010bf7fc40(param_1);
  puVar5 = PTR_PTR_1126c98b8;
  _objc_alloc(PTR_PTR_1126c98b8);
  lVar2 = param_1;
  func_0x00010bf0e960(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c46a0();
  func_0x00010c003d80(puVar5);
  _objc_release(lVar2);
  puVar6 = PTR_PTR_1126c98c0;
  _objc_alloc(PTR_PTR_1126c98c0);
  lVar2 = param_1;
  func_0x00010c0c4280(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c077940(param_1);
  func_0x00010c047be0(puVar6);
  _objc_release(lVar2);
  _objc_release(puVar5);
  _objc_release(lVar3);
  _objc_release(puVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1062e6f88; end: 1062e6fef; -[SCOperaMediaPagePropertiesRepository init] */

undefined1 * FUN_1062e6f88(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f0dd8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x10) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1062e6ff0; end: 1062e7087; -[SCOperaMediaPagePropertiesRepository pagePropertiesForMediaBundle:] */

void FUN_1062e6ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010c0c4280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(uVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1062e7088; end: 1062e71bb; -[SCOperaMediaPagePropertiesRepository updatePageProperties:forMediaBundle:] */

void FUN_1062e7088(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x10);
  puVar4 = *(undefined **)(param_1 + 8);
  uVar1 = param_4;
  func_0x00010c0c4280(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0(puVar4,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  func_0x00010c0d3c80();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878);
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar4);
  _objc_release(uVar1);
  func_0x00010bef7f60(puVar3,param_2,param_3);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_4;
  func_0x00010c0c4280(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar5,param_2,puVar3,uVar1);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e71bc; end: 1062e725f; -[SCOperaMediaPagePropertiesRepository replacePageProperties:forMediaBundle:] */

void FUN_1062e71bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_4;
  func_0x00010c0c4280(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,param_3,uVar1);
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x10);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e7260; end: 1062e72e3; -[SCOperaMediaPagePropertiesRepository removePagePropertiesForMediaBundle:] */

void FUN_1062e7260(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010c0c4280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d3e0(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e72e4; end: 1062e7327; -[SCOperaMediaPagePropertiesRepository removeAllPageProperties] */

void FUN_1062e72e4(long param_1)

{
  _os_unfair_lock_lock(param_1 + 0x10);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf5a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_11034c790)(param_1 + 0x10);
  return;
}



/* Entry: 1062e7328; end: 1062e7333; -[SCOperaMediaPagePropertiesRepository .cxx_destruct] */

void FUN_1062e7328(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1062e7334; end: 1062e744b; -[SCOperaMediaResolver initWithPlaybackMediaResolver:mediaBundleProviders:assetRepository:operaAssetDataSource:operaConfigProvider:itemLoadStateTracker:singleSnapPlayerMediaService:] */

undefined8
FUN_1062e7334(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c98d0;
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c036d60(param_1,param_2,param_3,param_4,param_5,param_6,puVar1,param_7,param_8,param_9
                     );
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1062e744c; end: 1062e78af; -[SCOperaMediaResolver initWithPlaybackMediaResolver:mediaBundleProviders:assetRepository:operaAssetDataSource:pagePropertiesRepository:operaConfigProvider:itemLoadStateTracker:singleSnapPlayerMediaService:] */

undefined8 *
FUN_1062e744c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_1126f0de0;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSHashTable_1126b4538;
    func_0x00010c14dfc0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[5];
    puVar1[5] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[4];
    puVar1[4] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    *(undefined4 *)(puVar1 + 9) = 0;
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    puVar1[0xf] = 3;
    puVar1[0xe] = 1;
    uVar4 = puVar1[4];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0c6460();
    puVar1[0x10] = uVar2;
    _objc_release(uVar4);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = 0;
    _objc_release(uVar2);
    uVar4 = puVar1[4];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf90c20();
    *(char *)((long)puVar1 + 0xa4) = (char)uVar2;
    _objc_release(uVar4);
    uVar4 = puVar1[4];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0db4a0();
    *(char *)((long)puVar1 + 0xa7) = (char)uVar2;
    _objc_release(uVar4);
    uVar4 = puVar1[4];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010c0b77c0();
    *(char *)((long)puVar1 + 0xa5) = (char)uVar2;
    _objc_release(uVar4);
    uVar4 = puVar1[4];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar4;
    func_0x00010bf91140();
    *(char *)((long)puVar1 + 0xa6) = (char)uVar2;
    _objc_release(uVar4);
    *(undefined4 *)(puVar1 + 0x14) = 0;
    puVar3 = PTR_PTR_1126ae720;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_1062e78b0;
    puStack_90 = &UNK_110855710;
    _objc_retain(param_8);
    uStack_88 = param_8;
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0x13];
    puVar1[0x13] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_b0,puVar1);
    uVar5 = puVar1[2];
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0e0880();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b8,auStack_b0);
    uVar4 = uVar2;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = puVar1[0xd];
    puVar1[0xd] = uVar4;
    _objc_release(uVar6);
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_opt_class(puVar1);
    _objc_destroyWeak(auStack_b8);
    _objc_destroyWeak(auStack_b0);
    _objc_release(uStack_88);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1062e78b0; end: 1062e795b;  */

void FUN_1062e78b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126b7800;
  _objc_alloc_init(PTR_PTR_1126b7800);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c13b1e0();
  func_0x00010c184700(puVar1,param_2,(long)(int)uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062e795c; end: 1062e7ed7; -[SCOperaMediaResolver resolvePlaylistItem:option:completion:] */

void FUN_1062e795c(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_f0 [8];
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined1 uStack_a0;
  undefined8 uStack_98;
  undefined8 *puStack_90;
  undefined8 uStack_88;
  undefined1 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puStack_90 = &uStack_98;
  uStack_98 = 0;
  uVar10 = 0x2020000000;
  uStack_88 = 0x2020000000;
  uStack_80 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010bf900c0();
  _objc_release(uVar1);
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1062e7ed8;
  puStack_c8 = &UNK_11091b938;
  puStack_a8 = &uStack_98;
  _objc_retain(param_5);
  uStack_a0 = (undefined1)uVar5;
  puStack_c0 = param_1;
  uStack_b0 = param_5;
  _objc_retain(param_3);
  ppuVar2 = &puStack_e0;
  uStack_b8 = param_3;
  _objc_retainBlock();
  _objc_opt_class(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xa8);
  func_0x00010bd55f40();
  uVar5 = param_3;
  func_0x00010be36bc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77a00(uVar10,uVar1);
  _objc_release(uVar5);
  puVar3 = param_1;
  func_0x00010be5e480();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b2798;
  _objc_opt_new(PTR_PTR_1126b2798);
  if (puVar3 == (undefined *)0x0) {
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = (undefined *)0x1;
    FUN_1062e6054(1,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar2[2])(ppuVar2,0,puVar8);
    _objc_release(puVar8);
    _objc_retain(puVar4);
  }
  else {
    puVar6 = puVar3;
    func_0x00010c0c4240();
    _objc_retainAutoreleasedReturnValue();
    if (puVar6 != (undefined *)0x0) {
      puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar6 != puVar8) {
        puVar8 = puVar6;
        func_0x00010bf8d480();
        if ((int)puVar8 == 0) {
          func_0x00010be00880(param_1);
          uVar5 = param_3;
          func_0x00010be36bc0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010be94b40(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          func_0x00010bef7460(puVar4);
        }
        else {
          _objc_opt_class(param_1);
          func_0x00010c0c4280(puVar6);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          puVar8 = puVar6;
          FUN_1062e6ba0(puVar6);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = *(long *)(param_1 + 0x60);
          uVar5 = param_3;
          func_0x00010be36bc0(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(uVar5);
          if (lVar9 == 0) {
            puVar7 = param_1;
            func_0x00010be66580();
            _objc_retainAutoreleasedReturnValue();
            if (puVar7 != (undefined *)0x0) {
              func_0x00010bef7460(puVar4);
            }
            _objc_release(puVar7);
          }
          _objc_initWeak(auStack_e8,param_1);
          uVar10 = *(undefined8 *)(param_1 + 0x88);
          func_0x00010c0c6440(uVar10);
          _objc_retainAutoreleasedReturnValue();
          uVar5 = uVar10;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          _objc_copyWeak(auStack_f0,auStack_e8);
          _objc_retain(puVar6);
          _objc_retain(ppuVar2);
          uVar1 = uVar5;
          func_0x00010c13aac0(uVar5);
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar5);
          _objc_release(uVar10);
          func_0x00010bef7460(puVar4);
          _objc_release(uVar1);
          _objc_release(ppuVar2);
          _objc_release(puVar6);
          _objc_destroyWeak(auStack_f0);
          _objc_destroyWeak(auStack_e8);
          param_1 = puVar8;
        }
        _objc_release(param_1);
        _objc_retain(puVar4);
        goto LAB_1062e7df8;
      }
    }
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = 2;
    FUN_1062e6054(2,puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar2[2])(ppuVar2,0,puVar8);
    _objc_release(puVar8);
    _objc_retain(puVar4);
    _objc_release(uVar5);
  }
  _objc_release(puVar7);
LAB_1062e7df8:
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(ppuVar2);
  _objc_release(uStack_b8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_98,8);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1062e7ed8; end: 1062e7ff3;  */

void FUN_1062e7ed8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  if ((*(byte *)(lVar1 + 0x18) & 1) == 0) {
    *(undefined1 *)(lVar1 + 0x18) = 1;
  }
  else if ((*(byte *)(param_1 + 0x40) & 1) != 0) goto LAB_1062e7f3c;
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),param_2,param_3);
LAB_1062e7f3c:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062e7ff4; end: 1062e83c7; -[SCOperaMediaResolver _observeMediaMetadataUpdatesForSingleSnapPlayerData:fromBundle:] */

void FUN_1062e7ff4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [8];
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [8];
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_1062e83c8;
  uStack_88 = 0x1062e83d8;
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  puStack_80 = puVar1;
  _objc_initWeak(auStack_b0,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c0c6440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0dc0();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d8 = 0xc2000000;
  pcStack_d0 = FUN_1062e83e0;
  puStack_c8 = &UNK_11091b998;
  _objc_copyWeak(auStack_b8,auStack_b0);
  _objc_retain(param_4);
  uVar5 = uVar4;
  uStack_c0 = param_4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c0c6440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0e00();
  _objc_retainAutoreleasedReturnValue();
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  uStack_100 = 0x1062e8460;
  puStack_f8 = &UNK_11091b9c8;
  _objc_copyWeak(auStack_e8,auStack_b0);
  _objc_retain(param_4);
  uVar5 = uVar4;
  uStack_f0 = param_4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c0c6440(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e0de0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_118,auStack_b0);
  _objc_retain(param_4);
  uVar5 = uVar4;
  func_0x00010c25ff60(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  puVar1 = PTR_PTR_1126afd78;
  _objc_alloc(PTR_PTR_1126afd78);
  func_0x00010bffae00();
  _objc_release(param_4);
  _objc_destroyWeak(auStack_118);
  _objc_release(uStack_f0);
  _objc_destroyWeak(auStack_e8);
  _objc_release(uStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(auStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(puStack_80);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1062e83c8; end: 1062e83df;  */

void FUN_1062e83c8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1062e83e0; end: 1062e85ff;  */

void FUN_1062e83e0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1;
    func_0x00010be1ba40(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdd7c00(param_1);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062e8600; end: 1062e860f;  */

void FUN_1062e8600(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x28),
             PTR_s_disposeAll_1125bf508);
  return;
}



/* Entry: 1062e8610; end: 1062e868f; -[SCOperaMediaResolver isBuiltInMediaResolverEnabledForItem:] */

bool FUN_1062e8610(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  func_0x00010be5e480(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010c0c4240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  _objc_release(param_1);
  return lVar1 != 0;
}



/* Entry: 1062e8690; end: 1062e87b7; -[SCOperaMediaResolver setCurrentPlaylistItemIdObservable:] */

void FUN_1062e8690(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xa0);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x90));
  _objc_initWeak(auStack_38,param_1);
  uVar1 = param_3;
  func_0x00010c0e0ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar2 = uVar1;
  func_0x00010c25ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(param_1 + 0x90) = uVar2;
  _objc_release(uVar3);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _os_unfair_lock_unlock(param_1 + 0xa0);
  _objc_release(param_3);
  return;
}



/* Entry: 1062e87b8; end: 1062e87ff;  */

void FUN_1062e87b8(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdf6f80();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062e8800; end: 1062e8a0f; -[SCOperaMediaResolver teardown] */

void FUN_1062e8800(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  long lStack_e0;
  long lStack_58;
  
  puVar5 = &uStack_140;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_opt_class();
  _os_unfair_lock_lock(param_1 + 0x48);
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_1062e8a10;
  puStack_e8 = &UNK_11091b9f8;
  lStack_e0 = param_1;
  func_0x00010bf97ce0(*(undefined8 *)(param_1 + 0x58));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x58));
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  lVar2 = *(long *)(param_1 + 0x60);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar6 = *plStack_130;
    do {
      lVar7 = 0;
      do {
        if (*plStack_130 != lVar6) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010bf2dba0(*(undefined8 *)(lStack_138 + lVar7 * 8));
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
      lVar3 = lVar2;
      puVar5 = &uStack_140;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x60));
  func_0x00010c12af80(*(undefined8 *)(param_1 + 0x30));
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ab00();
  _objc_release(uVar4);
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c12adc0(*(undefined8 *)(param_1 + 0x50));
  _os_unfair_lock_unlock(param_1 + 0x48);
  lVar3 = param_1 + 0xa0;
  _os_unfair_lock_lock(lVar3);
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x90));
  iVar1 = (int)*(undefined8 *)(param_1 + 0x98);
  func_0x00010c06f880();
  if (iVar1 != 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x98);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12adc0();
    _objc_release(uVar4);
  }
  lVar2 = lVar3;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(lVar3);
  __Unwind_Resume();
  _objc_retain(puVar5);
  _objc_retain(param_2);
  _objc_opt_class(*(undefined8 *)(lVar2 + 0x20));
  _objc_release(param_2);
  func_0x00010bf2dba0(puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1062e8a10; end: 1062e8a67;  */

void FUN_1062e8a10(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_class(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
  func_0x00010bf2dba0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e8a68; end: 1062e8c07; -[SCOperaMediaResolver prepareMediaForItem:startWaitingForDownloadCallback:completion:] */

void FUN_1062e8a68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_1);
  func_0x00010be12ea0(param_1);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_5);
  lVar1 = param_1;
  func_0x00010c13abe0(param_1);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x48);
  lVar2 = param_1;
  func_0x00010bddb080(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7460();
  _objc_release(lVar2);
  _os_unfair_lock_unlock(param_1 + 0x48);
  _objc_release(lVar1);
  _objc_release(param_5);
  _objc_destroyWeak(auStack_60);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062e8c08; end: 1062e8c93;  */

void FUN_1062e8c08(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  _objc_opt_class(*(undefined8 *)(param_1 + 0x20));
  uVar1 = param_2;
  func_0x00010c0c4280(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010becee00();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062e8c94; end: 1062e8cf7; -[SCOperaMediaResolver _fetchOptionForItem:] */

undefined8 FUN_1062e8c94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  lVar1 = 0x80;
  if ((int)uVar2 == 0) {
    lVar1 = 0x78;
  }
  return *(undefined8 *)(param_1 + lVar1);
}



/* Entry: 1062e8cf8; end: 1062e8f57; -[SCOperaMediaResolver removeMediaForItem:] */

void FUN_1062e8cf8(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  _objc_retain(param_3);
  lVar2 = param_1;
  func_0x00010be5e480();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x00010c0c4240();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x00010bf8d480();
      if ((int)lVar4 == 0) {
        func_0x00010bdfc5e0(param_1);
      }
      else {
        lVar4 = lVar3;
        FUN_1062e6ba0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        if (*(char *)(param_1 + 0xa6) == '\x01') {
          uVar5 = *(ulong *)(param_1 + 0x30);
          func_0x00010c0f1a80();
          _objc_retainAutoreleasedReturnValue();
          uVar6 = uVar5;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          puVar7 = PTR_PTR_1126c98d8;
          _objc_opt_class(PTR_PTR_1126c98d8);
          uVar8 = uVar6;
          _objc_opt_isKindOfClass(uVar6,puVar7);
          uVar1 = uVar6;
          if ((uVar8 & 1) == 0) {
            uVar1 = 0;
          }
          _objc_retain(uVar1);
          _objc_release(uVar6);
          func_0x00010c069d00(uVar1);
          _objc_release(uVar1);
          func_0x00010c12d7e0(*(undefined8 *)(param_1 + 0x30));
          uVar9 = *(undefined8 *)(param_1 + 0x88);
          func_0x00010c0c6440(uVar9);
          _objc_retainAutoreleasedReturnValue();
          uVar10 = uVar9;
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf2e140();
          _objc_release(uVar10);
          _objc_release(uVar9);
          _objc_release(uVar5);
        }
        uVar9 = *(undefined8 *)(param_1 + 0x88);
        func_0x00010c0c6440(uVar9);
        _objc_retainAutoreleasedReturnValue();
        uVar10 = uVar9;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf3acc0();
        _objc_release(uVar10);
        _objc_release(uVar9);
        _os_unfair_lock_lock(param_1 + 0x48);
        lVar11 = param_1;
        func_0x00010bddb080(param_1);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf2dba0();
        uVar9 = *(undefined8 *)(param_1 + 0x60);
        uVar10 = param_3;
        func_0x00010be36bc0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c12d3e0(uVar9);
        _objc_release(uVar10);
        _objc_opt_class(param_1);
        func_0x00010c0c4280(lVar3);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar11);
        _os_unfair_lock_unlock(param_1 + 0x48);
        _objc_release(lVar4);
      }
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e8f58; end: 1062e90cb; -[SCOperaMediaResolver isMediaLoadedForItem:] */

ulong FUN_1062e8f58(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_1;
  func_0x00010be5e480(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    param_1 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x00010c0c4240(uVar1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      param_1 = 0;
    }
    else {
      uVar3 = uVar2;
      func_0x00010bf8d480();
      _objc_opt_class(param_1);
      func_0x00010c0c4280(uVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if ((int)uVar3 == 0) {
        uVar3 = param_1;
        func_0x00010bdcfaa0(param_1,param_2,uVar2);
        if ((uVar3 & 1) == 0) {
          _objc_opt_class(param_1);
          func_0x00010c0c4280(uVar2);
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          func_0x00010be5e4a0(param_1,param_2,uVar2);
        }
        else {
          param_1 = 1;
        }
      }
      else {
        uVar3 = uVar2;
        FUN_1062e6ba0(uVar2);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = *(ulong *)(param_1 + 0x88);
        func_0x00010c0c6440(uVar4);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        param_1 = uVar5;
        func_0x00010c0777e0();
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
      }
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1062e90cc; end: 1062e925b; -[SCOperaMediaResolver loadMediaForPlaylistItemGroup:isFirstGroup:] */

void FUN_1062e90cc(long param_1,undefined8 param_2,long param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  if (param_4 != 0) {
    lVar1 = param_3;
    func_0x00010bf5f0a0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      _objc_opt_class(param_1);
      func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_initWeak(auStack_48,param_1);
      _objc_copyWeak(auStack_50,auStack_48);
      _objc_retain(lVar1);
      lVar2 = param_1;
      func_0x00010c13abe0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _os_unfair_lock_lock(param_1 + 0x48);
      lVar3 = param_1;
      func_0x00010bddb080(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bef7460();
      _objc_release(lVar3);
      _os_unfair_lock_unlock(param_1 + 0x48);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 1062e925c; end: 1062e9383;  */

void FUN_1062e925c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_1062e83c8;
    uStack_40 = 0x1062e83d8;
    uStack_38 = 0;
    func_0x00010c0c0800(param_3);
    _objc_opt_class(param_1);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1062e9384; end: 1062e941b;  */

void FUN_1062e9384(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if ((param_2 == 0) || (lVar2 = param_2, func_0x00010bf529e0(), lVar2 == 0)) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined ***)(lVar2 + 0x28) = &PTR____CFConstantStringClassReference_110e49b38;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062e941c; end: 1062e9523; -[SCOperaMediaResolver retrievePrefetchInfoForItem:completion:] */

void FUN_1062e941c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be5e480();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0c4240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar2 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    lVar3 = lVar2;
    func_0x00010c0c3fe0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c0c5440();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c271bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(lVar3);
    func_0x00010be96aa0(param_1);
    _objc_release(lVar5);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1062e9524; end: 1062e9657; -[SCOperaMediaResolver _retrievePrefetchInfoForContentBundle:completion:] */

void FUN_1062e9524(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined8 uVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  ppuVar1 = &puStack_80;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_1062e9658;
  puStack_68 = &UNK_11085b960;
  _objc_retain(param_3);
  uStack_60 = param_3;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  uStack_58 = param_4;
  _objc_retainBlock(&puStack_80);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13ef60();
  _objc_release(uVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062e9658; end: 1062e96cb;  */

void FUN_1062e9658(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010be772e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(lVar1);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1062e96cc; end: 1062e998b; -[SCOperaMediaResolver extraPropertiesForDataModel:item:baseOperaPage:completion:] */

void FUN_1062e96cc(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined1 *puStack_a0;
  code *pcStack_98;
  undefined **ppuStack_88;
  undefined **ppuStack_80;
  ulong uStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010be5e480();
  _objc_retainAutoreleasedReturnValue();
  if (uVar1 == 0) {
    (**(code **)(param_6 + 0x10))(param_6,0,0);
  }
  else {
    uVar2 = uVar1;
    func_0x00010c0c4240();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      (**(code **)(param_6 + 0x10))(param_6,0,0);
    }
    else {
      uVar3 = uVar2;
      func_0x00010bf8d480();
      if ((int)uVar3 == 0) {
        uVar3 = param_1;
        func_0x00010be1b8c0(param_1);
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar3;
        func_0x00010c0d3c80();
        _objc_release(uVar3);
        uVar7 = *(undefined8 *)(param_1 + 0x10);
        func_0x00010c269d40(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(uVar8);
        _objc_release(uVar7);
        _objc_opt_class(param_1);
        func_0x00010c0c4280(uVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        (**(code **)(param_6 + 0x10))(param_6,uVar8,0);
      }
      else {
        uVar8 = uVar2;
        FUN_1062e6ba0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = param_1;
        func_0x00010c0778a0();
        ppuStack_88 = &PTR____CFConstantStringClassReference_110f0e9d8;
        ppuStack_80 = &PTR____CFConstantStringClassReference_110f0bc38;
        puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uStack_78 = uVar8;
        func_0x00010c0df780();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        puStack_70 = puVar4;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x00010c0d3c80();
        _objc_release(puVar5);
        _objc_release(puVar4);
        if ((uVar3 & 1) == 0) {
          func_0x00010c1d0640(puVar6);
        }
        uVar7 = *(undefined8 *)(param_1 + 0x30);
        func_0x00010c0f1a80(uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(puVar6);
        (**(code **)(param_6 + 0x10))(param_6,puVar6,0);
        _objc_release(uVar7);
        _objc_release(puVar6);
      }
      _objc_release(uVar8);
    }
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
  _objc_release(param_6);
  lVar9 = param_4;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_98 = FUN_1062e998c;
  lStack_b0 = param_6;
  lStack_a8 = param_4;
  puStack_a0 = &stack0xfffffffffffffff0;
  _objc_opt_class();
  func_0x00010bf86d40(*(undefined8 *)(lVar9 + 0x68));
  puStack_b8 = PTR_PTR_1126f0de0;
  lStack_c0 = lVar9;
  _objc_msgSendSuper2(&lStack_c0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1062e998c; end: 1062e99d7; -[SCOperaMediaResolver dealloc] */

void FUN_1062e998c(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  _objc_opt_class();
  func_0x00010bf86d40(*(undefined8 *)(param_1 + 0x68));
  puStack_28 = PTR_PTR_1126f0de0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1062e99d8; end: 1062e9ab7; -[SCOperaMediaResolver _setAssetRepoErrorWithPlaybackError:] */

void FUN_1062e99d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0x48);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = param_3;
  func_0x00010bf0b260(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar2,param_2,&PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c55d8,uVar1);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010bf987e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar2 = param_3;
  func_0x00010bf0b260(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(uVar3,param_2,uVar1,uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062e9ab8; end: 1062e9acb; -[SCOperaMediaResolver _cachePropertiesForBundle:newProperties:] */

void FUN_1062e9ab8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2884d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x30),PTR_s_updatePageProperties_forMediaBun_11267fb58,
             param_4,param_3);
  return;
}



/* Entry: 1062e9acc; end: 1062e9d83; -[SCOperaMediaResolver _resolveMediaBundle:playlistItemId:withOption:completion:] */

void FUN_1062e9acc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010c0c4280();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = param_3;
  func_0x00010c260dc0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df760();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126c98e0;
  func_0x00010bf18180();
  _objc_initWeak(auStack_68,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1062e9d84;
  puStack_88 = &UNK_11091ba58;
  _objc_copyWeak(auStack_78,auStack_68);
  puStack_70 = puVar3;
  _objc_retain(param_6);
  ppuVar5 = &puStack_a0;
  uStack_80 = param_6;
  _objc_retainBlock();
  puVar3 = PTR_PTR_1126b2798;
  _objc_opt_new(PTR_PTR_1126b2798);
  lVar6 = param_1;
  func_0x00010bdcfaa0();
  if ((int)lVar6 == 0) {
    func_0x00010be017e0(param_1);
    func_0x00010be94e60(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef7460(puVar3);
  }
  else {
    lVar6 = *(long *)(param_1 + 0x30);
    func_0x00010c0f1a80(lVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(param_1);
    func_0x00010c0c4280(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar7 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    (*(code *)ppuVar5[2])(ppuVar5,param_3,puVar7);
    _objc_release(puVar7);
    param_1 = lVar6;
  }
  _objc_release(param_1);
  _objc_release(ppuVar5);
  _objc_release(uStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar4);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1062e9d84; end: 1062e9df3;  */

void FUN_1062e9d84(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdfe380();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062e9df4; end: 1062ea25f; -[SCOperaMediaResolver _resolveUsingPlaybackServiceWithMediaBundle:playlistItemId:withOption:completion:] */

void FUN_1062e9df4(long param_1,undefined8 param_2,long param_3,undefined8 param_4,ulong param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined1 auStack_78 [8];
  byte bStack_70;
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
  _objc_opt_class(param_1);
  lVar2 = param_3;
  func_0x00010c0c4280(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(puVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x00010c09ce60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  uVar9 = param_5 >> 2 & 1;
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c09ce60(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    FUN_1062e5c4c(param_3,lVar2,0,uVar9,param_5 >> 1 & 1,*(undefined1 *)(param_1 + 0xa5),0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    func_0x00010befa120(puVar1);
    _objc_release(lVar4);
  }
  lVar2 = param_3;
  func_0x00010c0c3fe0(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  FUN_1062e5c4c(param_3,lVar2,1,uVar9,0,*(undefined1 *)(param_1 + 0xa5),1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010befa120(puVar1);
  lVar2 = param_3;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c0ef4a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    FUN_1062e5c4c(param_3,lVar2,3,uVar9,0,*(undefined1 *)(param_1 + 0xa5),0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar5);
    _objc_release(lVar2);
  }
  lVar2 = param_3;
  func_0x00010c260dc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    lVar2 = param_3;
    func_0x00010c260dc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_3;
    FUN_1062e5c4c(param_3,lVar2,2,uVar9,0,*(undefined1 *)(param_1 + 0xa5),0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar1);
    _objc_release(lVar5);
    _objc_release(lVar2);
  }
  puVar3 = PTR_PTR_1126c98e8;
  _objc_alloc(PTR_PTR_1126c98e8);
  puVar6 = PTR_PTR_1126c98f0;
  _objc_alloc(PTR_PTR_1126c98f0);
  lVar2 = param_3;
  func_0x00010bf0e960(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0c46a0();
  lVar5 = param_3;
  func_0x00010c0c4280(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c029180(puVar6);
  func_0x00010c029c60(puVar3);
  _objc_release(puVar6);
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_initWeak(auStack_68,param_1);
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_78,auStack_68);
  _objc_retain(param_3);
  bStack_70 = (byte)param_5 & 1;
  _objc_retain(param_6);
  uVar8 = uVar7;
  func_0x00010c13ace0(uVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar7);
  func_0x00010bea6cc0(param_1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar3);
  _objc_release(lVar4);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar8);
  return;
}



/* Entry: 1062ea260; end: 1062ea2b7;  */

void FUN_1062ea260(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010becede0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062ea2b8; end: 1062ea4a7; -[SCOperaMediaResolver _transformResult:fromBundle:enableClientGeneratedFirstFrame:completion:] */

void FUN_1062ea2b8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_opt_class(param_1);
  func_0x00010c0c4280(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  lVar1 = param_3;
  func_0x000107cd17d8();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf987e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_initWeak(auStack_58,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_3);
    _objc_retain(param_4);
    uStack_60 = param_5;
    _objc_retain(param_6);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(param_6);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  else {
    _objc_opt_class(param_1);
    func_0x00010c09e4e0(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (param_6 != 0) {
      puVar3 = PTR_PTR_1126af5d0;
      func_0x00010bfa01c0(PTR_PTR_1126af5d0);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_6 + 0x10))(param_6,param_4,puVar3);
      _objc_release(puVar3);
    }
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062ea4a8; end: 1062ea4e3;  */

void FUN_1062ea4a8(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010becee40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062ea4e4; end: 1062ea577; -[SCOperaMediaResolver _setRequestHandle:forPlaylistItemId:] */

void FUN_1062ea4e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _os_unfair_lock_lock(param_1 + 0xa0);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0560();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0xa0);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062ea578; end: 1062ea607; -[SCOperaMediaResolver _getRequestHandleForPlaylistItemId:] */

void FUN_1062ea578(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _os_unfair_lock_lock(param_1 + 0xa0);
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dff20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0xa0);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1062ea608; end: 1062ea647; -[SCOperaMediaResolver _currentPlaylistItemIdDidUpdate:] */

void FUN_1062ea608(long param_1,undefined8 param_2)

{
  func_0x00010be22200();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    func_0x00010c19b480(param_1,param_2,4,500);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1062ea648; end: 1062ea853; -[SCOperaMediaResolver _didFinishResolvingMediaBundle:result:traceCookie:completion:] */

void FUN_1062ea648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [8];
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar2 = param_1;
  func_0x00010be43420();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if ((int)uVar2 == 0) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_1062ea854;
    puStack_78 = &UNK_110884708;
    uStack_70 = param_1;
    _objc_retain(param_3);
    puStack_c0 = puVar1;
    uStack_b8 = 0xc2000000;
    uStack_b0 = 0x1062ea8b8;
    puStack_a8 = &UNK_1108420a0;
    uStack_a0 = param_1;
    uStack_68 = param_3;
    _objc_retain(param_3);
    uStack_98 = param_3;
    func_0x00010c0c0800(param_4);
    func_0x00010bf94960(PTR_PTR_1126c98e0);
    _objc_initWeak(auStack_c8,param_1);
    puStack_108 = puVar1;
    uStack_100 = 0xc2000000;
    uStack_f8 = 0x1062ea90c;
    puStack_f0 = &UNK_110857fd0;
    _objc_copyWeak(auStack_d0,auStack_c8);
    _objc_retain(param_3);
    uStack_e8 = param_3;
    _objc_retain(param_6);
    uStack_d8 = param_6;
    _objc_retain(param_4);
    uStack_e0 = param_4;
    func_0x0001000d76cc("APPSTORE",&puStack_108);
    _objc_release(uStack_e0);
    _objc_release(uStack_d8);
    _objc_release(uStack_e8);
    _objc_destroyWeak(auStack_d0);
    _objc_destroyWeak(auStack_c8);
    _objc_release(uStack_98);
    _objc_release(uStack_68);
  }
  else {
    _objc_opt_class(param_1);
    func_0x00010c0c4280(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x00010bf94960(PTR_PTR_1126c98e0);
  }
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062ea854; end: 1062ea977;  */

void FUN_1062ea854(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  _objc_opt_class(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c0c4280(*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  func_0x00010be017e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c130fe0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062ea978; end: 1062eaa3b; -[SCOperaMediaResolver _transformResultToLegacyMediaPreparationCompletion:result:] */

void FUN_1062ea978(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
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
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1062eaa3c;
  puStack_50 = &UNK_110865eb8;
  _objc_retain(param_3);
  puStack_90 = puVar1;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_1062eaa54;
  puStack_78 = &UNK_110859a38;
  uStack_70 = param_3;
  uStack_48 = param_3;
  _objc_retain(param_3);
  func_0x00010c0c0800(param_4,param_2,&puStack_68,&puStack_90);
  _objc_release(uStack_70);
  _objc_release(uStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062eaa3c; end: 1062eaa53;  */

void FUN_1062eaa3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001062eaa50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0,0,0);
  return;
}



/* Entry: 1062eaa54; end: 1062eaaa7;  */

void FUN_1062eaa54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = param_2;
  func_0x00010c14d420();
  uVar1 = 1;
  if ((int)uVar2 != 0) {
    uVar1 = 2;
  }
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),uVar1,param_2,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062eaaa8; end: 1062eabf3; -[SCOperaMediaResolver _mediaBundleProviderForPlaylistItem:] */

void FUN_1062eaaa8(long param_1,undefined8 param_2,undefined1 *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  code *pcStack_280;
  undefined8 uStack_278;
  undefined *puStack_270;
  undefined *puStack_268;
  undefined8 uStack_260;
  code *pcStack_258;
  undefined *puStack_250;
  undefined1 *puStack_248;
  undefined1 *puStack_240;
  undefined8 *puStack_238;
  undefined8 *puStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  code *pcStack_208;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_d8 [128];
  long lStack_58;
  
  puVar7 = &uStack_120;
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
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf00560();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = auStack_d8;
  lVar2 = lVar1;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(lVar1);
        }
        uVar9 = *(ulong *)(lStack_118 + lVar11 * 8);
        uVar3 = uVar9;
        puVar7 = (undefined8 *)param_3;
        func_0x00010bf2d280();
        if ((uVar3 & 1) != 0) {
          _objc_opt_class(param_1);
          _objc_retain(uVar9);
          _objc_release(lVar1);
          goto LAB_1062eabb0;
        }
        lVar11 = lVar11 + 1;
      } while (lVar2 != lVar11);
      puVar8 = auStack_d8;
      lVar2 = lVar1;
      puVar7 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(lVar1);
  _objc_opt_class(param_1);
  uVar9 = 0;
LAB_1062eabb0:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar9);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar7);
  _objc_retain(puVar8);
  _objc_retain(param_6);
  _objc_opt_class(param_3);
  func_0x00010c0c4280(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puStack_1b8 = &uStack_1c0;
  uStack_1c0 = 0;
  uStack_1b0 = 0x3032000000;
  pcStack_1a8 = FUN_1062e83c8;
  uStack_1a0 = 0x1062e83d8;
  uStack_198 = 0;
  puStack_1e8 = &uStack_1f0;
  uStack_1f0 = 0;
  uStack_1e0 = 0x3032000000;
  pcStack_1d8 = FUN_1062e83c8;
  uStack_1d0 = 0x1062e83d8;
  uStack_1c8 = 0;
  puStack_218 = &uStack_220;
  uStack_220 = 0;
  uStack_210 = 0x3032000000;
  pcStack_208 = FUN_1062e83c8;
  uStack_200 = 0x1062e83d8;
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puVar5 = (undefined1 *)puVar7;
  puStack_1f8 = puVar4;
  func_0x00010bf007e0(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puStack_268 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_260 = 0xc2000000;
  pcStack_258 = FUN_1062eaf24;
  puStack_250 = &UNK_11091bab8;
  puStack_248 = param_3;
  _objc_retain(puVar8);
  puStack_238 = &uStack_1c0;
  puStack_230 = &uStack_220;
  puStack_228 = &uStack_1f0;
  puStack_240 = puVar8;
  func_0x00010bf97e80(puVar5);
  _objc_release(puVar5);
  if (puStack_1b8[5] == 0) {
    puStack_290 = &uStack_298;
    uStack_298 = 0;
    uStack_288 = 0x3032000000;
    pcStack_280 = FUN_1062e83c8;
    uStack_278 = 0x1062e83d8;
    puVar4 = PTR_PTR_1126c98f8;
    _objc_opt_new();
    puVar5 = (undefined1 *)puVar7;
    puStack_270 = puVar4;
    func_0x00010bf007e0(puVar7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97e80();
    _objc_release(puVar5);
    uVar12 = puStack_218[5];
    uVar6 = puStack_290[5];
    func_0x00010bf21f60(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar12);
    _objc_release(uVar6);
    func_0x00010bed05c0(param_3);
    __Block_object_dispose(&uStack_298,8);
    puVar4 = puStack_270;
  }
  else {
    puVar4 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,puVar8,puVar4);
  }
  _objc_release(puVar4);
  _objc_release(puStack_240);
  __Block_object_dispose(&uStack_220,8);
  _objc_release(puStack_1f8);
  __Block_object_dispose(&uStack_1f0,8);
  _objc_release(uStack_1c8);
  __Block_object_dispose(&uStack_1c0,8);
  _objc_release(uStack_198);
  _objc_release(param_6);
  _objc_release(puVar8);
  _objc_release(puVar7);
  return;
}



/* Entry: 1062eabf4; end: 1062eaf23; -[SCOperaMediaResolver _transformSuccessResult:fromBundle:enableClientGeneratedFirstFrame:completion:] */

void FUN_1062eabf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_178;
  undefined8 *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  code *pcStack_138;
  undefined *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_opt_class(param_1);
  func_0x00010c0c4280(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_1062e83c8;
  uStack_80 = 0x1062e83d8;
  uStack_78 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_1062e83c8;
  uStack_b0 = 0x1062e83d8;
  uStack_a8 = 0;
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_1062e83c8;
  uStack_e0 = 0x1062e83d8;
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  uVar2 = param_3;
  puStack_d8 = puVar1;
  func_0x00010bf007e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puStack_148 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_140 = 0xc2000000;
  pcStack_138 = FUN_1062eaf24;
  puStack_130 = &UNK_11091bab8;
  uStack_128 = param_1;
  _objc_retain(param_4);
  puStack_118 = &uStack_a0;
  puStack_110 = &uStack_100;
  puStack_108 = &uStack_d0;
  uStack_120 = param_4;
  func_0x00010bf97e80(uVar2);
  _objc_release(uVar2);
  if (puStack_98[5] == 0) {
    puStack_170 = &uStack_178;
    uStack_178 = 0;
    uStack_168 = 0x3032000000;
    pcStack_160 = FUN_1062e83c8;
    uStack_158 = 0x1062e83d8;
    puVar1 = PTR_PTR_1126c98f8;
    _objc_opt_new();
    uVar2 = param_3;
    puStack_150 = puVar1;
    func_0x00010bf007e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf97e80();
    _objc_release(uVar2);
    uVar3 = puStack_f8[5];
    uVar2 = puStack_170[5];
    func_0x00010bf21f60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0560(uVar3);
    _objc_release(uVar2);
    func_0x00010bed05c0(param_1);
    __Block_object_dispose(&uStack_178,8);
    puVar1 = puStack_150;
  }
  else {
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_6 + 0x10))(param_6,param_4,puVar1);
  }
  _objc_release(puVar1);
  _objc_release(uStack_120);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(puStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062eaf24; end: 1062eb183;  */

void FUN_1062eaf24(long param_1,undefined *param_2,undefined8 param_3,undefined1 *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_2);
  _objc_opt_class(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0c4280(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4aec0(param_2);
  func_0x000107cd1d5c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bdeaac0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = param_2;
  func_0x00010bf4aec0();
  puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (lVar2 == 0) {
    if ((puVar3 < (undefined *)0x5) && ((1L << ((ulong)puVar3 & 0x3f) & 0x15U) != 0)) {
      puVar4 = param_2;
      func_0x000107cd15f8();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = param_2;
      func_0x00010bf4aec0();
      if (puVar5 == (undefined *)0x2) {
        if (puVar4 == (undefined *)0x0) {
          puVar5 = (undefined *)0x3;
          FUN_1062e6054(3,&PTR____CFConstantStringClassReference_110e49b98);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          _objc_retain(puVar4);
          puVar5 = puVar4;
        }
        uVar1 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
        puVar3 = puVar5;
        FUN_1062e6460(puVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bef7f60(uVar1);
        _objc_release(puVar3);
        _objc_release(puVar5);
      }
    }
    else {
      func_0x00010bf4aec0(param_2);
      func_0x00010c0df780();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c0c4280();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar1);
      _objc_release(puVar5);
      uVar1 = 3;
      FUN_1062e6054(3,puVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = *(long *)(*(long *)(param_1 + 0x30) + 8);
      uVar6 = *(undefined8 *)(lVar7 + 0x28);
      *(undefined8 *)(lVar7 + 0x28) = uVar1;
      _objc_release(uVar6);
      *param_4 = 1;
    }
    _objc_release(puVar4);
  }
  else {
    if (puVar3 == (undefined *)0x1) {
      lVar7 = *(long *)(*(long *)(param_1 + 0x40) + 8);
      _objc_retain(lVar2);
      uVar1 = *(undefined8 *)(lVar7 + 0x28);
      *(long *)(lVar7 + 0x28) = lVar2;
      _objc_release(uVar1);
    }
    func_0x00010be4db00(*(undefined8 *)(param_1 + 0x20));
  }
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062eb184; end: 1062eb19b;  */

void FUN_1062eb184(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be87610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__recordContentKeys_onBuilder__11257f720,param_2,
             *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28));
  return;
}



/* Entry: 1062eb19c; end: 1062eb2bb; -[SCOperaMediaResolver _loadIntoPropertiesForSingleResult:operaMediaAsset:mediaBundle:pageProperties:] */

void FUN_1062eb19c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf4aec0(param_3);
  uVar2 = param_1;
  func_0x00010be1b8a0(param_1,param_2,param_4,uVar1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_opt_class(param_1);
  uVar1 = param_5;
  func_0x00010c0c4280(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4aec0(param_3);
  func_0x000107cd1d5c();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar1);
  func_0x00010bef7f60(param_6,param_2,uVar2);
  func_0x00010be1ba40(param_1,param_2,param_5,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_3);
  func_0x00010bef7f60(param_6,param_2,param_1);
  _objc_release(param_6);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1062eb2bc; end: 1062eb383; -[SCOperaMediaResolver _tryTriggerFirstFrameGenerationForMediaBundle:baseMediaAsset:pageProperties:enableClientGeneratedFirstFrame:completion:] */

void FUN_1062eb2bc(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,undefined8 param_7)

{
  ulong uVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  if ((param_6 == 0) ||
     (uVar1 = param_1, func_0x00010be41ca0(param_1,param_2,param_3,param_4), (uVar1 & 1) == 0)) {
    func_0x00010be4dea0(param_1,param_2,param_3,param_5,param_7);
  }
  else {
    func_0x00010be0dae0(0x3fe0000000000000,param_1,param_2,param_3,param_4,param_5,param_7);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1062eb384; end: 1062eb587; -[SCOperaMediaResolver _extractFirstFrameAndLoadMediaMetadataForMediaBundle:fromOperaAsset:timeoutInterval:pageProperties:completion:] */

void FUN_1062eb384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined **ppuStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  ppuVar3 = &puStack_100;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_78,param_1);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1062eb588;
  puStack_a0 = &UNK_110894250;
  _objc_retain(param_5);
  uStack_98 = param_5;
  _objc_copyWeak(auStack_80,auStack_78);
  _objc_retain(param_3);
  uStack_90 = param_3;
  _objc_retain(param_6);
  ppuVar2 = &puStack_b8;
  uStack_88 = param_6;
  _objc_retainBlock();
  puStack_100 = puVar1;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x1062eb5f4;
  puStack_e8 = &UNK_11091bb18;
  _objc_copyWeak(auStack_c0,auStack_78);
  _objc_retain(param_3);
  uStack_e0 = param_3;
  _objc_retain(ppuVar2);
  ppuStack_c8 = ppuVar2;
  _objc_retain(param_5);
  uStack_d8 = param_5;
  uStack_d0 = param_1;
  _objc_retainBlock(&puStack_100);
  func_0x00010be0db00(0x3fe0000000000000,param_1);
  _objc_release(ppuVar3);
  _objc_release(uStack_d8);
  _objc_release(ppuStack_c8);
  _objc_release(uStack_e0);
  _objc_destroyWeak(auStack_c0);
  _objc_release(ppuVar2);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_80);
  _objc_release(uStack_98);
  _objc_destroyWeak(auStack_78);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1062eb588; end: 1062eb693;  */

void FUN_1062eb588(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    func_0x00010bef7f60(*(undefined8 *)(param_1 + 0x20));
  }
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be4dea0();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062eb694; end: 1062eb85b; -[SCOperaMediaResolver _extractFirstFrameForMediaBundle:fromOperaAsset:timeoutInterval:completion:] */

void FUN_1062eb694(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined **ppuStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  func_0x00010c299160();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c98e0;
  func_0x00010bf18180(PTR_PTR_1126c98e0,param_3,&PTR____CFConstantStringClassReference_110e49bb8);
  puVar3 = PTR_PTR_1126b2798;
  _objc_opt_new();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_1062eb85c;
  puStack_90 = &UNK_11091bb48;
  puStack_88 = puVar3;
  puStack_78 = puVar2;
  _objc_retain(param_6);
  ppuVar4 = &puStack_a8;
  uStack_80 = param_6;
  _objc_retainBlock();
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_1062eb8dc;
  puStack_c0 = &UNK_11084aaa8;
  uStack_b8 = param_5;
  ppuStack_b0 = ppuVar4;
  _objc_retain();
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar5,param_3,&puStack_d8);
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_1062eb92c;
  puStack_f8 = &UNK_11084a9e8;
  puStack_f0 = puVar3;
  uStack_e8 = param_4;
  uStack_e0 = param_6;
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010c0f7fe0(param_1,uVar5,param_3,&puStack_110);
  _objc_release(uStack_e0);
  _objc_release(uStack_e8);
  _objc_release(ppuStack_b0);
  _objc_release(uStack_b8);
  _objc_release(ppuVar4);
  _objc_release(uStack_80);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_5);
  _objc_release(puVar3);
  return;
}



/* Entry: 1062eb85c; end: 1062eb8db;  */

void FUN_1062eb85c(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) == 0) {
    func_0x00010bf94960(PTR_PTR_1126c98e0);
    func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x20));
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),param_2,param_3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1062eb8dc; end: 1062eb92b;  */

void FUN_1062eb8dc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0d5720(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9ed80(*(undefined8 *)PTR__CGSizeZero_110347620,
                      *(undefined8 *)(PTR__CGSizeZero_110347620 + 8),0x3ff0000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1062eb92c; end: 1062eb9df;  */

void FUN_1062eb92c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  func_0x00010c06e0e0();
  if ((uVar1 & 1) != 0) {
    return;
  }
  func_0x00010bf2dba0(*(undefined8 *)(param_1 + 0x20));
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 4;
  FUN_1062e6054(4,puVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))(*(long *)(param_1 + 0x30),0,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1062eb9e0; end: 1062ebabb; -[SCOperaMediaResolver _processAndCacheFirstFrame:forMediaBundle:] */

void FUN_1062eb9e0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  puVar1 = PTR_PTR_1126c98b0;
  _objc_retain(param_4);
  func_0x00010bfe94a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010be1b8a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010723d78c(param_4,0,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf263c0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1062ebabc; end: 1062ebb53; -[SCOperaMediaResolver _isMediaBundleEligibleForFirstFrameExtraction:baseMediaAsset:] */

bool FUN_1062ebabc(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  func_0x00010c299160();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    lVar2 = param_3;
    func_0x00010c09ce60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      puVar3 = PTR_PTR_1126bcba8;
      func_0x00010c25c800(PTR_PTR_1126bcba8,param_2,param_4);
      bVar1 = puVar3 != (undefined *)0x1;
      goto LAB_1062ebb30;
    }
  }
  bVar1 = false;
LAB_1062ebb30:
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}


