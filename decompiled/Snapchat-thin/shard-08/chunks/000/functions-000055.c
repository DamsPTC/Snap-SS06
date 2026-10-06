/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105cac170; end: 105cac307;  */

void FUN_105cac170(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 8));
    lVar1 = param_1;
    func_0x00010bdeb260(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x60);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa0a0();
    _objc_release(uVar2);
    if (0.0 < *(double *)(param_1 + 0x20)) {
      _objc_initWeak(auStack_48,param_1);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0xc2000000;
      pcStack_60 = FUN_105cac308;
      puStack_58 = &UNK_1108434b0;
      _objc_copyWeak(auStack_50,auStack_48);
      uVar2 = 0;
      func_0x0001008553e8(0,&puStack_70);
      uVar3 = *(undefined8 *)(param_1 + 0x18);
      *(undefined8 *)(param_1 + 0x18) = uVar2;
      _objc_release(uVar3);
      uVar2 = 0;
      _dispatch_time(0,(long)(*(double *)(param_1 + 0x20) * 1000000000.0));
      uVar3 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010058c530(uVar2,uVar3,*(undefined8 *)(param_1 + 0x18));
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_50);
      _objc_destroyWeak(auStack_48);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  return;
}



/* Entry: 105cac308; end: 105cac33b;  */

void FUN_105cac308(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c236020(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cac33c; end: 105cac5ab; -[SCGalleryBackupNotificationHelper _shouldShowNotification] */

bool FUN_105cac33c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  bool bVar7;
  double dVar8;
  double dVar9;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  if (*(long *)(param_1 + 0x18) != 0) {
    _dispatch_block_cancel();
  }
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010bf529e0();
  if ((lVar1 == 0) || (lVar1 = param_1, func_0x00010be40be0(), (int)lVar1 == 0)) {
    return false;
  }
  lVar2 = *(long *)(param_1 + 0x50);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c088400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_initWeak(auStack_58,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  dVar8 = 1.60807493534087e-314;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105cac5ac;
  puStack_68 = &UNK_1108434b0;
  _objc_copyWeak(auStack_60,auStack_58);
  uVar3 = 0;
  func_0x0001008553e8(0,&puStack_80);
  uVar6 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  _objc_release(uVar6);
  if (lVar1 != 0) {
    func_0x00010c26f3a0(lVar1);
    if (-dVar8 < *(double *)(param_1 + 0x20)) {
      uVar3 = 0;
      _dispatch_time(0,(long)((dVar8 + *(double *)(param_1 + 0x20)) * 1000000000.0));
      lVar4 = *(long *)(param_1 + 0x38);
      func_0x00010c11de00(lVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010058c530(uVar3,lVar4,*(undefined8 *)(param_1 + 0x18));
      bVar7 = false;
      goto LAB_105cac544;
    }
  }
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010c089820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar4;
  func_0x00010c0fd820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar5 = lVar4;
    func_0x00010bf59960(lVar4);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar2);
    lVar5 = lVar2;
  }
  _objc_release(lVar2);
  func_0x00010c26f3a0(lVar5);
  dVar9 = *(double *)(param_1 + 0x28);
  bVar7 = dVar9 <= -dVar8;
  if (-dVar8 < dVar9) {
    uVar3 = 0;
    _dispatch_time(0,(long)((dVar8 + dVar9) * 1000000000.0));
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    func_0x00010c11de00(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010058c530(uVar3,uVar6,*(undefined8 *)(param_1 + 0x18));
    _objc_release(uVar6);
  }
  _objc_release(lVar5);
LAB_105cac544:
  _objc_release(lVar4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(lVar1);
  return bVar7;
}



/* Entry: 105cac5ac; end: 105cac5df;  */

void FUN_105cac5ac(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c236020(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cac5e0; end: 105cac6c7; -[SCGalleryBackupNotificationHelper _queuePendingSnapsIfAvailable] */

/* WARNING: Possible PIC construction at 0x000105cac698: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105cac69c) */

void FUN_105cac5e0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x30);
  func_0x00010bfec280();
  if (iVar1 == 1) {
    func_0x00010bedcda0(param_1);
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010bf529e0();
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0f8520();
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010c236030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_showBackUpNotificationIfAvailabl_11266b230);
  return;
}



/* Entry: 105cac6c8; end: 105cac70b;  */

void FUN_105cac6c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b2508;
  func_0x00010bf350c0(PTR_PTR_1126b2508,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b7820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105cac70c; end: 105cac7d7; -[SCGalleryBackupNotificationHelper _updatePendingSnaps] */

void FUN_105cac70c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  puVar3 = PTR_PTR_1126af4d0;
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfab280(puVar3,param_2,uVar1,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init();
  func_0x00010befa160();
  puVar5 = puVar4;
  func_0x00010c246ca0(puVar4,param_2,&PTR___NSConcreteGlobalBlock_1108e3fa8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined **)(param_1 + 8) = puVar5;
  _objc_release(uVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 105cac7d8; end: 105cac8d3;  */

long FUN_105cac7d8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c0fd820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar2 = param_2;
    func_0x00010bf59960(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  _objc_release(lVar1);
  lVar1 = param_3;
  func_0x00010c0fd820();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    lVar3 = param_3;
    func_0x00010bf59960(param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(lVar1);
    lVar3 = lVar1;
  }
  _objc_release(lVar1);
  lVar1 = lVar3;
  func_0x00010bf433a0(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_3);
  _objc_release(param_2);
  return lVar1;
}



/* Entry: 105cac8d4; end: 105cac8db; -[SCGalleryBackupNotificationHelper _isGalleryOrStoriesViewVisible] */

undefined8 FUN_105cac8d4(void)

{
  return 0;
}



/* Entry: 105cac8dc; end: 105cacbe7; -[SCGalleryBackupNotificationHelper _getStackedImageForSnaps:completionBlock:] */

void FUN_105cac8dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  undefined8 uStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_90;
  
  lStack_90 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_5;
  func_0x00010bf529e0();
  uVar2 = param_5;
  if (3 < uVar1) {
    func_0x00010c25e980();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_5);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar4 = puVar3;
  _dispatch_group_create();
  uVar10 = 0;
  lStack_148 = 0;
  uStack_150 = 0;
  uStack_138 = 0;
  plStack_140 = (long *)0x0;
  uStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  uStack_120 = 0;
  _objc_retain(uVar2);
  uVar1 = uVar2;
  func_0x00010bf52a60();
  if (uVar1 != 0) {
    lVar9 = *plStack_140;
    do {
      uVar8 = 0;
      do {
        if (*plStack_140 != lVar9) {
          _objc_enumerationMutation(uVar2);
        }
        if (*(long *)(lStack_148 + uVar8 * 8) != 0) {
          _dispatch_group_enter(puVar4);
          uVar5 = *(undefined8 *)(param_3 + 0x58);
          func_0x00010c269d40(uVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x000106e3f2ac(0);
          func_0x000108ec16c0(*(undefined8 *)(param_3 + 0x68));
          uVar6 = *(undefined8 *)(param_3 + 0x38);
          func_0x00010c11de00(uVar6);
          _objc_retainAutoreleasedReturnValue();
          puStack_180 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_178 = 0xc2000000;
          pcStack_170 = FUN_105cacbe8;
          puStack_168 = &UNK_1108e3fc8;
          _objc_retain(puVar3);
          puStack_160 = puVar3;
          _objc_retain(puVar4);
          puStack_158 = puVar4;
          func_0x00010c134d00(uVar10,param_2,uVar5);
          _objc_unsafeClaimAutoreleasedReturnValue();
          _objc_release(uVar6);
          _objc_release(uVar5);
          _objc_release(puStack_158);
          _objc_release(puStack_160);
        }
        uVar8 = uVar8 + 1;
      } while (uVar1 != uVar8);
      uVar1 = uVar2;
      func_0x00010bf52a60();
    } while (uVar1 != 0);
  }
  _objc_release(uVar2);
  lVar7 = *(long *)(param_3 + 0x38);
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1a8 = 0xc2000000;
  pcStack_1a0 = FUN_105cacc18;
  puStack_198 = &UNK_11084aaa8;
  puStack_190 = puVar3;
  uStack_188 = param_6;
  _objc_retain(param_6);
  _objc_retain(puVar3);
  lVar9 = lVar7;
  func_0x000100bc0718(puVar4,lVar7,&puStack_1b0);
  _objc_release(lVar7);
  _objc_release(uStack_188);
  _objc_release(puStack_190);
  _objc_release(param_6);
  _objc_release(puVar3);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_90) {
    return;
  }
  ___stack_chk_fail();
  if (lVar9 != 0) {
    func_0x00010befa120(*(undefined8 *)(uVar2 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(uVar2 + 0x28));
  return;
}



/* Entry: 105cacbe8; end: 105cacc17;  */

void FUN_105cacbe8(long param_1,long param_2)

{
  if (param_2 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 105cacc18; end: 105cacca7;  */

void FUN_105cacc18(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14e120();
  func_0x00010c24d360(0x403a000000000000,0x4045000000000000,param_1,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))(*(long *)(param_2 + 0x28),puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105cacca8; end: 105caccff; -[SCGalleryBackupNotificationHelper cloudSync:didChangeStatus:isBackingUpNow:mayUpload:requiresUpgrade:] */

void FUN_105cacca8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_105cacd00;
  puStack_28 = &UNK_110848c48;
  lStack_20 = param_1;
  uStack_18 = param_4;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x38),param_2,&puStack_40);
  return;
}



/* Entry: 105cacd00; end: 105cace6f;  */

void FUN_105cacd00(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  if (*(long *)(*(long *)(param_1 + 0x20) + 0x10) != 0) {
    _dispatch_block_cancel();
  }
  uVar2 = *(ulong *)(param_1 + 0x28);
  if (uVar2 < 9) {
    if ((1L << (uVar2 & 0x3f) & 0x174U) != 0) {
      uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar1);
      return;
    }
    if ((1L << (uVar2 & 0x3f) & 0x8aU) != 0) {
      _objc_initWeak(auStack_38,*(undefined8 *)(param_1 + 0x20));
      puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_58 = 0xc2000000;
      pcStack_50 = FUN_105cace70;
      puStack_48 = &UNK_1108434b0;
      _objc_copyWeak(auStack_40,auStack_38);
      uVar1 = 0;
      func_0x0001008553e8(0,&puStack_60);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
      *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = uVar1;
      _objc_release(uVar3);
      uVar1 = 0;
      _dispatch_time(0,5000000000);
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
      func_0x00010c11de00(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010058c530(uVar1,uVar3,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10));
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_40);
      _objc_destroyWeak(auStack_38);
    }
  }
  return;
}



/* Entry: 105cace70; end: 105cacea3;  */

void FUN_105cace70(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be85840(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cacea4; end: 105cad0cb; -[SCGalleryBackupNotificationHelper _createBackupNotificationWithPendingSnapsCount:image:] */

void FUN_105cacea4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  ppuVar2 = (undefined **)PTR__OBJC_CLASS___NSString_1126ae4d0;
  if (param_3 == 1) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110e275b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e275b8,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    ppuVar1 = &PTR____CFConstantStringClassReference_110e275d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e275d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar1);
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e275f8;
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e275f8,0);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b1370;
  func_0x00010c25d500();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 9;
  func_0x000107fcbeb0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar5;
  func_0x00010c0d3c80();
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(puVar3);
  if (param_4 != 0) {
    func_0x00010c1d0560(puVar6);
  }
  puVar3 = PTR_PTR_1126b1370;
  _objc_alloc(PTR_PTR_1126b1370);
  func_0x00010c030320();
  _objc_release(puVar6);
  _objc_release(ppuVar1);
  _objc_release(ppuVar2);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_4 + 0x68,0);
  _objc_storeStrong(param_4 + 0x60,0);
  _objc_storeStrong(param_4 + 0x58,0);
  _objc_storeStrong(param_4 + 0x50,0);
  _objc_storeStrong(param_4 + 0x48,0);
  _objc_storeStrong(param_4 + 0x40,0);
  _objc_storeStrong(param_4 + 0x38,0);
  _objc_storeStrong(param_4 + 0x30,0);
  _objc_storeStrong(param_4 + 0x18,0);
  _objc_storeStrong(param_4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + 8,0);
  return;
}



/* Entry: 105cad0cc; end: 105cad167; -[SCGalleryBackupNotificationHelper .cxx_destruct] */

void FUN_105cad0cc(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105cad168; end: 105caecef; -[SCGalleryViewController initWithAddSnapsScopeExposer:memoriesPickerScopeServices:storyEditorScopeExposer:spectaclesOnboardingScopeExposer:spectaclesOnboardingScopeServices:spectaclesSettingsScopeExposer:spectaclesPairingScopeExposer:spectaclesServices:spectaclesAppStatusServices:spectaclesContentStatusServices:memoriesInlineSearchDataServices:userPreferences:userTrackedLogger:appTerminator:circumstanceEngine:permissionRequestService:snapsTabSectionPluginsFuture:snapsTabBannerPluginsFuture:scopeDelegate:featureSettingsService:memoriesAutosaveMigrator:memoriesEngagementLogger:spectaclesTooltipService:screenshopTabServices:composerCoreUIServices:valdiRuntimeProvider:storiesTabService:cameraRollTabService:privateLockedTabService:memoriesSelectionFooterBarControllerFactory:gridTabsService:commerceConfigProvider:spectaclesContentDataSource:spectaclesCustomExportScopeExposer:mergedDataSource:dataObjectContext:editDataMutator:galleryLogger:cloudSync:cloudFS:searchDataSynchronizer:searchIndexer:memoriesSearch:keyService:backupNotificationHelper:memoriesPrivateMemoriesManager:memoriesSettingsUIScopeExposer:memoriesExternalShareAdaptorScopeExposer:currentPageTracker:videoImportServices:legacyOperaPresenterBuilder:grapheneRegistry:bitmojiAvatarProvider:bitmojiImageFetcher:highlightContentDataSource:memoriesPrivateGallerySetupFlowScopeExposer:spectaclesAssetMetadataHandler:spectaclesAuxiliaryContentPreloader:userSegmentsProvider:creativeToolsABProvider:snapsTabCRSectionPluginFuture:experimentServices:applicationLifecycleEvents:pageLoadMetricManager:cameraConfig:memoriesSearchPreTypeScopeExposer:memoriesSearchPreTypeContainer:dreamsScopeExposer:genAIDreamsScopeServices:generativeAiOnboardingScopeExposer:dreamsSessionService:crashServices:memoriesContentUnderstandingTabService:memoriesMashupStyleFeaturedStoriesGenerationWorkflow:memoriesClientGenContentWorkflow:featuredStorySnapGenerationServices:docObjectContext:appUserDefault:deckHierarchyFactory:cameraRollAlbumPickerScopeExposer:memoriesMonetizationServices:plusServices:plusSubscribeScopeExposer:plusSubscribeScopeServices:plusOpenSubscriptionManagementServices:memoriesHeaderBannerServices:memoriesQuickCutPreferencesServices:memoriesQuickCutScopeExposer:memoriesPreviewEditScopeExposer:faceTaggingPermissionTrayScopeExposer:faceTaggingPermissionTrayScopeServices:memoriesUserDefaultsManager:memoriesSideButtonStateProvider:webBrowsingScopeExposer:deckServices:networkConnectivityMonitor:faceTaggingBackfillServices:faceTaggingPermissionsServices:memoriesFaceTagPreviewServices:plusFullscreenUpsellScopeFactoryServices:cameraCircumstanceEngine:backfillSnapCountProvider:faceTaggingItemActionHandler:memoriesOperaLauncher:memoriesSendViewPresenter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105cad168(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
             undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
             undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
             undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
             undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
             undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
             undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
             undefined8 param_45,undefined8 param_46,undefined8 param_47,undefined8 param_48,
             undefined8 param_49,undefined8 param_50,undefined8 param_51,undefined8 param_52,
             undefined8 param_53,undefined8 param_54,undefined8 param_55,undefined8 param_56,
             undefined8 param_57,undefined8 param_58,undefined8 param_59,undefined8 param_60,
             undefined8 param_61,undefined8 param_62,undefined8 param_63,undefined8 param_64,
             undefined8 param_65,undefined8 param_66,undefined8 param_67,undefined8 param_68,
             undefined8 param_69,undefined8 param_70)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 in_stack_000001f0;
  undefined8 in_stack_000001f8;
  undefined8 in_stack_00000200;
  undefined8 in_stack_00000208;
  undefined8 in_stack_00000210;
  undefined8 in_stack_00000218;
  undefined8 in_stack_00000220;
  undefined8 in_stack_00000228;
  undefined8 in_stack_00000230;
  undefined8 in_stack_00000238;
  undefined8 in_stack_00000240;
  undefined8 in_stack_00000248;
  undefined8 in_stack_00000250;
  undefined8 in_stack_00000258;
  undefined8 in_stack_00000260;
  undefined8 in_stack_00000268;
  undefined8 in_stack_00000270;
  undefined8 in_stack_00000278;
  undefined8 in_stack_00000280;
  undefined8 in_stack_00000288;
  undefined8 in_stack_00000290;
  undefined8 in_stack_00000298;
  undefined8 in_stack_000002a0;
  undefined8 in_stack_000002a8;
  undefined8 in_stack_000002b0;
  long in_stack_000002b8;
  undefined *in_stack_000002c0;
  undefined8 in_stack_000002c8;
  undefined8 in_stack_000002d0;
  undefined8 in_stack_000002d8;
  undefined8 in_stack_000002e0;
  undefined8 in_stack_000002e8;
  undefined8 in_stack_000002f0;
  undefined8 in_stack_000002f8;
  undefined *in_stack_00000300;
  undefined8 in_stack_00000308;
  undefined8 in_stack_00000310;
  undefined1 auStack_148 [8];
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [8];
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  _objc_retain(param_21);
  _objc_retain(param_22);
  _objc_retain(param_23);
  _objc_retain(param_24);
  _objc_retain(param_25);
  _objc_retain(param_26);
  _objc_retain(param_27);
  _objc_retain(param_28);
  _objc_retain(param_29);
  _objc_retain(param_30);
  _objc_retain(param_31);
  _objc_retain(param_32);
  _objc_retain(param_33);
  _objc_retain(param_34);
  _objc_retain(param_35);
  _objc_retain(param_36);
  _objc_retain(param_37);
  _objc_retain(param_38);
  _objc_retain(param_39);
  _objc_retain(param_40);
  _objc_retain(param_41);
  _objc_retain(param_42);
  _objc_retain(param_43);
  _objc_retain(param_44);
  _objc_retain(param_45);
  _objc_retain(param_46);
  _objc_retain(param_47);
  _objc_retain(param_48);
  _objc_retain(param_49);
  _objc_retain(param_50);
  _objc_retain(param_51);
  _objc_retain(param_52);
  _objc_retain(param_53);
  _objc_retain(param_54);
  _objc_retain(param_55);
  _objc_retain(param_56);
  _objc_retain(param_57);
  _objc_retain(param_58);
  _objc_retain(param_59);
  _objc_retain(param_60);
  _objc_retain(param_61);
  _objc_retain(param_62);
  _objc_retain(param_63);
  _objc_retain(param_64);
  _objc_retain(param_65);
  _objc_retain(param_66);
  _objc_retain(param_67);
  _objc_retain(param_68);
  _objc_retain(param_69);
  _objc_retain(param_70);
  _objc_retain(in_stack_000001f0);
  _objc_retain(in_stack_000001f8);
  _objc_retain(in_stack_00000200);
  _objc_retain(in_stack_00000208);
  _objc_retain(in_stack_00000210);
  _objc_retain(in_stack_00000218);
  _objc_retain(in_stack_00000220);
  _objc_retain(in_stack_00000228);
  _objc_retain(in_stack_00000230);
  _objc_retain(in_stack_00000238);
  _objc_retain(in_stack_00000240);
  _objc_retain(in_stack_00000248);
  _objc_retain(in_stack_00000250);
  _objc_retain(in_stack_00000258);
  _objc_retain(in_stack_00000260);
  _objc_retain(in_stack_00000268);
  _objc_retain(in_stack_00000270);
  _objc_retain(in_stack_00000278);
  _objc_retain(in_stack_00000280);
  _objc_retain(in_stack_00000288);
  _objc_retain(in_stack_00000290);
  _objc_retain(in_stack_00000298);
  _objc_retain(in_stack_000002a0);
  _objc_retain(in_stack_000002a8);
  _objc_retain();
  _objc_retain(in_stack_000002b8);
  _objc_retain(in_stack_000002c0);
  _objc_retain(in_stack_000002c8);
  _objc_retain(in_stack_000002d0);
  _objc_retain(in_stack_000002d8);
  _objc_retain(in_stack_000002e0);
  _objc_retain(in_stack_000002e8);
  _objc_retain(in_stack_000002f0);
  _objc_retain(in_stack_000002f8);
  _objc_retain(in_stack_00000300);
  _objc_retain(in_stack_00000308);
  _objc_retain(in_stack_00000310);
  puStack_80 = PTR_PTR_1126ecb88;
  puVar1 = &uStack_88;
  uStack_88 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithNibName_bundle__1125e9850,0,0);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189400(puVar1);
    lVar21 = (long)_DAT_11273379c;
    _objc_retain(param_37);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar21);
    *(undefined8 *)((long)puVar1 + lVar21) = param_37;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_1127337a0;
    _objc_retain(param_38);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_38;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_1127337a4;
    _objc_retain(param_39);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_39;
    _objc_release(uVar2);
    lVar12 = (long)_DAT_1127337a8;
    _objc_retain(param_40);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined8 *)((long)puVar1 + lVar12) = param_40;
    _objc_release(uVar2);
    lVar13 = (long)_DAT_1127337ac;
    _objc_retain(param_41);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined8 *)((long)puVar1 + lVar13) = param_41;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_1127337b0;
    _objc_retain(param_42);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_42;
    _objc_release(uVar2);
    lVar14 = (long)_DAT_1127337b4;
    _objc_retain(param_57);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined8 *)((long)puVar1 + lVar14) = param_57;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_1127337b8;
    _objc_retain(param_43);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_43;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_1127337bc;
    _objc_retain(param_44);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_44;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_1127337c0;
    _objc_retain(param_45);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_45;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_1127337c4;
    _objc_retain(param_46);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_46;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_1127337c8;
    _objc_retain(param_47);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_47;
    _objc_release(uVar2);
    lVar15 = (long)_DAT_1127337cc;
    _objc_retain(param_48);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar15);
    *(undefined8 *)((long)puVar1 + lVar15) = param_48;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_1127337d0;
    _objc_retain(in_stack_000002b0);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = in_stack_000002b0;
    _objc_release(uVar2);
    lVar16 = (long)_DAT_1127337d4;
    _objc_retain(param_22);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar16);
    *(undefined8 *)((long)puVar1 + lVar16) = param_22;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_1127337d8;
    _objc_retain(param_23);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_23;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_1127337dc;
    _objc_retain(param_24);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_24;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127337e0,param_8);
    lVar11 = (long)_DAT_1127337e4;
    _objc_retain(param_59);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_59;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_1127337e8;
    _objc_retain(param_60);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_60;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_1127337ec;
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_10;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_1127337f0;
    _objc_retain(param_11);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_11;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127337f4,param_3);
    lVar11 = (long)_DAT_1127337f8;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_4;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_1127337fc;
    _objc_retain(param_13);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_13;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112733800,param_9);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112733804,param_6);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112733808,param_7);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_11273380c);
    *(undefined **)((long)puVar1 + (long)_DAT_11273380c) = puVar3;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_112733810;
    _objc_retain(param_16);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_16;
    _objc_release(uVar2);
    lVar11 = (long)_DAT_112733814;
    _objc_retain(param_14);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_14;
    _objc_release(uVar2);
    lVar11 = (long)puVar1 + (long)_DAT_112733818;
    _objc_storeWeak(lVar11,param_21);
    lVar17 = (long)_DAT_11273381c;
    _objc_retain(param_15);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar17);
    *(undefined8 *)((long)puVar1 + lVar17) = param_15;
    _objc_release(uVar2);
    lVar18 = (long)_DAT_112733820;
    _objc_retain(param_25);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined8 *)((long)puVar1 + lVar18) = param_25;
    _objc_release(uVar2);
    lVar18 = (long)_DAT_112733824;
    _objc_retain(param_32);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined8 *)((long)puVar1 + lVar18) = param_32;
    _objc_release(uVar2);
    _objc_initWeak(auStack_90,puVar1);
    puVar3 = PTR_PTR_1126ae720;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_105caecf0;
    puStack_a0 = &UNK_1108e3ff8;
    _objc_copyWeak(auStack_98,auStack_90);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = (long)_DAT_112733828;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined **)((long)puVar1 + lVar18) = puVar3;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_11273382c;
    _objc_retain(param_35);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = param_35;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_112733830;
    _objc_retain(param_36);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = param_36;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_112733834;
    _objc_retain(param_50);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = param_50;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_112733838;
    _objc_retain(param_49);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = param_49;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_11273383c;
    _objc_retain(param_51);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = param_51;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_112733840;
    _objc_retain(param_52);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = param_52;
    _objc_release(uVar2);
    lVar23 = (long)_DAT_112733844;
    _objc_retain(param_54);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar23);
    *(undefined8 *)((long)puVar1 + lVar23) = param_54;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_112733848;
    _objc_retain(param_55);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = param_55;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_11273384c;
    _objc_retain(param_56);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = param_56;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_112733850;
    _objc_retain(param_61);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = param_61;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_112733854;
    _objc_retain(param_17);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = param_17;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_112733858;
    _objc_retain(in_stack_000002f0);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = in_stack_000002f0;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_11273385c;
    _objc_retain(param_18);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = param_18;
    _objc_release(uVar2);
    uVar2 = param_64;
    func_0x00010bf522a0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_112733860);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112733860) = uVar2;
    _objc_release(uVar10);
    uVar2 = param_64;
    func_0x00010c27eca0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_112733864);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112733864) = uVar2;
    _objc_release(uVar10);
    lVar22 = (long)_DAT_112733868;
    _objc_retain(param_66);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = param_66;
    _objc_release(uVar2);
    lVar27 = (long)_DAT_11273386c;
    _objc_retain(param_67);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar27);
    *(undefined8 *)((long)puVar1 + lVar27) = param_67;
    _objc_release(uVar2);
    uVar2 = param_64;
    func_0x00010c0c8940();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_112733870);
    *(undefined8 *)((long)puVar1 + (long)_DAT_112733870) = uVar2;
    _objc_release(uVar10);
    lVar22 = (long)_DAT_112733874;
    _objc_retain(in_stack_00000288);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = in_stack_00000288;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_112733878;
    _objc_retain(param_28);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = param_28;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_11273387c;
    _objc_retain(in_stack_000002a8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = in_stack_000002a8;
    _objc_release(uVar2);
    _objc_storeWeak((long)puVar1 + (long)_DAT_112733880,in_stack_00000298);
    lVar22 = (long)_DAT_112733884;
    _objc_retain(in_stack_000002a0);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = in_stack_000002a0;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_112733888;
    _objc_retain(in_stack_000002b8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(long *)((long)puVar1 + lVar22) = in_stack_000002b8;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_11273388c;
    _objc_retain(in_stack_000002c0);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined **)((long)puVar1 + lVar22) = in_stack_000002c0;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_112733890;
    _objc_retain(in_stack_000002c8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = in_stack_000002c8;
    _objc_release(uVar2);
    lVar28 = (long)_DAT_112733894;
    _objc_retain(in_stack_000002d0);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar28);
    *(undefined8 *)((long)puVar1 + lVar28) = in_stack_000002d0;
    _objc_release(uVar2);
    lVar22 = (long)_DAT_112733898;
    _objc_retain(in_stack_000002d8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = in_stack_000002d8;
    _objc_release(uVar2);
    lVar25 = (long)_DAT_11273389c;
    _objc_retain(in_stack_000002e0);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar25);
    *(undefined8 *)((long)puVar1 + lVar25) = in_stack_000002e0;
    _objc_release(uVar2);
    lVar26 = (long)_DAT_1127338a0;
    _objc_retain(in_stack_000002f8);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar26);
    *(undefined8 *)((long)puVar1 + lVar26) = in_stack_000002f8;
    _objc_release(uVar2);
    _objc_initWeak(auStack_c0,puVar1);
    puVar20 = PTR_PTR_1126ae720;
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_e0 = 0xc2000000;
    uStack_d8 = 0x105caed30;
    puStack_d0 = &UNK_11084cac0;
    _objc_copyWeak(auStack_c8,auStack_c0);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127338a4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127338a4) = puVar20;
    _objc_release(uVar2);
    puStack_110 = puVar3;
    uStack_108 = 0xc2000000;
    pcStack_100 = FUN_105caed70;
    puStack_f8 = &UNK_1108e4028;
    _objc_copyWeak(auStack_f0,auStack_c0);
    uVar2 = in_stack_00000240;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127338a8);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127338a8) = uVar2;
    _objc_release(uVar10);
    lVar22 = (long)_DAT_1127338ac;
    _objc_retain(in_stack_00000218);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar22);
    *(undefined8 *)((long)puVar1 + lVar22) = in_stack_00000218;
    _objc_release(uVar2);
    lVar19 = (long)_DAT_1127338b0;
    _objc_retain(in_stack_00000220);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined8 *)((long)puVar1 + lVar19) = in_stack_00000220;
    _objc_release(uVar2);
    uVar2 = in_stack_00000228;
    func_0x00010bfc0b60();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127338b4);
    *(undefined8 *)((long)puVar1 + (long)_DAT_1127338b4) = uVar2;
    _objc_release(uVar10);
    lVar19 = (long)_DAT_1127338b8;
    _objc_retain(in_stack_00000230);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined8 *)((long)puVar1 + lVar19) = in_stack_00000230;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b2290;
    _objc_alloc_init();
    func_0x00010c20ffe0();
    func_0x00010c210120(puVar3);
    func_0x00010c202040(puVar3);
    func_0x00010c210060(puVar3);
    func_0x00010c2100a0(puVar3);
    func_0x00010c2100c0(puVar3);
    func_0x00010c210160(puVar3);
    func_0x00010c1a81a0(puVar3);
    func_0x00010c1a81c0(puVar3);
    lVar19 = (long)_DAT_1127338bc;
    _objc_retain(in_stack_00000238);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined8 *)((long)puVar1 + lVar19) = in_stack_00000238;
    _objc_release();
    func_0x00010b0aea44();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar1;
    func_0x00010c14d660();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216240();
    _objc_release(puVar4);
    _objc_release(uVar2);
    func_0x00010bdee760(puVar1);
    lVar19 = (long)_DAT_1127338c0;
    _objc_retain(in_stack_00000280);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar19);
    *(undefined8 *)((long)puVar1 + lVar19) = in_stack_00000280;
    _objc_release(uVar2);
    func_0x00010bdee680(puVar1);
    if (in_stack_000002b8 == 0) {
      puVar20 = (undefined *)0x0;
    }
    else {
      puVar20 = PTR_PTR_1126ae630;
      func_0x00010bfe6000(PTR_PTR_1126ae630);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar20;
      func_0x00010c2b9b80();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar20);
      puVar20 = PTR_PTR_1126afe88;
      _objc_alloc();
      puVar6 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      if (in_stack_000002c0 == (undefined *)0x0) {
        puVar24 = (undefined *)0x0;
        puVar7 = in_stack_00000300;
      }
      else {
        puVar7 = in_stack_000002c0;
        func_0x00010bf66980();
        _objc_retainAutoreleasedReturnValue();
        puVar24 = puVar7;
        func_0x00010bf44a60();
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010c062da0();
      if (in_stack_000002c0 != (undefined *)0x0) {
        _objc_release(puVar24);
        _objc_release(puVar7);
      }
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    puVar5 = PTR_PTR_1126c39c8;
    func_0x00010bfd3300();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(in_stack_00000300);
    puVar6 = PTR_PTR_1126c39d0;
    _objc_alloc();
    _objc_loadWeakRetained(lVar11);
    func_0x00010c002a00(puVar6,*(undefined8 *)((long)puVar1 + lVar22),puVar1,lVar11,puVar3,param_5,
                        param_10,param_11,param_12,param_13,param_34,param_19,param_20,param_17,
                        param_26,param_27,param_28,param_29,param_30,param_31,param_33,param_51,
                        param_53,*(undefined8 *)((long)puVar1 + lVar16),
                        *(undefined8 *)((long)puVar1 + lVar13),
                        *(undefined8 *)((long)puVar1 + lVar12),
                        *(undefined8 *)((long)puVar1 + lVar17),
                        *(undefined8 *)((long)puVar1 + lVar15),
                        *(undefined8 *)((long)puVar1 + lVar14),param_58,param_62,
                        *(undefined8 *)((long)puVar1 + lVar23),param_63,param_64,param_65,
                        *(undefined8 *)((long)puVar1 + lVar27),param_70,in_stack_000001f0,
                        in_stack_000001f8,in_stack_00000200,in_stack_00000208,
                        *(undefined8 *)((long)puVar1 + (long)_DAT_1127338c4),in_stack_00000210,
                        *(undefined8 *)((long)puVar1 + lVar21),
                        *(undefined8 *)((long)puVar1 + lVar18),in_stack_00000248,
                        *(undefined8 *)((long)puVar1 + lVar22),in_stack_00000250,in_stack_00000258,
                        in_stack_00000260,in_stack_00000268,in_stack_00000270,in_stack_000002a8,
                        in_stack_000002e8,*(undefined8 *)((long)puVar1 + lVar26),in_stack_000002c0,
                        puVar20,puVar5,in_stack_00000308,*(undefined8 *)((long)puVar1 + lVar28),
                        *(undefined8 *)((long)puVar1 + lVar25));
    lVar18 = (long)_DAT_1127338c8;
    uVar2 = *(undefined8 *)((long)puVar1 + lVar18);
    *(undefined **)((long)puVar1 + lVar18) = puVar6;
    _objc_release(uVar2);
    _objc_release(lVar11);
    func_0x00010c18b5e0(*(undefined8 *)((long)puVar1 + lVar18));
    puVar6 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127338cc);
    *(undefined **)((long)puVar1 + (long)_DAT_1127338cc) = puVar6;
    _objc_release(uVar2);
    _objc_initWeak(auStack_118,puVar1);
    uVar2 = param_65;
    func_0x00010bf75dc0(param_65);
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_138 = 0xc2000000;
    pcStack_130 = FUN_105caede4;
    puStack_128 = &UNK_110846510;
    _objc_copyWeak(auStack_120,auStack_118);
    uVar10 = uVar2;
    func_0x00010c25ff60(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar10);
    _objc_release(uVar2);
    uVar2 = param_57;
    func_0x00010c269d40(param_57);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar2;
    func_0x00010c0e0fc0();
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c0e0ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_148,auStack_118);
    uVar10 = uVar9;
    func_0x00010c25ff60();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_release(uVar8);
    _objc_release(uVar2);
    puVar6 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa240();
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126b5900;
    func_0x00010c071800();
    puVar7 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    if ((int)puVar6 == 0) {
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240();
    }
    else {
      func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa240();
    }
    _objc_release(puVar7);
    uVar2 = param_11;
    func_0x00010c253460(param_11);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar10);
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + (long)_DAT_1127338d4) = 0;
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127338d8,param_33);
    _objc_storeWeak((long)puVar1 + (long)_DAT_1127338dc,param_68);
    lVar11 = (long)_DAT_1127338e0;
    _objc_retain(param_69);
    uVar2 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined8 *)((long)puVar1 + lVar11) = param_69;
    _objc_release(uVar2);
    puVar6 = PTR_PTR_1126c39d8;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + (long)_DAT_1127338e4);
    *(undefined **)((long)puVar1 + (long)_DAT_1127338e4) = puVar6;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_148);
    _objc_destroyWeak(auStack_120);
    _objc_destroyWeak(auStack_118);
    _objc_release(puVar20);
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_f0);
    _objc_destroyWeak(auStack_c8);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_98);
    _objc_destroyWeak(auStack_90);
    in_stack_00000300 = puVar5;
  }
  _objc_release(in_stack_00000310);
  _objc_release(in_stack_00000308);
  _objc_release(in_stack_00000300);
  _objc_release(in_stack_000002f8);
  _objc_release(in_stack_000002f0);
  _objc_release(in_stack_000002e8);
  _objc_release(in_stack_000002e0);
  _objc_release(in_stack_000002d8);
  _objc_release(in_stack_000002d0);
  _objc_release(in_stack_000002c8);
  _objc_release(in_stack_000002c0);
  _objc_release(in_stack_000002b8);
  _objc_release(in_stack_000002b0);
  _objc_release(in_stack_000002a8);
  _objc_release(in_stack_000002a0);
  _objc_release(in_stack_00000298);
  _objc_release(in_stack_00000290);
  _objc_release(in_stack_00000288);
  _objc_release(in_stack_00000280);
  _objc_release(in_stack_00000278);
  _objc_release(in_stack_00000270);
  _objc_release(in_stack_00000268);
  _objc_release(in_stack_00000260);
  _objc_release(in_stack_00000258);
  _objc_release(in_stack_00000250);
  _objc_release(in_stack_00000248);
  _objc_release(in_stack_00000240);
  _objc_release(in_stack_00000238);
  _objc_release(in_stack_00000230);
  _objc_release(in_stack_00000228);
  _objc_release(in_stack_00000220);
  _objc_release(in_stack_00000218);
  _objc_release(in_stack_00000210);
  _objc_release(in_stack_00000208);
  _objc_release(in_stack_00000200);
  _objc_release(in_stack_000001f8);
  _objc_release(in_stack_000001f0);
  _objc_release(param_70);
  _objc_release(param_69);
  _objc_release(param_68);
  _objc_release(param_67);
  _objc_release(param_66);
  _objc_release(param_65);
  _objc_release(param_64);
  _objc_release(param_63);
  _objc_release(param_62);
  _objc_release(param_61);
  _objc_release(param_60);
  _objc_release(param_59);
  _objc_release(param_58);
  _objc_release(param_57);
  _objc_release(param_56);
  _objc_release(param_55);
  _objc_release(param_54);
  _objc_release(param_53);
  _objc_release(param_52);
  _objc_release(param_51);
  _objc_release(param_50);
  _objc_release(param_49);
  _objc_release(param_48);
  _objc_release(param_47);
  _objc_release(param_46);
  _objc_release(param_45);
  _objc_release(param_44);
  _objc_release(param_43);
  _objc_release(param_42);
  _objc_release(param_41);
  _objc_release(param_40);
  _objc_release(param_39);
  _objc_release(param_38);
  _objc_release(param_37);
  _objc_release(param_36);
  _objc_release(param_35);
  _objc_release(param_34);
  _objc_release(param_33);
  _objc_release(param_32);
  _objc_release(param_31);
  _objc_release(param_30);
  _objc_release(param_29);
  _objc_release(param_28);
  _objc_release(param_27);
  _objc_release(param_26);
  _objc_release(param_25);
  _objc_release(param_24);
  _objc_release(param_23);
  _objc_release(param_22);
  _objc_release(param_21);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
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



/* Entry: 105caecf0; end: 105caed6f;  */

void FUN_105caecf0(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdf00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105caed70; end: 105caede3;  */

void FUN_105caed70(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = param_2;
    func_0x00010bf55bc0(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105caede4; end: 105caee0f;  */

void FUN_105caede4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcd7e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105caee10; end: 105caeeb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105caee10(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar3 = (long)_DAT_1127338d0;
    lVar1 = *(long *)(param_1 + lVar3);
    func_0x00010bf529e0();
    if ((lVar1 == 0) && (lVar1 = param_2, func_0x00010bf529e0(), lVar1 != 0)) {
      lVar1 = param_2;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(long *)(param_1 + lVar3) = lVar1;
      _objc_release(uVar2);
      func_0x00010bddd2c0(param_1);
    }
    else {
      lVar1 = param_2;
      func_0x00010bf51e00();
      uVar2 = *(undefined8 *)(param_1 + lVar3);
      *(long *)(param_1 + lVar3) = lVar1;
      _objc_release(uVar2);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105caeeb8; end: 105caefcf; -[SCGalleryViewController _updateViewHeight] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105caeeb8(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  double dVar4;
  
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  lVar2 = param_5;
  func_0x00010c0d66a0(param_5);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19f0e0(param_1,param_2,param_3,param_4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetHeight();
  dVar4 = param_1;
  func_0x000107e85700();
  lVar2 = param_5;
  func_0x00010c29bf00(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7d00(param_1 - dVar4);
  _objc_release(lVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bfbdeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_5 + _DAT_1127338c8),PTR_s_galleryViewHeightUpdated_1125cd150);
  return;
}



/* Entry: 105caefd0; end: 105caefd3; -[SCGalleryViewController _applicationWillChangeStatusBarFrame] */

void FUN_105caefd0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bee3730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__updateViewHeight_112596770);
  return;
}



/* Entry: 105caefd4; end: 105caf08f; -[SCGalleryViewController viewWillTransitionToSize:withTransitionCoordinator:] */

void FUN_105caefd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = PTR_s_viewWillTransitionToSize_withTra_112685490;
  puStack_48 = PTR_PTR_1126ecb88;
  uStack_50 = param_3;
  _objc_retain(param_5);
  _objc_msgSendSuper2(param_1,param_2,&uStack_50,puVar1,param_5);
  func_0x00010bf02c20(param_5);
  _objc_release(param_5);
  return;
}



/* Entry: 105caf090; end: 105caf0a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105caf090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfbded0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127338c8),
             PTR_s_galleryViewSizeUpdated_1125cd158);
  return;
}



/* Entry: 105caf0a4; end: 105caf117; -[SCGalleryViewController loadView] */

void FUN_105caf0a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc(PTR__OBJC_CLASS___UIView_1126aec20);
  puVar2 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  func_0x00010c013de0(puVar1);
  func_0x00010c222380(param_1,param_2,puVar1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105caf118; end: 105caf343; -[SCGalleryViewController viewDidLoad] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105caf118(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126ecb88;
  lStack_50 = param_2;
  _objc_msgSendSuper2(&lStack_50,PTR_s_viewDidLoad_112684cd8);
  uVar1 = *(undefined8 *)(param_2 + _DAT_1127338e8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c079ea0();
  *(char *)(param_2 + _DAT_1127338ec) = (char)uVar3;
  _objc_release(uVar1);
  lVar4 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17d4c0();
  _objc_release(lVar4);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_2;
  func_0x00010c29bf00(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440();
  _objc_release(lVar4);
  _objc_release(puVar2);
  func_0x00010c29cae0(*(undefined8 *)(param_2 + _DAT_112733868));
  func_0x00010c09c800(*(undefined8 *)(param_2 + _DAT_1127338c8));
  func_0x00010bebf220(param_2);
  _CACurrentMediaTime();
  *(undefined8 *)(param_2 + _DAT_1127338f0) = param_1;
  lVar4 = (long)_DAT_11273379c;
  uVar3 = *(undefined8 *)(param_2 + lVar4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar3);
  uVar1 = *(undefined8 *)(param_2 + _DAT_112733820);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfde020();
  _objc_release(uVar1);
  if ((int)uVar3 != 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_1127337e4);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + lVar4);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c09a3c0(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar3);
  }
  uVar1 = *(undefined8 *)(param_2 + _DAT_112733860);
  uVar3 = *(undefined8 *)(param_2 + _DAT_11273380c);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar3);
  _objc_release(uVar1);
  return;
}



/* Entry: 105caf344; end: 105caf363;  */

void FUN_105caf344(long param_1)

{
  func_0x00010c269d40(*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105caf364; end: 105cafd4b; -[SCGalleryViewController _stackLayoutViews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105caf364(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined *puVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  long lVar35;
  undefined8 uVar36;
  long lVar37;
  undefined1 auStack_e0 [8];
  undefined1 auStack_d8 [8];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + _DAT_1127338c4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(lVar2);
  func_0x00010c2a6740(lVar1);
  lVar2 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar1;
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(lVar2);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010bf77e80(lVar1);
  lVar2 = lVar1;
  func_0x00010c29bf00(lVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c16e440(lVar2);
  _objc_release(puVar4);
  _objc_release(lVar2);
  func_0x000107e857bc();
  func_0x00010c187460(lVar1);
  lVar2 = lVar1;
  func_0x00010bfdf0a0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2114c0();
  _objc_release(lVar2);
  _objc_initWeak(auStack_d8,param_1);
  _objc_copyWeak(auStack_e0,auStack_d8);
  uVar5 = *(undefined8 *)(param_1 + _DAT_1127337fc);
  func_0x00010c0653c0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fbe60();
  _objc_release(uVar5);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  lVar2 = lVar1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar3;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar1;
  lStack_90 = lVar8;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = lVar9;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar10 = lVar37;
  func_0x00010c08de00();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = lVar35;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = lVar1;
  lStack_88 = lVar11;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = lVar12;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar14 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar14;
  func_0x00010c2793a0();
  _objc_retainAutoreleasedReturnValue();
  lVar16 = lVar13;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar1;
  lStack_80 = lVar16;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  func_0x000107e857bc();
  lVar19 = lVar18;
  func_0x00010bf49420();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_78 = lVar19;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar4);
  _objc_release(puVar20);
  _objc_release(lVar19);
  _objc_release(lVar18);
  _objc_release(lVar17);
  _objc_release(lVar16);
  _objc_release(lVar15);
  _objc_release(lVar14);
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar10);
  _objc_release(lVar37);
  _objc_release(lVar35);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010beab8e0(param_1);
  func_0x00010beaff60(param_1);
  puVar4 = PTR__OBJC_CLASS___UIView_1126aec20;
  _objc_alloc();
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  lVar37 = (long)_DAT_1127338f4;
  uVar5 = *(undefined8 *)(param_1 + lVar37);
  *(undefined **)(param_1 + lVar37) = puVar4;
  _objc_release(uVar5);
  lVar2 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c066fa0();
  _objc_release(lVar2);
  func_0x00010c219b60(*(undefined8 *)(param_1 + lVar37));
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar21 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  lVar35 = (long)_DAT_1127338c8;
  uVar22 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010c267660();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar22;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar21;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar23 = *(undefined8 *)(param_1 + lVar37);
  uStack_b0 = uVar31;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar7;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar23;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = *(undefined8 *)(param_1 + lVar37);
  uStack_a8 = uVar36;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_1;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar24;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar37);
  uStack_a0 = uVar5;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar25;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_98 = uVar27;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar4);
  _objc_release(puVar20);
  _objc_release(uVar27);
  _objc_release(lVar9);
  _objc_release(lVar8);
  _objc_release(uVar25);
  _objc_release(uVar5);
  _objc_release(lVar2);
  _objc_release(lVar3);
  _objc_release(uVar24);
  _objc_release(uVar36);
  _objc_release(lVar6);
  _objc_release(lVar7);
  _objc_release(uVar23);
  _objc_release(uVar31);
  _objc_release(uVar33);
  _objc_release(uVar22);
  _objc_release(uVar21);
  uVar36 = *(undefined8 *)(param_1 + lVar37);
  uVar5 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar36);
  _objc_release(uVar5);
  uVar5 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c219b60();
  _objc_release(uVar5);
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  uVar24 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  uVar22 = uVar24;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar25 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar21 = uVar22;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar26 = *(undefined8 *)(param_1 + lVar35);
  uStack_d0 = uVar21;
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  uVar27 = uVar26;
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar28 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c08e400();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar27;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar29 = *(undefined8 *)(param_1 + lVar35);
  uStack_c8 = uVar5;
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  uVar36 = uVar29;
  func_0x00010bf1ff80();
  _objc_retainAutoreleasedReturnValue();
  uVar30 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010bf1ff80(uVar30);
  _objc_retainAutoreleasedReturnValue();
  uVar31 = uVar36;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar32 = *(undefined8 *)(param_1 + lVar35);
  uStack_c0 = uVar31;
  func_0x00010c268060();
  _objc_retainAutoreleasedReturnValue();
  uVar33 = uVar32;
  func_0x00010c1408a0();
  _objc_retainAutoreleasedReturnValue();
  uVar34 = *(undefined8 *)(param_1 + lVar37);
  func_0x00010c1408a0(uVar34);
  _objc_retainAutoreleasedReturnValue();
  uVar23 = uVar33;
  func_0x00010bf493c0(0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar20 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_b8 = uVar23;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010beef8c0(puVar4);
  _objc_release(puVar20);
  _objc_release(uVar23);
  _objc_release(uVar34);
  _objc_release(uVar33);
  _objc_release(uVar32);
  _objc_release(uVar31);
  _objc_release(uVar30);
  _objc_release(uVar36);
  _objc_release(uVar29);
  _objc_release(uVar5);
  _objc_release(uVar28);
  _objc_release(uVar27);
  _objc_release(uVar26);
  _objc_release(uVar21);
  _objc_release(uVar25);
  _objc_release(uVar22);
  _objc_release(uVar24);
  uVar36 = *(undefined8 *)(param_1 + lVar37);
  uVar5 = *(undefined8 *)(param_1 + lVar35);
  func_0x00010c267ec0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar36);
  _objc_release(uVar5);
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d8);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_e0);
  _objc_destroyWeak(auStack_d8);
  __Unwind_Resume();
  lVar1 = lVar1 + 0x20;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bea59c0(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105cafd4c; end: 105cafd87;  */

void FUN_105cafd4c(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010bea59c0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cafd88; end: 105cafe5b; -[SCGalleryViewController _createHeroPlayerController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cafd88(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127338c4);
  *(undefined **)(param_1 + _DAT_1127338c4) = puVar1;
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105cafe5c; end: 105caff9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cafe5c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126c39e0;
    _objc_alloc(PTR_PTR_1126c39e0);
    func_0x00010c027260();
    puVar2 = PTR_PTR_1126c39e8;
    _objc_alloc(PTR_PTR_1126c39e8);
    func_0x00010c0272e0();
    puVar6 = PTR_PTR_1126c39f0;
    _objc_alloc(PTR_PTR_1126c39f0);
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127337fc);
    func_0x00010c0653c0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_1;
    func_0x00010c14d660(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + _DAT_112733870);
    lVar5 = param_1 + _DAT_1127338dc;
    _objc_loadWeakRetained(lVar5);
    func_0x00010c042b20(puVar6,param_2,puVar2,uVar3,lVar4,param_1,uVar7,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105caff9c; end: 105caffe3; -[SCGalleryViewController pageViewName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105caff9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127338c8);
  func_0x00010bfb37c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f2220();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105caffe4; end: 105cafffb; -[SCGalleryViewController shouldDisplayStatusBar] */

uint FUN_105caffe4(uint param_1)

{
  func_0x00010c1070e0();
  return param_1 ^ 1;
}



/* Entry: 105cafffc; end: 105caffff; -[SCGalleryViewController preferredStatusBarStyle] */

undefined8 FUN_105cafffc(long param_1)

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



/* Entry: 105cb0000; end: 105cb001b; -[SCGalleryViewController _createMemoriesSelectionFooterBarController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb0000(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf23630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_112733824),
             PTR_s_buildWithPresentingViewControlle_1125a6730,param_1,param_1,param_1);
  return;
}



/* Entry: 105cb001c; end: 105cb0023; -[SCGalleryViewController prefersStatusBarHidden] */

undefined8 FUN_105cb001c(void)

{
  return 0;
}



/* Entry: 105cb0024; end: 105cb007b; -[SCGalleryViewController viewWillAppear:] */

void FUN_105cb0024(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ecb88;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_viewWillAppear__1126853f0);
  func_0x00010beb8ce0(param_1);
  func_0x000108df596c(param_1,param_3);
  return;
}



/* Entry: 105cb007c; end: 105cb02ef; -[SCGalleryViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb007c(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_58 = PTR_PTR_1126ecb88;
  lStack_60 = param_1;
  _objc_msgSendSuper2(&lStack_60,PTR_s_viewDidAppear__112684bd0);
  puVar2 = PTR_PTR_1126afdd8;
  func_0x00010c0f2220(param_1);
  func_0x00010bfc8740();
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 != (undefined *)0x0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_11273383c);
    func_0x00010c0f2220(param_1);
    func_0x00010c24fc40(uVar6);
  }
  func_0x00010c0f1480(*(undefined8 *)(param_1 + _DAT_112733868));
  func_0x00010bdc9a80(param_1);
  puVar3 = PTR_PTR_1126b6b20;
  func_0x00010c22ba80(PTR_PTR_1126b6b20);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27ab40();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa240();
  _objc_release(puVar3);
  lVar7 = (long)_DAT_1127338c8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
  func_0x00010c083820();
  if (iVar1 != 0) {
    puVar3 = PTR_PTR_1126b19f8;
    func_0x00010c0c7a40();
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_50 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126b7f68;
    func_0x00010c22b6a0(PTR_PTR_1126b7f68);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1835e0();
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    func_0x00010c19e220(*(undefined8 *)(param_1 + lVar7));
    func_0x00010bfbdea0(*(undefined8 *)(param_1 + lVar7));
    lVar7 = (long)_DAT_1127338bc;
    iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
    func_0x00010bf1f320();
    if (iVar1 != 0) {
      func_0x00010c172fe0(*(undefined8 *)(param_1 + lVar7));
      uVar6 = *(undefined8 *)(param_1 + _DAT_1127337d4);
      func_0x00010c269d40(uVar6);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a1a40();
      _objc_release(uVar6);
    }
    lVar7 = param_1;
    func_0x00010c06d1e0();
    if ((int)lVar7 != 0) {
      FUN_105cbb0c0(*(undefined8 *)(param_1 + _DAT_1127338e4),1);
    }
  }
  puVar3 = puVar2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_105cb02f0;
  puStack_88 = PTR_PTR_1126ecb88;
  puStack_90 = puVar3;
  puStack_80 = puVar2;
  lStack_78 = param_1;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_90,PTR_s_viewWillDisappear__112685438);
  lVar7 = (long)_DAT_1127338c8;
  iVar1 = (int)*(undefined8 *)(puVar3 + lVar7);
  func_0x00010c083820();
  if (iVar1 != 0) {
    func_0x00010c19e220(*(undefined8 *)(puVar3 + lVar7));
  }
  return;
}



/* Entry: 105cb02f0; end: 105cb034f; -[SCGalleryViewController viewWillDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb02f0(long param_1)

{
  int iVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126ecb88;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_viewWillDisappear__112685438);
  lVar2 = (long)_DAT_1127338c8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar2);
  func_0x00010c083820();
  if (iVar1 != 0) {
    func_0x00010c19e220(*(undefined8 *)(param_1 + lVar2));
  }
  return;
}



/* Entry: 105cb0350; end: 105cb0413; -[SCGalleryViewController viewDidDisappear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb0350(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126ecb88;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_viewDidDisappear__112684c48);
  func_0x00010c0f0fa0(*(undefined8 *)(param_1 + _DAT_112733868));
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12d5c0();
  _objc_release(puVar1);
  lVar2 = *(long *)(param_1 + _DAT_112733854);
  if ((lVar2 != 0) && (func_0x000108ec178c(), (int)lVar2 != 0)) {
    func_0x00010c138ca0(*(undefined8 *)(param_1 + _DAT_1127338c8));
  }
  return;
}



/* Entry: 105cb0414; end: 105cb0477; -[SCGalleryViewController _isNetworkAvailableForQuickCut] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105cb0414(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_112733890);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf48f60();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    func_0x000108df89f0(param_1);
  }
  return lVar2 != 0;
}



/* Entry: 105cb0478; end: 105cb0647; -[SCGalleryViewController didTapMemoriesQuickCutBanner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb0478(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar1 = param_1;
  func_0x00010be422c0();
  if ((int)lVar1 == 0) {
    return;
  }
  lVar9 = (long)_DAT_112733874;
  lVar1 = *(long *)(param_1 + lVar9);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar9));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  lVar1 = (long)_DAT_112733870;
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11e480();
  if ((int)uVar3 == 0) {
    uVar6 = *(ulong *)(param_1 + lVar1);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c11e500();
    if ((uVar7 & 1) == 0) {
      _objc_release(uVar6);
      _objc_release(uVar2);
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + _DAT_1127338c0);
      func_0x00010c1067a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar8;
      func_0x00010c073060();
      _objc_release(uVar8);
      _objc_release(uVar6);
      _objc_release(uVar2);
      if ((int)uVar3 != 0) goto LAB_105cb04fc;
    }
  }
  else {
    _objc_release(uVar2);
LAB_105cb04fc:
    puVar4 = *(undefined **)(param_1 + lVar1);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010c11e520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    if (puVar5 != (undefined *)0x0) {
      func_0x00010be481c0(param_1,param_2,puVar5,2);
      goto LAB_105cb062c;
    }
  }
  puVar5 = PTR_PTR_1126aff58;
  _objc_alloc(PTR_PTR_1126aff58);
  func_0x00010c038f60();
  puVar4 = PTR_PTR_1126b6048;
  _objc_alloc(PTR_PTR_1126b6048);
  func_0x00010c059660();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar9),param_2,puVar4);
  _objc_release(puVar4);
LAB_105cb062c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 105cb0648; end: 105cb0717; -[SCGalleryViewController _getSelectionConfigIfAvailable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb0648(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_112733870;
  uVar1 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11e580();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    lVar3 = *(long *)(param_1 + lVar4);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c11e4e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    if (lVar4 != 0) goto LAB_105cb0704;
  }
  lVar3 = (long)_DAT_1127338bc;
  lVar4 = *(long *)(param_1 + lVar3);
  func_0x00010c0dff20(lVar4,param_2,&PTR____CFConstantStringClassReference_110e27618);
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 != 0) {
    func_0x00010c12d3e0(*(undefined8 *)(param_1 + lVar3),param_2,
                        &PTR____CFConstantStringClassReference_110e27618);
    _objc_retain(lVar4);
  }
  _objc_release(lVar4);
LAB_105cb0704:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 105cb0718; end: 105cb084b; -[SCGalleryViewController _launchQuickCutWithSelectionConfig:source:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb0718(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar5 = (long)_DAT_112733874;
  lVar1 = *(long *)(param_1 + lVar5);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  puVar2 = PTR_PTR_1126aff58;
  _objc_alloc(PTR_PTR_1126aff58);
  func_0x00010c038f60();
  puVar3 = PTR_PTR_1126c39f8;
  if (param_3 == 0) {
    func_0x00010c0ca1a0(PTR_PTR_1126c39f8,param_2,PTR____NSArray0__struct_11034ab48);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010c15a520(PTR_PTR_1126c39f8,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  puVar4 = PTR_PTR_1126b6048;
  _objc_alloc(PTR_PTR_1126b6048);
  func_0x00010c0297e0();
  func_0x00010bf9d620(*(undefined8 *)(param_1 + lVar5),param_2,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105cb084c; end: 105cb08ab; -[SCGalleryViewController removeQuickCutScopeWithScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb084c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112733874;
  lVar1 = *(long *)(param_1 + lVar2);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + lVar2));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105cb08ac; end: 105cb0943; -[SCGalleryViewController cloudSync:didChangeStatus:isBackingUpNow:mayUpload:requiresUpgrade:] */

void FUN_105cb08ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 in_w6;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_105cb0944;
  puStack_50 = &UNK_11084d5f8;
  uStack_48 = param_3;
  uStack_40 = param_1;
  uStack_38 = in_w6;
  _objc_retain(param_3);
  func_0x000100162d98("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_release(param_3);
  return;
}



/* Entry: 105cb0944; end: 105cb0bc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb0944(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = *(undefined **)(param_1 + 0x20);
  func_0x00010c074180();
  lVar10 = *(long *)(param_1 + 0x28);
  lVar11 = (long)_DAT_1127338f8;
  puVar2 = puVar1;
  if (((*(byte *)(lVar10 + lVar11) & 1) == 0) && ((int)puVar1 != 0)) {
    puVar2 = *(undefined **)(lVar10 + _DAT_11273380c);
    func_0x00010c0f7fc0();
    lVar10 = *(long *)(param_1 + 0x28);
  }
  *(char *)(lVar10 + lVar11) = (char)puVar1;
  if (*(char *)(param_1 + 0x30) == '\x01') {
    puVar2 = PTR_PTR_1126af178;
    func_0x00010c22b900();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110e27678;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e27678,0);
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = &PTR____CFConstantStringClassReference_110e27698;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e27698,0);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR_PTR_1126af180;
    ppuVar5 = &PTR____CFConstantStringClassReference_110e276b8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e276b8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = PTR_PTR_1126af180;
    ppuVar6 = &PTR____CFConstantStringClassReference_110e276d8;
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e276d8,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef320();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c235c40(puVar2);
    _objc_release(puVar8);
    _objc_release(puVar7);
    _objc_release(ppuVar6);
    _objc_release(puVar1);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    _objc_release(ppuVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010bddd2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(puVar2 + 0x20),PTR_s__checkAndForceGenerateClientGenS_112554e50);
  return;
}



/* Entry: 105cb0bc4; end: 105cb0bcb;  */

void FUN_105cb0bc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__checkAndForceGenerateClientGenS_112554e50);
  return;
}



/* Entry: 105cb0bcc; end: 105cb0c03;  */

void FUN_105cb0bcc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14d700();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105cb0c04; end: 105cb0c13;  */

void FUN_105cb0c04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf464b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126af4b0,PTR_s_configWithStyle__1125af2d0,1);
  return;
}



/* Entry: 105cb0c14; end: 105cb0c8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb0c14(long param_1)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf07b60();
  _objc_release(puVar1);
  lVar2 = *(long *)(param_1 + 0x20) + (long)_DAT_112733818;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c152300();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105cb0c90; end: 105cb0dbf; -[SCGalleryViewController dataSource:didChangeEntries:failedEntries:fetchEntryError:] */

void FUN_105cb0c90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_105cb0dc0;
  puStack_68 = &UNK_110848218;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  uStack_60 = param_4;
  _objc_retain(param_5);
  uStack_58 = param_5;
  func_0x0001000d76cc("APPSTORE",&puStack_80);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105cb0dc0; end: 105cb0e03;  */

void FUN_105cb0dc0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bdc9a80(lVar1);
    func_0x00010bed3740(lVar1,param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105cb0e04; end: 105cb0fef; -[SCGalleryViewController _updateAvailableEntries:failedEntries:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb0e04(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  double dVar6;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa160();
  _objc_release(param_4);
  func_0x00010befa160(puVar1);
  _objc_release(param_5);
  func_0x00010bf529e0(puVar1);
  uVar2 = *(undefined8 *)(param_2 + _DAT_1127338c4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ee120();
  _objc_release(uVar2);
  puVar3 = puVar1;
  func_0x0001006372a4(puVar1,&PTR___NSConcreteGlobalBlock_110d25e40);
  puVar4 = puVar3;
  func_0x00010bf529e0();
  *(bool *)(param_2 + _DAT_1127338fc) = puVar4 != (undefined *)0x0;
  _objc_release(puVar3);
  if ((*(byte *)(param_2 + _DAT_112733900) & 1) == 0) {
    *(undefined1 *)(param_2 + _DAT_112733900) = 1;
    _CACurrentMediaTime();
    dVar6 = *(double *)(param_2 + _DAT_1127338f0);
    uVar2 = *(undefined8 *)(param_2 + _DAT_1127337a8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0afda0(param_1 - dVar6);
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b2438;
    func_0x00010bf4c9a0(PTR_PTR_1126b2438);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar3;
    func_0x00010c2ac460();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    uVar5 = *(undefined8 *)(param_2 + _DAT_112733844);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0c8b00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbfe0();
    _objc_release(uVar2);
    _objc_release(uVar5);
    _objc_release(puVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105cb0ff0; end: 105cb1367; -[SCGalleryViewController viewWillAppearFromViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb0ff0(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127337a8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf75e20();
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126b19f8;
  func_0x00010c0c7a40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b7f68;
  func_0x00010c22b6a0(PTR_PTR_1126b7f68);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1835e0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  uVar6 = *(undefined8 *)(param_1 + _DAT_112733820);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x00010bfde020();
  _objc_release(uVar6);
  if ((int)uVar2 != 0) {
    puVar3 = PTR_PTR_1126c3a00;
    func_0x00010c22ba80(PTR_PTR_1126c3a00);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = (long)_DAT_1127337e8;
    uVar6 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = *(undefined8 *)(param_1 + lVar10);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar7;
    func_0x00010bf69960();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c13d860(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126c3a00;
  func_0x00010c22ba80(PTR_PTR_1126c3a00);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = (long)_DAT_1127337b8;
  uVar6 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + lVar10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar7;
  func_0x00010bf69960();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d860(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(puVar3);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127337bc);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar11 = (long)_DAT_1127337ac;
  uVar6 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c13d8e0(uVar2);
  _objc_release(uVar6);
  _objc_release(uVar2);
  lVar10 = (long)_DAT_1127338c8;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar10);
  func_0x00010c245b60();
  if (iVar1 != 0) {
    func_0x00010be95d40(param_1);
  }
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf011a0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar11);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar2);
  func_0x00010bfbdf00(*(undefined8 *)(param_1 + lVar10));
  func_0x00010c2237c0(*(undefined8 *)(param_1 + lVar10));
  lVar11 = (long)_DAT_112733904;
  lVar10 = *(long *)(param_1 + lVar11);
  if (lVar10 == 0) {
    puVar3 = PTR_PTR_1126c3a08;
    _objc_alloc();
    func_0x00010bffe1e0();
    uVar2 = *(undefined8 *)(param_1 + lVar11);
    *(undefined **)(param_1 + lVar11) = puVar3;
    _objc_release(uVar2);
    lVar10 = *(long *)(param_1 + lVar11);
  }
  func_0x00010c251600(lVar10);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273382c);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c228ba0();
  _objc_release(uVar2);
  func_0x00010bebc7e0(param_1);
  func_0x00010beba040();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar9) {
    ___stack_chk_fail();
    puVar3 = PTR_PTR_1126b6b08;
    func_0x00010c22b6a0(PTR_PTR_1126b6b08);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b2e20();
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127337dc);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a7280();
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
    func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c104980();
    _objc_release(puVar3);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127337d0);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf84dc0();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127337c4);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c24ed40();
    _objc_release(uVar2);
    lVar9 = (long)_DAT_1127338c8;
    func_0x00010bfbde60(*(undefined8 *)(param_1 + lVar9));
    func_0x00010c19e220(*(undefined8 *)(param_1 + lVar9));
    if ((*(byte *)(param_1 + _DAT_112733908) & 1) == 0) {
      *(undefined1 *)(param_1 + _DAT_112733908) = 1;
      func_0x00010bee3720(param_1);
      uVar2 = *(undefined8 *)(param_1 + _DAT_1127337a8);
      func_0x00010c269d40(uVar2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0a71a0();
      _objc_release(uVar2);
      func_0x00010beb90a0(param_1);
      uVar6 = *(undefined8 *)(param_1 + _DAT_112733858);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar6;
      func_0x00010bfa5ee0();
      _objc_release(uVar6);
      if ((int)uVar2 != 0) {
        uVar2 = *(undefined8 *)(param_1 + _DAT_11273385c);
        func_0x00010c269d40(uVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c136240();
        _objc_release(uVar2);
      }
    }
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127337c8);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c236020();
    _objc_release(uVar2);
    lVar10 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    ppuVar8 = &PTR____CFConstantStringClassReference_110e27738;
    func_0x00010c160fc0();
    _objc_release(lVar10);
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e27738,0);
    _objc_retainAutoreleasedReturnValue();
    lVar10 = param_1;
    func_0x00010c29bf00(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020();
    _objc_release(lVar10);
    _objc_release(ppuVar8);
    uVar2 = *(undefined8 *)(param_1 + _DAT_1127337ac);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c087000();
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)(param_1 + _DAT_112733894);
    func_0x00010bf9f160(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c27bd40();
    _objc_release(uVar2);
    func_0x00010c0f7fc0(*(undefined8 *)(param_1 + _DAT_11273380c));
    uVar6 = *(undefined8 *)(param_1 + _DAT_112733870);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar6;
    func_0x00010c22eba0();
    _objc_release(uVar6);
    if ((int)uVar2 != 0) {
      iVar1 = (int)*(undefined8 *)(param_1 + lVar9);
      func_0x00010bfdc5e0();
      if (iVar1 == 0) {
        return;
      }
    }
    func_0x000107e6b210(*(undefined8 *)(param_1 + _DAT_1127338ac),
                        *(undefined8 *)(param_1 + _DAT_112733854));
    return;
  }
  return;
}



/* Entry: 105cb1368; end: 105cb16a7; -[SCGalleryViewController viewDidAppearFromViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb1368(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  
  puVar2 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127337dc);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0a7280();
  _objc_release(uVar3);
  puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_1126aed48;
  func_0x00010bf68fa0(PTR__OBJC_CLASS___NSNotificationCenter_1126aed48);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c104980();
  _objc_release(puVar2);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127337d0);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf84dc0();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127337c4);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c24ed40();
  _objc_release(uVar3);
  lVar7 = (long)_DAT_1127338c8;
  func_0x00010bfbde60(*(undefined8 *)(param_1 + lVar7));
  func_0x00010c19e220(*(undefined8 *)(param_1 + lVar7));
  if ((*(byte *)(param_1 + _DAT_112733908) & 1) == 0) {
    *(undefined1 *)(param_1 + _DAT_112733908) = 1;
    func_0x00010bee3720(param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127337a8);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0a71a0();
    _objc_release(uVar3);
    func_0x00010beb90a0(param_1);
    uVar4 = *(undefined8 *)(param_1 + _DAT_112733858);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010bfa5ee0();
    _objc_release(uVar4);
    if ((int)uVar3 != 0) {
      uVar3 = *(undefined8 *)(param_1 + _DAT_11273385c);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c136240();
      _objc_release(uVar3);
    }
  }
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127337c8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236020();
  _objc_release(uVar3);
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar6 = &PTR____CFConstantStringClassReference_110e27738;
  func_0x00010c160fc0();
  _objc_release(lVar5);
  func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e27738,0);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  func_0x00010c29bf00(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c161020();
  _objc_release(lVar5);
  _objc_release(ppuVar6);
  uVar3 = *(undefined8 *)(param_1 + _DAT_1127337ac);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c087000();
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112733894);
  func_0x00010bf9f160(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27bd40();
  _objc_release(uVar3);
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + _DAT_11273380c));
  uVar4 = *(undefined8 *)(param_1 + _DAT_112733870);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010c22eba0();
  _objc_release(uVar4);
  if ((int)uVar3 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + lVar7);
    func_0x00010bfdc5e0();
    if (iVar1 == 0) {
      return;
    }
  }
  func_0x000107e6b210(*(undefined8 *)(param_1 + _DAT_1127338ac),
                      *(undefined8 *)(param_1 + _DAT_112733854));
  return;
}



/* Entry: 105cb16a8; end: 105cb16af;  */

void FUN_105cb16a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddd2d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__checkAndForceGenerateClientGenS_112554e50);
  return;
}



/* Entry: 105cb16b0; end: 105cb1b6b; -[SCGalleryViewController _checkAndForceGenerateClientGenStoriesIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb16b0(double param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  double dVar22;
  undefined8 uStack_2c0;
  long lStack_2b8;
  long *plStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  long lStack_278;
  long *plStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined1 auStack_200 [128];
  undefined1 auStack_180 [128];
  undefined1 auStack_100 [128];
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar19 = (long)_DAT_1127338d0;
  puVar1 = param_2;
  if (*(long *)(param_2 + lVar19) != 0) {
    lVar13 = (long)_DAT_1127337ac;
    puVar1 = *(undefined **)(param_2 + lVar13);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c074180();
    _objc_release();
    if ((int)puVar2 != 0) {
      puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(puVar2);
      dVar22 = 0.0;
      uStack_218 = 0;
      uStack_220 = 0;
      uStack_208 = 0;
      uStack_210 = 0;
      lStack_238 = 0;
      uStack_240 = 0;
      uStack_228 = 0;
      plStack_230 = (long *)0x0;
      lVar16 = *(long *)(param_2 + lVar19);
      _objc_retain(lVar16);
      lVar5 = lVar16;
      func_0x00010bf52a60(lVar16,param_3,&uStack_240,auStack_100,0x10);
      if (lVar5 != 0) {
        lVar15 = *plStack_230;
        do {
          lVar21 = 0;
          do {
            if (*plStack_230 != lVar15) {
              _objc_enumerationMutation(lVar16);
            }
            uVar18 = *(ulong *)(lStack_238 + lVar21 * 8);
            uVar3 = uVar18;
            func_0x00010c276520();
            if ((1 < uVar3) && (func_0x00010bf3cea0(uVar18), dVar22 < 1.0)) {
              _objc_release(lVar16);
              lVar16 = (long)_DAT_11273390c;
              lVar5 = *(long *)(param_2 + lVar16);
              func_0x00010bf529e0();
              if ((lVar5 == 0) || (60.0 < param_1 - *(double *)(param_2 + _DAT_112733910))) {
                uVar4 = *(undefined8 *)(param_2 + _DAT_1127338b8);
                func_0x00010c269d40();
                _objc_retainAutoreleasedReturnValue();
                uVar11 = uVar4;
                FUN_106793668();
                _objc_retainAutoreleasedReturnValue();
                uVar12 = *(undefined8 *)(param_2 + lVar16);
                *(undefined8 *)(param_2 + lVar16) = uVar11;
                _objc_release(uVar12);
                _objc_release(uVar4);
                *(double *)(param_2 + _DAT_112733910) = param_1;
              }
              goto LAB_105cb18ac;
            }
            lVar21 = lVar21 + 1;
          } while (lVar5 != lVar21);
          lVar5 = lVar16;
          func_0x00010bf52a60(lVar16,param_3,&uStack_240,auStack_100,0x10);
        } while (lVar5 != 0);
      }
      _objc_release(lVar16);
LAB_105cb18ac:
      lVar16 = (long)_DAT_11273390c;
      lVar5 = *(long *)(param_2 + lVar16);
      func_0x00010bf529e0();
      if (lVar5 != 0) {
        dVar22 = 0.0;
        uStack_258 = 0;
        uStack_260 = 0;
        uStack_248 = 0;
        uStack_250 = 0;
        lStack_278 = 0;
        uStack_280 = 0;
        uStack_268 = 0;
        plStack_270 = (long *)0x0;
        lVar5 = *(long *)(param_2 + lVar19);
        _objc_retain(lVar5);
        lVar19 = lVar5;
        func_0x00010bf52a60(lVar5,param_3,&uStack_280,auStack_180,0x10);
        if (lVar19 != 0) {
          lVar15 = *plStack_270;
          do {
            lVar21 = 0;
            do {
              if (*plStack_270 != lVar15) {
                _objc_enumerationMutation(lVar5);
              }
              uVar18 = *(ulong *)(lStack_278 + lVar21 * 8);
              uVar3 = uVar18;
              func_0x00010c276520();
              if ((1 < uVar3) && (func_0x00010bf3cea0(uVar18), dVar22 < 1.0)) {
                func_0x00010c127ea0(uVar18);
                _objc_retainAutoreleasedReturnValue();
                uVar3 = uVar18;
                func_0x00010bf4c440();
                _objc_retainAutoreleasedReturnValue();
                uVar6 = uVar3;
                func_0x00010bf9e140();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(uVar3);
                _objc_release(uVar18);
                dVar22 = 0.0;
                uStack_298 = 0;
                uStack_2a0 = 0;
                uStack_288 = 0;
                uStack_290 = 0;
                lStack_2b8 = 0;
                uStack_2c0 = 0;
                uStack_2a8 = 0;
                plStack_2b0 = (long *)0x0;
                lVar20 = *(long *)(param_2 + lVar16);
                _objc_retain(lVar20);
                lVar7 = lVar20;
                func_0x00010bf52a60(lVar20,param_3,&uStack_2c0,auStack_200,0x10);
                if (lVar7 != 0) {
                  lVar17 = *plStack_2b0;
                  do {
                    lVar14 = 0;
                    do {
                      if (*plStack_2b0 != lVar17) {
                        _objc_enumerationMutation(lVar20);
                      }
                      lVar8 = *(long *)(lStack_2b8 + lVar14 * 8);
                      FUN_106793b5c();
                      _objc_retainAutoreleasedReturnValue();
                      if (lVar8 != 0) {
                        lVar9 = lVar8;
                        func_0x00010bf3fe40();
                        _objc_retainAutoreleasedReturnValue();
                        lVar10 = lVar9;
                        func_0x00010c0720c0();
                        _objc_release(lVar9);
                        if ((int)lVar10 != 0) {
                          func_0x00010befa120(puVar1,param_3,lVar8);
                          _objc_release(lVar8);
                          goto LAB_105cb1a7c;
                        }
                      }
                      _objc_release(lVar8);
                      lVar14 = lVar14 + 1;
                    } while (lVar7 != lVar14);
                    lVar7 = lVar20;
                    func_0x00010bf52a60(lVar20,param_3,&uStack_2c0,auStack_200,0x10);
                  } while (lVar7 != 0);
                }
LAB_105cb1a7c:
                _objc_release(lVar20);
                _objc_release(uVar6);
              }
              lVar21 = lVar21 + 1;
            } while (lVar21 != lVar19);
            lVar19 = lVar5;
            func_0x00010bf52a60(lVar5,param_3,&uStack_280,auStack_180,0x10);
          } while (lVar19 != 0);
        }
        _objc_release(lVar5);
      }
      puVar2 = puVar1;
      func_0x00010bf529e0();
      if (puVar2 == (undefined *)0x0) {
        uVar11 = *(undefined8 *)(param_2 + lVar13);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c086fe0();
      }
      else {
        uVar11 = *(undefined8 *)(param_2 + _DAT_1127338b4);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14fd20();
      }
      _objc_release(uVar11);
      _objc_release();
    }
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010be035a0();
  puVar2 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar2);
  lVar19 = (long)_DAT_1127338c8;
  func_0x00010bf83a00(*(undefined8 *)(puVar1 + lVar19));
  func_0x00010c19e220(*(undefined8 *)(puVar1 + lVar19),param_3,0);
  puVar1[_DAT_1127338d4] = 0;
  return;
}



/* Entry: 105cb1b6c; end: 105cb1be7; -[SCGalleryViewController viewWillDisappearFromViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb1b6c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  func_0x00010be035a0();
  puVar1 = PTR_PTR_1126b6b08;
  func_0x00010c22b6a0(PTR_PTR_1126b6b08);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0b2e20();
  _objc_release(puVar1);
  lVar2 = (long)_DAT_1127338c8;
  func_0x00010bf83a00(*(undefined8 *)(param_1 + lVar2));
  func_0x00010c19e220(*(undefined8 *)(param_1 + lVar2),param_2,0);
  *(undefined1 *)(param_1 + _DAT_1127338d4) = 0;
  return;
}



/* Entry: 105cb1be8; end: 105cb1ff3; -[SCGalleryViewController viewDidDisappearFromViewController:] */

/* WARNING: Possible PIC construction at 0x000105cb1c28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105cb1c2c) */
/* WARNING: Removing unreachable block (ram,0x000105cb1d00) */
/* WARNING: Removing unreachable block (ram,0x000105cb1d4c) */
/* WARNING: Removing unreachable block (ram,0x000105cb1d60) */
/* WARNING: Removing unreachable block (ram,0x000105cb1da4) */
/* WARNING: Removing unreachable block (ram,0x000105cb1db8) */
/* WARNING: Removing unreachable block (ram,0x000105cb1dd8) */
/* WARNING: Removing unreachable block (ram,0x000105cb1e78) */
/* WARNING: Removing unreachable block (ram,0x000105cb1e98) */
/* WARNING: Removing unreachable block (ram,0x000105cb1ff0) */
/* WARNING: Removing unreachable block (ram,0x000105cb2028) */
/* WARNING: Removing unreachable block (ram,0x000105cb201c) */
/* WARNING: Removing unreachable block (ram,0x000105cb1fd8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb1be8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c24fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11273383c),PTR_s_startPage__112671938,0x1f);
  return;
}



/* Entry: 105cb1ff4; end: 105cb204f; -[SCGalleryViewController _willEnterForeground] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb1ff4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1;
  func_0x00010c10f940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + _DAT_11273383c);
  func_0x00010c0f2220(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c24fc50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_startPage__112671938,param_1);
  return;
}



/* Entry: 105cb2050; end: 105cb209b; -[SCGalleryViewController isSemanticSearchEligibleTab] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_105cb2050(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *(long *)(param_1 + _DAT_1127338c8);
  func_0x00010bfb37c0(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c267c60();
  _objc_release(lVar1);
  return lVar2 == 3;
}



/* Entry: 105cb209c; end: 105cb216b; -[SCGalleryViewController galleryTabsController:requestsSelectMode:isFromLongPress:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_105cb209c(ulong param_1,undefined8 param_2,undefined8 param_3,int param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  _objc_retain(param_3);
  if (param_4 == 0) {
    uVar4 = param_1;
    func_0x00010beb2d80();
    if ((uVar4 & 1) != 0) goto LAB_105cb2150;
    uVar1 = *(undefined8 *)(param_1 + (long)_DAT_112733828);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9bae0();
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + (long)_DAT_112733828);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_3;
    func_0x00010bfb37c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c267c60();
    func_0x00010bf96c40(uVar1,param_2,uVar3,0,param_5);
    _objc_release(uVar2);
  }
  _objc_release(uVar1);
LAB_105cb2150:
  _objc_release(param_3);
  return 1;
}



/* Entry: 105cb216c; end: 105cb225b; -[SCGalleryViewController galleryTabsController:requestsNavigationToTab:scrollToItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_105cb216c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar3 = 0;
  if (param_4 < 0xb) {
    if (param_4 == 3) {
      func_0x00010c1527c0(param_1);
    }
    else {
      if (param_4 != 4) goto LAB_105cb2234;
      func_0x00010be9bfa0(param_1,param_2,param_5);
    }
  }
  else {
    if (param_4 != 0xb) {
      if (param_4 == 0xe) {
        uVar1 = *(undefined8 *)(param_1 + _DAT_1127338c8);
        uVar2 = 0xe;
      }
      else {
        if (param_4 != 0x10) goto LAB_105cb2234;
        uVar1 = *(undefined8 *)(param_1 + _DAT_1127338c8);
        uVar2 = 0x10;
      }
      uVar3 = 1;
      func_0x00010c152800(uVar1,param_2,uVar2,1);
      goto LAB_105cb2234;
    }
    func_0x00010c152760(param_1);
  }
  uVar3 = 1;
LAB_105cb2234:
  _objc_release(param_5);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 105cb225c; end: 105cb234f; -[SCGalleryViewController galleryTabsController:requestsAddToStorySelectModeForItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb225c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11273380c);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105cb2350; end: 105cb268f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb2350(double param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  lVar2 = param_2 + 0x28;
  _objc_loadWeakRetained();
  puVar4 = PTR_DAT_1126a4ec8;
  if (lVar2 != 0) {
    lVar13 = *(long *)(param_2 + 0x20);
    _objc_retain(lVar13);
    lVar12 = lVar13;
    func_0x00010010fab4(lVar13,puVar4);
    lVar1 = lVar13;
    if ((int)lVar12 == 0) {
      lVar1 = 0;
    }
    _objc_retain(lVar1);
    _objc_release(lVar13);
    if (lVar1 != 0) {
      lVar12 = (long)_DAT_11273379c;
      uVar3 = *(undefined8 *)(lVar2 + lVar12);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf52d80();
      _objc_release(uVar3);
      puVar4 = PTR_PTR_1126aead8;
      _objc_alloc();
      func_0x00010c038f40();
      uVar3 = *(undefined8 *)(lVar2 + lVar12);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar3;
      func_0x00010bfa7340();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar3);
      func_0x00010bf12220(lVar13);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c26f320();
      _objc_release(lVar13);
      uVar3 = 3;
      if (param_1 <= 0.0) {
        uVar3 = 1;
      }
      puVar6 = PTR_PTR_1126b1c60;
      _objc_alloc();
      ppuVar7 = &PTR____CFConstantStringClassReference_110dba798;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dba798,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c052c80();
      _objc_release(ppuVar7);
      uVar11 = *(undefined8 *)(lVar2 + _DAT_1127337f8);
      uVar8 = *(undefined8 *)(lVar2 + _DAT_1127337a0);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar5;
      FUN_105cbd218(uVar5,uVar8,uVar3);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = PTR_PTR_1126b2228;
      _objc_alloc(PTR_PTR_1126b2228);
      uVar3 = *(undefined8 *)(lVar2 + _DAT_112733840);
      func_0x00010c29a4c0(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00ed00(puVar10);
      func_0x00010bf23840();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar10);
      _objc_release(uVar3);
      _objc_release(uVar9);
      _objc_release(uVar8);
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0xc2000000;
      pcStack_90 = FUN_105cb2690;
      puStack_88 = &UNK_110841fb0;
      _objc_copyWeak(auStack_78,param_2 + 0x28);
      _objc_retain(uVar11);
      uStack_80 = uVar11;
      func_0x000100162d98("APPSTORE",&puStack_a0);
      _objc_release(uStack_80);
      _objc_destroyWeak(auStack_78);
      _objc_release(uVar11);
      _objc_release(puVar6);
      _objc_release(uVar5);
      _objc_release(puVar4);
    }
    _objc_release(lVar1);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 105cb2690; end: 105cb26eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb2690(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar1 = param_1 + _DAT_1127337f4;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf9d620();
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cb26ec; end: 105cb2883; -[SCGalleryViewController galleryTabsControllerWillChangeFocusedTab:withSelectableContentCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb26ec(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  *(bool *)(param_2 + _DAT_112733918) = param_5 != 0;
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010bfb37c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0754a0();
  if ((uVar2 & 1) == 0) {
    uVar3 = *(undefined8 *)(param_2 + _DAT_112733870);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c07d500();
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
  lVar5 = (long)_DAT_1127338c4;
  uVar3 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f8340();
  _objc_release(uVar3);
  uVar4 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar4;
  func_0x00010bfdf0a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c129020();
  _objc_release(uVar3);
  _objc_release(uVar4);
  uVar3 = *(undefined8 *)(param_2 + lVar5);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb860();
  _objc_release(uVar3);
  uVar1 = param_4;
  func_0x00010bfb37c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c151ea0();
  uVar2 = param_4;
  func_0x00010bfb37c0(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bed9380(param_1,param_2,param_3,uVar2,1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cb2884; end: 105cb291b; -[SCGalleryViewController galleryTabsController:didChangeFocusedTabSelectableContentCount:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb2884(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  *(bool *)(param_1 + _DAT_112733918) = param_4 != 0;
  lVar1 = param_1 + _DAT_1127338dc;
  _objc_loadWeakRetained();
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_1127338c4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105cb291c; end: 105cb2957; -[SCGalleryViewController galleryTabsControllerDidChangeSelectedGalleryItems:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb291c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112733828);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15ab80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105cb2958; end: 105cb2993; -[SCGalleryViewController galleryTabsControllerDidBeginEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb2958(long param_1)

{
  param_1 = param_1 + _DAT_112733818;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09fdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cb2994; end: 105cb29cf; -[SCGalleryViewController galleryTabsControllerDidEndEditing:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb2994(long param_1)

{
  param_1 = param_1 + _DAT_112733818;
  _objc_loadWeakRetained(param_1);
  func_0x00010c280d80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cb29d0; end: 105cb2a3f; -[SCGalleryViewController galleryTabsControllerDidPresentOpera:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb29d0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127338c4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf83c40();
  _objc_release(uVar1);
  param_1 = param_1 + _DAT_112733818;
  _objc_loadWeakRetained(param_1);
  func_0x00010c09fdc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105cb2a40; end: 105cb2a43; -[SCGalleryViewController galleryTabsControllerWillDismissOpera:] */

void FUN_105cb2a40(void)

{
  return;
}



/* Entry: 105cb2a44; end: 105cb2adf; -[SCGalleryViewController galleryTabsControllerDidDismissOpera:isFromSnapFeed:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb2a44(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  long lVar1;
  
  func_0x00010c2101e0(*(undefined8 *)(param_1 + _DAT_1127338c8),param_2,0);
  lVar1 = param_1 + _DAT_112733818;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c280d80();
  _objc_release(lVar1);
  if (param_4 != 0) {
    param_1 = param_1 + _DAT_11273391c;
    _objc_loadWeakRetained(param_1);
    func_0x00010c0d9840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105cb2ae0; end: 105cb2b27; -[SCGalleryViewController galleryTabsControllerIsInSelectionMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105cb2ae0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112733828);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c07d640();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105cb2b28; end: 105cb2bbb; -[SCGalleryViewController getTopInsetsForView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

double FUN_105cb2b28(double param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_2 + _DAT_1127338c4);
  _objc_retain(param_4);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c29bf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(lVar1);
  _objc_release(lVar2);
  if (param_4 == lVar1) {
    param_1 = 0.0;
  }
  else {
    func_0x000107e857bc();
    param_1 = param_1 + 38.0;
  }
  return param_1;
}



/* Entry: 105cb2bbc; end: 105cb2c37; -[SCGalleryViewController galleryTabController:didUpdateContentOffset:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb2bbc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  _objc_retain(param_4);
  lVar1 = *(long *)(param_2 + _DAT_1127338c8);
  func_0x00010bfb37c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (param_4 == lVar1) {
    func_0x00010bed9380(param_1,param_2,param_3,param_4,0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105cb2c38; end: 105cb2c3b; -[SCGalleryViewController galleryTabsControllerDidDismissDraftGrid] */

void FUN_105cb2c38(void)

{
  return;
}



/* Entry: 105cb2c3c; end: 105cb2c3f; -[SCGalleryViewController snapsTabDidFinishFirstLoad] */

void FUN_105cb2c3c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be95d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__resumeListeningToSearchQueryUpd_1125830f0);
  return;
}



/* Entry: 105cb2c40; end: 105cb2cc3; -[SCGalleryViewController requestToDismissPage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb2c40(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_1127337f4;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105cb2cc4; end: 105cb2d1f; -[SCGalleryViewController emptyStateViewDidTapButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb2cc4(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_1127337d4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19d2e0();
  _objc_release(uVar1);
  func_0x00010be8cb60(param_1);
  func_0x00010be9dc40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010beba050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__showNewUserAutoSaveStoriesAlert_11258c1b8);
  return;
}



/* Entry: 105cb2d20; end: 105cb2d83; -[SCGalleryViewController memoriesInformationWebViewControllerDidPressBack:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb2d20(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_112733920);
  *(undefined8 *)(param_1 + _DAT_112733920) = 0;
  _objc_release(uVar2);
  func_0x00010c1070e0();
  puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x00010c07f8c0();
  _objc_release(puVar3);
  if ((int)param_1 != (int)puVar4) {
    puVar3 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x00010c22b720(PTR__OBJC_CLASS___UIApplication_1126ae590);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14dc40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar3);
    return;
  }
  return;
}



/* Entry: 105cb2d84; end: 105cb2ef3; -[SCGalleryViewController spectaclesPairingScopeDidComplete:postPairingOnboardingInfo:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb2d84(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  
  _objc_retain(param_4);
  lVar7 = (long)_DAT_112733800;
  lVar1 = param_1 + lVar7;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    lVar7 = param_1 + lVar7;
    _objc_loadWeakRetained(lVar7);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar7);
    func_0x00010c1527c0(param_1);
    uVar3 = *(undefined8 *)(param_1 + _DAT_1127337ec);
    func_0x00010c0e8100();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c233da0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    if ((int)uVar5 != 0) {
      puVar6 = PTR_PTR_1126aead8;
      _objc_alloc(PTR_PTR_1126aead8);
      func_0x00010c038f40();
      lVar1 = param_1 + _DAT_112733808;
      _objc_loadWeakRetained(lVar1);
      lVar7 = lVar1;
      func_0x00010bf24380();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      param_1 = param_1 + _DAT_112733804;
      _objc_loadWeakRetained(param_1);
      func_0x00010bf9d620();
      _objc_release(param_1);
      _objc_release(lVar7);
      _objc_release(puVar6);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105cb2ef4; end: 105cb2f77; -[SCGalleryViewController spectaclesPairingScopeDidCancel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb2ef4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112733800;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105cb2f78; end: 105cb2ffb; -[SCGalleryViewController spectaclesOnboardingScopeWantsDismiss] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb2f78(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = (long)_DAT_112733804;
  lVar1 = param_1 + lVar3;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + lVar3;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 105cb2ffc; end: 105cb3023; -[SCGalleryViewController _scrollToCameraRollTabScrollToItem:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb2ffc(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c152830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_1127338c8),
               PTR_s_scrollToTab_galleryItem_animated_112632428,4,param_3,1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c152810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127338c8),PTR_s_scrollToTab_animated__112632420,4,0);
  return;
}



/* Entry: 105cb3024; end: 105cb302b; -[SCGalleryViewController scrollToCameraRollTab] */

void FUN_105cb3024(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be9bfb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__scrollToCameraRollTabScrollToIt_112584990,0)
  ;
  return;
}



/* Entry: 105cb302c; end: 105cb3107; -[SCGalleryViewController _fetchAssetWithIdentifier:] */

void FUN_105cb302c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_40;
  long lStack_38;
  
  puVar2 = PTR__OBJC_CLASS___PHAsset_1126bd898;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_40 = param_3;
  _objc_retain(param_3);
  func_0x00010bf0a140(puVar1,param_2,&uStack_40,1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar1;
  func_0x00010bfa50e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = puVar2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  if (puVar4 != (undefined *)0x0) {
    _objc_retain(puVar4);
    func_0x00010c09c7a0(puVar1);
    puVar2 = puVar1;
    func_0x00010be0fa80(puVar1,param_2,puVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    func_0x00010be9bfa0(puVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 105cb3108; end: 105cb3177; -[SCGalleryViewController scrollToCameraRollTabWithAssetIdentifier:] */

void FUN_105cb3108(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    func_0x00010c09c7a0(param_1);
    uVar1 = param_1;
    func_0x00010be0fa80(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    func_0x00010be9bfa0(param_1,param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 105cb3178; end: 105cb32d7; -[SCGalleryViewController browseCameraRollAssetInOpera:] */

/* WARNING: Possible PIC construction at 0x000105cb31ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105cb31f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb3178(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010c09c7a0(param_1);
    lVar1 = param_1;
    func_0x00010be0fa80();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_1 + _DAT_1127338c8);
      uVar3 = 4;
      goto code_r0x00010c152800;
    }
    _objc_release(0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  uVar2 = *(undefined8 *)(param_3 + _DAT_1127338c8);
  uVar3 = 0xb;
code_r0x00010c152800:
                    /* WARNING: Could not recover jumptable at 0x00010c152810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar2,PTR_s_scrollToTab_animated__112632420,uVar3,0);
  return;
}



/* Entry: 105cb32d8; end: 105cb32ef; -[SCGalleryViewController scrollToScreenshotsTab] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb32d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127338c8),PTR_s_scrollToTab_animated__112632420,0xb,0);
  return;
}



/* Entry: 105cb32f0; end: 105cb335f; -[SCGalleryViewController openQuickCut] */

void FUN_105cb32f0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1;
  func_0x00010be422c0();
  if ((int)lVar1 != 0) {
    func_0x00010c09c7a0(param_1);
    lVar1 = param_1;
    func_0x00010be22720();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      func_0x00010bf7cd00(param_1);
    }
    else {
      func_0x00010be481c0(param_1,param_2,lVar1,3);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 105cb3360; end: 105cb337b; -[SCGalleryViewController scrollToDreamsTab:] */

void FUN_105cb3360(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c152390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_scrollToDreamsTabWithSnapIds_gen_112632300,
             PTR____NSArray0__struct_11034ab48,0,0,param_3,0);
  return;
}



/* Entry: 105cb337c; end: 105cb338b; -[SCGalleryViewController reloadBanner] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb337c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c129010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127338c8),PTR_s_reloadSnapsTabBanner_112627e20);
  return;
}



/* Entry: 105cb338c; end: 105cb339b; -[SCGalleryViewController scrollToDreamsTabWithSnapIds:generationIds:notificationId:notificationType:dreamsPackId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb338c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1523b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_1127338c8),
             PTR_s_scrollToDreamsWithSnapIds_genera_112632308);
  return;
}



/* Entry: 105cb339c; end: 105cb358b; -[SCGalleryViewController _updateHeadersWithScrollContentOffset:tabController:animated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb339c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5)

{
  long lVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  double dStack_f0;
  undefined1 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  
  uVar3 = *(undefined8 *)(param_2 + _DAT_112733924);
  dVar6 = param_1;
  _objc_retain(param_4);
  func_0x00010bfe0640(uVar3);
  dVar4 = dVar6;
  func_0x00010bf4c660(param_4);
  dVar5 = dVar4;
  _objc_release(param_4);
  func_0x00010bfe0640(*(undefined8 *)(param_2 + _DAT_1127338f4));
  if (dVar4 <= dVar6 + dVar5) {
    dVar6 = 0.0;
  }
  dVar4 = 0.0;
  if (*(char *)(param_2 + _DAT_1127338ec) == '\0') {
    dVar4 = dVar6;
  }
  dVar6 = 0.0;
  if (0.0 <= param_1) {
    dVar6 = param_1;
  }
  dVar5 = dVar6;
  if (dVar4 <= dVar6) {
    dVar5 = dVar4;
  }
  func_0x00010bf49220(*(undefined8 *)(param_2 + _DAT_112733928));
  dVar7 = 0.0;
  if (param_1 <= -0.0) {
    dVar7 = -param_1;
  }
  if (param_1 <= dVar4) {
    dVar4 = param_1;
  }
  _CGAffineTransformMakeTranslation(&uStack_b0,0,dVar7);
  _CGAffineTransformMakeTranslation(&uStack_e0,0,-dVar4);
  uStack_e8 = 2.220446049250313e-16 < ABS(dVar6 + dVar5);
  if (2.220446049250313e-16 < ABS(dVar6 + dVar5)) {
    lVar1 = param_2;
    func_0x00010c29bf00(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(lVar1);
  }
  uStack_170 = 0xc2000000;
  uStack_148 = uStack_a8;
  uStack_150 = uStack_b0;
  uStack_138 = uStack_98;
  uStack_140 = uStack_a0;
  uStack_128 = uStack_88;
  uStack_130 = uStack_90;
  uStack_118 = uStack_d8;
  uStack_120 = uStack_e0;
  uStack_108 = uStack_c8;
  uStack_110 = uStack_d0;
  uStack_f8 = uStack_b8;
  uStack_100 = uStack_c0;
  puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_168 = FUN_105cb358c;
  puStack_160 = &UNK_1108e40c8;
  ppuVar2 = &puStack_178;
  lStack_158 = param_2;
  dStack_f0 = -dVar5;
  _objc_retainBlock();
  if (param_5 == 0) {
    (*(code *)ppuVar2[2])(ppuVar2);
  }
  else {
    func_0x00010bf03400(0x3fceb851eb851eb8,PTR__OBJC_CLASS___UIView_1126aec20,param_3,ppuVar2);
  }
  _objc_release(ppuVar2);
  return;
}



/* Entry: 105cb358c; end: 105cb3667;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105cb358c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *(undefined8 *)(param_1 + 0x30);
  uStack_60 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = *(undefined8 *)(param_1 + 0x40);
  uStack_50 = *(undefined8 *)(param_1 + 0x38);
  uStack_38 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11273392c),param_2,
                      &uStack_60);
  uStack_58 = *(undefined8 *)(param_1 + 0x60);
  uStack_60 = *(undefined8 *)(param_1 + 0x58);
  uStack_48 = *(undefined8 *)(param_1 + 0x70);
  uStack_50 = *(undefined8 *)(param_1 + 0x68);
  uStack_38 = *(undefined8 *)(param_1 + 0x80);
  uStack_40 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c219960(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112733924),param_2,
                      &uStack_60);
  if (*(char *)(param_1 + 0x90) == '\x01') {
    func_0x00010c181140(*(undefined8 *)(param_1 + 0x88),
                        *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_112733928));
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c29bf00(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08cdc0();
    _objc_release(uVar1);
    func_0x00010bfbdea0(*(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_1127338c8));
  }
  return;
}


