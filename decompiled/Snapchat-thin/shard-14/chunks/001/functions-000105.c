/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10afddfd4; end: 10afddfeb; -[SCLensExplorerLensItemImpressionIdentifier encodeWithCoder:] */

void FUN_10afddfd4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010c14cb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_3,PTR_s_sc_encodeObject_forKey__112630ce0,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_110f486b8);
  return;
}



/* Entry: 10afddfec; end: 10afddff3; -[SCLensExplorerLensItemImpressionIdentifier hash] */

void FUN_10afddfec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 10afddff4; end: 10afde083; -[SCLensExplorerLensItemImpressionIdentifier isEqual:] */

long FUN_10afddff4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afde068;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_10afde068;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_10afde068;
    }
  }
  lVar3 = 1;
LAB_10afde068:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afde084; end: 10afde08b; -[SCLensExplorerLensItemImpressionIdentifier unlockableId] */

undefined8 FUN_10afde084(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afde08c; end: 10afde097; -[SCLensExplorerLensItemImpressionIdentifier .cxx_destruct] */

void FUN_10afde08c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afde098; end: 10afde1e7; -[SCLensExplorerLoggingData initWithItemIndex:identifier:rankingRequestId:rankingRequestInfo:lensId:itemType:containerId:] */

undefined1 *
FUN_10afde098(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  puStack_58 = PTR_PTR_112703d10;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
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
    *(undefined8 *)((long)puVar1 + 0x30) = param_8;
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 10afde1e8; end: 10afde20b; -[SCLensExplorerLoggingData copyWithZone:] */

undefined8 FUN_10afde1e8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afde20c; end: 10afde2ab; -[SCLensExplorerLoggingData hash] */

undefined8 * FUN_10afde20c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_60;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_60 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_58 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uStack_38 = *(undefined8 *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_60,7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10afde394:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afde3a0;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)((long)puVar3 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = *(long *)((long)puVar3 + 0x28);
            if ((lVar5 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              puVar6 = *(undefined1 **)((long)puVar3 + 0x38);
              if (puVar6 != *(undefined1 **)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_10afde3a0;
              }
              goto LAB_10afde394;
            }
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afde3a0:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afde2ac; end: 10afde3bb; -[SCLensExplorerLoggingData isEqual:] */

long FUN_10afde2ac(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afde394:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afde3a0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x30) == *(long *)(param_3 + 0x30))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if (lVar3 != *(long *)(param_3 + 0x38)) {
                func_0x00010c071ae0();
                goto LAB_10afde3a0;
              }
              goto LAB_10afde394;
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afde3a0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afde3bc; end: 10afde3c3; -[SCLensExplorerLoggingData itemIndex] */

undefined8 FUN_10afde3bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afde3c4; end: 10afde3cb; -[SCLensExplorerLoggingData identifier] */

undefined8 FUN_10afde3c4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afde3cc; end: 10afde3d3; -[SCLensExplorerLoggingData rankingRequestId] */

undefined8 FUN_10afde3cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afde3d4; end: 10afde3db; -[SCLensExplorerLoggingData rankingRequestInfo] */

undefined8 FUN_10afde3d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afde3dc; end: 10afde3e3; -[SCLensExplorerLoggingData lensId] */

undefined8 FUN_10afde3dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afde3e4; end: 10afde3eb; -[SCLensExplorerLoggingData itemType] */

undefined8 FUN_10afde3e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afde3ec; end: 10afde3f3; -[SCLensExplorerLoggingData containerId] */

undefined8 FUN_10afde3ec(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afde3f4; end: 10afde447; -[SCLensExplorerLoggingData .cxx_destruct] */

void FUN_10afde3f4(long param_1)

{
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afde448; end: 10afde4fb; -[SCLensExplorerCommonLoggingParameters initWithSectionName:pageName:lensExplorerPageType:] */

undefined1 *
FUN_10afde448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_112703d18;
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



/* Entry: 10afde4fc; end: 10afde51f; -[SCLensExplorerCommonLoggingParameters copyWithZone:] */

undefined8 FUN_10afde4fc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afde520; end: 10afde597; -[SCLensExplorerCommonLoggingParameters hash] */

undefined8 * FUN_10afde520(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000107c3191c(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10afde628:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afde634;
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
          goto LAB_10afde634;
        }
        goto LAB_10afde628;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afde634:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afde598; end: 10afde64f; -[SCLensExplorerCommonLoggingParameters isEqual:] */

long FUN_10afde598(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afde628:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afde634;
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
          goto LAB_10afde634;
        }
        goto LAB_10afde628;
      }
    }
    lVar3 = 0;
  }
LAB_10afde634:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afde650; end: 10afde657; -[SCLensExplorerCommonLoggingParameters sectionName] */

undefined8 FUN_10afde650(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afde658; end: 10afde65f; -[SCLensExplorerCommonLoggingParameters pageName] */

undefined8 FUN_10afde658(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afde660; end: 10afde667; -[SCLensExplorerCommonLoggingParameters lensExplorerPageType] */

undefined8 FUN_10afde660(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afde668; end: 10afde697; -[SCLensExplorerCommonLoggingParameters .cxx_destruct] */

void FUN_10afde668(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afde698; end: 10afde6ab; +[SCLensExplorerPresentationType defaultType] */

void FUN_10afde698(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf33390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b1b50,PTR_s_categoryFeedWithFeedId_isStandal_1125aa688,0,0);
  return;
}



/* Entry: 10afde6ac; end: 10afde71f; -[SCLensExplorerDeeplinkPresentationServices initWithDeeplinkPresentationHandler:] */

undefined1 * FUN_10afde6ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703d20;
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



/* Entry: 10afde720; end: 10afde727; -[SCLensExplorerDeeplinkPresentationServices deeplinkPresentationHandler] */

undefined8 FUN_10afde720(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afde728; end: 10afde733; -[SCLensExplorerDeeplinkPresentationServices .cxx_destruct] */

void FUN_10afde728(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afde734; end: 10afde7f7; -[SCLensExplorerPresentationConfiguration initWithSource:cameraSource:presentationType:interactiveTransition:mode:] */

undefined1 *
FUN_10afde734(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_112703d28;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10afde7f8; end: 10afde81b; -[SCLensExplorerPresentationConfiguration copyWithZone:] */

undefined8 FUN_10afde7f8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afde81c; end: 10afde8a3; -[SCLensExplorerPresentationConfiguration hash] */

undefined8 * FUN_10afde81c(long param_1,undefined8 param_2,undefined1 *param_3)

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
  long lStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar1;
  func_0x00010bfde980();
  lVar5 = *(long *)(param_1 + 0x28);
  lStack_30 = -lVar5;
  if (-1 < lVar5) {
    lStack_30 = lVar5;
  }
  uStack_38 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10afde954:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_10afde960;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       (((*(long *)((long)puVar3 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10))) &&
        (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar5 = *(long *)((long)puVar3 + 0x18);
      if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
        if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10afde960;
        }
        goto LAB_10afde954;
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_10afde960:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 10afde8a4; end: 10afde97b; -[SCLensExplorerPresentationConfiguration isEqual:] */

long FUN_10afde8a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afde954:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afde960;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) &&
        (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))))) {
      lVar3 = *(long *)(param_1 + 0x18);
      if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if (lVar3 != *(long *)(param_3 + 0x20)) {
          func_0x00010c071ae0();
          goto LAB_10afde960;
        }
        goto LAB_10afde954;
      }
    }
    lVar3 = 0;
  }
LAB_10afde960:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afde97c; end: 10afde983; -[SCLensExplorerPresentationConfiguration source] */

undefined8 FUN_10afde97c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afde984; end: 10afde98b; -[SCLensExplorerPresentationConfiguration cameraSource] */

undefined8 FUN_10afde984(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afde98c; end: 10afde993; -[SCLensExplorerPresentationConfiguration presentationType] */

undefined8 FUN_10afde98c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afde994; end: 10afde99b; -[SCLensExplorerPresentationConfiguration interactiveTransition] */

undefined8 FUN_10afde994(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afde99c; end: 10afde9a3; -[SCLensExplorerPresentationConfiguration mode] */

undefined8 FUN_10afde99c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afde9a4; end: 10afde9d3; -[SCLensExplorerPresentationConfiguration .cxx_destruct] */

void FUN_10afde9a4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10afde9d4; end: 10afde9ef; +[SCLensExplorerPresentationConfigurationBuilder lensExplorerPresentationConfiguration] */

void FUN_10afde9d4(void)

{
  _objc_alloc_init(PTR_PTR_1126c8ab0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afde9f0; end: 10afdeb4f; +[SCLensExplorerPresentationConfigurationBuilder lensExplorerPresentationConfigurationFromExistingLensExplorerPresentationConfiguration:] */

void FUN_10afde9f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  puVar1 = PTR_PTR_1126c8ab0;
  _objc_retain(param_3);
  func_0x00010c093440(puVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c247520(param_3);
  puVar3 = puVar1;
  func_0x00010c2b9b80(puVar1,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf2afc0(param_3);
  puVar4 = puVar3;
  func_0x00010c2a9ee0(puVar3,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c10f7c0(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar4;
  func_0x00010c2b5c60(puVar4,param_2,uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_3;
  func_0x00010c068e00(param_3);
  _objc_retainAutoreleasedReturnValue();
  puVar7 = puVar5;
  func_0x00010c2affe0(puVar5,param_2,uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_3;
  func_0x00010c0cfd40(param_3);
  _objc_release(param_3);
  puVar9 = puVar7;
  func_0x00010c2b40c0(puVar7,param_2,uVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  _objc_release(uVar6);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 10afdeb50; end: 10afdeb87; -[SCLensExplorerPresentationConfigurationBuilder build] */

void FUN_10afdeb50(void)

{
  _objc_alloc(PTR_PTR_1126b1b58);
  func_0x00010c04a5a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afdeb88; end: 10afdeb8f; -[SCLensExplorerPresentationConfigurationBuilder withSource:] */

void FUN_10afdeb88(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 8) = param_3;
  return;
}



/* Entry: 10afdeb90; end: 10afdeb97; -[SCLensExplorerPresentationConfigurationBuilder withCameraSource:] */

void FUN_10afdeb90(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x10) = param_3;
  return;
}



/* Entry: 10afdeb98; end: 10afdebcf; -[SCLensExplorerPresentationConfigurationBuilder withPresentationType:] */

long FUN_10afdeb98(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x00010bf51e00();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afdebd0; end: 10afdec07; -[SCLensExplorerPresentationConfigurationBuilder withInteractiveTransition:] */

long FUN_10afdebd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 10afdec08; end: 10afdec0f; -[SCLensExplorerPresentationConfigurationBuilder withMode:] */

void FUN_10afdec08(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x28) = param_3;
  return;
}



/* Entry: 10afdec10; end: 10afdec3f; -[SCLensExplorerPresentationConfigurationBuilder .cxx_destruct] */

void FUN_10afdec10(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10afdec40; end: 10afdecab; +[SCLensExplorerPresentationType categoryFeedWithFeedId:isStandalone:] */

void FUN_10afdec40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1b50;
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



/* Entry: 10afdecac; end: 10afded17; +[SCLensExplorerPresentationType lensCollectionFeedWithCollectionId:] */

void FUN_10afdecac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1b50;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afded18; end: 10afded83; +[SCLensExplorerPresentationType subcategoryFeedWithFeedId:] */

void FUN_10afded18(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b1b50;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10afded84; end: 10afdeda7; -[SCLensExplorerPresentationType copyWithZone:] */

undefined8 FUN_10afded84(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdeda8; end: 10afdee2f; -[SCLensExplorerPresentationType hash] */

void FUN_10afdeda8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  puVar3 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_40 = (ulong)*(byte *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_48 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000107c3191c(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_112703d30;
  puStack_80 = (undefined1 *)puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afdee30; end: 10afdee73; -[SCLensExplorerPresentationType internalInit] */

void FUN_10afdee30(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_112703d30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afdee74; end: 10afdef53; -[SCLensExplorerPresentationType isEqual:] */

long FUN_10afdee74(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afdef2c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afdef38;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(char *)(param_1 + 0x18) == *(char *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if (lVar3 != *(long *)(param_3 + 0x28)) {
            func_0x00010c071ae0();
            goto LAB_10afdef38;
          }
          goto LAB_10afdef2c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_10afdef38:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afdef54; end: 10afdf00b; -[SCLensExplorerPresentationType matchCategoryFeed:subcategoryFeed:lensCollectionFeed:] */

void FUN_10afdef54(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 == 2) {
    if (param_5 == 0) goto LAB_10afdefe8;
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    pcVar3 = *(code **)(param_5 + 0x10);
    lVar2 = param_5;
  }
  else {
    if (lVar2 != 1) {
      if ((lVar2 == 0) && (param_3 != 0)) {
        (**(code **)(param_3 + 0x10))
                  (param_3,*(undefined8 *)(param_1 + 0x10),*(undefined1 *)(param_1 + 0x18));
      }
      goto LAB_10afdefe8;
    }
    if (param_4 == 0) goto LAB_10afdefe8;
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    pcVar3 = *(code **)(param_4 + 0x10);
    lVar2 = param_4;
  }
  (*pcVar3)(lVar2,uVar1);
LAB_10afdefe8:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10afdf00c; end: 10afdf047; -[SCLensExplorerPresentationType .cxx_destruct] */

void FUN_10afdf00c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10afdf048; end: 10afdf0bb; -[SCLensCreatorSubscriptionProviderServices initWithProvider:] */

undefined1 * FUN_10afdf048(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703d38;
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



/* Entry: 10afdf0bc; end: 10afdf0c3; -[SCLensCreatorSubscriptionProviderServices lensCreatorSubscriptionProvider] */

undefined8 FUN_10afdf0bc(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdf0c4; end: 10afdf0cf; -[SCLensCreatorSubscriptionProviderServices .cxx_destruct] */

void FUN_10afdf0c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afdf0d0; end: 10afdf143; -[SCLensTopicsServices initWithLensTopicPagePresenter:] */

undefined1 * FUN_10afdf0d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703d40;
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



/* Entry: 10afdf144; end: 10afdf14b; -[SCLensTopicsServices lensTopicPagePresenter] */

undefined8 FUN_10afdf144(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdf14c; end: 10afdf157; -[SCLensTopicsServices .cxx_destruct] */

void FUN_10afdf14c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afdf158; end: 10afdf38f; -[SCLensTopicModel initWithLensId:lensName:iconURL:creatorId:creatorName:creatorProId:isOfficialCreator:isBusinessCategoryType:rankingRequestId:rankingRequestInfo:adId:adServeItemId:] */

undefined8 *
FUN_10afdf158(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14)

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
  _objc_retain(param_11);
  _objc_retain(param_12);
  _objc_retain(param_13);
  _objc_retain(param_14);
  puStack_68 = PTR_PTR_112703d48;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = puVar1[2];
    puVar1[2] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = puVar1[3];
    puVar1[3] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = puVar1[4];
    puVar1[4] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = puVar1[5];
    puVar1[5] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar3 = puVar1[6];
    puVar1[6] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = puVar1[7];
    puVar1[7] = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)(puVar1 + 1) = (undefined1)param_9;
    *(undefined1 *)((long)puVar1 + 9) = param_9._1_1_;
    uVar2 = param_11;
    func_0x00010bf51e00();
    uVar3 = puVar1[8];
    puVar1[8] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_12;
    func_0x00010bf51e00();
    uVar3 = puVar1[9];
    puVar1[9] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_13;
    func_0x00010bf51e00();
    uVar3 = puVar1[10];
    puVar1[10] = uVar2;
    _objc_release(uVar3);
    uVar2 = param_14;
    func_0x00010bf51e00();
    uVar3 = puVar1[0xb];
    puVar1[0xb] = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_14);
  _objc_release(param_13);
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 10afdf390; end: 10afdf3b3; -[SCLensTopicModel copyWithZone:] */

undefined8 FUN_10afdf390(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdf3b4; end: 10afdf493; -[SCLensTopicModel hash] */

undefined8 * FUN_10afdf3b4(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_88 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_80 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_78 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  uStack_70 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x38);
  uStack_68 = uVar1;
  func_0x00010bfde980();
  uStack_58 = (ulong)*(byte *)(param_1 + 8);
  uStack_50 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  uStack_60 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_88;
  uStack_30 = uVar2;
  func_0x000107c3191c(puVar3,0xc);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_10afdf5f4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afdf600;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)(puVar3 + 1) == *(char *)(param_3 + 1) &&
        (*(char *)((long)puVar3 + 9) == *(char *)((long)param_3 + 9))))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[3];
        if ((lVar5 == param_3[3]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[4];
          if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[5];
            if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[6];
              if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                lVar5 = puVar3[7];
                if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                  lVar5 = puVar3[8];
                  if ((lVar5 == param_3[8]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                    lVar5 = puVar3[9];
                    if ((lVar5 == param_3[9]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                      lVar5 = puVar3[10];
                      if ((lVar5 == param_3[10]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                        puVar6 = (undefined8 *)puVar3[0xb];
                        if (puVar6 != (undefined8 *)param_3[0xb]) {
                          func_0x00010c071ae0();
                          goto LAB_10afdf600;
                        }
                        goto LAB_10afdf5f4;
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
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afdf600:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afdf494; end: 10afdf61b; -[SCLensTopicModel isEqual:] */

long FUN_10afdf494(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afdf5f4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afdf600;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(char *)(param_1 + 8) == *(char *)(param_3 + 8) &&
        (*(char *)(param_1 + 9) == *(char *)(param_3 + 9))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x30);
              if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x38);
                if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0)
                   ) {
                  lVar3 = *(long *)(param_1 + 0x40);
                  if ((lVar3 == *(long *)(param_3 + 0x40)) ||
                     (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                    lVar3 = *(long *)(param_1 + 0x48);
                    if ((lVar3 == *(long *)(param_3 + 0x48)) ||
                       (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                      lVar3 = *(long *)(param_1 + 0x50);
                      if ((lVar3 == *(long *)(param_3 + 0x50)) ||
                         (func_0x00010c071ae0(), (int)lVar3 != 0)) {
                        lVar3 = *(long *)(param_1 + 0x58);
                        if (lVar3 != *(long *)(param_3 + 0x58)) {
                          func_0x00010c071ae0();
                          goto LAB_10afdf600;
                        }
                        goto LAB_10afdf5f4;
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
LAB_10afdf600:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afdf61c; end: 10afdf623; -[SCLensTopicModel lensId] */

undefined8 FUN_10afdf61c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afdf624; end: 10afdf62b; -[SCLensTopicModel lensName] */

undefined8 FUN_10afdf624(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afdf62c; end: 10afdf633; -[SCLensTopicModel iconURL] */

undefined8 FUN_10afdf62c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10afdf634; end: 10afdf63b; -[SCLensTopicModel creatorId] */

undefined8 FUN_10afdf634(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afdf63c; end: 10afdf643; -[SCLensTopicModel creatorName] */

undefined8 FUN_10afdf63c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afdf644; end: 10afdf64b; -[SCLensTopicModel creatorProId] */

undefined8 FUN_10afdf644(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 10afdf64c; end: 10afdf653; -[SCLensTopicModel isOfficialCreator] */

undefined1 FUN_10afdf64c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 10afdf654; end: 10afdf65b; -[SCLensTopicModel isBusinessCategoryType] */

undefined1 FUN_10afdf654(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 10afdf65c; end: 10afdf663; -[SCLensTopicModel rankingRequestId] */

undefined8 FUN_10afdf65c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 10afdf664; end: 10afdf66b; -[SCLensTopicModel rankingRequestInfo] */

undefined8 FUN_10afdf664(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 10afdf66c; end: 10afdf673; -[SCLensTopicModel adId] */

undefined8 FUN_10afdf66c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x50);
}



/* Entry: 10afdf674; end: 10afdf67b; -[SCLensTopicModel adServeItemId] */

undefined8 FUN_10afdf674(long param_1)

{
  return *(undefined8 *)(param_1 + 0x58);
}



/* Entry: 10afdf67c; end: 10afdf70b; -[SCLensTopicModel .cxx_destruct] */

void FUN_10afdf67c(long param_1)

{
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



/* Entry: 10afdf70c; end: 10afdf77f; -[SCSpectaclesLensServices initWithSpectaclesLensHandling:] */

undefined1 * FUN_10afdf70c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_112703d50;
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



/* Entry: 10afdf780; end: 10afdf787; -[SCSpectaclesLensServices spectaclesLensHandling] */

undefined8 FUN_10afdf780(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdf788; end: 10afdf793; -[SCSpectaclesLensServices .cxx_destruct] */

void FUN_10afdf788(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afdf794; end: 10afdf8bb; -[SCLensModularReplyCameraScope initWithPresentingViewController:lensReplyParams:lensModularCameraLensData:delegate:activationSource:dismissBlock:] */

undefined1 *
FUN_10afdf794(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_112703d58;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 8),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x20),param_6);
    uVar2 = param_8;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10afdf8bc; end: 10afdf8d3; -[SCLensModularReplyCameraScope presentingViewController] */

void FUN_10afdf8bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afdf8d4; end: 10afdf8db; -[SCLensModularReplyCameraScope lensReplyParams] */

undefined8 FUN_10afdf8d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afdf8dc; end: 10afdf8e3; -[SCLensModularReplyCameraScope lensModularCameraLensData] */

undefined8 FUN_10afdf8dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10afdf8e4; end: 10afdf8fb; -[SCLensModularReplyCameraScope delegate] */

void FUN_10afdf8e4(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10afdf8fc; end: 10afdf903; -[SCLensModularReplyCameraScope dismissBlock] */

undefined8 FUN_10afdf8fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 10afdf904; end: 10afdf90b; -[SCLensModularReplyCameraScope activationSource] */

undefined8 FUN_10afdf904(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 10afdf90c; end: 10afdf957; -[SCLensModularReplyCameraScope .cxx_destruct] */

void FUN_10afdf90c(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_destroyWeak(param_1 + 0x20);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + 8);
  return;
}



/* Entry: 10afdf958; end: 10afdfa03; -[SCLensModularCameraLensData initWithLenses:selectedLens:] */

undefined1 *
FUN_10afdf958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_112703d60;
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



/* Entry: 10afdfa04; end: 10afdfa27; -[SCLensModularCameraLensData copyWithZone:] */

undefined8 FUN_10afdfa04(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10afdfa28; end: 10afdfa9b; -[SCLensModularCameraLensData hash] */

undefined8 * FUN_10afdfa28(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_10afdfb1c:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_10afdfb28;
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
          goto LAB_10afdfb28;
        }
        goto LAB_10afdfb1c;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_10afdfb28:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10afdfa9c; end: 10afdfb43; -[SCLensModularCameraLensData isEqual:] */

long FUN_10afdfa9c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10afdfb1c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_10afdfb28;
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
          goto LAB_10afdfb28;
        }
        goto LAB_10afdfb1c;
      }
    }
    lVar3 = 0;
  }
LAB_10afdfb28:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10afdfb44; end: 10afdfb4b; -[SCLensModularCameraLensData lenses] */

undefined8 FUN_10afdfb44(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10afdfb4c; end: 10afdfb53; -[SCLensModularCameraLensData selectedLens] */

undefined8 FUN_10afdfb4c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10afdfb54; end: 10afdfb83; -[SCLensModularCameraLensData .cxx_destruct] */

void FUN_10afdfb54(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10afdfb84; end: 10afdfc27; -[SCLensModularCameraScopeConfiguration initWithBlockListedFeatures:cameraUIMode:preselectedLensId:singleLensModeEnabled:enableARBar:] */

undefined1 *
FUN_10afdfb84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined1 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_112703d68;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 0x10) = param_3;
    *(undefined8 *)((long)puVar1 + 0x18) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_6;
    *(undefined1 *)((long)puVar1 + 9) = param_7;
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 10afdfc28; end: 10afdfc4b; -[SCLensModularCameraScopeConfiguration copyWithZone:] */

undefined8 FUN_10afdfc28(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


