/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10690e020; end: 10690e033; -[SCSettingsStoryNotificationsViewController setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690e020(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11275388c,param_3);
  return;
}



/* Entry: 10690e034; end: 10690e043; -[SCSettingsStoryNotificationsViewController doneButton] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10690e034(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112753870);
}



/* Entry: 10690e044; end: 10690e083; -[SCSettingsStoryNotificationsViewController setDoneButton:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690e044(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_112753870;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10690e084; end: 10690e19f; -[SCSettingsStoryNotificationsViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10690e084(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_112753870,0);
  _objc_destroyWeak(param_1 + _DAT_11275388c);
  _objc_storeStrong(param_1 + _DAT_112753854,0);
  _objc_storeStrong(param_1 + _DAT_112753864,0);
  _objc_storeStrong(param_1 + _DAT_112753860,0);
  _objc_storeStrong(param_1 + _DAT_11275385c,0);
  _objc_storeStrong(param_1 + _DAT_112753850,0);
  _objc_storeStrong(param_1 + _DAT_112753884,0);
  _objc_storeStrong(param_1 + _DAT_112753880,0);
  _objc_storeStrong(param_1 + _DAT_11275387c,0);
  _objc_storeStrong(param_1 + _DAT_112753878,0);
  _objc_storeStrong(param_1 + _DAT_112753874,0);
  _objc_storeStrong(param_1 + _DAT_112753858,0);
  _objc_storeStrong(param_1 + _DAT_11275386c,0);
  _objc_storeStrong(param_1 + _DAT_112753868,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275384c,0);
  return;
}



/* Entry: 10690e1a0; end: 10690e23b; -[SCSettingsStoryNotificationsSectionDataModel initWithCoder:] */

undefined1 * FUN_10690e1a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3cc8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
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



/* Entry: 10690e23c; end: 10690e2c3; -[SCSettingsStoryNotificationsSectionDataModel initWithSectionType:sectionTitle:] */

undefined1 *
FUN_10690e23c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3cc8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10690e2c4; end: 10690e2e7; -[SCSettingsStoryNotificationsSectionDataModel copyWithZone:] */

undefined8 FUN_10690e2c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10690e2e8; end: 10690e347; -[SCSettingsStoryNotificationsSectionDataModel encodeWithCoder:] */

void FUN_10690e2e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92fc0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e64b38);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110e64b58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10690e348; end: 10690e3a7; -[SCSettingsStoryNotificationsSectionDataModel hash] */

undefined8 * FUN_10690e348(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_28 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  puVar2 = &uStack_28;
  uStack_20 = uVar1;
  func_0x000100505190(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10690e42c;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (puVar2[1] != param_3[1])) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_10690e42c;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_10690e42c;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_10690e42c:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 10690e3a8; end: 10690e447; -[SCSettingsStoryNotificationsSectionDataModel isEqual:] */

long FUN_10690e3a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10690e42c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(long *)(param_1 + 8) != *(long *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_10690e42c;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_10690e42c;
    }
  }
  lVar3 = 1;
LAB_10690e42c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10690e448; end: 10690e44f; -[SCSettingsStoryNotificationsSectionDataModel sectionType] */

undefined8 FUN_10690e448(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10690e450; end: 10690e457; -[SCSettingsStoryNotificationsSectionDataModel sectionTitle] */

undefined8 FUN_10690e450(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10690e458; end: 10690e463; -[SCSettingsStoryNotificationsSectionDataModel .cxx_destruct] */

void FUN_10690e458(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10690e464; end: 10690e4eb; -[SCSettingsStoryNotificationsSectionHeaderViewModel initWithCoder:] */

undefined1 * FUN_10690e464(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3cd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10690e4ec; end: 10690e563; -[SCSettingsStoryNotificationsSectionHeaderViewModel initWithSectionTitle:] */

undefined1 * FUN_10690e4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3cd0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10690e564; end: 10690e587; -[SCSettingsStoryNotificationsSectionHeaderViewModel copyWithZone:] */

undefined8 FUN_10690e564(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10690e588; end: 10690e59f; -[SCSettingsStoryNotificationsSectionHeaderViewModel encodeWithCoder:] */

void FUN_10690e588(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110e64b58);
  return;
}



/* Entry: 10690e5a0; end: 10690e5a7; -[SCSettingsStoryNotificationsSectionHeaderViewModel hash] */

void FUN_10690e5a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10690e5a8; end: 10690e637; -[SCSettingsStoryNotificationsSectionHeaderViewModel isEqual:] */

long FUN_10690e5a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10690e61c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10690e61c;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10690e61c;
    }
  }
  lVar3 = 1;
LAB_10690e61c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10690e638; end: 10690e63f; -[SCSettingsStoryNotificationsSectionHeaderViewModel sectionTitle] */

undefined8 FUN_10690e638(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10690e640; end: 10690e64b; -[SCSettingsStoryNotificationsSectionHeaderViewModel .cxx_destruct] */

void FUN_10690e640(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10690e64c; end: 10690e70f; -[SCOptInEntity initWithCoder:] */

undefined1 * FUN_10690e64c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f3cd8;
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
    uVar2 = param_3;
    func_0x00010bf66f40();
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10690e710; end: 10690e7c3; -[SCOptInEntity initWithEntityId:displayName:optInState:] */

undefined1 *
FUN_10690e710(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f3cd8;
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
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10690e7c4; end: 10690e7e7; -[SCOptInEntity copyWithZone:] */

undefined8 FUN_10690e7c4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10690e7e8; end: 10690e85b; -[SCOptInEntity encodeWithCoder:] */

void FUN_10690e7e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c14cb00(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110e64b78);
  func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                      &PTR____CFConstantStringClassReference_110de8238);
  func_0x00010bf92fc0(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                      &PTR____CFConstantStringClassReference_110e64b98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10690e85c; end: 10690e8d3; -[SCOptInEntity hash] */

undefined8 * FUN_10690e85c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uStack_30 = *(undefined8 *)(param_1 + 0x18);
  uStack_38 = uVar2;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10690e964:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10690e970;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x18) == *(long *)(param_3 + 0x18)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x10);
        if (puVar6 != *(undefined1 **)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10690e970;
        }
        goto LAB_10690e964;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10690e970:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10690e8d4; end: 10690e98b; -[SCOptInEntity isEqual:] */

long FUN_10690e8d4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10690e964:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10690e970;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071ae0();
          goto LAB_10690e970;
        }
        goto LAB_10690e964;
      }
    }
    lVar3 = 0;
  }
LAB_10690e970:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10690e98c; end: 10690e993; -[SCOptInEntity entityId] */

undefined8 FUN_10690e98c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10690e994; end: 10690e99b; -[SCOptInEntity displayName] */

undefined8 FUN_10690e994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10690e99c; end: 10690e9a3; -[SCOptInEntity optInState] */

undefined8 FUN_10690e99c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10690e9a4; end: 10690e9d3; -[SCOptInEntity .cxx_destruct] */

void FUN_10690e9a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10690e9d4; end: 10690ea27; +[SCOptInEntityId publisherStoryWithPublisherId:] */

void FUN_10690e9d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126cef28;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10690ea28; end: 10690ea93; +[SCOptInEntityId userStoryWithUserId:] */

void FUN_10690ea28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cef28;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10690ea94; end: 10690ec2f; -[SCOptInEntityId initWithCoder:] */

undefined8 * FUN_10690ea94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 unaff_x21;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined **ppuStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puStack_50 = PTR_PTR_1126f3ce0;
  puVar1 = &uStack_58;
  uStack_58 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    unaff_x21 = param_3;
    func_0x00010bf67000();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = unaff_x21;
    func_0x00010c0720c0();
    if ((int)uVar3 == 0) {
      uVar3 = unaff_x21;
      func_0x00010c0720c0();
      if ((int)uVar3 == 0) goto LAB_10690ebbc;
      uVar3 = param_3;
      func_0x00010bf67000();
      _objc_retainAutoreleasedReturnValue();
      uVar4 = puVar1[3];
      puVar1[3] = uVar3;
      _objc_release(uVar4);
      uVar3 = 1;
    }
    else {
      uVar4 = param_3;
      func_0x00010bf66f00();
      uVar3 = 0;
      puVar1[2] = uVar4;
    }
    puVar1[1] = uVar3;
    _objc_release(unaff_x21);
  }
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar1;
  }
  ___stack_chk_fail();
LAB_10690ebbc:
  puVar1 = (undefined8 *)PTR__OBJC_CLASS___NSException_1126af520;
  ppuStack_48 = &PTR____CFConstantStringClassReference_110db7158;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  uStack_40 = unaff_x21;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf9aa60();
  _objc_retainAutoreleasedReturnValue();
  _objc_autorelease();
  _objc_release(puVar2);
  _objc_exception_throw(puVar1);
  _objc_retain();
  return puVar1;
}



/* Entry: 10690ec30; end: 10690ec53; -[SCOptInEntityId copyWithZone:] */

undefined8 FUN_10690ec30(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10690ec54; end: 10690ecdb; -[SCOptInEntityId encodeWithCoder:] */

void FUN_10690ec54(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  
  _objc_retain(param_3);
  if (*(long *)(param_1 + 8) == 1) {
    func_0x00010c14cb00(param_3,param_2,*(undefined8 *)(param_1 + 0x18),
                        &PTR____CFConstantStringClassReference_110e64c18);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e64bf8;
  }
  else {
    if (*(long *)(param_1 + 8) != 0) goto LAB_10690eccc;
    func_0x00010bf92fa0(param_3,param_2,*(undefined8 *)(param_1 + 0x10),
                        &PTR____CFConstantStringClassReference_110e64bd8);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e64bb8;
  }
  func_0x00010c14cb00(param_3,param_2,ppuVar1,&PTR____CFConstantStringClassReference_110db7018);
LAB_10690eccc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10690ecdc; end: 10690ed47; -[SCOptInEntityId hash] */

void FUN_10690ecdc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_30;
  long lStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar3 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = *(undefined8 *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  lStack_28 = -lVar1;
  if (-1 < lVar1) {
    lStack_28 = lVar1;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uStack_20 = uVar2;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_58 = PTR_PTR_1126f3ce0;
  puStack_60 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10690ed48; end: 10690ed8b; -[SCOptInEntityId internalInit] */

void FUN_10690ed48(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126f3ce0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10690ed8c; end: 10690ee3b; -[SCOptInEntityId isEqual:] */

long FUN_10690ed8c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10690ee20;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
        (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))))) {
      lVar3 = 0;
      goto LAB_10690ee20;
    }
    lVar3 = *(long *)(param_1 + 0x18);
    if (lVar3 != *(long *)(param_3 + 0x18)) {
      func_0x00010c071ae0();
      goto LAB_10690ee20;
    }
  }
  lVar3 = 1;
LAB_10690ee20:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10690ee3c; end: 10690eebf; -[SCOptInEntityId matchPublisherStory:userStory:] */

void FUN_10690ee3c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 == 0) goto LAB_10690eea4;
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar1 = param_4;
  }
  else {
    if (*(long *)(param_1 + 8) != 0 || param_3 == 0) goto LAB_10690eea4;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    pcVar3 = *(code **)(param_3 + 0x10);
    lVar1 = param_3;
  }
  (*pcVar3)(lVar1,uVar2);
LAB_10690eea4:
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10690eec0; end: 10690eecb; -[SCOptInEntityId .cxx_destruct] */

void FUN_10690eec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10690eecc; end: 10690f4bf;  */

void FUN_10690eecc(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined *puStack_2d0;
  undefined8 uStack_2c8;
  code *pcStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined8 *puStack_290;
  undefined8 *puStack_288;
  undefined *puStack_280;
  undefined8 uStack_278;
  code *pcStack_270;
  undefined *puStack_268;
  undefined *puStack_260;
  undefined8 *puStack_258;
  undefined *puStack_250;
  undefined8 uStack_248;
  code *pcStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined *puStack_220;
  undefined8 *puStack_218;
  undefined8 *puStack_210;
  undefined1 uStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  code *pcStack_1e8;
  undefined8 uStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined8 *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
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
  _objc_retain();
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_1);
  lVar12 = param_1;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar13 = *plStack_130;
    do {
      lVar14 = 0;
      do {
        if (*plStack_130 != lVar13) {
          _objc_enumerationMutation(param_1);
        }
        lVar15 = *(long *)(lStack_138 + lVar14 * 8);
        lVar3 = lVar15;
        func_0x00010bf5b280();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010bf0a920();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar3);
        puVar5 = puVar2;
        if (lVar4 == 0) {
          lVar3 = lVar15;
          func_0x00010bf5b280();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar3;
          func_0x00010bf0aaa0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          _objc_release(lVar3);
          puVar5 = puVar1;
          if (lVar4 != 0) goto LAB_10690f034;
        }
        else {
LAB_10690f034:
          func_0x00010bfe5ec0(lVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar5);
          _objc_release(lVar15);
        }
        lVar14 = lVar14 + 1;
      } while (lVar12 != lVar14);
      lVar12 = param_1;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  _objc_release(param_1);
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x3032000000;
  pcStack_158 = FUN_10690f4c0;
  uStack_150 = 0x10690f4d0;
  puVar5 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_opt_new();
  puStack_198 = &uStack_1a0;
  uStack_1a0 = 0;
  uStack_190 = 0x3032000000;
  pcStack_188 = FUN_10690f4c0;
  uStack_180 = 0x10690f4d0;
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_148 = puVar5;
  _objc_opt_new();
  puStack_1c8 = &uStack_1d0;
  uStack_1d0 = 0;
  uStack_1c0 = 0x3032000000;
  pcStack_1b8 = FUN_10690f4c0;
  uStack_1b0 = 0x10690f4d0;
  puVar5 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_178 = puVar6;
  _objc_opt_new();
  puStack_1f8 = &uStack_200;
  uStack_200 = 0;
  uStack_1f0 = 0x3032000000;
  pcStack_1e8 = FUN_10690f4c0;
  uStack_1e0 = 0x10690f4d0;
  puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  puStack_1a8 = puVar5;
  _objc_opt_new();
  puStack_1d8 = puVar6;
  _dispatch_group_create();
  puVar5 = PTR_PTR_1126ae810;
  _objc_opt_new();
  puVar7 = puVar1;
  func_0x00010bf529e0();
  if (puVar7 != (undefined *)0x0) {
    _dispatch_group_enter(puVar6);
    puVar7 = puVar1;
    func_0x00010bf51e00(puVar1);
    uVar8 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_250 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_248 = 0xc2000000;
    pcStack_240 = FUN_10690f4d8;
    puStack_238 = &UNK_110949e70;
    _objc_retain(puVar6);
    puStack_218 = &uStack_1a0;
    puStack_230 = puVar6;
    uStack_208 = param_4;
    _objc_retain(param_3);
    puStack_210 = &uStack_200;
    uStack_228 = param_3;
    _objc_retain(puVar5);
    puStack_220 = puVar5;
    func_0x00010c244e80(param_2);
    _objc_release(uVar8);
    _objc_release(puVar7);
    _objc_release(puStack_220);
    _objc_release(uStack_228);
    _objc_release(puStack_230);
  }
  puVar7 = puVar2;
  func_0x00010bf529e0();
  if (puVar7 != (undefined *)0x0) {
    _dispatch_group_enter(puVar6);
    uVar8 = param_3;
    func_0x00010c1176a0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar8;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar2;
    func_0x00010bf51e00(puVar2);
    uVar10 = uVar9;
    func_0x00010c1176c0(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puStack_280 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_278 = 0xc2000000;
    pcStack_270 = FUN_10690fc18;
    puStack_268 = &UNK_110949f00;
    puStack_258 = &uStack_1d0;
    _objc_retain(puVar6);
    uVar11 = uVar10;
    puStack_260 = puVar6;
    func_0x00010c25ff60(uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    _objc_release(puVar7);
    _objc_release(uVar9);
    _objc_release(uVar8);
    func_0x00010bef7e00(puVar5);
    _objc_release(uVar11);
    _objc_release(puStack_260);
  }
  puStack_2d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2c8 = 0xc2000000;
  pcStack_2c0 = FUN_10690fd90;
  puStack_2b8 = &UNK_110899a58;
  puStack_2a0 = &uStack_170;
  puStack_298 = &uStack_1d0;
  puStack_290 = &uStack_1a0;
  puStack_288 = &uStack_200;
  puStack_2b0 = puVar5;
  uStack_2a8 = param_5;
  _objc_retain();
  _objc_retain(puVar5);
  func_0x000100bc0718(puVar6,param_6,&puStack_2d0);
  _objc_release(uStack_2a8);
  _objc_release(puStack_2b0);
  _objc_release(puVar5);
  _objc_release(puVar6);
  __Block_object_dispose(&uStack_200,8);
  _objc_release(puStack_1d8);
  __Block_object_dispose(&uStack_1d0,8);
  _objc_release(puStack_1a8);
  __Block_object_dispose(&uStack_1a0,8);
  _objc_release(puStack_178);
  __Block_object_dispose(&uStack_170,8);
  _objc_release(puStack_148);
  _objc_release(param_5);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_1d0,8);
  __Block_object_dispose(&uStack_1a0,8);
  lVar12 = 8;
  __Block_object_dispose(&uStack_170);
  __Unwind_Resume();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(lVar12 + 0x28);
  *(undefined8 *)(lVar12 + 0x28) = 0;
  return;
}



/* Entry: 10690f4c0; end: 10690f4d7;  */

void FUN_10690f4c0(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10690f4d8; end: 10690f907;  */

void FUN_10690f4d8(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  code *pcStack_188;
  undefined8 uStack_180;
  undefined *puStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if ((param_3 == 0) && (*(char *)(param_1 + 0x48) == '\x01')) {
    puStack_198 = &uStack_1a0;
    uStack_1a0 = 0;
    uStack_190 = 0x3032000000;
    pcStack_188 = FUN_10690f4c0;
    uStack_180 = 0x10690f4d0;
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_opt_new();
    puStack_178 = puVar2;
    _objc_retain(param_2);
    lVar4 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        lVar7 = *(long *)(lVar11 * 8);
        lVar3 = lVar7;
        func_0x00010c242760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar3 != 0) {
          uVar8 = puStack_198[5];
          lVar3 = lVar7;
          func_0x00010c242760(lVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c2923e0(lVar7);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0560(uVar8);
          _objc_release(lVar7);
          _objc_release(lVar3);
        }
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    _objc_retain(param_2);
    lVar4 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        uVar8 = *(undefined8 *)(lVar11 * 8);
        puVar2 = PTR_PTR_1126cefa0;
        _objc_alloc(PTR_PTR_1126cefa0);
        func_0x00010c049020();
        uVar9 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
        func_0x00010c2923e0(uVar8);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0560(uVar9);
        _objc_release(uVar8);
        _objc_release(puVar2);
        lVar11 = lVar11 + 1;
      } while (lVar4 != lVar11);
      lVar4 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    lVar4 = puStack_198[5];
    func_0x00010bf529e0();
    if (lVar4 != 0) {
      _dispatch_group_enter(*(undefined8 *)(param_1 + 0x20));
      uVar5 = *(undefined8 *)(param_1 + 0x28);
      func_0x00010c1176a0();
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = puStack_198[5];
      func_0x00010bf00d20(uVar6);
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar8;
      func_0x00010c1176c0(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x20);
      _objc_retain(uVar10);
      uVar12 = uVar9;
      func_0x00010c25ff60(uVar9);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar9);
      _objc_release(uVar6);
      _objc_release(uVar8);
      _objc_release(uVar5);
      func_0x00010bef7e00(*(undefined8 *)(param_1 + 0x30));
      _objc_release(uVar12);
      _objc_release(uVar10);
    }
    __Block_object_dispose(&uStack_1a0,8);
    _objc_release(puStack_178);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar8 = 8;
  __Block_object_dispose(&uStack_1a0,8);
  __Unwind_Resume();
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar12);
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(uVar9);
  func_0x00010c0c0800(uVar8);
  _objc_release(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar12);
  return;
}



/* Entry: 10690f908; end: 10690f9cf;  */

void FUN_10690f908(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10690f9d0; end: 10690fbdf;  */

void FUN_10690f9d0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  long lVar9;
  long lVar10;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar8 = &PTR___NSConcreteGlobalBlock_110949e00;
  func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_110949e00,
                      &PTR___NSConcreteGlobalBlock_110949e20);
  lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  func_0x00010bf002e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar10 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar4 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
      func_0x00010c0e00e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
      if (lVar5 != 0) {
        uVar6 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
        func_0x00010c0e00e0(uVar6);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR_PTR_1126cefa0;
        _objc_alloc(PTR_PTR_1126cefa0);
        uVar4 = uVar6;
        func_0x00010c244280(uVar6);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c049020(puVar7);
        _objc_release(uVar4);
        func_0x00010c1d0560(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
        _objc_release(puVar7);
        _objc_release(uVar6);
      }
      _objc_release(lVar5);
      lVar10 = lVar10 + 1;
    } while (lVar3 != lVar10);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010c116a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(ppuVar8,PTR_s_profileId_1126234a8);
  return;
}



/* Entry: 10690fbe0; end: 10690fbe7;  */

void FUN_10690fbe0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c116a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_profileId_1126234a8);
  return;
}



/* Entry: 10690fbe8; end: 10690fc0f;  */

void FUN_10690fbe8(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 10690fc10; end: 10690fc17;  */

void FUN_10690fc10(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10690fc18; end: 10690fcdb;  */

void FUN_10690fc18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar1);
  func_0x00010c0c0800(param_2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10690fcdc; end: 10690fd2f;  */

void FUN_10690fcdc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010050471c(param_2,&PTR___NSConcreteGlobalBlock_110949ea0,
                      &PTR___NSConcreteGlobalBlock_110949ee0);
  lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10690fd30; end: 10690fd37;  */

void FUN_10690fd30(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11b1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_publisherId_112624698);
  return;
}



/* Entry: 10690fd38; end: 10690fd87;  */

void FUN_10690fd38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cefa0;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c049020();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10690fd88; end: 10690fd8f;  */

void FUN_10690fd88(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 10690fd90; end: 10690fe2b;  */

void FUN_10690fd90(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf86d80(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bef7f60(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  func_0x00010bef7f60(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  func_0x00010bef7f60(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  lVar1 = *(long *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10690fe2c; end: 10690fed7; -[SCCreatorSettingsCreatorMetadata initWithSnapchatter:snapProProfile:] */

undefined1 *
FUN_10690fe2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3ce8;
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



/* Entry: 10690fed8; end: 10690fefb; -[SCCreatorSettingsCreatorMetadata copyWithZone:] */

undefined8 FUN_10690fed8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10690fefc; end: 10690ff6f; -[SCCreatorSettingsCreatorMetadata hash] */

undefined8 * FUN_10690fefc(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10690fff0:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10690fffc;
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
          goto LAB_10690fffc;
        }
        goto LAB_10690fff0;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10690fffc:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10690ff70; end: 106910017; -[SCCreatorSettingsCreatorMetadata isEqual:] */

long FUN_10690ff70(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10690fff0:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10690fffc;
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
          goto LAB_10690fffc;
        }
        goto LAB_10690fff0;
      }
    }
    lVar3 = 0;
  }
LAB_10690fffc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106910018; end: 10691001f; -[SCCreatorSettingsCreatorMetadata snapchatter] */

undefined8 FUN_106910018(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106910020; end: 106910027; -[SCCreatorSettingsCreatorMetadata snapProProfile] */

undefined8 FUN_106910020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106910028; end: 106910057; -[SCCreatorSettingsCreatorMetadata .cxx_destruct] */

void FUN_106910028(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106910058; end: 1069100db; -[SCDiscoverFeedLoadingSection reuseCellClassesByIdentifiers] */

undefined * FUN_106910058(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_28 = &PTR____CFConstantStringClassReference_110eb4658;
  puVar1 = PTR_PTR_1126c21a8;
  _objc_opt_class();
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_20 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,&puStack_20,&ppuStack_28,1);
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 1069100dc; end: 1069100e3; -[SCDiscoverFeedLoadingSection sectionHeaderModel] */

undefined8 FUN_1069100dc(void)

{
  return 0;
}



/* Entry: 1069100e4; end: 1069100eb; -[SCDiscoverFeedLoadingSection numberOfCellsInSection] */

undefined8 FUN_1069100e4(void)

{
  return 1;
}



/* Entry: 1069100ec; end: 10691014f; -[SCDiscoverFeedLoadingSection cellForItemAtIndexInSection:] */

void FUN_1069100ec(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x10;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bf40940();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106910150; end: 10691015b; -[SCDiscoverFeedLoadingSection sizeForItemAtIndexInSection:withWidth:] */

void FUN_106910150(void)

{
  return;
}



/* Entry: 10691015c; end: 106910163; -[SCDiscoverFeedLoadingSection sectionUpdateModel] */

undefined8 FUN_10691015c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106910164; end: 10691016b; -[SCDiscoverFeedLoadingSection setSectionUpdateModel:] */

void FUN_106910164(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf470. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_11034d328)();
  return;
}



/* Entry: 10691016c; end: 106910183; -[SCDiscoverFeedLoadingSection delegate] */

void FUN_10691016c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106910184; end: 10691018f; -[SCDiscoverFeedLoadingSection setDelegate:] */

void FUN_106910184(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x10,param_3);
  return;
}



/* Entry: 106910190; end: 106910197; -[SCDiscoverFeedLoadingSection dataLoadingStatus] */

undefined8 FUN_106910190(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106910198; end: 10691019f; -[SCDiscoverFeedLoadingSection setDataLoadingStatus:] */

void FUN_106910198(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  return;
}



/* Entry: 1069101a0; end: 1069101cb; -[SCDiscoverFeedLoadingSection .cxx_destruct] */

void FUN_1069101a0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069101cc; end: 10691031f; -[SCImpalaSettingsCreatorNotificationsViewControllerCreator initWithUserSession:featureSettingsService:notificationOSSettingsRetriever:runtime:composerBlizzardLogger:snapProProfilesProvider:] */

undefined1 *
FUN_1069101cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_58 = PTR_PTR_1126f3cf0;
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



/* Entry: 106910320; end: 106910633; -[SCImpalaSettingsCreatorNotificationsViewControllerCreator createSettingsNotificationViewController] */

void FUN_106910320(long param_1)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_c8 [8];
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5bd80();
  func_0x00010c1ce320(param_1);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf5bda0();
  func_0x00010c1ce340(param_1);
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126cefa8;
  _objc_alloc_init(PTR_PTR_1126cefa8);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c0754e0();
  if (iVar1 == 0) {
    func_0x00010c194ea0(puVar3);
  }
  else {
    func_0x00010c0dc3a0(param_1);
    func_0x00010c194ea0(puVar3);
    func_0x00010c0dc3c0(param_1);
  }
  func_0x00010c194ec0(puVar3);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c080fe0();
  func_0x00010c0df6e0(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5060(puVar3);
  _objc_release(puVar4);
  _objc_release(uVar2);
  _objc_initWeak(auStack_68,param_1);
  puVar5 = PTR_PTR_1126cefb0;
  _objc_alloc(PTR_PTR_1126cefb0);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106910634;
  puStack_78 = &UNK_110849200;
  _objc_copyWeak(auStack_70,auStack_68);
  puStack_b8 = puVar4;
  uStack_b0 = 0xc2000000;
  uStack_a8 = 0x106910678;
  puStack_a0 = &UNK_110849200;
  _objc_copyWeak(auStack_98,auStack_68);
  func_0x00010c0597c0(puVar5);
  puVar4 = PTR_PTR_1126cefb8;
  _objc_alloc_init(PTR_PTR_1126cefb8);
  func_0x00010c161980();
  func_0x00010c171b20(puVar4);
  puVar6 = PTR_PTR_1126cefc0;
  _objc_alloc(PTR_PTR_1126cefc0);
  func_0x00010c061d40();
  puVar7 = PTR_PTR_1126cefc8;
  _objc_alloc(PTR_PTR_1126cefc8);
  func_0x00010c0601e0();
  _objc_initWeak(auStack_c0,puVar7);
  _objc_copyWeak(auStack_c8,auStack_c0);
  func_0x00010c1d20e0(puVar5);
  _objc_destroyWeak(auStack_c8);
  _objc_destroyWeak(auStack_c0);
  _objc_release(puVar6);
  _objc_release(puVar4);
  _objc_release(puVar5);
  _objc_destroyWeak(auStack_98);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 106910634; end: 1069106bb;  */

void FUN_106910634(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010c1ce320(param_1);
    func_0x00010bedc360(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1069106bc; end: 10691074b;  */

void FUN_1069106bc(long param_1)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined1 auStack_28 [8];
  
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_10691074c;
  puStack_30 = &UNK_1108434b0;
  _objc_copyWeak(auStack_28,param_1 + 0x20);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10691074c; end: 10691079b;  */

void FUN_10691074c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c0d66a0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c103a00();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10691079c; end: 1069108ff; -[SCImpalaSettingsCreatorNotificationsViewControllerCreator _updateNotificationSettingsIfNecessary] */

void FUN_10691079c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf5bd80();
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf5bda0();
  _objc_release(uVar2);
  lVar3 = param_1;
  func_0x00010c0dc3a0();
  if (((int)uVar4 == (int)lVar3) ||
     (lVar3 = param_1, func_0x00010c0dc3c0(), (int)uVar1 == (int)lVar3)) {
    _objc_initWeak(auStack_38,param_1);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar1 = 0x11;
    func_0x0001000819a8(0x11,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0f8520(uVar4);
    _objc_release(uVar1);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 106910900; end: 10691092b;  */

void FUN_106910900(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be72100();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10691092c; end: 10691092f;  */

void FUN_10691092c(void)

{
  return;
}



/* Entry: 106910930; end: 1069109ab; -[SCImpalaSettingsCreatorNotificationsViewControllerCreator _performNotificationSettingsChanges] */

void FUN_106910930(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010c0dc3a0();
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185f00();
  _objc_release(uVar1);
  func_0x00010c0dc3c0(param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c185f20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1069109ac; end: 1069109b3; -[SCImpalaSettingsCreatorNotificationsViewControllerCreator notificationMidrollOn] */

undefined1 FUN_1069109ac(long param_1)

{
  return *(undefined1 *)(param_1 + 0x38);
}



/* Entry: 1069109b4; end: 1069109bb; -[SCImpalaSettingsCreatorNotificationsViewControllerCreator setNotificationMidrollOn:] */

void FUN_1069109b4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x38) = param_3;
  return;
}



/* Entry: 1069109bc; end: 1069109c3; -[SCImpalaSettingsCreatorNotificationsViewControllerCreator notificationMilestoneOn] */

undefined1 FUN_1069109bc(long param_1)

{
  return *(undefined1 *)(param_1 + 0x39);
}



/* Entry: 1069109c4; end: 1069109cb; -[SCImpalaSettingsCreatorNotificationsViewControllerCreator setNotificationMilestoneOn:] */

void FUN_1069109c4(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x39) = param_3;
  return;
}



/* Entry: 1069109cc; end: 106910a2b; -[SCImpalaSettingsCreatorNotificationsViewControllerCreator .cxx_destruct] */

void FUN_1069109cc(long param_1)

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



/* Entry: 106910a2c; end: 106910ad7; -[SCImpalaSettingsNotificationSettingsActionHandler initWithUpdateMidRollLambda:updateMilestoneLambda:] */

undefined1 *
FUN_106910a2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3cf8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106910ad8; end: 106910ae7; -[SCImpalaSettingsNotificationSettingsActionHandler updateMidrollNotificationsWithEnabled:] */

void FUN_106910ad8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106910ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 106910ae8; end: 106910af7; -[SCImpalaSettingsNotificationSettingsActionHandler updateMilestoneNotificationsWithEnabled:] */

void FUN_106910ae8(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000106910af4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 106910af8; end: 106910b27; -[SCImpalaSettingsNotificationSettingsActionHandler setOnDismissUpdate:] */

void FUN_106910af8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retainBlock();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106910b28; end: 106910b33; -[SCImpalaSettingsNotificationSettingsActionHandler onDismiss] */

void FUN_106910b28(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106910b30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 106910b34; end: 106910baf; -[SCImpalaSettingsNotificationSettingsActionHandler .cxx_destruct] */

void FUN_106910b34(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106910bb0; end: 1069117af; -[SCSpotlightQueryServiceProvider _createSpotlightQueryCoordinator] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106910bb0(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
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
  undefined *puVar34;
  undefined *puVar35;
  long lVar36;
  long lVar37;
  undefined *puVar38;
  undefined *puVar39;
  long lVar40;
  long lVar41;
  long lVar42;
  undefined *puVar43;
  undefined *puVar44;
  undefined *puVar45;
  long lVar46;
  undefined *puVar47;
  long lVar48;
  long lVar49;
  long lVar50;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  lVar1 = param_1 + _DAT_1127538f4;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c293740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar48 = (long)_DAT_1127538f8;
  lVar1 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar3 = lVar1;
  func_0x00010c08d400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar48 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar4 = lVar48;
  func_0x00010c08d440();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar48);
  lVar48 = (long)_DAT_1127538fc;
  lVar1 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar5 = lVar1;
  func_0x00010c0cef00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753900;
  _objc_loadWeakRetained();
  lVar6 = lVar1;
  func_0x00010c273160();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753904;
  _objc_loadWeakRetained();
  lVar7 = lVar1;
  func_0x00010c08d4a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753908;
  _objc_loadWeakRetained();
  lVar8 = lVar1;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar49 = (long)_DAT_11275390c;
  lVar1 = param_1 + lVar49;
  _objc_loadWeakRetained();
  lVar9 = lVar1;
  func_0x00010bfcdf20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753910;
  _objc_loadWeakRetained();
  lVar10 = lVar1;
  func_0x00010c08d500();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753914;
  _objc_loadWeakRetained();
  lVar11 = lVar1;
  func_0x00010bf13100();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753918;
  _objc_loadWeakRetained();
  lVar12 = lVar1;
  func_0x00010bfb7c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar50 = (long)_DAT_11275391c;
  lVar1 = param_1 + lVar50;
  _objc_loadWeakRetained();
  lVar13 = lVar1;
  func_0x00010c08d900();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + lVar50;
  _objc_loadWeakRetained();
  lVar14 = lVar1;
  func_0x00010c08d320();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar48 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar15 = lVar48;
  func_0x00010c0cf020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar48);
  lVar50 = param_1 + lVar50;
  _objc_loadWeakRetained();
  lVar16 = lVar50;
  func_0x00010c08d920();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar50);
  lVar1 = param_1 + _DAT_112753920;
  _objc_loadWeakRetained();
  lVar17 = lVar1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar50 = (long)_DAT_112753924;
  lVar1 = param_1 + lVar50;
  _objc_loadWeakRetained();
  lVar18 = lVar1;
  func_0x00010c136300();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar1 = param_1 + _DAT_112753928;
  _objc_loadWeakRetained();
  lVar19 = lVar1;
  func_0x00010bef2520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar48 = (long)_DAT_11275392c;
  lVar1 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar20 = lVar1;
  func_0x00010c127bc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  lVar48 = param_1 + lVar48;
  _objc_loadWeakRetained();
  lVar21 = lVar48;
  func_0x00010bf1a840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar48);
  lVar50 = param_1 + lVar50;
  _objc_loadWeakRetained();
  lVar22 = lVar50;
  func_0x00010c0b3760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar50);
  lVar1 = param_1 + _DAT_112753930;
  _objc_loadWeakRetained();
  lVar48 = param_1 + _DAT_112753934;
  _objc_loadWeakRetained();
  lVar23 = lVar48;
  func_0x00010c0d79a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar48);
  lVar48 = param_1 + _DAT_112753938;
  _objc_loadWeakRetained();
  lVar24 = lVar48;
  func_0x00010c24b680();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar48);
  lVar48 = param_1 + _DAT_11275393c;
  _objc_loadWeakRetained();
  lVar25 = lVar48;
  func_0x00010c258480();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar48);
  lVar48 = param_1 + _DAT_112753940;
  _objc_loadWeakRetained();
  lVar26 = lVar48;
  func_0x00010bf3cb80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar48);
  lVar48 = param_1 + _DAT_112753944;
  _objc_loadWeakRetained();
  lVar27 = lVar48;
  func_0x00010c14c1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar48);
  lVar49 = param_1 + lVar49;
  _objc_loadWeakRetained();
  lVar28 = lVar49;
  func_0x00010bfa3720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar49);
  lVar48 = param_1 + _DAT_112753948;
  _objc_loadWeakRetained();
  lVar29 = lVar48;
  func_0x00010c112f80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar48);
  lVar48 = param_1 + _DAT_11275394c;
  _objc_loadWeakRetained();
  lVar30 = lVar48;
  func_0x00010c0dc640();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar48);
  lVar48 = param_1 + _DAT_112753950;
  _objc_loadWeakRetained();
  lVar31 = lVar48;
  func_0x00010c24b1e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar48);
  lVar48 = param_1 + _DAT_112753954;
  _objc_loadWeakRetained();
  lVar32 = lVar48;
  func_0x00010c1067a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar48);
  lVar48 = param_1 + _DAT_112753958;
  _objc_loadWeakRetained();
  lVar33 = lVar48;
  func_0x00010bf4cd60();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar48);
  puVar34 = PTR_PTR_1126ae790;
  _objc_alloc();
  puVar38 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  func_0x00010c25da80();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c021520();
  _objc_release(puVar38);
  puVar35 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + _DAT_11275395c;
  _objc_loadWeakRetained();
  lVar50 = lVar48;
  func_0x00010bfa37e0();
  _objc_retainAutoreleasedReturnValue();
  lVar36 = lVar50;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar50);
  _objc_release(lVar48);
  lVar49 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar46 = (long)_DAT_112753960;
  lVar48 = param_1 + lVar46;
  _objc_loadWeakRetained();
  lVar50 = lVar48;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar37 = lVar36;
  func_0x00010bf561a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar50);
  _objc_release(lVar48);
  _objc_release(lVar49);
  _objc_initWeak(auStack_80,param_1);
  puVar38 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_88,auStack_80);
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  puVar39 = PTR_PTR_1126cefd8;
  _objc_alloc(PTR_PTR_1126cefd8);
  lVar40 = lVar5;
  func_0x00010c269d40(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar49 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = param_1 + lVar46;
  _objc_loadWeakRetained();
  lVar41 = lVar48;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  lVar50 = param_1 + _DAT_112753964;
  _objc_loadWeakRetained();
  lVar42 = lVar50;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05e340(puVar39);
  _objc_release(lVar42);
  _objc_release(lVar50);
  _objc_release(lVar41);
  _objc_release(lVar48);
  _objc_release(lVar49);
  _objc_release(lVar40);
  puVar43 = PTR_PTR_1126cefe0;
  _objc_alloc();
  lVar50 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar48 = lVar4;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c035260(puVar43);
  _objc_release(lVar48);
  _objc_release(lVar50);
  lVar48 = param_1 + _DAT_112753968;
  _objc_loadWeakRetained();
  lVar50 = lVar48;
  func_0x00010c134260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar48);
  if (lVar50 == 0) {
    puVar47 = (undefined *)0x0;
  }
  else {
    puVar47 = PTR_PTR_1126cefe8;
    _objc_alloc();
    func_0x00010c03e940();
  }
  puVar44 = PTR_PTR_1126ceff0;
  _objc_alloc(PTR_PTR_1126ceff0);
  param_1 = param_1 + lVar46;
  _objc_loadWeakRetained();
  lVar48 = param_1;
  func_0x00010c09f2a0();
  _objc_retainAutoreleasedReturnValue();
  puVar45 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bffe5e0(puVar44);
  _objc_release(puVar45);
  _objc_release(lVar48);
  _objc_release(param_1);
  func_0x00010c1e63a0(lVar37);
  func_0x00010c1e63a0(puVar39);
  func_0x00010c1e63a0(puVar43);
  _objc_release(puVar47);
  _objc_release(lVar50);
  _objc_release(puVar43);
  _objc_release(puVar39);
  _objc_release(puVar38);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(lVar37);
  _objc_release(lVar36);
  _objc_release(puVar35);
  _objc_release(puVar34);
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
  _objc_release(lVar1);
  _objc_release(lVar22);
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
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar44);
  return;
}



/* Entry: 1069117b0; end: 1069117bb;  */

undefined * FUN_1069117b0(void)

{
  return PTR____kCFBooleanFalse_11034ab60;
}



/* Entry: 1069117bc; end: 106911823;  */

void FUN_1069117bc(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be02020();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106911824; end: 10691189f; -[SCSpotlightQueryServiceProvider _discoverCrashLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106911824(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126b1170;
  _objc_alloc(PTR_PTR_1126b1170);
  param_1 = param_1 + _DAT_11275397c;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf53fa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c006480(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069118a0; end: 106911adf; -[SCSpotlightQueryServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1069118a0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112753968);
  _objc_destroyWeak(param_1 + _DAT_112753978);
  _objc_destroyWeak(param_1 + _DAT_112753960);
  _objc_destroyWeak(param_1 + _DAT_112753970);
  _objc_destroyWeak(param_1 + _DAT_11275394c);
  _objc_destroyWeak(param_1 + _DAT_11275395c);
  _objc_destroyWeak(param_1 + _DAT_112753948);
  _objc_destroyWeak(param_1 + _DAT_112753944);
  _objc_destroyWeak(param_1 + _DAT_112753964);
  _objc_destroyWeak(param_1 + _DAT_112753940);
  _objc_destroyWeak(param_1 + _DAT_112753950);
  _objc_destroyWeak(param_1 + _DAT_112753938);
  _objc_destroyWeak(param_1 + _DAT_112753934);
  _objc_destroyWeak(param_1 + _DAT_11275393c);
  _objc_destroyWeak(param_1 + _DAT_112753930);
  _objc_destroyWeak(param_1 + _DAT_11275397c);
  _objc_destroyWeak(param_1 + _DAT_112753958);
  _objc_destroyWeak(param_1 + _DAT_112753928);
  _objc_destroyWeak(param_1 + _DAT_112753924);
  _objc_destroyWeak(param_1 + _DAT_11275391c);
  _objc_destroyWeak(param_1 + _DAT_112753908);
  _objc_destroyWeak(param_1 + _DAT_112753918);
  _objc_destroyWeak(param_1 + _DAT_112753914);
  _objc_destroyWeak(param_1 + _DAT_112753920);
  _objc_destroyWeak(param_1 + _DAT_112753900);
  _objc_destroyWeak(param_1 + _DAT_11275390c);
  _objc_destroyWeak(param_1 + _DAT_1127538fc);
  _objc_destroyWeak(param_1 + _DAT_112753904);
  _objc_destroyWeak(param_1 + _DAT_112753910);
  _objc_destroyWeak(param_1 + _DAT_112753974);
  _objc_destroyWeak(param_1 + _DAT_1127538f8);
  _objc_destroyWeak(param_1 + _DAT_11275392c);
  _objc_destroyWeak(param_1 + _DAT_11275396c);
  _objc_destroyWeak(param_1 + _DAT_112753954);
  _objc_destroyWeak(param_1 + _DAT_1127538f4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112753980);
  return;
}



/* Entry: 106911ae0; end: 106911bf3; -[SCSpotlightStoriesPrefetcherFactoryImpl .cxx_destruct] */

void FUN_106911ae0(long param_1)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}


