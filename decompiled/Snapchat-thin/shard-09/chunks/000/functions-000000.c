/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1067c9614; end: 1067c9647; -[SCCNotificationSettingsRoot initWithViewModel:componentContext:runtime:] */

void FUN_1067c9614(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f3308;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 1067c9648; end: 1067c9693; -[SCCNotificationSettingsRoot setViewModel:] */

void FUN_1067c9648(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  func_0x0001067c9710();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067c9694; end: 1067c96d3; -[SCCNotificationSettingsRoot viewModel] */

void FUN_1067c9694(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  func_0x0001067c9710();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1067c96d4; end: 1067c9703;  */

void FUN_1067c96d4(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1067c9704; end: 1067c9717;  */

void FUN_1067c9704(long param_1)

{
  *(undefined1 *)(param_1 + 0x18) = 1;
  return;
}



/* Entry: 1067c9718; end: 1067c971f; -[SCCNotificationSettingsLinkedScreen__Enum init] */

void FUN_1067c9718(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c010630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_initWithEnumCasesCount__1125e1b58,2);
  return;
}



/* Entry: 1067c9720; end: 1067c97e7; -[SCCNotificationSettingsRootContext initWithNavigator:supStore:preferenceHost:openLinkedScreen:] */

undefined8 *
FUN_1067c9720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_retainBlock();
  puStack_48 = PTR_PTR_1126f3310;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFieldValues__1125e24b8,0);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_6);
  return puVar1;
}



/* Entry: 1067c97e8; end: 1067c980f; +[SCCNotificationSettingsRootContext valdiMarshallableObjectDescriptor] */

void FUN_1067c97e8(undefined8 *param_1)

{
  *param_1 = &PTR_s_navigator_11093cf80;
  param_1[1] = &PTR_s_SCValdiINavigator_11093d058;
  param_1[2] = &PTR_s_oi_v_11093cf50;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 1067c9810; end: 1067c9833;  */

undefined8 FUN_1067c9810(code *param_1,undefined8 *param_2)

{
  (*param_1)(*param_2,*(undefined4 *)(param_2 + 1));
  return 0;
}



/* Entry: 1067c9834; end: 1067c98b3;  */

void FUN_1067c9834(undefined8 param_1)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1067c98b4;
  puStack_30 = &UNK_11085e0c0;
  uStack_28 = param_1;
  _objc_retain(param_1);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 1067c98b4; end: 1067c98e3;  */

void FUN_1067c98b4(long param_1)

{
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 1067c98e4; end: 1067c9947; -[SCNotificationSettingsEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c98e4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  lVar2 = (long)_DAT_112750810;
  func_0x00010c256be0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f3318;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067c9948; end: 1067c999b; -[SCNotificationSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067c9948(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112750818);
  _objc_destroyWeak(param_1 + _DAT_112750814);
  _objc_destroyWeak(param_1 + _DAT_11275080c);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_112750810,0);
  return;
}



/* Entry: 1067c999c; end: 1067c9a3f; -[SCCommunitiesAPICommunityStoreProvider initWithCommunitiesAttributionProviding:currentUserId:] */

undefined1 *
FUN_1067c999c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3320;
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



/* Entry: 1067c9a40; end: 1067c9b8b; -[SCCommunitiesAPICommunityStoreProvider getMyCommunityPills] */

void FUN_1067c9a40(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c266280();
  uVar2 = uVar1;
  func_0x00010bfc3e60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010bfc8a60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar4 = uVar2;
  func_0x00010bf41860(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  uVar2 = uVar4;
  func_0x00010c272120(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1067c9b8c; end: 1067c9c07;  */

void FUN_1067c9b8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bde2680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067c9c08; end: 1067c9d23; -[SCCommunitiesAPICommunityStoreProvider _getMyCollegeCommunityPill] */

void FUN_1067c9c08(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfc3e60();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  uVar2 = uVar3;
  func_0x00010c272120(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1067c9d24; end: 1067c9eab;  */

void FUN_1067c9d24(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *unaff_x23;
  long unaff_x24;
  long lVar7;
  undefined1 auStack_180 [8];
  undefined1 auStack_178 [8];
  long lStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  long lStack_158;
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
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  lVar1 = param_1;
  func_0x00010bde2680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar1);
  lVar7 = lVar1;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    unaff_x24 = *plStack_120;
    param_1 = lVar7;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != unaff_x24) {
          _objc_enumerationMutation(lVar1);
        }
        puVar6 = *(undefined **)(lStack_128 + lVar7 * 8);
        unaff_x23 = puVar6;
        func_0x00010c27dd80();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = PTR_PTR_1133bb440;
        _objc_release();
        if (unaff_x23 == puVar3) {
          _objc_retain(puVar6);
          goto LAB_1067c9e54;
        }
        lVar7 = lVar7 + 1;
      } while (param_1 != lVar7);
      param_1 = lVar1;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (param_1 != 0);
  }
  puVar6 = (undefined *)0x0;
LAB_1067c9e54:
  _objc_release(lVar1);
  _objc_release(lVar1);
  lVar7 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    pcStack_138 = FUN_1067c9eac;
    lStack_170 = unaff_x24;
    puStack_168 = unaff_x23;
    puStack_160 = puVar6;
    lStack_158 = param_1;
    lStack_150 = lVar1;
    lStack_148 = param_2;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain(puVar5);
    _objc_initWeak(auStack_178,lVar7);
    puVar2 = *(undefined **)(lVar7 + 8);
    func_0x00010c269d40(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfa5ba0();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_180,auStack_178);
    puVar4 = puVar3;
    func_0x00010c0b8600(puVar3);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar4;
    func_0x00010c272120();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar4);
    _objc_destroyWeak(auStack_180);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_178);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1067c9eac; end: 1067c9fdb; -[SCCommunitiesAPICommunityStoreProvider _getUserCollegeCommunityPill:] */

void FUN_1067c9eac(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfa5ba0();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  uVar3 = uVar2;
  func_0x00010c0b8600(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1067c9fdc; end: 1067ca1e3;  */

void FUN_1067c9fdc(long param_1,undefined *param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uStack_120;
  long lStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar6 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bf52a60();
  puVar9 = (undefined *)0x0;
  if (puVar1 != (undefined *)0x0) {
    lVar8 = *plStack_110;
    do {
      puVar9 = (undefined *)0x0;
      do {
        if (*plStack_110 != lVar8) {
          _objc_enumerationMutation(param_2);
        }
        lVar7 = *(long *)(lStack_118 + (long)puVar9 * 8);
        lVar2 = lVar7;
        func_0x00010bf43080();
        _objc_retainAutoreleasedReturnValue();
        lVar3 = lVar2;
        func_0x00010c0ecf20();
        if (lVar3 == 1) {
          puVar9 = PTR_PTR_1126b3df8;
          _objc_alloc(PTR_PTR_1126b3df8);
          func_0x00010bfceb20(lVar7);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar2;
          func_0x00010c22d240(lVar2);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01b140(puVar9);
          _objc_release(lVar8);
          _objc_release(lVar7);
          puVar4 = (undefined1 *)(param_1 + 0x20);
          _objc_loadWeakRetained();
          lVar8 = lVar2;
          func_0x00010bf1f020(lVar2);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x00010bdee9c0();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = (undefined8 *)puVar5;
          func_0x00010c19a4a0(puVar9);
          _objc_release(puVar5);
          _objc_release(lVar8);
          _objc_release(puVar4);
          _objc_release(lVar2);
          goto LAB_1067ca198;
        }
        _objc_release(lVar2);
        puVar9 = puVar9 + 1;
      } while (puVar1 != puVar9);
      puVar1 = param_2;
      puVar6 = &uStack_120;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined *)0x0);
    puVar9 = (undefined *)0x0;
  }
LAB_1067ca198:
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar6);
    puVar4 = (undefined1 *)puVar6;
    func_0x00010c0720c0();
    if ((int)puVar4 == 0) {
      func_0x00010be23aa0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_2;
    }
    else {
      func_0x00010be20a80(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_2;
    }
    _objc_release(puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1067ca1e4; end: 1067ca253; -[SCCommunitiesAPICommunityStoreProvider getVerifiedCollegeCommunityPillWithUserId:] */

void FUN_1067ca1e4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,*(undefined8 *)(param_1 + 0x10));
  if ((int)uVar1 == 0) {
    func_0x00010be23aa0(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    func_0x00010be20a80(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 1067ca254; end: 1067ca76f; -[SCCommunitiesAPICommunityStoreProvider _communityPillsWithCustomStoriesByPublicationId:pendingCustomStoriesByPublicationId:] */

void FUN_1067ca254(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  plStack_1a0 = (long *)0x0;
  uStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  uStack_180 = 0;
  _objc_retain(param_3);
  lVar3 = param_3;
  func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
  if (lVar3 != 0) {
    lVar16 = *plStack_1a0;
    do {
      lVar17 = 0;
      do {
        if (*plStack_1a0 != lVar16) {
          _objc_enumerationMutation(param_3);
        }
        lVar4 = param_3;
        func_0x00010c0e00e0(param_3,param_2,*(undefined8 *)(lStack_1a8 + lVar17 * 8));
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c27dd80();
        if (lVar5 == 7) {
          lVar5 = lVar4;
          func_0x00010bfa2680();
          _objc_retainAutoreleasedReturnValue();
          if (lVar5 != 0) {
            lVar6 = lVar4;
            func_0x00010bf60900();
            _objc_release(lVar5);
            if ((int)lVar6 != 0) {
              lVar5 = lVar4;
              func_0x00010bfa2680();
              _objc_retainAutoreleasedReturnValue();
              lVar6 = lVar5;
              func_0x00010bf0a5c0();
              _objc_retainAutoreleasedReturnValue();
              _objc_release(lVar5);
              lVar5 = lVar6;
              func_0x00010c0ecf20();
              puVar7 = PTR_PTR_1126b3df8;
              ppuVar1 = &PTR_PTR_1133bb448;
              if (lVar5 != 2) {
                ppuVar1 = &PTR_PTR_1133bb440;
              }
              puVar18 = *ppuVar1;
              _objc_retain(puVar18);
              _objc_alloc(puVar7);
              lVar5 = lVar4;
              func_0x00010c11ac00(lVar4);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar6;
              func_0x00010c22d240(lVar6);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c01b140(puVar7,param_2,lVar5,lVar8,1,puVar18);
              _objc_release(puVar18);
              _objc_release(lVar8);
              _objc_release(lVar5);
              lVar5 = lVar4;
              func_0x00010bfa2680(lVar4);
              _objc_retainAutoreleasedReturnValue();
              lVar8 = lVar5;
              func_0x00010bf0a5c0();
              _objc_retainAutoreleasedReturnValue();
              lVar9 = lVar8;
              func_0x00010bf1f020();
              _objc_retainAutoreleasedReturnValue();
              uVar10 = param_1;
              func_0x00010bdee9c0(param_1,param_2,lVar9);
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c19a4a0(puVar7,param_2,uVar10);
              _objc_release(uVar10);
              _objc_release(lVar9);
              _objc_release(lVar8);
              _objc_release(lVar5);
              func_0x00010befa120(puVar2,param_2,puVar7);
              _objc_release(puVar7);
              _objc_release(lVar6);
            }
          }
        }
        _objc_release(lVar4);
        lVar17 = lVar17 + 1;
      } while (lVar3 != lVar17);
      lVar3 = param_3;
      func_0x00010bf52a60(param_3,param_2,&uStack_1b0,auStack_f0,0x10);
    } while (lVar3 != 0);
  }
  _objc_release(param_3);
  uStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  lStack_1e8 = 0;
  uStack_1f0 = 0;
  uStack_1d8 = 0;
  plStack_1e0 = (long *)0x0;
  _objc_retain(param_4);
  puVar15 = &uStack_1f0;
  lVar3 = param_4;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar16 = *plStack_1e0;
    do {
      lVar17 = 0;
      do {
        if (*plStack_1e0 != lVar16) {
          _objc_enumerationMutation(param_4);
        }
        lVar4 = param_4;
        func_0x00010c0e00e0(param_4,param_2,*(undefined8 *)(lStack_1e8 + lVar17 * 8));
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bfa2680();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar5 != 0) {
          lVar5 = lVar4;
          func_0x00010bfa2680();
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010bf0a5c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          lVar5 = lVar6;
          func_0x00010c0ecf20();
          puVar7 = PTR_PTR_1126b3df8;
          ppuVar1 = &PTR_PTR_1133bb448;
          if (lVar5 != 2) {
            ppuVar1 = &PTR_PTR_1133bb440;
          }
          puVar18 = *ppuVar1;
          _objc_retain(puVar18);
          _objc_alloc(puVar7);
          lVar5 = lVar4;
          func_0x00010c11ac00(lVar4);
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar6;
          func_0x00010c22d240(lVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c01b140(puVar7,param_2,lVar5,lVar8,0,puVar18);
          _objc_release(puVar18);
          _objc_release(lVar8);
          _objc_release(lVar5);
          lVar5 = lVar4;
          func_0x00010bfa2680();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar5;
          func_0x00010bf0a5c0();
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar8;
          func_0x00010bf1f020();
          _objc_retainAutoreleasedReturnValue();
          uVar10 = param_1;
          func_0x00010bdee9c0(param_1,param_2,lVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c19a4a0(puVar7,param_2,uVar10);
          _objc_release(uVar10);
          _objc_release(lVar9);
          _objc_release(lVar8);
          _objc_release(lVar5);
          func_0x00010befa120(puVar2,param_2,puVar7);
          _objc_release(puVar7);
          _objc_release(lVar6);
        }
        _objc_release(lVar4);
        lVar17 = lVar17 + 1;
      } while (lVar3 != lVar17);
      puVar15 = &uStack_1f0;
      lVar3 = param_4;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_retain(puVar15);
    puVar11 = puVar15;
    func_0x00010c120160();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = puVar11;
    func_0x00010c08fa60();
    _objc_release(puVar11);
    puVar2 = (undefined *)0x0;
    if (puVar12 != (undefined8 *)0x0) {
      puVar11 = puVar15;
      func_0x00010c120160(puVar15);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = PTR_PTR_1126b1428;
      _objc_alloc(PTR_PTR_1126b1428);
      func_0x00010c0038e0();
      puVar12 = puVar15;
      func_0x00010c0c54a0();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar12;
      func_0x00010c08fa60();
      _objc_release(puVar12);
      if (puVar13 != (undefined8 *)0x0) {
        puVar7 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
        puVar12 = puVar15;
        func_0x00010c0c54a0(puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff6b20(puVar7,param_2,puVar12,4);
        _objc_release(puVar12);
        puVar18 = PTR__OBJC_CLASS___NSData_1126ae778;
        _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
        puVar12 = puVar15;
        func_0x00010c0c5480(puVar15);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bff6b20(puVar18,param_2,puVar12,4);
        _objc_release(puVar12);
        puVar14 = PTR_PTR_1126b1430;
        _objc_alloc(PTR_PTR_1126b1430);
        func_0x00010c020ba0();
        func_0x00010c195c60(puVar2,param_2,puVar14);
        _objc_release(puVar14);
        _objc_release(puVar18);
        _objc_release(puVar7);
      }
      _objc_release(puVar11);
    }
    _objc_release(puVar15);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067ca770; end: 1067ca8f3; -[SCCommunitiesAPICommunityStoreProvider _createImageInfoWithBoltMediaServingInfo:] */

void FUN_1067ca770(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c120160();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  puVar3 = (undefined *)0x0;
  if (lVar2 != 0) {
    lVar1 = param_3;
    func_0x00010c120160(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b1428;
    _objc_alloc(PTR_PTR_1126b1428);
    func_0x00010c0038e0();
    lVar2 = param_3;
    func_0x00010c0c54a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010c08fa60();
    _objc_release(lVar2);
    if (lVar4 != 0) {
      puVar5 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      lVar2 = param_3;
      func_0x00010c0c54a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff6b20(puVar5,param_2,lVar2,4);
      _objc_release(lVar2);
      puVar6 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      lVar2 = param_3;
      func_0x00010c0c5480(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bff6b20(puVar6,param_2,lVar2,4);
      _objc_release(lVar2);
      puVar7 = PTR_PTR_1126b1430;
      _objc_alloc(PTR_PTR_1126b1430);
      func_0x00010c020ba0();
      func_0x00010c195c60(puVar3,param_2,puVar7);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
    }
    _objc_release(lVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1067ca8f4; end: 1067ca943; -[SCCommunitiesAPICommunityStoreProvider syncCommunityPillsOnProfileOpenWithUserId:] */

void FUN_1067ca8f4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c287fa0();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067ca944; end: 1067ca987; -[SCCommunitiesAPICommunityStoreProvider getFriendCommunityPillsWithFriendUserId:] */

void FUN_1067ca944(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_opt_new(PTR_PTR_1126ae6b8);
  puVar2 = puVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067ca988; end: 1067ca993; -[SCCommunitiesAPICommunityStoreProvider pushToValdiMarshaller:] */

undefined8 FUN_1067ca988(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126df450;
  _objc_retain(param_1);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_3,param_1,puVar1);
  _objc_release(param_1);
  return param_3;
}



/* Entry: 1067ca994; end: 1067ca9c3; -[SCCommunitiesAPICommunityStoreProvider .cxx_destruct] */

void FUN_1067ca994(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067ca9c4; end: 1067caaa7; -[SCCommunitiesStoreServiceProvider provide] */

void FUN_1067ca9c4(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ce130;
  _objc_alloc(PTR_PTR_1126ce130);
  func_0x00010c000300();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067caaa8; end: 1067caae7;  */

void FUN_1067caaa8(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5b6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067caae8; end: 1067caba3; -[SCCommunitiesStoreServiceProvider _makeCommunityStoreProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067caae8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ce138;
  _objc_alloc(PTR_PTR_1126ce138);
  lVar2 = param_1 + _DAT_112750824;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf42d20();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112750828;
  _objc_loadWeakRetained(param_1);
  lVar4 = param_1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0001c0(puVar1,param_2,lVar3,lVar4);
  _objc_release(lVar4);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067caba4; end: 1067cabe7; -[SCCommunitiesStoreServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067caba4(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112750828);
  _objc_destroyWeak(param_1 + _DAT_112750824);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275082c);
  return;
}



/* Entry: 1067cabe8; end: 1067cac3b; -[SCCommunitiesAttributionHandler evaluatePropertyWithFeatureProvidedSignals:supValueGetter:] */

void FUN_1067cabe8(undefined8 param_1)

{
  undefined *puVar1;
  
  FUN_1067cac3c();
  func_0x0001067caca0(param_1);
  puVar1 = PTR_PTR_1126af9b8;
  _objc_alloc_init(PTR_PTR_1126af9b8);
  func_0x00010c1add20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067cac3c; end: 1067cad03;  */

undefined8 FUN_1067cac3c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010beffde0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = uVar2;
    FUN_1067cc620(uVar2,0);
    _objc_release(uVar2);
  }
  return uVar1;
}



/* Entry: 1067cad04; end: 1067cad33; -[SCCommunitiesAttributionHandler communitiesCount] */

long FUN_1067cad04(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1067cac3c();
  func_0x0001067caca0(param_1);
  return param_1 + lVar1;
}



/* Entry: 1067cad34; end: 1067cade7; -[SCCommunitiesAttributionHandler universityCommunitiesCount] */

long FUN_1067cad34(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010beffde0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    FUN_1067cc620(lVar2,1);
    _objc_release(lVar2);
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf00620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x0001067cc798(lVar3,1);
    _objc_release(lVar3);
    lVar2 = lVar2 + lVar1;
  }
  return lVar2;
}



/* Entry: 1067cade8; end: 1067cae9b; -[SCCommunitiesAttributionHandler highSchoolCommunitiesCount] */

long FUN_1067cade8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = 0;
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 8);
    func_0x00010c269d40(lVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010beffde0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
    lVar1 = lVar2;
    FUN_1067cc620(lVar2,2);
    _objc_release(lVar2);
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c269d40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf00620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x0001067cc798(lVar3,2);
    _objc_release(lVar3);
    lVar2 = lVar2 + lVar1;
  }
  return lVar2;
}



/* Entry: 1067cae9c; end: 1067cb01f; -[SCCommunitiesAttributionHandler waitlistCountWithCompletion:] */

void FUN_1067cae9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x1067caf60;
  puStack_48 = &UNK_1108835c0;
  uStack_40 = uVar1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010bfc69a0(uVar2,param_2,&puStack_60);
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 1067cb020; end: 1067cb02f;  */

void FUN_1067cb020(double param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x0001067cb02c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x20) + 0x10))(*(long *)(param_2 + 0x20),(long)param_1);
  return;
}



/* Entry: 1067cb030; end: 1067cb177; -[SCCommunitiesAttributionHandler mostRecentlyJoinedCommunityFriendsCountWithCurrentUserId:snapchattersDataFetcher:completionHandler:] */

void FUN_1067cb030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf42ec0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f4aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
  uVar1 = uVar2;
  func_0x00010c296f60(uVar2,param_2,&PTR____CFConstantStringClassReference_110db1318);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1067cb178;
  puStack_58 = &UNK_110854320;
  uStack_50 = param_3;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c244e80(param_4,param_2,uVar1,PTR___dispatch_main_q_11034be20,&puStack_70);
  _objc_release(param_4);
  _objc_release(uVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_release(uVar2);
  return;
}



/* Entry: 1067cb178; end: 1067cb2cf;  */

void FUN_1067cb178(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf52a60();
  lVar4 = lRam0000000000000000;
  if (lVar1 == 0) {
    lVar6 = 0;
  }
  else {
    lVar6 = 0;
    do {
      lVar8 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(param_2);
        }
        uVar7 = *(ulong *)(lVar8 * 8);
        uVar2 = uVar7;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        uVar3 = uVar2;
        func_0x00010c071ae0();
        _objc_release(uVar2);
        if ((uVar3 & 1) == 0) {
          func_0x000100bf119c(uVar7);
          lVar6 = lVar6 + (uVar7 & 0xffffffff);
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = param_2;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  lVar4 = *(long *)(param_1 + 0x28);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,lVar6);
  }
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    FUN_1067cb320();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
    return;
  }
  return;
}



/* Entry: 1067cb2d0; end: 1067cb31f; -[SCCommunitiesAttributionHandler communitiesSortedByMostRecentlyJoined] */

void FUN_1067cb2d0(undefined8 param_1)

{
  undefined8 uVar1;
  
  FUN_1067cb320(param_1,1);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c246ca0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1067cb320; end: 1067cb58b;  */

undefined * FUN_1067cb320(long param_1,int param_2,undefined8 *param_3)

{
  double dVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 in_b0;
  undefined1 in_register_00005001;
  undefined1 in_register_00005002;
  undefined1 in_register_00005003;
  undefined1 in_register_00005004;
  undefined1 in_register_00005005;
  undefined1 in_register_00005006;
  undefined1 in_register_00005007;
  undefined *puStack_1a0;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
  long *plStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (param_1 == 0) {
    puStack_1a0 = (undefined *)0x0;
    lVar3 = 0;
  }
  else {
    puStack_1a0 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lVar2 = *(long *)(param_1 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010beffca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    in_b0 = 0;
    in_register_00005001 = 0;
    in_register_00005002 = 0;
    in_register_00005003 = 0;
    in_register_00005004 = 0;
    in_register_00005005 = 0;
    in_register_00005006 = 0;
    in_register_00005007 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    lStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    plStack_130 = (long *)0x0;
    _objc_retain(lVar3);
    param_3 = &uStack_140;
    lVar2 = lVar3;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar9 = *plStack_130;
      do {
        lVar7 = 0;
        do {
          if (*plStack_130 != lVar9) {
            _objc_enumerationMutation(lVar3);
          }
          uVar8 = *(undefined8 *)(lStack_138 + lVar7 * 8);
          uVar6 = uVar8;
          func_0x00010bf60900();
          if (param_2 == (int)uVar6) {
            uStack_170 = 0;
            uStack_160 = 0x3032000000;
            pcStack_158 = FUN_1067cb5e4;
            uStack_150 = 0x1067cb5f4;
            uStack_148 = 0;
            puStack_168 = &uStack_170;
            func_0x00010bfa2680(uVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c0bfcc0();
            _objc_release(uVar8);
            lVar4 = puStack_168[5];
            if (lVar4 != 0) {
              func_0x00010c0ecf00();
              _objc_retainAutoreleasedReturnValue();
              lVar5 = lVar4;
              func_0x00010c08fa60();
              _objc_release(lVar4);
              if (lVar5 != 0) {
                func_0x00010befa120(puStack_1a0);
              }
            }
            __Block_object_dispose(&uStack_170,8);
            _objc_release(uStack_148);
          }
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        param_3 = &uStack_140;
        lVar2 = lVar3;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(lVar3);
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_1a0);
    return puStack_1a0;
  }
  ___stack_chk_fail();
  uVar6 = 8;
  __Block_object_dispose(&uStack_170,8);
  __Unwind_Resume(lVar3);
  _objc_retain(uVar6);
  func_0x00010c085be0(param_3);
  dVar1 = (double)CONCAT17(in_register_00005007,
                           CONCAT16(in_register_00005006,
                                    CONCAT15(in_register_00005005,
                                             CONCAT14(in_register_00005004,
                                                      CONCAT13(in_register_00005003,
                                                               CONCAT12(in_register_00005002,
                                                                        CONCAT11(
                                                  in_register_00005001,in_b0)))))));
  func_0x00010c085be0(uVar6);
  _objc_release(uVar6);
  return (undefined *)
         (ulong)((double)CONCAT17(in_register_00005007,
                                  CONCAT16(in_register_00005006,
                                           CONCAT15(in_register_00005005,
                                                    CONCAT14(in_register_00005004,
                                                             CONCAT13(in_register_00005003,
                                                                      CONCAT12(in_register_00005002,
                                                                               CONCAT11(
                                                  in_register_00005001,in_b0))))))) < dVar1);
}



/* Entry: 1067cb58c; end: 1067cb5e3;  */

bool FUN_1067cb58c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double dVar1;
  
  _objc_retain(param_3);
  func_0x00010c085be0(param_4);
  dVar1 = param_1;
  func_0x00010c085be0(param_3);
  _objc_release(param_3);
  return dVar1 < param_1;
}



/* Entry: 1067cb5e4; end: 1067cb5fb;  */

void FUN_1067cb5e4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 1067cb5fc; end: 1067cb633;  */

void FUN_1067cb5fc(long param_1,undefined8 param_2)

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



/* Entry: 1067cb634; end: 1067cb877;  */

void FUN_1067cb634(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  puVar10 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar6 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar6) {
        _objc_enumerationMutation(param_1);
      }
      uVar11 = *(undefined8 *)(lVar9 * 8);
      func_0x00010bfa2680();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar11;
      func_0x00010bf0a5c0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar11);
      uVar11 = uVar8;
      func_0x00010c0ecf00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar10;
      func_0x00010c0dff20();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR____NSArray0__struct_11034ab48;
      if (puVar3 != (undefined *)0x0) {
        puVar1 = puVar3;
      }
      _objc_retain(puVar1);
      _objc_release(puVar3);
      puVar3 = PTR_PTR_1126ce140;
      _objc_alloc(PTR_PTR_1126ce140);
      func_0x00010c0ecf20(uVar8);
      uVar4 = uVar8;
      func_0x00010c0ecf00(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c055e60(puVar3);
      _objc_release(uVar4);
      puVar5 = puVar1;
      func_0x00010bf09f60(puVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar1);
      func_0x00010c1d0560(puVar10);
      _objc_release(puVar3);
      _objc_release(puVar5);
      _objc_release(uVar11);
      _objc_release(uVar8);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = param_1;
    func_0x00010bf52a60();
  }
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
    ___stack_chk_fail();
    if (param_1 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar10 = *(undefined **)(param_1 + 0x28);
      if (puVar10 == (undefined *)0x0) {
        lVar2 = param_1;
        FUN_1067cb320(param_1,1);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar2;
        FUN_1067cb634();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = *(undefined8 *)(param_1 + 0x28);
        *(long *)(param_1 + 0x28) = lVar6;
        _objc_release(uVar8);
        puVar10 = *(undefined **)(param_1 + 0x28);
        _objc_retain(puVar10);
        _objc_release(lVar2);
      }
      else {
        _objc_retain(puVar10);
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 1067cb878; end: 1067cb997;  */

void FUN_1067cb878(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(param_1 + 0x28);
    if (lVar3 == 0) {
      lVar1 = param_1;
      FUN_1067cb320(param_1,1);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      FUN_1067cb634();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)(param_1 + 0x28);
      *(long *)(param_1 + 0x28) = lVar3;
      _objc_release(uVar2);
      lVar3 = *(long *)(param_1 + 0x28);
      _objc_retain(lVar3);
      _objc_release(lVar1);
    }
    else {
      _objc_retain(lVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1067cb998; end: 1067cbb9b;  */

void FUN_1067cb998(long param_1,long param_2,undefined8 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar12 = param_3;
  _objc_retain(param_3);
  if (param_1 == 0) {
    puVar8 = (undefined8 *)0x0;
  }
  else {
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    puVar2 = param_3;
    func_0x00010c0dfe00();
    _objc_retainAutoreleasedReturnValue();
    puVar12 = &uStack_1b0;
    puVar3 = puVar2;
    func_0x00010bf52a60();
    puVar8 = (undefined8 *)PTR____NSArray0__struct_11034ab48;
    if (puVar3 != (undefined8 *)0x0) {
      lVar11 = *plStack_1a0;
      do {
        puVar12 = (undefined8 *)0x0;
        do {
          if (*plStack_1a0 != lVar11) {
            _objc_enumerationMutation(puVar2);
          }
          lVar9 = *(long *)(lStack_1a8 + (long)puVar12 * 8);
          _objc_retain(lVar9);
          lVar4 = lVar9;
          func_0x00010bf52a60();
          lVar1 = lRam0000000000000000;
          while (lVar4 != 0) {
            lVar6 = 0;
            puVar7 = puVar8;
            do {
              if (lRam0000000000000000 != lVar1) {
                _objc_enumerationMutation(lVar9);
              }
              lVar10 = *(long *)(lVar6 * 8);
              func_0x00010c27dd80();
              puVar8 = puVar7;
              if (lVar10 == param_2) {
                func_0x00010bf09f60();
                _objc_retainAutoreleasedReturnValue();
                _objc_release(puVar7);
              }
              lVar6 = lVar6 + 1;
              puVar7 = puVar8;
            } while (lVar4 != lVar6);
            lVar4 = lVar9;
            func_0x00010bf52a60();
          }
          _objc_release(lVar9);
          puVar12 = (undefined8 *)((long)puVar12 + 1);
        } while (puVar12 != puVar3);
        puVar12 = &uStack_1b0;
        puVar3 = puVar2;
        func_0x00010bf52a60();
      } while (puVar3 != (undefined8 *)0x0);
    }
    _objc_release(puVar2);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    puVar2 = param_3;
    FUN_1067cb878();
    _objc_retainAutoreleasedReturnValue();
    puVar8 = param_3;
    FUN_1067cb998(param_3,puVar12,puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = puVar8;
    func_0x00010bf529e0();
    if (puVar2 == (undefined8 *)0x0) {
      uVar5 = param_3[5];
      param_3[5] = 0;
      _objc_release(uVar5);
      uVar5 = param_3[6];
      param_3[6] = 0;
      _objc_release(uVar5);
      puVar2 = param_3;
      FUN_1067cb878(param_3);
      _objc_retainAutoreleasedReturnValue();
      FUN_1067cb998(param_3,puVar12,puVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar8);
      _objc_release(puVar2);
      puVar8 = param_3;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 1067cbb9c; end: 1067cbc63; -[SCCommunitiesAttributionHandler myCommunitiesByType:] */

void FUN_1067cbb9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  FUN_1067cb878();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  FUN_1067cb998(param_1,param_3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    *(undefined8 *)(param_1 + 0x28) = 0;
    _objc_release(uVar3);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar3);
    lVar1 = param_1;
    FUN_1067cb878(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_1067cb998(param_1,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1067cbc64; end: 1067cbdf7; -[SCCommunitiesAttributionHandler siblingCommunitiesByType:] */

void FUN_1067cbc64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1;
  func_0x0001067cb908();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  FUN_1067cb998(param_1,param_3,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    _objc_release(uVar3);
    lVar1 = param_1;
    func_0x0001067cb908(param_1);
    _objc_retainAutoreleasedReturnValue();
    FUN_1067cb998(param_1,param_3,lVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1067cbdf8; end: 1067cbfcb; -[SCCommunitiesAttributionHandler siblingCommunitiesForMyCommunityOrgId:] */

void FUN_1067cbdf8(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 *param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puStack_278;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = param_3;
  _objc_retain(param_3);
  lVar10 = param_1;
  func_0x0001067cbd20(param_1,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar10;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  puStack_278 = PTR____NSArray0__struct_11034ab48;
  if (lVar8 != 0) {
    func_0x00010c27dd80(lVar8);
    func_0x00010c23b5a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_278 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_1);
    puVar6 = &uStack_130;
    param_4 = auStack_f0;
    lVar1 = param_1;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar16 = *plStack_120;
      do {
        lVar11 = 0;
        do {
          if (*plStack_120 != lVar16) {
            _objc_enumerationMutation(param_1);
          }
          uVar14 = *(undefined8 *)(lStack_128 + lVar11 * 8);
          func_0x00010c0ed0e0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar14;
          func_0x00010c071ae0();
          _objc_release(uVar14);
          if ((int)uVar9 != 0) {
            func_0x00010befa120(puStack_278);
          }
          lVar11 = lVar11 + 1;
        } while (lVar1 != lVar11);
        puVar6 = &uStack_130;
        param_4 = auStack_f0;
        lVar1 = param_1;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(param_1);
    _objc_release(param_1);
  }
  _objc_release(lVar8);
  _objc_release(lVar10);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
    _objc_retain(puVar6);
    _objc_retain(param_4);
    puVar2 = param_3;
    func_0x0001067cbd20(param_3,puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 == (undefined8 *)0x0) {
      puStack_278 = PTR____NSArray0__struct_11034ab48;
    }
    else {
      func_0x00010c27dd80(puVar3);
      func_0x00010c23b5a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_278 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      func_0x00010befa120();
      _objc_retain(param_3);
      puVar4 = param_3;
      func_0x00010bf52a60();
      lVar8 = lRam0000000000000000;
      while (puVar4 != (undefined8 *)0x0) {
        puVar13 = (undefined8 *)0x0;
        do {
          if (lRam0000000000000000 != lVar8) {
            _objc_enumerationMutation(param_3);
          }
          uVar15 = *(undefined8 *)((long)puVar13 * 8);
          uVar9 = uVar15;
          func_0x00010bf624a0(uVar15);
          _objc_retainAutoreleasedReturnValue();
          uVar14 = uVar9;
          func_0x00010c11ac00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          func_0x00010c0ed0e0();
          _objc_retainAutoreleasedReturnValue();
          uVar9 = uVar15;
          func_0x00010c071ae0();
          if ((int)uVar9 == 0) {
            _objc_release(uVar15);
          }
          else {
            puVar5 = param_4;
            func_0x00010c071ae0();
            _objc_release(uVar15);
            if (((ulong)puVar5 & 1) == 0) {
              func_0x00010befa120(puStack_278);
            }
          }
          _objc_release(uVar14);
          puVar13 = (undefined8 *)((long)puVar13 + 1);
        } while (puVar4 != puVar13);
        puVar4 = param_3;
        func_0x00010bf52a60();
      }
      _objc_release(param_3);
      _objc_release(param_3);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(param_4);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
      ___stack_chk_fail();
      lVar16 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar10 = puVar6[1];
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar10;
      func_0x00010bf00620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar10);
      puStack_278 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_opt_new();
      _objc_retain(lVar1);
      lVar10 = lVar1;
      func_0x00010bf52a60();
      lVar8 = lRam0000000000000000;
      while (lVar10 != 0) {
        lVar11 = 0;
        do {
          if (lRam0000000000000000 != lVar8) {
            _objc_enumerationMutation(lVar1);
          }
          lVar12 = *(long *)(lVar11 * 8);
          lVar7 = lVar12;
          func_0x00010c27dd80();
          if (lVar7 == 7) {
            func_0x00010c11ac00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puStack_278);
            _objc_release(lVar12);
          }
          lVar11 = lVar11 + 1;
        } while (lVar10 != lVar11);
        lVar10 = lVar1;
        func_0x00010bf52a60();
      }
      _objc_release(lVar1);
      _objc_release();
      if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar16) {
        ___stack_chk_fail();
        lVar8 = *(long *)(lVar1 + 8);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        lVar10 = lVar8;
        func_0x00010bf00620();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar8);
        lVar8 = lVar10;
        func_0x00010bf529e0();
        if (lVar8 != 0) {
          uVar9 = *(undefined8 *)(lVar1 + 0x10);
          func_0x00010c269d40(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bfb5000();
          _objc_release(uVar9);
        }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)(lVar10);
        return;
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_278);
  return;
}



/* Entry: 1067cbfcc; end: 1067cc213; -[SCCommunitiesAttributionHandler siblingCommunitiesForSiblingCommunityPageWithOrgId:groupId:] */

void FUN_1067cbfcc(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_138;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar3 = param_1;
  func_0x0001067cbd20(param_1,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bfb1920();
  _objc_retainAutoreleasedReturnValue();
  if (lVar4 == 0) {
    puStack_138 = PTR____NSArray0__struct_11034ab48;
  }
  else {
    func_0x00010c27dd80(lVar4);
    func_0x00010c23b5a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_138 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    func_0x00010befa120();
    _objc_retain(param_1);
    lVar7 = param_1;
    func_0x00010bf52a60();
    lVar10 = lRam0000000000000000;
    while (lVar7 != 0) {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar10) {
          _objc_enumerationMutation(param_1);
        }
        uVar11 = *(undefined8 *)(lVar9 * 8);
        uVar5 = uVar11;
        func_0x00010bf624a0(uVar11);
        _objc_retainAutoreleasedReturnValue();
        uVar1 = uVar5;
        func_0x00010c11ac00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar5);
        func_0x00010c0ed0e0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar11;
        func_0x00010c071ae0();
        if ((int)uVar5 == 0) {
          _objc_release(uVar11);
        }
        else {
          uVar2 = param_4;
          func_0x00010c071ae0();
          _objc_release(uVar11);
          if ((uVar2 & 1) == 0) {
            func_0x00010befa120(puStack_138);
          }
        }
        _objc_release(uVar1);
        lVar9 = lVar9 + 1;
      } while (lVar7 != lVar9);
      lVar7 = param_1;
      func_0x00010bf52a60();
    }
    _objc_release(param_1);
    _objc_release(param_1);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
    lVar3 = *(long *)(param_3 + 8);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar3;
    func_0x00010bf00620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    puStack_138 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    _objc_retain(lVar6);
    lVar3 = lVar6;
    func_0x00010bf52a60();
    lVar4 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar10 = 0;
      do {
        if (lRam0000000000000000 != lVar4) {
          _objc_enumerationMutation(lVar6);
        }
        lVar8 = *(long *)(lVar10 * 8);
        lVar9 = lVar8;
        func_0x00010c27dd80();
        if (lVar9 == 7) {
          func_0x00010c11ac00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puStack_138);
          _objc_release(lVar8);
        }
        lVar10 = lVar10 + 1;
      } while (lVar3 != lVar10);
      lVar3 = lVar6;
      func_0x00010bf52a60();
    }
    _objc_release(lVar6);
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar7) {
      ___stack_chk_fail();
      lVar4 = *(long *)(lVar6 + 8);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar4;
      func_0x00010bf00620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      lVar4 = lVar3;
      func_0x00010bf529e0();
      if (lVar4 != 0) {
        uVar5 = *(undefined8 *)(lVar6 + 0x10);
        func_0x00010c269d40(uVar5);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bfb5000();
        _objc_release(uVar5);
      }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(lVar3);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puStack_138);
  return;
}



/* Entry: 1067cc214; end: 1067cc383; -[SCCommunitiesAttributionHandler pendingCommunityGroupIds] */

void FUN_1067cc214(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf00620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
  if (lVar1 != 0) {
    lVar7 = *plStack_110;
    do {
      lVar8 = 0;
      do {
        if (*plStack_110 != lVar7) {
          _objc_enumerationMutation(lVar2);
        }
        lVar6 = *(long *)(lStack_118 + lVar8 * 8);
        lVar4 = lVar6;
        func_0x00010c27dd80();
        if (lVar4 == 7) {
          func_0x00010c11ac00();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar3,param_2,lVar6);
          _objc_release(lVar6);
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      lVar1 = lVar2;
      func_0x00010bf52a60(lVar2,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar1 != 0);
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
    return;
  }
  ___stack_chk_fail();
  lVar7 = *(long *)(lVar2 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010bf00620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = lVar1;
  func_0x00010bf529e0();
  if (lVar7 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + 0x10);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5000();
    _objc_release(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067cc384; end: 1067cc407; -[SCCommunitiesAttributionHandler syncPendingCommunityGroup] */

void FUN_1067cc384(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf00620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb5000();
    _objc_release(uVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 1067cc408; end: 1067cc44f; -[SCCommunitiesAttributionHandler getCommunityMetadataObservable] */

void FUN_1067cc408(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf62560();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1067cc450; end: 1067cc497; -[SCCommunitiesAttributionHandler getPendingCommunityMetadataObservable] */

void FUN_1067cc450(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0f7460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1067cc498; end: 1067cc52f; -[SCCommunitiesAttributionHandler fetchCommunityMetadataForUserId:] */

void FUN_1067cc498(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfb7f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1,param_2,&PTR___NSConcreteGlobalBlock_11093d178);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1067cc530; end: 1067cc56f;  */

void FUN_1067cc530(undefined8 param_1,undefined8 param_2)

{
  func_0x0001006372a4(param_2,&PTR___NSConcreteGlobalBlock_11093d198);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067cc570; end: 1067cc61b; -[SCCommunitiesAttributionHandler updateNonFriendCommunityPillsStateWithUserId:] */

void FUN_1067cc570(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1067cc61c;
  puStack_30 = &UNK_110841f20;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c284de0(uVar1,param_2,param_3,PTR___dispatch_main_q_11034be20,&puStack_48);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1067cc61c; end: 1067cc61f;  */

void FUN_1067cc61c(void)

{
  return;
}



/* Entry: 1067cc620; end: 1067cc8ff;  */

ulong FUN_1067cc620(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar5 = param_2;
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        lVar8 = *(long *)(lVar9 * 8);
        lVar3 = lVar8;
        func_0x00010c27dd80();
        if ((lVar3 == 7) && (lVar3 = lVar8, func_0x00010bf60900(), (int)lVar3 != 0)) {
          if (param_2 == 0) {
            uVar7 = uVar7 + 1;
          }
          else {
            func_0x00010bfa2680();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar8;
            func_0x00010bf0a5c0();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010c0ecf20();
            uVar7 = (ulong)(lVar4 + uVar7 == param_2);
            _objc_release(lVar3);
            _objc_release(lVar8);
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return uVar7;
  }
  ___stack_chk_fail();
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    do {
      lVar9 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        lVar8 = *(long *)(lVar9 * 8);
        lVar3 = lVar8;
        func_0x00010c27dd80();
        if (lVar3 == 7) {
          if (lVar5 == 0) {
            uVar7 = uVar7 + 1;
          }
          else {
            func_0x00010bfa2680();
            _objc_retainAutoreleasedReturnValue();
            lVar3 = lVar8;
            func_0x00010bf0a5c0();
            _objc_retainAutoreleasedReturnValue();
            lVar4 = lVar3;
            func_0x00010c0ecf20();
            if (lVar4 == lVar5) {
              uVar7 = uVar7 + 1;
            }
            _objc_release(lVar3);
            _objc_release(lVar8);
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar2 != lVar9);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    _objc_storeStrong(param_1 + 0x30,0);
    _objc_storeStrong(param_1 + 0x28,0);
    _objc_storeStrong(param_1 + 0x20,0);
    _objc_storeStrong(param_1 + 0x18,0);
    _objc_storeStrong(param_1 + 0x10,0);
    uVar7 = param_1 + 8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(uVar7,0);
    return uVar7;
  }
  return uVar7;
}



/* Entry: 1067cc900; end: 1067cca0f; -[SCCommunitiesAttributionHandler .cxx_destruct] */

void FUN_1067cc900(long param_1)

{
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



/* Entry: 1067cca10; end: 1067cca9b; -[SCCommunitiesAttributionHandlerEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067cca10(long param_1)

{
  long lVar1;
  long lVar2;
  long lStack_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + _DAT_112750850;
  _objc_loadWeakRetained(lVar1);
  lVar2 = lVar1;
  func_0x00010c118c80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf6e1e0();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puStack_38 = PTR_PTR_1126f3330;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_end_1125c29d0);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1067cca9c; end: 1067ccbbf; -[SCCommunitiesAttributionHandlerEntryPoint _createCommunityOrgServiceWithPerformer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067cca9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  puVar1 = PTR_PTR_1126ae728;
  _objc_retain(param_3);
  func_0x00010bf24820(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,60000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_112750858;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bfcfa80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c0b7020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1067ccbc0; end: 1067ccc3f; -[SCCommunitiesAttributionHandlerEntryPoint _composerRuntime] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067ccbc0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  param_1 = param_1 + _DAT_11275085c;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c295440();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 1067ccc40; end: 1067cccb7; -[SCCommunitiesAttributionHandlerEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067ccc40(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112750854,0);
  _objc_destroyWeak(param_1 + _DAT_112750858);
  _objc_destroyWeak(param_1 + _DAT_112750848);
  _objc_destroyWeak(param_1 + _DAT_11275085c);
  _objc_destroyWeak(param_1 + _DAT_11275084c);
  _objc_destroyWeak(param_1 + _DAT_112750850);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112750860);
  return;
}



/* Entry: 1067cccb8; end: 1067ccd2b; -[SCGrapheneKronosCalendarMetric2 init] */

undefined1 * FUN_1067cccb8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_1126f3338;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    (*(code *)PTR_DAT_113403208)();
    *(undefined1 **)((long)puVar1 + 8) = puVar2;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 1067ccd2c; end: 1067ccf5b;  */

void FUN_1067ccd2c(long param_1,char *param_2,char *param_3,undefined8 param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar11;
  long *plVar12;
  char *unaff_x23;
  undefined8 *unaff_x24;
  undefined1 auStack_1e0 [8];
  undefined1 auStack_1d8 [8];
  undefined8 *puStack_1d0;
  long *plStack_1c8;
  char *pcStack_1c0;
  char *pcStack_1b8;
  undefined1 ***pppuStack_1b0;
  code *pcStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined1 *puStack_188;
  undefined8 auStack_180 [2];
  char cStack_169;
  long lStack_168;
  undefined8 *puStack_160;
  char *pcStack_158;
  undefined8 *puStack_150;
  long *plStack_148;
  char *pcStack_140;
  char *pcStack_138;
  undefined1 **ppuStack_130;
  code *pcStack_128;
  char acStack_120 [24];
  undefined1 *puStack_108;
  undefined8 auStack_100 [2];
  char cStack_e9;
  long lStack_e8;
  undefined8 *puStack_e0;
  char *pcStack_d8;
  undefined8 *puStack_d0;
  char *pcStack_c8;
  char *pcStack_c0;
  char *pcStack_b8;
  undefined1 *puStack_b0;
  code *pcStack_a8;
  char acStack_98 [24];
  char *pcStack_80;
  undefined8 auStack_78 [2];
  char cStack_61;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  pcVar5 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  pcVar4 = (char *)0x0;
  if (param_1 != 0) {
    plVar12 = *(long **)(param_1 + 8);
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
    unaff_x24 = auStack_78;
    func_0x00010002b838(auStack_78,pcVar1);
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
    func_0x00010002b838(auStack_60,pcVar1);
    acStack_98[0] = '\0';
    acStack_98[1] = '\0';
    acStack_98[2] = '\0';
    acStack_98[3] = '\0';
    acStack_98[4] = '\0';
    acStack_98[5] = '\0';
    acStack_98[6] = '\0';
    acStack_98[7] = '\0';
    acStack_98[8] = '\0';
    acStack_98[9] = '\0';
    acStack_98[10] = '\0';
    acStack_98[0xb] = '\0';
    acStack_98[0xc] = '\0';
    acStack_98[0xd] = '\0';
    acStack_98[0xe] = '\0';
    acStack_98[0xf] = '\0';
    acStack_98[0x10] = '\0';
    acStack_98[0x11] = '\0';
    acStack_98[0x12] = '\0';
    acStack_98[0x13] = '\0';
    acStack_98[0x14] = '\0';
    acStack_98[0x15] = '\0';
    acStack_98[0x16] = '\0';
    acStack_98[0x17] = '\0';
    func_0x00010007e1e8(acStack_98,auStack_78,&lStack_48,2);
    pcVar1 = "\x01";
    unaff_x23 = acStack_98;
    pcVar5 = acStack_98;
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11093d1e8,pcVar5,param_4);
    pcStack_80 = unaff_x23;
    func_0x00010007e5dc(&pcStack_80);
    lVar11 = 0;
    pcVar4 = (char *)auStack_78;
    do {
      if ((&cStack_49)[lVar11] < '\0') {
        __ZdlPv(*(undefined8 *)((long)auStack_60 + lVar11));
      }
      lVar11 = lVar11 + -0x18;
    } while (lVar11 != -0x30);
  }
  _objc_release(param_3);
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_3);
  if (cStack_61 < '\0') {
    __ZdlPv(auStack_78[0]);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  pcVar3 = pcVar2;
  __Unwind_Resume();
  pcVar10 = acStack_120;
  pcStack_a8 = FUN_1067ccf5c;
  lStack_e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar8 = pcVar1;
  pcVar9 = pcVar5;
  puStack_e0 = unaff_x24;
  pcStack_d8 = unaff_x23;
  puStack_d0 = (undefined8 *)pcVar4;
  pcStack_c8 = pcVar2;
  pcStack_c0 = param_3;
  pcStack_b8 = param_2;
  puStack_b0 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  plVar12 = (long *)0x0;
  if (pcVar3 != (char *)0x0) {
    plVar12 = *(long **)(pcVar3 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar4 = "";
    }
    else {
      pcVar4 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    unaff_x23 = (char *)auStack_100;
    func_0x00010002b838(auStack_100,pcVar4);
    acStack_120[0] = '\0';
    acStack_120[1] = '\0';
    acStack_120[2] = '\0';
    acStack_120[3] = '\0';
    acStack_120[4] = '\0';
    acStack_120[5] = '\0';
    acStack_120[6] = '\0';
    acStack_120[7] = '\0';
    acStack_120[8] = '\0';
    acStack_120[9] = '\0';
    acStack_120[10] = '\0';
    acStack_120[0xb] = '\0';
    acStack_120[0xc] = '\0';
    acStack_120[0xd] = '\0';
    acStack_120[0xe] = '\0';
    acStack_120[0xf] = '\0';
    acStack_120[0x10] = '\0';
    acStack_120[0x11] = '\0';
    acStack_120[0x12] = '\0';
    acStack_120[0x13] = '\0';
    acStack_120[0x14] = '\0';
    acStack_120[0x15] = '\0';
    acStack_120[0x16] = '\0';
    acStack_120[0x17] = '\0';
    func_0x00010007e1e8(acStack_120,auStack_100,&lStack_e8,1);
    pcVar8 = "";
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11093d238,acStack_120,pcVar5);
    puStack_108 = acStack_120;
    func_0x00010007e5dc(&puStack_108);
    pcVar9 = pcVar10;
    pcVar4 = acStack_120;
    if (cStack_e9 < '\0') {
      __ZdlPv(auStack_100[0]);
      pcVar9 = pcVar10;
      pcVar4 = acStack_120;
    }
  }
  pcVar5 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_e8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar2 = pcVar5;
  __Unwind_Resume();
  pcStack_128 = FUN_1067cd0d0;
  lStack_168 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_160 = unaff_x24;
  pcStack_158 = unaff_x23;
  puStack_150 = (undefined8 *)pcVar4;
  plStack_148 = plVar12;
  pcStack_140 = pcVar5;
  pcStack_138 = pcVar1;
  ppuStack_130 = &puStack_b0;
  _objc_retain(pcVar8);
  plVar12 = (long *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar12 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar8);
    if (pcVar8 == (char *)0x0) {
      pcVar1 = "";
    }
    else {
      pcVar1 = pcVar8;
      _objc_retainAutorelease(pcVar8);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar8);
    func_0x00010002b838(auStack_180,pcVar1);
    uStack_1a0 = 0;
    uStack_198 = 0;
    uStack_190 = 0;
    func_0x00010007e1e8(&uStack_1a0,auStack_180,&lStack_168,1);
    (**(code **)(*plVar12 + 0x18))(plVar12,&UNK_11093d288,&uStack_1a0,pcVar9);
    puStack_188 = (undefined1 *)&uStack_1a0;
    func_0x00010007e5dc(&puStack_188);
    pcVar4 = (char *)&uStack_1a0;
    if (cStack_169 < '\0') {
      __ZdlPv(auStack_180[0]);
      pcVar4 = (char *)&uStack_1a0;
    }
  }
  pcVar1 = pcVar8;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_168) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar8);
  _objc_release(pcVar8);
  pcVar5 = pcVar1;
  __Unwind_Resume(pcVar1);
  pcStack_1a8 = FUN_1067cd244;
  puStack_1d0 = (undefined8 *)pcVar4;
  plStack_1c8 = plVar12;
  pcStack_1c0 = pcVar1;
  pcStack_1b8 = pcVar8;
  pppuStack_1b0 = &ppuStack_130;
  _objc_initWeak(auStack_1d8,pcVar5);
  puVar6 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_1e0,auStack_1d8);
  func_0x00010bf11fe0(puVar6);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR_PTR_1126ce158;
  _objc_alloc(PTR_PTR_1126ce158);
  func_0x00010c05cd00();
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_1e0);
  _objc_destroyWeak(auStack_1d8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1067ccf5c; end: 1067cd0cf;  */

void FUN_1067ccf5c(long param_1,char *param_2,undefined1 *param_3)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined8 *unaff_x22;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined1 *puStack_130;
  long *plStack_128;
  char *pcStack_120;
  char *pcStack_118;
  undefined1 **ppuStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined1 *puStack_e8;
  undefined8 auStack_e0 [2];
  char cStack_c9;
  long lStack_c8;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  puVar7 = &uStack_80;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pcVar1 = param_2;
  puVar6 = param_3;
  _objc_retain(param_2);
  if (param_1 != 0) {
    plVar8 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    pcVar1 = "";
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11093d238,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    puVar6 = (undefined1 *)puVar7;
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      puVar6 = (undefined1 *)puVar7;
      unaff_x22 = &uStack_80;
    }
  }
  pcVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  __Unwind_Resume();
  pcStack_88 = FUN_1067cd0d0;
  lStack_c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_retain(pcVar1);
  plVar8 = (long *)0x0;
  if (pcVar2 != (char *)0x0) {
    plVar8 = *(long **)(pcVar2 + 8);
    _objc_retain(pcVar1);
    if (pcVar1 == (char *)0x0) {
      pcVar2 = "";
    }
    else {
      pcVar2 = pcVar1;
      _objc_retainAutorelease(pcVar1);
      func_0x00010bdc3520();
    }
    _objc_release(pcVar1);
    func_0x00010002b838(auStack_e0,pcVar2);
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    func_0x00010007e1e8(&uStack_100,auStack_e0,&lStack_c8,1);
    (**(code **)(*plVar8 + 0x18))(plVar8,&UNK_11093d288,&uStack_100,puVar6);
    puStack_e8 = (undefined1 *)&uStack_100;
    func_0x00010007e5dc(&puStack_e8);
    unaff_x22 = &uStack_100;
    if (cStack_c9 < '\0') {
      __ZdlPv(auStack_e0[0]);
      unaff_x22 = &uStack_100;
    }
  }
  pcVar2 = pcVar1;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_c8) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(pcVar1);
  _objc_release(pcVar1);
  pcVar3 = pcVar2;
  __Unwind_Resume(pcVar2);
  pcStack_108 = FUN_1067cd244;
  puStack_130 = (undefined1 *)unaff_x22;
  plStack_128 = plVar8;
  pcStack_120 = pcVar2;
  pcStack_118 = pcVar1;
  ppuStack_110 = &puStack_90;
  _objc_initWeak(auStack_138,pcVar3);
  puVar4 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_140,auStack_138);
  func_0x00010bf11fe0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126ce158;
  _objc_alloc(PTR_PTR_1126ce158);
  func_0x00010c05cd00();
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_140);
  _objc_destroyWeak(auStack_138);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar5);
  return;
}



/* Entry: 1067cd0d0; end: 1067cd243;  */

void FUN_1067cd0d0(long param_1,char *param_2,undefined8 param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  undefined8 *unaff_x22;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined1 *puStack_b0;
  long *plStack_a8;
  char *pcStack_a0;
  char *pcStack_98;
  undefined1 *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 *puStack_68;
  undefined8 auStack_60 [2];
  char cStack_49;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  plVar5 = (long *)0x0;
  if (param_1 != 0) {
    plVar5 = *(long **)(param_1 + 8);
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
    func_0x00010002b838(auStack_60,pcVar1);
    uStack_80 = 0;
    uStack_78 = 0;
    uStack_70 = 0;
    func_0x00010007e1e8(&uStack_80,auStack_60,&lStack_48,1);
    (**(code **)(*plVar5 + 0x18))(plVar5,&UNK_11093d288,&uStack_80,param_3);
    puStack_68 = (undefined1 *)&uStack_80;
    func_0x00010007e5dc(&puStack_68);
    unaff_x22 = &uStack_80;
    if (cStack_49 < '\0') {
      __ZdlPv(auStack_60[0]);
      unaff_x22 = &uStack_80;
    }
  }
  pcVar1 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  pcVar2 = pcVar1;
  __Unwind_Resume(pcVar1);
  pcStack_88 = FUN_1067cd244;
  puStack_b0 = (undefined1 *)unaff_x22;
  plStack_a8 = plVar5;
  pcStack_a0 = pcVar1;
  pcStack_98 = param_2;
  puStack_90 = &stack0xfffffffffffffff0;
  _objc_initWeak(auStack_b8,pcVar2);
  puVar3 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_c0,auStack_b8);
  func_0x00010bf11fe0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126ce158;
  _objc_alloc(PTR_PTR_1126ce158);
  func_0x00010c05cd00();
  _objc_release(puVar3);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 1067cd244; end: 1067cd327; -[SCComposerPeopleBridgeUserServiceProvider provide] */

void FUN_1067cd244(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ce158;
  _objc_alloc(PTR_PTR_1126ce158);
  func_0x00010c05cd00();
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1067cd328; end: 1067cd367;  */

void FUN_1067cd328(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5c6e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1067cd368; end: 1067cd40b; -[SCComposerPeopleBridgeUserServiceProvider _makeUserProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067cd368(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_PTR_1126ce160;
  _objc_alloc(PTR_PTR_1126ce160);
  lVar2 = param_1 + _DAT_112750868;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c2445a0();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + _DAT_11275086c;
  _objc_loadWeakRetained(param_1);
  func_0x00010c0494a0(puVar1,param_2,lVar3,param_1);
  _objc_release(param_1);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1067cd40c; end: 1067cd44f; -[SCComposerPeopleBridgeUserServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1067cd40c(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_11275086c);
  _objc_destroyWeak(param_1 + _DAT_112750868);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112750870);
  return;
}



/* Entry: 1067cd450; end: 1067cd51b; -[SCComposerPeopleChatCameraPresenter initWithChatScopeExposer:chatCameraScopeServices:presentingViewController:] */

undefined1 *
FUN_1067cd450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f3340;
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067cd51c; end: 1067cd6b3; -[SCComposerPeopleChatCameraPresenter presentChatCameraForSnapchatter:replySource:] */

void FUN_1067cd51c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  puVar2 = PTR_PTR_1126ae6c0;
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294300(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126ae6c8;
  _objc_alloc(PTR_PTR_1126ae6c8);
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010901d7c4(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010901cdb0(param_3,puVar5);
  _objc_release(param_3);
  func_0x00010c03e6c0(puVar3);
  _objc_release(puVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  puVar5 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar6 = PTR_PTR_1126b1bb0;
  func_0x00010bf165e0(PTR_PTR_1126b1bb0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7a9c0(param_1);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1067cd6b4; end: 1067cd783; -[SCComposerPeopleChatCameraPresenter _presentChatReplyCameraWithConfiguration:] */

void FUN_1067cd6b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_28,param_1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1067cd784;
  puStack_40 = &UNK_110841fb0;
  _objc_copyWeak(auStack_30,auStack_28);
  _objc_retain(param_3);
  uStack_38 = param_3;
  func_0x0001000d76cc("APPSTORE",&puStack_58);
  _objc_release(uStack_38);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1067cd784; end: 1067cd823;  */

void FUN_1067cd784(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = *(long *)(lVar1 + 8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 == 0) {
      uVar3 = *(undefined8 *)(lVar1 + 0x10);
      func_0x00010bf23680(uVar3,param_2,*(undefined8 *)(lVar1 + 0x18),
                          *(undefined8 *)(param_1 + 0x20),lVar1,1,0,0,0,0,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf9d620(*(undefined8 *)(lVar1 + 8),param_2,uVar3);
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067cd824; end: 1067cd86b; -[SCComposerPeopleChatCameraPresenter dismissCameraScope:] */

void FUN_1067cd824(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 8));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1067cd86c; end: 1067cd8a7; -[SCComposerPeopleChatCameraPresenter .cxx_destruct] */

void FUN_1067cd86c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067cd8a8; end: 1067cd91b; -[SCComposerPeopleChatPresenter initWithChatNavigationService:] */

undefined1 * FUN_1067cd8a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3348;
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



/* Entry: 1067cd91c; end: 1067cd96f; -[SCComposerPeopleChatPresenter presentChatForUserId:chatSourceType:deckContainerFactory:] */

void FUN_1067cd91c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010c294260(PTR_PTR_1126b01c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7a880(param_1,param_2,puVar1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067cd970; end: 1067cd9c3; -[SCComposerPeopleChatPresenter presentChatForGroupId:chatSourceType:deckContainerFactory:] */

void FUN_1067cd970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b01c0;
  func_0x00010bfcf680(PTR_PTR_1126b01c0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7a880(param_1,param_2,puVar1,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1067cd9c4; end: 1067cdaa3; -[SCComposerPeopleChatPresenter _presentChatForStartChatIdentifier:chatSourceType:] */

void FUN_1067cd9c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1067cdaa4;
  puStack_58 = &UNK_110842a68;
  _objc_copyWeak(auStack_48,auStack_38);
  _objc_retain(param_3);
  uStack_50 = param_3;
  uStack_40 = param_4;
  func_0x0001000d76cc("APPSTORE",&puStack_70);
  _objc_release(uStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1067cdaa4; end: 1067cdadb;  */

void FUN_1067cdaa4(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be621e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1067cdadc; end: 1067cdb53; -[SCComposerPeopleChatPresenter _navigateToChatForStartChatIdentifier:chatSourceType:] */

void FUN_1067cdadc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  func_0x00010687a9e4(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c236c80();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067cdb54; end: 1067cdb5f; -[SCComposerPeopleChatPresenter .cxx_destruct] */

void FUN_1067cdb54(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1067cdb60; end: 1067cdcb3; -[SCComposerPeopleFriendActionSheetPresenter initWithSnapchattersDataFetcher:friendActionSheetScopeExposer:chatCameraPresenter:chatPresenter:profilePresenter:uiContainer:] */

undefined1 *
FUN_1067cdb60(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126f3350;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_8;
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



/* Entry: 1067cdcb4; end: 1067cde2f; -[SCComposerPeopleFriendActionSheetPresenter presentActionSheetForFriendWithUser:analyticsContext:] */

void FUN_1067cdcb4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_4;
  _objc_release(uVar1);
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  _objc_initWeak(auStack_48,param_1);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  func_0x00010c2448c0(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1067cde30; end: 1067cdf8f;  */

void FUN_1067cde30(long param_1,undefined *param_2,long param_3)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if ((param_3 == 0) && (param_1 != 0)) {
    if (param_2 == (undefined *)0x0) {
      puVar1 = PTR_PTR_1126b15c8;
      _objc_alloc();
      func_0x00010c040e60();
    }
    else {
      _objc_retain(param_2);
      puVar1 = param_2;
    }
    puVar2 = auStack_48;
    _objc_initWeak(puVar2,param_1);
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(puVar1);
    func_0x00010c0f7fc0(puVar2);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 1067cdf90; end: 1067cdfcb;  */

void FUN_1067cdf90(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be79ea0(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1067cdfcc; end: 1067ce047; -[SCComposerPeopleFriendActionSheetPresenter friendActionSheetOpenProfile:] */

void FUN_1067cdfcc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = uVar3;
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c10dd20(uVar1,param_2,uVar3,uVar2,*(undefined8 *)(param_1 + 0x38),0,0,0);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1067ce048; end: 1067ce0eb; -[SCComposerPeopleFriendActionSheetPresenter friendActionSheetDidDismiss:withRequestedChat:deepLinkURL:] */

void FUN_1067ce048(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(ulong *)(param_1 + 0x38);
  func_0x00010c0f1e60();
  if ((uint)uVar2 < 7) {
    uVar3 = *(undefined8 *)(&UNK_10dddf940 + (uVar2 & 0xffffffff) * 8);
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  func_0x00010c10b8e0(uVar4,param_2,uVar1,uVar3,0);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1067ce0ec; end: 1067ce18b; -[SCComposerPeopleFriendActionSheetPresenter friendActionSheetShowCameraForSnap:] */

void FUN_1067ce0ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010c244280(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(ulong *)(param_1 + 0x38);
  func_0x00010c0f1e60();
  if ((uint)uVar2 < 7) {
    uVar3 = *(undefined8 *)(&UNK_10dddf978 + (uVar2 & 0xffffffff) * 8);
  }
  else {
    uVar3 = 0xffffffffffffffff;
  }
  func_0x00010c10b860(uVar4,param_2,uVar1,uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar4);
  return;
}



/* Entry: 1067ce18c; end: 1067ce1d3; -[SCComposerPeopleFriendActionSheetPresenter friendActionSheetDidDismiss:] */

void FUN_1067ce18c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1067ce1d4; end: 1067ce29f; -[SCComposerPeopleFriendActionSheetPresenter _presentActionSheetForSnapchatter:] */

void FUN_1067ce1d4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar2 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) {
    puVar3 = PTR_PTR_1126b2860;
    _objc_alloc(PTR_PTR_1126b2860);
    uVar4 = *(ulong *)(param_1 + 0x38);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    func_0x00010c0f1e60();
    if ((uint)uVar4 < 7) {
      uVar5 = *(undefined8 *)(&UNK_10dddf9b0 + (uVar4 & 0xffffffff) * 8);
    }
    else {
      uVar5 = 0;
    }
    func_0x00010c0589a0(puVar3,param_2,uVar1,param_3,uVar5,0,0,0xffffffffcf5d0adf,0x31,param_1);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1067ce2a0; end: 1067ce317; -[SCComposerPeopleFriendActionSheetPresenter .cxx_destruct] */

void FUN_1067ce2a0(long param_1)

{
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



/* Entry: 1067ce318; end: 1067ce4bf; -[SCComposerPeopleProfilePresenter initWithSnapchattersDataFetcher:snapchatterPublicInfoFetcher:friendProfileScopeExposer:chatPresenter:callLauncher:uiContainer:circumstanceEngine:composerDeckConverter:] */

undefined1 *
FUN_1067ce318(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f3358;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_10;
    _objc_release(uVar2);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1067ce4c0; end: 1067ce8a3; -[SCComposerPeopleProfilePresenter presentProfileForUser:userId:analyticsContext:expandBitmojiHeader:deckContainerFactory:shouldFetchPublicInfo:] */

void FUN_1067ce4c0(long param_1,undefined8 param_2,undefined *param_3,undefined *param_4,
                  undefined8 param_5,undefined1 param_6,long param_7,int param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 auStack_e0 [8];
  undefined1 uStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined1 uStack_88;
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_5;
  _objc_release(uVar1);
  if (param_4 == (undefined *)0x0) {
    puVar3 = param_3;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(param_4);
    puVar3 = param_4;
  }
  if (param_7 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010c0fe260();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar4;
    func_0x00010c0cfcc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
  }
  _objc_initWeak(auStack_80,param_1);
  if (param_8 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puVar6 = auStack_e0;
    puVar7 = auStack_80;
    _objc_copyWeak(puVar6);
    _objc_retain(param_3);
    _objc_retain(puVar3);
    _objc_retain(param_5);
    uStack_d8 = param_6;
    _objc_retain(uVar1);
    puVar8 = puVar3;
    func_0x00010c2448c0(uVar4);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar4);
    _objc_release(uVar1);
    _objc_release(param_5);
    _objc_release(puVar3);
    puVar5 = param_3;
  }
  else {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    puStack_78 = puVar3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(PTR___dispatch_main_q_11034be20);
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_1067ce8a4;
    puStack_b8 = &UNK_1108d5a20;
    puVar6 = auStack_90;
    puVar7 = auStack_80;
    _objc_copyWeak(puVar6);
    _objc_retain(param_3);
    puStack_b0 = param_3;
    _objc_retain(puVar3);
    puStack_a8 = puVar3;
    _objc_retain(param_5);
    uStack_a0 = param_5;
    uStack_88 = param_6;
    _objc_retain(uVar1);
    puVar8 = puVar5;
    uStack_98 = uVar1;
    func_0x00010c244ea0(uVar4);
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uStack_98);
    _objc_release(uStack_a0);
    _objc_release(puStack_a8);
    puVar5 = puStack_b0;
  }
  _objc_release(puVar5);
  _objc_destroyWeak(puVar6);
  _objc_destroyWeak(auStack_80);
  _objc_release(uVar1);
  _objc_release(puVar3);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    _objc_destroyWeak(puVar6);
    _objc_destroyWeak(auStack_80);
    __Unwind_Resume();
    _objc_retain(puVar7);
    puVar3 = param_3 + 0x40;
    _objc_loadWeakRetained();
    if (puVar3 != (undefined *)0x0) {
      puVar6 = puVar7;
      func_0x00010bfb1920();
      _objc_retainAutoreleasedReturnValue();
      if ((puVar8 == (undefined *)0x0) &&
         (puVar6 != (undefined1 *)0x0 || *(long *)(param_3 + 0x20) != 0)) {
        func_0x00010be7dce0(puVar3);
      }
      _objc_release(puVar6);
    }
    _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar7);
    return;
  }
  return;
}



/* Entry: 1067ce8a4; end: 1067ce93b;  */

void FUN_1067ce8a4(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = param_2;
    func_0x00010bfb1920();
    _objc_retainAutoreleasedReturnValue();
    if (param_3 == 0) {
      if (lVar2 != 0 || *(long *)(param_1 + 0x20) != 0) {
        func_0x00010be7dce0(lVar1);
      }
    }
    _objc_release(lVar2);
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


