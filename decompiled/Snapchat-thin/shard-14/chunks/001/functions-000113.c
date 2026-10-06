/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afedaf4; end: 10afedafb; -[SCContextMessagingScope sessionParams] */

undefined8 FUN_10afedaf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afedafc; end: 10afedb03; -[SCContextMessagingScope logger] */

undefined8 FUN_10afedafc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afedb04; end: 10afedb0b; -[SCContextMessagingScope messaging] */

undefined8 FUN_10afedb04(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afedb0c; end: 10afedb23; -[SCContextMessagingScope parentViewController] */

void FUN_10afedb0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afedb24; end: 10afedb2b; -[SCContextMessagingScope actionMenuViewController] */

undefined8 FUN_10afedb24(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afedb2c; end: 10afedb33; -[SCContextMessagingScope animator] */

undefined8 FUN_10afedb2c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afedb34; end: 10afedb3b; -[SCContextMessagingScope options] */

undefined8 FUN_10afedb34(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afedb3c; end: 10afedb43; -[SCContextMessagingScope recipientUserId] */

undefined8 FUN_10afedb3c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10afedb44; end: 10afedb4b; -[SCContextMessagingScope contextActionParams] */

undefined8 FUN_10afedb44(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10afedb4c; end: 10afedb53; -[SCContextMessagingScope swipeDirection] */

undefined8 FUN_10afedb4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10afedb54; end: 10afedb5b; -[SCContextMessagingScope replyOptions] */

undefined8 FUN_10afedb54(long param_1)

{
  return *(undefined8 *)(param_1 + 0x60);
}



/* Entry: 10afedb5c; end: 10afedbd7; -[SCContextMessagingScope .cxx_destruct] */

void FUN_10afedb5c(long param_1)

{
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_destroyWeak(param_1 + 0x28);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10afedbd8; end: 10afedcd7; -[SCSettingsRowHandleContext initWithNavigationController:uiContainer:deckContainerFactory:userInfo:animated:] */

undefined1 *
FUN_10afedbd8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7)

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
  puStack_48 = PTR_PTR_112704080;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afedcd8; end: 10afedcef; -[SCSettingsRowHandleContext navigationController] */

void FUN_10afedcd8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afedcf0; end: 10afedcf7; -[SCSettingsRowHandleContext uiContainer] */

undefined8 FUN_10afedcf0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afedcf8; end: 10afedcff; -[SCSettingsRowHandleContext deckContainerFactory] */

undefined8 FUN_10afedcf8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afedd00; end: 10afedd07; -[SCSettingsRowHandleContext userInfo] */

undefined8 FUN_10afedd00(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afedd08; end: 10afedd0f; -[SCSettingsRowHandleContext animated] */

undefined1 FUN_10afedd08(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afedd10; end: 10afedd53; -[SCSettingsRowHandleContext .cxx_destruct] */

void FUN_10afedd10(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 0x10);
  return;
}



/* Entry: 10afedd54; end: 10afeddc7; -[SCSettingsRowProviderScope initWithPlugInRegistry:] */

undefined1 * FUN_10afedd54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112704088;
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



/* Entry: 10afeddc8; end: 10afeddcf; -[SCSettingsRowProviderScope plugInRegistry] */

undefined8 FUN_10afeddc8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afeddd0; end: 10afedddb; -[SCSettingsRowProviderScope .cxx_destruct] */

void FUN_10afeddd0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afedddc; end: 10afeddeb; -[SCSettingsRowViewModel initWithTitleText:detailText:] */

void FUN_10afedddc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
                    /* WARNING: Could not recover jumptable at 0x00010c053b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_initWithTitleText_detailText_acc_1125f28f0,param_3,param_4,0,0,1);
  return;
}



/* Entry: 10afeddec; end: 10afede0f; -[SCSettingsRowViewModel initWithTitleText:detailText:accessoryImage:cellState:showDisclosureIndicator:] */

void FUN_10afeddec(void)

{
  func_0x00010c053bc0();
  return;
}



/* Entry: 10afede10; end: 10afede33; -[SCSettingsRowViewModel initWithTitleText:detailText:accessoryImage:cellState:showDisclosureIndicator:accessibilityIdentifier:accessibilityLabel:] */

void FUN_10afede10(void)

{
  func_0x00010c053bc0();
  return;
}



/* Entry: 10afede34; end: 10afede5b; -[SCSettingsRowViewModel initWithTitleText:detailText:accessoryImage:cellState:showDisclosureIndicator:accessibilityIdentifier:accessibilityLabel:badgeText:] */

void FUN_10afede34(void)

{
  func_0x00010c053be0();
  return;
}



/* Entry: 10afede5c; end: 10afedfdf; -[SCSettingsRowViewModel initWithTitleText:detailText:accessoryImage:cellState:showDisclosureIndicator:accessibilityIdentifier:accessibilityLabel:badgeText:badgeStyle:] */

undefined1 *
FUN_10afede5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_112704090;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_5;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x30) = param_6;
    *(undefined1 *)((long)puVar1 + 8) = param_7;
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x28) = param_11;
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afedfe0; end: 10afedfe7; -[SCSettingsRowViewModel titleText] */

undefined8 FUN_10afedfe0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afedfe8; end: 10afedfef; -[SCSettingsRowViewModel detailText] */

undefined8 FUN_10afedfe8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afedff0; end: 10afedff7; -[SCSettingsRowViewModel badgeText] */

undefined8 FUN_10afedff0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afedff8; end: 10afedfff; -[SCSettingsRowViewModel badgeStyle] */

undefined8 FUN_10afedff8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afee000; end: 10afee007; -[SCSettingsRowViewModel cellState] */

undefined8 FUN_10afee000(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afee008; end: 10afee00f; -[SCSettingsRowViewModel accessoryImage] */

undefined8 FUN_10afee008(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afee010; end: 10afee017; -[SCSettingsRowViewModel showDisclosureIndicator] */

undefined1 FUN_10afee010(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afee018; end: 10afee01f; -[SCSettingsRowViewModel accessibilityIdentifier] */

undefined8 FUN_10afee018(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afee020; end: 10afee027; -[SCSettingsRowViewModel accessibilityLabel] */

undefined8 FUN_10afee020(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10afee028; end: 10afee087; -[SCSettingsRowViewModel .cxx_destruct] */

void FUN_10afee028(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afee088; end: 10afee0f3; +[SCSettingsInitialAction focusWithRow:animated:] */

void FUN_10afee088(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3e80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
  puVar2[0x18] = param_4;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afee0f4; end: 10afee19b; +[SCSettingsInitialAction triggerWithRow:animated:userInfo:] */

void FUN_10afee0f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b3e80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  puVar2[0x28] = param_4;
  uVar3 = *(undefined8 *)(puVar2 + 0x30);
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afee19c; end: 10afee1bf; -[SCSettingsInitialAction copyWithZone:] */

undefined8 FUN_10afee19c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afee1c0; end: 10afee24b; -[SCSettingsInitialAction hash] */

void FUN_10afee1c0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  undefined8 uStack_40;
  ulong uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_58 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_48 = (ulong)*(byte *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_58;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_88 = PTR_PTR_112704098;
  puStack_90 = puVar3;
  _objc_msgSendSuper2(&puStack_90,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afee24c; end: 10afee28f; -[SCSettingsInitialAction internalInit] */

void FUN_10afee24c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112704098;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afee290; end: 10afee37f; -[SCSettingsInitialAction isEqual:] */

long FUN_10afee290(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afee358:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afee364;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))) &&
        (*(char *)(param_1 + 0x28) == *(char *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x30);
          if (lVar3 != *(long *)(param_3 + 0x30)) {
            func_0x00010c071ae0();
            goto LAB_10afee364;
          }
          goto LAB_10afee358;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afee364:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afee380; end: 10afee413; -[SCSettingsInitialAction matchFocus:trigger:] */

void FUN_10afee380(long param_1,undefined8 param_2,long param_3,long param_4)

{
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 8) == 1) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))
                (param_4,*(undefined8 *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28),
                 *(undefined8 *)(param_1 + 0x30));
    }
  }
  else if (*(long *)(param_1 + 8) == 0 && param_3 != 0) {
    (**(code **)(param_3 + 0x10))
              (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x18));
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afee414; end: 10afee44f; -[SCSettingsInitialAction .cxx_destruct] */

void FUN_10afee414(long param_1)

{
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afee450; end: 10afee4a3; +[SCSettingsSectionRow accountWithRow:] */

void FUN_10afee450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aeae0;
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



/* Entry: 10afee4a4; end: 10afee4ff; +[SCSettingsSectionRow actionsWithRow:] */

void FUN_10afee4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aeae0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 8;
  *(undefined8 *)(puVar2 + 0x50) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afee500; end: 10afee55b; +[SCSettingsSectionRow businessWithRow:] */

void FUN_10afee500(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aeae0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afee55c; end: 10afee5b7; +[SCSettingsSectionRow feedbackWithRow:] */

void FUN_10afee55c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aeae0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  *(undefined8 *)(puVar2 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afee5b8; end: 10afee613; +[SCSettingsSectionRow informationWithRow:] */

void FUN_10afee5b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aeae0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 7;
  *(undefined8 *)(puVar2 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afee614; end: 10afee66f; +[SCSettingsSectionRow servicesWithRow:] */

void FUN_10afee614(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aeae0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afee670; end: 10afee6cb; +[SCSettingsSectionRow supportAndFeedbackWithRow:] */

void FUN_10afee670(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aeae0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 6;
  *(undefined8 *)(puVar2 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afee6cc; end: 10afee727; +[SCSettingsSectionRow supportWithRow:] */

void FUN_10afee6cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aeae0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  *(undefined8 *)(puVar2 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afee728; end: 10afee783; +[SCSettingsSectionRow whoCanWithRow:] */

void FUN_10afee728(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126aeae0;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afee784; end: 10afee7a7; -[SCSettingsSectionRow copyWithZone:] */

undefined8 FUN_10afee784(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afee7a8; end: 10afee817; -[SCSettingsSectionRow hash] */

void FUN_10afee7a8(long param_1)

{
  undefined8 *puVar1;
  undefined1 *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  long lStack_18;
  
  puVar1 = &uStack_70;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = *(undefined8 *)(param_1 + 0x10);
  uStack_70 = *(undefined8 *)(param_1 + 8);
  uStack_58 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = *(undefined8 *)(param_1 + 0x18);
  uStack_48 = *(undefined8 *)(param_1 + 0x30);
  uStack_50 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = *(undefined8 *)(param_1 + 0x40);
  uStack_40 = *(undefined8 *)(param_1 + 0x38);
  uStack_28 = *(undefined8 *)(param_1 + 0x50);
  uStack_30 = *(undefined8 *)(param_1 + 0x48);
  func_0x000107c3191c(&uStack_70,10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_98 = PTR_PTR_1127040a0;
  puStack_a0 = (undefined1 *)puVar1;
  _objc_msgSendSuper2(&puStack_a0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afee818; end: 10afee85b; -[SCSettingsSectionRow internalInit] */

void FUN_10afee818(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127040a0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afee85c; end: 10afee973; -[SCSettingsSectionRow isEqual:] */

bool FUN_10afee85c(ulong param_1,undefined8 param_2,ulong param_3)

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
      if ((((uVar3 & 1) == 0) ||
          ((((*(long *)(param_1 + 8) != *(long *)(param_3 + 8) ||
             (*(long *)(param_1 + 0x10) != *(long *)(param_3 + 0x10))) ||
            (*(long *)(param_1 + 0x18) != *(long *)(param_3 + 0x18))) ||
           ((*(long *)(param_1 + 0x20) != *(long *)(param_3 + 0x20) ||
            (*(long *)(param_1 + 0x28) != *(long *)(param_3 + 0x28))))))) ||
         ((*(long *)(param_1 + 0x30) != *(long *)(param_3 + 0x30) ||
          (((*(long *)(param_1 + 0x38) != *(long *)(param_3 + 0x38) ||
            (*(long *)(param_1 + 0x40) != *(long *)(param_3 + 0x40))) ||
           (*(long *)(param_1 + 0x48) != *(long *)(param_3 + 0x48))))))) {
        bVar1 = false;
      }
      else {
        bVar1 = *(long *)(param_1 + 0x50) == *(long *)(param_3 + 0x50);
      }
    }
  }
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 10afee974; end: 10afeeb53; -[SCSettingsSectionRow matchAccount:business:services:whoCan:support:feedback:supportAndFeedback:information:actions:] */

void FUN_10afee974(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8,long param_9,long param_10,long param_11)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 4) {
    if (lVar1 < 2) {
      if (lVar1 == 0) {
        if (param_3 == 0) goto LAB_10afeeaf4;
        lVar2 = 0x10;
        lVar1 = param_3;
      }
      else {
        if ((lVar1 != 1) || (param_4 == 0)) goto LAB_10afeeaf4;
        lVar2 = 0x18;
        lVar1 = param_4;
      }
    }
    else if (lVar1 == 2) {
      if (param_5 == 0) goto LAB_10afeeaf4;
      lVar2 = 0x20;
      lVar1 = param_5;
    }
    else {
      if ((lVar1 != 3) || (param_6 == 0)) goto LAB_10afeeaf4;
      lVar2 = 0x28;
      lVar1 = param_6;
    }
  }
  else if (lVar1 < 6) {
    if (lVar1 == 4) {
      if (param_7 == 0) goto LAB_10afeeaf4;
      lVar2 = 0x30;
      lVar1 = param_7;
    }
    else {
      if ((lVar1 != 5) || (param_8 == 0)) goto LAB_10afeeaf4;
      lVar2 = 0x38;
      lVar1 = param_8;
    }
  }
  else if (lVar1 == 6) {
    if (param_9 == 0) goto LAB_10afeeaf4;
    lVar2 = 0x40;
    lVar1 = param_9;
  }
  else if (lVar1 == 7) {
    if (param_10 == 0) goto LAB_10afeeaf4;
    lVar2 = 0x48;
    lVar1 = param_10;
  }
  else {
    if ((lVar1 != 8) || (param_11 == 0)) goto LAB_10afeeaf4;
    lVar2 = 0x50;
    lVar1 = param_11;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_10afeeaf4:
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afeeb54; end: 10afeebfb; +[SCUberAvatarConfiguration bitmojiAvatarWithConfiguration:showViewedStoryRing:viewedStoryRingPlaybackApplicable:iconImage:] */

void FUN_10afeeb54(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c56e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  puVar2[0x18] = param_4;
  puVar2[0x19] = param_5;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afeebfc; end: 10afeec93; +[SCUberAvatarConfiguration customImageWithImageUrl:borderColor:] */

void FUN_10afeebfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c56e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 5;
  uVar3 = *(undefined8 *)(puVar2 + 0x78);
  *(undefined8 *)(puVar2 + 0x78) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x80);
  *(undefined8 *)(puVar2 + 0x80) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afeec94; end: 10afeed2b; +[SCUberAvatarConfiguration dfUserStoryWithThumbnailMetadata:borderColor:] */

void FUN_10afeec94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c56e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 4;
  uVar3 = *(undefined8 *)(puVar2 + 0x68);
  *(undefined8 *)(puVar2 + 0x68) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x70);
  *(undefined8 *)(puVar2 + 0x70) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afeed2c; end: 10afeedaf; +[SCUberAvatarConfiguration groupAvatarWithConfiguration:showViewedStoryRing:viewedStoryRingPlaybackApplicable:] */

void FUN_10afeed2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined1 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c56e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
  puVar2[0x30] = param_4;
  puVar2[0x31] = param_5;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afeedb0; end: 10afeee47; +[SCUberAvatarConfiguration publisherProfileWithPublisher:borderColor:] */

void FUN_10afeedb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c56e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x60);
  *(undefined8 *)(puVar2 + 0x60) = param_4;
  _objc_release(uVar3);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afeee48; end: 10afeef2b; +[SCUberAvatarConfiguration storyWithStoryThumbnailMedia:borderColor:isStoryMuted:shouldShowReplayIcon:iconImage:] */

void FUN_10afeee48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined1 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_7);
  puVar1 = PTR_PTR_1126c56e8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x38);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x40);
  *(undefined8 *)(puVar2 + 0x40) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  puVar2[0x48] = param_5;
  puVar2[0x49] = param_6;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_7;
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afeef2c; end: 10afeef4f; -[SCUberAvatarConfiguration copyWithZone:] */

undefined8 FUN_10afeef2c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afeef50; end: 10afef063; -[SCUberAvatarConfiguration hash] */

void FUN_10afeef50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_c0;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_c0 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_b0 = (ulong)*(byte *)(param_1 + 0x18);
  uStack_a8 = (ulong)*(byte *)(param_1 + 0x19);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_b8 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_a0 = uVar1;
  func_0x00010bfde980();
  uStack_90 = (ulong)*(byte *)(param_1 + 0x30);
  uStack_88 = (ulong)*(byte *)(param_1 + 0x31);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_98 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_80 = uVar1;
  func_0x00010bfde980();
  uStack_70 = (ulong)*(byte *)(param_1 + 0x48);
  uStack_68 = (ulong)*(byte *)(param_1 + 0x49);
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_78 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x68);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x80);
  uStack_38 = uVar2;
  func_0x00010bfde980();
  uStack_30 = uVar1;
  func_0x000107c3191c(&uStack_c0,0x13);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_e8 = PTR_PTR_1127040a8;
  puStack_f0 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_f0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afef064; end: 10afef0a7; -[SCUberAvatarConfiguration internalInit] */

void FUN_10afef064(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1127040a8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afef0a8; end: 10afef2af; -[SCUberAvatarConfiguration isEqual:] */

long FUN_10afef0a8(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afef288:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afef294;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((((uVar2 & 1) != 0) &&
         ((((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
            (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))) &&
           (*(char *)(param_1 + 0x19) == *(char *)(param_3 + 0x19))) &&
          ((*(char *)(param_1 + 0x30) == *(char *)(param_3 + 0x30) &&
           (*(char *)(param_1 + 0x31) == *(char *)(param_3 + 0x31))))))) &&
        (*(char *)(param_1 + 0x48) == *(char *)(param_3 + 0x48))) &&
       (*(char *)(param_1 + 0x49) == *(char *)(param_3 + 0x49))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x38);
            if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x40);
              if ((lVar3 == *(long *)(param_3 + 0x40)) || (func_0x00010c071c60(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x50);
                if ((lVar3 == *(long *)(param_3 + 0x50)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x58);
                  if ((lVar3 == *(long *)(param_3 + 0x58)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x60);
                    if ((lVar3 == *(long *)(param_3 + 0x60)) ||
                       (func_0x00010c071c60(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x68);
                      if ((lVar3 == *(long *)(param_3 + 0x68)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x70);
                        if ((lVar3 == *(long *)(param_3 + 0x70)) ||
                           (func_0x00010c071c60(), (int)lVar3 != 0)) {
                          lVar3 = *(long *)(param_1 + 0x78);
                          if ((lVar3 == *(long *)(param_3 + 0x78)) ||
                             (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                            lVar3 = *(long *)(param_1 + 0x80);
                            if (lVar3 != *(long *)(param_3 + 0x80)) {
                              func_0x00010c071c60();
                              goto LAB_10afef294;
                            }
                            goto LAB_10afef288;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afef294:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afef2b0; end: 10afef433; -[SCUberAvatarConfiguration matchBitmojiAvatar:groupAvatar:story:publisherProfile:dfUserStory:customImage:] */

void FUN_10afef2b0(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,long param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar3 = *(long *)(param_1 + 8);
  if (lVar3 < 3) {
    if (lVar3 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x18),
                   *(undefined1 *)(param_1 + 0x19),*(undefined8 *)(param_1 + 0x20));
      }
    }
    else if (lVar3 == 1) {
      if (param_4 != 0) {
        (**(code **)(param_4 + 0x10))
                  (param_4,*(undefined8 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x30),
                   *(undefined1 *)(param_1 + 0x31));
      }
    }
    else if ((lVar3 == 2) && (param_5 != 0)) {
      (**(code **)(param_5 + 0x10))
                (param_5,*(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                 *(undefined1 *)(param_1 + 0x48),*(undefined1 *)(param_1 + 0x49),
                 *(undefined8 *)(param_1 + 0x50));
    }
  }
  else {
    if (lVar3 == 3) {
      if (param_6 == 0) goto LAB_10afef3f0;
      uVar1 = *(undefined8 *)(param_1 + 0x58);
      uVar2 = *(undefined8 *)(param_1 + 0x60);
      pcVar4 = *(code **)(param_6 + 0x10);
      lVar3 = param_6;
    }
    else if (lVar3 == 4) {
      if (param_7 == 0) goto LAB_10afef3f0;
      uVar1 = *(undefined8 *)(param_1 + 0x68);
      uVar2 = *(undefined8 *)(param_1 + 0x70);
      pcVar4 = *(code **)(param_7 + 0x10);
      lVar3 = param_7;
    }
    else {
      if ((lVar3 != 5) || (param_8 == 0)) goto LAB_10afef3f0;
      uVar1 = *(undefined8 *)(param_1 + 0x78);
      uVar2 = *(undefined8 *)(param_1 + 0x80);
      pcVar4 = *(code **)(param_8 + 0x10);
      lVar3 = param_8;
    }
    (*pcVar4)(lVar3,uVar1,uVar2);
  }
LAB_10afef3f0:
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afef434; end: 10afef4db; -[SCUberAvatarConfiguration .cxx_destruct] */

void FUN_10afef434(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afef4dc; end: 10afef5cb;  */

void FUN_10afef4dc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10afef5cc;
  uStack_30 = 0x10afef5dc;
  uStack_28 = 0;
  func_0x00010c0bf680(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10afef5cc; end: 10afef5e3;  */

void FUN_10afef5cc(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 10afef5e4; end: 10afef61b;  */

void FUN_10afef5e4(long param_1,undefined8 param_2)

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



/* Entry: 10afef61c; end: 10afef70b;  */

void FUN_10afef61c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10afef5cc;
  uStack_30 = 0x10afef5dc;
  uStack_28 = 0;
  func_0x00010c0bf680(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10afef70c; end: 10afef743;  */

void FUN_10afef70c(long param_1,undefined8 param_2)

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



/* Entry: 10afef744; end: 10afef833;  */

void FUN_10afef744(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10afef5cc;
  uStack_30 = 0x10afef5dc;
  uStack_28 = 0;
  func_0x00010c0bf680(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10afef834; end: 10afef86b;  */

void FUN_10afef834(long param_1,undefined8 param_2)

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



/* Entry: 10afef86c; end: 10afef95b;  */

void FUN_10afef86c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10afef5cc;
  uStack_30 = 0x10afef5dc;
  uStack_28 = 0;
  func_0x00010c0bf680(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10afef95c; end: 10afef993;  */

void FUN_10afef95c(long param_1,undefined8 param_2)

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



/* Entry: 10afef994; end: 10afefa87;  */

void FUN_10afef994(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10afef5cc;
  uStack_30 = 0x10afef5dc;
  uStack_28 = 0;
  func_0x00010c0bf680(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10afefa88; end: 10afefabf;  */

void FUN_10afefa88(long param_1,undefined8 param_2)

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



/* Entry: 10afefac0; end: 10afefbaf;  */

void FUN_10afefac0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10afef5cc;
  uStack_30 = 0x10afef5dc;
  uStack_28 = 0;
  func_0x00010c0bf680(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10afefbb0; end: 10afefbe7;  */

void FUN_10afefbb0(long param_1,undefined8 param_2)

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



/* Entry: 10afefbe8; end: 10afefcd7;  */

void FUN_10afefbe8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10afef5cc;
  uStack_30 = 0x10afef5dc;
  uStack_28 = 0;
  func_0x00010c0bf680(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10afefcd8; end: 10afefd0f;  */

void FUN_10afefcd8(long param_1,undefined8 param_2)

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



/* Entry: 10afefd10; end: 10afefe03;  */

void FUN_10afefd10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10afef5cc;
  uStack_30 = 0x10afef5dc;
  uStack_28 = 0;
  func_0x00010c0bf680(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10afefe04; end: 10afefe3b;  */

void FUN_10afefe04(long param_1,undefined8 param_2)

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



/* Entry: 10afefe3c; end: 10afeff2f;  */

void FUN_10afefe3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_10afef5cc;
  uStack_30 = 0x10afef5dc;
  uStack_28 = 0;
  func_0x00010c0bf680(param_1);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10afeff30; end: 10afeff67;  */

void FUN_10afeff30(long param_1,undefined8 param_2)

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



/* Entry: 10afeff68; end: 10aff0173;  */

void FUN_10afeff68(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x3032000000;
  pcStack_68 = FUN_10afef5cc;
  uStack_60 = 0x10afef5dc;
  uStack_58 = 0;
  uVar1 = param_1;
  func_0x00010c259560(param_1);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_1);
  _objc_retain(param_1);
  func_0x00010c0bf680(uVar1);
  _objc_release(uVar1);
  uVar1 = puStack_78[5];
  _objc_retain(uVar1);
  _objc_release(param_1);
  _objc_release(param_1);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uStack_58);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10aff0174; end: 10aff01f3;  */

void FUN_10aff0174(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aff01f4; end: 10aff032b;  */

void FUN_10aff01f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_retain(param_2);
  func_0x00010c259740();
  func_0x00010bf8c980();
  _objc_release(param_2);
  func_0x00010c14de00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined **)(lVar3 + 0x28) = puVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10aff032c; end: 10aff03eb;  */

void FUN_10aff032c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bf454e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10aff03ec; end: 10aff03f3; -[SCDiscoverFeedDataServices lazyDiscoverFeedDataLoader] */

undefined8 FUN_10aff03ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10aff03f4; end: 10aff042f; -[SCDiscoverFeedDataServices .cxx_destruct] */

void FUN_10aff03f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10aff0430; end: 10aff04df; -[SCDiscoverFeedClientDisplayInfo initWithCoder:] */

undefined1 * FUN_10aff0430(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1127040b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 8) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 9) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 10) = (char)uVar2;
    uVar2 = param_3;
    func_0x00010bf66ce0();
    *(char *)((long)puVar1 + 0xb) = (char)uVar2;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10aff04e0; end: 10aff0547; -[SCDiscoverFeedClientDisplayInfo initWithHideTimestamp:showCompleted:shouldMarkStoryUnviewed:t3PartiallyViewed:] */

void FUN_10aff04e0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
                  undefined1 param_5,undefined1 param_6)

{
  undefined8 *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1127040b8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    *(undefined1 *)((long)puVar1 + 10) = param_5;
    *(undefined1 *)((long)puVar1 + 0xb) = param_6;
  }
  return;
}



/* Entry: 10aff0548; end: 10aff056b; -[SCDiscoverFeedClientDisplayInfo copyWithZone:] */

undefined8 FUN_10aff0548(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10aff056c; end: 10aff05f3; -[SCDiscoverFeedClientDisplayInfo encodeWithCoder:] */

void FUN_10aff056c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010bf92da0(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_110ed35d8);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 9),
                      &PTR____CFConstantStringClassReference_110f48d58);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 10),
                      &PTR____CFConstantStringClassReference_110f48d78);
  func_0x00010bf92da0(param_3,param_2,*(undefined1 *)(param_1 + 0xb),
                      &PTR____CFConstantStringClassReference_110f48d98);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}


