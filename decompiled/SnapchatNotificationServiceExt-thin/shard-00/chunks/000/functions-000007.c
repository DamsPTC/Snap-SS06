/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100032908; end: 100032917;  */

void FUN_100032908(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001000720b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)
            (*(undefined8 *)(param_1 + 0x20),PTR_s_onSuccess__1000d1020,
             *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x10));
  return;
}



/* Entry: 100032918; end: 10003293f; -[SCMapFlyoverNotificationModifier bestAttemptContent] */

void FUN_100032918(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 100032940; end: 10003296f; -[SCMapFlyoverNotificationModifier .cxx_destruct] */

void FUN_100032940(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100032970; end: 10003297b;  */

void FUN_100032970(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006b794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__SCNotifExtTypeContainedIn_1000a0448)
            (param_1,&PTR__OBJC_CLASS___NSConstantArray_1000abce8);
  return;
}



/* Entry: 10003297c; end: 1000329eb; -[SCPlaceSuggestionNotificationModifier initWithProcessingScope:] */

undefined8 FUN_10003297c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1000d1e98;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x0001000707c0();
  _objc_release(param_3);
  func_0x0001000700e0(param_1,param_2,puVar1);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1000329ec; end: 100032a5f; -[SCPlaceSuggestionNotificationModifier initWithAvatar:] */

undefined1 * FUN_1000329ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d24a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100032a60; end: 100032c27; -[SCPlaceSuggestionNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

void FUN_100032a60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100071be0();
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar2;
  _objc_release(uVar5);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x000100071be0();
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  _objc_release(uVar5);
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010006e720(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010006d920(param_1);
  uVar1 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = uVar4;
  _SCNotifExtTypeContainedIn(uVar4,&PTR__OBJC_CLASS___NSConstantArray_1000abce8);
  if ((int)uVar1 != 0) {
    func_0x00010006dac0(*(undefined8 *)(param_1 + 8));
    func_0x0001000720a0(param_4);
  }
  _objc_release(uVar4);
  _objc_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_4);
  return;
}



/* Entry: 100032c28; end: 100032ccf; -[SCPlaceSuggestionNotificationModifier _updateNotificationBodyWithPlaceName:placeName:] */

void FUN_100032c28(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x0001000713a0();
  puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
  if (lVar1 != 0) {
    func_0x000100032ef8();
    _objc_retainAutoreleasedReturnValue();
    func_0x000100072860(puVar2,param_2,lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100072ba0(param_3,param_2,puVar2);
    _objc_release(puVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 100032cd0; end: 100032cf7; -[SCPlaceSuggestionNotificationModifier bestAttemptContent] */

void FUN_100032cd0(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 100032cf8; end: 100032dd3; -[SCPlaceSuggestionNotificationModifier .cxx_destruct] */

void FUN_100032cf8(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100032dd4; end: 100032e47; -[SCMapNotificationModifierProvider initWithProcessingScope:] */

undefined1 * FUN_100032dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d24a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100032e48; end: 100032edb; -[SCMapNotificationModifierProvider getModifier:] */

void FUN_100032e48(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  FUN_1000321ec();
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    FUN_100032970();
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      FUN_100032744();
      if ((int)uVar1 == 0) {
        puVar2 = (undefined *)0x0;
        goto LAB_100032ebc;
      }
      ppuVar3 = &PTR_PTR_1000d1f38;
    }
    else {
      ppuVar3 = &PTR_PTR_1000d1f30;
    }
  }
  else {
    ppuVar3 = &PTR_PTR_1000d1f28;
  }
  puVar2 = *ppuVar3;
  _objc_alloc(puVar2);
  func_0x0001000707c0();
LAB_100032ebc:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 100032edc; end: 100032ee3; -[SCMapNotificationModifierProvider getTaskHandlers:] */

undefined8 FUN_100032edc(void)

{
  return 0;
}



/* Entry: 100032ee4; end: 100032eeb; -[SCMapNotificationModifierProvider getBadgeCountProviders] */

undefined8 FUN_100032ee4(void)

{
  return 0;
}



/* Entry: 100032eec; end: 100032f0f; -[SCMapNotificationModifierProvider .cxx_destruct] */

void FUN_100032eec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100032f10; end: 10003308b;  */

undefined * FUN_100032f10(undefined *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  
  puVar4 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  lVar3 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain();
  func_0x00010006de40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = param_1;
  _SCNotifExtTypeContainedIn(param_1,puVar4);
  _objc_release(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar3) {
    return puVar1;
  }
  ___stack_chk_fail();
  puVar1 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  lVar3 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain();
  func_0x00010006de40();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar4;
  _SCNotifExtTypeContainedIn(puVar4,puVar1);
  _objc_release(puVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 != lVar3) {
    ___stack_chk_fail();
    _objc_retain();
    puVar4 = puVar1;
    func_0x000100071100();
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = puVar1;
      func_0x000100071100();
      if (((ulong)puVar4 & 1) == 0) {
        puVar4 = puVar1;
        func_0x000100071100();
        if (((ulong)puVar4 & 1) == 0) {
          puVar2 = puVar1;
          func_0x000100071100();
          puVar4 = (undefined *)0x3;
          if ((int)puVar2 == 0) {
            puVar4 = (undefined *)0xffffffffffffffff;
          }
        }
        else {
          puVar4 = (undefined *)0x2;
        }
      }
      else {
        puVar4 = (undefined *)0x1;
      }
    }
    else {
      puVar4 = (undefined *)0x0;
    }
    _objc_release(puVar1);
    return puVar4;
  }
  return puVar2;
}



/* Entry: 10003308c; end: 100033127;  */

undefined8 FUN_10003308c(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar1 = param_1;
  func_0x000100071100(param_1,param_2,&PTR____CFConstantStringClassReference_1000a4f88);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_1;
    func_0x000100071100(param_1,param_2,&PTR____CFConstantStringClassReference_1000a4fa8);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_1;
      func_0x000100071100(param_1,param_2,&PTR____CFConstantStringClassReference_1000a4c08);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_1;
        func_0x000100071100(param_1,param_2,&PTR____CFConstantStringClassReference_1000a4fc8);
        uVar2 = 3;
        if ((int)uVar1 == 0) {
          uVar2 = 0xffffffffffffffff;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0;
  }
  _objc_release(param_1);
  return uVar2;
}



/* Entry: 100033128; end: 1000331e7; -[SCMemoriesNotificationModifier initWithProcessingScope:] */

undefined8 FUN_100033128(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  puStack_58 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1000331e8;
  puStack_40 = &UNK_1000a2528;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010006dfc0(puVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000708e0(param_1,param_2,param_3,puVar1);
  _objc_release(puVar1);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1000331e8; end: 100033217;  */

void FUN_1000331e8(void)

{
  _objc_alloc(PTR_PTR_1000d1e98);
  func_0x0001000707c0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 100033218; end: 1000332bb; -[SCMemoriesNotificationModifier initWithProcessingScope:avatarLazy:] */

undefined1 *
FUN_100033218(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d24b0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
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



/* Entry: 1000332bc; end: 1000335b3; -[SCMemoriesNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

void FUN_1000332bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100071be0();
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  _objc_release(uVar8);
  _objc_release(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x000100071be0();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  _objc_release(uVar8);
  _objc_release(uVar2);
  uVar1 = param_3;
  func_0x00010006e720(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar2;
  func_0x000100072060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = param_3;
  func_0x00010006e720(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x000100072060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x000100072060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x000100072060(uVar2);
  _objc_retainAutoreleasedReturnValue();
  lVar6 = param_1;
  func_0x00010006d560();
  if ((int)lVar6 == 0) {
    func_0x0001000720a0(param_4);
  }
  else {
    _objc_initWeak(auStack_68,param_1);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    func_0x000100074180(uVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    _objc_retain(param_3);
    func_0x00010006f020(uVar7);
    _objc_release(uVar7);
    _objc_release(param_3);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_destroyWeak(auStack_68);
  }
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar8);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1000335b4; end: 100033653;  */

void FUN_1000335b4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar2 == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010006e720(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000100071be0();
    func_0x0001000720a0(uVar1);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    func_0x0001000720a0(*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(lVar2);
  return;
}



/* Entry: 100033654; end: 100033687; -[SCMemoriesNotificationModifier bestAttemptContent] */

void FUN_100033654(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000100073800(*(undefined8 *)(param_1 + 0x18),param_2,*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}



/* Entry: 100033688; end: 100033727; -[SCMemoriesNotificationModifier _shallAttachThumbnailFromURL:thumbnailImageKey:thumbnailImageIv:type:] */

bool FUN_100033688(undefined8 param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  int param_6)

{
  bool bVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x000100032fdc();
  if (((param_6 == 0) || (lVar2 = param_3, func_0x0001000713a0(), lVar2 == 0)) ||
     (lVar2 = param_4, func_0x0001000713a0(), lVar2 == 0)) {
    bVar1 = false;
  }
  else {
    lVar2 = param_5;
    func_0x0001000713a0(param_5);
    bVar1 = lVar2 != 0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 100033728; end: 10003376f; -[SCMemoriesNotificationModifier .cxx_destruct] */

void FUN_100033728(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100033770; end: 1000337e3; -[SCMemoriesNotificationModifierProvider initWithProcessingScope:] */

undefined1 * FUN_100033770(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d24b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000337e4; end: 100033813; -[SCMemoriesNotificationModifierProvider getModifier:] */

void FUN_1000337e4(void)

{
  _objc_alloc(PTR_PTR_1000d1f48);
  func_0x0001000707c0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 100033814; end: 1000338ab; -[SCMemoriesNotificationModifierProvider getTaskHandlers:] */

undefined * FUN_100033814(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_1000a0110;
  puVar1 = PTR_PTR_1000d1f50;
  _objc_alloc();
  func_0x0001000707c0();
  puVar2 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  puStack_30 = puVar1;
  func_0x00010006de40(PTR__OBJC_CLASS___NSArray_1000d1d38,param_2,&puStack_30,1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  return (undefined *)0x0;
}



/* Entry: 1000338ac; end: 1000338b3; -[SCMemoriesNotificationModifierProvider getBadgeCountProviders] */

undefined8 FUN_1000338ac(void)

{
  return 0;
}



/* Entry: 1000338b4; end: 10003394b; -[SCMemoriesNotificationModifierProvider getSDNTaskHandlers:] */

void FUN_1000338b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
  _objc_retain(param_3);
  func_0x00010006dd80(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010006f360();
  _objc_release(param_3);
  if ((int)uVar2 == 2) {
    puVar3 = PTR_PTR_1000d1f58;
    _objc_alloc(PTR_PTR_1000d1f58);
    func_0x0001000707c0();
    func_0x00010006dae0(puVar1,param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar1);
  return;
}



/* Entry: 10003394c; end: 100033957; -[SCMemoriesNotificationModifierProvider .cxx_destruct] */

void FUN_10003394c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100033958; end: 100033a03; -[SCMemoriesSDNTaskHandler initWithProcessingScope:] */

undefined1 * FUN_100033958(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1000d24c0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000100074120();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010006e640();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010006f440();
    *(undefined8 *)((long)puVar1 + 0x10) = uVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100033a04; end: 1000340ef; -[SCMemoriesSDNTaskHandler handleNotification:notificationType:notificationId:completion:] */

void FUN_100033a04(long param_1,undefined8 param_2,undefined *param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar7 = param_3;
  func_0x00010006f340();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar7;
  func_0x00010006f360();
  _objc_release(puVar7);
  if ((int)puVar1 == 2) {
    puVar7 = param_3;
    func_0x00010006f340(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar7;
    func_0x000100071aa0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_3;
    func_0x00010006f340();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x000100071aa0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = param_3;
      func_0x00010006f340(param_3);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x000100071aa0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010006e760();
      _objc_release(puVar5);
      _objc_release(puVar4);
    }
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
    _objc_release(puVar7);
    puVar7 = param_3;
    func_0x00010006f340();
    _objc_retainAutoreleasedReturnValue();
    puVar1 = puVar7;
    func_0x000100071aa0();
    _objc_retainAutoreleasedReturnValue();
    if (puVar1 == (undefined *)0x0) {
LAB_100033c80:
      _objc_release(puVar7);
LAB_100033c88:
      puVar7 = param_3;
      func_0x00010006f340();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar7;
      func_0x000100071aa0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 != (undefined *)0x0) {
        puVar2 = param_3;
        func_0x00010006f340();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x000100071aa0();
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010006e760();
        if ((int)puVar4 != 3) {
          _objc_release(puVar3);
          _objc_release(puVar2);
          _objc_release(puVar1);
          goto LAB_100033e28;
        }
        puVar4 = param_3;
        func_0x00010006f340();
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar4;
        func_0x000100071aa0();
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar5;
        func_0x000100072900();
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar6;
        func_0x0001000713a0();
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar1);
        _objc_release(puVar7);
        if (puVar8 == (undefined *)0x0) goto LAB_100033e30;
        puVar7 = param_3;
        func_0x00010006f340(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar7;
        func_0x000100071aa0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x000100072900();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001000713a0();
        _objc_release(puVar2);
        _objc_release(puVar1);
        _objc_release(puVar7);
        puVar7 = *(undefined **)(param_1 + 8);
        func_0x000100074180(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = param_3;
        func_0x00010006f340(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar2 = puVar1;
        func_0x000100071aa0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x000100072900();
        _objc_retainAutoreleasedReturnValue();
        func_0x000100073340(puVar7);
LAB_100033f60:
        _objc_release(puVar3);
        _objc_release(puVar2);
        goto LAB_100033f74;
      }
LAB_100033e28:
      _objc_release(puVar7);
LAB_100033e30:
      puVar7 = param_3;
      func_0x00010006f340();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar7;
      func_0x000100071aa0();
      _objc_retainAutoreleasedReturnValue();
      if (puVar1 == (undefined *)0x0) {
        _objc_release(puVar7);
LAB_100033edc:
        puVar7 = param_3;
        func_0x00010006f340(param_3);
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar7;
        func_0x000100071aa0();
        _objc_retainAutoreleasedReturnValue();
        puVar2 = param_3;
        func_0x00010006f340();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = puVar2;
        func_0x000100071aa0();
        _objc_retainAutoreleasedReturnValue();
        if (puVar3 != (undefined *)0x0) {
          puVar4 = param_3;
          func_0x00010006f340(param_3);
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar4;
          func_0x000100071aa0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010006e760();
          _objc_release(puVar5);
          _objc_release(puVar4);
        }
        goto LAB_100033f60;
      }
      puVar2 = param_3;
      func_0x00010006f340();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x000100071aa0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010006e760();
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar7);
      if ((int)puVar4 != 0) goto LAB_100033edc;
      puVar7 = *(undefined **)(param_1 + 8);
      func_0x000100074180(puVar7);
      _objc_retainAutoreleasedReturnValue();
      func_0x000100072bc0();
    }
    else {
      puVar2 = param_3;
      func_0x00010006f340();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x000100071aa0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x00010006e760();
      if ((int)puVar4 != 1) {
        _objc_release(puVar3);
        _objc_release(puVar2);
        _objc_release(puVar1);
        goto LAB_100033c80;
      }
      puVar4 = param_3;
      func_0x00010006f340();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x000100071aa0();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar5;
      func_0x000100071ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(puVar5);
      _objc_release(puVar4);
      _objc_release(puVar3);
      _objc_release(puVar2);
      _objc_release(puVar1);
      _objc_release(puVar7);
      if (puVar6 == (undefined *)0x0) goto LAB_100033c88;
      puVar7 = *(undefined **)(param_1 + 8);
      func_0x000100074180();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = puVar7;
      func_0x000100072040();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar7);
      puVar7 = PTR__OBJC_CLASS___NSArray_1000d1d38;
      _objc_opt_class(PTR__OBJC_CLASS___NSArray_1000d1d38);
      puVar2 = puVar1;
      _objc_opt_isKindOfClass(puVar1,puVar7);
      puVar7 = puVar1;
      if (((ulong)puVar2 & 1) == 0) {
        puVar7 = (undefined *)0x0;
      }
      _objc_retain(puVar7);
      _objc_release(puVar1);
      puVar2 = puVar7;
      func_0x000100071be0();
      if (puVar2 == (undefined *)0x0) {
        puVar1 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
        _objc_opt_new();
      }
      else {
        _objc_retain(puVar2);
        puVar1 = puVar2;
      }
      _objc_release(puVar2);
      puVar2 = param_3;
      func_0x00010006f340();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = puVar2;
      func_0x000100071aa0();
      _objc_retainAutoreleasedReturnValue();
      puVar4 = puVar3;
      func_0x000100071ac0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar3);
      _objc_release(puVar2);
      func_0x00010006e840(puVar7);
      func_0x0001000713a0(puVar4);
      puVar2 = puVar4;
      func_0x0001000713a0();
      if (puVar2 == (undefined *)0x0) {
        (**(code **)(param_6 + 0x10))(param_6,0);
        _objc_release(puVar4);
        _objc_release(puVar1);
        _objc_release(puVar7);
        goto LAB_100033f90;
      }
      func_0x00010006dae0(puVar1);
      puVar2 = puVar1;
      func_0x00010006e840();
      if (*(undefined **)(param_1 + 0x10) < puVar2) {
        func_0x00010006e840(puVar1);
        func_0x000100072620(puVar1);
      }
      uVar9 = *(undefined8 *)(param_1 + 8);
      func_0x000100074180(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar1;
      func_0x00010006e800(puVar1);
      func_0x000100073340(uVar9);
      _objc_release(puVar2);
      _objc_release(uVar9);
      func_0x00010006e840(puVar1);
      _objc_release(puVar4);
LAB_100033f74:
      _objc_release(puVar1);
    }
    _objc_release(puVar7);
    pcVar10 = *(code **)(param_6 + 0x10);
    uVar9 = 1;
  }
  else {
    pcVar10 = *(code **)(param_6 + 0x10);
    uVar9 = 0;
  }
  (*pcVar10)(param_6,uVar9);
LAB_100033f90:
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 1000340f0; end: 1000340fb; -[SCMemoriesSDNTaskHandler identifier] */

undefined ** FUN_1000340f0(void)

{
  return &PTR____CFConstantStringClassReference_1000a50a8;
}



/* Entry: 1000340fc; end: 100034107; -[SCMemoriesSDNTaskHandler .cxx_destruct] */

void FUN_1000340fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100034108; end: 100034187; -[SCMemoriesTaskHandler initWithProcessingScope:] */

undefined1 * FUN_100034108(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d24c8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x000100074120();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100034188; end: 10003428b; -[SCMemoriesTaskHandler didReceiveNotificationRequest:withCompletionHandler:] */

void FUN_100034188(long param_1,undefined8 param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000100072060(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  uVar1 = uVar3;
  FUN_10003308c();
  if (uVar1 < 3) {
    uVar4 = *(undefined8 *)(param_1 + 8);
    func_0x000100074180(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100072bc0();
    _objc_release(uVar4);
  }
  (**(code **)(param_4 + 0x10))(param_4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_4);
  return;
}



/* Entry: 10003428c; end: 100034297; -[SCMemoriesTaskHandler .cxx_destruct] */

void FUN_10003428c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100034298; end: 10003434b;  */

void FUN_100034298(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain();
  uVar3 = param_1;
  func_0x00010006fa20();
  if ((int)uVar3 != 0) {
    uVar3 = param_1;
    func_0x00010006e7c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010006fa00();
    _objc_release(uVar3);
    if ((int)uVar1 != 0) {
      uVar1 = param_1;
      func_0x00010006e7c0(param_1);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar1;
      func_0x00010006e7a0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar2;
      func_0x000100074320();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar2);
      _objc_release(uVar1);
      goto LAB_100034330;
    }
  }
  uVar3 = 0;
LAB_100034330:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar3);
  return;
}



/* Entry: 10003434c; end: 10003440f;  */

void FUN_10003434c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain();
  _objc_retain(param_2);
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else if (param_2 == 0) {
    lVar1 = param_1;
    func_0x00010006e720(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  else {
    lVar3 = param_2;
    FUN_100034298(param_2);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(lVar3);
  return;
}



/* Entry: 100034410; end: 100034483;  */

void FUN_100034410(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain();
  uVar2 = param_1;
  func_0x00010006fae0();
  if ((int)uVar2 == 0) {
    uVar2 = 0;
  }
  else {
    uVar1 = param_1;
    func_0x00010006f340(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    FUN_100034484();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar2);
  return;
}



/* Entry: 100034484; end: 100034757;  */

void FUN_100034484(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  _objc_retain();
  lVar3 = param_1;
  func_0x00010006f360();
  if ((int)lVar3 == 8) {
    lVar3 = param_1;
    func_0x000100073ba0();
    _objc_retainAutoreleasedReturnValue();
LAB_1000344f4:
    lVar2 = 0;
  }
  else {
    if ((int)lVar3 != 4) {
      lVar3 = 0;
      goto LAB_1000344f4;
    }
    lVar2 = param_1;
    func_0x00010006e460();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = 0;
  }
  if (lVar2 == 0 && lVar3 == 0) {
LAB_1000345a8:
    puVar7 = (undefined *)0x0;
  }
  else {
    if (lVar2 == 0) {
      if (lVar3 == 0) goto LAB_1000345a8;
      lVar6 = lVar3;
      func_0x00010006fa40();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
      if ((int)lVar6 == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        lVar6 = lVar3;
        func_0x00010006e7e0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar6;
        func_0x0001000746c0();
        func_0x000100071fe0(puVar4,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
      }
      lVar6 = lVar3;
      func_0x00010006fc00();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
      if ((int)lVar6 == 0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        lVar6 = lVar3;
        func_0x000100071ae0(lVar3);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar6;
        func_0x0001000746c0();
        func_0x000100071fe0(puVar5,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
      }
      lVar6 = lVar3;
      func_0x000100071a80();
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar3;
        func_0x000100071a60(lVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar7 = PTR_PTR_1000d1f60;
      _objc_alloc(PTR_PTR_1000d1f60);
      lVar1 = lVar3;
    }
    else {
      lVar6 = lVar2;
      func_0x00010006fa40();
      puVar4 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
      if ((int)lVar6 == 0) {
        puVar4 = (undefined *)0x0;
      }
      else {
        lVar6 = lVar2;
        func_0x00010006e7e0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar6;
        func_0x0001000746c0();
        func_0x000100071fe0(puVar4,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
      }
      lVar6 = lVar2;
      func_0x00010006fc00();
      puVar5 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
      if ((int)lVar6 == 0) {
        puVar5 = (undefined *)0x0;
      }
      else {
        lVar6 = lVar2;
        func_0x000100071ae0(lVar2);
        _objc_retainAutoreleasedReturnValue();
        lVar1 = lVar6;
        func_0x0001000746c0();
        func_0x000100071fe0(puVar5,param_2,lVar1);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar6);
      }
      lVar6 = lVar2;
      func_0x000100071a80();
      if (lVar6 == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar2;
        func_0x000100071a60(lVar2);
        _objc_retainAutoreleasedReturnValue();
      }
      puVar7 = PTR_PTR_1000d1f60;
      _objc_alloc(PTR_PTR_1000d1f60);
      lVar1 = lVar2;
    }
    func_0x000100071b20(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100070240(puVar7,param_2,puVar4,puVar5,lVar1,lVar6);
    _objc_release(lVar1);
    _objc_release(lVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
  }
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar7);
  return;
}



/* Entry: 100034758; end: 1000347cb; -[SCNotifExtMessagingContentTracker initWithArroyoAdapter:] */

undefined1 * FUN_100034758(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d24d0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000347cc; end: 10003488b; -[SCNotifExtMessagingContentTracker doesMessageExistInMainApp:] */

long FUN_1000347cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010006e720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006de80(lVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar3 == 0) {
    param_1 = 0;
  }
  else {
    lVar1 = lVar3;
    func_0x0001000729a0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar3;
    func_0x000100074700(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006eee0(param_1,param_2,lVar1,lVar2);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  _objc_release(lVar3);
  return param_1;
}



/* Entry: 10003488c; end: 100034907; -[SCNotifExtMessagingContentTracker doesMessageExistInMainApp:conversationVersion:] */

bool FUN_10003488c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *(long *)(param_1 + 8);
  _objc_retain(param_4);
  func_0x00010006f840(lVar3,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x0001000717a0(param_4);
  _objc_release(param_4);
  lVar2 = lVar3;
  func_0x0001000717a0(lVar3);
  _objc_release(lVar3);
  return lVar1 <= lVar2;
}



/* Entry: 100034908; end: 100034a13; -[SCNotifExtMessagingContentTracker isTypingForNewMessage:] */

bool FUN_100034908(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  bool bVar6;
  
  lVar4 = *(long *)(param_1 + 8);
  func_0x00010006e720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006de80(lVar4,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  if (lVar4 == 0) {
    bVar6 = true;
  }
  else {
    lVar1 = param_1;
    func_0x00010006c940(param_1,param_2,lVar4);
    lVar5 = *(long *)(param_1 + 8);
    lVar2 = lVar4;
    func_0x0001000729a0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    if ((int)lVar1 == 0) {
      func_0x00010006f700(lVar5,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      func_0x00010006f740();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar2);
    lVar1 = lVar4;
    func_0x00010006dea0(lVar4);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100071780();
    lVar3 = lVar5;
    func_0x0001000717a0(lVar5);
    bVar6 = lVar3 <= lVar2;
    _objc_release(lVar1);
    _objc_release(lVar5);
  }
  _objc_release(lVar4);
  return bVar6;
}



/* Entry: 100034a14; end: 100034b3b; -[SCNotifExtMessagingContentTracker isItANewOrUnreadMessage:] */

long FUN_100034a14(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = *(long *)(param_1 + 8);
  uVar1 = param_3;
  func_0x00010006e720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006de80(lVar6,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  if (lVar6 != 0) {
    uVar1 = param_3;
    func_0x00010006e720();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x000100072060(uVar2,param_2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000100034e40();
    _objc_release(uVar4);
    _objc_release(puVar3);
    _objc_release(uVar2);
    _objc_release(uVar1);
    if ((uVar5 & 1) == 0) {
      func_0x00010006c980(param_1,param_2,lVar6);
      goto LAB_100034b10;
    }
  }
  param_1 = 1;
LAB_100034b10:
  _objc_release(lVar6);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 100034b3c; end: 100034ca3; -[SCNotifExtMessagingContentTracker _isUnreadArroyoMessage:] */

bool FUN_100034b3c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    bVar5 = true;
  }
  else {
    lVar1 = param_3;
    func_0x000100071de0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x000100034e4c();
    _objc_release(lVar1);
    lVar1 = param_3;
    if ((int)lVar2 == 0) {
      lVar2 = param_1;
      func_0x00010006c940(param_1,param_2,param_3);
      lVar4 = *(long *)(param_1 + 8);
      lVar3 = param_3;
      func_0x0001000729a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      if ((int)lVar2 == 0) {
        func_0x00010006f700(lVar4,param_2,lVar3);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        func_0x00010006f740();
        _objc_retainAutoreleasedReturnValue();
      }
      _objc_release(lVar3);
      func_0x00010006dea0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x000100071780();
      lVar3 = lVar4;
      func_0x0001000717a0(lVar4);
    }
    else {
      lVar4 = *(long *)(param_1 + 8);
      lVar2 = param_3;
      func_0x0001000729a0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010006f720(lVar4,param_2,lVar2);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      func_0x000100072480(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x000100071780();
      lVar3 = lVar4;
      func_0x000100071780(lVar4);
    }
    bVar5 = lVar3 < lVar2;
    _objc_release(lVar1);
    _objc_release(lVar4);
  }
  _objc_release(param_3);
  return bVar5;
}



/* Entry: 100034ca4; end: 100034d3b; -[SCNotifExtMessagingContentTracker _isSnapForArroyoId:] */

ulong FUN_100034ca4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000100071de0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100071100();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_3;
    func_0x000100071de0(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x000100071100();
    _objc_release(uVar2);
  }
  else {
    uVar3 = 1;
  }
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar3;
}



/* Entry: 100034d3c; end: 100034d47; -[SCNotifExtMessagingContentTracker .cxx_destruct] */

void FUN_100034d3c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100034d48; end: 100034e27; +[SCNotifExtMessagingSenderHelpers isSenderTeamSnapchat:] */

ulong FUN_100034d48(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x000100071100();
  if ((uVar3 & 1) == 0) {
    uVar3 = param_3;
    func_0x000100074620(param_3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000100071100();
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
    uVar5 = 1;
  }
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  return uVar5;
}



/* Entry: 100034e28; end: 100034e7b;  */

void FUN_100034e28(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010006b794. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__SCNotifExtTypeContainedIn_1000a0448)
            (param_1,&PTR__OBJC_CLASS___NSConstantArray_1000abd00);
  return;
}



/* Entry: 100034e7c; end: 100034f8f; -[SCBestFriendsModifier applyBestFriendsSoundIfNecessaryWithUserId:mutableUserInfo:bestFriendsSoundEnabled:rankedBestFriendsUserIds:] */

void FUN_100034e7c(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long in_x3;
  int in_w4;
  undefined8 in_x5;
  
  _objc_retain(in_x3);
  _objc_retain(in_x5);
  lVar1 = in_x3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if ((in_w4 != 0) && (lVar1 != 0)) {
    puVar2 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    lVar1 = in_x3;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    lVar3 = lVar1;
    _SCNotifExtTypeContainedIn(lVar1,&PTR__OBJC_CLASS___NSConstantArray_1000abd90);
    if ((int)lVar3 != 0) {
      lVar3 = in_x3;
      func_0x000100072060(in_x3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = in_x5;
      func_0x00010006e6e0();
      if ((int)uVar4 != 0) {
        func_0x000100073360(in_x3);
      }
      _objc_release(lVar3);
    }
    _objc_release(lVar1);
  }
  _objc_release(in_x5);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(in_x3);
  return;
}



/* Entry: 100034f90; end: 1000350c3; -[SCBestFriendsModifier makeBestFriendNotifTimeSensitiveIfNecessaryWithUserId:mutableNotificationContent:rankedBestFriendsUserIdsInArray:] */

void FUN_100034f90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_4;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
  uVar1 = uVar3;
  _SCNotifExtTypeContainedIn(uVar3,&PTR__OBJC_CLASS___NSConstantArray_1000abda8);
  if ((int)uVar1 != 0) {
    uVar1 = param_4;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar1;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar1);
    uVar1 = param_5;
    func_0x00010006f540(param_5);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x000100071100();
    if ((int)uVar5 != 0) {
      func_0x00010006c540(param_1);
    }
    _objc_release(uVar1);
    _objc_release(uVar4);
  }
  _objc_release(uVar3);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_4);
  return;
}



/* Entry: 1000350c4; end: 1000350cf; -[SCBestFriendsModifier _enableTimeSensitive:] */

void FUN_1000350c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x000100073030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_1000a0598)(param_3,PTR_s_setInterruptionLevel__1000d1400,2);
  return;
}



/* Entry: 1000350d0; end: 1000351f3; -[SCConversationFetchTaskHandler initWithProcessingScope:messagingContentTracker:arroyoAdapter:] */

undefined8
FUN_1000350d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  puStack_70 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1000351f4;
  puStack_58 = &UNK_1000a2790;
  uStack_50 = param_3;
  uStack_48 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010006dfc0(puVar1,param_2,&puStack_70);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000100072380(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000702e0(param_1,param_2,uVar2,param_5,param_4,puVar1);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(puVar1);
  _objc_release(uStack_48);
  _objc_release(uStack_50);
  _objc_release(param_5);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1000351f4; end: 100035223;  */

void FUN_1000351f4(void)

{
  _objc_alloc(PTR_PTR_1000d1f68);
  func_0x000100070800();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 100035224; end: 10003531f; -[SCConversationFetchTaskHandler initWithEvent:arroyoAdapter:messagingContentTracker:conversationFetcher:] */

undefined1 *
FUN_100035224(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1000d24d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1000d07d0);
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
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100035320; end: 10003555b; -[SCConversationFetchTaskHandler didReceiveNotificationRequest:withCompletionHandler:] */

void FUN_100035320(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1000d1e10;
  uVar3 = param_3;
  func_0x00010006e720(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006eae0(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(uVar2);
  _objc_release(uVar3);
  lVar9 = *(long *)(param_1 + 0x10);
  uVar3 = param_3;
  func_0x00010006e720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006de80(lVar9,param_2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  if (lVar9 == 0) {
    func_0x000100072d00(*(undefined8 *)(param_1 + 8),param_2,0);
    uVar3 = *(undefined8 *)(param_1 + 8);
    ppuVar8 = &PTR____CFConstantStringClassReference_1000a51a8;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    func_0x00010006eec0(uVar3,param_2,param_3);
    if ((int)uVar3 == 0) {
      uVar3 = *(undefined8 *)(param_1 + 0x20);
      func_0x000100074180(uVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar9;
      func_0x0001000729a0(lVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar9;
      func_0x00010006dea0(lVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar6 = lVar9;
      func_0x000100074700(lVar9);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = lVar9;
      func_0x000100071de0(lVar9);
      _objc_retainAutoreleasedReturnValue();
      puStack_78 = PTR___NSConcreteStackBlock_1000a00f0;
      uStack_70 = 0xc2000000;
      pcStack_68 = FUN_10003555c;
      puStack_60 = &UNK_1000a27c0;
      _objc_retain(param_4);
      lStack_58 = param_4;
      func_0x00010006e6a0(uVar3,param_2,lVar4,lVar5,lVar6,lVar7,&puStack_78);
      _objc_release(lVar7);
      _objc_release(lVar6);
      _objc_release(lVar5);
      _objc_release(lVar4);
      _objc_release(uVar3);
      _objc_release(lStack_58);
      goto LAB_100035528;
    }
    func_0x000100072d00(*(undefined8 *)(param_1 + 8),param_2,0);
    uVar3 = *(undefined8 *)(param_1 + 8);
    ppuVar8 = &PTR____CFConstantStringClassReference_1000a51c8;
  }
  func_0x000100072d20(uVar3,param_2,ppuVar8);
  (**(code **)(param_4 + 0x10))(param_4);
LAB_100035528:
  _objc_release(lVar9);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10003555c; end: 100035567;  */

void FUN_10003555c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100035564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 100035568; end: 1000355af; -[SCConversationFetchTaskHandler .cxx_destruct] */

void FUN_100035568(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 1000355b0; end: 100035633; -[SCLoadMessageTimestampCollector initWithUserId:] */

undefined8 FUN_1000355b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___SCQueuePerformer_1000d1f70;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x000100070520();
  func_0x000100070ea0(param_1,param_2,param_3,puVar1);
  _objc_release(param_3);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 100035634; end: 1000356f3; -[SCLoadMessageTimestampCollector initWithUserId:performer:] */

undefined1 *
FUN_100035634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d24e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_3;
    _objc_release(uVar2);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000356f4; end: 100035853; -[SCLoadMessageTimestampCollector setMediaId:associatedMediaId:] */

void FUN_1000356f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar2 = PTR__OBJC_CLASS___NSString_1000d1d68;
  func_0x000100072860(PTR__OBJC_CLASS___NSString_1000d1d68,param_2,
                      &PTR____CFConstantStringClassReference_1000a5228);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCExtensionSharedDirectory_1000d1f78;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionSharedDirectory_1000d1f78);
  func_0x00010006ffe0();
  puVar4 = puVar3;
  func_0x0001000739e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_4 != 0) {
    puVar5 = PTR__OBJC_CLASS___NSString_1000d1d68;
    func_0x000100072860(PTR__OBJC_CLASS___NSString_1000d1d68,param_2,
                        &PTR____CFConstantStringClassReference_1000a5228);
    _objc_retainAutoreleasedReturnValue();
    lStack_58 = 0;
    func_0x00010006e900(puVar4,param_2,puVar5,&lStack_58);
    lVar1 = lStack_58;
    _objc_retain(lStack_58);
    if (lVar1 != 0) {
      func_0x000100071580(lVar1);
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
    }
    _objc_release(lVar1);
    _objc_release(puVar5);
  }
  func_0x0001000731e0(param_1,param_2,param_3,puVar4);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 100035854; end: 100035983; -[SCLoadMessageTimestampCollector setMediaId:sharedFile:] */

void FUN_100035854(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  puStack_68 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x10003590c;
  puStack_50 = &UNK_1000a1f88;
  lStack_48 = param_1;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x000100072180(uVar1,param_2,&puStack_68);
  _objc_release(uStack_38);
  _objc_release(uStack_40);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 100035984; end: 1000359e3; -[SCLoadMessageTimestampCollector recordStep:result:startTime:endTime:] */

void FUN_100035984(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  puStack_58 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1000359e4;
  puStack_40 = &UNK_1000a27f0;
  lStack_38 = param_3;
  uStack_30 = param_5;
  uStack_28 = param_1;
  uStack_20 = param_2;
  uStack_18 = param_6;
  func_0x000100072180(*(undefined8 *)(param_3 + 0x28),param_4,&puStack_58);
  return;
}



/* Entry: 1000359e4; end: 100035a57;  */

void FUN_1000359e4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x0001000713a0();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1000d1f80;
    _objc_alloc(PTR_PTR_1000d1f80);
    func_0x000100070560(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
    func_0x00010006dae0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000a05d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 100035a58; end: 100035ab3; -[SCLoadMessageTimestampCollector startPrefetchAtTimestamp:] */

void FUN_100035a58(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  long lStack_20;
  undefined8 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_100035ab4;
  puStack_28 = &UNK_1000a1f28;
  lStack_20 = param_2;
  uStack_18 = param_1;
  func_0x000100072180(*(undefined8 *)(param_2 + 0x28),param_3,&puStack_40);
  return;
}



/* Entry: 100035ab4; end: 100035b2f;  */

void FUN_100035ab4(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x10);
  func_0x0001000713a0();
  if (lVar1 != 0) {
    puVar2 = PTR_PTR_1000d1f80;
    _objc_alloc(PTR_PTR_1000d1f80);
    func_0x000100070560(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
    func_0x00010006dae0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_1000a05d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 100035b30; end: 100035b87; -[SCLoadMessageTimestampCollector saveToDisk] */

void FUN_100035b30(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_100035b88;
  puStack_20 = &UNK_1000a1cc8;
  lStack_18 = param_1;
  func_0x0001000721a0(*(undefined8 *)(param_1 + 0x28),param_2,&puStack_38);
  return;
}



/* Entry: 100035b88; end: 100035c67;  */

void FUN_100035b88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010006e840();
  if (lVar2 != 0) {
    lStack_28 = *(long *)(param_1 + 0x20);
    uStack_50 = 0;
    puStack_48 = PTR___NSConcreteStackBlock_1000a00f0;
    uStack_40 = 0xc2000000;
    pcStack_38 = FUN_100035c68;
    puStack_30 = &UNK_1000a1fb8;
    func_0x000100071b60(*(undefined8 *)(lStack_28 + 8),param_2,&puStack_48,&uStack_50);
    uVar1 = uStack_50;
    _objc_retain(uStack_50);
    func_0x000100071580(uVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_1000d1c48;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
    *(undefined **)(*(long *)(param_1 + 0x20) + 0x20) = puVar3;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = 0;
    _objc_release(uVar4);
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10) = 0;
    _objc_release(uVar4);
    _objc_release(uVar1);
  }
  return;
}



/* Entry: 100035c68; end: 100035dbf;  */

void FUN_100035c68(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSKeyedUnarchiver_1000d1da0;
  _objc_retain(param_2);
  _objc_alloc();
  func_0x00010006ffa0();
  _objc_release(param_2);
  func_0x000100073560(puVar1);
  puVar2 = puVar1;
  func_0x00010006eb40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1000d1d38;
  _objc_opt_class(PTR__OBJC_CLASS___NSArray_1000d1d38);
  puVar3 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar5);
  puVar5 = puVar2;
  if (((ulong)puVar3 & 1) == 0) {
    puVar5 = (undefined *)0x0;
  }
  _objc_retain(puVar5);
  _objc_release(puVar2);
  uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20);
  func_0x00010006e800(uVar4);
  puVar2 = puVar5;
  func_0x00010006ddc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  if (puVar2 == (undefined *)0x0) {
    puVar5 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x20);
    func_0x00010006e800(puVar5);
  }
  else {
    _objc_retain(puVar2);
    puVar5 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(uVar4);
  puVar2 = PTR__OBJC_CLASS___NSKeyedArchiver_1000d1db0;
  func_0x00010006dd60(PTR__OBJC_CLASS___NSKeyedArchiver_1000d1db0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 100035dc0; end: 100035e13; -[SCLoadMessageTimestampCollector .cxx_destruct] */

void FUN_100035dc0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100035e14; end: 100035f03; -[SCMessageMediaFetchTaskHandler initWithProcessingScope:arroyoAdapter:messagingContentTracker:] */

undefined8
FUN_100035e14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1000d1f88;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x0001000707c0();
  uVar2 = param_3;
  func_0x000100072380(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x00010006f900(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x000100070300(param_1,param_2,uVar2,param_4,param_5,uVar3,puVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 100035f04; end: 100036027; -[SCMessageMediaFetchTaskHandler initWithEvent:arroyoAdapter:messagingContentTracker:grapheneLogger:mediaDownloader:] */

undefined1 *
FUN_100035f04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1000d24e8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
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
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100036028; end: 10003662b; -[SCMessageMediaFetchTaskHandler didReceiveNotificationRequest:withCompletionHandler:] */

void FUN_100036028(long param_1,undefined8 param_2,undefined **param_3,long param_4)

{
  int iVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined **ppuStack_110;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010006eec0();
  if (iVar1 != 0) {
    func_0x000100073200(*(undefined8 *)(param_1 + 8));
    func_0x000100073220(*(undefined8 *)(param_1 + 8));
    (**(code **)(param_4 + 0x10))(param_4);
    goto LAB_1000365d4;
  }
  lVar14 = *(long *)(param_1 + 0x10);
  ppuVar2 = param_3;
  func_0x00010006e720(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010006de80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  if (lVar14 == 0) {
    (**(code **)(param_4 + 0x10))(param_4);
  }
  else {
    ppuVar2 = param_3;
    func_0x00010006e720();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    ppuVar2 = ppuVar3;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar2;
    func_0x0001000713a0();
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar4 = ppuVar3;
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = PTR__OBJC_CLASS___NSString_1000d1d68;
      _objc_opt_class(PTR__OBJC_CLASS___NSString_1000d1d68);
      ppuVar6 = ppuVar4;
      _objc_opt_isKindOfClass(ppuVar4,puVar5);
      if (((ulong)ppuVar6 & 1) == 0) {
        puVar5 = PTR__OBJC_CLASS___NSArray_1000d1d38;
        _objc_opt_class(PTR__OBJC_CLASS___NSArray_1000d1d38);
        ppuVar6 = ppuVar4;
        _objc_opt_isKindOfClass(ppuVar4,puVar5);
        if (((ulong)ppuVar6 & 1) != 0) {
          _objc_retain(ppuVar4);
          ppuVar6 = ppuVar4;
          goto LAB_10003623c;
        }
        if (ppuVar4 != (undefined **)0x0) {
          func_0x000100073220(*(undefined8 *)(param_1 + 8));
        }
        func_0x000100073200(*(undefined8 *)(param_1 + 8));
        (**(code **)(param_4 + 0x10))(param_4);
      }
      else {
        ppuVar7 = ppuVar4;
        func_0x00010006ea00(ppuVar4);
        _objc_retainAutoreleasedReturnValue();
        uStack_80 = 0;
        ppuVar6 = (undefined **)PTR__OBJC_CLASS___NSJSONSerialization_1000d1df8;
        func_0x00010006bec0();
        _objc_retainAutoreleasedReturnValue();
        uVar13 = uStack_80;
        _objc_retain(uStack_80);
        if (ppuVar6 == (undefined **)0x0) {
          puVar5 = PTR__OBJC_CLASS___NSString_1000d1d68;
          func_0x000100072860(PTR__OBJC_CLASS___NSString_1000d1d68);
          _objc_retainAutoreleasedReturnValue();
          func_0x000100073220(*(undefined8 *)(param_1 + 8));
          func_0x000100073200(*(undefined8 *)(param_1 + 8));
          (**(code **)(param_4 + 0x10))(param_4);
          _objc_release(puVar5);
          _objc_release(ppuVar7);
          _objc_release(uVar13);
        }
        else {
          _objc_release(ppuVar7);
          _objc_release(uVar13);
LAB_10003623c:
          ppuVar7 = ppuVar6;
          func_0x00010006e840();
          if (ppuVar7 == (undefined **)0x0) {
            func_0x000100073200(*(undefined8 *)(param_1 + 8));
            (**(code **)(param_4 + 0x10))(param_4);
            _objc_release(ppuVar6);
          }
          else {
            puStack_b8 = &uStack_b0;
            uStack_b0 = 0;
            uStack_a0 = 0x3032000000;
            pcStack_98 = FUN_10003662c;
            uStack_90 = 0x10003663c;
            uStack_88 = 0;
            puStack_d8 = PTR___NSConcreteStackBlock_1000a00f0;
            uStack_d0 = 0xc2000000;
            pcStack_c8 = FUN_100036644;
            puStack_c0 = &UNK_1000a2820;
            ppuVar7 = ppuVar6;
            puStack_a8 = puStack_b8;
            _SCMapArray(ppuVar6,&puStack_d8);
            ppuVar8 = ppuVar7;
            func_0x00010006e840();
            if (ppuVar8 == (undefined **)0x0) {
              func_0x000100073220(*(undefined8 *)(param_1 + 8));
              func_0x000100073200(*(undefined8 *)(param_1 + 8));
              (**(code **)(param_4 + 0x10))(param_4);
            }
            puVar5 = 
            PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
            ;
            func_0x0001000743a0(
                               PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                               );
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = ppuVar3;
            func_0x000100072060();
            _objc_retainAutoreleasedReturnValue();
            ppuVar8 = &PTR____CFConstantStringClassReference_1000a41c8;
            if (ppuVar9 != (undefined **)0x0) {
              ppuVar8 = ppuVar9;
            }
            _objc_retain(ppuVar8);
            _objc_release(ppuVar9);
            _objc_release(puVar5);
            func_0x000100034e34();
            ppuVar9 = ppuVar8;
            func_0x000100034e34();
            ppuVar10 = param_3;
            if ((int)ppuVar9 == 0) {
              func_0x00010006e720();
              _objc_retainAutoreleasedReturnValue();
              ppuVar9 = ppuVar10;
              func_0x000100074620();
              _objc_retainAutoreleasedReturnValue();
              ppuStack_110 = ppuVar9;
              func_0x000100072060();
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              func_0x00010006e720();
              _objc_retainAutoreleasedReturnValue();
              ppuVar9 = ppuVar10;
              func_0x000100074620();
              _objc_retainAutoreleasedReturnValue();
              ppuStack_110 = ppuVar9;
              func_0x000100072060();
              _objc_retainAutoreleasedReturnValue();
            }
            _objc_release(ppuVar9);
            _objc_release(ppuVar10);
            uVar13 = *(undefined8 *)(param_1 + 0x28);
            lVar11 = lVar14;
            func_0x0001000729a0(lVar14);
            _objc_retainAutoreleasedReturnValue();
            ppuVar9 = ppuVar3;
            func_0x000100072060(ppuVar3);
            _objc_retainAutoreleasedReturnValue();
            lVar12 = lVar14;
            func_0x00010006dea0(lVar14);
            _objc_retainAutoreleasedReturnValue();
            func_0x0001000717a0();
            _objc_retain(param_4);
            func_0x00010006f060(uVar13);
            _objc_release(lVar12);
            _objc_release(ppuVar9);
            _objc_release(lVar11);
            _objc_release(param_4);
            _objc_release(ppuStack_110);
            _objc_release(ppuVar8);
            _objc_release(ppuVar7);
            __Block_object_dispose(&uStack_b0,8);
            _objc_release(uStack_88);
            _objc_release(ppuVar6);
          }
        }
      }
      _objc_release(ppuVar4);
    }
    else {
      func_0x000100073200(*(undefined8 *)(param_1 + 8));
      func_0x000100073220(*(undefined8 *)(param_1 + 8));
      (**(code **)(param_4 + 0x10))(param_4);
    }
    _objc_release(ppuVar2);
    _objc_release(ppuVar3);
  }
  _objc_release(lVar14);
LAB_1000365d4:
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10003662c; end: 100036643;  */

void FUN_10003662c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 100036644; end: 100036783;  */

void FUN_100036644(long param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  
  _objc_retain(param_2);
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  _objc_opt_class(PTR__OBJC_CLASS___NSDictionary_1000d1d40);
  uVar5 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar6);
  uVar1 = param_2;
  if ((uVar5 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) {
    puVar6 = (undefined *)0x0;
    lVar4 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    uVar5 = *(ulong *)(lVar4 + 0x28);
    *(undefined ***)(lVar4 + 0x28) = &PTR____CFConstantStringClassReference_1000a53a8;
  }
  else {
    puVar6 = PTR_PTR_1000d1f90;
    _objc_alloc(PTR_PTR_1000d1f90);
    uVar5 = param_2;
    func_0x000100072060(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = param_2;
    func_0x000100072060(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100071000();
    uVar3 = param_2;
    func_0x000100072060(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x0001000717a0();
    func_0x0001000702c0(puVar6);
    _objc_release(uVar3);
    _objc_release(uVar2);
  }
  _objc_release(uVar5);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar6);
  return;
}



/* Entry: 100036784; end: 10003678f;  */

void FUN_100036784(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010003678c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 100036790; end: 1000367e3; -[SCMessageMediaFetchTaskHandler .cxx_destruct] */

void FUN_100036790(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 1000367e4; end: 1000368b3; -[SCMessagingAvatarAdder initWithProcessingScope:avatar:] */

undefined1 *
FUN_1000367e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1000d24f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x00010006e640();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010006e160();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1000368b4; end: 100036b43; -[SCMessagingAvatarAdder addAvatarWithMutableNotificationContent:completionHandler:] */

void FUN_1000368b4(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined **ppuVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined8 uVar10;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar2 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  func_0x0001000743a0(
                     PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                     );
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(lVar2);
  lVar2 = param_3;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar2;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  lVar2 = lVar4;
  func_0x000100034e4c();
  lVar7 = lVar5;
  if ((uint)lVar2 != 0) {
    lVar6 = param_3;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar5);
    _objc_release(lVar6);
  }
  lVar5 = lVar7;
  func_0x0001000713a0();
  if (lVar5 == 0) {
    puVar3 = PTR_PTR_1000d1f98;
    func_0x000100071200();
    if ((int)puVar3 == 0) {
      pcVar9 = *(code **)(param_4 + 0x10);
      uVar10 = 0;
    }
    else {
      uVar8 = *(undefined8 *)(param_1 + 8);
      func_0x000100074180(uVar8);
      _objc_retainAutoreleasedReturnValue();
      uVar10 = uVar8;
      func_0x00010006dac0();
      _objc_release(uVar8);
      pcVar9 = *(code **)(param_4 + 0x10);
    }
    (*pcVar9)(param_4,uVar10);
  }
  else {
    lVar5 = lVar4;
    func_0x000100034e70();
    ppuVar1 = &PTR____CFConstantStringClassReference_1000a5408;
    if (((uint)lVar5 & ((uint)lVar2 ^ 1)) == 0) {
      ppuVar1 = (undefined **)0x0;
    }
    uVar10 = *(undefined8 *)(param_1 + 8);
    _objc_retain(ppuVar1);
    func_0x000100074180(uVar10);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    func_0x00010006f000(uVar10);
    _objc_release(ppuVar1);
    _objc_release(uVar10);
    _objc_release(param_4);
  }
  _objc_release(lVar7);
  _objc_release(lVar4);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 100036b44; end: 100036b8b;  */

void FUN_100036b44(long param_1,undefined8 param_2)

{
  func_0x000100071f00(PTR__OBJC_CLASS___NSNumber_1000d1bf0,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
                    /* WARNING: Could not recover jumptable at 0x000100036b88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2);
  return;
}



/* Entry: 100036b8c; end: 100036bc7; -[SCMessagingAvatarAdder .cxx_destruct] */

void FUN_100036b8c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 100036bc8; end: 100036c67; -[SCMessagingNotificationCustomSoundModifier initWithProcessingScope:] */

undefined1 * FUN_100036bc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1000d24f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010006e640();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_3;
    func_0x00010006f900();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 100036c68; end: 100036d6f; -[SCMessagingNotificationCustomSoundModifier applyCustomSoundSoundIfNecessaryWithMutableUserInfo:] */

void FUN_100036c68(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x000100072060(param_3,param_2,&PTR____CFConstantStringClassReference_1000a39e8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    func_0x00010006ce60(param_1,param_2,param_3);
  }
  else {
    lVar1 = param_3;
    func_0x000100072060(param_3,param_2,&PTR____CFConstantStringClassReference_1000a5448);
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 == 0) {
      func_0x00010006caa0(param_1,param_2,param_3);
    }
    else {
      lVar1 = param_3;
      func_0x000100072060(param_3,param_2,&PTR____CFConstantStringClassReference_1000a5448);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar1;
      func_0x000100071040();
      _SCPushNotificationSoundIdsToSoundFileName();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar1);
      if (lVar2 == 0) {
        func_0x00010006ca80(param_1,param_2,param_3);
      }
      else {
        func_0x00010006ca60();
        func_0x000100073360(param_3,param_2,lVar2,&PTR____CFConstantStringClassReference_1000a39e8);
      }
      _objc_release(lVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(param_3);
  return;
}



/* Entry: 100036d70; end: 100036e9b; -[SCMessagingNotificationCustomSoundModifier _logSoundAlreadyRemoved:] */

void FUN_100036d70(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  
  puVar1 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  func_0x0001000743a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar7 = puVar1;
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(puVar7);
  func_0x0001000743a0();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar7;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar7;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = puVar6;
  func_0x000100071040();
  _SCPushNotificationSoundIdsToSoundFileName();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar7 = puVar1;
  func_0x00010006ff00(*(undefined8 *)(puVar3 + 0x10));
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(puVar7);
  func_0x0001000743a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar7;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar3 = puVar1;
  func_0x00010006ff00(*(undefined8 *)(puVar8 + 0x10));
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  lVar9 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(puVar3);
  func_0x0001000743a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar7 + 0x10));
  _objc_release(puVar1);
  _objc_release(puVar3);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar3 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar3 + 8,0);
  return;
}



/* Entry: 100036e9c; end: 10003705b; -[SCMessagingNotificationCustomSoundModifier _logCustomSoundApplied:] */

void FUN_100036e9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  
  puVar1 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  lVar10 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  func_0x0001000743a0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar5 = uVar4;
  func_0x000100071040();
  _SCPushNotificationSoundIdsToSoundFileName();
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar8 = puVar1;
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  lVar10 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(puVar8);
  func_0x0001000743a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar8;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar8);
  puVar8 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar7 = puVar1;
  func_0x00010006ff00(*(undefined8 *)(puVar6 + 0x10));
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  lVar10 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(puVar7);
  func_0x0001000743a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar7;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  puVar9 = puVar7;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  puVar7 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar9);
  _objc_release(puVar6);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar8 + 0x10));
  _objc_release(puVar1);
  _objc_release(puVar7);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar7 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar7 + 8,0);
  return;
}



/* Entry: 10003705c; end: 100037187; -[SCMessagingNotificationCustomSoundModifier _logCustomSoundKeyNotPresent:] */

void FUN_10003705c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar1 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  func_0x0001000743a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc();
  func_0x000100070720();
  puVar6 = puVar1;
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  puVar1 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  lVar7 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(puVar6);
  func_0x0001000743a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar6;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar6;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar6);
  puVar6 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(puVar3 + 0x10));
  _objc_release(puVar1);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar6 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar6 + 8,0);
  return;
}



/* Entry: 100037188; end: 1000372eb; -[SCMessagingNotificationCustomSoundModifier _logCustomSoundInvalid:] */

void FUN_100037188(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  
  puVar1 = 
  PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
  lVar5 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_3);
  func_0x0001000743a0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_3;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar4 = PTR__OBJC_CLASS___NSDictionary_1000d1d40;
  func_0x00010006ecc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8;
  _objc_alloc(PTR__OBJC_CLASS___SCExtensionGrapheneMetric_1000d1bf8);
  func_0x000100070720();
  func_0x00010006ff00(*(undefined8 *)(param_1 + 0x10));
  _objc_release(puVar1);
  _objc_release(puVar4);
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(puVar4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(puVar4 + 8,0);
  return;
}



/* Entry: 1000372ec; end: 10003731b; -[SCMessagingNotificationCustomSoundModifier .cxx_destruct] */

void FUN_1000372ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010006bb78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_1000a0600)(param_1 + 8,0);
  return;
}



/* Entry: 10003731c; end: 1000375bf; -[SCMessagingNotificationModifier initWithProcessingScope:messagingContentTracker:arroyoAdapter:] */

undefined8
FUN_10003731c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010006dfc0(puVar2,param_2,&PTR___NSConcreteGlobalBlock_1000a2850);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  func_0x00010006dfc0(PTR__OBJC_CLASS___SCLazy_1000d1d48,param_2,
                      &PTR___NSConcreteGlobalBlock_1000a2890);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  puVar1 = PTR___NSConcreteStackBlock_1000a00f0;
  puStack_a0 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_1000375f8;
  puStack_88 = &UNK_1000a28b0;
  _objc_retain(param_3);
  uStack_80 = param_3;
  func_0x00010006dfc0(puVar4,param_2,&puStack_a0);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  puStack_c8 = puVar1;
  uStack_c0 = 0xc2000000;
  uStack_b8 = 0x100037628;
  puStack_b0 = &UNK_1000a2528;
  _objc_retain(param_3);
  uStack_a8 = param_3;
  func_0x00010006dfc0(puVar5,param_2,&puStack_c8);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  puStack_f8 = puVar1;
  uStack_f0 = 0xc2000000;
  uStack_e8 = 0x100037658;
  puStack_e0 = &UNK_1000a28e0;
  _objc_retain(param_3);
  uStack_d8 = param_3;
  puStack_d0 = puVar5;
  func_0x00010006dfc0(puVar6,param_2,&puStack_f8);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  puStack_120 = puVar1;
  uStack_118 = 0xc2000000;
  uStack_110 = 0x100037688;
  puStack_108 = &UNK_1000a2558;
  uStack_100 = param_3;
  _objc_retain(param_3);
  func_0x00010006dfc0(puVar7,param_2,&puStack_120);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010006f900();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = param_3;
  func_0x00010006e640();
  _objc_retainAutoreleasedReturnValue();
  func_0x000100070a00(param_1,param_2,param_3,puVar2,puVar3,puVar4,puVar5,puVar6,param_4,puVar7,
                      param_5,uVar8,uVar9);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(puVar7);
  _objc_release(uStack_100);
  _objc_release(puVar6);
  _objc_release(uStack_d8);
  _objc_release(puVar5);
  _objc_release(uStack_a8);
  _objc_release(puVar4);
  _objc_release(uStack_80);
  _objc_release(param_3);
  _objc_release(puVar3);
  _objc_release(puVar2);
  return param_1;
}



/* Entry: 1000375c0; end: 1000375f7;  */

void FUN_1000375c0(void)

{
  _objc_alloc_init(PTR__OBJC_CLASS___SCMultiSenderTemplateModifier_1000d1ef0);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 1000375f8; end: 1000376b7;  */

void FUN_1000375f8(void)

{
  _objc_alloc(PTR_PTR_1000d1fc0);
  func_0x0001000707c0();
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)();
  return;
}



/* Entry: 1000376b8; end: 10003791f; -[SCMessagingNotificationModifier initWithProcessingScope:multiSenderTemplateModifierProvider:bestFriendsModifierProvider:messagingNotificationCustomSoundModifierProvider:avatarLazy:avatarAdderLazy:messagingContentTracker:intentDonatorLazy:arroyoAdapter:grapheneLogger:configs:] */

undefined8 *
FUN_1000376b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
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
  _objc_retain(param_12);
  _objc_retain(param_13);
  puStack_68 = PTR_PTR_1000d2500;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1000d07d0);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_13);
    uVar2 = puVar1[0xd];
    puVar1[0xd] = param_13;
    _objc_release(uVar2);
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
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    uVar2 = param_3;
    func_0x000100071b40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = puVar1[0xe];
    puVar1[0xe] = uVar2;
    _objc_release(uVar3);
  }
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



/* Entry: 100037920; end: 100037e23; -[SCMessagingNotificationModifier didReceiveNotificationRequest:withModifierCallback:suppressionEnabled:] */

void FUN_100037920(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [8];
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [16];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar6 = param_4;
  func_0x00010006e720();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar6;
  func_0x000100071be0();
  uVar11 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_2 + 0x58) = uVar2;
  _objc_release(uVar11);
  _objc_release(uVar6);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar2;
  func_0x000100071be0();
  uVar11 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_2 + 0x60) = uVar6;
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_initWeak(auStack_80,param_2);
  puVar3 = PTR__OBJC_CLASS___SCLazy_1000d1d48;
  puStack_b0 = PTR___NSConcreteStackBlock_1000a00f0;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_100037e24;
  puStack_98 = &UNK_1000a2910;
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(param_4);
  uStack_90 = param_4;
  func_0x00010006dfc0();
  _objc_retainAutoreleasedReturnValue();
  if (param_6 != 0) {
    puVar4 = puVar3;
    func_0x000100074180();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010006e380();
    _objc_release(puVar4);
    if ((int)puVar5 != 0) {
      func_0x0001000720c0(param_5);
      goto LAB_100037d80;
    }
  }
  uVar6 = *(undefined8 *)(param_2 + 0x10);
  func_0x000100074180();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = param_2;
  func_0x00010006d6c0();
  if ((int)lVar9 != 0) {
    _SCNotifExtModifyContentForCommNotif
              (*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x58),0);
  }
  uVar11 = *(undefined8 *)(param_2 + 8);
  func_0x00010006e640();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar11;
  func_0x00010006ff20();
  _objc_release(uVar11);
  if ((int)uVar2 != 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    ppuVar7 = &PTR____CFConstantStringClassReference_1000a5588;
    func_0x000100073e00(&PTR____CFConstantStringClassReference_1000a5588);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073360(*(undefined8 *)(param_2 + 0x60));
    _objc_release(ppuVar7);
    _objc_release(uVar2);
  }
  func_0x000100074160(uVar6);
  uVar11 = *(undefined8 *)(param_2 + 8);
  func_0x00010006f5e0(uVar11);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar11;
  func_0x000100072460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar11);
  uVar8 = *(undefined8 *)(param_2 + 8);
  func_0x000100074680(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar11 = uVar8;
  func_0x0001000745e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 0x18);
  func_0x000100074180(uVar8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100071800();
  _objc_release(uVar8);
  iVar1 = (int)*(undefined8 *)(param_2 + 0x68);
  func_0x00010006f1a0();
  if (iVar1 == 0) {
LAB_100037c10:
    uVar8 = *(undefined8 *)(param_2 + 8);
    func_0x00010006f5e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100071d20();
    _objc_release(uVar8);
    uVar10 = *(undefined8 *)(param_2 + 8);
    func_0x00010006f5e0(uVar10);
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar10;
    func_0x000100072440();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar10);
    uVar10 = *(undefined8 *)(param_2 + 0x18);
    func_0x000100074180(uVar10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006dd00();
    _objc_release(uVar10);
  }
  else {
    lVar9 = *(long *)(param_2 + 0x60);
    func_0x000100072060();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar9 == 0) goto LAB_100037c10;
    uVar8 = *(undefined8 *)(param_2 + 0x20);
    func_0x000100074180(uVar8);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010006dd20();
  }
  _objc_release(uVar8);
  uVar8 = *(undefined8 *)(param_2 + 8);
  func_0x000100071d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR__OBJC_CLASS___NSDate_1000d1bb8;
  func_0x00010006ea60(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100074240();
  _objc_release(puVar4);
  uStack_b8 = param_1;
  _objc_copyWeak(auStack_c0,auStack_80);
  _objc_retain(param_4);
  _objc_retain(uVar6);
  _objc_retain(param_5);
  func_0x00010006f6e0(uVar8);
  _objc_release(param_5);
  _objc_release(uVar6);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_c0);
  _objc_release(uVar8);
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_release(uVar6);
LAB_100037d80:
  _objc_release(puVar3);
  _objc_release(uStack_90);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 100037e24; end: 100037e87;  */

void FUN_100037e24(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  
  puVar2 = PTR__OBJC_CLASS___NSNumber_1000d1bf0;
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010006d720();
  func_0x000100071f00(puVar2,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(puVar2);
  return;
}



/* Entry: 100037e88; end: 100038373;  */

void FUN_100037e88(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  
  lVar15 = *(long *)PTR____stack_chk_guard_1000a0110;
  _objc_retain(param_2);
  puVar3 = PTR__OBJC_CLASS___NSDate_1000d1bb8;
  func_0x00010006ea60(PTR__OBJC_CLASS___NSDate_1000d1bb8);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100074240();
  _objc_release(puVar3);
  lVar4 = param_1 + 0x40;
  _objc_loadWeakRetained();
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010006e720(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar5;
  func_0x000100074620();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar13;
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar13);
  _objc_release(uVar5);
  _objc_retain(param_2);
  lVar14 = param_2;
  func_0x00010006e860();
  lVar1 = lRam0000000000000000;
  while (lVar14 != 0) {
    lVar16 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      lVar17 = *(long *)(lVar16 * 8);
      lVar7 = lVar17;
      func_0x0001000726a0();
      _objc_retainAutoreleasedReturnValue();
      lVar8 = lVar7;
      func_0x00010006e720();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar8;
      func_0x000100074620();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x000100072060();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar9);
      _objc_release(lVar8);
      _objc_release(lVar7);
      if (lVar10 == 0) {
        lVar7 = lVar17;
        func_0x0001000726a0(lVar17);
        _objc_retainAutoreleasedReturnValue();
        lVar8 = lVar7;
        func_0x00010006fda0();
        _objc_retainAutoreleasedReturnValue();
        func_0x0001000726a0(lVar17);
        _objc_retainAutoreleasedReturnValue();
        lVar9 = lVar17;
        func_0x00010006e720();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010006e340();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        _objc_release(lVar9);
        _objc_release(lVar17);
        _objc_release(lVar8);
        _objc_release(lVar7);
      }
      else {
        lVar7 = lVar10;
        func_0x000100071100();
        if ((int)lVar7 != 0) {
          func_0x00010006dd40(*(undefined8 *)(param_1 + 0x28));
        }
      }
      _objc_release(lVar10);
      lVar16 = lVar16 + 1;
    } while (lVar14 != lVar16);
    lVar14 = param_2;
    func_0x00010006e860();
  }
  _objc_release(param_2);
  iVar2 = (int)*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x68);
  func_0x000100073a20();
  if (iVar2 != 0) {
    uVar11 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010006e720(uVar11);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = uVar11;
    func_0x000100074620();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = 
    PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50;
    func_0x0001000743a0(
                       PTR__OBJC_CLASS____TtC26UnifiedNotificationDefines28NotificationServerPayloadKey_1000d1c50
                       );
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar13;
    func_0x000100072060(uVar13);
    _objc_retainAutoreleasedReturnValue();
    puVar12 = PTR_PTR_1000d1fa0;
    func_0x0001000710a0();
    _objc_release(uVar5);
    _objc_release(puVar3);
    _objc_release(uVar13);
    _objc_release(uVar11);
    if ((int)puVar12 != 0) {
      func_0x00010006c060(*(undefined8 *)(param_1 + 0x30));
    }
  }
  func_0x000100073800(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x58));
  puVar3 = PTR__OBJC_CLASS___SCNotifExtLocalizer_1000d1c20;
  uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x60);
  func_0x000100072060(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073ee0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073760(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x58));
  _objc_release(puVar3);
  _objc_release(uVar13);
  puVar3 = PTR__OBJC_CLASS___SCNotifExtLocalizer_1000d1c20;
  uVar13 = *(undefined8 *)(*(long *)(param_1 + 0x30) + 0x60);
  func_0x000100072060(uVar13);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100073ee0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x000100072ba0(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x58));
  _objc_release(puVar3);
  _objc_release(uVar13);
  lVar14 = *(long *)(*(long *)(param_1 + 0x30) + 0x60);
  func_0x000100072060();
  _objc_retainAutoreleasedReturnValue();
  if (lVar14 == 0) {
    func_0x000100073660(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x58));
  }
  else {
    puVar3 = PTR__OBJC_CLASS___UNNotificationSound_1000d1c38;
    func_0x000100073c40(PTR__OBJC_CLASS___UNNotificationSound_1000d1c38);
    _objc_retainAutoreleasedReturnValue();
    func_0x000100073660(*(undefined8 *)(*(long *)(param_1 + 0x30) + 0x58));
    _objc_release(puVar3);
  }
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar5);
  func_0x00010006c040(uVar13);
  _objc_release(uVar5);
  _objc_release(lVar14);
  _objc_release(uVar6);
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_1000a0110 == lVar15) {
    return;
  }
  ___stack_chk_fail();
  uVar13 = *(undefined8 *)(param_2 + 0x20);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  func_0x00010006c000(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000720a0(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(uVar6);
  return;
}



/* Entry: 100038374; end: 10003843b;  */

void FUN_100038374(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010006c000(uVar2,param_2,param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x0001000720a0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006bb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_1000a05d0)(uVar2);
  return;
}



/* Entry: 10003843c; end: 10003846f; -[SCMessagingNotificationModifier bestAttemptContent] */

void FUN_10003843c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000100073800(*(undefined8 *)(param_1 + 0x58),param_2,*(undefined8 *)(param_1 + 0x60));
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010006baa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_1000a0568)(uVar1);
  return;
}


