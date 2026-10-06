/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10aec0994; end: 10aec09e7;  */

void FUN_10aec0994(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf57500(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x28),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aec09e8; end: 10aec0c9b; -[SCMixerFeedDocObjectStore _updateMemoryCacheWithFeedData:groupId:] */

void FUN_10aec09e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bfa45e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4640(param_4);
  _os_unfair_lock_lock(param_2 + 0x58);
  puVar3 = PTR_PTR_1126ae720;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_10aec0c9c;
  puStack_80 = &UNK_110c8fa68;
  _objc_retain(uVar2);
  uStack_78 = uVar2;
  func_0x00010bf11fe0(puVar3,param_3,&puStack_98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x48),param_3,puVar3,puVar1);
  _objc_release(puVar3);
  uVar4 = uVar2;
  func_0x00010bf43280(uVar2,param_3,&PTR___NSConcreteGlobalBlock_110c8fa98);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf5e5e0(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bf5f320(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9adc0(*(undefined8 *)(param_2 + 0x38));
  puVar3 = PTR_PTR_1126de858;
  _objc_alloc(PTR_PTR_1126de858);
  func_0x00010c018f20(param_1);
  func_0x00010c1d0640(*(undefined8 *)(param_2 + 0x50),param_3,puVar3,puVar1);
  lVar7 = param_2;
  func_0x00010bec5d00(param_2,param_3,param_5);
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_unlock(param_2 + 0x58);
  func_0x00010c0d9840(lVar7,param_3,uVar2);
  _objc_release(lVar7);
  _objc_release(puVar3);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_78);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 10aec0c9c; end: 10aec0cc3;  */

void FUN_10aec0c9c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aec0cc4; end: 10aec0ce3;  */

void FUN_10aec0cc4(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0d53e0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aec0ce4; end: 10aec1003; -[SCMixerFeedDocObjectStore _saveFeedData:groupId:completion:] */

void FUN_10aec0ce4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  long lStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  uVar2 = param_4;
  func_0x00010bfa45e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa4640(param_4);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf5e5e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bf5f320();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 0x38);
  func_0x00010bf9adc0(uVar5);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0xc2000000;
  pcStack_98 = FUN_10aec1004;
  puStack_90 = &UNK_110c8fab8;
  lStack_88 = param_2;
  _objc_retain(uVar3);
  uVar6 = uVar2;
  uStack_80 = uVar3;
  func_0x00010bf43280(uVar2,param_3,&puStack_a8);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bfce960(param_1,uVar7,param_3,uVar2,param_5,uVar4,uVar5,uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_d8 = puVar1;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_10aec102c;
  puStack_c0 = &UNK_110c8fae8;
  _objc_retain(uVar6);
  uStack_b8 = uVar6;
  _objc_retain(uVar7);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  uStack_b0 = uVar7;
  func_0x00010c11de00(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puStack_118 = puVar1;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_10aec11f8;
  puStack_100 = &UNK_110c8fb18;
  _objc_retain(uVar2);
  uStack_f8 = uVar2;
  uStack_e8 = param_1;
  uStack_e0 = param_5;
  _objc_retain(param_6);
  uStack_f0 = param_6;
  func_0x00010c0f8500(uVar5,param_3,&puStack_d8,uVar8,&puStack_118);
  _objc_release(uVar8);
  _objc_release(uVar5);
  _objc_release(uStack_f0);
  _objc_release(uStack_f8);
  _objc_release(uStack_b0);
  _objc_release(uStack_b8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uStack_80);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 10aec1004; end: 10aec102b;  */

void FUN_10aec1004(long param_1,undefined8 param_2)

{
  func_0x00010bfa39e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28),param_2,param_2,
                      *(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aec102c; end: 10aec11f7;  */

void FUN_10aec102c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar5 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar5);
  lVar3 = lVar5;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar5);
      }
      uVar2 = *(undefined8 *)(lVar6 * 8);
      FUN_10aede008(uVar2,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(uVar2);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = lVar5;
    func_0x00010bf52a60();
  }
  _objc_release(lVar5);
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    FUN_10aedf630(lVar3,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar5 = lVar3;
  }
  lVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar5);
  _objc_release(param_2);
  __Unwind_Resume();
  if (*(long *)(lVar3 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010aec1204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(lVar3 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10aec11f8; end: 10aec120b;  */

void FUN_10aec11f8(long param_1)

{
  if (*(long *)(param_1 + 0x28) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010aec1204. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x28) + 0x10))();
    return;
  }
  return;
}



/* Entry: 10aec120c; end: 10aec12cb; -[SCMixerFeedDocObjectStore _subjectForGroupId:] */

void FUN_10aec120c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _os_unfair_lock_assert_owner(param_1 + 0x58);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = *(undefined **)(param_1 + 0x40);
  func_0x00010c0e00e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  if (puVar2 == (undefined *)0x0) {
    puVar2 = PTR_PTR_1126ae820;
    _objc_opt_new(PTR_PTR_1126ae820);
    func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40),param_2,puVar2,puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aec12cc; end: 10aec135b; -[SCMixerFeedDocObjectStore .cxx_destruct] */

void FUN_10aec12cc(long param_1)

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



/* Entry: 10aec135c; end: 10aec146f; -[SCMixerNamespaceDocObjectStore saveNamespaceData:completion:] */

void FUN_10aec135c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0);
    }
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10aec1470; end: 10aec149f;  */

void FUN_10aec1470(long param_1,undefined8 param_2)

{
  func_0x00010bedb820(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010be99750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__saveNamespaceData_completion__112583f70,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 10aec14a0; end: 10aec14a3; -[SCMixerNamespaceDocObjectStore cleanDataInPersistence:] */

void FUN_10aec14a0(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddeeb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__cleanDataInPersistence__112555548);
  return;
}



/* Entry: 10aec14a4; end: 10aec1583; -[SCMixerNamespaceDocObjectStore _cleanDataInPersistence:] */

void FUN_10aec14a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10aec1584;
  puStack_50 = &UNK_1108a5ee8;
  lStack_48 = param_1;
  uStack_40 = uVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  _objc_retain(uVar1);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(uVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 10aec1584; end: 10aec1743;  */

void FUN_10aec1584(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  _objc_retain(uVar5);
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10aec1744;
  puStack_60 = &UNK_11084f688;
  _objc_retain(puVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  puStack_58 = puVar2;
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10aec19b8;
  puStack_98 = &UNK_110a50200;
  _objc_retain(uVar5);
  uStack_90 = uVar5;
  _objc_retain(puVar2);
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  puStack_88 = puVar2;
  _objc_retain(uVar6);
  uStack_80 = uVar6;
  func_0x00010c0f8500(uVar3,param_2,&puStack_78,uVar4,&puStack_b0);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uStack_80);
  _objc_release(puStack_88);
  _objc_release(uStack_90);
  _objc_release(puStack_58);
  _objc_release(uVar5);
  _objc_release(puVar2);
  return;
}



/* Entry: 10aec1744; end: 10aec19b7;  */

void FUN_10aec1744(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined4 uStack_14c;
  long lStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_opt_class(PTR_PTR_1126de810);
  if (param_2 == 0) {
    uStack_100 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_130,param_2);
  }
  lStack_148 = 0;
  lStack_140 = 0;
  uStack_138 = 0;
  uStack_14c = 0;
  puVar1 = &uStack_130;
  plVar9 = &lStack_148;
  func_0x000107c310d0(puVar1,plVar9,&uStack_14c);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_148 != 0) {
    lStack_140 = lStack_148;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_108);
  _objc_release(uStack_118);
  _objc_release(uStack_120);
  puVar2 = puVar1;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (puVar3 != (undefined8 *)0x0) {
    puVar8 = (undefined8 *)0x0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(puVar2);
      }
      plVar9 = *(long **)((long)puVar8 * 8);
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      plVar4 = plVar9;
      func_0x00010c0d53e0(plVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa140(uVar10);
      _objc_release(plVar4);
      puVar5 = PTR_PTR_1126de8e0;
      FUN_10aeceec4(PTR_PTR_1126de8e0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar5);
      puVar8 = (undefined8 *)((long)puVar8 + 1);
    } while (puVar3 != puVar8);
    puVar3 = puVar2;
    func_0x00010bf52a60();
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  lVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
  __Unwind_Resume();
  if ((int)plVar9 != 0) {
    uVar10 = *(undefined8 *)(lVar7 + 0x20);
    uVar6 = *(undefined8 *)(lVar7 + 0x28);
    func_0x00010bf51e00(uVar6);
    func_0x00010c12cda0(uVar10);
    _objc_release(uVar6);
  }
  lVar7 = *(long *)(lVar7 + 0x30);
  if (lVar7 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010aec1a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar7 + 0x10))(lVar7,plVar9);
    return;
  }
  return;
}



/* Entry: 10aec19b8; end: 10aec1a37;  */

void FUN_10aec19b8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  if ((int)param_2 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010bf51e00(uVar2);
    func_0x00010c12cda0(uVar1);
    _objc_release(uVar2);
  }
  lVar3 = *(long *)(param_1 + 0x30);
  if (lVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010aec1a10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x10))(lVar3,param_2);
    return;
  }
  return;
}



/* Entry: 10aec1a38; end: 10aec1ab7; -[SCMixerNamespaceDocObjectStore _emptyNamespaceDataForNamespace:] */

void FUN_10aec1a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126de5b0;
  _objc_alloc(PTR_PTR_1126de5b0);
  func_0x00010c041be0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aec1ab8; end: 10aec1ecb; -[SCMixerNamespaceDocObjectStore _updateMemoryCacheWithNamespaceData:] */

ulong FUN_10aec1ab8(long param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfaea20();
  _objc_retainAutoreleasedReturnValue();
  _os_unfair_lock_lock(param_1 + 0x50);
  _objc_retain(uVar1);
  uVar2 = uVar1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(uVar1);
      }
      uVar10 = *(undefined8 *)(uVar8 * 8);
      puVar3 = PTR_PTR_1126ae720;
      func_0x00010bf11fe0(PTR_PTR_1126ae720);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = *(undefined8 *)(param_1 + 0x48);
      func_0x00010c14ffc0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar10;
      func_0x00010bf267e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0640(uVar9);
      _objc_release(uVar4);
      _objc_release(uVar10);
      _objc_release(puVar3);
      uVar8 = uVar8 + 1;
    } while (uVar2 != uVar8);
    uVar2 = uVar1;
    func_0x00010bf52a60();
  }
  _objc_release(uVar1);
  _os_unfair_lock_unlock(param_1 + 0x50);
  uVar8 = param_3;
  func_0x00010bf43280();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be61e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  uVar2 = uVar1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (uVar2 != 0) {
    uVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(uVar1);
      }
      uVar10 = *(undefined8 *)(uVar11 * 8);
      func_0x00010c14ffc0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar10;
      func_0x00010bf267e0();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_1;
      func_0x00010c0e00e0(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      _objc_release(uVar10);
      func_0x00010bf85be0(PTR_PTR_1126de5b8);
      func_0x00010c0d9840(lVar5);
      _objc_release(lVar5);
      uVar11 = uVar11 + 1;
    } while (uVar2 != uVar11);
    uVar2 = uVar1;
    func_0x00010bf52a60();
  }
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar1);
  uVar2 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return uVar2;
  }
  ___stack_chk_fail();
  _objc_release(uVar1);
  _objc_release(param_1);
  _objc_release(uVar8);
  _objc_release(uVar1);
  _objc_release(param_3);
  __Unwind_Resume(uVar2);
  func_0x00010c14ffc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_2;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar7 = lVar6;
  func_0x00010c08fa60(lVar6);
  _objc_release(lVar6);
  return (ulong)(lVar7 != 0);
}



/* Entry: 10aec1ecc; end: 10aec1f53;  */

bool FUN_10aec1ecc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  
  func_0x00010c14ffc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c08fa60(lVar1);
  _objc_release(lVar1);
  return lVar2 != 0;
}



/* Entry: 10aec1f54; end: 10aec1f7b;  */

void FUN_10aec1f54(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aec1f7c; end: 10aec1f9b;  */

void FUN_10aec1f7c(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c14ffc0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aec1f9c; end: 10aec21c7; -[SCMixerNamespaceDocObjectStore _saveNamespaceData:completion:] */

void FUN_10aec1f9c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  code *pcStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR_PTR_1126de8e8;
  _objc_opt_new();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_10aec21c8;
  puStack_70 = &UNK_110c8fd28;
  puVar3 = puVar2;
  lStack_68 = param_1;
  func_0x00010c114da0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_10aec21f0;
  puStack_98 = &UNK_1108af4c0;
  _objc_retain(puVar3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  puStack_90 = puVar3;
  func_0x00010c11de00(uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_f0 = puVar1;
  uStack_e8 = 0xc2000000;
  pcStack_e0 = FUN_10aec236c;
  puStack_d8 = &UNK_110c8fd58;
  _objc_retain(puVar3);
  puStack_d0 = puVar3;
  _objc_retain(param_3);
  uStack_c8 = param_3;
  lStack_c0 = param_1;
  _objc_retain(param_4);
  uStack_b8 = param_4;
  func_0x00010c0f8500(uVar4,param_2,&puStack_b0,uVar5,&puStack_f0);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uStack_b8);
  _objc_release(uStack_c8);
  _objc_release(puStack_d0);
  _objc_release(puStack_90);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10aec21c8; end: 10aec21ef;  */

void FUN_10aec21c8(long param_1,undefined8 param_2)

{
  func_0x00010c0d5340(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10),param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aec21f0; end: 10aec236b;  */

void FUN_10aec21f0(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  long lStack_188;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar4 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar7 = param_2;
  _objc_retain(param_2);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  lVar9 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar9);
  lVar3 = lVar9;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar10 = *plStack_110;
    do {
      lVar11 = 0;
      do {
        if (*plStack_110 != lVar10) {
          _objc_enumerationMutation(lVar9);
        }
        uVar1 = *(undefined8 *)(lStack_118 + lVar11 * 8);
        lVar7 = 0;
        FUN_10aecef38();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c25ed40(param_2);
        _objc_unsafeClaimAutoreleasedReturnValue();
        _objc_release(uVar1);
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar9;
      puVar4 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar9);
  lVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar9);
  _objc_release(param_2);
  __Unwind_Resume();
  puVar8 = &uStack_250;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((int)lVar7 != 0) {
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    param_2 = *(long *)(lVar3 + 0x28);
    _objc_retain(param_2);
    lVar9 = param_2;
    func_0x00010bf52a60();
    if (lVar9 != 0) {
      lVar10 = *plStack_240;
      do {
        lVar11 = 0;
        do {
          if (*plStack_240 != lVar10) {
            _objc_enumerationMutation(param_2);
          }
          uVar12 = *(undefined8 *)(lStack_248 + lVar11 * 8);
          uVar1 = uVar12;
          func_0x00010c14ffc0(uVar12);
          _objc_retainAutoreleasedReturnValue();
          uVar2 = uVar1;
          func_0x00010c0d53e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar1);
          uVar1 = *(undefined8 *)(*(long *)(lVar3 + 0x30) + 0x38);
          func_0x00010c08a660(uVar12);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1b8d60(uVar1);
          _objc_release(uVar12);
          _objc_release(uVar2);
          lVar11 = lVar11 + 1;
        } while (lVar9 != lVar11);
        lVar9 = param_2;
        puVar8 = &uStack_250;
        func_0x00010bf52a60();
      } while (lVar9 != 0);
    }
    _objc_release(param_2);
    puVar4 = puVar8;
  }
  lVar3 = *(long *)(lVar3 + 0x38);
  if (lVar3 != 0) {
    (**(code **)(lVar3 + 0x10))(lVar3,lVar7);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  __Unwind_Resume(lVar3);
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar5 = (undefined1 *)puVar4;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar6);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10aec236c; end: 10aec2547;  */

void FUN_10aec236c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long unaff_x19;
  undefined8 uVar6;
  undefined8 uVar7;
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
  if ((int)param_2 != 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    unaff_x19 = *(long *)(param_1 + 0x28);
    _objc_retain(unaff_x19);
    lVar2 = unaff_x19;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(unaff_x19);
          }
          uVar6 = *(undefined8 *)(lStack_128 + lVar9 * 8);
          uVar7 = uVar6;
          func_0x00010c14ffc0(uVar6);
          _objc_retainAutoreleasedReturnValue();
          uVar1 = uVar7;
          func_0x00010c0d53e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar7);
          uVar7 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x38);
          func_0x00010c08a660(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1b8d60(uVar7);
          _objc_release(uVar6);
          _objc_release(uVar1);
          lVar9 = lVar9 + 1;
        } while (lVar2 != lVar9);
        lVar2 = unaff_x19;
        puVar5 = &uStack_130;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(unaff_x19);
    param_3 = (undefined1 *)puVar5;
  }
  lVar2 = *(long *)(param_1 + 0x38);
  if (lVar2 != 0) {
    (**(code **)(lVar2 + 0x10))(lVar2,param_2);
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(unaff_x19);
  __Unwind_Resume(lVar2);
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  puVar3 = param_3;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10aec2548; end: 10aec2603; +[SCMixerNamespaceDocObjectStore _logInfoForNamespaceDataModel:] */

void FUN_10aec2548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_110c8fda8);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_3;
  func_0x00010bf446e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar2,param_2,&PTR____CFConstantStringClassReference_110ecb178);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aec2604; end: 10aec2623;  */

void FUN_10aec2604(undefined8 param_1,undefined8 param_2)

{
  func_0x00010c0d53e0(param_2);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aec2624; end: 10aec26a7; -[SCMixerNamespaceDocObjectStore .cxx_destruct] */

void FUN_10aec2624(long param_1)

{
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



/* Entry: 10aec26a8; end: 10aec28af; -[SCScheduleLensNamespaceDocObjectMetadataStore initWithScheduleNamespace:lensUpdateResolver:docObjectContext:namespaceDataTransformer:namespaceDataModelTransformer:lensDataConfig:] */

undefined1 *
FUN_10aec26a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_58 = PTR_PTR_112701788;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_7;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    uVar2 = 1;
    _dispatch_semaphore_create();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar5);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010be3b060();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x50);
    *(undefined1 **)((long)puVar1 + 0x50) = puVar4;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aec28b0; end: 10aec28d7; -[SCScheduleLensNamespaceDocObjectMetadataStore namespaceDataObservable] */

void FUN_10aec28b0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aec28d8; end: 10aec2917; -[SCScheduleLensNamespaceDocObjectMetadataStore namespaceData] */

void FUN_10aec28d8(long param_1)

{
  undefined8 uVar1;
  
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x40),0xffffffffffffffff);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar1);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aec2918; end: 10aec2a33; -[SCScheduleLensNamespaceDocObjectMetadataStore updateWithNamespaceData:completion:] */

void FUN_10aec2918(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10aec2a34; end: 10aec2a7b;  */

void FUN_10aec2a34(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee49c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10aec2a7c; end: 10aec2c8b; -[SCScheduleLensNamespaceDocObjectMetadataStore saveNamespaceData:completion:] */

void FUN_10aec2a7c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  long lStack_78;
  long lStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c14ffc0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf267e0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c14ffc0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,lVar5);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((uVar6 & 1) != 0) {
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_90 = 0xc2000000;
      pcStack_88 = FUN_10aec2c8c;
      puStack_80 = &UNK_1108a5ee8;
      lStack_78 = param_1;
      _objc_retain(param_3);
      lStack_70 = param_3;
      _objc_retain(param_4);
      uStack_68 = param_4;
      func_0x00010c0f7fc0(uVar7,param_2,&puStack_98);
      _objc_release(uStack_68);
      _objc_release(lStack_70);
      goto LAB_10aec2bdc;
    }
  }
  func_0x00010bde32a0(PTR_PTR_1126de868,param_2,0,param_4);
LAB_10aec2bdc:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10aec2c8c; end: 10aec2d1f;  */

void FUN_10aec2c8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_10aec2d20;
  puStack_40 = &UNK_110c8fdc8;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uStack_38 = uVar3;
  func_0x00010be99740(uVar1,param_2,uVar2,&puStack_58);
  _objc_release(uStack_38);
  return;
}



/* Entry: 10aec2d20; end: 10aec2d73;  */

void FUN_10aec2d20(long param_1,undefined8 param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aec2d74; end: 10aec2f5b; -[SCScheduleLensNamespaceDocObjectMetadataStore _updateWithNamespaceData:completion:] */

void FUN_10aec2d74(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c0d52c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c14ffc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    _objc_release(lVar1);
  }
  else {
    uVar3 = *(ulong *)(param_1 + 0x28);
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010c0d52c0(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = lVar4;
    func_0x00010c14ffc0();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar5;
    func_0x00010bf267e0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar3;
    func_0x00010c0720c0(uVar3,param_2,lVar6);
    _objc_release(lVar6);
    _objc_release(lVar5);
    _objc_release(lVar4);
    _objc_release(uVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
    if ((uVar7 & 1) != 0) {
      lVar1 = param_1;
      func_0x00010be827a0(param_1,param_2,param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be99740(param_1,param_2,lVar1,param_4);
      _objc_release(lVar1);
      goto LAB_10aec2eb0;
    }
  }
  func_0x00010bde36c0(PTR_PTR_1126de868,param_2,0,param_4);
LAB_10aec2eb0:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aec2f5c; end: 10aec3107; -[SCScheduleLensNamespaceDocObjectMetadataStore _saveNamespaceData:completion:] */

void FUN_10aec2f5c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = *(long *)(param_1 + 0x30);
  func_0x00010c0d5360();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010bde36c0(PTR_PTR_1126de868);
  }
  else {
    _objc_initWeak(auStack_48,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c11de00(uVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    _objc_retain(param_4);
    func_0x00010bee6200(param_1);
    _objc_release(uVar2);
    _objc_release(param_4);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10aec3108; end: 10aec3193;  */

void FUN_10aec3108(long param_1,int param_2)

{
  long lVar1;
  
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bde36d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (PTR_PTR_1126de868,PTR_s__completeWithErrorCode_completio_112556750,4,
               *(undefined8 *)(param_1 + 0x28));
    return;
  }
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bed99c0();
  _objc_release(lVar1);
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010aec3154. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,0,*(undefined8 *)(param_1 + 0x20));
    return;
  }
  return;
}



/* Entry: 10aec3194; end: 10aec32f3; -[SCScheduleLensNamespaceDocObjectMetadataStore restoreStateFromPersistenceWithCompletion:] */

void FUN_10aec3194(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x40),0xffffffffffffffff);
  if (*(char *)(param_1 + 0x48) == '\x01') {
    _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x40));
    if (param_3 != 0) {
      puVar1 = PTR_PTR_1126de868;
      func_0x00010be0b2c0(PTR_PTR_1126de868);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(param_3 + 0x10))(param_3,puVar1);
      _objc_release(puVar1);
    }
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar2);
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 10aec32f4; end: 10aec3393;  */

void FUN_10aec32f4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010be958a0();
    _objc_retainAutoreleasedReturnValue();
    *(bool *)(lVar1 + 0x48) = lVar2 == 0;
    _dispatch_semaphore_signal(*(undefined8 *)(lVar1 + 0x40));
    lVar3 = *(long *)(param_1 + 0x20);
    if (lVar3 != 0) {
      (**(code **)(lVar3 + 0x10))(lVar3,lVar2);
    }
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10aec3394; end: 10aec33ef; -[SCScheduleLensNamespaceDocObjectMetadataStore cleanDataInPersistence] */

void FUN_10aec3394(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10aec33f0;
  puStack_20 = &UNK_11087bb00;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 10aec33f0; end: 10aec33f7;  */

void FUN_10aec33f0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddee30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s__clean_112555528);
  return;
}



/* Entry: 10aec33f8; end: 10aec3507; -[SCScheduleLensNamespaceDocObjectMetadataStore _clean] */

void FUN_10aec33f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bf267e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c11de00(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bddf680(param_1);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10aec3508; end: 10aec3557;  */

void FUN_10aec3508(long param_1,int param_2)

{
  if (param_2 != 0) {
    param_1 = param_1 + 0x20;
    _objc_loadWeakRetained(param_1);
    func_0x00010bee5560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 10aec3558; end: 10aec36b7; -[SCScheduleLensNamespaceDocObjectMetadataStore _restoreStateFromPersistence] */

void FUN_10aec3558(double param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010bf267e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010be12c60(param_2,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar3 == 0) {
LAB_10aec35ec:
    uVar1 = 1;
  }
  else {
    func_0x00010c298be0(lVar3);
    if (param_1 != 7.0) {
      uVar1 = *(undefined8 *)(param_2 + 0x28);
      func_0x00010bf267e0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bddf8c0(param_2,param_3,uVar1);
      _objc_release(uVar1);
      _objc_release(lVar3);
      lVar3 = 0;
      goto LAB_10aec35ec;
    }
    lVar2 = *(long *)(param_2 + 0x38);
    func_0x00010c0d5320(lVar2,param_3,lVar3);
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) {
      uVar1 = *(undefined8 *)(param_2 + 0x50);
      *(long *)(param_2 + 0x50) = lVar2;
      _objc_retain(lVar2);
      _objc_release(uVar1);
      func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x20),param_3,lVar2);
      _objc_release(lVar2);
      puVar4 = (undefined *)0x0;
      goto LAB_10aec3608;
    }
    uVar1 = 3;
  }
  puVar4 = PTR_PTR_1126de868;
  func_0x00010be0b2c0(PTR_PTR_1126de868,param_3,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_10aec3608:
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 10aec36b8; end: 10aec3737; -[SCScheduleLensNamespaceDocObjectMetadataStore _updateInMemoryCacheWithNamespaceData:] */

void FUN_10aec36b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  _dispatch_semaphore_wait(*(undefined8 *)(param_1 + 0x40),0xffffffffffffffff);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  *(undefined8 *)(param_1 + 0x50) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar1);
  _dispatch_semaphore_signal(*(undefined8 *)(param_1 + 0x40));
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aec3738; end: 10aec37b7; -[SCScheduleLensNamespaceDocObjectMetadataStore _updateupdateInMemoryCacheWithEmptyNamespaceData] */

void FUN_10aec3738(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126de338;
  _objc_alloc(PTR_PTR_1126de338);
  func_0x00010c041c20();
  func_0x00010bed99c0(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 10aec37b8; end: 10aec380f; -[SCScheduleLensNamespaceDocObjectMetadataStore _initialNameSpaceDataWithScheduleNamespace:] */

void FUN_10aec37b8(void)

{
  _objc_alloc(PTR_PTR_1126de338);
  func_0x00010c041c20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aec3810; end: 10aec38ff; -[SCScheduleLensNamespaceDocObjectMetadataStore _processUpdateNamespaceData:] */

void FUN_10aec3810(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d52c0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0cacc0(uVar1,param_2,param_3,param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010c0d52c0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aec3900; end: 10aec3993; +[SCScheduleLensNamespaceDocObjectMetadataStore _completeWithErrorCode:completion:] */

void FUN_10aec3900(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_4);
  if (param_4 != 0) {
    func_0x00010be0b2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,param_1,0);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10aec3994; end: 10aec3a23; +[SCScheduleLensNamespaceDocObjectMetadataStore _completeSaveWithErrorCode:completion:] */

void FUN_10aec3994(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_4);
  if (param_4 != 0) {
    func_0x00010be0b2c0(param_1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_4 + 0x10))(param_4,param_1);
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10aec3a24; end: 10aec3aa3; +[SCScheduleLensNamespaceDocObjectMetadataStore _errorWithErrorCode:] */

void FUN_10aec3a24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSError_1126ae858;
  func_0x00010bdfaf60();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf99260(puVar1,param_2,&PTR____CFConstantStringClassReference_110f2f8b8,param_1,
                      param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10aec3aa4; end: 10aec3acb; +[SCScheduleLensNamespaceDocObjectMetadataStore _descriptionForErrorCode:] */

undefined ** FUN_10aec3aa4(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 - 1U < 4) {
    return (undefined **)(&PTR_PTR_110c8fe28)[param_3 - 1U];
  }
  return &PTR____CFConstantStringClassReference_110f2f8f8;
}



/* Entry: 10aec3acc; end: 10aec3adb; -[SCScheduleLensNamespaceDocObjectMetadataStore _cleanupOutdatedDataForCacheKey:] */

void FUN_10aec3acc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bddf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s__cleanupDataForCacheKey_onlyOutd_112555740,param_3,1,0,0);
  return;
}



/* Entry: 10aec3adc; end: 10aec3c03; -[SCScheduleLensNamespaceDocObjectMetadataStore _cleanupDataForCacheKey:onlyOutdatedData:completionQueue:completion:] */

void FUN_10aec3adc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_10aec3c04;
  puStack_60 = &UNK_110c8fdf8;
  lStack_58 = param_1;
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_48 = param_4;
  func_0x00010c0f8500(uVar1,param_2,&puStack_78,param_5,param_6);
  _objc_release(uVar1);
  _objc_release(uStack_50);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10aec3c04; end: 10aec405b;  */

void FUN_10aec3c04(long param_1,undefined8 param_2)

{
  long *plVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  double dVar9;
  undefined4 uStack_2ac;
  undefined8 *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined **ppuStack_290;
  undefined4 uStack_288;
  undefined4 uStack_278;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  long *plStack_230;
  long *plStack_228;
  undefined1 uStack_219;
  undefined **ppuStack_218;
  undefined4 uStack_210;
  undefined2 uStack_200;
  byte bStack_1fe;
  byte bStack_1fd;
  undefined1 *puStack_1e0;
  undefined ***pppuStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long *plStack_1b8;
  long *plStack_1b0;
  undefined1 uStack_1a1;
  undefined **ppuStack_1a0;
  undefined4 uStack_198;
  undefined1 uStack_188;
  undefined2 uStack_187;
  byte bStack_185;
  undefined1 *puStack_168;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  long *plStack_140;
  long *plStack_138;
  undefined **ppuStack_130;
  undefined4 uStack_128;
  undefined2 uStack_118;
  byte bStack_116;
  byte bStack_115;
  undefined ***pppuStack_f8;
  undefined ***pppuStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long *plStack_d0;
  long *plStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  _objc_retain(param_2);
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126de810);
  if (lVar2 == 0) {
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_c0,lVar2);
  }
  puVar3 = &uStack_1a1;
  func_0x000107c2ba64();
  uStack_187 = *(undefined2 *)(puVar3 + 0x19);
  bStack_185 = puVar3[0x1b];
  uStack_198 = 2;
  uStack_188 = 0;
  ppuStack_1a0 = &PTR_DAT_110862700;
  puStack_158 = (undefined *)0x0;
  uStack_160 = 0;
  uStack_148 = 0;
  uStack_150 = 0;
  plStack_138 = (long *)0x0;
  plStack_140 = (long *)0x0;
  puVar4 = &uStack_219;
  puStack_168 = puVar3;
  func_0x000107c2ba64();
  uStack_288 = 0xf;
  uStack_278 = 0x100;
  uVar8 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar8);
  ppuStack_290 = &PTR_DAT_110862760;
  dVar9 = 0.0;
  uStack_250 = 0;
  uStack_258 = 0;
  uStack_240 = 0;
  uStack_248 = 0;
  plStack_230 = (long *)0x0;
  uStack_238 = 0;
  plStack_228 = (long *)0x0;
  bStack_1fe = puVar4[0x1a];
  bStack_1fd = puVar4[0x1b];
  uStack_210 = 10;
  uStack_200 = 0x100;
  ppuStack_218 = &PTR_DAT_110862700;
  pppuStack_f0 = &ppuStack_218;
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  plStack_1b8 = (long *)0x0;
  uStack_1c0 = 0;
  plStack_1b0 = (long *)0x0;
  bStack_116 = uStack_187._1_1_ | bStack_1fe;
  bStack_115 = bStack_185 & bStack_1fd;
  uStack_128 = 4;
  uStack_118 = 0x100;
  ppuStack_130 = &PTR_DAT_1108629c8;
  plStack_c8 = (long *)0x0;
  plStack_d0 = (long *)0x0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lStack_e8 = 0;
  puStack_2a8 = (undefined8 *)0x0;
  puStack_2a0 = (undefined8 *)0x0;
  uStack_298 = 0;
  uStack_2ac = 0;
  puVar5 = &uStack_c0;
  uStack_260 = uVar8;
  puStack_1e0 = puVar4;
  pppuStack_1d8 = &ppuStack_290;
  pppuStack_f8 = &ppuStack_1a0;
  func_0x000107c310cc(puVar5,&ppuStack_130,&puStack_2a8,&uStack_2ac);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_2a8 != (undefined8 *)0x0) {
    puStack_2a0 = puStack_2a8;
    __ZdlPv();
  }
  plVar1 = plStack_c8;
  ppuStack_130 = &PTR_DAT_1108629c8;
  plStack_c8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_d0;
  plStack_d0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (lStack_e8 != 0) {
    __ZdlPv();
  }
  plVar1 = plStack_1b0;
  ppuStack_218 = &PTR_DAT_110862700;
  plStack_1b0 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_1b8;
  plStack_1b8 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_2a8 = &uStack_1d0;
  func_0x000107c27dd4(&puStack_2a8);
  plVar1 = plStack_228;
  ppuStack_290 = &PTR_DAT_110862760;
  plStack_228 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_230;
  plStack_230 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  puStack_2a8 = &uStack_248;
  func_0x000107c27dd4(&puStack_2a8);
  _objc_release(uStack_260);
  plVar1 = plStack_138;
  ppuStack_1a0 = &PTR_DAT_110862700;
  plStack_138 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = plStack_140;
  plStack_140 = (long *)0x0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  ppuStack_218 = &puStack_158;
  func_0x000107c27dd4(&ppuStack_218);
  func_0x000107c27da8(&uStack_98);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(lVar2);
  puVar6 = puVar5;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar6 != (undefined8 *)0x0) {
    if (*(char *)(param_1 + 0x30) == '\x01') {
      puVar6 = puVar5;
      func_0x00010bfb1920(puVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c298be0();
      _objc_release(puVar6);
      if (dVar9 == 7.0) goto LAB_10aec3fd0;
    }
    puVar7 = PTR_PTR_1126de8e0;
    puVar6 = puVar5;
    func_0x00010bfb1920(puVar5);
    _objc_retainAutoreleasedReturnValue();
    FUN_10aeceec4(puVar7,puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    func_0x00010c25ed40(param_2);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
LAB_10aec3fd0:
  _objc_release(puVar5);
  _objc_release(param_2);
  return;
}



/* Entry: 10aec405c; end: 10aec43e7; -[SCScheduleLensNamespaceDocObjectMetadataStore _fetchNamespaceDataModelForCacheKey:] */

void FUN_10aec405c(long param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined4 uStack_29c;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined **ppuStack_280;
  undefined4 uStack_278;
  undefined4 uStack_268;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  long *plStack_220;
  long *plStack_218;
  undefined1 uStack_209;
  undefined **ppuStack_208;
  undefined4 uStack_200;
  undefined2 uStack_1f0;
  byte bStack_1ee;
  byte bStack_1ed;
  undefined1 *puStack_1d0;
  undefined ***pppuStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long *plStack_1a8;
  long *plStack_1a0;
  undefined1 uStack_191;
  undefined **ppuStack_190;
  undefined4 uStack_188;
  undefined1 uStack_178;
  undefined1 uStack_177;
  byte bStack_176;
  byte bStack_175;
  undefined1 *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  long *plStack_130;
  long *plStack_128;
  undefined **ppuStack_120;
  undefined4 uStack_118;
  undefined2 uStack_108;
  byte bStack_106;
  byte bStack_105;
  undefined ***pppuStack_e8;
  undefined ***pppuStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long *plStack_c0;
  long *plStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_opt_class(PTR_PTR_1126de810);
  if (lVar4 == 0) {
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_b0,lVar4);
  }
  puVar5 = &uStack_191;
  func_0x000107c2ba64();
  uStack_177 = puVar5[0x19];
  bVar1 = puVar5[0x1a];
  bVar2 = puVar5[0x1b];
  uStack_188 = 2;
  uStack_178 = 0;
  ppuStack_190 = &PTR_DAT_110862700;
  puStack_148 = (undefined *)0x0;
  uStack_150 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  plStack_128 = (long *)0x0;
  plStack_130 = (long *)0x0;
  puVar6 = &uStack_209;
  bStack_176 = bVar1;
  bStack_175 = bVar2;
  puStack_158 = puVar5;
  func_0x000107c2ba64();
  uStack_278 = 0xf;
  uStack_268 = 0x100;
  _objc_retain(param_3);
  ppuStack_280 = &PTR_DAT_110862760;
  uStack_240 = 0;
  uStack_248 = 0;
  uStack_230 = 0;
  uStack_238 = 0;
  plStack_220 = (long *)0x0;
  uStack_228 = 0;
  plStack_218 = (long *)0x0;
  bStack_1ee = puVar6[0x1a];
  bStack_1ed = puVar6[0x1b];
  uStack_200 = 10;
  uStack_1f0 = 0x100;
  ppuStack_208 = &PTR_DAT_110862700;
  pppuStack_e0 = &ppuStack_208;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  plStack_1a8 = (long *)0x0;
  uStack_1b0 = 0;
  plStack_1a0 = (long *)0x0;
  bStack_106 = bStack_1ee | bVar1;
  bStack_105 = bStack_1ed & bVar2;
  uStack_118 = 4;
  uStack_108 = 0x100;
  ppuStack_120 = &PTR_DAT_1108629c8;
  pppuStack_e8 = &ppuStack_190;
  plStack_b8 = (long *)0x0;
  plStack_c0 = (long *)0x0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  lStack_d8 = 0;
  puStack_298 = (undefined8 *)0x0;
  puStack_290 = (undefined8 *)0x0;
  uStack_288 = 0;
  uStack_29c = 0;
  puVar7 = &uStack_b0;
  uStack_250 = param_3;
  puStack_1d0 = puVar6;
  pppuStack_1c8 = &ppuStack_280;
  func_0x000107c310cc(puVar7,&ppuStack_120,&puStack_298,&uStack_29c);
  _objc_retainAutoreleasedReturnValue();
  if (puStack_298 != (undefined8 *)0x0) {
    puStack_290 = puStack_298;
    __ZdlPv();
  }
  plVar3 = plStack_b8;
  ppuStack_120 = &PTR_DAT_1108629c8;
  plStack_b8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_c0;
  plStack_c0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  if (lStack_d8 != 0) {
    __ZdlPv();
  }
  plVar3 = plStack_1a0;
  ppuStack_208 = &PTR_DAT_110862700;
  plStack_1a0 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_1a8;
  plStack_1a8 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_298 = &uStack_1c0;
  func_0x000107c27dd4(&puStack_298);
  plVar3 = plStack_218;
  ppuStack_280 = &PTR_DAT_110862760;
  plStack_218 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_220;
  plStack_220 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  puStack_298 = &uStack_238;
  func_0x000107c27dd4(&puStack_298);
  _objc_release(uStack_250);
  plVar3 = plStack_128;
  ppuStack_190 = &PTR_DAT_110862700;
  plStack_128 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  plVar3 = plStack_130;
  plStack_130 = (long *)0x0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  ppuStack_208 = &puStack_148;
  func_0x000107c27dd4(&ppuStack_208);
  func_0x000107c27da8(&uStack_88);
  _objc_release(uStack_98);
  _objc_release(uStack_a0);
  _objc_release(lVar4);
  puVar8 = puVar7;
  func_0x00010bfb1920(puVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 10aec43e8; end: 10aec4757; -[SCScheduleLensNamespaceDocObjectMetadataStore _upsertNamespaceDataModel:completionQueue:completion:] */

void FUN_10aec43e8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

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
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126de810;
  _objc_alloc();
  uVar11 = param_4;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bef0bc0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c105c60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x00010c27d100(param_4);
  func_0x00010c08a700(param_4);
  uVar5 = param_4;
  func_0x00010c0da7c0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_4;
  func_0x00010c0cf060();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_4;
  func_0x00010bf3d3e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_4;
  func_0x00010bfa81c0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_4;
  func_0x00010c0cf080();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = param_4;
  func_0x00010c0d53e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02dd80(param_1,0x401c000000000000,puVar1,param_3,uVar11,uVar2,uVar3,uVar4,uVar5,uVar6
                      ,uVar7,uVar8,0,0,uVar9,uVar10);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar11);
  uVar11 = *(undefined8 *)(param_2 + 8);
  func_0x00010c269d40(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_10aec4758;
  puStack_88 = &UNK_1108af4c0;
  _objc_retain(puVar1);
  puStack_80 = puVar1;
  func_0x00010c0f8500(uVar11,param_3,&puStack_a0,param_5,param_6);
  _objc_release(uVar11);
  _objc_release(puStack_80);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10aec4758; end: 10aec47e3;  */

void FUN_10aec4758(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  _objc_retain(param_2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  FUN_10aecef38(uVar1,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10aec47e4; end: 10aec47eb; -[SCScheduleLensNamespaceDocObjectMetadataStore scheduleNamespace] */

undefined8 FUN_10aec47e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aec47ec; end: 10aec486f; -[SCScheduleLensNamespaceDocObjectMetadataStore .cxx_destruct] */

void FUN_10aec47ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
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



/* Entry: 10aec4870; end: 10aec48b7; +[SCLensMetadataStoreEvent shouldAutoSave] */

void FUN_10aec4870(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126de4e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10aec48b8; end: 10aec48db; -[SCLensMetadataStoreEvent copyWithZone:] */

undefined8 FUN_10aec48b8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec48dc; end: 10aec48e3; -[SCLensMetadataStoreEvent hash] */

undefined8 FUN_10aec48dc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aec48e4; end: 10aec4927; -[SCLensMetadataStoreEvent internalInit] */

void FUN_10aec48e4(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112701790;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10aec4928; end: 10aec49af; -[SCLensMetadataStoreEvent isEqual:] */

bool FUN_10aec4928(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
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
      if ((uVar3 & 1) == 0) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10aec49b0; end: 10aec49cb; -[SCLensMetadataStoreEvent matchShouldAutoSave:] */

void FUN_10aec49b0(long param_1,undefined8 param_2,long param_3)

{
  if ((param_3 != 0) && (*(long *)(param_1 + 8) == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010aec49c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_3 + 0x10))(param_3);
    return;
  }
  return;
}



/* Entry: 10aec49cc; end: 10aec4b03; -[SCLensUpdateMetadata initWithIdValue:checksum:clientCacheTtlMinutes:trackingInfo:prefetchContexts:] */

undefined1 *
FUN_10aec49cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

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
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_112701798;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aec4b04; end: 10aec4b27; -[SCLensUpdateMetadata copyWithZone:] */

undefined8 FUN_10aec4b04(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec4b28; end: 10aec4bbf; -[SCLensUpdateMetadata hash] */

undefined8 * FUN_10aec4b28(long param_1,undefined8 param_2,undefined1 *param_3)

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
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10aec4c88:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aec4c94;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x20);
            if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
              if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_10aec4c94;
              }
              goto LAB_10aec4c88;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aec4c94:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10aec4bc0; end: 10aec4caf; -[SCLensUpdateMetadata isEqual:] */

long FUN_10aec4bc0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec4c88:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec4c94;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x28);
              if (lVar3 != *(long *)(param_3 + 0x28)) {
                func_0x00010c071ae0();
                goto LAB_10aec4c94;
              }
              goto LAB_10aec4c88;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aec4c94:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec4cb0; end: 10aec4cb7; -[SCLensUpdateMetadata idValue] */

undefined8 FUN_10aec4cb0(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aec4cb8; end: 10aec4cbf; -[SCLensUpdateMetadata checksum] */

undefined8 FUN_10aec4cb8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aec4cc0; end: 10aec4cc7; -[SCLensUpdateMetadata clientCacheTtlMinutes] */

undefined8 FUN_10aec4cc0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aec4cc8; end: 10aec4ccf; -[SCLensUpdateMetadata trackingInfo] */

undefined8 FUN_10aec4cc8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10aec4cd0; end: 10aec4cd7; -[SCLensUpdateMetadata prefetchContexts] */

undefined8 FUN_10aec4cd0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10aec4cd8; end: 10aec4d2b; -[SCLensUpdateMetadata .cxx_destruct] */

void FUN_10aec4cd8(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aec4d2c; end: 10aec4ddb; -[SCUnlockableDataStoreMemento initWithCoder:] */

undefined1 * FUN_10aec4d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127017a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aec4ddc; end: 10aec4dff; -[SCUnlockableDataStoreMemento copyWithZone:] */

undefined8 FUN_10aec4ddc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec4e00; end: 10aec4e5f; -[SCUnlockableDataStoreMemento encodeWithCoder:] */

void FUN_10aec4e00(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110f2f998);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110f2f9b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10aec4e60; end: 10aec4ed3; -[SCUnlockableDataStoreMemento hash] */

undefined8 * FUN_10aec4e60(long param_1,undefined8 param_2,undefined8 *param_3)

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
  func_0x000107c3191c(puVar3,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10aec4f54:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10aec4f60;
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
          goto LAB_10aec4f60;
        }
        goto LAB_10aec4f54;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10aec4f60:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10aec4ed4; end: 10aec4f7b; -[SCUnlockableDataStoreMemento isEqual:] */

long FUN_10aec4ed4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec4f54:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec4f60;
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
          goto LAB_10aec4f60;
        }
        goto LAB_10aec4f54;
      }
    }
    lVar3 = 0;
  }
LAB_10aec4f60:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec4f7c; end: 10aec5053; -[SCUpdateLensScheduleNamespaceData initWithNamespaceData:activeChecksumList:preCachedChecksumList:] */

undefined1 *
FUN_10aec4f7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1127017a8;
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
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aec5054; end: 10aec5077; -[SCUpdateLensScheduleNamespaceData copyWithZone:] */

undefined8 FUN_10aec5054(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec5078; end: 10aec50f7; -[SCUpdateLensScheduleNamespaceData hash] */

undefined8 * FUN_10aec5078(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10aec5190:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aec519c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x18);
          if (puVar6 != *(undefined1 **)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10aec519c;
          }
          goto LAB_10aec5190;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aec519c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10aec50f8; end: 10aec51b7; -[SCUpdateLensScheduleNamespaceData isEqual:] */

long FUN_10aec50f8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec5190:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec519c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if (lVar3 != *(long *)(param_3 + 0x18)) {
            func_0x00010c071ae0();
            goto LAB_10aec519c;
          }
          goto LAB_10aec5190;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10aec519c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10aec51b8; end: 10aec51bf; -[SCUpdateLensScheduleNamespaceData namespaceData] */

undefined8 FUN_10aec51b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aec51c0; end: 10aec51c7; -[SCUpdateLensScheduleNamespaceData activeChecksumList] */

undefined8 FUN_10aec51c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aec51c8; end: 10aec51cf; -[SCUpdateLensScheduleNamespaceData preCachedChecksumList] */

undefined8 FUN_10aec51c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aec51d0; end: 10aec520b; -[SCUpdateLensScheduleNamespaceData .cxx_destruct] */

void FUN_10aec51d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aec520c; end: 10aec52a3; -[SCLensGtqFeaturedLensesResponseParserEvent initWithNamespaceId:parsingDuration:lensMetadataCount:] */

undefined1 *
FUN_10aec520c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1127017b0;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_1;
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10aec52a4; end: 10aec52c7; -[SCLensGtqFeaturedLensesResponseParserEvent copyWithZone:] */

undefined8 FUN_10aec52a4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aec52c8; end: 10aec5357; -[SCLensGtqFeaturedLensesResponseParserEvent hash] */

undefined8 * FUN_10aec52c8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  double dVar7;
  double dVar8;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010bfde980();
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = ~*(ulong *)(param_1 + 0x10) + *(ulong *)(param_1 + 0x10) * 0x40000;
  uVar5 = (uVar5 ^ uVar5 >> 0x1f) * 0x15;
  uStack_38 = (uVar5 ^ uVar5 >> 0xb) * 0x41;
  uStack_38 = uStack_38 ^ uStack_38 >> 0x16;
  uStack_40 = uVar2;
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10aec5404:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10aec5410;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      dVar8 = ABS(*(double *)((long)puVar3 + 0x10) - *(double *)(param_3 + 0x10));
      dVar7 = ABS(*(double *)((long)puVar3 + 0x10) + *(double *)(param_3 + 0x10)) *
              2.220446049250313e-16;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar8) && (bVar1 = false, !NAN(dVar8) && !NAN(dVar7))) {
        bVar1 = dVar8 < dVar7;
      }
      if (bVar1) {
        puVar6 = *(undefined1 **)((long)puVar3 + 8);
        if (puVar6 != *(undefined1 **)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10aec5410;
        }
        goto LAB_10aec5404;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10aec5410:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10aec5358; end: 10aec542b; -[SCLensGtqFeaturedLensesResponseParserEvent isEqual:] */

long FUN_10aec5358(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10aec5404:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10aec5410;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      dVar6 = ABS(*(double *)(param_1 + 0x10) - *(double *)(param_3 + 0x10));
      dVar5 = ABS(*(double *)(param_1 + 0x10) + *(double *)(param_3 + 0x10)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 8);
        if (lVar4 != *(long *)(param_3 + 8)) {
          func_0x00010c071ae0();
          goto LAB_10aec5410;
        }
        goto LAB_10aec5404;
      }
    }
    lVar4 = 0;
  }
LAB_10aec5410:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 10aec542c; end: 10aec5433; -[SCLensGtqFeaturedLensesResponseParserEvent namespaceId] */

undefined8 FUN_10aec542c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10aec5434; end: 10aec543b; -[SCLensGtqFeaturedLensesResponseParserEvent parsingDuration] */

undefined8 FUN_10aec5434(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10aec543c; end: 10aec5443; -[SCLensGtqFeaturedLensesResponseParserEvent lensMetadataCount] */

undefined8 FUN_10aec543c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aec5444; end: 10aec544f; -[SCLensGtqFeaturedLensesResponseParserEvent .cxx_destruct] */

void FUN_10aec5444(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}


