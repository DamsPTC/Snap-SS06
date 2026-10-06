/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106623830; end: 106623853; -[SCMyUnifiedProfileSnapProPlayStoryActionDataModel copyWithZone:] */

undefined8 FUN_106623830(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106623854; end: 1066238df; -[SCMyUnifiedProfileSnapProPlayStoryActionDataModel hash] */

undefined8 * FUN_106623854(long param_1,undefined8 param_2,undefined1 *param_3)

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
  ulong uStack_30;
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
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_106623998:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1066239a4;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) &&
       ((*(char *)((long)puVar3 + 8) == param_3[8] && (*(char *)((long)puVar3 + 9) == param_3[9]))))
    {
      lVar5 = *(long *)((long)puVar3 + 0x10);
      if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
          if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_1066239a4;
          }
          goto LAB_106623998;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1066239a4:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1066238e0; end: 1066239bf; -[SCMyUnifiedProfileSnapProPlayStoryActionDataModel isEqual:] */

long FUN_1066238e0(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106623998:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1066239a4;
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
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_1066239a4;
          }
          goto LAB_106623998;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1066239a4:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1066239c0; end: 1066239c7; -[SCMyUnifiedProfileSnapProPlayStoryActionDataModel businessId] */

undefined8 FUN_1066239c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1066239c8; end: 1066239cf; -[SCMyUnifiedProfileSnapProPlayStoryActionDataModel hostAccountUserId] */

undefined8 FUN_1066239c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1066239d0; end: 1066239d7; -[SCMyUnifiedProfileSnapProPlayStoryActionDataModel snapId] */

undefined8 FUN_1066239d0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 1066239d8; end: 1066239df; -[SCMyUnifiedProfileSnapProPlayStoryActionDataModel useCircleTransition] */

undefined1 FUN_1066239d8(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 1066239e0; end: 1066239e7; -[SCMyUnifiedProfileSnapProPlayStoryActionDataModel appearWithExpandedViewersList] */

undefined1 FUN_1066239e0(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 1066239e8; end: 106623a23; -[SCMyUnifiedProfileSnapProPlayStoryActionDataModel .cxx_destruct] */

void FUN_1066239e8(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106623a24; end: 106623ab3; -[SCMyUnifiedProfileSnapProLogoViewModel initWithThumbnailViewModel:showAddToStoryIcon:showStandardTierNux:] */

undefined1 *
FUN_106623a24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f21e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
    *(undefined1 *)((long)puVar1 + 8) = param_4;
    *(undefined1 *)((long)puVar1 + 9) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106623ab4; end: 106623ad7; -[SCMyUnifiedProfileSnapProLogoViewModel copyWithZone:] */

undefined8 FUN_106623ab4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106623ad8; end: 106623b4b; -[SCMyUnifiedProfileSnapProLogoViewModel hash] */

undefined8 * FUN_106623ad8(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uStack_40;
  ulong uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_40;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_38 = (ulong)*(byte *)(param_1 + 8);
  uStack_30 = (ulong)*(byte *)(param_1 + 9);
  uStack_40 = uVar1;
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (undefined8 *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106623be0;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + 8) != param_3[8] || (*(char *)((long)puVar2 + 9) != param_3[9]))))
    {
      puVar4 = (undefined1 *)0x0;
      goto LAB_106623be0;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106623be0;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_106623be0:
  _objc_release(param_3);
  return (undefined8 *)puVar4;
}



/* Entry: 106623b4c; end: 106623bfb; -[SCMyUnifiedProfileSnapProLogoViewModel isEqual:] */

long FUN_106623b4c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106623be0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      goto LAB_106623be0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106623be0;
    }
  }
  lVar3 = 1;
LAB_106623be0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106623bfc; end: 106623c03; -[SCMyUnifiedProfileSnapProLogoViewModel thumbnailViewModel] */

undefined8 FUN_106623bfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106623c04; end: 106623c0b; -[SCMyUnifiedProfileSnapProLogoViewModel showAddToStoryIcon] */

undefined1 FUN_106623c04(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106623c0c; end: 106623c13; -[SCMyUnifiedProfileSnapProLogoViewModel showStandardTierNux] */

undefined1 FUN_106623c0c(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106623c14; end: 106623c1f; -[SCMyUnifiedProfileSnapProLogoViewModel .cxx_destruct] */

void FUN_106623c14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106623c20; end: 106623ccb; -[SCPublicStorySnapStateModel initWithSnapClientId:incomingTransition:] */

undefined1 *
FUN_106623c20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f21e8;
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



/* Entry: 106623ccc; end: 106623cef; -[SCPublicStorySnapStateModel copyWithZone:] */

undefined8 FUN_106623ccc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106623cf0; end: 106623d63; -[SCPublicStorySnapStateModel hash] */

undefined8 * FUN_106623cf0(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_106623de4:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106623df0;
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
          goto LAB_106623df0;
        }
        goto LAB_106623de4;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106623df0:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106623d64; end: 106623e0b; -[SCPublicStorySnapStateModel isEqual:] */

long FUN_106623d64(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106623de4:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106623df0;
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
          goto LAB_106623df0;
        }
        goto LAB_106623de4;
      }
    }
    lVar3 = 0;
  }
LAB_106623df0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106623e0c; end: 106623e13; -[SCPublicStorySnapStateModel snapClientId] */

undefined8 FUN_106623e0c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106623e14; end: 106623e1b; -[SCPublicStorySnapStateModel incomingTransition] */

undefined8 FUN_106623e14(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106623e1c; end: 106623e4b; -[SCPublicStorySnapStateModel .cxx_destruct] */

void FUN_106623e1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106623e4c; end: 106623edb; -[SCPublicStorySectionStateModel initWithHasStory:hasUnviewed:incomingTransition:] */

undefined1 *
FUN_106623e4c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined1 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126f21f0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    *(undefined1 *)((long)puVar1 + 9) = param_4;
    uVar2 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  return (undefined1 *)puVar1;
}



/* Entry: 106623edc; end: 106623eff; -[SCPublicStorySectionStateModel copyWithZone:] */

undefined8 FUN_106623edc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106623f00; end: 106623f67; -[SCPublicStorySectionStateModel hash] */

ulong * FUN_106623f00(long param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined8 uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uStack_30;
  ulong uStack_28;
  undefined8 uStack_20;
  long lStack_18;
  
  puVar2 = &uStack_30;
  lStack_18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  uStack_28 = (ulong)*(byte *)(param_1 + 9);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_20 = uVar1;
  func_0x000100505190(&uStack_30,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_18) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != (ulong *)param_3) {
    puVar4 = (undefined1 *)0x0;
    if ((puVar2 == (ulong *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_106623ffc;
    puVar4 = (undefined1 *)puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) ||
       ((*(char *)((long)puVar2 + 8) != param_3[8] || (*(char *)((long)puVar2 + 9) != param_3[9]))))
    {
      puVar4 = (undefined1 *)0x0;
      goto LAB_106623ffc;
    }
    puVar4 = *(undefined1 **)((long)puVar2 + 0x10);
    if (puVar4 != *(undefined1 **)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106623ffc;
    }
  }
  puVar4 = (undefined1 *)0x1;
LAB_106623ffc:
  _objc_release(param_3);
  return (ulong *)puVar4;
}



/* Entry: 106623f68; end: 106624017; -[SCPublicStorySectionStateModel isEqual:] */

long FUN_106623f68(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106623ffc;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) ||
       ((*(char *)(param_1 + 8) != *(char *)(param_3 + 8) ||
        (*(char *)(param_1 + 9) != *(char *)(param_3 + 9))))) {
      lVar3 = 0;
      goto LAB_106623ffc;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_106623ffc;
    }
  }
  lVar3 = 1;
LAB_106623ffc:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106624018; end: 10662401f; -[SCPublicStorySectionStateModel hasStory] */

undefined1 FUN_106624018(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 106624020; end: 106624027; -[SCPublicStorySectionStateModel hasUnviewed] */

undefined1 FUN_106624020(long param_1)

{
  return *(undefined1 *)(param_1 + 9);
}



/* Entry: 106624028; end: 10662402f; -[SCPublicStorySectionStateModel incomingTransition] */

undefined8 FUN_106624028(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106624030; end: 10662403b; -[SCPublicStorySectionStateModel .cxx_destruct] */

void FUN_106624030(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 10662403c; end: 10662413f; -[SCImpalaWatchedStateCache initWithUserSession:readReceiptCoordinator:] */

undefined1 *
FUN_10662403c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_48 = PTR_PTR_1126f21f8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x18),param_3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae790;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c021520();
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106624140; end: 10662423f; -[SCImpalaWatchedStateCache syncItemsWithItems:callback:] */

void FUN_106624140(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106624240; end: 106624273;  */

void FUN_106624240(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bec9ae0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106624274; end: 106624837; -[SCImpalaWatchedStateCache _syncItemsFromReadReceiptWatchStatesOnPerformer:callback:] */

void FUN_106624274(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined *puVar15;
  undefined *puStack_270;
  long lStack_260;
  undefined *puStack_240;
  undefined8 uStack_238;
  code *pcStack_230;
  undefined *puStack_228;
  long lStack_220;
  undefined8 uStack_218;
  undefined8 *puStack_210;
  undefined8 *puStack_208;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  code *pcStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  long lStack_180;
  undefined8 *puStack_178;
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
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  plStack_130 = (long *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_3);
  lStack_260 = param_3;
  func_0x00010bf52a60();
  if (lStack_260 != 0) {
    lVar12 = *plStack_130;
    do {
      lVar14 = 0;
      do {
        if (*plStack_130 != lVar12) {
          _objc_enumerationMutation(param_3);
        }
        puVar15 = *(undefined **)(lStack_138 + lVar14 * 8);
        _objc_retain(puVar15);
        puVar13 = puVar15;
        func_0x00010bf93760();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        puVar3 = PTR_PTR_1126cc370;
        if (puVar13 == (undefined *)0x0) {
          _objc_release(puVar15);
LAB_106624524:
          puVar3 = puVar15;
          func_0x00010c0844e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar3 != (undefined *)0x0) {
            func_0x00010c0844e0(puVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1);
            goto LAB_106624560;
          }
        }
        else {
          puVar13 = puVar15;
          func_0x00010bf93760(puVar15);
          _objc_retainAutoreleasedReturnValue();
          uStack_170 = 0;
          func_0x00010c0f40e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(puVar13);
          if (puVar3 == (undefined *)0x0) {
            puVar13 = (undefined *)0x0;
          }
          else {
            puVar13 = PTR_PTR_1126cc378;
            _objc_alloc();
            puVar4 = puVar3;
            func_0x00010c0844e0();
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bf3d580(puVar3);
            puVar6 = puVar3;
            func_0x00010c25e5c0();
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar6;
            func_0x00010c296d80();
            _objc_retainAutoreleasedReturnValue();
            puVar8 = puVar3;
            func_0x00010c25e5e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c296d80();
            puVar9 = puVar3;
            func_0x00010bfbbf60();
            if (((ulong)puVar9 & 1) == 0) {
              puStack_270 = puVar3;
              func_0x00010bf08ca0();
              _objc_retainAutoreleasedReturnValue();
              func_0x00010c296d80(puStack_270);
            }
            puVar10 = puVar3;
            func_0x00010c237cc0();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c04dd20((double)(long)puVar5);
            _objc_release(puVar10);
            if (((ulong)puVar9 & 1) == 0) {
              _objc_release(puStack_270);
            }
            _objc_release(puVar8);
            _objc_release(puVar7);
            _objc_release(puVar6);
            _objc_release(puVar4);
          }
          _objc_release(puVar3);
          _objc_release(puVar15);
          if (puVar13 == (undefined *)0x0) goto LAB_106624524;
          func_0x00010befa120(puVar2);
          puVar15 = puVar13;
LAB_106624560:
          _objc_release(puVar15);
        }
        lVar14 = lVar14 + 1;
      } while (lStack_260 != lVar14);
      lStack_260 = param_3;
      func_0x00010bf52a60();
    } while (lStack_260 != 0);
  }
  lVar12 = param_3;
  _objc_release();
  _dispatch_group_create();
  puStack_168 = &uStack_170;
  uStack_170 = 0;
  uStack_160 = 0x3032000000;
  pcStack_158 = FUN_106624838;
  uStack_150 = 0x106624848;
  uStack_148 = 0;
  puVar13 = puVar1;
  func_0x00010bf529e0();
  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar13 != (undefined *)0x0) {
    _dispatch_group_enter(lVar12);
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    puStack_1a0 = puVar3;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_106624850;
    puStack_188 = &UNK_110853260;
    puStack_178 = &uStack_170;
    _objc_retain(lVar12);
    lStack_180 = lVar12;
    func_0x00010c108ee0(uVar11);
    _objc_release(uVar11);
    _objc_release(lStack_180);
  }
  puStack_1c8 = &uStack_1d0;
  uStack_1d0 = 0;
  uStack_1c0 = 0x3032000000;
  pcStack_1b8 = FUN_106624838;
  uStack_1b0 = 0x106624848;
  uStack_1a8 = 0;
  puVar13 = puVar2;
  func_0x00010bf529e0();
  if (puVar13 != (undefined *)0x0) {
    _dispatch_group_enter(lVar12);
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar11);
    _objc_retainAutoreleasedReturnValue();
    puStack_200 = puVar3;
    uStack_1f8 = 0xc2000000;
    uStack_1f0 = 0x1066248ac;
    puStack_1e8 = &UNK_110853260;
    puStack_1d8 = &uStack_1d0;
    _objc_retain(lVar12);
    lStack_1e0 = lVar12;
    func_0x00010c288ba0(uVar11);
    _objc_release(uVar11);
    _objc_release(lStack_1e0);
  }
  uVar11 = *(undefined8 *)(param_1 + 8);
  func_0x00010c11de00(uVar11);
  _objc_retainAutoreleasedReturnValue();
  puStack_240 = puVar3;
  uStack_238 = 0xc2000000;
  pcStack_230 = FUN_106624908;
  puStack_228 = &UNK_11090f5b8;
  puStack_210 = &uStack_170;
  puStack_208 = &uStack_1d0;
  lStack_220 = param_3;
  uStack_218 = param_4;
  _objc_retain();
  _objc_retain(param_3);
  func_0x000100bc0718(lVar12,uVar11,&puStack_240);
  _objc_release(uVar11);
  _objc_release(uStack_218);
  _objc_release(lStack_220);
  __Block_object_dispose(&uStack_1d0,8);
  _objc_release(uStack_1a8);
  __Block_object_dispose(&uStack_170,8);
  _objc_release(uStack_148);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(lVar12);
  _objc_release(puVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    lVar12 = 8;
    __Block_object_dispose(&uStack_170);
    __Unwind_Resume();
    *(undefined8 *)(puVar1 + 0x28) = *(undefined8 *)(lVar12 + 0x28);
    *(undefined8 *)(lVar12 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 106624838; end: 10662484f;  */

void FUN_106624838(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106624850; end: 106624907;  */

void FUN_106624850(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106624908; end: 106624be3;  */

void FUN_106624908(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  func_0x00010bf529e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28));
  func_0x00010bf529e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
  func_0x00010bf71fe0();
  _objc_retainAutoreleasedReturnValue();
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28) != 0) {
    func_0x00010bef7f60(puVar2);
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) != 0) {
    func_0x00010bef7f60(puVar2);
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x20));
  func_0x00010bf0a0e0();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar12);
  lVar4 = lVar12;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar4 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar12);
      }
      uVar13 = *(undefined8 *)(lVar11 * 8);
      uVar5 = uVar13;
      func_0x00010c0844e0(uVar13);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = puVar2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      _objc_release(uVar5);
      if (puVar6 == (undefined *)0x0) {
        func_0x00010befa120(puVar3);
      }
      else {
        func_0x00010c0844e0(uVar13);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar2;
        func_0x00010c0e00e0(puVar2);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar6;
        FUN_106624be4();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar6);
        _objc_release(uVar13);
        puVar6 = PTR_PTR_1126cc360;
        _objc_alloc();
        puVar8 = puVar7;
        func_0x00010c0844e0(puVar7);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar7;
        func_0x00010bf63640(puVar7);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c01fe00();
        _objc_release(puVar9);
        _objc_release(puVar8);
        func_0x00010befa120(puVar3);
        _objc_release(puVar6);
        _objc_release(puVar7);
      }
      lVar11 = lVar11 + 1;
    } while (lVar4 != lVar11);
    lVar4 = lVar12;
    func_0x00010bf52a60();
  }
  _objc_release(lVar12);
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))(*(long *)(param_1 + 0x28),puVar3,0);
  _objc_release(puVar3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puVar3 = PTR_PTR_1126cc370;
  _objc_opt_new(PTR_PTR_1126cc370);
  puVar6 = puVar2;
  func_0x00010c259cc0(puVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5f20(puVar3);
  _objc_release(puVar6);
  func_0x00010bf08ca0(puVar2);
  func_0x00010c1a17a0(puVar3);
  func_0x00010c270aa0(puVar2);
  func_0x00010c17d200(puVar3);
  puVar6 = puVar2;
  func_0x00010c25e5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (puVar6 != (undefined *)0x0) {
    puVar6 = PTR_PTR_1126b1df0;
    _objc_opt_new(PTR_PTR_1126b1df0);
    func_0x00010c20ed20(puVar3);
    _objc_release(puVar6);
    puVar6 = puVar2;
    func_0x00010c25e5c0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar3;
    func_0x00010c25e5c0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160();
    _objc_release(puVar7);
    _objc_release(puVar6);
    puVar6 = PTR_PTR_1126c0320;
    _objc_opt_new(PTR_PTR_1126c0320);
    func_0x00010c20ed40(puVar3);
    _objc_release(puVar6);
    func_0x00010c25e5e0(puVar2);
    puVar6 = puVar3;
    func_0x00010c25e5e0(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160();
    _objc_release(puVar6);
  }
  puVar6 = PTR_PTR_1126c0320;
  _objc_opt_new(PTR_PTR_1126c0320);
  func_0x00010c169d00(puVar3);
  _objc_release(puVar6);
  func_0x00010bf08ca0(puVar2);
  puVar6 = puVar3;
  func_0x00010bf08ca0(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160();
  _objc_release(puVar6);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106624be4; end: 106624da7;  */

void FUN_106624be4(double param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  
  _objc_retain();
  puVar1 = PTR_PTR_1126cc370;
  _objc_opt_new(PTR_PTR_1126cc370);
  lVar2 = param_2;
  func_0x00010c259cc0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1b5f20(puVar1,param_3,lVar2);
  _objc_release(lVar2);
  lVar2 = param_2;
  func_0x00010bf08ca0(param_2);
  func_0x00010c1a17a0(puVar1,param_3,99 < (int)lVar2);
  func_0x00010c270aa0(param_2);
  func_0x00010c17d200(puVar1,param_3,(long)param_1);
  lVar2 = param_2;
  func_0x00010c25e5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 != 0) {
    puVar3 = PTR_PTR_1126b1df0;
    _objc_opt_new(PTR_PTR_1126b1df0);
    func_0x00010c20ed20(puVar1,param_3,puVar3);
    _objc_release(puVar3);
    lVar2 = param_2;
    func_0x00010c25e5c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c25e5c0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160();
    _objc_release(puVar3);
    _objc_release(lVar2);
    puVar3 = PTR_PTR_1126c0320;
    _objc_opt_new(PTR_PTR_1126c0320);
    func_0x00010c20ed40(puVar1,param_3,puVar3);
    _objc_release(puVar3);
    func_0x00010c25e5e0(param_2);
    puVar3 = puVar1;
    func_0x00010c25e5e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c220160();
    _objc_release(puVar3);
  }
  puVar3 = PTR_PTR_1126c0320;
  _objc_opt_new(PTR_PTR_1126c0320);
  func_0x00010c169d00(puVar1,param_3,puVar3);
  _objc_release(puVar3);
  func_0x00010bf08ca0(param_2);
  puVar3 = puVar1;
  func_0x00010bf08ca0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c220160();
  _objc_release(puVar3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106624da8; end: 106624f2b; -[SCImpalaWatchedStateCache observeWithCallback:] */

void FUN_106624da8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126cc368;
  _objc_alloc();
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_106624f2c;
  puStack_60 = &UNK_1109303e0;
  _objc_retain(param_3);
  uStack_58 = param_3;
  func_0x00010bffade0();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar2);
  _objc_initWeak(auStack_80,param_1);
  puVar3 = PTR_PTR_1126b2f30;
  _objc_alloc(PTR_PTR_1126b2f30);
  _objc_copyWeak(auStack_88,auStack_80);
  _objc_retain(puVar1);
  func_0x00010bffae00(puVar3);
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar1);
  _objc_release(uStack_58);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106624f2c; end: 106624fe7;  */

void FUN_106624f2c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  FUN_106624be4(param_2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR_PTR_1126cc360;
  _objc_alloc(PTR_PTR_1126cc360);
  uVar2 = param_2;
  func_0x00010c0844e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010bf63640(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c01fe00(puVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  lVar4 = *(long *)(param_1 + 0x20);
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x10))(lVar4,puVar1);
  }
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106624fe8; end: 106625043;  */

void FUN_106624fe8(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cf80();
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106625044; end: 10662504f; -[SCImpalaWatchedStateCache pushToValdiMarshaller:] */

void FUN_106625044(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b046e08(param_3,param_1);
  func_0x00010b046ddc();
  func_0x00010b046de4();
  func_0x00010b046d54();
  func_0x00010b046d94();
  return;
}



/* Entry: 106625050; end: 106625067; -[SCImpalaWatchedStateCache userSession] */

void FUN_106625050(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106625068; end: 10662509f; -[SCImpalaWatchedStateCache .cxx_destruct] */

void FUN_106625068(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066250a0; end: 106625147; -[SCImpalaWatchedStateCallbackUpdateListener initWithCallback:readReceiptCoordinator:] */

undefined1 *
FUN_1066250a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f2200;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106625148; end: 1066251a7; -[SCImpalaWatchedStateCallbackUpdateListener didUpdateWithStoriesSnapReadReceiptUpdateRequest:fromPullToRefreshSync:] */

void FUN_106625148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_1066251a8;
  puStack_20 = &UNK_110850988;
  uStack_18 = param_1;
  func_0x00010c0bc800(param_3,param_2,0,0,&puStack_38,0);
  return;
}



/* Entry: 1066251a8; end: 106625313;  */

void FUN_1066251a8(long param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined **unaff_x22;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  long lStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar4 = param_3;
  func_0x00010c08fa60();
  if (lVar4 != 0) {
    _objc_initWeak(auStack_48,*(long *)(param_1 + 0x20));
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_40 = param_3;
    func_0x00010bf0a140();
    _objc_retainAutoreleasedReturnValue();
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106625314;
    puStack_60 = &UNK_110851330;
    unaff_x22 = &puStack_78;
    param_2 = auStack_48;
    _objc_copyWeak(auStack_50,param_2);
    _objc_retain(param_3);
    lStack_58 = param_3;
    func_0x00010c108ee0(uVar1);
    _objc_release(puVar2);
    _objc_release(uVar1);
    _objc_release(lStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(unaff_x22 + 5);
  _objc_destroyWeak(auStack_48);
  __Unwind_Resume();
  _objc_retain(param_2);
  param_3 = param_3 + 0x28;
  _objc_loadWeakRetained();
  if (param_3 != 0) {
    puVar3 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = *(long *)(param_3 + 8);
    if (lVar4 != 0) {
      (**(code **)(lVar4 + 0x10))(lVar4,puVar3);
    }
    _objc_release(puVar3);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106625314; end: 106625393;  */

void FUN_106625314(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = param_2;
    func_0x00010c0e00e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,uVar1);
    }
    _objc_release(uVar1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106625394; end: 1066253c3; -[SCImpalaWatchedStateCallbackUpdateListener .cxx_destruct] */

void FUN_106625394(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066253c4; end: 10662540f;  */

undefined1  [16] FUN_1066253c4(double param_1,double param_2,int param_3)

{
  double dVar1;
  undefined1 auVar2 [16];
  
  auVar2._0_8_ = (param_1 + -107.0) * 0.0 + 0.0;
  dVar1 = 2.0;
  if (param_3 == 0) {
    dVar1 = 1.0;
  }
  auVar2._8_8_ = dVar1 + (param_2 + -124.0) * ((5.0 - dVar1) / 267.0);
  return auVar2;
}



/* Entry: 106625410; end: 106625527;  */

void FUN_106625410(double param_1,undefined *param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (((ulong)param_2 & 1) == 0) {
    func_0x000108f7495c();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    param_2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_3,0x28);
    _objc_retainAutoreleasedReturnValue();
  }
  func_0x00010bfc9760();
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfc9760();
  param_1 = param_1 + -107.0;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf41620(uStack_48 + param_1 * ((uStack_60 - uStack_48) / 173.0),
                      uStack_50 + param_1 * ((uStack_68 - uStack_50) / 173.0),
                      uStack_58 + param_1 * ((uStack_70 - uStack_58) / 173.0),0x3ff0000000000000,
                      PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106625528; end: 106625653;  */

undefined1  [16] FUN_106625528(double param_1)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = param_1 + ((param_1 + -107.0) * 0.046242774566473986 + 8.0) * -2.0;
  auVar1._8_8_ = (param_1 + -107.0) * 0.7167630057803468 + 70.0;
  return auVar1;
}



/* Entry: 106625654; end: 1066256b3;  */

void FUN_106625654(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf415a0(0x3fc1eb851eb851ec,PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0x6d7278);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bf414e0(0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1066256b4; end: 106625717;  */

undefined1  [16] FUN_1066256b4(double param_1,double param_2)

{
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = (param_1 - ((param_1 + -107.0) * 0.046242774566473986 + 8.0) * 2.0) -
                 ((param_1 + -107.0) * -0.023121387283236993 + 0.0) * 2.0;
  auVar1._8_8_ = (param_2 + -124.0) * 0.10486891385767791 + 0.0;
  return auVar1;
}



/* Entry: 106625718; end: 1066258cf;  */

void FUN_106625718(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  
  _objc_retain();
  lVar1 = param_2;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
    _objc_alloc_init(PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00);
    func_0x00010c1c82e0(param_1);
    func_0x00010c1c3ba0(param_1,puVar3);
    func_0x00010c1a95e0(0x3dcccccd,puVar3);
    func_0x00010c166c00(puVar3);
    func_0x00010c1bdb00(puVar3);
    puVar4 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
    _objc_alloc(PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08);
    lVar1 = param_2;
    func_0x00010bf0e540(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bff4f40(puVar4);
    _objc_release(lVar1);
    lVar1 = param_2;
    func_0x00010c26b700(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    lVar2 = param_2;
    func_0x00010c26b700(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c26b700(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c08fa60();
    func_0x00010c11f3a0(lVar2);
    func_0x00010bef6f20(puVar4);
    _objc_release(lVar5);
    _objc_release(lVar2);
    _objc_release(lVar1);
    puVar6 = puVar4;
    func_0x00010bf51e00(puVar4);
    func_0x00010c16b720(param_2);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1066258d0; end: 106625a63;  */

void FUN_1066258d0(double param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain();
  uVar1 = 0;
  _UIGraphicsBeginImageContextWithOptions(param_1,param_1,0,0);
  _UIGraphicsGetCurrentContext();
  _CGContextSetAlpha(0x3f947ae147ae147b);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010bf1c920(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGContextSetFillColorWithColor(uVar1,puVar3);
  _objc_release(puVar2);
  _CGContextFillEllipseInRect(0,0,param_1,param_1,uVar1);
  _CGContextSetAlpha(0x3ff0000000000000,uVar1);
  dVar6 = param_1 + -1.0;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGContextSetFillColorWithColor(uVar1,puVar3);
  _objc_release(puVar2);
  _CGContextFillEllipseInRect(0x3fe0000000000000,0x3fe0000000000000,dVar6,dVar6,uVar1);
  dVar4 = 0.5;
  dVar5 = 0.5;
  puVar2 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
  func_0x00010bf199a0(0x3fe0000000000000,0x3fe0000000000000,dVar6,dVar6,
                      PTR__OBJC_CLASS___UIBezierPath_1126aec18);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef7740();
  _objc_release(puVar2);
  func_0x00010c23d0a0(param_2);
  func_0x00010c23d0a0(param_2);
  func_0x00010bf897c0((dVar4 - param_1) * -0.5,(dVar5 - param_1) * -0.5,param_2);
  _objc_release(param_2);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 106625a64; end: 106625c57;  */

undefined1 * FUN_106625a64(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 in_x5;
  undefined1 in_w6;
  long lVar10;
  undefined8 uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined *puStack_d0;
  undefined *puStack_c8;
  
  puVar6 = PTR__OBJC_CLASS___NSMutableParagraphStyle_1126aec00;
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_alloc_init();
  func_0x00010c166c00();
  puVar1 = PTR__OBJC_CLASS___NSMutableAttributedString_1126aec08;
  _objc_alloc();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  func_0x00010c266f40(0x405a000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = 2;
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080();
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar3;
  func_0x00010c04e840();
  _objc_release(param_1);
  _objc_release(puVar3);
  _objc_release(puVar2);
  uVar4 = 0;
  _UIGraphicsBeginImageContextWithOptions(0x4068400000000000,0x4068400000000000,0,0);
  _UIGraphicsGetCurrentContext();
  uVar7 = 0x85;
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  _CGContextSetFillColorWithColor(uVar4,puVar3);
  _objc_release(puVar2);
  dVar12 = 0.0;
  dVar14 = 0.0;
  _CGContextFillEllipseInRect(0,0,0x4068400000000000,0x4068400000000000,uVar4);
  func_0x00010c23d0a0(puVar1);
  dVar13 = (194.0 - dVar12) * 0.5;
  puVar2 = puVar1;
  func_0x00010bf89920(dVar13,(194.0 - dVar14) * 0.5,dVar12);
  _UIGraphicsGetImageFromCurrentImageContext();
  _objc_retainAutoreleasedReturnValue();
  _UIGraphicsEndImageContext();
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return puVar2;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_d0;
  _objc_retain(uVar7);
  _objc_retain(puVar8);
  _objc_retain(uVar9);
  _objc_retain(in_x5);
  puStack_c8 = PTR_PTR_1126f2208;
  puStack_d0 = puVar6;
  _objc_msgSendSuper2(&puStack_d0,PTR_s_init_1125d9248);
  if (ppuVar5 != (undefined **)0x0) {
    uVar4 = uVar7;
    func_0x00010bf51e00();
    uVar11 = *(undefined8 *)((long)ppuVar5 + 0x28);
    *(undefined8 *)((long)ppuVar5 + 0x28) = uVar4;
    _objc_release(uVar11);
    puVar6 = puVar8;
    func_0x00010bf51e00();
    uVar4 = *(undefined8 *)((long)ppuVar5 + 0x30);
    *(undefined **)((long)ppuVar5 + 0x30) = puVar6;
    _objc_release(uVar4);
    _objc_storeWeak((undefined1 *)((long)ppuVar5 + 0x40),uVar9);
    _objc_storeWeak((undefined1 *)((long)ppuVar5 + 0x48),in_x5);
    *(undefined1 *)((long)ppuVar5 + 0x10) = in_w6;
    _CFAbsoluteTimeGetCurrent();
    *(double *)((long)ppuVar5 + 0x18) = dVar13;
    puVar6 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)ppuVar5 + 0x20);
    *(undefined **)((long)ppuVar5 + 0x20) = puVar6;
    _objc_release(uVar4);
    if (*(char *)((long)ppuVar5 + 0x10) == '\x01') {
      puVar6 = PTR_PTR_1126cc380;
      _objc_alloc_init();
    }
    else {
      puVar6 = (undefined *)0x0;
    }
    uVar4 = *(undefined8 *)((long)ppuVar5 + 8);
    *(undefined **)((long)ppuVar5 + 8) = puVar6;
    _objc_release(uVar4);
    *(undefined8 *)((long)ppuVar5 + 0x38) = 0;
  }
  _objc_release(in_x5);
  _objc_release(uVar9);
  _objc_release(puVar8);
  _objc_release(uVar7);
  return (undefined1 *)ppuVar5;
}



/* Entry: 106625c58; end: 106625dab; -[SCProfileTTUTracker initWithPath:profileType:collectionView:sectionTypeProvider:shouldEmitMetrics:] */

undefined1 *
FUN_106625c58(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126f2208;
  uStack_50 = param_2;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = uVar4;
    _objc_release(uVar3);
    uVar4 = param_5;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar4;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x40),param_6);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x48),param_7);
    *(undefined1 *)((long)puVar1 + 0x10) = param_8;
    _CFAbsoluteTimeGetCurrent();
    *(undefined8 *)((long)puVar1 + 0x18) = param_1;
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    _objc_opt_new();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar2;
    _objc_release(uVar4);
    if (*(char *)((long)puVar1 + 0x10) == '\x01') {
      puVar2 = PTR_PTR_1126cc380;
      _objc_alloc_init();
    }
    else {
      puVar2 = (undefined *)0x0;
    }
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    *(undefined8 *)((long)puVar1 + 0x38) = 0;
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106625dac; end: 106625f07; -[SCProfileTTUTracker handleCellDisplayAtSection:itemIndex:cellFrame:] */

void FUN_106625dac(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  double dVar6;
  double dVar7;
  
  if (*(char *)(param_5 + 0x10) == '\x01') {
    lVar2 = param_5 + 0x48;
    dVar6 = param_1;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c156920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      func_0x00010bddb660(param_5);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(ulong *)(param_5 + 0x20);
      func_0x00010bf4b900();
      if ((uVar5 & 1) == 0) {
        func_0x00010befa120(*(undefined8 *)(param_5 + 0x20));
        _CFAbsoluteTimeGetCurrent();
        dVar7 = *(double *)(param_5 + 0x18);
        if (*(double *)(param_5 + 0x38) <= 0.0) {
          bVar1 = false;
        }
        else {
          _CGRectGetMinY(param_1,param_2,param_3,param_4);
          bVar1 = param_1 < *(double *)(param_5 + 0x38);
        }
        FUN_10663bbcc(*(undefined8 *)(param_5 + 8),bVar1,*(undefined8 *)(param_5 + 0x28),
                      *(undefined8 *)(param_5 + 0x30),lVar3,(long)((dVar6 - dVar7) * 1000.0));
      }
      _objc_release(puVar4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 106625f08; end: 1066260f3; -[SCProfileTTUTracker handleSupplementaryDisplayAtSection:elementKind:viewFrame:] */

void FUN_106625f08(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,ulong param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  double dVar8;
  double dVar9;
  
  dVar8 = param_1;
  _objc_retain(param_8);
  if (*(char *)(param_5 + 0x10) == '\x01') {
    lVar2 = param_5 + 0x48;
    _objc_loadWeakRetained();
    lVar3 = lVar2;
    func_0x00010c156920();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c08fa60();
    if (lVar2 != 0) {
      func_0x00010bddb660(param_5);
      puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = *(ulong *)(param_5 + 0x20);
      func_0x00010bf4b900();
      if ((uVar5 & 1) == 0) {
        func_0x00010befa120(*(undefined8 *)(param_5 + 0x20));
        _CFAbsoluteTimeGetCurrent();
        dVar9 = *(double *)(param_5 + 0x18);
        if (*(double *)(param_5 + 0x38) <= 0.0) {
          bVar1 = false;
        }
        else {
          _CGRectGetMinY(param_1,param_2,param_3,param_4);
          bVar1 = param_1 < *(double *)(param_5 + 0x38);
        }
        uVar5 = param_8;
        func_0x00010c0720c0();
        if ((uVar5 & 1) == 0) {
          uVar5 = param_8;
          func_0x00010c0720c0();
          ppuVar7 = &PTR____CFConstantStringClassReference_110e570f8;
          if ((int)uVar5 == 0) {
            ppuVar7 = &PTR____CFConstantStringClassReference_110e57118;
          }
        }
        else {
          ppuVar7 = &PTR____CFConstantStringClassReference_110db6798;
        }
        puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
        lVar2 = lVar3;
        func_0x00010c14de00(PTR__OBJC_CLASS___NSString_1126ae4d0);
        _objc_retainAutoreleasedReturnValue();
        FUN_10663bebc(*(undefined8 *)(param_5 + 8),bVar1,*(undefined8 *)(param_5 + 0x28),
                      *(undefined8 *)(param_5 + 0x30),puVar6,(long)((dVar8 - dVar9) * 1000.0),
                      param_11,param_12,lVar2,ppuVar7);
        _objc_release(puVar6);
      }
      _objc_release(puVar4);
    }
    _objc_release(lVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_8);
  return;
}



/* Entry: 1066260f4; end: 10662616b; -[SCProfileTTUTracker _captureFoldMaxYIfNeeded] */

void FUN_1066260f4(undefined8 param_1,double param_2,undefined8 param_3,double param_4,long param_5)

{
  long lVar1;
  
  if (*(double *)(param_5 + 0x38) == 0.0) {
    lVar1 = param_5 + 0x40;
    _objc_loadWeakRetained();
    if (lVar1 != 0) {
      func_0x00010bf20c00(lVar1);
      if (param_4 <= 0.0) {
        func_0x00010bfb68e0(lVar1);
      }
      func_0x00010bf4cdc0(lVar1);
      *(double *)(param_5 + 0x38) = param_4 + param_2;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 10662616c; end: 1066261c3; -[SCProfileTTUTracker .cxx_destruct] */

void FUN_10662616c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
  _objc_destroyWeak(param_1 + 0x40);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1066261c4; end: 106626323; -[SCProfileUICollectionView layoutSubviews] */

void FUN_1066261c4(undefined8 param_1)

{
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f2210;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_layoutSubviews_112600e60);
  return;
}



/* Entry: 106626324; end: 10662632b;  */

void FUN_106626324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c128b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_reloadData_112627cf8)
  ;
  return;
}



/* Entry: 10662632c; end: 10662638b; -[SCProfileUICollectionView metricsLogger] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662632c(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = (long)_DAT_11274c5ec;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR_PTR_1126cc390;
    _objc_alloc_init();
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10662638c; end: 10662639f; -[SCProfileUICollectionView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10662638c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11274c5ec,0);
  return;
}



/* Entry: 1066263a0; end: 106626413; +[SCProfileUIRect newRectWithRect:] */

undefined1 *
FUN_1066263a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  puStack_48 = PTR_PTR_1126f2218;
  uStack_50 = param_5;
  _objc_msgSendSuper2(&uStack_50,PTR_s_new_112613b20);
  *(undefined8 *)((long)puVar1 + 8) = param_1;
  *(undefined8 *)((long)puVar1 + 0x10) = param_2;
  *(undefined8 *)((long)puVar1 + 0x18) = param_3;
  *(undefined8 *)((long)puVar1 + 0x20) = param_4;
  puVar2 = (undefined1 *)puVar1;
  func_0x00010bf5a6a0();
  *(undefined1 **)((long)puVar1 + 0x28) = puVar2;
  return (undefined1 *)puVar1;
}



/* Entry: 106626414; end: 10662649f; -[SCProfileUIRect createtHash] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_106626414(long param_1)

{
  ulong uVar2;
  undefined1 auVar1 [16];
  undefined1 auVar3 [16];
  
  auVar3 = NEON_fmov(0x4030000000000000,8);
  uVar2 = (long)(*(double *)(param_1 + 0x18) * 0.001 + auVar3._8_8_ * *(double *)(param_1 + 0x18)) &
          0xffffffff;
  auVar1._0_8_ = (long)(*(double *)(param_1 + 0x10) * 0.001 +
                       auVar3._0_8_ * *(double *)(param_1 + 0x10)) & 0xffff;
  auVar1[8] = (undefined1)uVar2;
  auVar1[9] = (undefined1)(uVar2 >> 8);
  auVar1._10_6_ = 0;
  auVar3._9_7_ = 0;
  auVar3._0_9_ = _UNK_10dddd160;
  auVar3 = NEON_ushl(auVar1,auVar3,8);
  return auVar3._8_8_ |
         (ulong)(uint)(int)(*(double *)(param_1 + 8) * 0.001 + *(double *)(param_1 + 8) * 16.0) <<
         0x30 | auVar3._0_8_ |
                (ulong)(uint)(int)(*(double *)(param_1 + 0x20) * 0.001 +
                                  *(double *)(param_1 + 0x20) * 16.0) & 0xffff;
}



/* Entry: 1066264a0; end: 106626513; -[SCProfileUIRect isEqual:] */

ulong FUN_1066264a0(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  ulong uVar2;
  
  _objc_retain(param_3);
  if (param_3 != 0) {
    puVar1 = PTR_PTR_1126cc398;
    _objc_opt_class(PTR_PTR_1126cc398);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar1);
    if ((uVar2 & 1) != 0) {
      _CGRectEqualToRect(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),
                         *(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20),
                         *(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10),
                         *(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20));
      goto LAB_1066264fc;
    }
  }
  uVar2 = 0;
LAB_1066264fc:
  _objc_release(param_3);
  return uVar2;
}



/* Entry: 106626514; end: 10662651f; -[SCProfileUIRect rect] */

undefined8 FUN_106626514(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106626520; end: 106626527; -[SCProfileUIRect hash] */

undefined8 FUN_106626520(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106626528; end: 10662654b; -[SCProfileUIRect copy] */

undefined8 FUN_106626528(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10662654c; end: 10662656f; -[SCProfileUIRect copyWithZone:] */

undefined8 FUN_10662654c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106626570; end: 1066265d7; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper frameForBackgroundCardWithHeaderFrame:contentSize:screenHeight:] */

undefined8 FUN_106626570(undefined8 param_1,int param_2)

{
  _CGRectIsNull();
  if (param_2 != 0) {
    param_1 = *(undefined8 *)PTR__CGRectNull_1103475e8;
  }
  return param_1;
}



/* Entry: 1066265d8; end: 10662664b; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper firstVisibleSectionIndexForCollectionView:] */

long FUN_1066265d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c0df2e0();
  if (0 < lVar1) {
    lVar3 = 0;
    do {
      lVar2 = param_3;
      func_0x00010c0deec0(param_3,param_2,lVar3);
      if (0 < lVar2) goto LAB_106626630;
      lVar3 = lVar3 + 1;
    } while (lVar1 != lVar3);
  }
  lVar3 = 0;
LAB_106626630:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 10662664c; end: 1066266b3; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper frameForSectionCellBackgroundWithItemFrame:sectionInsetTop:contentSize:screenHeight:] */

undefined8 FUN_10662664c(int param_1)

{
  undefined8 uVar1;
  
  _CGRectIsNull();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)PTR__CGRectNull_1103475e8;
  }
  return uVar1;
}



/* Entry: 1066266b4; end: 10662675b; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper frameForFlatCornerWithItemFrame:sectionTopInset:profileV2SectionCellTopInsetConstant:useStaticTrayYOffset:hasPublicProfile:trayYOffsetWithSwitcherButtons:trayYOffsetWithoutSwitcherButtons:contentSize:screenHeight:useStaticTrayWithoutSwitcherButtonsYOffset:] */

undefined8 FUN_1066266b4(void)

{
  _CGRectIsNull();
  return 0;
}



/* Entry: 10662675c; end: 10662676f; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper frameForGradientFromStartY:endY:contentWidth:] */

undefined8 FUN_10662675c(void)

{
  return 0;
}



/* Entry: 106626770; end: 106626803; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper shouldAddGradientForAttribute:hideTrayGradient:] */

uint FUN_106626770(undefined8 param_1,undefined8 param_2,long param_3,uint param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfecf20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1554e0();
  if (lVar2 == 0) {
    lVar2 = param_3;
    func_0x00010bfecf20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c142240();
    uVar4 = 0;
    if (lVar3 == 0) {
      uVar4 = param_4 ^ 1;
    }
    _objc_release(lVar2);
  }
  else {
    uVar4 = 0;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return uVar4;
}



/* Entry: 106626804; end: 106626897; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper shouldSkipOpaqueBackgroundForTransparentSectionsWithAttribute:transparentSectionCount:] */

bool FUN_106626804(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010bfecf20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1554e0();
  if (lVar2 < param_4) {
    lVar2 = param_3;
    func_0x00010bfecf20(param_3);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c142240();
    bVar4 = lVar3 < param_4;
    _objc_release(lVar2);
  }
  else {
    bVar4 = false;
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return bVar4;
}



/* Entry: 106626898; end: 106626963; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper shouldAddBackgroundCardForAttribute:] */

bool FUN_106626898(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010c1345c0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c0720c0();
  if ((int)lVar3 == 0) {
    bVar1 = false;
  }
  else {
    lVar3 = param_3;
    func_0x00010bfecf20();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010c1554e0();
    if (lVar4 == 0) {
      lVar4 = param_3;
      func_0x00010bfecf20(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010c142240();
      bVar1 = lVar5 == 0;
      _objc_release(lVar4);
    }
    else {
      bVar1 = false;
    }
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_3);
  return bVar1;
}



/* Entry: 106626964; end: 106626983; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper shouldAddSectionCellBackgroundForAttribute:] */

bool FUN_106626964(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c1345a0(param_3);
  return param_3 == 0;
}



/* Entry: 106626984; end: 1066269a3; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper shouldAddFlatCornerForAttribute:] */

bool FUN_106626984(undefined8 param_1,undefined8 param_2,long param_3)

{
  func_0x00010c1345a0(param_3);
  return param_3 == 0;
}



/* Entry: 1066269a4; end: 1066269db; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper shadowOpacityForBackgroundCardAtIndexPath:firstVisibleSectionIndex:] */

undefined8 FUN_1066269a4(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 uVar1;
  
  func_0x00010c1554e0();
  uVar1 = 0x3fd3333333333333;
  if (param_3 != param_4) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 1066269dc; end: 1066269ff; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper snapPlusPaddingForIsMyProfile:isGroupProfile:hasPublicProfile:friendProfileV2Enabled:] */

undefined8
FUN_1066269dc(undefined8 param_1,undefined8 param_2,int param_3,int param_4,uint param_5,
             uint param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x4034000000000000;
  if ((param_5 & param_6) == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x402e000000000000;
  if (param_3 == 0 && param_4 == 0) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 106626a00; end: 106626a13; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper snapPlusYPositionForContentOffset:transparentSectionHeight:padding:] */

double FUN_106626a00(undefined8 param_1,double param_2,double param_3,double param_4)

{
  param_4 = (param_3 - param_2) - param_4;
  if (param_4 <= 0.0) {
    param_4 = 0.0;
  }
  return param_4;
}



/* Entry: 106626a14; end: 106626a1f; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper maskFrameForBounds:yPosition:] */

undefined1  [16] FUN_106626a14(void)

{
  undefined1 auVar1 [16];
  ulong in_d4;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = in_d4;
  return auVar1 << 0x40;
}



/* Entry: 106626a20; end: 106626a6b; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper overlayGradientFrameForBounds:yPosition:gradientOffset:gradientHeight:] */

undefined8
FUN_106626a20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             double param_5,double param_6,undefined8 param_7)

{
  _CGRectIsNull(0,param_5 - param_6,param_3,param_7);
  return 0;
}



/* Entry: 106626a6c; end: 106626a77; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper shouldHideTrayGradientWithTransparentSectionCount:hideTrayGradientFlag:] */

undefined4 FUN_106626a6c(undefined8 param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  if (param_3 == 0) {
    param_4 = 1;
  }
  return param_4;
}



/* Entry: 106626a78; end: 106626a7b; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper unifiedProfileBackgroundColor] */

void FUN_106626a78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c23bb10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIColor_1126aea70,PTR_s_sig_color_withThemedColor__11266c8e8,0x21,
             0xd6);
  return;
}



/* Entry: 106626a7c; end: 106626b4f; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper overlayGradientColors] */

undefined1  [16]
FUN_106626a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0xd6);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
  puStack_48 = puVar2;
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_4,0xd4);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar3;
  _objc_retainAutorelease();
  func_0x00010bdc0fe0();
  puVar4 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_40 = puVar2;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_4,&puStack_48,2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar3);
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
    auVar5._8_8_ = param_2;
    auVar5._0_8_ = param_1;
    return auVar5;
  }
  ___stack_chk_fail();
  return ZEXT816(0x3fe0000000000000);
}



/* Entry: 106626b50; end: 106626b5b; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper overlayGradientStartPoint] */

undefined1  [16] FUN_106626b50(void)

{
  return ZEXT816(0x3fe0000000000000);
}



/* Entry: 106626b5c; end: 106626b67; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper overlayGradientEndPoint] */

undefined1  [16] FUN_106626b5c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x3ff0000000000000;
  auVar1._0_8_ = 0x3fe0000000000000;
  return auVar1;
}



/* Entry: 106626b68; end: 106626b6f; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper overlayGradientOpacity] */

undefined8 FUN_106626b68(void)

{
  return 0x3f800000;
}



/* Entry: 106626b70; end: 106626bf3; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper updatedTransparentSectionHeightFromCurrent:withAttribute:transparentSectionCount:] */

double FUN_106626b70(double param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  double dVar3;
  
  dVar3 = param_1;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bfecf20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1554e0();
  _objc_release(lVar1);
  if (lVar2 < param_5) {
    func_0x00010bfb68e0(param_4);
    _CGRectGetHeight();
    param_1 = param_1 + dVar3;
  }
  _objc_release(param_4);
  return param_1;
}



/* Entry: 106626bf4; end: 106626c93; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper applyFlatCornerOffscreenFallbackForAttributes:itemFrame:contentSize:] */

undefined8
FUN_106626bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  
  uVar1 = param_9;
  _objc_retain();
  _CGRectIsNull(param_1,param_2,param_3,param_4);
  if ((int)uVar1 != 0) {
    func_0x00010c19f0e0(0,param_6,param_5,0,param_9);
    func_0x00010c1677c0(0,param_9);
  }
  _objc_release(param_9);
  return uVar1;
}



/* Entry: 106626c94; end: 106626cf7; +[SCUnifiedProfileFlatlandBackgroundLayoutHelper applyFlatCornerZeroHeightFadeForAttributes:] */

bool FUN_106626c94(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _objc_retain(param_4);
  func_0x00010bfb68e0(param_4);
  _CGRectGetHeight();
  if (param_1 == 0.0) {
    func_0x00010c1677c0(0,param_4);
  }
  _objc_release(param_4);
  return param_1 == 0.0;
}



/* Entry: 106626cf8; end: 106626d07; -[SCUnifiedProfileFlatlandCollectionCellBackgroundCollectionViewLayoutAttributes firstVisibleSectionIndex] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106626cf8(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11274c5f8);
}


