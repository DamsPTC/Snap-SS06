/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a1e3e8; end: 105a1e45b; -[SCStoryCustomTTLSettingManager updateTimestampForCustomStoryPublicationId:] */

void FUN_105a1e3e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  _CACurrentMediaTime();
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x50));
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be9a050. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__saveTTLAndTimeForPublicationId_1125841b0);
  return;
}



/* Entry: 105a1e45c; end: 105a1e4cf; -[SCStoryCustomTTLSettingManager updateTimestampForBusinessStoryId:] */

void FUN_105a1e45c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  _objc_retain(param_3);
  _CACurrentMediaTime();
  func_0x00010c0df720(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x58));
  _objc_release(param_3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010be9a090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__saveTTLAndTimeforBusinessStory_1125841c0);
  return;
}



/* Entry: 105a1e4d0; end: 105a1e533; -[SCStoryCustomTTLSettingManager _saveTTLAndTimeForType:] */

void FUN_105a1e4d0(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  undefined *puVar2;
  
  if (param_3 < 3) {
    puVar2 = (&PTR_PTR_1108ce2d0)[param_3];
    lVar1 = param_1 + param_3 * 8;
    func_0x00010c1add40(*(undefined8 *)(param_1 + 0x60),param_2,*(undefined8 *)(lVar1 + 0x10),
                        (&PTR_PTR_1108ce2b8)[param_3]);
                    /* WARNING: Could not recover jumptable at 0x00010c191030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(param_1 + 0x60),
               PTR_s_setDouble_forKey__112641e28,puVar2);
    return;
  }
  return;
}



/* Entry: 105a1e534; end: 105a1e573; -[SCStoryCustomTTLSettingManager _saveTTLAndTimeForPublicationId] */

/* WARNING: Possible PIC construction at 0x000105a1e554: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105a1e558) */

void FUN_105a1e534(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_setObject_forKey__112651b80,
             *(undefined8 *)(param_1 + 0x40),&PTR____CFConstantStringClassReference_110e17718);
  return;
}



/* Entry: 105a1e574; end: 105a1e5af; -[SCStoryCustomTTLSettingManager _saveTTLAndTimeforBusinessStory] */

/* WARNING: Possible PIC construction at 0x000105a1e594: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000105a1e598) */

void FUN_105a1e574(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1d0570. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x60),PTR_s_setObject_forKey__112651b80,
             *(undefined8 *)(param_1 + 0x48),&PTR____CFConstantStringClassReference_110e17738);
  return;
}



/* Entry: 105a1e5b0; end: 105a1e82b; -[SCStoryCustomTTLSettingManager _loadCustomTTLs] */

void FUN_105a1e5b0(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c067f80(uVar1,param_3,&PTR____CFConstantStringClassReference_110e17658);
  *(undefined8 *)(param_2 + 0x10) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c067f80(uVar1,param_3,&PTR____CFConstantStringClassReference_110e17678);
  *(undefined8 *)(param_2 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  func_0x00010c067f80(uVar1,param_3,&PTR____CFConstantStringClassReference_110e17698);
  *(undefined8 *)(param_2 + 0x20) = uVar1;
  func_0x00010bf88360(*(undefined8 *)(param_2 + 0x60),param_3,
                      &PTR____CFConstantStringClassReference_110e176b8);
  if (param_1 == 0.0) {
    _CACurrentMediaTime();
  }
  *(double *)(param_2 + 0x28) = param_1;
  func_0x00010bf88360(*(undefined8 *)(param_2 + 0x60),param_3,
                      &PTR____CFConstantStringClassReference_110e176d8);
  if (param_1 == 0.0) {
    _CACurrentMediaTime();
  }
  *(double *)(param_2 + 0x30) = param_1;
  func_0x00010bf88360(*(undefined8 *)(param_2 + 0x60),param_3,
                      &PTR____CFConstantStringClassReference_110e176f8);
  if (param_1 == 0.0) {
    _CACurrentMediaTime();
  }
  *(double *)(param_2 + 0x38) = param_1;
  lVar2 = *(long *)(param_2 + 0x60);
  func_0x00010c0dff20(lVar2,param_3,&PTR____CFConstantStringClassReference_110e17718);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d3c80();
  if (lVar3 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    *(undefined **)(param_2 + 0x40) = puVar4;
  }
  else {
    _objc_retain(lVar3);
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    *(long *)(param_2 + 0x40) = lVar3;
  }
  _objc_release(uVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = *(long *)(param_2 + 0x60);
  func_0x00010c0dff20(lVar2,param_3,&PTR____CFConstantStringClassReference_110e17738);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d3c80();
  if (lVar3 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    *(undefined **)(param_2 + 0x48) = puVar4;
  }
  else {
    _objc_retain(lVar3);
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    *(long *)(param_2 + 0x48) = lVar3;
  }
  _objc_release(uVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = *(long *)(param_2 + 0x60);
  func_0x00010c0dff20(lVar2,param_3,&PTR____CFConstantStringClassReference_110e17758);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d3c80();
  if (lVar3 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    *(undefined **)(param_2 + 0x50) = puVar4;
  }
  else {
    _objc_retain(lVar3);
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    *(long *)(param_2 + 0x50) = lVar3;
  }
  _objc_release(uVar1);
  _objc_release(lVar3);
  _objc_release(lVar2);
  lVar2 = *(long *)(param_2 + 0x60);
  func_0x00010c0dff20(lVar2,param_3,&PTR____CFConstantStringClassReference_110e17778);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0d3c80();
  if (lVar3 == 0) {
    puVar4 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_2 + 0x58);
    *(undefined **)(param_2 + 0x58) = puVar4;
  }
  else {
    _objc_retain(lVar3);
    uVar1 = *(undefined8 *)(param_2 + 0x58);
    *(long *)(param_2 + 0x58) = lVar3;
  }
  _objc_release(uVar1);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 105a1e82c; end: 105a1ebb7; -[SCStoryCustomTTLSettingManager _resetIfNeeded] */

void FUN_105a1e82c(double param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  double dVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f380();
  if (param_1 <= 86400.0) {
    _objc_release(puVar3);
  }
  else {
    bVar1 = *(byte *)(param_2 + 0xc);
    _objc_release(puVar3);
    if ((bVar1 & 1) == 0) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      func_0x00010c12adc0(*(undefined8 *)(param_2 + 0x40));
      puVar3 = *(undefined **)(param_2 + 0x48);
      func_0x00010c12adc0(puVar3);
    }
  }
  if (*(char *)(param_2 + 0xc) == '\x01') {
    _CACurrentMediaTime();
    if (86400.0 < param_1 - *(double *)(param_2 + 0x28)) {
      *(undefined8 *)(param_2 + 0x10) = 0;
      func_0x00010be9a060(param_2);
    }
    if (86400.0 < param_1 - *(double *)(param_2 + 0x30)) {
      *(undefined8 *)(param_2 + 0x18) = 0;
      func_0x00010be9a060(param_2);
    }
    if (86400.0 < param_1 - *(double *)(param_2 + 0x38)) {
      *(undefined8 *)(param_2 + 0x20) = 0;
      func_0x00010be9a060(param_2);
    }
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    dVar11 = 0.0;
    lVar9 = *(long *)(param_2 + 0x50);
    _objc_retain(lVar9);
    lVar4 = lVar9;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar9);
        }
        uVar5 = *(undefined8 *)(param_2 + 0x50);
        func_0x00010c0e00e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(uVar5);
        dVar11 = param_1 - dVar11;
        if (86400.0 < dVar11) {
          func_0x00010befa120(puVar3);
        }
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
    puVar6 = puVar3;
    func_0x00010bf529e0();
    if (puVar6 != (undefined *)0x0) {
      func_0x00010c12d4a0(*(undefined8 *)(param_2 + 0x40));
      func_0x00010c12d4a0(*(undefined8 *)(param_2 + 0x50));
      func_0x00010be9a040(param_2);
    }
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00();
    _objc_retainAutoreleasedReturnValue();
    dVar11 = 0.0;
    lVar9 = *(long *)(param_2 + 0x58);
    _objc_retain(lVar9);
    lVar4 = lVar9;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar9);
        }
        uVar5 = *(undefined8 *)(param_2 + 0x58);
        func_0x00010c0e00e0(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bf885a0();
        _objc_release(uVar5);
        dVar11 = param_1 - dVar11;
        if (86400.0 < dVar11) {
          func_0x00010befa120(puVar6);
        }
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
      lVar4 = lVar9;
      func_0x00010bf52a60();
    }
    _objc_release(lVar9);
    puVar7 = puVar6;
    func_0x00010bf529e0();
    if (puVar7 != (undefined *)0x0) {
      func_0x00010c12d4a0(*(undefined8 *)(param_2 + 0x48));
      func_0x00010c12d4a0(*(undefined8 *)(param_2 + 0x58));
      func_0x00010be9a080(param_2);
    }
    _objc_release(puVar6);
    _objc_release(puVar3);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar3 + 0x68,0);
  _objc_storeStrong(puVar3 + 0x60,0);
  _objc_storeStrong(puVar3 + 0x58,0);
  _objc_storeStrong(puVar3 + 0x50,0);
  _objc_storeStrong(puVar3 + 0x48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(puVar3 + 0x40,0);
  return;
}



/* Entry: 105a1ebb8; end: 105a1ec17; -[SCStoryCustomTTLSettingManager .cxx_destruct] */

void FUN_105a1ebb8(long param_1)

{
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x40,0);
  return;
}



/* Entry: 105a1ec18; end: 105a1ef53; -[SCStoryPrivacySettingManager initWithStoryPrivacyProvider:snapchattersDataFetcher:snapchattersDataMutator:snapchattersDataTracker:friendStorySettingMutator:circumstanceEngine:storiesBlizzardLogger:docObjectContext:userPreferences:] */

undefined8 *
FUN_105a1ec18(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  puStack_68 = PTR_PTR_1126eb580;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[5];
    puVar1[5] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[1];
    puVar1[1] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[2];
    puVar1[2] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[3];
    puVar1[3] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[0xe];
    puVar1[0xe] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_8;
    _objc_release(uVar2);
    uVar2 = puVar1[3];
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[4];
    puVar1[4] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[6];
    puVar1[6] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_11;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    *(undefined1 *)(puVar1 + 0xb) = 0;
    puVar3 = PTR_PTR_1126c13e8;
    _objc_alloc_init();
    uVar2 = puVar1[0x10];
    puVar1[0x10] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_78,puVar1);
    uVar2 = puVar1[10];
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c0f7fc0(uVar2);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
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



/* Entry: 105a1ef54; end: 105a1ef7f;  */

void FUN_105a1ef54(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010beaa4c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a1ef80; end: 105a1f0ff; -[SCStoryPrivacySettingManager _setup] */

void FUN_105a1ef80(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  FUN_105a1f100(uVar2);
  func_0x00010c0df780(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1);
  _objc_release(puVar3);
  _objc_initWeak(auStack_48,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar4;
  func_0x00010c28d760();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar5 = uVar1;
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  return;
}



/* Entry: 105a1f100; end: 105a1f203;  */

undefined8 FUN_105a1f100(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 3;
  func_0x00010c0c0f00(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105a1f204; end: 105a1f273;  */

void FUN_105a1f204(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  uVar1 = param_2;
  func_0x00010c0ec5e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010be6c500(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a1f274; end: 105a1f327; -[SCStoryPrivacySettingManager _setupLocalStoryPrivacyWithInitialStoryPrivacy:] */

void FUN_105a1f274(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x0001084e7da8();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  _objc_release(uVar3);
  _objc_release(uVar1);
  if (*(long *)(param_1 + 0x38) == 0) {
    puVar2 = PTR_PTR_1126c13f0;
    _objc_alloc();
    uVar4 = param_3;
    FUN_105a1f328(param_3);
    func_0x00010c055880(puVar2,param_2,uVar4);
    uVar4 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar2;
    _objc_release(uVar4);
    func_0x00010beddea0(param_1,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a1f328; end: 105a1f427;  */

undefined8 FUN_105a1f328(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0f00(param_1);
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_1);
  return uVar1;
}



/* Entry: 105a1f428; end: 105a1f4ab; -[SCStoryPrivacySettingManager _onUserStoryPrivacy:] */

void FUN_105a1f428(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  func_0x00010beddea0(param_1,param_2,param_3);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = param_3;
  FUN_105a1f100(param_3);
  _objc_release(param_3);
  func_0x00010c0df780(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a1f4ac; end: 105a1f4b3; -[SCStoryPrivacySettingManager storyPrivacySettingObserverable] */

void FUN_105a1f4ac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf870b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_distinctUntilChanged_1125bf5d0);
  return;
}



/* Entry: 105a1f4b4; end: 105a1f5df; -[SCStoryPrivacySettingManager storyPrivacySetting] */

undefined8 FUN_105a1f4b4(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    uStack_40 = 0;
    uStack_30 = 0x2020000000;
    uStack_28 = 3;
    puStack_38 = &uStack_40;
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105a1f5e0;
    puStack_60 = &UNK_110850308;
    puStack_58 = &uStack_40;
    _objc_copyWeak(auStack_50,auStack_48);
    func_0x00010006eaa4(uVar2,&puStack_78);
    _objc_release(uVar2);
    uVar2 = puStack_38[3];
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    __Block_object_dispose(&uStack_40,8);
  }
  else {
    func_0x00010c27dd80();
    if (lVar1 - 1U < 3) {
      uVar2 = *(undefined8 *)(&UNK_10ddc9648 + (lVar1 - 1U) * 8);
    }
    else {
      uVar2 = 3;
    }
  }
  return uVar2;
}



/* Entry: 105a1f5e0; end: 105a1f61b;  */

void FUN_105a1f5e0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bdf72a0();
  *(long *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a1f61c; end: 105a1f74b; -[SCStoryPrivacySettingManager updateStoryPrivacyWithUpdateRequest:completionQueue:completion:] */

void FUN_105a1f61c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a1f74c; end: 105a1f783;  */

void FUN_105a1f74c(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee1060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a1f784; end: 105a1f7e3; -[SCStoryPrivacySettingManager _currentStoryPrivacyEnum] */

undefined8 FUN_105a1f784(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  FUN_105a1f100();
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar3;
}



/* Entry: 105a1f7e4; end: 105a1fb1f; -[SCStoryPrivacySettingManager _updateStoryPrivacyWithUpdateRequest:completionQueue:completion:] */

void FUN_105a1f7e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_100 [8];
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (*(char *)(param_1 + 0x58) == '\x01') {
    if ((param_4 == 0) || (param_5 == 0)) goto LAB_105a1fabc;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_105a1fb20;
    puStack_88 = &UNK_110849530;
    _objc_retain(param_5);
    lStack_80 = param_5;
    func_0x00010007380c(param_4,&puStack_a0);
    lVar2 = lStack_80;
  }
  else {
    *(undefined1 *)(param_1 + 0x58) = 1;
    lVar1 = *(long *)(param_1 + 0x28);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf60aa0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    uVar4 = *(undefined8 *)(param_1 + 8);
    _objc_retain(uVar4);
    uVar5 = *(undefined8 *)(param_1 + 0x70);
    _objc_retain(uVar5);
    uVar3 = *(undefined8 *)(param_1 + 0x50);
    func_0x00010c11de00();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_a8,param_1);
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_105a1fb30;
    puStack_e0 = &UNK_11086e698;
    _objc_retain(uVar4);
    uStack_d8 = uVar4;
    uStack_d0 = uVar3;
    _objc_copyWeak(auStack_b0,auStack_a8);
    _objc_retain(lVar2);
    lStack_c8 = lVar2;
    _objc_retain(param_4);
    lStack_c0 = param_4;
    _objc_retain(param_5);
    lStack_b8 = param_5;
    _objc_retain(uVar4);
    _objc_copyWeak(auStack_100,auStack_a8);
    _objc_retain(lVar2);
    _objc_retain(param_4);
    _objc_retain(param_5);
    _objc_retain(uVar5);
    _objc_retain(lVar2);
    _objc_retain(param_4);
    _objc_retain(param_5);
    func_0x00010c0bdb20(param_3);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(lVar2);
    _objc_release(uVar5);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_100);
    _objc_release(uVar4);
    _objc_release(lStack_b8);
    _objc_release(lStack_c0);
    _objc_release(lStack_c8);
    _objc_destroyWeak(auStack_b0);
    _objc_release(uStack_d8);
    _objc_destroyWeak(auStack_a8);
    _objc_release(uVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
  }
  _objc_release(lVar2);
LAB_105a1fabc:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a1fb20; end: 105a1fb2f;  */

void FUN_105a1fb20(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105a1fb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 105a1fb30; end: 105a1fc33;  */

void FUN_105a1fb30(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar2);
  func_0x00010c0eea40(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105a1fc34; end: 105a1fcd3;  */

void FUN_105a1fc34(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126b8918;
  func_0x00010bf9a640(PTR_PTR_1126b8918);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee1020(lVar1);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedfa60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a1fcd4; end: 105a1fdd7;  */

void FUN_105a1fcd4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_48,param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar4);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar2);
  func_0x00010c0eea40(uVar1);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 105a1fdd8; end: 105a1fe77;  */

void FUN_105a1fdd8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  puVar2 = PTR_PTR_1126b8918;
  func_0x00010bfb9b80(PTR_PTR_1126b8918);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bee1020(lVar1);
  _objc_release(param_2);
  _objc_release(puVar2);
  _objc_release(lVar1);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedfa60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a1fe78; end: 105a20047;  */

void FUN_105a1fe78(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf529e0();
  puVar2 = PTR_PTR_1126b8918;
  if (lVar1 == 0) {
    func_0x00010bfb9b80();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010bf61120();
    _objc_retainAutoreleasedReturnValue();
  }
  lVar1 = param_2;
  func_0x00010bf529e0();
  _objc_initWeak(auStack_58,*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uStack_60 = 1;
  if (lVar1 != 0) {
    uStack_60 = 2;
  }
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(puVar2);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  _objc_retain(param_2);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar6);
  uVar4 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar4);
  func_0x00010c20d760(uVar3);
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar6);
  _objc_release(param_2);
  _objc_release(uVar5);
  _objc_release(puVar2);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(puVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 105a20048; end: 105a200b3;  */

void FUN_105a20048(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be82160();
  _objc_release(lVar1);
  param_1 = param_1 + 0x48;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedfa60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a200b4; end: 105a2014b; -[SCStoryPrivacySettingManager _updateSendToMyStoryAudienceIfNecessary:storyPrivacy:] */

void FUN_105a200b4(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  FUN_105a1f100(param_4);
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x000106978974();
  _objc_release(lVar1);
  if (lVar2 == param_3) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001069789bc(param_3,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 105a2014c; end: 105a2033f; -[SCStoryPrivacySettingManager _updateStoryPrivacyWithNewPrivacy:originalPrivacy:outGoingSnapchatters:completionQueue:completion:] */

void FUN_105a2014c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  uVar1 = param_5;
  func_0x000100504554(param_5,&PTR___NSConcreteGlobalBlock_1108ce348);
  _objc_initWeak(auStack_68,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(uVar1);
  _objc_retain(param_6);
  _objc_retain(param_7);
  func_0x00010c20d760(uVar2);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar1);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a20340; end: 105a20427;  */

void FUN_105a20340(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  if (uVar1 != 0) {
    uVar3 = param_2;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010bf2d540();
    _objc_release(uVar3);
    _objc_release(uVar1);
    if ((uVar2 & 1) == 0) {
      uVar3 = param_2;
      func_0x00010c2923e0(param_2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      uVar3 = 0;
    }
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105a20428; end: 105a205d3; -[SCStoryPrivacySettingManager _logGrapheneStoryPrivacyUpdateTo:blockedUserIds:] */

void FUN_105a20428(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
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
  pcStack_48 = FUN_105a205d4;
  uStack_40 = 0x105a205e4;
  uStack_38 = 0;
  puStack_88 = &uStack_90;
  uStack_90 = 0;
  uStack_80 = 0x3032000000;
  pcStack_78 = FUN_105a205d4;
  uStack_70 = 0x105a205e4;
  uStack_68 = 0;
  _objc_retain(param_4);
  func_0x00010c0c0f00(param_3);
  FUN_105a20dc0(*(undefined8 *)(param_1 + 0x80),&PTR____CFConstantStringClassReference_110e177b8,
                puStack_88[5],puStack_58[5],1);
  _objc_release(param_4);
  __Block_object_dispose(&uStack_90,8);
  _objc_release(uStack_68);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a205d4; end: 105a2063f;  */

void FUN_105a205d4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105a20640; end: 105a206c7;  */

void FUN_105a20640(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined ***)(lVar4 + 0x28) = &PTR____CFConstantStringClassReference_110e17798;
  _objc_release(uVar1);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf529e0(uVar1);
  func_0x00010c0df840(puVar2,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c25d700();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  *(undefined **)(lVar4 + 0x28) = puVar3;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a206c8; end: 105a206cb; -[SCStoryPrivacySettingManager didStartSnapchattersUpdateDataRequest:] */

void FUN_105a206c8(void)

{
  return;
}



/* Entry: 105a206cc; end: 105a207e3; -[SCStoryPrivacySettingManager didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_105a206cc(long param_1,undefined8 param_2,long param_3,undefined1 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [8];
  undefined1 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf0a980();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    _objc_copyWeak(auStack_58,auStack_48);
    _objc_retain(param_3);
    uStack_50 = param_4;
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_58);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 105a207e4; end: 105a2081b;  */

void FUN_105a207e4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be284c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a2081c; end: 105a208eb; -[SCStoryPrivacySettingManager _handleDidEndSnapchattersUpdateDataRequest:withSuccess:] */

void FUN_105a2081c(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  *(undefined1 *)(param_1 + 0x58) = 0;
  lVar3 = *(long *)(param_1 + 0x60);
  _objc_retain(lVar3);
  lVar1 = *(long *)(param_1 + 0x68);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  *(undefined8 *)(param_1 + 0x68) = 0;
  _objc_release(uVar2);
  if (lVar3 != 0 && lVar1 != 0) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_105a208ec;
    puStack_48 = &UNK_11084a9b8;
    _objc_retain(lVar1);
    lStack_40 = lVar1;
    uStack_38 = param_4;
    func_0x00010007380c(lVar3,&puStack_60);
    _objc_release(lStack_40);
  }
  _objc_release(lVar1);
  _objc_release(lVar3);
  return;
}



/* Entry: 105a208ec; end: 105a208ff;  */

void FUN_105a208ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105a208fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 105a20900; end: 105a20a4f; -[SCStoryPrivacySettingManager _processSTMSStoryPrivacyUpdateWithNewPrivacy:originalPrivacy:blockedUserIds:success:completionQueue:completion:] */

void FUN_105a20900(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  long lStack_70;
  undefined1 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_8);
  *(undefined1 *)(param_1 + 0x58) = 0;
  if (param_6 != 0) {
    func_0x00010be6c500(param_1);
    FUN_105a1f100(param_4);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    FUN_105a1f100(param_3);
    func_0x00010c0b10e0(uVar1);
    func_0x00010be54620(param_1);
  }
  if ((param_7 != 0) && (param_8 != 0)) {
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0xc2000000;
    pcStack_80 = FUN_105a20a50;
    puStack_78 = &UNK_11084a9b8;
    _objc_retain(param_8);
    uStack_68 = (undefined1)param_6;
    lStack_70 = param_8;
    func_0x00010007380c(param_7,&puStack_90);
    _objc_release(lStack_70);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105a20a50; end: 105a20a63;  */

void FUN_105a20a50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000105a20a60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28));
  return;
}



/* Entry: 105a20a64; end: 105a20aab; -[SCStoryPrivacySettingManager _currentStoryPrivacyInDocObject] */

void FUN_105a20a64(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001084e7da8();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a20aac; end: 105a20bc7; -[SCStoryPrivacySettingManager _updatePrivacyInDocObjectWithNewPrivacy:] */

void FUN_105a20aac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR_PTR_1126c13f0;
  _objc_retain(param_3);
  _objc_alloc();
  uVar2 = param_3;
  FUN_105a1f328(param_3);
  _objc_release(param_3);
  func_0x00010c055880(puVar1,param_2,uVar2);
  _objc_retain();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  *(undefined **)(param_1 + 0x38) = puVar1;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105a20bc8;
  puStack_40 = &UNK_11085adb8;
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  puStack_38 = puVar1;
  _objc_retain(puVar1);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0f8500(uVar2,param_2,&puStack_58,uVar3,&PTR___NSConcreteGlobalBlock_1108ce398);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puStack_38);
  _objc_release(puVar1);
  return;
}



/* Entry: 105a20bc8; end: 105a20bdb;  */

void FUN_105a20bc8(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(uVar3);
  lVar1 = param_2;
  func_0x0001084e7da8();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126d9e70;
  if (lVar1 == 0) {
    func_0x000108526c28(PTR_PTR_1126d9e70,uVar3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x000108526cfc(PTR_PTR_1126d9e70,lVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar3;
    func_0x00010c27dd80();
    if (puVar4 == (undefined *)0x0) {
      puVar4 = (undefined *)0x0;
    }
    else {
      *(undefined8 *)(puVar4 + 0x18) = uVar2;
    }
  }
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(lVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105a20bdc; end: 105a20cb3; -[SCStoryPrivacySettingManager .cxx_destruct] */

void FUN_105a20bdc(long param_1)

{
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 105a20cb4; end: 105a20d4b;  */

void FUN_105a20cb4(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 3;
  return;
}



/* Entry: 105a20d4c; end: 105a20dbf; -[SCGrapheneUserProfileUpdateMetric2 init] */

undefined1 * FUN_105a20d4c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126eb588;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 105a20dc0; end: 105a2107f;  */

/* WARNING: Removing unreachable block (ram,0x000105a21048) */

char * FUN_105a20dc0(long param_1,char *param_2,char *param_3,char *param_4,undefined8 param_5)

{
  char *pcVar1;
  char *pcVar2;
  char **ppcVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  char *unaff_x24;
  char *pcStack_f0;
  undefined *puStack_e8;
  char *pcStack_e0;
  char *pcStack_d8;
  undefined1 *puStack_d0;
  code *pcStack_c8;
  char acStack_c0 [24];
  undefined1 *puStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [24];
  undefined8 auStack_70 [2];
  char cStack_59;
  long lStack_58;
  
  pcVar2 = acStack_c0;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (param_1 != 0) {
    plVar6 = *(long **)(param_1 + 8);
    _objc_retain(param_2);
    if (param_2 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = param_2;
      _objc_retainAutorelease(param_2);
      func_0x00010bdc3520();
    }
    _objc_release(param_2);
    func_0x00010002b838(auStack_a0,pcVar1);
    _objc_retain(param_3);
    if (param_3 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_3);
      pcVar1 = param_3;
      func_0x00010bdc3520(param_3);
    }
    _objc_release(param_3);
    func_0x00010002b838(auStack_88,pcVar1);
    _objc_retain(param_4);
    if (param_4 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      _objc_retainAutorelease(param_4);
      pcVar1 = param_4;
      func_0x00010bdc3520(param_4);
    }
    _objc_release(param_4);
    func_0x00010002b838(auStack_70,pcVar1);
    acStack_c0[0] = '\0';
    acStack_c0[1] = '\0';
    acStack_c0[2] = '\0';
    acStack_c0[3] = '\0';
    acStack_c0[4] = '\0';
    acStack_c0[5] = '\0';
    acStack_c0[6] = '\0';
    acStack_c0[7] = '\0';
    acStack_c0[8] = '\0';
    acStack_c0[9] = '\0';
    acStack_c0[10] = '\0';
    acStack_c0[0xb] = '\0';
    acStack_c0[0xc] = '\0';
    acStack_c0[0xd] = '\0';
    acStack_c0[0xe] = '\0';
    acStack_c0[0xf] = '\0';
    acStack_c0[0x10] = '\0';
    acStack_c0[0x11] = '\0';
    acStack_c0[0x12] = '\0';
    acStack_c0[0x13] = '\0';
    acStack_c0[0x14] = '\0';
    acStack_c0[0x15] = '\0';
    acStack_c0[0x16] = '\0';
    acStack_c0[0x17] = '\0';
    func_0x00010007e1e8(acStack_c0,auStack_a0,&lStack_58,3);
    (**(code **)(*plVar6 + 0x18))(plVar6,&UNK_1108ce3b8,acStack_c0,param_5);
    puStack_a8 = acStack_c0;
    func_0x00010007e5dc(&puStack_a8);
    lVar5 = 0;
    pcVar1 = pcVar2;
    do {
      if ((&cStack_59)[lVar5] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_70 + lVar5));
      }
      lVar5 = lVar5 + -0x18;
      unaff_x24 = acStack_c0;
    } while (lVar5 != -0x48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_release(param_4);
    do {
      unaff_x24 = unaff_x24 + -0x18;
    } while (unaff_x24 != auStack_a0);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_release(param_2);
    __Unwind_Resume();
    ppcVar3 = &pcStack_f0;
    pcStack_c8 = FUN_105a21080;
    pcStack_e0 = param_3;
    pcStack_d8 = param_2;
    puStack_d0 = &stack0xfffffffffffffff0;
    _objc_retain(pcVar1);
    puStack_e8 = PTR_PTR_1126eb590;
    pcStack_f0 = pcVar2;
    _objc_msgSendSuper2(&pcStack_f0,PTR_s_init_1125d9248);
    if (ppcVar3 != (char **)0x0) {
      _objc_retain(pcVar1);
      uVar4 = *(undefined8 *)((long)ppcVar3 + 8);
      *(char **)((long)ppcVar3 + 8) = pcVar1;
      _objc_release(uVar4);
    }
    _objc_release(pcVar1);
    return (char *)ppcVar3;
  }
  return pcVar2;
}



/* Entry: 105a21080; end: 105a210f3; -[SCStoriesOnboardingManager initWithUserPreferences:] */

undefined1 * FUN_105a21080(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126eb590;
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



/* Entry: 105a210f4; end: 105a2113b; -[SCStoriesOnboardingManager saveEntireStoryOnboardingComplete] */

undefined8 FUN_105a210f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105a2113c; end: 105a2117f; -[SCStoriesOnboardingManager setSaveEntireStoryOnboardingComplete:] */

void FUN_105a2113c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a21180; end: 105a2118b; -[SCStoriesOnboardingManager .cxx_destruct] */

void FUN_105a21180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a2118c; end: 105a2119b; -[SCStoriesSnapInfoCollectingServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a2118c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272d9bc);
  return;
}



/* Entry: 105a2119c; end: 105a2123f; -[SCStoryShareSender initWithTextMessageSender:messagingExperimentService:] */

undefined1 *
FUN_105a2119c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb598;
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



/* Entry: 105a21240; end: 105a216f3; -[SCStoryShareSender sendUserStoryShareMessage:conversations:platformAnalytics:additionalTextPlatformAnalytics:completionQueue:completionHandler:] */

void FUN_105a21240(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
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
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c1408;
  _objc_opt_new();
  uVar2 = param_3;
  func_0x00010c25b200(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20d1a0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0c6c20(param_3);
  func_0x00010b67b220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5440(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0828e0(param_3);
  func_0x00010c1b57e0(puVar1,param_2,uVar2);
  puVar3 = PTR_PTR_1126be930;
  _objc_opt_new();
  func_0x00010c20caa0();
  lVar4 = param_5;
  func_0x00010bf4d560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c22ab40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar7 = PTR_PTR_1126b0cd8;
  if (lVar6 != 0) {
    lVar4 = param_5;
    func_0x00010bf4d560(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c22ab40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc35c0(puVar7,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar8 = PTR_PTR_1126bc778;
    _objc_opt_new(PTR_PTR_1126bc778);
    func_0x00010c1feca0(puVar3,param_2,puVar8);
    _objc_release(puVar8);
    puVar8 = puVar7;
    func_0x00010bfe5d80(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010c22ab40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  puVar7 = PTR_PTR_1126ba668;
  _objc_alloc_init();
  func_0x00010c1fea60();
  func_0x00010c0c6c20(param_3);
  func_0x000107d6b2ec();
  puVar8 = PTR_PTR_1126b28f8;
  _objc_alloc();
  func_0x00010c02b8e0();
  puVar9 = puVar8;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126c1410;
  _objc_opt_new(PTR_PTR_1126c1410);
  uVar2 = param_3;
  func_0x00010c0828e0(param_3);
  func_0x00010c1b57e0(puVar8,param_2,uVar2);
  puVar10 = PTR_PTR_1126be758;
  _objc_opt_new();
  func_0x00010c1fece0();
  puVar11 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  puVar12 = puVar10;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  if (puVar12 != (undefined *)0x0) {
    func_0x00010befa120(puVar11,param_2,puVar12);
  }
  puVar13 = PTR_PTR_1126c1418;
  func_0x00010bf57480(PTR_PTR_1126c1418,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar13 != (undefined *)0x0) {
    func_0x00010befa120(puVar11,param_2,puVar13);
  }
  puVar14 = PTR_PTR_1126be6d0;
  _objc_alloc();
  puVar15 = puVar7;
  func_0x00010bf63640(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = puVar9;
  func_0x00010bf21f60(puVar9);
  _objc_retainAutoreleasedReturnValue();
  puVar17 = puVar11;
  func_0x00010bf51e00(puVar11);
  func_0x00010c002be0(puVar14,param_2,puVar15,4,puVar16,1,puVar17);
  puVar18 = puVar14;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar14);
  _objc_release(puVar17);
  _objc_release(puVar16);
  _objc_release(puVar15);
  _objc_release(puVar13);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  uVar2 = param_3;
  func_0x00010befd440(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bea0680(param_1,param_2,puVar18,uVar2,param_5,param_6,param_4,param_7,param_8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar18);
  return;
}



/* Entry: 105a216f4; end: 105a21a63; -[SCStoryShareSender sendSearchStoryShareMessage:conversations:platformAnalytics:additionalTextPlatformAnalytics:completionQueue:completionHandler:] */

void FUN_105a216f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c1428;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  uVar2 = param_3;
  func_0x00010bf8bb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1931c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126be930;
  _objc_opt_new(PTR_PTR_1126be930);
  func_0x00010c1f80e0();
  lVar4 = param_5;
  func_0x00010bf4d560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c22ab40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar7 = PTR_PTR_1126b0cd8;
  if (lVar6 != 0) {
    lVar4 = param_5;
    func_0x00010bf4d560(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c22ab40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc35c0(puVar7,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar8 = PTR_PTR_1126bc778;
    _objc_opt_new(PTR_PTR_1126bc778);
    func_0x00010c1feca0(puVar3,param_2,puVar8);
    _objc_release(puVar8);
    puVar8 = puVar7;
    func_0x00010bfe5d80(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010c22ab40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  puVar7 = PTR_PTR_1126ba668;
  _objc_alloc_init(PTR_PTR_1126ba668);
  func_0x00010c1fea60();
  puVar8 = PTR_PTR_1126b28f8;
  _objc_alloc(PTR_PTR_1126b28f8);
  func_0x00010c02b8e0();
  puVar9 = puVar8;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126be6d0;
  _objc_alloc(PTR_PTR_1126be6d0);
  puVar10 = puVar7;
  func_0x00010bf63640(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf21f60(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002bc0(puVar8,param_2,puVar10,4,puVar11,1);
  puVar12 = puVar8;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  uVar2 = param_3;
  func_0x00010befd440(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bea0680(param_1,param_2,puVar12,uVar2,param_5,param_6,param_4,param_7,param_8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 105a21a64; end: 105a21e33; -[SCStoryShareSender sendSearchSnapShareMessage:conversations:platformAnalytics:additionalTextPlatformAnalytics:completionQueue:completionHandler:] */

void FUN_105a21a64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c1430;
  _objc_opt_new(PTR_PTR_1126c1430);
  uVar2 = param_3;
  func_0x00010bf8bb40(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1931c0(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0c6c20(param_3);
  func_0x00010b67b220();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5440(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126be930;
  _objc_opt_new(PTR_PTR_1126be930);
  func_0x00010c1f8aa0();
  lVar4 = param_5;
  func_0x00010bf4d560();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c22ab40();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c08fa60();
  _objc_release(lVar5);
  _objc_release(lVar4);
  puVar7 = PTR_PTR_1126b0cd8;
  if (lVar6 != 0) {
    lVar4 = param_5;
    func_0x00010bf4d560(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c22ab40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc35c0(puVar7,param_2,lVar5);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar4);
    puVar8 = PTR_PTR_1126bc778;
    _objc_opt_new(PTR_PTR_1126bc778);
    func_0x00010c1feca0(puVar3,param_2,puVar8);
    _objc_release(puVar8);
    puVar8 = puVar7;
    func_0x00010bfe5d80(puVar7);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar3;
    func_0x00010c22ab40(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0();
    _objc_release(puVar9);
    _objc_release(puVar8);
    _objc_release(puVar7);
  }
  puVar7 = PTR_PTR_1126ba668;
  _objc_alloc_init(PTR_PTR_1126ba668);
  func_0x00010c1fea60();
  func_0x00010c0c6c20(param_3);
  func_0x000107d6b2ec();
  puVar8 = PTR_PTR_1126b28f8;
  _objc_alloc(PTR_PTR_1126b28f8);
  func_0x00010c02b8e0();
  puVar9 = puVar8;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = PTR_PTR_1126be6d0;
  _objc_alloc(PTR_PTR_1126be6d0);
  puVar10 = puVar7;
  func_0x00010bf63640(puVar7);
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar9;
  func_0x00010bf21f60(puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002bc0(puVar8,param_2,puVar10,4,puVar11,1);
  puVar12 = puVar8;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar7);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  uVar2 = param_3;
  func_0x00010befd440(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010bea0680(param_1,param_2,puVar12,uVar2,param_5,param_6,param_4,param_7,param_8);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar12);
  return;
}



/* Entry: 105a21e34; end: 105a2221b; -[SCStoryShareSender sendSnapProStoryShareMessage:conversations:platformAnalytics:completionQueue:completionHandler:] */

void FUN_105a21e34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126bec68;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  puVar3 = PTR_PTR_1126b0cd8;
  uVar2 = param_3;
  func_0x00010bf24ec0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc35c0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puVar4 = PTR_PTR_1126bc778;
  _objc_opt_new(PTR_PTR_1126bc778);
  func_0x00010c1e4140(puVar1,param_2,puVar4);
  _objc_release(puVar4);
  puVar4 = puVar3;
  func_0x00010bfe5d80(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar1;
  func_0x00010c116a20(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a99c0();
  _objc_release(puVar5);
  _objc_release(puVar4);
  uVar2 = param_3;
  func_0x00010c241220(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c204680(puVar1,param_2,uVar2);
  _objc_release(uVar2);
  uVar2 = param_3;
  func_0x00010c0828a0(param_3);
  _objc_release(param_3);
  func_0x00010c1b57a0(puVar1,param_2,uVar2);
  puVar5 = PTR_PTR_1126be930;
  _objc_opt_new(PTR_PTR_1126be930);
  func_0x00010c205160();
  lVar6 = param_5;
  func_0x00010bf4d560();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c22ab40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010c08fa60();
  _objc_release(lVar7);
  _objc_release(lVar6);
  puVar4 = PTR_PTR_1126b0cd8;
  if (lVar8 != 0) {
    lVar6 = param_5;
    func_0x00010bf4d560(param_5);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c22ab40();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc35c0(puVar4,param_2,lVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar6);
    puVar9 = PTR_PTR_1126bc778;
    _objc_opt_new(PTR_PTR_1126bc778);
    func_0x00010c1feca0(puVar5,param_2,puVar9);
    _objc_release(puVar9);
    puVar9 = puVar4;
    func_0x00010bfe5d80(puVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar5;
    func_0x00010c22ab40(puVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a99c0();
    _objc_release(puVar10);
    _objc_release(puVar9);
    _objc_release(puVar4);
  }
  puVar4 = PTR_PTR_1126ba668;
  _objc_alloc_init(PTR_PTR_1126ba668);
  func_0x00010c1fea60();
  puVar9 = PTR_PTR_1126b28f8;
  _objc_alloc(PTR_PTR_1126b28f8);
  func_0x00010c02b8e0();
  puVar10 = puVar9;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  puVar9 = PTR_PTR_1126be6d0;
  _objc_alloc(PTR_PTR_1126be6d0);
  puVar11 = puVar4;
  func_0x00010bf63640(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar12 = puVar10;
  func_0x00010bf21f60(puVar10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002bc0(puVar9,param_2,puVar11,4,puVar12,1);
  puVar13 = puVar9;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar12);
  _objc_release(puVar11);
  _objc_release(puVar10);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar1);
  _objc_release(param_5);
  func_0x00010bea0680(param_1,param_2,puVar13,0,param_5,0,param_4,param_6,param_7);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar13);
  return;
}



/* Entry: 105a2221c; end: 105a2255b; -[SCStoryShareSender sendGroupStoryShareMessageToOwningGroupWithStorySnapId:mediaType:owningGroupConversationId:platformAnalytics:completionQueue:completionHandler:] */

void FUN_105a2221c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
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
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_6);
  _objc_retain(param_5);
  puVar16 = PTR_PTR_1126c1408;
  _objc_retain(param_6);
  _objc_retain(param_3);
  _objc_opt_new();
  func_0x00010c20d1a0();
  _objc_release(param_3);
  uVar1 = param_4;
  func_0x00010b67b220(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c5440(puVar16,param_2,uVar1);
  _objc_release(uVar1);
  func_0x00010c20de40(puVar16,param_2,2);
  puVar2 = PTR_PTR_1126c1420;
  _objc_opt_new(PTR_PTR_1126c1420);
  func_0x00010c1d7c80(puVar16,param_2,puVar2);
  _objc_release(puVar2);
  puVar2 = PTR_PTR_1126be930;
  _objc_opt_new();
  func_0x00010c20caa0();
  puVar3 = PTR_PTR_1126ba668;
  _objc_alloc_init();
  func_0x00010c1fea60();
  func_0x000107d6b2ec(param_4);
  puVar4 = PTR_PTR_1126b28f8;
  _objc_alloc();
  func_0x00010c02b8e0();
  puVar5 = puVar4;
  func_0x00010c2a82e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_6);
  _objc_release(puVar4);
  puVar4 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar6 = PTR_PTR_1126c1418;
  func_0x00010bf57480(PTR_PTR_1126c1418,param_2,2);
  _objc_retainAutoreleasedReturnValue();
  if (puVar6 != (undefined *)0x0) {
    func_0x00010befa120(puVar4,param_2,puVar6);
  }
  puVar7 = PTR_PTR_1126be6d0;
  _objc_alloc();
  puVar8 = puVar3;
  func_0x00010bf63640(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar5;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  puVar10 = puVar4;
  func_0x00010bf51e00();
  func_0x00010c002be0(puVar7,param_2,puVar8,4,puVar9,1,puVar10);
  puVar11 = puVar7;
  func_0x00010bf21f60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar10);
  _objc_release(puVar9);
  _objc_release(puVar8);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar16);
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  uStack_70 = param_5;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&uStack_70,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  lVar14 = 0;
  uVar15 = 0;
  puVar2 = puVar11;
  puVar3 = puVar16;
  uVar1 = param_7;
  func_0x00010bea0680(param_1,param_2,puVar11,0,param_6,0,puVar16,param_7);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(puVar16);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(lVar14);
  _objc_retain(uVar15);
  _objc_retain(param_8);
  _objc_retain(uVar1);
  _objc_retain(puVar3);
  _objc_retain(puVar2);
  lVar12 = lVar14;
  func_0x00010c08fa60();
  if (lVar12 == 0) {
    puVar16 = (undefined *)0x0;
  }
  else {
    puVar16 = PTR_PTR_1126be800;
    _objc_alloc(PTR_PTR_1126be800);
    puVar4 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e820();
    func_0x00010c051920(puVar16,param_2,puVar4,0,uVar15);
    _objc_release(puVar4);
  }
  uVar13 = *(undefined8 *)(puVar11 + 8);
  func_0x00010c269d40(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c260();
  _objc_release(param_8);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(uVar13);
  _objc_release(puVar16);
  _objc_release(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar14);
  return;
}



/* Entry: 105a2255c; end: 105a226a7; -[SCStoryShareSender _sendStoryShareMessage:additionalText:platformAnalytics:additionalTextPlatformAnalytics:conversations:completionQueue:completionHandler:] */

void FUN_105a2255c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_9);
  _objc_retain(param_8);
  _objc_retain(param_7);
  _objc_retain(param_3);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = PTR_PTR_1126be800;
    _objc_alloc(PTR_PTR_1126be800);
    puVar2 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
    _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
    func_0x00010c04e820();
    func_0x00010c051920(puVar4,param_2,puVar2,0,param_6);
    _objc_release(puVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c260();
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_3);
  _objc_release(uVar3);
  _objc_release(puVar4);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 105a226a8; end: 105a226d7; -[SCStoryShareSender .cxx_destruct] */

void FUN_105a226a8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a226d8; end: 105a227af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a226d8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar5 = (undefined *)0x0;
  }
  else {
    puVar5 = PTR_PTR_1126c1438;
    _objc_alloc(PTR_PTR_1126c1438);
    lVar1 = param_1 + _DAT_11272d9d4;
    _objc_loadWeakRetained(lVar1);
    lVar2 = lVar1;
    func_0x00010c26c760();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + _DAT_11272d9d0;
    _objc_loadWeakRetained(lVar3);
    lVar4 = lVar3;
    func_0x00010c0cb4c0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0519a0(puVar5,param_2,lVar2,lVar4);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 105a227b0; end: 105a22803; -[SCStoryShareSendingServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a227b0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272d9c8,0);
  _objc_destroyWeak(param_1 + _DAT_11272d9d4);
  _objc_destroyWeak(param_1 + _DAT_11272d9d0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272d9cc);
  return;
}



/* Entry: 105a22804; end: 105a22b27; -[SCOurStoriesAttributionManager initWithFeatureSettingsService:userPreferences:birthdayProvider:storyPrivacySettingManager:snapProUserProfileIdProvider:snapProPopularStatusProvider:storiesGrapheneMetricsEmitter:] */

undefined8 *
FUN_105a22804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  puStack_68 = PTR_PTR_1126eb5a0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[1];
    puVar1[1] = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = puVar1[2];
    puVar1[2] = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = puVar1[3];
    puVar1[3] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[4];
    puVar1[4] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126c1448;
    _objc_opt_new();
    uVar2 = puVar1[8];
    puVar1[8] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_78,puVar1);
    uVar6 = puVar1[1];
    puVar4 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x00010c2268e0(PTR__OBJC_CLASS___NSSet_1126ae870);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    func_0x00010c0e0c60();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = puVar1[10];
    puVar1[10] = uVar6;
    _objc_release(uVar5);
    _objc_release(uVar2);
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
    _objc_release(puVar3);
  }
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105a22b28; end: 105a22b53;  */

void FUN_105a22b28(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be71560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a22b54; end: 105a22be3; -[SCOurStoriesAttributionManager isFeatureEnabled] */

uint FUN_105a22b54(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010c269d40(lVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010befe7e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfdc480();
  _objc_release(uVar4);
  return (uint)(0x11 < lVar3) | (uint)uVar5 & 1;
}



/* Entry: 105a22be4; end: 105a22d13; -[SCOurStoriesAttributionManager setOurStoriesAttributionEnabled:] */

void FUN_105a22be4(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_98 [8];
  undefined1 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined1 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_105a22d14;
  puStack_70 = &UNK_11084ceb8;
  _objc_copyWeak(auStack_68,auStack_58);
  uVar1 = 0x11;
  uStack_60 = param_3;
  func_0x0001000819a8(0x11,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_98,auStack_58);
  uStack_90 = param_3;
  func_0x00010c0f8520(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  return;
}



/* Entry: 105a22d14; end: 105a22d7b;  */

void FUN_105a22d14(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a22d7c; end: 105a22d83; -[SCOurStoriesAttributionManager isOurStoriesAttributionEnabled] */

void FUN_105a22d7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0ee450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_ourStoryShowMyNameEnabled_112619328);
  return;
}



/* Entry: 105a22d84; end: 105a22e43; -[SCOurStoriesAttributionManager setSeenSpotlightAttributionWarning:] */

void FUN_105a22d84(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f8520(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105a22e44; end: 105a22e77;  */

void FUN_105a22e44(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a22e78; end: 105a22e7f; -[SCOurStoriesAttributionManager hasSeenSpotlightAttributionWarning] */

void FUN_105a22e78(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c157ef0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_seenSpotlightShowMyNameWarning_1126339d8);
  return;
}



/* Entry: 105a22e80; end: 105a22f3f; -[SCOurStoriesAttributionManager setSeenSnapMapAttributionWarning:] */

void FUN_105a22e80(long param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = param_3;
  func_0x00010c0f8520(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105a22f40; end: 105a22f73;  */

void FUN_105a22f40(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72840();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a22f74; end: 105a22f7b; -[SCOurStoriesAttributionManager hasSeenSnapMapAttributionWarning] */

void FUN_105a22f74(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c157df0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_seenSnapMapShowMyNameWarning_112633998);
  return;
}



/* Entry: 105a22f7c; end: 105a2308f; -[SCOurStoriesAttributionManager shouldShowAttributionTeachingTooltip] */

uint FUN_105a22f7c(long param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint uVar9;
  
  uVar2 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bfdc480();
  _objc_release(uVar2);
  if ((uVar3 & 1) == 0) {
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c067f80();
    _objc_release(lVar4);
    lVar6 = *(long *)(param_1 + 0x20);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010c25aac0();
    if (lVar4 == 0) {
      uVar8 = *(undefined8 *)(param_1 + 0x30);
      func_0x00010c269d40(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar7 = uVar8;
      func_0x00010c07a6a0();
      uVar9 = (uint)uVar7;
      _objc_release(uVar8);
    }
    else {
      uVar9 = 0;
    }
    _objc_release(lVar6);
    uVar8 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c269d40(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar8;
    func_0x00010bfdc480();
    _objc_release(uVar8);
    func_0x00010c072ba0(param_1);
    uVar1 = 0;
    if (lVar5 < 3) {
      uVar1 = (uint)param_1;
    }
    uVar1 = uVar1 & (uVar9 | (uint)uVar7);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 105a23090; end: 105a2310f; -[SCOurStoriesAttributionManager incrementAttributionTeachingTooltipImpression] */

void FUN_105a23090(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067f80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1add40();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c0aba50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_logOurStoryAttributionTooltipImp_1126088a0);
  return;
}



/* Entry: 105a23110; end: 105a2319f; -[SCOurStoriesAttributionManager shouldShowPublicProfileTeachingTooltip] */

undefined4 FUN_105a23110(long param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf2c720();
  _objc_release(uVar2);
  if ((int)uVar3 == 0) {
    uVar1 = 0;
  }
  else {
    lVar4 = *(long *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c067f80();
    _objc_release(lVar4);
    func_0x00010c072ba0(param_1);
    uVar1 = 0;
    if (lVar5 < 1) {
      uVar1 = (undefined4)param_1;
    }
  }
  return uVar1;
}



/* Entry: 105a231a0; end: 105a23217; -[SCOurStoriesAttributionManager incrementPublicProfileTeachingTooltipImpression] */

void FUN_105a231a0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c067f80();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1add40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105a23218; end: 105a2321f; -[SCOurStoriesAttributionManager addListener:] */

void FUN_105a23218(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 105a23220; end: 105a23227; -[SCOurStoriesAttributionManager removeListener:] */

void FUN_105a23220(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 105a23228; end: 105a2325f; -[SCOurStoriesAttributionManager _performSetOurStoriesAttributionEnabled:] */

void FUN_105a23228(long param_1)

{
  func_0x00010c1d6c60(*(undefined8 *)(param_1 + 8));
  func_0x00010c1fa780(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010c1fa630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setSeenSnapMapShowMyNameWarning__11265c3b0,0);
  return;
}



/* Entry: 105a23260; end: 105a23267; -[SCOurStoriesAttributionManager _logSetOurStoriesAttributionEnabled:] */

void FUN_105a23260(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0aba70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_logOurStoryShowMyNameEnabled__1126088a8);
  return;
}



/* Entry: 105a23268; end: 105a2326f; -[SCOurStoriesAttributionManager _performSetSeenSpotlightAttributionWarning:] */

void FUN_105a23268(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fa790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setSeenSpotlightShowMyNameWarnin_11265c408);
  return;
}



/* Entry: 105a23270; end: 105a23277; -[SCOurStoriesAttributionManager _performSetSeenSnapMapAttributionWarning:] */

void FUN_105a23270(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1fa630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_setSeenSnapMapShowMyNameWarning__11265c3b0);
  return;
}



/* Entry: 105a23278; end: 105a2333f; -[SCOurStoriesAttributionManager _performAnnounceOurStoriesAttributionChanged] */

void FUN_105a23278(long param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [8];
  undefined1 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 8);
  func_0x00010c0ee440();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  _objc_copyWeak(auStack_48,auStack_38);
  uStack_40 = uVar1;
  func_0x00010c0f7fc0(uVar2);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105a23340; end: 105a23373;  */

void FUN_105a23340(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdcc260();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a23374; end: 105a2337b; -[SCOurStoriesAttributionManager _announceOurStoriesAttributionEnabled:] */

void FUN_105a23374(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf7e590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x40),PTR_s_didUpdateOurStoriesAttributionEn_1125bd308);
  return;
}



/* Entry: 105a2337c; end: 105a2340b; -[SCOurStoriesAttributionManager .cxx_destruct] */

void FUN_105a2337c(long param_1)

{
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



/* Entry: 105a2340c; end: 105a234df; -[SCOurStoriesDataCoordinator initWithDocObjectContext:performer:] */

undefined1 *
FUN_105a2340c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb5a8;
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
    puVar3 = PTR_PTR_1126c1450;
    _objc_alloc();
    func_0x00010c00ddc0();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    func_0x00010c24f9c0(*(undefined8 *)((long)puVar1 + 0x18));
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a234e0; end: 105a234e7; -[SCOurStoriesDataCoordinator mostRecentMapSnapTimestampObservable] */

void FUN_105a234e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d1090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_mostRecentMapSnapTimestampObserv_112611e38);
  return;
}



/* Entry: 105a234e8; end: 105a234ef; -[SCOurStoriesDataCoordinator mostRecentMapSnapTimestamp] */

void FUN_105a234e8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0d1070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x18),PTR_s_mostRecentMapSnapTimestamp_112611e30);
  return;
}



/* Entry: 105a234f0; end: 105a2352b; -[SCOurStoriesDataCoordinator .cxx_destruct] */

void FUN_105a234f0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a2352c; end: 105a235eb; -[SCOurStoriesObserver initWithDocObjectContext:performer:] */

undefined1 *
FUN_105a2352c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb5b0;
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
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a235ec; end: 105a23643; -[SCOurStoriesObserver startObservingMostRecentMapSnapTimestamp] */

void FUN_105a235ec(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_105a23644;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 105a23644; end: 105a2379b;  */

void FUN_105a23644(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x0001084e87f0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,*(undefined8 *)(param_1 + 0x20));
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar1 = uVar3;
  func_0x00010c0e0a80();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x18) = uVar1;
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar2);
  return;
}



/* Entry: 105a2379c; end: 105a237e3;  */

void FUN_105a2379c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bedbca0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a237e4; end: 105a23887; -[SCOurStoriesObserver _updateMostRecentMapSnapPostedTimestampWithFetchedResult:] */

void FUN_105a237e4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lVar1 = param_3;
    func_0x00010bfb1920(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c105700();
    func_0x00010c0df720(puVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar3,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


