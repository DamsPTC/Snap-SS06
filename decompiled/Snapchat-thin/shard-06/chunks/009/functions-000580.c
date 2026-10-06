/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 104f1cb70; end: 104f1ccf7; -[SCMemoriesSnapsTabCRSectionDataSource _updateModelAndAnnounceUpdatesWithDateMetadata:fetchResults:excludeFetchResults:UUID:datesNeedRefetchCountDownSet:] */

void FUN_104f1cb70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f1ccf8; end: 104f1ce8b;  */

void FUN_104f1ccf8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if ((lVar2 != 0) && (lVar2 = *(long *)(param_1 + 0x28), _objc_release(), lVar2 != 0)) {
      lVar2 = *(long *)(param_1 + 0x28);
      func_0x00010bf7ed80();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = *(long *)(param_1 + 0x20);
      func_0x00010bf529e0();
      puVar7 = (undefined *)0x0;
      if ((lVar3 == 1) && (lVar2 != 0)) {
        lVar3 = *(long *)(param_1 + 0x30);
        func_0x00010bf529e0();
        if (lVar3 == 1) {
          uVar4 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010bfb1920(uVar4);
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          uVar4 = 0;
        }
        lVar3 = lVar2;
        func_0x00010c25ce40(lVar2,param_2,&PTR____CFConstantStringClassReference_110e13758);
        _objc_retainAutoreleasedReturnValue();
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        func_0x00010bfb1920(uVar5);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar1;
        func_0x00010bdf59c0(lVar1,param_2,lVar3,uVar5,uVar4);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        puVar7 = PTR_PTR_1126b2690;
        _objc_alloc(PTR_PTR_1126b2690);
        func_0x00010c01b980();
        _objc_release(lVar6);
        _objc_release(lVar3);
        _objc_release(uVar4);
      }
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x18),param_2,puVar7,lVar2);
      func_0x00010c12d360(*(undefined8 *)(param_1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x28));
      lVar3 = *(long *)(param_1 + 0x38);
      func_0x00010bf529e0();
      if (lVar3 == 0) {
        func_0x00010bdcc7a0(lVar1,param_2,*(undefined8 *)(param_1 + 0x40));
      }
      _objc_release(lVar2);
      _objc_release(puVar7);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f1ce8c; end: 104f1d37b; -[SCMemoriesSnapsTabCRSectionDataSource _createViewModelWithStoringKey:phFetchResult:excludeFetchResult:] */

void FUN_104f1ce8c(long param_1,undefined8 param_2,ulong param_3,undefined *param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
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
  ulong uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  func_0x00010c1607a0();
  _objc_retainAutoreleasedReturnValue();
  puVar16 = param_4;
  func_0x00010bf529e0();
  if (param_5 != 0) {
    puVar16 = param_4;
    func_0x00010bf529e0();
    lVar3 = param_5;
    func_0x00010bf529e0();
    puVar16 = puVar16 + -lVar3;
    lVar3 = param_5;
    func_0x00010bfa9d40(param_5);
    _objc_retainAutoreleasedReturnValue();
    puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_80 = 0xc2000000;
    pcStack_78 = FUN_104f1d37c;
    puStack_70 = &UNK_11085b3a0;
    _objc_retain(puVar2);
    puStack_68 = puVar2;
    func_0x00010bf97e80(lVar3,param_2,&puStack_88);
    _objc_release(lVar3);
    _objc_release(puStack_68);
  }
  puVar12 = puVar16;
  if (3 < (long)puVar16) {
    puVar12 = (undefined *)0x4;
  }
  puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar13 = param_4;
  func_0x00010bf529e0();
  if (puVar13 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    do {
      puVar6 = param_4;
      func_0x00010bfa9d40(param_4);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = puVar6;
      func_0x00010c0dfd20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar6);
      puVar6 = puVar2;
      func_0x00010bf4b900(puVar2,param_2,puVar7);
      if (((ulong)puVar6 & 1) == 0) {
        func_0x00010befa120(puVar5,param_2,puVar7);
        puVar6 = puVar5;
        func_0x00010bf529e0();
        if (puVar6 == puVar12) {
          _objc_release(puVar7);
          break;
        }
      }
      _objc_release(puVar7);
      puVar13 = puVar13 + 1;
      puVar6 = param_4;
      func_0x00010bf529e0();
    } while (puVar13 < puVar6);
  }
  puVar13 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x00010c22b720();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar13;
  func_0x00010c292ae0();
  _objc_release(puVar13);
  if (0 < (long)puVar16) {
    puVar13 = (undefined *)0x0;
    puVar17 = puVar12 + -1;
    puVar7 = (undefined *)0x0;
    if (puVar6 != (undefined *)0x1) {
      puVar7 = puVar17;
    }
    do {
      puVar11 = puVar17;
      if (puVar6 != (undefined *)0x1) {
        puVar11 = puVar13;
      }
      if (puVar11 == puVar7) {
        uVar15 = *(undefined8 *)(param_1 + 0x50);
        func_0x00010c25ce40(uVar15,param_2,&PTR____CFConstantStringClassReference_110e13758);
        _objc_retainAutoreleasedReturnValue();
        uVar14 = param_3;
        func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x50));
        if ((uVar14 & 1) == 0) {
          uVar14 = param_3;
          func_0x00010c0720c0(param_3,param_2,uVar15);
        }
        func_0x000108dfdac4();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar15);
        uVar15 = 2;
      }
      else {
        uVar14 = 0;
        uVar15 = 1;
      }
      puVar8 = puVar5;
      func_0x00010c0dfd20(puVar5,param_2,puVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = PTR_PTR_1126b2698;
      _objc_alloc(PTR_PTR_1126b2698);
      puVar10 = PTR_PTR_1126b2698;
      func_0x00010bfc4dc0(PTR_PTR_1126b2698,param_2,param_3,puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff4240(puVar9,param_2,puVar8,uVar14,puVar10,0,puVar12,uVar15,puVar11 != puVar7);
      _objc_release(puVar10);
      func_0x00010befa120(puVar1,param_2,puVar9);
      puVar10 = PTR__OBJC_CLASS___NSNumber_1126ae570;
      func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = puVar8;
      func_0x00010c09da80(puVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(puVar4,param_2,puVar10,puVar11);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(uVar14);
      puVar13 = puVar13 + 1;
      puVar17 = puVar17 + -1;
    } while (puVar17 != (undefined *)0xffffffffffffffff);
  }
  if (puVar6 == (undefined *)0x1) {
    puVar13 = puVar1;
    func_0x00010c140180();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar13;
    func_0x00010bf00560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar13);
  }
  else {
    puVar12 = puVar1;
    func_0x00010bf51e00(puVar1);
  }
  puVar13 = PTR_PTR_1126b26a0;
  puVar6 = puVar4;
  func_0x00010bf51e00(puVar4);
  puVar7 = param_4;
  func_0x00010bfa9d40(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_5;
  func_0x00010bfa9d40(param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2aa60(puVar13,param_2,puVar12,puVar6,puVar7,lVar3,puVar16,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar12);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar13);
  return;
}



/* Entry: 104f1d37c; end: 104f1d387;  */

void FUN_104f1d37c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010befa130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_addObject__11259c1f0,param_2);
  return;
}



/* Entry: 104f1d388; end: 104f1d45f; -[SCMemoriesSnapsTabCRSectionDataSource _announceUpdatesWithUUID:] */

void FUN_104f1d388(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_3);
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_104f1d460;
  puStack_48 = &UNK_11085b280;
  lStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010bf97e80(uVar3,param_2,&puStack_60);
  lVar2 = param_1 + 0x70;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c245a20();
  _objc_release(param_3);
  _objc_release(lVar2);
  func_0x00010bddf060(param_1);
  _objc_release(puStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 104f1d460; end: 104f1d57f;  */

void FUN_104f1d460(long param_1,undefined8 param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  _objc_retain(param_2);
  uVar7 = *(ulong *)(*(long *)(param_1 + 0x20) + 0x18);
  uVar3 = param_2;
  func_0x00010bf7ed80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  puVar4 = PTR_PTR_1126b2690;
  _objc_opt_class(PTR_PTR_1126b2690);
  uVar5 = uVar7;
  _objc_opt_isKindOfClass(uVar7,puVar4);
  uVar1 = uVar7;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar7);
  iVar2 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010be42020();
  if (iVar2 != 0) {
    uVar3 = param_2;
    func_0x00010bf7ed80();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c0720c0();
    _objc_release(uVar3);
    if ((int)uVar6 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      uVar3 = param_2;
      func_0x00010bf7ed80(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar6);
      _objc_release(uVar3);
    }
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f1d580; end: 104f1d6a3; -[SCMemoriesSnapsTabCRSectionDataSource _isModelValid:] */

byte FUN_104f1d580(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  byte bVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    bVar2 = 0;
  }
  else {
    puStack_48 = &uStack_50;
    uStack_50 = 0;
    uStack_40 = 0x2020000000;
    uStack_38 = 0;
    lVar1 = param_3;
    func_0x00010c156980(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0be2a0();
    _objc_release(lVar1);
    bVar2 = *(byte *)(puStack_48 + 3);
    __Block_object_dispose(&uStack_50,8);
  }
  _objc_release(param_3);
  return bVar2 & 1;
}



/* Entry: 104f1d6a4; end: 104f1d6c3;  */

void FUN_104f1d6a4(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0;
  return;
}



/* Entry: 104f1d6c4; end: 104f1d6fb;  */

void FUN_104f1d6c4(long param_1,long param_2)

{
  func_0x00010bf529e0();
  if (param_2 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 104f1d6fc; end: 104f1d793; -[SCMemoriesSnapsTabCRSectionDataSource _getPHFetchingPredicateArrayFromDateMetaData:] */

void FUN_104f1d6fc(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long lStack_30;
  long lStack_28;
  
  plVar2 = &lStack_30;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be214a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 != 0) {
    lStack_30 = param_1;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    param_3 = (undefined1 *)plVar2;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    func_0x00010bf7ed80();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = param_3;
    func_0x00010c0720c0();
    _objc_release(param_3);
    if ((int)puVar1 != 0) {
      func_0x000107e90334(0xc,*(undefined8 *)(param_1 + 0x10));
      _objc_retainAutoreleasedReturnValue();
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f1d794; end: 104f1d7ff; -[SCMemoriesSnapsTabCRSectionDataSource _getPHFetchingPredicateFromDateMetaData:] */

void FUN_104f1d794(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf7ed80();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c0720c0();
  _objc_release(param_3);
  if ((int)uVar1 != 0) {
    func_0x000107e90334(0xc,*(undefined8 *)(param_1 + 0x10));
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f1d800; end: 104f1d877; -[SCMemoriesSnapsTabCRSectionDataSource _cleanUpCurrentRequestAndStartPendingIfNeeded] */

void FUN_104f1d800(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = 0;
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = 0;
  _objc_release(uVar1);
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    _objc_retain(lVar2);
    _objc_release(lVar2);
    func_0x00010be46940(param_1,param_2,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar2);
    return;
  }
  return;
}



/* Entry: 104f1d878; end: 104f1da03; -[SCMemoriesSnapsTabCRSectionDataSource _getDateMetadatasFromTitleString:] */

void FUN_104f1d878(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_3);
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x104f1d934;
  puStack_48 = &UNK_11085b430;
  uStack_40 = param_1;
  puStack_38 = puVar1;
  _objc_retain();
  func_0x00010bf97e80(param_3,param_2,&puStack_60);
  _objc_release(param_3);
  puVar2 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puStack_38);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 104f1da04; end: 104f1dae3; -[SCMemoriesSnapsTabCRSectionDataSource _checkAndAnnouncePHChangeIfNecessary:isFromBackground:] */

void FUN_104f1da04(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_40 = param_4;
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 104f1dae4; end: 104f1dc47;  */

void FUN_104f1dae4(long param_1,undefined8 param_2,undefined1 *param_3,undefined1 *param_4,
                  ulong param_5,undefined *param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_258 [8];
  undefined1 auStack_250 [8];
  undefined1 auStack_248 [8];
  undefined1 auStack_240 [8];
  undefined *puStack_238;
  undefined8 uStack_230;
  code *pcStack_228;
  undefined *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined8 uStack_208;
  undefined8 *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
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
  
  puVar10 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x18);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    param_4 = auStack_e8;
    param_5 = 0;
    lVar5 = lVar2;
    func_0x00010bf52a60();
    if (lVar5 != 0) {
      lVar12 = *plStack_120;
      do {
        lVar13 = 0;
        do {
          if (*plStack_120 != lVar12) {
            _objc_enumerationMutation(lVar2);
          }
          iVar11 = (int)*(undefined8 *)(lStack_128 + lVar13 * 8);
          func_0x00010c0720c0();
          if (iVar11 != 0) {
            param_6 = puVar1;
            func_0x00010be2cda0(param_1);
          }
          lVar13 = lVar13 + 1;
        } while (lVar5 != lVar13);
        param_4 = auStack_e8;
        param_5 = 0;
        lVar5 = lVar2;
        puVar10 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar5 != 0);
    }
    _objc_release(lVar2);
    _objc_release(puVar1);
    param_3 = (undefined1 *)puVar10;
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if ((param_3 == (undefined1 *)0x0) || (param_6 == (undefined *)0x0)) goto LAB_104f1dffc;
  puStack_1d0 = &uStack_1d8;
  uStack_1d8 = 0;
  uStack_1c8 = 0x3032000000;
  pcStack_1c0 = FUN_104f1e098;
  uStack_1b8 = 0x104f1e0a8;
  uStack_1b0 = 0;
  puStack_200 = &uStack_208;
  uStack_208 = 0;
  uStack_1f8 = 0x3032000000;
  pcStack_1f0 = FUN_104f1e098;
  uStack_1e8 = 0x104f1e0a8;
  uStack_1e0 = 0;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0e00e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar3;
  func_0x00010c156980();
  _objc_retainAutoreleasedReturnValue();
  puStack_238 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_230 = 0xc2000000;
  pcStack_228 = FUN_104f1e0b8;
  puStack_220 = &UNK_11085b4c0;
  puStack_218 = &uStack_1d8;
  puStack_210 = &uStack_208;
  func_0x00010c0be2a0();
  _objc_release(uVar6);
  _objc_release(uVar3);
  if ((param_5 & 1) == 0) {
    puVar4 = param_4;
    func_0x00010bf34e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar4 != (undefined1 *)0x0) goto LAB_104f1dd90;
  }
  else {
LAB_104f1dd90:
    puVar1 = PTR_PTR_1126b2688;
    _objc_opt_new();
    lVar5 = *(long *)(param_1 + 0x60);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar5 != 0) {
      uVar6 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c0e00e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010be21480(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b59c0(puVar1);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar5);
      _objc_release(uVar6);
      puVar7 = puVar1;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010be12280();
      func_0x000108ebf264();
      _objc_retainAutoreleasedReturnValue();
      puVar8 = PTR_PTR_1126b2688;
      _objc_opt_new(PTR_PTR_1126b2688);
      uVar6 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c0e00e0(uVar6);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_1;
      func_0x00010be21480(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b59c0(puVar8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(uVar6);
      func_0x00010c2a87c0(puVar8);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar9 = puVar8;
      func_0x00010bf21f60(puVar8);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_240,*(undefined8 *)(param_1 + 0x48));
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      _objc_retain(uVar3);
      _objc_initWeak(auStack_248,param_1);
      uVar6 = *(undefined8 *)(param_1 + 0x48);
      _objc_copyWeak(auStack_258,auStack_240);
      _objc_retain(param_3);
      _objc_retain(uVar3);
      _objc_copyWeak(auStack_250,auStack_248);
      _objc_retain(param_6);
      func_0x00010bf8b840(uVar6);
      _objc_release(param_6);
      _objc_destroyWeak(auStack_250);
      _objc_release(uVar3);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_258);
      _objc_destroyWeak(auStack_248);
      _objc_release(uVar3);
      _objc_destroyWeak(auStack_240);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(lVar5);
      _objc_release(puVar7);
    }
    _objc_release(puVar1);
  }
  __Block_object_dispose(&uStack_208,8);
  _objc_release(uStack_1e0);
  __Block_object_dispose(&uStack_1d8,8);
  _objc_release(uStack_1b0);
LAB_104f1dffc:
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f1dc48; end: 104f1e097; -[SCMemoriesSnapsTabCRSectionDataSource _handleNewPHChangeWithExcludingFetchResult:change:isFromBackground:changedDateTitlesNeedToBeAnnounced:] */

void FUN_104f1dc48(long param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                  long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [8];
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [8];
  undefined *puStack_108;
  undefined8 uStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 *puStack_e8;
  undefined8 *puStack_e0;
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_6);
  if ((param_3 == 0) || (param_6 == 0)) goto LAB_104f1dffc;
  puStack_a0 = &uStack_a8;
  uStack_a8 = 0;
  uStack_98 = 0x3032000000;
  pcStack_90 = FUN_104f1e098;
  uStack_88 = 0x104f1e0a8;
  uStack_80 = 0;
  puStack_d0 = &uStack_d8;
  uStack_d8 = 0;
  uStack_c8 = 0x3032000000;
  pcStack_c0 = FUN_104f1e098;
  uStack_b8 = 0x104f1e0a8;
  uStack_b0 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c0e00e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010c156980();
  _objc_retainAutoreleasedReturnValue();
  puStack_108 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_100 = 0xc2000000;
  pcStack_f8 = FUN_104f1e0b8;
  puStack_f0 = &UNK_11085b4c0;
  puStack_e8 = &uStack_a8;
  puStack_e0 = &uStack_d8;
  func_0x00010c0be2a0();
  _objc_release(uVar4);
  _objc_release(uVar1);
  if ((param_5 & 1) == 0) {
    lVar3 = param_4;
    func_0x00010bf34e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) goto LAB_104f1dd90;
  }
  else {
LAB_104f1dd90:
    puVar2 = PTR_PTR_1126b2688;
    _objc_opt_new();
    lVar3 = *(long *)(param_1 + 0x60);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010be21480(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b59c0(puVar2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar3);
      _objc_release(uVar4);
      puVar5 = puVar2;
      func_0x00010bf21f60();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = param_1;
      func_0x00010be12280();
      func_0x000108ebf264();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR_PTR_1126b2688;
      _objc_opt_new(PTR_PTR_1126b2688);
      uVar4 = *(undefined8 *)(param_1 + 0x60);
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = param_1;
      func_0x00010be21480(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2b59c0(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(lVar7);
      _objc_release(uVar4);
      func_0x00010c2a87c0(puVar6);
      _objc_unsafeClaimAutoreleasedReturnValue();
      puVar8 = puVar6;
      func_0x00010bf21f60(puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_initWeak(auStack_110,*(undefined8 *)(param_1 + 0x48));
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      _objc_retain(uVar1);
      _objc_initWeak(auStack_118,param_1);
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      _objc_copyWeak(auStack_128,auStack_110);
      _objc_retain(param_3);
      _objc_retain(uVar1);
      _objc_copyWeak(auStack_120,auStack_118);
      _objc_retain(param_6);
      func_0x00010bf8b840(uVar4);
      _objc_release(param_6);
      _objc_destroyWeak(auStack_120);
      _objc_release(uVar1);
      _objc_release(param_3);
      _objc_destroyWeak(auStack_128);
      _objc_destroyWeak(auStack_118);
      _objc_release(uVar1);
      _objc_destroyWeak(auStack_110);
      _objc_release(puVar8);
      _objc_release(puVar6);
      _objc_release(lVar3);
      _objc_release(puVar5);
    }
    _objc_release(puVar2);
  }
  __Block_object_dispose(&uStack_d8,8);
  _objc_release(uStack_b0);
  __Block_object_dispose(&uStack_a8,8);
  _objc_release(uStack_80);
LAB_104f1dffc:
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f1e098; end: 104f1e0b7;  */

void FUN_104f1e098(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f1e0b8; end: 104f1e12b;  */

void FUN_104f1e0b8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f1e12c; end: 104f1e2e3;  */

void FUN_104f1e12c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  long lStack_48;
  
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 != 0) {
    lVar5 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar5;
    func_0x00010bf529e0();
    _objc_release(lVar5);
    if (lVar1 == 0) {
      lVar5 = 4;
    }
    else {
      lVar1 = param_2;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar1;
      func_0x00010bf529e0();
      lVar5 = lVar5 + 4;
      _objc_release(lVar1);
    }
    lVar1 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar1);
    _objc_retain(param_2);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar4);
    lStack_48 = lVar5;
    _objc_copyWeak(auStack_58,param_1 + 0x40);
    _objc_copyWeak(auStack_50,param_1 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar2);
    func_0x00010bf8b840(lVar1);
    _objc_release(lVar1);
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(param_2);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 104f1e2e4; end: 104f1e517;  */

void FUN_104f1e2e4(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) goto LAB_104f1e4e0;
  lVar2 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf529e0();
  lVar4 = *(long *)(param_1 + 0x20);
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  if (lVar3 == lVar5) {
    _objc_release(lVar4);
    _objc_release(lVar2);
LAB_104f1e4b8:
    puVar6 = (undefined *)(param_1 + 0x48);
    _objc_loadWeakRetained();
    if (puVar6 == (undefined *)0x0) goto LAB_104f1e4e0;
    func_0x00010bedbc00();
  }
  else {
    iVar1 = (int)*(undefined8 *)(param_1 + 0x28);
    func_0x00010c0720c0();
    _objc_release(lVar4);
    _objc_release(lVar2);
    if (iVar1 == 0) goto LAB_104f1e4b8;
    puVar6 = PTR_PTR_1126b2688;
    _objc_opt_new(PTR_PTR_1126b2688);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2add00(puVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
    puVar7 = puVar6;
    func_0x00010bf21f60(puVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar2);
    _objc_copyWeak(auStack_58,param_1 + 0x48);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar9);
    uVar10 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar10);
    uVar8 = *(undefined8 *)(param_1 + 0x38);
    _objc_retain(uVar8);
    func_0x00010bf8b840(lVar2);
    _objc_release(lVar2);
    _objc_release(uVar8);
    _objc_release(uVar10);
    _objc_release(uVar9);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar7);
  }
  _objc_release(puVar6);
LAB_104f1e4e0:
  _objc_release(param_2);
  return;
}



/* Entry: 104f1e518; end: 104f1e593;  */

void FUN_104f1e518(long param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    param_1 = param_1 + 0x38;
    _objc_loadWeakRetained();
    if (param_1 != 0) {
      func_0x00010bedbc00(param_1);
    }
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f1e594; end: 104f1e737; -[SCMemoriesSnapsTabCRSectionDataSource _updateModelWithFetchResults:fetchResults:excludeFetchResults:changedDateTitlesNeedToBeAnnounced:] */

void FUN_104f1e594(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_3 != 0) {
    lVar1 = param_4;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 != 0) {
      lVar2 = param_5;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(lVar1);
      if ((param_6 != 0) && (lVar2 != 0)) {
        _objc_initWeak(auStack_58,param_1);
        uVar3 = *(undefined8 *)(param_1 + 8);
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(param_3);
        _objc_retain(param_4);
        _objc_retain(param_5);
        _objc_retain(param_6);
        func_0x00010c0f7fc0(uVar3);
        _objc_release(param_6);
        _objc_release(param_5);
        _objc_release(param_4);
        _objc_release(param_3);
        _objc_destroyWeak(auStack_60);
        _objc_destroyWeak(auStack_58);
      }
    }
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 104f1e738; end: 104f1e90f;  */

void FUN_104f1e738(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 0x18);
    func_0x00010c0e00e0(lVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) {
      puVar3 = PTR_PTR_1126b2690;
      _objc_alloc(PTR_PTR_1126b2690);
      uVar4 = *(undefined8 *)(lVar1 + 0x18);
      func_0x00010c0e00e0(uVar4,param_2,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x20);
      uVar6 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010bfb1920(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010bfb1920(uVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x00010bdf59c0(lVar1,param_2,uVar9,uVar6,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c01b980(puVar3,param_2,uVar5,lVar2);
      func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x18),param_2,puVar3,
                          *(undefined8 *)(param_1 + 0x20));
      _objc_release(puVar3);
      _objc_release(lVar2);
      _objc_release(uVar7);
      _objc_release(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      lVar8 = *(long *)(lVar1 + 0x20);
      func_0x00010c0e00e0(lVar8,param_2,*(undefined8 *)(param_1 + 0x20));
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar8;
      func_0x00010c067fc0();
      _objc_release(lVar8);
      if (lVar2 == 1) {
        uVar9 = *(undefined8 *)(lVar1 + 0x18);
        func_0x00010c0e00e0(uVar9,param_2,*(undefined8 *)(param_1 + 0x20));
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38),param_2,uVar9,
                            *(undefined8 *)(param_1 + 0x20));
        _objc_release(uVar9);
      }
      lVar2 = lVar1 + 0x70;
      _objc_loadWeakRetained(lVar2);
      uVar9 = *(undefined8 *)(param_1 + 0x38);
      func_0x00010bf51e00(uVar9);
      func_0x00010c245a20(lVar2,param_2,uVar9,0,1);
      _objc_release(uVar9);
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f1e910; end: 104f1e94f; -[SCMemoriesSnapsTabCRSectionDataSource _fetchLimit] */

undefined8 FUN_104f1e910(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0fb7e0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 104f1e950; end: 104f1e977; -[SCMemoriesSnapsTabCRSectionDataSource testOnly_GetDebouncer] */

void FUN_104f1e950(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x68);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 104f1e978; end: 104f1e98f; -[SCMemoriesSnapsTabCRSectionDataSource delegate] */

void FUN_104f1e978(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f1e990; end: 104f1ea4b; -[SCMemoriesSnapsTabCRSectionDataSource .cxx_destruct] */

void FUN_104f1e990(long param_1)

{
  _objc_destroyWeak(param_1 + 0x70);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f1ea4c; end: 104f1eb1f; -[SCMemoriesSnapsTabCRSectionDebouncer initWithDebounceTime:] */

undefined1 * FUN_104f1ea4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126e5080;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    ppuVar2 = &PTR____CFConstantStringClassReference_110dbaf38;
    func_0x00010bdc3520();
    uVar3 = 0;
    _dispatch_queue_attr_make_with_qos_class(0,0x11,0);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x11;
    _dispatch_get_global_queue(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    _dispatch_queue_create_with_target_V2(ppuVar2,uVar3,uVar4);
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined ***)((long)puVar1 + 8) = ppuVar2;
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 104f1eb20; end: 104f1ebc3; -[SCMemoriesSnapsTabCRSectionDebouncer submitAction:] */

void FUN_104f1eb20(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  func_0x00010bf2e1a0(param_1);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104f1ebc4;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_3;
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bdecbc0(param_1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(long *)(param_1 + 0x10) = lVar1;
  _objc_release(uVar2);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 104f1ebc4; end: 104f1ebcf;  */

void FUN_104f1ebc4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104f1ebcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104f1ebd0; end: 104f1ec0b; -[SCMemoriesSnapsTabCRSectionDebouncer cancelCurrentActionIfNeeded] */

void FUN_104f1ebd0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    _dispatch_source_cancel();
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    *(undefined8 *)(param_1 + 0x10) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 104f1ec0c; end: 104f1ecaf; -[SCMemoriesSnapsTabCRSectionDebouncer _createDebounceDispatchTimerWithActionBlock:] */

void FUN_104f1ec0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  puVar1 = PTR___dispatch_source_type_timer_11034be38;
  _dispatch_source_create
            (PTR___dispatch_source_type_timer_11034be38,0,0,*(undefined8 *)(param_1 + 8));
  if (puVar1 != (undefined *)0x0) {
    uVar2 = 0;
    _dispatch_time(0,(long)(*(double *)(param_1 + 0x18) * 1000000000.0));
    _dispatch_source_set_timer(puVar1,uVar2,0xffffffffffffffff,100000000);
    _dispatch_source_set_event_handler(puVar1,param_3);
    _dispatch_resume(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 104f1ecb0; end: 104f1ecb7; -[SCMemoriesSnapsTabCRSectionDebouncer testOnly_SetDebounceTime:] */

void FUN_104f1ecb0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + 0x18) = param_1;
  return;
}



/* Entry: 104f1ecb8; end: 104f1ece7; -[SCMemoriesSnapsTabCRSectionDebouncer .cxx_destruct] */

void FUN_104f1ecb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f1ece8; end: 104f1ee3b; -[SCMemoriesSnapsTabCRSectionPluginImpl initWithPhotoPermissionCoordinator:coreConfigProvider:grapheneRegistry:applicationLifecycleEvents:userTrackedLogger:memoriesExperimentService:] */

undefined1 *
FUN_104f1ece8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e5088;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f1ee3c; end: 104f1eeb7; -[SCMemoriesSnapsTabCRSectionPluginImpl setCRSectionDataSourceDelegate:] */

void FUN_104f1ee3c(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126b26a8;
  if (param_3 != 0) {
    _objc_retain(param_3);
    _objc_alloc();
    func_0x00010c00ab80();
    _objc_release(param_3);
    uVar2 = *(undefined8 *)(param_1 + 8);
    *(undefined **)(param_1 + 8) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 104f1eeb8; end: 104f1f033; -[SCMemoriesSnapsTabCRSectionPluginImpl sectionControllerForViewModel:selectionHelper:] */

void FUN_104f1eeb8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
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
  pcStack_48 = FUN_104f1f034;
  uStack_40 = 0x104f1f044;
  uStack_38 = 0;
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b2690;
  _objc_opt_class(PTR_PTR_1126b2690);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  if (uVar1 != 0) {
    uVar3 = param_3;
    func_0x00010c156980(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010c0be2a0(uVar3);
    _objc_release(uVar3);
    _objc_release(param_4);
  }
  uVar4 = puStack_58[5];
  _objc_retain(uVar4);
  _objc_release(uVar1);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 104f1f034; end: 104f1f04b;  */

void FUN_104f1f034(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 104f1f04c; end: 104f1f08f;  */

void FUN_104f1f04c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126b26b0;
  _objc_alloc();
  func_0x00010c043da0();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 104f1f090; end: 104f1f097; -[SCMemoriesSnapsTabCRSectionPluginImpl updateCRViewModelForDateMetadatasIfNeeded:requestUUID:] */

void FUN_104f1f090(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c283fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_updateCRViewModelForDatesIfNeede_11267ea10);
  return;
}



/* Entry: 104f1f098; end: 104f1f09f; -[SCMemoriesSnapsTabCRSectionPluginImpl uiDataSourceDidReceivedUpdatesForDateMetadatas:] */

void FUN_104f1f098(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27ee50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_uiDidReceivedUpdatesForDates__11267d5b8);
  return;
}



/* Entry: 104f1f0a0; end: 104f1f0a7; -[SCMemoriesSnapsTabCRSectionPluginImpl uiDidAnnounceRecluster] */

void FUN_104f1f0a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c27ee30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_uiDidAnnounceRecluster_11267d5b0);
  return;
}



/* Entry: 104f1f0a8; end: 104f1f113; -[SCMemoriesSnapsTabCRSectionPluginImpl .cxx_destruct] */

void FUN_104f1f0a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f1f114; end: 104f1f343; -[SCMemoriesSnapsTabCRSectionPluginImplEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f1f114(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  lVar1 = param_1 + _DAT_112717108;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c1018e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR_PTR_1126b26b8;
  _objc_alloc(PTR_PTR_1126b26b8);
  if (param_1 == 0) {
    lVar11 = 0;
  }
  else {
    lVar11 = param_1 + _DAT_112717114;
    _objc_loadWeakRetained();
  }
  lVar4 = lVar11;
  func_0x00010c0fb4c0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_1;
  FUN_104f1f344();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010bf522a0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar12 = 0;
  }
  else {
    lVar12 = param_1 + _DAT_11271711c;
    _objc_loadWeakRetained();
  }
  lVar7 = lVar12;
  func_0x00010bfcdfa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar13 = 0;
  }
  else {
    lVar13 = param_1 + _DAT_11271710c;
    _objc_loadWeakRetained();
  }
  lVar8 = lVar13;
  func_0x00010bf07a00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar14 = 0;
  }
  else {
    lVar14 = param_1 + _DAT_112717120;
    _objc_loadWeakRetained(lVar14);
  }
  lVar9 = lVar14;
  func_0x00010c293fc0(lVar14);
  _objc_retainAutoreleasedReturnValue();
  FUN_104f1f344(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar10 = param_1;
  func_0x00010c0c8940();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035d80(puVar3,param_2,lVar4,lVar6,lVar7,lVar8,lVar9,lVar10);
  func_0x00010c125b60(lVar2,param_2,puVar3);
  _objc_release(puVar3);
  _objc_release(lVar10);
  _objc_release(param_1);
  _objc_release(lVar9);
  _objc_release(lVar14);
  _objc_release(lVar8);
  _objc_release(lVar13);
  _objc_release(lVar7);
  _objc_release(lVar12);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar11);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f1f344; end: 104f1f367;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f1f344(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112717118);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f1f368; end: 104f1f3db; -[SCMemoriesSnapsTabCRSectionPluginImplEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f1f368(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112717120);
  _objc_destroyWeak(param_1 + _DAT_11271711c);
  _objc_destroyWeak(param_1 + _DAT_112717118);
  _objc_destroyWeak(param_1 + _DAT_112717114);
  _objc_destroyWeak(param_1 + _DAT_112717110);
  _objc_destroyWeak(param_1 + _DAT_11271710c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112717108);
  return;
}



/* Entry: 104f1f3dc; end: 104f1f487; -[SCMemoriesSnapsTabCRSectionDataSourcRequest initWithAllDates:requestUUID:] */

undefined1 *
FUN_104f1f3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5090;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f1f488; end: 104f1f4ab; -[SCMemoriesSnapsTabCRSectionDataSourcRequest copyWithZone:] */

undefined8 FUN_104f1f488(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f1f4ac; end: 104f1f51f; -[SCMemoriesSnapsTabCRSectionDataSourcRequest hash] */

undefined8 * FUN_104f1f4ac(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_38;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_104f1f5a0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_104f1f5ac;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071ae0();
          goto LAB_104f1f5ac;
        }
        goto LAB_104f1f5a0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_104f1f5ac:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 104f1f520; end: 104f1f5c7; -[SCMemoriesSnapsTabCRSectionDataSourcRequest isEqual:] */

long FUN_104f1f520(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f1f5a0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f1f5ac;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_104f1f5ac;
        }
        goto LAB_104f1f5a0;
      }
    }
    lVar3 = 0;
  }
LAB_104f1f5ac:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f1f5c8; end: 104f1f5cf; -[SCMemoriesSnapsTabCRSectionDataSourcRequest allDates] */

undefined8 FUN_104f1f5c8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 104f1f5d0; end: 104f1f5d7; -[SCMemoriesSnapsTabCRSectionDataSourcRequest requestUUID] */

undefined8 FUN_104f1f5d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f1f5d8; end: 104f1f607; -[SCMemoriesSnapsTabCRSectionDataSourcRequest .cxx_destruct] */

void FUN_104f1f5d8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 104f1f608; end: 104f202a3; -[SCMemoriesSnapVideoFilterEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f1f608(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
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
  long lVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  undefined8 uVar43;
  long lVar44;
  long lVar45;
  undefined1 auStack_b0 [8];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar45 = (long)_DAT_11271712c;
  lVar2 = param_3 + lVar45;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  func_0x00010c243ae0();
  _objc_retainAutoreleasedReturnValue();
  lVar44 = (long)_DAT_112717130;
  uVar43 = *(undefined8 *)(param_3 + lVar44);
  *(long *)(param_3 + lVar44) = lVar1;
  _objc_release(uVar43);
  _objc_release(lVar2);
  lVar2 = *(long *)(param_3 + lVar44);
  if (lVar2 == 0) {
    uVar3 = param_3 + _DAT_112717134;
    _objc_loadWeakRetained();
    uVar4 = uVar3;
    func_0x00010c243b20();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_3 + lVar45;
    _objc_loadWeakRetained(lVar2);
    func_0x00010c0c67c0();
    lVar1 = param_3 + lVar45;
    _objc_loadWeakRetained(lVar1);
    lVar6 = lVar1;
    func_0x00010bf6eca0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010bf58fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar6);
    _objc_release(lVar1);
    _objc_release(lVar2);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
    puVar8 = PTR_PTR_1126b26c0;
    _objc_opt_class(PTR_PTR_1126b26c0);
    uVar4 = uVar7;
    _objc_opt_isKindOfClass(uVar7,puVar8);
    uVar3 = uVar7;
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(uVar7);
    uVar43 = *(undefined8 *)(param_3 + lVar44);
    *(ulong *)(param_3 + lVar44) = uVar3;
    _objc_release(uVar43);
    lVar2 = *(long *)(param_3 + lVar44);
  }
  func_0x00010bf311e0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar2;
  func_0x00010c08fa60();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    lVar2 = param_3 + lVar45;
    _objc_loadWeakRetained();
    lVar6 = lVar2;
    func_0x00010bf31200();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar6;
    func_0x00010c08fa60();
    if (lVar1 == 0) {
      func_0x00010011df08();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179260(*(undefined8 *)(param_3 + lVar44));
    }
    else {
      lVar1 = param_3 + lVar45;
      _objc_loadWeakRetained(lVar1);
      lVar9 = lVar1;
      func_0x00010bf31200();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c179260(*(undefined8 *)(param_3 + lVar44));
      _objc_release(lVar9);
    }
    _objc_release(lVar1);
    _objc_release(lVar6);
    _objc_release(lVar2);
  }
  _objc_initWeak(auStack_80,param_3);
  lVar2 = param_3 + lVar45;
  _objc_loadWeakRetained();
  lVar1 = lVar2;
  func_0x00010bfcb800();
  _objc_release(lVar2);
  if (lVar1 == 0) {
    uVar43 = *(undefined8 *)(param_3 + lVar44);
    lVar2 = param_3 + lVar45;
    _objc_loadWeakRetained();
    lVar10 = lVar2;
    func_0x00010c23f220();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3 + lVar45;
    _objc_loadWeakRetained();
    lVar11 = lVar1;
    func_0x00010bf3e220();
    _objc_retainAutoreleasedReturnValue();
    lVar44 = param_3 + _DAT_112717170;
    _objc_loadWeakRetained();
    lVar12 = lVar44;
    func_0x00010bf93a20();
    _objc_retainAutoreleasedReturnValue();
    lVar13 = lVar12;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_3 + _DAT_112717184;
    _objc_loadWeakRetained();
    lVar14 = lVar6;
    func_0x00010c13ff40();
    _objc_retainAutoreleasedReturnValue();
    lVar15 = lVar14;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = param_3 + lVar45;
    _objc_loadWeakRetained();
    func_0x00010c13b600();
    lVar16 = param_3 + lVar45;
    _objc_loadWeakRetained();
    func_0x00010c29b640();
    lVar17 = param_3 + lVar45;
    _objc_loadWeakRetained();
    func_0x00010c072540();
    lVar18 = param_3 + lVar45;
    _objc_loadWeakRetained();
    func_0x00010c248a80();
    lVar19 = param_3 + lVar45;
    _objc_loadWeakRetained();
    func_0x00010c112d00();
    lVar20 = param_3 + _DAT_11271713c;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_3 + _DAT_112717140;
    _objc_loadWeakRetained();
    lVar23 = param_3 + _DAT_112717144;
    _objc_loadWeakRetained();
    lVar24 = lVar23;
    func_0x00010c1104a0();
    _objc_retainAutoreleasedReturnValue();
    lVar25 = param_3 + _DAT_112717148;
    _objc_loadWeakRetained();
    lVar26 = lVar25;
    func_0x00010c26a1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = param_3 + _DAT_112717150;
    _objc_loadWeakRetained();
    lVar28 = lVar27;
    func_0x00010c0c57a0();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = param_3 + _DAT_112717158;
    _objc_loadWeakRetained();
    lVar30 = lVar29;
    func_0x00010c0c57a0();
    _objc_retainAutoreleasedReturnValue();
    lVar31 = param_3 + _DAT_11271714c;
    _objc_loadWeakRetained();
    lVar32 = lVar31;
    func_0x00010bf0f880();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = param_3 + _DAT_112717154;
    _objc_loadWeakRetained();
    lVar34 = lVar33;
    func_0x00010c119b40();
    _objc_retainAutoreleasedReturnValue();
    lVar35 = param_3 + _DAT_11271715c;
    _objc_loadWeakRetained();
    lVar36 = lVar35;
    func_0x00010c0c8780();
    _objc_retainAutoreleasedReturnValue();
    lVar37 = param_3 + _DAT_112717160;
    _objc_loadWeakRetained();
    lVar38 = lVar37;
    func_0x00010c0c9f60();
    _objc_retainAutoreleasedReturnValue();
    lVar39 = param_3 + _DAT_112717174;
    _objc_loadWeakRetained();
    lVar40 = lVar39;
    func_0x00010bf2fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar41 = param_3 + _DAT_112717178;
    _objc_loadWeakRetained();
    lVar42 = param_3 + _DAT_11271717c;
    _objc_loadWeakRetained();
    param_3 = param_3 + lVar45;
    _objc_loadWeakRetained();
    lVar45 = param_3;
    func_0x00010bf44140();
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_104f202a4;
    puStack_90 = &UNK_11085b550;
    _objc_copyWeak(auStack_88,auStack_80);
    func_0x00010bfae760(param_1,param_2,uVar43);
    _objc_release(lVar45);
    _objc_release(param_3);
    _objc_release(lVar42);
    _objc_release(lVar41);
    _objc_release(lVar40);
    _objc_release(lVar39);
    _objc_release(lVar38);
    _objc_release(lVar37);
    _objc_release(lVar36);
    _objc_release(lVar35);
    _objc_release(lVar34);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar31);
    _objc_release(lVar30);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar24);
    _objc_release(lVar23);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar19);
    _objc_release(lVar18);
    _objc_release(lVar17);
    _objc_release(lVar16);
    _objc_release(lVar9);
    _objc_release(lVar15);
    _objc_release(lVar14);
    _objc_release(lVar6);
    _objc_release(lVar13);
    _objc_release(lVar12);
    _objc_release(lVar44);
    _objc_release(lVar11);
    _objc_release(lVar1);
    _objc_release(lVar10);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_88);
  }
  else if (lVar1 == 1) {
    lVar2 = param_3 + _DAT_112717138;
    _objc_loadWeakRetained();
    lVar6 = lVar2;
    func_0x00010bf9f4a0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3 + lVar45;
    _objc_loadWeakRetained(lVar1);
    lVar9 = lVar1;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    lVar37 = lVar6;
    func_0x00010bf8cb40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar9);
    _objc_release(lVar1);
    _objc_release(lVar6);
    _objc_release(lVar2);
    lVar2 = param_3 + _DAT_112717180;
    _objc_loadWeakRetained(lVar2);
    lVar1 = lVar2;
    func_0x00010bf51700();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befb7e0();
    _objc_release(lVar6);
    _objc_release(lVar1);
    _objc_release(lVar2);
    lVar39 = lVar37;
    func_0x00010c23fe00();
    _objc_retainAutoreleasedReturnValue();
    uVar43 = *(undefined8 *)(param_3 + lVar44);
    lVar2 = param_3 + lVar45;
    _objc_loadWeakRetained();
    lVar41 = lVar2;
    func_0x00010c279cc0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = param_3 + _DAT_112717184;
    _objc_loadWeakRetained();
    lVar42 = lVar1;
    func_0x00010c13ff40();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = lVar42;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar44 = param_3 + lVar45;
    _objc_loadWeakRetained();
    func_0x00010c13b600();
    lVar6 = param_3 + lVar45;
    _objc_loadWeakRetained();
    func_0x00010c072540();
    lVar9 = param_3 + _DAT_11271713c;
    _objc_loadWeakRetained();
    lVar11 = lVar9;
    func_0x00010c293740();
    _objc_retainAutoreleasedReturnValue();
    lVar16 = param_3 + _DAT_112717144;
    _objc_loadWeakRetained();
    lVar12 = lVar16;
    func_0x00010c1104a0();
    _objc_retainAutoreleasedReturnValue();
    lVar17 = param_3 + _DAT_11271714c;
    _objc_loadWeakRetained();
    lVar13 = lVar17;
    func_0x00010bf0f880();
    _objc_retainAutoreleasedReturnValue();
    lVar18 = param_3 + _DAT_112717150;
    _objc_loadWeakRetained();
    lVar14 = lVar18;
    func_0x00010c0c57a0();
    _objc_retainAutoreleasedReturnValue();
    lVar19 = param_3 + _DAT_112717158;
    _objc_loadWeakRetained();
    lVar15 = lVar19;
    func_0x00010c0c57a0();
    _objc_retainAutoreleasedReturnValue();
    lVar20 = param_3 + _DAT_112717164;
    _objc_loadWeakRetained();
    lVar21 = lVar20;
    func_0x00010bef1320();
    _objc_retainAutoreleasedReturnValue();
    lVar22 = param_3 + _DAT_11271716c;
    _objc_loadWeakRetained();
    lVar24 = lVar22;
    func_0x00010bf69900();
    _objc_retainAutoreleasedReturnValue();
    lVar23 = param_3 + _DAT_112717154;
    _objc_loadWeakRetained();
    lVar25 = param_3 + _DAT_112717148;
    _objc_loadWeakRetained();
    lVar26 = lVar25;
    func_0x00010c26a1c0();
    _objc_retainAutoreleasedReturnValue();
    lVar27 = param_3 + _DAT_112717174;
    _objc_loadWeakRetained();
    lVar28 = lVar27;
    func_0x00010bf2fe40();
    _objc_retainAutoreleasedReturnValue();
    lVar29 = param_3 + _DAT_112717178;
    _objc_loadWeakRetained();
    lVar31 = param_3 + _DAT_112717168;
    _objc_loadWeakRetained();
    lVar30 = lVar31;
    func_0x00010bf45e20();
    _objc_retainAutoreleasedReturnValue();
    lVar32 = lVar30;
    func_0x00010bf7f840();
    _objc_retainAutoreleasedReturnValue();
    lVar33 = param_3 + lVar45;
    _objc_loadWeakRetained();
    lVar34 = lVar33;
    func_0x00010bf44140();
    _objc_retainAutoreleasedReturnValue();
    lVar35 = param_3 + _DAT_11271717c;
    _objc_loadWeakRetained();
    param_3 = param_3 + lVar45;
    _objc_loadWeakRetained();
    lVar45 = param_3;
    func_0x00010c2a2a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_b0,auStack_80);
    func_0x00010bfae780(uVar43);
    _objc_release(lVar45);
    _objc_release(param_3);
    _objc_release(lVar35);
    _objc_release(lVar34);
    _objc_release(lVar33);
    _objc_release(lVar32);
    _objc_release(lVar30);
    _objc_release(lVar31);
    _objc_release(lVar29);
    _objc_release(lVar28);
    _objc_release(lVar27);
    _objc_release(lVar26);
    _objc_release(lVar25);
    _objc_release(lVar23);
    _objc_release(lVar24);
    _objc_release(lVar22);
    _objc_release(lVar21);
    _objc_release(lVar20);
    _objc_release(lVar15);
    _objc_release(lVar19);
    _objc_release(lVar14);
    _objc_release(lVar18);
    _objc_release(lVar13);
    _objc_release(lVar17);
    _objc_release(lVar12);
    _objc_release(lVar16);
    _objc_release(lVar11);
    _objc_release(lVar9);
    _objc_release(lVar6);
    _objc_release(lVar44);
    _objc_release(lVar10);
    _objc_release(lVar42);
    _objc_release(lVar1);
    _objc_release(lVar41);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_b0);
    _objc_release(lVar39);
    _objc_release(lVar37);
  }
  _objc_destroyWeak(auStack_80);
  return;
}



/* Entry: 104f202a4; end: 104f204c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f202a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    lVar4 = (long)_DAT_11271712c;
    lVar1 = param_1 + lVar4;
    _objc_loadWeakRetained();
    lVar2 = lVar1;
    func_0x00010bf43fe0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(lVar1);
    if (lVar2 != 0) {
      lVar4 = param_1 + lVar4;
      _objc_loadWeakRetained();
      lVar1 = lVar4;
      func_0x00010bf43fe0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(undefined8 *)(param_1 + _DAT_112717130);
      uVar3 = param_2;
      func_0x00010c28f340(param_2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar1 + 0x10))(lVar1,uVar5,uVar3,param_3);
      _objc_release(uVar3);
      _objc_release(lVar1);
      _objc_release(lVar4);
    }
  }
  _objc_release(param_1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 104f204c4; end: 104f205fb; -[SCMemoriesSnapVideoFilterEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f204c4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112717184);
  _objc_destroyWeak(param_1 + _DAT_112717138);
  _objc_destroyWeak(param_1 + _DAT_112717180);
  _objc_destroyWeak(param_1 + _DAT_11271717c);
  _objc_destroyWeak(param_1 + _DAT_112717178);
  _objc_destroyWeak(param_1 + _DAT_112717174);
  _objc_destroyWeak(param_1 + _DAT_112717170);
  _objc_destroyWeak(param_1 + _DAT_11271716c);
  _objc_destroyWeak(param_1 + _DAT_112717168);
  _objc_destroyWeak(param_1 + _DAT_112717164);
  _objc_destroyWeak(param_1 + _DAT_112717160);
  _objc_destroyWeak(param_1 + _DAT_11271715c);
  _objc_destroyWeak(param_1 + _DAT_112717158);
  _objc_destroyWeak(param_1 + _DAT_112717154);
  _objc_destroyWeak(param_1 + _DAT_112717150);
  _objc_destroyWeak(param_1 + _DAT_11271714c);
  _objc_destroyWeak(param_1 + _DAT_112717148);
  _objc_destroyWeak(param_1 + _DAT_112717134);
  _objc_destroyWeak(param_1 + _DAT_112717144);
  _objc_destroyWeak(param_1 + _DAT_112717140);
  _objc_destroyWeak(param_1 + _DAT_11271713c);
  _objc_destroyWeak(param_1 + _DAT_11271712c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112717130,0);
  return;
}



/* Entry: 104f205fc; end: 104f21e8b;  */

undefined *
FUN_104f205fc(undefined8 param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
             ulong param_5,undefined8 param_6,int param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,undefined1 param_15,undefined4 param_16,undefined8 param_17,
             undefined *param_18,undefined8 param_19,long param_20)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  long lVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  undefined **ppuVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  int iVar26;
  undefined8 uVar27;
  long lVar28;
  undefined *puVar29;
  long lVar30;
  undefined *puVar31;
  ulong uVar32;
  undefined *puVar33;
  uint uVar34;
  undefined1 uVar35;
  undefined1 uVar36;
  undefined1 uVar37;
  undefined1 uVar38;
  undefined1 uVar39;
  undefined1 uVar40;
  undefined1 uVar41;
  undefined1 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined *puStack_718;
  long lStack_6b0;
  undefined *puStack_6a8;
  undefined *puStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined *puStack_688;
  undefined **ppuStack_680;
  undefined *puStack_678;
  undefined8 uStack_670;
  code *pcStack_668;
  undefined *puStack_660;
  undefined *puStack_658;
  undefined8 uStack_650;
  undefined *puStack_648;
  undefined **ppuStack_640;
  undefined *puStack_638;
  undefined *puStack_630;
  undefined *puStack_628;
  ulong uStack_620;
  undefined *puStack_618;
  undefined *puStack_610;
  long lStack_608;
  undefined4 uStack_600;
  undefined *puStack_5f8;
  undefined8 uStack_5f0;
  code *pcStack_5e8;
  undefined *puStack_5e0;
  undefined8 uStack_5d8;
  undefined *puStack_5d0;
  undefined *puStack_5c8;
  undefined *puStack_5c0;
  undefined **ppuStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined *puStack_5a0;
  undefined *puStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined *puStack_580;
  undefined **ppuStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined *puStack_560;
  undefined8 uStack_558;
  undefined *puStack_550;
  undefined *puStack_548;
  ulong uStack_540;
  undefined *puStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined *puStack_510;
  undefined *puStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined *puStack_4f0;
  undefined *puStack_4e8;
  undefined **ppuStack_4e0;
  undefined *puStack_4d8;
  undefined *puStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined **ppuStack_4a8;
  undefined *puStack_4a0;
  undefined *puStack_498;
  undefined8 uStack_490;
  code *pcStack_488;
  undefined *puStack_480;
  undefined8 uStack_478;
  ulong uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined **ppuStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_420;
  undefined *puStack_418;
  undefined8 uStack_410;
  long lStack_408;
  long *plStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined *puStack_3d0;
  undefined8 uStack_3c8;
  code *pcStack_3c0;
  undefined *puStack_3b8;
  undefined *puStack_3b0;
  undefined *puStack_3a8;
  undefined *puStack_3a0;
  undefined *puStack_398;
  ulong uStack_390;
  long lStack_388;
  undefined *puStack_380;
  undefined1 uStack_378;
  undefined8 uStack_370;
  long lStack_368;
  long *plStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  long lStack_328;
  long *plStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  long lStack_2e8;
  long *plStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar43 = param_2;
  _objc_retain();
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  _objc_retain(param_17);
  puStack_718 = param_18;
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  if (param_3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b26c8;
    func_0x00010c22b820();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_a8 = puVar3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    param_18 = puVar23;
    (**(code **)(param_20 + 0x10))(param_20,puVar23);
    goto LAB_104f21da4;
  }
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  puVar25 = puVar3;
  func_0x00010bf17b60();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar23 = PTR_PTR_1126b26d0;
  func_0x00010bf4b6a0();
  if ((param_7 != 0) && ((int)puVar23 != 0)) {
    puVar23 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf17b60();
    _objc_release(puVar23);
    puVar23 = param_3;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar23;
    func_0x00010c2a04a0();
    _objc_release(puVar23);
    if ((long)puVar1 < 0x43b981ab) {
      if (puVar1 == (undefined *)0xffffffffa7d67d05) {
        ppuVar21 = &PTR_PTR_110ade510;
        goto LAB_104f208b8;
      }
      if ((puVar1 == (undefined *)0x2f872b54) &&
         (uVar2 = param_5, func_0x00010c0d7400(), (uVar2 & 1) == 0)) {
        ppuVar21 = &PTR_PTR_110ade558;
        goto LAB_104f208b8;
      }
    }
    else {
      if (puVar1 == (undefined *)0x43b981ab) {
        ppuVar21 = &PTR_PTR_110ade508;
      }
      else {
        if (puVar1 != (undefined *)0x6dc1de7e) goto LAB_104f209a0;
        ppuVar21 = &PTR_PTR_110ade500;
      }
LAB_104f208b8:
      puVar23 = *ppuVar21;
      _objc_retain(puVar23);
      if (puVar23 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b26d8;
        func_0x00010bf978e0();
        _objc_retainAutoreleasedReturnValue();
        puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
        puStack_b0 = puVar1;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        puVar1 = PTR_PTR_1126b26e0;
        func_0x00010c07f020(param_5);
        func_0x00010c29b060(puVar1);
        _objc_retainAutoreleasedReturnValue();
        uVar27 = param_9;
        func_0x00010c269d40(param_9);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar27;
        func_0x00010bf41e60();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa160(puVar3);
        _objc_release(uVar4);
        _objc_release(uVar27);
        _objc_release(puVar1);
        _objc_release(puVar24);
        _objc_release(puVar23);
      }
    }
LAB_104f209a0:
    puVar23 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf941e0();
    _objc_release(puVar23);
  }
  puVar23 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar23);
  puVar23 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_3;
  func_0x00010bf308c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar24 = param_3;
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bf2fba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar1 != (undefined *)0x0) {
      puVar1 = param_3;
      func_0x00010bf2fba0();
      _objc_retainAutoreleasedReturnValue();
      puVar29 = puVar1;
      func_0x00010c0816c0();
      _objc_release(puVar1);
      if ((int)puVar29 != 0) {
        func_0x00010bf2fba0(param_3);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar23);
        goto LAB_104f20b40;
      }
    }
  }
  else {
    uStack_2b8 = 0;
    uStack_2c0 = 0;
    uStack_2c8 = 0;
    uStack_2d0 = 0;
    uStack_2d8 = 0;
    plStack_2e0 = (long *)0x0;
    lStack_2e8 = 0;
    uStack_2f0 = 0;
    func_0x00010bf308c0();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar24;
    func_0x00010bf52a60();
    if (puVar1 != (undefined *)0x0) {
      lVar28 = *plStack_2e0;
      do {
        puVar29 = (undefined *)0x0;
        do {
          if (*plStack_2e0 != lVar28) {
            _objc_enumerationMutation(puVar24);
          }
          iVar26 = (int)*(undefined8 *)(lStack_2e8 + (long)puVar29 * 8);
          func_0x00010c0816c0();
          if (iVar26 != 0) {
            func_0x00010befa120(puVar23);
          }
          puVar29 = puVar29 + 1;
        } while (puVar1 != puVar29);
        puVar1 = puVar24;
        func_0x00010bf52a60();
      } while (puVar1 != (undefined *)0x0);
    }
LAB_104f20b40:
    _objc_release(puVar24);
  }
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar1);
  puVar1 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puStack_6a8 = puVar1;
  func_0x00010bfc1340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar1 = puStack_6a8;
  func_0x00010bf529e0();
  if (puVar1 == (undefined *)0x0) {
    puVar1 = param_3;
    func_0x00010bfaebe0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar1;
    func_0x00010bfc1320();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    _objc_release(puVar1);
    puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
    if (puVar24 != (undefined *)0x0) {
      puVar24 = param_3;
      func_0x00010bfaebe0(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar29 = puVar24;
      func_0x00010bfc1320();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf0a100();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_6a8);
      _objc_release(puVar29);
      _objc_release(puVar24);
      puStack_6a8 = puVar1;
    }
  }
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  func_0x00010bf71e20();
  _objc_retainAutoreleasedReturnValue();
  lStack_328 = 0;
  uStack_330 = 0;
  uStack_318 = 0;
  plStack_320 = (long *)0x0;
  uStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  uStack_300 = 0;
  puVar24 = param_3;
  func_0x00010bfaebe0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar24;
  func_0x00010bfc1440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar24);
  puVar24 = puVar29;
  func_0x00010bf52a60();
  if (puVar24 != (undefined *)0x0) {
    lVar28 = *plStack_320;
    do {
      puVar31 = (undefined *)0x0;
      do {
        if (*plStack_320 != lVar28) {
          _objc_enumerationMutation(puVar29);
        }
        uVar27 = *(undefined8 *)(lStack_328 + (long)puVar31 * 8);
        func_0x00010bfe5e40(uVar27);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c220220(puVar1);
        _objc_release(uVar27);
        puVar31 = puVar31 + 1;
      } while (puVar24 != puVar31);
      puVar24 = puVar29;
      func_0x00010bf52a60();
    } while (puVar24 != (undefined *)0x0);
  }
  _objc_release(puVar29);
  puVar24 = puStack_6a8;
  func_0x00010bf529e0();
  do {
    puVar29 = puVar24;
    puVar24 = puVar29 + -1;
    if ((long)puVar24 < 0) break;
    puVar31 = puStack_6a8;
    func_0x00010c0dfd40(puStack_6a8);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar5;
    func_0x00010c06c000();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar22;
    func_0x00010bf1f3c0();
    _objc_release(puVar22);
    _objc_release(puVar5);
    _objc_release(puVar31);
  } while ((int)puVar6 == 0);
  puVar31 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if ((long)(puVar29 + -1) < 0) {
    lStack_6b0 = 0;
    uVar34 = (uint)((ulong)puVar24 >> 0x3f) ^ 1;
  }
  else {
    lStack_6b0 = 0;
    puVar24 = (undefined *)0x0;
    do {
      puVar22 = puStack_6a8;
      func_0x00010c0dfd40(puStack_6a8);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar1;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
      if (puVar6 != (undefined *)0x0) {
        func_0x00010befa120(puVar31);
        puVar22 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar5);
        _objc_release(puVar22);
        puVar22 = puVar6;
        func_0x00010c06c000();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar22;
        func_0x00010bf1f3c0();
        if (((ulong)puVar7 & 1) == 0) {
          _objc_release(puVar22);
          lStack_6b0 = lStack_6b0 + 1;
        }
        else {
          puVar7 = puVar6;
          func_0x00010c27dd80();
          _objc_retainAutoreleasedReturnValue();
          puVar8 = puVar7;
          func_0x00010b777420();
          _objc_release(puVar7);
          _objc_release(puVar22);
          lVar28 = 1;
          if (puVar8 == (undefined *)0xffffffffa970ec1f) {
            lVar28 = 2;
          }
          lStack_6b0 = lVar28 + lStack_6b0;
        }
      }
      _objc_release(puVar6);
      puVar24 = puVar24 + 1;
    } while (puVar29 != puVar24);
    uVar34 = 1;
  }
  puVar24 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar24);
  puVar24 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar24);
  uVar35 = 0;
  uVar36 = 0;
  uVar37 = 0;
  uVar38 = 0;
  uVar39 = 0;
  uVar40 = 0;
  uVar41 = 0;
  uVar42 = 0;
  uStack_338 = 0;
  uStack_340 = 0;
  uStack_348 = 0;
  uStack_350 = 0;
  uStack_358 = 0;
  plStack_360 = (long *)0x0;
  lStack_368 = 0;
  uStack_370 = 0;
  puVar24 = param_3;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  puVar29 = puVar24;
  func_0x00010bf52a60();
  if (puVar29 != (undefined *)0x0) {
    lVar28 = *plStack_360;
    do {
      puVar22 = (undefined *)0x0;
      do {
        if (*plStack_360 != lVar28) {
          _objc_enumerationMutation(puVar24);
        }
        uVar32 = *(ulong *)(lStack_368 + (long)puVar22 * 8);
        uVar2 = uVar32;
        func_0x00010c06c000();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uVar2;
        func_0x00010bf1f3c0();
        if ((uVar9 & 1) == 0) {
          _objc_release(uVar2);
        }
        else {
          func_0x00010c081660();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar32;
          func_0x00010bf1f3c0();
          _objc_release(uVar32);
          _objc_release(uVar2);
          if ((int)uVar9 == 0) {
            uVar34 = 1;
            goto LAB_104f2108c;
          }
        }
        puVar22 = puVar22 + 1;
      } while (puVar29 != puVar22);
      puVar29 = puVar24;
      func_0x00010bf52a60();
    } while (puVar29 != (undefined *)0x0);
  }
LAB_104f2108c:
  _objc_release(puVar24);
  puVar24 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_opt_new();
  if (uVar34 != 0) {
    puVar29 = param_3;
    func_0x00010c2553e0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
    func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar29;
    func_0x00010bfaea40();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    _objc_release(puVar22);
    _objc_release(puVar29);
    puVar24 = puVar6;
  }
  puVar29 = puVar24;
  func_0x00010bf529e0();
  puVar29 = puVar29 + lStack_6b0;
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar29;
  if (0 < (long)puVar29) {
    do {
      puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6);
      _objc_release(puVar8);
      puVar8 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar7);
      _objc_release(puVar8);
      puVar22 = puVar22 + -1;
    } while (puVar22 != (undefined *)0x0);
  }
  puVar22 = param_3;
  func_0x00010c2553e0();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar22;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar22);
  puVar11 = puVar10;
  func_0x00010bf09f80();
  _objc_retainAutoreleasedReturnValue();
  puVar22 = puVar10;
  func_0x00010bf529e0();
  puVar8 = puVar23;
  func_0x00010bf529e0();
  puVar12 = param_3;
  func_0x00010bf11400();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = puVar12;
  func_0x00010c0fb860();
  _objc_retainAutoreleasedReturnValue();
  puVar33 = puVar13;
  func_0x00010bf529e0();
  puVar22 = puVar8 + (long)puVar33 + (long)puVar22;
  _objc_release(puVar13);
  _objc_release(puVar12);
  puVar8 = puVar22;
  if (0 < (long)puVar22) {
    do {
      puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar7);
      _objc_release(puVar12);
      puVar12 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar6);
      _objc_release(puVar12);
      puVar8 = puVar8 + -1;
    } while (puVar8 != (undefined *)0x0);
  }
  puVar8 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar8);
  puVar8 = puVar3;
  func_0x00010bf529e0();
  if (puVar8 == (undefined *)0x0) {
    puVar8 = PTR_PTR_1126b26c8;
    func_0x00010c22b820(PTR_PTR_1126b26c8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar3);
    _objc_release(puVar8);
  }
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_3d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_3c8 = 0xc2000000;
  pcStack_3c0 = FUN_104f21eb0;
  puStack_3b8 = &UNK_11085b660;
  uStack_378 = param_15;
  _objc_retain(puVar3);
  puStack_3b0 = puVar3;
  _objc_retain(puVar7);
  puStack_3a8 = puVar7;
  _objc_retain(puVar6);
  puStack_3a0 = puVar6;
  _objc_retain(param_3);
  puStack_398 = param_3;
  _objc_retain(param_5);
  uStack_390 = param_5;
  puStack_380 = puVar25;
  _objc_retain(param_20);
  lStack_388 = param_20;
  ppuVar21 = &puStack_3d0;
  _objc_retainBlock();
  ppuVar14 = ppuVar21;
  _dispatch_group_create();
  puVar25 = puVar23;
  func_0x00010bf529e0();
  if (puVar25 != (undefined *)0x0) {
    puVar12 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar13 = puVar12;
    func_0x00010bf17b60();
    _objc_release(puVar12);
    uVar4 = param_10;
    func_0x00010c269d40(param_10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0efd80();
    uVar27 = CONCAT17(uVar42,CONCAT16(uVar41,CONCAT15(uVar40,CONCAT14(uVar39,CONCAT13(uVar38,
                                                  CONCAT12(uVar37,CONCAT11(uVar36,uVar35)))))));
    uVar44 = uVar43;
    _objc_release(uVar4);
    _dispatch_group_enter(ppuVar14);
    ppuVar15 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    ppuVar16 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    uVar35 = 0;
    uVar36 = 0;
    uVar37 = 0;
    uVar38 = 0;
    uVar39 = 0;
    uVar40 = 0;
    uVar41 = 0;
    uVar42 = 0;
    lStack_408 = 0;
    uStack_410 = 0;
    uStack_3f8 = 0;
    plStack_400 = (long *)0x0;
    uStack_3e8 = 0;
    uStack_3f0 = 0;
    uStack_3d8 = 0;
    uStack_3e0 = 0;
    _objc_retain(puVar23);
    puVar12 = puVar23;
    func_0x00010bf52a60();
    if (puVar12 != (undefined *)0x0) {
      lVar28 = *plStack_400;
      do {
        puVar33 = (undefined *)0x0;
        do {
          if (*plStack_400 != lVar28) {
            _objc_enumerationMutation(puVar23);
          }
          lVar30 = *(long *)(lStack_408 + (long)puVar33 * 8);
          lVar17 = lVar30;
          func_0x00010bf8b600();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          ppuVar18 = ppuVar16;
          if (lVar17 == 0) {
            lVar17 = lVar30;
            func_0x00010bf303a0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release();
            if (lVar17 == 0) {
              func_0x00010c27dde0(lVar30);
              func_0x000108e267b4();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x00010bf303a0();
              _objc_retainAutoreleasedReturnValue();
              ppuVar18 = ppuVar15;
            }
          }
          else {
            func_0x000108e0e67c(lVar30,0);
            _objc_retainAutoreleasedReturnValue();
          }
          func_0x00010befa120(ppuVar18);
          _objc_release(lVar30);
          puVar33 = puVar33 + 1;
        } while (puVar12 != puVar33);
        puVar12 = puVar23;
        func_0x00010bf52a60();
      } while (puVar12 != (undefined *)0x0);
    }
    _objc_release(puVar23);
    puStack_498 = puVar8;
    uStack_490 = 0xc2000000;
    pcStack_488 = FUN_104f222b8;
    puStack_480 = &UNK_11085b780;
    uStack_438 = uVar27;
    uStack_430 = uVar43;
    _objc_retain(param_19);
    uStack_478 = param_19;
    uStack_420 = param_2;
    _objc_retain(param_5);
    uStack_470 = param_5;
    _objc_retain(param_12);
    uStack_468 = param_12;
    _objc_retain(param_11);
    uStack_460 = param_11;
    _objc_retain(param_3);
    puStack_458 = param_3;
    _objc_retain(puVar6);
    puStack_450 = puVar6;
    _objc_retain(puVar7);
    puStack_448 = puVar7;
    puStack_418 = puVar13;
    _objc_retain(ppuVar14);
    ppuVar18 = &puStack_498;
    ppuStack_440 = ppuVar14;
    _objc_retainBlock();
    ppuVar19 = ppuVar16;
    func_0x00010bf529e0();
    if (ppuVar19 == (undefined **)0x0) {
      ppuVar19 = ppuVar15;
      func_0x00010bf529e0();
      uVar43 = uVar44;
      if (ppuVar19 != (undefined **)0x0) {
        ppuVar19 = ppuVar15;
        func_0x00010bf51e00(ppuVar15);
        ppuVar20 = ppuVar19;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar19);
        puStack_508 = puVar8;
        uStack_500 = 0xc2000000;
        uStack_4f8 = 0x104f22c64;
        puStack_4f0 = &UNK_11085b7b0;
        _objc_retain(ppuVar18);
        ppuStack_4e0 = ppuVar18;
        _objc_retain(puVar23);
        puStack_4e8 = puVar23;
        puStack_4d8 = puVar22;
        func_0x00010c09b380(param_13);
        _objc_release(puStack_4e8);
        _objc_release(ppuStack_4e0);
        goto LAB_104f217b4;
      }
    }
    else {
      ppuVar19 = ppuVar16;
      func_0x00010bf51e00(ppuVar16);
      puStack_4d0 = puVar8;
      uStack_4c8 = 0xc2000000;
      uStack_4c0 = 0x104f22c1c;
      puStack_4b8 = &UNK_11085b7b0;
      _objc_retain(ppuVar18);
      ppuStack_4a8 = ppuVar18;
      _objc_retain(puVar23);
      puStack_4b0 = puVar23;
      puStack_4a0 = puVar22;
      func_0x00010c09b380(param_12);
      _objc_release(ppuVar19);
      _objc_release(puStack_4b0);
      ppuVar20 = ppuStack_4a8;
LAB_104f217b4:
      _objc_release(ppuVar20);
      uVar43 = uVar44;
    }
    _objc_release(ppuVar18);
    _objc_release(ppuStack_440);
    _objc_release(puStack_448);
    _objc_release(puStack_450);
    _objc_release(puStack_458);
    _objc_release(uStack_460);
    _objc_release(uStack_468);
    _objc_release(uStack_470);
    _objc_release(uStack_478);
    _objc_release(ppuVar16);
    _objc_release(ppuVar15);
  }
  puVar12 = puVar11;
  func_0x00010bf529e0();
  if (puVar12 != (undefined *)0x0) {
    puVar13 = PTR_PTR_1126ae4e8;
    func_0x00010c22b6a0();
    _objc_retainAutoreleasedReturnValue();
    puVar33 = puVar13;
    func_0x00010bf17b60();
    _objc_release(puVar13);
    puStack_598 = puVar8;
    uStack_590 = 0xc2000000;
    uStack_588 = 0x104f22cac;
    puStack_580 = &UNK_11085b870;
    _objc_retain(ppuVar14);
    ppuStack_578 = ppuVar14;
    _objc_retain(param_14);
    uStack_570 = param_14;
    _objc_retain(param_19);
    uStack_568 = param_19;
    _objc_retain(param_3);
    puStack_560 = param_3;
    _objc_retain(param_11);
    uStack_558 = param_11;
    _objc_retain(puVar7);
    puStack_550 = puVar7;
    _objc_retain(puVar23);
    puStack_548 = puVar23;
    _objc_retain(param_5);
    uStack_540 = param_5;
    uStack_518 = param_8;
    _objc_retain(puVar6);
    puStack_538 = puVar6;
    puStack_510 = puVar33;
    _objc_retain(param_17);
    uStack_530 = param_17;
    _objc_retain(param_4);
    uStack_528 = param_4;
    _objc_retain(param_6);
    uStack_520 = param_6;
    func_0x00010bf97e80(puVar11);
    _objc_release(uStack_520);
    _objc_release(uStack_528);
    _objc_release(uStack_530);
    _objc_release(puStack_538);
    _objc_release(uStack_540);
    _objc_release(puStack_548);
    _objc_release(puStack_550);
    _objc_release(uStack_558);
    _objc_release(puStack_560);
    _objc_release(uStack_568);
    _objc_release(uStack_570);
    _objc_release(ppuStack_578);
  }
  puVar13 = param_3;
  func_0x00010bf11400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar13 != (undefined *)0x0) {
    _dispatch_group_enter(ppuVar14);
    uVar27 = param_10;
    func_0x00010c269d40(param_10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0efd80();
    _objc_release(uVar27);
    puVar33 = param_3;
    func_0x00010bf11400(param_3);
    _objc_retainAutoreleasedReturnValue();
    puStack_5f8 = puVar8;
    uStack_5f0 = 0xc2000000;
    pcStack_5e8 = FUN_104f237dc;
    puStack_5e0 = &UNK_11085b8a0;
    uStack_5b0 = CONCAT17(uVar42,CONCAT16(uVar41,CONCAT15(uVar40,CONCAT14(uVar39,CONCAT13(uVar38,
                                                  CONCAT12(uVar37,CONCAT11(uVar36,uVar35)))))));
    uStack_5a8 = uVar43;
    _objc_retain(param_11);
    uStack_5d8 = param_11;
    puStack_5a0 = puVar22;
    _objc_retain(param_3);
    puStack_5d0 = param_3;
    _objc_retain(puVar7);
    puStack_5c8 = puVar7;
    _objc_retain(puVar6);
    puStack_5c0 = puVar6;
    _objc_retain(ppuVar14);
    ppuStack_5b8 = ppuVar14;
    func_0x00010808ad8c(puVar33,&puStack_5f8);
    _objc_release(puVar33);
    _objc_release(ppuStack_5b8);
    _objc_release(puStack_5c0);
    _objc_release(puStack_5c8);
    _objc_release(puStack_5d0);
    _objc_release(uStack_5d8);
  }
  puVar33 = puVar31;
  func_0x00010bf529e0();
  if (puVar33 == (undefined *)0x0) {
    if (param_18 != (undefined *)0x0 ||
        (puVar13 != (undefined *)0x0 || (puVar12 != (undefined *)0x0 || puVar25 != (undefined *)0x0)
        )) goto LAB_104f21cdc;
    (*(code *)ppuVar21[2])(ppuVar21);
    puStack_718 = (undefined *)0x0;
  }
  else {
    ppuVar15 = ppuVar14;
    _dispatch_group_enter();
    _dispatch_group_create();
    puVar25 = puVar31;
    func_0x00010bf529e0();
    if (puVar25 != (undefined *)0x0) {
      puVar25 = (undefined *)0x0;
      do {
        puVar12 = puVar31;
        func_0x00010c0dfd40();
        _objc_retainAutoreleasedReturnValue();
        puVar13 = puVar12;
        func_0x000108d3ee18();
        _objc_retainAutoreleasedReturnValue();
        if (puVar13 != (undefined *)0x0) {
          _dispatch_group_enter(ppuVar15);
          puStack_678 = puVar8;
          uStack_670 = 0xc2000000;
          pcStack_668 = FUN_104f23984;
          puStack_660 = &UNK_11085b930;
          _objc_retain(puVar13);
          puStack_658 = puVar13;
          _objc_retain(param_6);
          uStack_650 = param_6;
          _objc_retain(puVar12);
          puStack_648 = puVar12;
          _objc_retain(ppuVar15);
          lStack_608 = lStack_6b0;
          ppuStack_640 = ppuVar15;
          puStack_618 = puVar29;
          puStack_610 = puVar22;
          _objc_retain(puVar5);
          uStack_600 = SUB84(puVar25,0);
          puStack_638 = puVar5;
          _objc_retain(puVar6);
          puStack_630 = puVar6;
          _objc_retain(puVar7);
          puStack_628 = puVar7;
          _objc_retain(param_5);
          uStack_620 = param_5;
          func_0x000100162d98("APPSTORE",&puStack_678);
          _objc_release(uStack_620);
          _objc_release(puStack_628);
          _objc_release(puStack_630);
          _objc_release(puStack_638);
          _objc_release(ppuStack_640);
          _objc_release(puStack_648);
          _objc_release(uStack_650);
          _objc_release(puStack_658);
        }
        _objc_release(puVar13);
        _objc_release(puVar12);
        puVar25 = puVar25 + 1;
        puVar12 = puVar31;
        func_0x00010bf529e0();
      } while (puVar25 < puVar12);
    }
    puStack_6a0 = puVar8;
    uStack_698 = 0xc2000000;
    uStack_690 = 0x104f23dd0;
    puStack_688 = &UNK_110842e18;
    _objc_retain(ppuVar14);
    ppuStack_680 = ppuVar14;
    func_0x000100bc0718(ppuVar15,PTR___dispatch_main_q_11034be20,&puStack_6a0);
    _objc_release(ppuStack_680);
    _objc_release(ppuVar15);
LAB_104f21cdc:
    puVar25 = PTR___dispatch_main_q_11034be20;
    if (param_18 == (undefined *)0x0) {
      _objc_retain(PTR___dispatch_main_q_11034be20);
      puStack_718 = puVar25;
    }
    param_18 = puStack_718;
    func_0x000100bc0718(ppuVar14,puStack_718,ppuVar21);
  }
  _objc_release(ppuVar14);
  _objc_release(ppuVar21);
  _objc_release(lStack_388);
  _objc_release(uStack_390);
  _objc_release(puStack_398);
  _objc_release(puStack_3a0);
  _objc_release(puStack_3a8);
  _objc_release(puStack_3b0);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar24);
  _objc_release(puVar5);
  _objc_release(puVar31);
  _objc_release(puVar1);
  _objc_release(puStack_6a8);
LAB_104f21da4:
  _objc_release(puVar23);
  _objc_release(puVar3);
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(puStack_718);
  _objc_release(param_17);
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return param_3;
  }
  ___stack_chk_fail();
  func_0x00010c0816c0(param_18);
  return (undefined *)(ulong)((uint)param_18 ^ 1);
}



/* Entry: 104f21e8c; end: 104f21ea7;  */

uint FUN_104f21e8c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0816c0(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 104f21ea8; end: 104f21eaf;  */

void FUN_104f21ea8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0816d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_isTrackingValue_1125fdfc0);
  return;
}



/* Entry: 104f21eb0; end: 104f221ef;  */

undefined * FUN_104f21eb0(float param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  float fVar9;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  if (*(char *)(param_2 + 0x58) == '\x01') {
    puVar2 = PTR_PTR_1126b26e8;
    _objc_alloc(PTR_PTR_1126b26e8);
    func_0x00010bfffdc0();
    func_0x00010c14c720(puVar1);
    _objc_release(puVar2);
  }
  else {
    func_0x00010befa160(puVar1);
  }
  uVar8 = *(undefined8 *)(param_2 + 0x28);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfae5e0(uVar8);
  _objc_release(puVar2);
  uVar8 = *(undefined8 *)(param_2 + 0x30);
  puVar2 = PTR__OBJC_CLASS___NSPredicate_1126b06d0;
  func_0x00010c1063a0(PTR__OBJC_CLASS___NSPredicate_1126b06d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfae5e0(uVar8);
  _objc_release(puVar2);
  lVar3 = *(long *)(param_2 + 0x30);
  func_0x00010bf529e0();
  if (lVar3 == 0) {
    lVar3 = *(long *)(param_2 + 0x28);
    func_0x00010bf529e0();
    if (lVar3 == 0) goto LAB_104f220b4;
  }
  puVar2 = PTR_PTR_1126b26d0;
  func_0x00010c07cac0();
  func_0x00010c14c240(PTR_PTR_1126b26d0);
  fVar9 = -param_1;
  if ((int)puVar2 == 0) {
    fVar9 = param_1;
  }
  puVar2 = PTR_PTR_1126b26f0;
  _objc_alloc(PTR_PTR_1126b26f0);
  uVar4 = *(undefined8 *)(param_2 + 0x40);
  func_0x00010bf5c9c0(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar4;
  func_0x00010c130740();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01d120((double)fVar9,puVar2);
  func_0x00010c14c720(puVar1);
  _objc_release(puVar2);
  _objc_release(uVar8);
  _objc_release(uVar4);
LAB_104f220b4:
  puVar2 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar2);
  puVar2 = puVar1;
  func_0x00010bf529e0();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = puVar1;
    (**(code **)(*(long *)(param_2 + 0x48) + 0x10))(*(long *)(param_2 + 0x48),puVar1);
  }
  else {
    lVar3 = *(long *)(param_2 + 0x48);
    if (*(char *)(param_2 + 0x58) == '\x01') {
      puVar5 = puVar1;
      func_0x00010bf51e00();
      puVar2 = puVar5;
      (**(code **)(lVar3 + 0x10))(lVar3,puVar5);
    }
    else {
      puVar5 = PTR_PTR_1126b26e8;
      _objc_alloc();
      func_0x00010bfffdc0();
      puVar6 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar6;
      (**(code **)(lVar3 + 0x10))(lVar3,puVar6);
      _objc_release(puVar6);
    }
    _objc_release(puVar5);
  }
  puVar5 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar5);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_retain(puVar2);
  func_0x00010c0ddbe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(puVar1);
  return (undefined *)(ulong)(puVar2 != puVar1);
}



/* Entry: 104f221f0; end: 104f222b7;  */

bool FUN_104f221f0(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
  _objc_retain(param_2);
  func_0x00010c0ddbe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(puVar1);
  return param_2 != puVar1;
}



/* Entry: 104f222b8; end: 104f2248b;  */

void FUN_104f222b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puStack_e8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_104f2248c;
  puStack_d0 = &UNK_11085b750;
  uStack_68 = *(undefined8 *)(param_1 + 0x68);
  uStack_70 = *(undefined8 *)(param_1 + 0x60);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uStack_c8 = param_2;
  _objc_retain(uVar4);
  uStack_58 = *(undefined8 *)(param_1 + 0x78);
  uStack_60 = *(undefined8 *)(param_1 + 0x70);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uStack_c0 = uVar4;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_b8 = uVar5;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uStack_b0 = uVar4;
  puStack_a8 = puVar1;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_a0 = uVar5;
  puStack_98 = puVar2;
  uStack_50 = param_3;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uStack_90 = uVar4;
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uStack_88 = uVar5;
  _objc_retain(uVar3);
  uStack_48 = *(undefined8 *)(param_1 + 0x80);
  uVar4 = *(undefined8 *)(param_1 + 0x58);
  uStack_80 = uVar3;
  _objc_retain(uVar4);
  uStack_78 = uVar4;
  _objc_retain(puVar2);
  _objc_retain(puVar1);
  _objc_retain(param_2);
  func_0x000100162d98("APPSTORE",&puStack_e8);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(puStack_98);
  _objc_release(uStack_a0);
  _objc_release(puStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 104f2248c; end: 104f226e3;  */

void FUN_104f2248c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_140;
  undefined8 uStack_138;
  code *pcStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = param_1;
  _dispatch_group_create();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_104f226e4;
  puStack_c0 = &UNK_11085b6c0;
  uStack_78 = *(undefined8 *)(param_1 + 0x80);
  uStack_80 = *(undefined8 *)(param_1 + 0x78);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  lStack_b8 = lVar2;
  _objc_retain(uVar5);
  uStack_68 = *(undefined8 *)(param_1 + 0x90);
  uStack_70 = *(undefined8 *)(param_1 + 0x88);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uStack_b0 = uVar5;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  uStack_a8 = uVar4;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_a0 = uVar5;
  _objc_retain(uVar4);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uStack_98 = uVar4;
  _objc_retain(uVar5);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uStack_90 = uVar5;
  _objc_retain(uVar4);
  uStack_88 = uVar4;
  _objc_retain(lVar2);
  func_0x00010bf97e80(uVar3);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_140 = puVar1;
  uStack_138 = 0xc2000000;
  pcStack_130 = FUN_104f22a48;
  puStack_128 = &UNK_11085b720;
  uStack_e8 = *(undefined8 *)(param_1 + 0x98);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  uStack_120 = uVar4;
  _objc_retain(uVar6);
  uVar4 = *(undefined8 *)(param_1 + 0x40);
  uStack_118 = uVar6;
  _objc_retain(uVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x60);
  uStack_110 = uVar4;
  _objc_retain(uVar6);
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  uStack_108 = uVar6;
  _objc_retain(uVar4);
  uVar6 = *(undefined8 *)(param_1 + 0x50);
  uStack_100 = uVar4;
  _objc_retain(uVar6);
  uStack_e0 = *(undefined8 *)(param_1 + 0xa0);
  uVar4 = *(undefined8 *)(param_1 + 0x70);
  uStack_f8 = uVar6;
  _objc_retain(uVar4);
  uStack_f0 = uVar4;
  func_0x000100bc0718(lVar2,uVar5,&puStack_140);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_100);
  _objc_release(uStack_108);
  _objc_release(uStack_110);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  _objc_release(uStack_88);
  _objc_release(uStack_90);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(lStack_b8);
  _objc_release(lVar2);
  return;
}



/* Entry: 104f226e4; end: 104f2290b;  */

void FUN_104f226e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined *param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  _objc_retain(param_6);
  _dispatch_group_enter(*(undefined8 *)(param_5 + 0x20));
  puVar1 = param_6;
  func_0x000108e380fc(param_6,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = *(undefined8 *)(param_5 + 0x58);
  uVar9 = *(undefined8 *)(param_5 + 0x60);
  func_0x000100841590(uVar8,uVar9);
  lVar2 = *(long *)(param_5 + 0x28);
  if (lVar2 != 0) {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR_PTR_1126ae558;
    if (lVar2 != 0) {
      uVar8 = *(undefined8 *)(param_5 + 0x28);
      func_0x00010c0e00e0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfe9ca0(puVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      goto LAB_104f227f0;
    }
  }
  uVar5 = *(undefined8 *)(param_5 + 0x30);
  func_0x00010c07f020(uVar5);
  puVar3 = puVar1;
  func_0x000108e23d30(*(undefined8 *)(param_5 + 0x68),*(undefined8 *)(param_5 + 0x70),uVar8,uVar9,
                      param_3,param_4,puVar1,uVar5,*(undefined8 *)(param_5 + 0x38));
  _objc_retainAutoreleasedReturnValue();
LAB_104f227f0:
  uVar9 = *(undefined8 *)(param_5 + 0x40);
  _objc_retain(uVar9);
  uVar5 = *(undefined8 *)(param_5 + 0x48);
  _objc_retain(uVar5);
  uVar6 = *(undefined8 *)(param_5 + 0x50);
  _objc_retain(uVar6);
  uVar7 = *(undefined8 *)(param_5 + 0x28);
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_5 + 0x20);
  _objc_retain(uVar8);
  puVar4 = param_6;
  _objc_retain(param_6);
  func_0x000100078e94();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(puVar3);
  _objc_release(puVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(param_6);
  _objc_release(uVar5);
  _objc_release(uVar9);
  _objc_release(param_6);
  _objc_release(puVar3);
  _objc_release(puVar1);
  return;
}



/* Entry: 104f2290c; end: 104f22a47;  */

void FUN_104f2290c(double param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    func_0x00010befa120(*(undefined8 *)(param_2 + 0x20));
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    func_0x000109174614(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010c0d9160(uVar1);
    _objc_release(uVar2);
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(param_2 + 0x38);
    puVar4 = PTR_PTR_1126b26f8;
    _objc_alloc(PTR_PTR_1126b26f8);
    func_0x00010c23d0a0(param_3);
    dVar6 = *(double *)(param_2 + 0x50);
    param_1 = param_1 / dVar6;
    func_0x00010c23d0a0(param_3);
    func_0x00010c01cea0(param_1,dVar6 / *(double *)(param_2 + 0x58),puVar4);
    func_0x00010befa120(uVar1);
    _objc_release(puVar4);
    lVar5 = *(long *)(param_2 + 0x40);
    if (lVar5 != 0) {
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (lVar5 == 0) {
        func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x40));
      }
    }
    _objc_release(uVar3);
  }
  _dispatch_group_leave(*(undefined8 *)(param_2 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f22a48; end: 104f22b93;  */

void FUN_104f22a48(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  lVar9 = *(long *)(param_1 + 0x58);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010bf529e0();
  lVar3 = *(long *)(param_1 + 0x28);
  func_0x00010bf11400();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0fb860();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010bf529e0();
  _objc_release(lVar4);
  _objc_release(lVar3);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_104f22b94;
  puStack_70 = &UNK_11085b6f0;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar8);
  uVar7 = *(undefined8 *)(param_1 + 0x30);
  uStack_68 = uVar8;
  lStack_48 = (lVar9 - lVar2) - lVar5;
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = uVar7;
  _objc_retain(uVar8);
  uVar7 = *(undefined8 *)(param_1 + 0x48);
  uStack_58 = uVar8;
  _objc_retain(uVar7);
  uStack_50 = uVar7;
  func_0x00010bf97e80(uVar1,param_2,&puStack_88);
  puVar6 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar6);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x50));
  _objc_release(uStack_50);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uStack_68);
  return;
}



/* Entry: 104f22b94; end: 104f22e77;  */

void FUN_104f22b94(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c0dfd40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x20),param_2,uVar1,
                      *(long *)(param_1 + 0x40) + param_3);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c0dfd40(uVar1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d04c0(*(undefined8 *)(param_1 + 0x30),param_2,uVar1,
                      *(long *)(param_1 + 0x40) + param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f22e78; end: 104f23453;  */

void FUN_104f22e78(double param_1,long param_2)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_100;
  undefined8 uStack_f8;
  code *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined **ppuStack_d0;
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
  
  ppuVar1 = *(undefined ***)(param_2 + 0x20);
  func_0x00010c2542a0();
  _objc_retainAutoreleasedReturnValue();
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  pcStack_f0 = FUN_104f23454;
  puStack_e8 = &UNK_11085b7e0;
  uVar16 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(uVar16);
  uVar17 = *(undefined8 *)(param_2 + 0x30);
  uStack_e0 = uVar16;
  _objc_retain(uVar17);
  uVar16 = *(undefined8 *)(param_2 + 0x38);
  uStack_d8 = uVar17;
  ppuStack_d0 = ppuVar1;
  _objc_retain(uVar16);
  uVar17 = *(undefined8 *)(param_2 + 0x40);
  uStack_c8 = uVar16;
  _objc_retain(uVar17);
  uStack_90 = *(undefined8 *)(param_2 + 0x88);
  uVar16 = *(undefined8 *)(param_2 + 0x48);
  uStack_c0 = uVar17;
  _objc_retain(uVar16);
  uVar17 = *(undefined8 *)(param_2 + 0x50);
  uStack_b8 = uVar16;
  _objc_retain(uVar17);
  uVar16 = *(undefined8 *)(param_2 + 0x58);
  uStack_b0 = uVar17;
  _objc_retain(uVar16);
  uStack_88 = *(undefined8 *)(param_2 + 0x90);
  uVar17 = *(undefined8 *)(param_2 + 0x60);
  uStack_a8 = uVar16;
  _objc_retain(uVar17);
  uStack_80 = *(undefined8 *)(param_2 + 0x98);
  uVar16 = *(undefined8 *)(param_2 + 0x68);
  uStack_a0 = uVar17;
  _objc_retain(uVar16);
  ppuVar2 = &puStack_100;
  uStack_98 = uVar16;
  _objc_retainBlock();
  lVar3 = *(long *)(param_2 + 0x28);
  if (lVar3 != 0) {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 != 0) {
      ppuVar4 = *(undefined ***)(param_2 + 0x28);
      func_0x00010c0e00e0(ppuVar4);
      _objc_retainAutoreleasedReturnValue();
      (*(code *)ppuVar2[2])(ppuVar2,ppuVar4);
      goto LAB_104f23370;
    }
  }
  ppuVar4 = *(undefined ***)(param_2 + 0x20);
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010c087020();
  _objc_retainAutoreleasedReturnValue();
  ppuVar7 = ppuVar5;
  func_0x00010c077a60();
  if (((ulong)ppuVar7 & 1) == 0) {
    ppuVar7 = ppuVar1;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar6 = ppuVar7;
    func_0x00010c06f740();
    _objc_release(ppuVar7);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
    if ((int)ppuVar6 != 0) {
      ppuVar5 = ppuVar1;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar16 = *(undefined8 *)(param_2 + 0x38);
      func_0x00010bfaebe0(uVar16);
      _objc_retainAutoreleasedReturnValue();
      uVar17 = uVar16;
      func_0x00010bfedce0();
      _objc_retainAutoreleasedReturnValue();
      ppuVar4 = ppuVar5;
      func_0x00010bf5cd00();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar17);
      _objc_release(uVar16);
      _objc_release(ppuVar5);
      ppuVar7 = *(undefined ***)(param_2 + 0x20);
      func_0x00010bf5d860();
      _objc_retainAutoreleasedReturnValue();
      ppuVar5 = ppuVar7;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar7);
      if ((ppuVar4 != (undefined **)0x0) &&
         (ppuVar7 = ppuVar5, func_0x00010bf2d360(), (int)ppuVar7 != 0)) {
        ppuVar7 = ppuVar1;
        func_0x00010c269d40(ppuVar1);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        uVar16 = *(undefined8 *)(param_2 + 0x58);
        func_0x00010c240600(uVar16);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        func_0x00010c0df720(param_1 * 1000.0,puVar8);
        _objc_retainAutoreleasedReturnValue();
        ppuVar6 = ppuVar7;
        func_0x00010c10f5a0(ppuVar7);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar8);
        _objc_release(uVar16);
        _objc_release(ppuVar7);
        ppuVar7 = ppuVar1;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar7;
        func_0x00010c06c020();
        _objc_release(ppuVar7);
        if ((int)ppuVar9 == 0) {
          _objc_retain(ppuVar2);
          func_0x00010bfe92a0(ppuVar4);
        }
        else {
          _objc_retain(ppuVar2);
          func_0x00010bf03680(ppuVar4);
        }
        _objc_release(ppuVar2);
        _objc_release(ppuVar6);
        _objc_release(ppuVar5);
        goto LAB_104f23370;
      }
      goto LAB_104f2300c;
    }
  }
  else {
LAB_104f2300c:
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
  }
  uVar10 = *(ulong *)(param_2 + 0x20);
  func_0x00010bf5aea0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar10;
  func_0x00010c087020();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c077a60();
  if ((uVar12 & 1) == 0) {
    lVar3 = *(long *)(param_2 + 0x30);
    func_0x00010c27dde0();
    if (lVar3 != 0x3cedc99) {
      func_0x00010c27dde0(*(undefined8 *)(param_2 + 0x30));
    }
  }
  _objc_release(uVar11);
  _objc_release(uVar10);
  puVar8 = PTR_PTR_1126b2710;
  uVar17 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c23fae0(uVar17);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c2437a0(uVar13);
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_2 + 0x58);
  func_0x00010c0c9a40(uVar14);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bfaebe0(uVar15);
  _objc_retainAutoreleasedReturnValue();
  uVar16 = uVar15;
  func_0x00010bfedce0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar2);
  func_0x00010bfe7ba0(puVar8);
  _objc_release(uVar16);
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(uVar13);
  _objc_release(uVar17);
  ppuVar4 = ppuVar2;
LAB_104f23370:
  _objc_release(ppuVar4);
  _objc_release(ppuVar2);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uStack_c0);
  _objc_release(uStack_c8);
  _objc_release(uStack_d8);
  _objc_release(uStack_e0);
  _objc_release(ppuVar1);
  return;
}



/* Entry: 104f23454; end: 104f237b7;  */

void FUN_104f23454(double param_1,undefined8 param_2,long param_3,long param_4)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  
  _objc_retain(param_4);
  if (param_4 == 0) goto LAB_104f23768;
  lVar2 = *(long *)(param_3 + 0x20);
  if (lVar2 != 0) {
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      func_0x00010c1d0640(*(undefined8 *)(param_3 + 0x20));
    }
  }
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf17b60();
  _objc_release(puVar3);
  uVar4 = *(undefined8 *)(param_3 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar4;
  func_0x00010c06f740();
  _objc_release(uVar4);
  if ((int)uVar7 == 0) {
    uVar7 = *(undefined8 *)(param_3 + 0x28);
    func_0x00010914e1b4(uVar7,0,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    uVar5 = *(undefined8 *)(param_3 + 0x30);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = *(undefined8 *)(param_3 + 0x38);
    func_0x00010bfaebe0(uVar6);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar6;
    func_0x00010bfedce0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar5;
    func_0x00010c255020(uVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar6);
    _objc_release(uVar5);
  }
  iVar1 = (int)*(undefined8 *)(param_3 + 0x28);
  func_0x00010c0816c0();
  if (iVar1 == 0) {
    func_0x00010bf529e0(*(undefined8 *)(param_3 + 0x50));
    func_0x00010c2433e0(*(undefined8 *)(param_3 + 0x58));
    dVar12 = 0.0;
    if (param_1 != 0.0) {
      if (*(long *)(param_3 + 0x78) == 1) {
        fVar9 = 40.0;
      }
      else {
        if (*(long *)(param_3 + 0x78) != 2) goto LAB_104f2368c;
        fVar9 = -40.0;
      }
      func_0x00010c2433e0(*(undefined8 *)(param_3 + 0x58));
      fVar10 = (float)param_1;
      param_1 = (double)(ulong)(uint)(fVar9 / fVar10);
      dVar12 = (double)(fVar9 / fVar10);
    }
LAB_104f2368c:
    func_0x00010bf345e0(uVar7);
    dVar12 = dVar12 + param_1;
    func_0x00010bf345e0(uVar7);
    puVar3 = PTR_PTR_1126b2700;
    _objc_alloc(PTR_PTR_1126b2700);
    func_0x00010c14e120(uVar7);
    dVar11 = param_1;
    func_0x00010c141a80(uVar7);
    func_0x00010c055500(dVar12,param_2,param_1,dVar11,puVar3);
    puVar8 = PTR_PTR_1126b2708;
    _objc_alloc(PTR_PTR_1126b2708);
    func_0x00010c1281e0(uVar7);
    func_0x00010c01ce60(puVar8);
  }
  else {
    puVar8 = *(undefined **)(param_3 + 0x40);
    func_0x00010c269d40(puVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = *(undefined8 *)(param_3 + 0x28);
    func_0x000109174740(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar8;
    func_0x00010c0d9160(puVar8);
    _objc_release(uVar4);
    _objc_release(puVar8);
    puVar8 = PTR_PTR_1126b26f8;
    _objc_alloc(PTR_PTR_1126b26f8);
    func_0x00010c1281e0(uVar7);
    func_0x00010c01cea0(puVar8);
  }
  func_0x00010c1d04c0(*(undefined8 *)(param_3 + 0x48));
  _objc_release(puVar8);
  _objc_release(puVar3);
  func_0x00010c1d04c0(*(undefined8 *)(param_3 + 0x60));
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar3);
  _objc_release(uVar7);
LAB_104f23768:
  puVar3 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf941e0();
  _objc_release(puVar3);
  _dispatch_group_leave(*(undefined8 *)(param_3 + 0x68));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f237b8; end: 104f237db;  */

void FUN_104f237b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000104f237c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 104f237dc; end: 104f23983;  */

void FUN_104f237dc(double param_1,double param_2,long param_3,ulong param_4,undefined8 param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar7 = param_4;
  func_0x00010bf529e0();
  if (uVar7 != 0) {
    uVar7 = 0;
    do {
      uVar1 = param_4;
      func_0x00010c0dfd40(param_4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = param_5;
      func_0x00010c0dfd40(param_5);
      _objc_retainAutoreleasedReturnValue();
      dVar8 = *(double *)(param_3 + 0x48);
      dVar9 = *(double *)(param_3 + 0x50);
      func_0x00010c23d0a0(uVar1);
      param_1 = param_1 / dVar8;
      func_0x00010c23d0a0(uVar1);
      uVar3 = *(undefined8 *)(param_3 + 0x20);
      param_2 = param_2 / dVar9;
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0d9160();
      _objc_release(uVar3);
      uVar5 = *(undefined8 *)(param_3 + 0x28);
      func_0x00010bf11400(uVar5);
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c0fb860();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(uVar3);
      _objc_release(uVar5);
      puVar6 = PTR_PTR_1126b26f8;
      _objc_alloc(PTR_PTR_1126b26f8);
      func_0x00010c01cea0(param_1,param_2);
      func_0x00010c1d04c0(*(undefined8 *)(param_3 + 0x30));
      _objc_release(puVar6);
      func_0x00010c1d04c0(*(undefined8 *)(param_3 + 0x38));
      _objc_release(uVar4);
      _objc_release(uVar2);
      _objc_release(uVar1);
      uVar7 = uVar7 + 1;
      uVar1 = param_4;
      func_0x00010bf529e0();
    } while (uVar7 < uVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_3 + 0x40));
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f23984; end: 104f23b63;  */

void FUN_104f23984(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = PTR_PTR_1126b2718;
  _objc_alloc();
  func_0x00010c0044c0();
  puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(param_3 + 0x30);
  _objc_retain(lVar3);
  uVar7 = *(undefined8 *)(param_3 + 0x38);
  _objc_retain(uVar7);
  uVar12 = *(undefined8 *)(param_3 + 0x60);
  uVar8 = *(undefined8 *)(param_3 + 0x40);
  _objc_retain(uVar8);
  uVar9 = *(undefined8 *)(param_3 + 0x48);
  _objc_retain(uVar9);
  uVar10 = *(undefined8 *)(param_3 + 0x50);
  _objc_retain(uVar10);
  uVar11 = *(undefined8 *)(param_3 + 0x58);
  _objc_retain(uVar11);
  uVar5 = *(undefined8 *)(param_3 + 0x38);
  _objc_retain(uVar5);
  func_0x00010bfa7640(puVar6);
  _objc_release(puVar2);
  _objc_release(puVar6);
  _objc_release(uVar5);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(param_4);
  lVar4 = param_4;
  func_0x00010bfe7300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar4 != 0) {
    uVar7 = *(undefined8 *)(lVar3 + 0x20);
    func_0x00010c06c000();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar7;
    func_0x00010bf1f3c0();
    ppuVar1 = &PTR_PTR_1126b2720;
    if ((int)uVar5 == 0) {
      ppuVar1 = &PTR__OBJC_CLASS___UIImage_1126aea68;
    }
    puVar6 = *ppuVar1;
    lVar4 = param_4;
    func_0x00010bfe7300(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar4);
    _objc_release(uVar7);
    if (puVar6 != (undefined *)0x0) {
      uVar5 = *(undefined8 *)(lVar3 + 0x30);
      func_0x00010c0dfd40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2827c0();
      _objc_release(uVar5);
      func_0x00010c1d04c0(*(undefined8 *)(lVar3 + 0x38));
      func_0x00010c2433e0(*(undefined8 *)(lVar3 + 0x48));
      uVar8 = *(undefined8 *)(lVar3 + 0x20);
      uVar5 = uVar12;
      uVar7 = param_2;
      func_0x00010c23d0a0(puVar6);
      func_0x000108d3fb68(uVar12,param_2,uVar5,uVar7,uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d04c0(*(undefined8 *)(lVar3 + 0x40));
      _objc_release(uVar8);
      lVar4 = param_4;
      func_0x00010bf8ba20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
      if (lVar4 != 0) {
        lVar4 = param_4;
        func_0x00010bf8ba20(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14d040(puVar2);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar4);
        func_0x00010c1d04c0(*(undefined8 *)(lVar3 + 0x38));
        func_0x00010c2433e0(*(undefined8 *)(lVar3 + 0x48));
        uVar8 = *(undefined8 *)(lVar3 + 0x20);
        uVar5 = uVar12;
        uVar7 = param_2;
        func_0x00010c23d0a0(puVar2);
        func_0x000108d3fb68(uVar12,param_2,uVar5,uVar7,uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d04c0(*(undefined8 *)(lVar3 + 0x40));
        _objc_release(uVar8);
        _objc_release(puVar2);
      }
      _dispatch_group_leave(*(undefined8 *)(lVar3 + 0x28));
      _objc_release(puVar6);
      goto LAB_104f23da0;
    }
  }
  _dispatch_group_leave(*(undefined8 *)(lVar3 + 0x28));
LAB_104f23da0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f23b64; end: 104f23dbb;  */

void FUN_104f23b64(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bfe7300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c06c000();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    ppuVar1 = &PTR_PTR_1126b2720;
    if ((int)uVar4 == 0) {
      ppuVar1 = &PTR__OBJC_CLASS___UIImage_1126aea68;
    }
    puVar6 = *ppuVar1;
    lVar2 = param_4;
    func_0x00010bfe7300(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c14d040();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(uVar3);
    if (puVar6 != (undefined *)0x0) {
      uVar4 = *(undefined8 *)(param_3 + 0x30);
      func_0x00010c0dfd40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c2827c0();
      _objc_release(uVar4);
      func_0x00010c1d04c0(*(undefined8 *)(param_3 + 0x38));
      func_0x00010c2433e0(*(undefined8 *)(param_3 + 0x48));
      uVar7 = *(undefined8 *)(param_3 + 0x20);
      uVar4 = param_1;
      uVar3 = param_2;
      func_0x00010c23d0a0(puVar6);
      func_0x000108d3fb68(param_1,param_2,uVar4,uVar3,uVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d04c0(*(undefined8 *)(param_3 + 0x40));
      _objc_release(uVar7);
      lVar2 = param_4;
      func_0x00010bf8ba20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      puVar5 = PTR__OBJC_CLASS___UIImage_1126aea68;
      if (lVar2 != 0) {
        lVar2 = param_4;
        func_0x00010bf8ba20(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c14d040(puVar5);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        func_0x00010c1d04c0(*(undefined8 *)(param_3 + 0x38));
        func_0x00010c2433e0(*(undefined8 *)(param_3 + 0x48));
        uVar7 = *(undefined8 *)(param_3 + 0x20);
        uVar4 = param_1;
        uVar3 = param_2;
        func_0x00010c23d0a0(puVar5);
        func_0x000108d3fb68(param_1,param_2,uVar4,uVar3,uVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d04c0(*(undefined8 *)(param_3 + 0x40));
        _objc_release(uVar7);
        _objc_release(puVar5);
      }
      _dispatch_group_leave(*(undefined8 *)(param_3 + 0x28));
      _objc_release(puVar6);
      goto LAB_104f23da0;
    }
  }
  _dispatch_group_leave(*(undefined8 *)(param_3 + 0x28));
LAB_104f23da0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 104f23dbc; end: 104f23dd7;  */

void FUN_104f23dbc(long param_1,int param_2,uint param_3)

{
  if (((param_3 & 1) == 0) && (param_2 != 0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 104f23dd8; end: 104f2413f; -[SCMemoriesTrackingImageProcessCommandScopeEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f23dd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
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
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  ulong uVar26;
  
  if (param_3 == 0) {
    uVar26 = 0;
  }
  else {
    uVar26 = param_3 + _DAT_11271718c;
    _objc_loadWeakRetained();
  }
  puVar1 = PTR_PTR_1126ae810;
  _objc_opt_new();
  uVar25 = *(undefined8 *)(param_3 + _DAT_112717188);
  *(undefined **)(param_3 + _DAT_112717188) = puVar1;
  _objc_release(uVar25);
  uVar2 = uVar26;
  func_0x00010c0ef4a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar26;
  func_0x00010c253d80();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar26;
  func_0x00010c241660();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0ef080(uVar26);
  lVar5 = param_3;
  FUN_104f24140();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar26;
  func_0x00010bfebc40();
  uVar8 = uVar26;
  func_0x00010c2495e0();
  lVar9 = param_3 + _DAT_1127171a8;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf69900();
  _objc_retainAutoreleasedReturnValue();
  lVar11 = param_3 + _DAT_112717194;
  _objc_loadWeakRetained();
  lVar12 = lVar11;
  func_0x00010c119b40();
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_3 + _DAT_112717198;
  _objc_loadWeakRetained();
  lVar14 = lVar13;
  func_0x00010c26a1c0();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_3 + _DAT_1127171a0;
  _objc_loadWeakRetained();
  lVar16 = lVar15;
  func_0x00010bf2fe40();
  _objc_retainAutoreleasedReturnValue();
  lVar17 = lVar16;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar17;
  func_0x00010bf2ff00();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_3;
  FUN_104f24140();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = lVar19;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  lVar21 = lVar20;
  func_0x00010bf30560();
  _objc_retainAutoreleasedReturnValue();
  param_3 = param_3 + _DAT_1127171a4;
  _objc_loadWeakRetained();
  uVar22 = uVar26;
  func_0x00010c270100();
  uVar23 = uVar26;
  func_0x00010bf44140();
  _objc_retainAutoreleasedReturnValue();
  uVar24 = uVar26;
  func_0x00010bfe6f20();
  _objc_retainAutoreleasedReturnValue();
  FUN_104f205fc(param_1,param_2,uVar2,uVar3,uVar4,lVar6,uVar7 & 0xffffffff,uVar8,lVar10,lVar12,
                lVar14,lVar18,lVar21,param_3,(char)uVar22);
  _objc_release(uVar24);
  _objc_release(uVar23);
  _objc_release(param_3);
  _objc_release(lVar21);
  _objc_release(lVar20);
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
  _objc_release(lVar9);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar26);
  return;
}



/* Entry: 104f24140; end: 104f24163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f24140(long param_1)

{
  if (param_1 != 0) {
    _objc_loadWeakRetained(param_1 + _DAT_112717190);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 104f24164; end: 104f241e7;  */

void FUN_104f24164(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf43fe0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_release(param_2);
  _objc_release(lVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c150940(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf77040();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 104f241e8; end: 104f24277; -[SCMemoriesTrackingImageProcessCommandScopeEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_104f241e8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127171a8);
  _objc_destroyWeak(param_1 + _DAT_1127171a4);
  _objc_destroyWeak(param_1 + _DAT_1127171a0);
  _objc_destroyWeak(param_1 + _DAT_11271719c);
  _objc_destroyWeak(param_1 + _DAT_112717198);
  _objc_destroyWeak(param_1 + _DAT_112717194);
  _objc_destroyWeak(param_1 + _DAT_112717190);
  _objc_destroyWeak(param_1 + _DAT_11271718c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112717188,0);
  return;
}



/* Entry: 104f24278; end: 104f2438b; -[SCMemoriesWidgetDataModel initWithCoder:] */

undefined1 * FUN_104f24278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e5098;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f2438c; end: 104f2449f; -[SCMemoriesWidgetDataModel initWithTitle:subtitle:thumbnailData:isFeaturedStorySnap:snapId:] */

undefined1 *
FUN_104f2438c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126e5098;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f244a0; end: 104f244c3; -[SCMemoriesWidgetDataModel copyWithZone:] */

undefined8 FUN_104f244a0(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 104f244c4; end: 104f2455f; -[SCMemoriesWidgetDataModel encodeWithCoder:] */

void FUN_104f244c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110dbb078);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110dbb098);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x20),
                      &PTR____CFConstantStringClassReference_110dbb0b8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 8),
                      &PTR____CFConstantStringClassReference_110dbb0d8);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x28),
                      &PTR____CFConstantStringClassReference_110dbb0f8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 104f24560; end: 104f245ef; -[SCMemoriesWidgetDataModel hash] */

undefined8 * FUN_104f24560(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_104f246b0:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_104f246bc;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(char *)((long)puVar3 + 8) == param_3[8])) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_104f246bc;
            }
            goto LAB_104f246b0;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_104f246bc:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 104f245f0; end: 104f246d7; -[SCMemoriesWidgetDataModel isEqual:] */

long FUN_104f245f0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_104f246b0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_104f246bc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(char *)(param_1 + 8) == *(char *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_104f246bc;
            }
            goto LAB_104f246b0;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_104f246bc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 104f246d8; end: 104f246df; -[SCMemoriesWidgetDataModel title] */

undefined8 FUN_104f246d8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 104f246e0; end: 104f246e7; -[SCMemoriesWidgetDataModel subtitle] */

undefined8 FUN_104f246e0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 104f246e8; end: 104f246ef; -[SCMemoriesWidgetDataModel thumbnailData] */

undefined8 FUN_104f246e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 104f246f0; end: 104f246f7; -[SCMemoriesWidgetDataModel isFeaturedStorySnap] */

undefined1 FUN_104f246f0(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 104f246f8; end: 104f246ff; -[SCMemoriesWidgetDataModel snapId] */

undefined8 FUN_104f246f8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 104f24700; end: 104f24747; -[SCMemoriesWidgetDataModel .cxx_destruct] */

void FUN_104f24700(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 104f24748; end: 104f2489b; -[SCOurChatActionHandler initWithChatCustomizationHubScopeExposer:chatCustomizationHubScopeServices:conversationIdResolver:participantInfo:plusServices:nativeSessionManager:] */

undefined1 *
FUN_104f24748(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126e50a0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    _objc_release(uVar2);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 104f2489c; end: 104f24a17; -[SCOurChatActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_104f2489c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
             undefined8 param_5)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  if ((int)uVar2 == 0) {
    uVar1 = param_4;
    func_0x00010bfe5ec0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c0720c0();
    _objc_release(uVar1);
    if ((int)uVar2 == 0) {
      uVar1 = param_4;
      func_0x00010bfe5ec0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010c0720c0();
      _objc_release(uVar1);
      if ((int)uVar2 == 0) {
        param_1 = 0;
      }
      else {
        uVar2 = param_4;
        func_0x00010beee2e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        _objc_opt_class(PTR__OBJC_CLASS___NSNumber_1126ae570);
        uVar4 = uVar2;
        _objc_opt_isKindOfClass(uVar2,puVar3);
        uVar1 = uVar2;
        if ((uVar4 & 1) == 0) {
          uVar1 = 0;
        }
        _objc_retain(uVar1);
        _objc_release(uVar2);
        func_0x00010be2a680(param_1);
        _objc_release(uVar1);
      }
      goto LAB_104f24950;
    }
  }
  func_0x00010be31e00(param_1);
LAB_104f24950:
  _objc_release(param_5);
  _objc_release(param_4);
  return param_1;
}



/* Entry: 104f24a18; end: 104f24cc3; -[SCOurChatActionHandler _handleGroupStoryConsentToggle:sourceView:] */

undefined1 * FUN_104f24a18(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 *puVar11;
  undefined **unaff_x27;
  undefined **unaff_x28;
  undefined *puStack_138;
  undefined8 uStack_130;
  code *pcStack_128;
  undefined *puStack_120;
  undefined1 auStack_118 [8];
  ulong uStack_110;
  long lStack_108;
  undefined1 *puStack_100;
  code *pcStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  long lStack_d0;
  undefined **ppuStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar3 = PTR_PTR_1126b2728;
  if (param_3 != 0) {
    _objc_retain(param_4);
    _objc_opt_class(puVar3);
    uVar4 = param_4;
    _objc_opt_isKindOfClass(param_4,puVar3);
    uVar1 = param_4;
    if ((uVar4 & 1) == 0) {
      uVar1 = 0;
    }
    _objc_retain(uVar1);
    _objc_release(param_4);
    _objc_initWeak(auStack_88,uVar1);
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_104f24cc4;
    puStack_98 = &UNK_1108434b0;
    unaff_x27 = &puStack_b0;
    _objc_copyWeak(auStack_90,auStack_88);
    ppuVar5 = &puStack_b0;
    _objc_retainBlock();
    uVar6 = *(undefined8 *)(param_1 + 0x20);
    FUN_104f25694();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_b8,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar8 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_80 = uVar6;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = 0x19;
    _dispatch_get_global_queue(0x19,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_f0 = puVar3;
    uStack_e8 = 0xc2000000;
    pcStack_e0 = FUN_104f24d80;
    puStack_d8 = &UNK_11085b960;
    _objc_copyWeak(auStack_c0,auStack_b8);
    _objc_retain(param_3);
    lStack_d0 = param_3;
    _objc_retain(ppuVar5);
    ppuStack_c8 = ppuVar5;
    func_0x00010bf504e0(uVar7);
    _objc_release(uVar9);
    _objc_release(puVar8);
    _objc_release(uVar7);
    _objc_release(ppuStack_c8);
    _objc_release(lStack_d0);
    _objc_destroyWeak(auStack_c0);
    _objc_destroyWeak(auStack_b8);
    _objc_release(uVar6);
    _objc_release(ppuVar5);
    _objc_destroyWeak(auStack_90);
    _objc_destroyWeak(auStack_88);
    _objc_release(uVar1);
    unaff_x28 = &puStack_f0;
  }
  bVar2 = param_3 != 0;
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
    return (undefined1 *)(ulong)bVar2;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x28 + 0x30));
  _objc_destroyWeak(auStack_b8);
  _objc_destroyWeak(unaff_x27 + 4);
  _objc_destroyWeak(auStack_88);
  lVar10 = param_3;
  __Unwind_Resume(param_3);
  pcStack_f8 = FUN_104f24cc4;
  puStack_138 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_130 = 0xc2000000;
  pcStack_128 = FUN_104f24d54;
  puStack_120 = &UNK_1108434b0;
  uStack_110 = param_4;
  lStack_108 = param_3;
  puStack_100 = &stack0xfffffffffffffff0;
  _objc_copyWeak(auStack_118,lVar10 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_138);
  puVar11 = auStack_118;
  _objc_destroyWeak(puVar11);
  return puVar11;
}



/* Entry: 104f24cc4; end: 104f24d53;  */

void FUN_104f24cc4(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_104f24d54;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 104f24d54; end: 104f24d7f;  */

void FUN_104f24d54(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010c1402e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 104f24d80; end: 104f24e0b;  */

void FUN_104f24d80(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bf1f3c0(*(undefined8 *)(param_1 + 0x20));
  uVar2 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010bed8fc0(lVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 104f24e0c; end: 104f24f6b; -[SCOurChatActionHandler _updateGroupStoryConsent:conversationId:revertToggle:] */

void FUN_104f24e0c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_4 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126b0cd8;
    func_0x00010bdc35c0(PTR_PTR_1126b0cd8,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bfc7e20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if ((puVar4 == (undefined *)0x0) || (lVar2 == 0)) {
    (**(code **)(param_5 + 0x10))(param_5);
  }
  else {
    puVar3 = PTR_PTR_1126b2730;
    _objc_alloc(PTR_PTR_1126b2730);
    puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_60 = 0xc2000000;
    uStack_58 = 0x104f24f70;
    puStack_50 = &UNK_110852668;
    _objc_retain(param_5);
    lStack_48 = param_5;
    func_0x00010c04f4c0(puVar3,param_2,&PTR___NSConcreteGlobalBlock_11085b990,&puStack_68);
    func_0x00010c286360(lVar2,param_2,puVar4,param_3,puVar3);
    _objc_release(puVar3);
    _objc_release(lStack_48);
  }
  _objc_release(lVar2);
  _objc_release(puVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 104f24f6c; end: 104f24f7b;  */

void FUN_104f24f6c(void)

{
  return;
}



/* Entry: 104f24f7c; end: 104f25103; -[SCOurChatActionHandler _handleTapWithEntryFeature:] */

long FUN_104f24f7c(long param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 auStack_68 [8];
  undefined4 uStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010be59a80();
  lVar1 = *(long *)(param_1 + 0x20);
  FUN_104f25694();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lStack_50 = lVar1;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  puVar5 = auStack_58;
  _objc_copyWeak(auStack_68,puVar5);
  uStack_60 = param_3;
  func_0x00010bf504e0(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return 1;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  __Unwind_Resume();
  _objc_retain(puVar5);
  lVar1 = lVar1 + 0x20;
  _objc_loadWeakRetained(lVar1);
  puVar4 = puVar5;
  func_0x00010bfb1920(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  func_0x00010be7a860(lVar1);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return lVar1;
}



/* Entry: 104f25104; end: 104f25177;  */

void FUN_104f25104(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010bfb1920(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be7a860(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


