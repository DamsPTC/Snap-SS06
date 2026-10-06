/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108f788c0; end: 108f7892b; -[SCUnifiedProfileViewMoreViewModel hash] */

undefined8 * FUN_108f788c0(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_30 = (ulong)*(byte *)(param_1 + 8);
  puVar2 = &uStack_38;
  uStack_38 = uVar1;
  func_0x000107c3191c(puVar2,2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar2;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar2 != param_3) {
    puVar4 = (undefined8 *)0x0;
    if ((puVar2 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f789b0;
    puVar4 = puVar2;
    _objc_opt_class(puVar2);
    puVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar4);
    if ((((ulong)puVar3 & 1) == 0) || (*(char *)(puVar2 + 1) != *(char *)(param_3 + 1))) {
      puVar4 = (undefined8 *)0x0;
      goto LAB_108f789b0;
    }
    puVar4 = (undefined8 *)puVar2[2];
    if (puVar4 != (undefined8 *)param_3[2]) {
      func_0x00010c071ae0();
      goto LAB_108f789b0;
    }
  }
  puVar4 = (undefined8 *)0x1;
LAB_108f789b0:
  _objc_release(param_3);
  return puVar4;
}



/* Entry: 108f7892c; end: 108f789cb; -[SCUnifiedProfileViewMoreViewModel isEqual:] */

long FUN_108f7892c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f789b0;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 8) != *(char *)(param_3 + 8))) {
      lVar3 = 0;
      goto LAB_108f789b0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    if (lVar3 != *(long *)(param_3 + 0x10)) {
      func_0x00010c071ae0();
      goto LAB_108f789b0;
    }
  }
  lVar3 = 1;
LAB_108f789b0:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f789cc; end: 108f789d3; -[SCUnifiedProfileViewMoreViewModel labelText] */

undefined8 FUN_108f789cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f789d4; end: 108f789db; -[SCUnifiedProfileViewMoreViewModel isLoading] */

undefined1 FUN_108f789d4(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 108f789dc; end: 108f789e7; -[SCUnifiedProfileViewMoreViewModel .cxx_destruct] */

void FUN_108f789dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f789e8; end: 108f78a93; -[SCUnifiedProfileCustomActionViewMoreCollectionViewModel initWithLabelText:tapActionModel:] */

undefined1 *
FUN_108f789e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff750;
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



/* Entry: 108f78a94; end: 108f78ab7; -[SCUnifiedProfileCustomActionViewMoreCollectionViewModel copyWithZone:] */

undefined8 FUN_108f78a94(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f78ab8; end: 108f78b2b; -[SCUnifiedProfileCustomActionViewMoreCollectionViewModel hash] */

undefined8 * FUN_108f78ab8(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_108f78bac:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f78bb8;
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
          goto LAB_108f78bb8;
        }
        goto LAB_108f78bac;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f78bb8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f78b2c; end: 108f78bd3; -[SCUnifiedProfileCustomActionViewMoreCollectionViewModel isEqual:] */

long FUN_108f78b2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f78bac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f78bb8;
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
          goto LAB_108f78bb8;
        }
        goto LAB_108f78bac;
      }
    }
    lVar3 = 0;
  }
LAB_108f78bb8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f78bd4; end: 108f78bdb; -[SCUnifiedProfileCustomActionViewMoreCollectionViewModel labelText] */

undefined8 FUN_108f78bd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f78bdc; end: 108f78be3; -[SCUnifiedProfileCustomActionViewMoreCollectionViewModel tapActionModel] */

undefined8 FUN_108f78bdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f78be4; end: 108f78c13; -[SCUnifiedProfileCustomActionViewMoreCollectionViewModel .cxx_destruct] */

void FUN_108f78be4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f78c14; end: 108f78ceb; -[SCUnifiedProfileHeaderViewModel initWithDisplayTitleViewModel:iconButtonViewModel:shareButtonViewModel:] */

undefined1 *
FUN_108f78c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126ff758;
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



/* Entry: 108f78cec; end: 108f78d0f; -[SCUnifiedProfileHeaderViewModel copyWithZone:] */

undefined8 FUN_108f78cec(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f78d10; end: 108f78d8f; -[SCUnifiedProfileHeaderViewModel hash] */

undefined8 * FUN_108f78d10(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_108f78e28:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f78e34;
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
            goto LAB_108f78e34;
          }
          goto LAB_108f78e28;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108f78e34:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108f78d90; end: 108f78e4f; -[SCUnifiedProfileHeaderViewModel isEqual:] */

long FUN_108f78d90(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f78e28:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f78e34;
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
            goto LAB_108f78e34;
          }
          goto LAB_108f78e28;
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f78e34:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f78e50; end: 108f78e57; -[SCUnifiedProfileHeaderViewModel displayTitleViewModel] */

undefined8 FUN_108f78e50(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f78e58; end: 108f78e5f; -[SCUnifiedProfileHeaderViewModel iconButtonViewModel] */

undefined8 FUN_108f78e58(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f78e60; end: 108f78e67; -[SCUnifiedProfileHeaderViewModel shareButtonViewModel] */

undefined8 FUN_108f78e60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f78e68; end: 108f78ea3; -[SCUnifiedProfileHeaderViewModel .cxx_destruct] */

void FUN_108f78e68(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f78ea4; end: 108f78fb7; -[SCUnifiedProfileIconButtonViewModel initWithImage:imageAssetName:tapActionModel:accessibilityIdentifier:tooltipType:] */

undefined1 *
FUN_108f78ea4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126ff760;
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
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 108f78fb8; end: 108f78fdb; -[SCUnifiedProfileIconButtonViewModel copyWithZone:] */

undefined8 FUN_108f78fb8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f78fdc; end: 108f79073; -[SCUnifiedProfileIconButtonViewModel hash] */

undefined8 * FUN_108f78fdc(long param_1,undefined8 param_2,undefined1 *param_3)

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
LAB_108f79134:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_108f79140;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x28) == *(long *)(param_3 + 0x28)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x10);
        if ((lVar5 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x18);
          if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x20);
            if (puVar6 != *(undefined1 **)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_108f79140;
            }
            goto LAB_108f79134;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_108f79140:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 108f79074; end: 108f7915b; -[SCUnifiedProfileIconButtonViewModel isEqual:] */

long FUN_108f79074(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f79134:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f79140;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x28) == *(long *)(param_3 + 0x28))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x18);
          if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x20);
            if (lVar3 != *(long *)(param_3 + 0x20)) {
              func_0x00010c071ae0();
              goto LAB_108f79140;
            }
            goto LAB_108f79134;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_108f79140:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f7915c; end: 108f79163; -[SCUnifiedProfileIconButtonViewModel image] */

undefined8 FUN_108f7915c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f79164; end: 108f7916b; -[SCUnifiedProfileIconButtonViewModel imageAssetName] */

undefined8 FUN_108f79164(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f7916c; end: 108f79173; -[SCUnifiedProfileIconButtonViewModel tapActionModel] */

undefined8 FUN_108f7916c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 108f79174; end: 108f7917b; -[SCUnifiedProfileIconButtonViewModel accessibilityIdentifier] */

undefined8 FUN_108f79174(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 108f7917c; end: 108f79183; -[SCUnifiedProfileIconButtonViewModel tooltipType] */

undefined8 FUN_108f7917c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 108f79184; end: 108f791cb; -[SCUnifiedProfileIconButtonViewModel .cxx_destruct] */

void FUN_108f79184(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f791cc; end: 108f79277; -[SCUnifiedProfileBadgeViewModel initWithBadgeAttributedText:backgroundColor:] */

undefined1 *
FUN_108f791cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff768;
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



/* Entry: 108f79278; end: 108f7929b; -[SCUnifiedProfileBadgeViewModel copyWithZone:] */

undefined8 FUN_108f79278(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f7929c; end: 108f7930f; -[SCUnifiedProfileBadgeViewModel hash] */

undefined8 * FUN_108f7929c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_108f79390:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f7939c;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if (((ulong)puVar4 & 1) != 0) {
      lVar5 = puVar3[1];
      if ((lVar5 == param_3[1]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        puVar6 = (undefined8 *)puVar3[2];
        if (puVar6 != (undefined8 *)param_3[2]) {
          func_0x00010c071c60();
          goto LAB_108f7939c;
        }
        goto LAB_108f79390;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f7939c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f79310; end: 108f793b7; -[SCUnifiedProfileBadgeViewModel isEqual:] */

long FUN_108f79310(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f79390:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f7939c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x10);
        if (lVar3 != *(long *)(param_3 + 0x10)) {
          func_0x00010c071c60();
          goto LAB_108f7939c;
        }
        goto LAB_108f79390;
      }
    }
    lVar3 = 0;
  }
LAB_108f7939c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f793b8; end: 108f793bf; -[SCUnifiedProfileBadgeViewModel badgeAttributedText] */

undefined8 FUN_108f793b8(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f793c0; end: 108f793c7; -[SCUnifiedProfileBadgeViewModel backgroundColor] */

undefined8 FUN_108f793c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f793c8; end: 108f793f7; -[SCUnifiedProfileBadgeViewModel .cxx_destruct] */

void FUN_108f793c8(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f793f8; end: 108f795d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108f793f8(undefined8 param_1,undefined8 param_2,double param_3,undefined **param_4,
             undefined8 param_5)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined **ppuVar9;
  ulong uVar10;
  long lVar11;
  ulong unaff_x24;
  long lVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined **unaff_x25;
  ulong uVar15;
  undefined **unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  double dVar16;
  undefined8 uVar17;
  double dVar18;
  undefined8 unaff_d9;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined8 uStack_6d0;
  undefined8 *puStack_6c8;
  undefined8 uStack_6c0;
  code *pcStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  long lStack_698;
  long *plStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  long lStack_658;
  long *plStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  long *plStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  long lStack_460;
  undefined8 uStack_450;
  double dStack_448;
  undefined **ppuStack_440;
  undefined **ppuStack_438;
  undefined **ppuStack_430;
  undefined **ppuStack_428;
  ulong uStack_420;
  undefined **ppuStack_418;
  undefined **ppuStack_410;
  undefined **ppuStack_408;
  undefined **ppuStack_400;
  undefined **ppuStack_3f8;
  undefined1 ***pppuStack_3f0;
  code *pcStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
  ulong *puStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  long lStack_320;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined **ppuStack_258;
  undefined *puStack_250;
  long lStack_1c8;
  undefined1 *puStack_150;
  code *pcStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong *puStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(param_5);
  ppuVar1 = (undefined **)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar7 = 0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  puStack_130 = (ulong *)0x0;
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  _objc_retain(param_4);
  ppuVar9 = param_4;
  func_0x00010bf52a60();
  if (ppuVar9 != (undefined **)0x0) {
    unaff_x24 = *puStack_130;
    unaff_x25 = &PTR_PTR_1126c7000;
    do {
      unaff_x26 = (undefined **)0x0;
      do {
        if (*puStack_130 != unaff_x24) {
          _objc_enumerationMutation(param_4);
        }
        func_0x00010befa120(ppuVar1);
        ppuVar13 = param_4;
        func_0x00010bfecde0();
        ppuVar2 = param_4;
        func_0x00010bf529e0();
        if (ppuVar13 != (undefined **)((long)ppuVar2 + -1)) {
          puVar3 = PTR_PTR_1126c7300;
          uVar7 = param_1;
          func_0x00010c15e500(param_1,PTR_PTR_1126c7300);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(ppuVar1);
          _objc_release(puVar3);
        }
        unaff_x26 = (undefined **)((long)unaff_x26 + 1);
      } while (ppuVar9 != unaff_x26);
      ppuVar9 = param_4;
      func_0x00010bf52a60();
    } while (ppuVar9 != (undefined **)0x0);
  }
  _objc_release(param_4);
  ppuVar9 = (undefined **)PTR_PTR_1126c72f8;
  _objc_alloc();
  ppuVar13 = ppuVar1;
  func_0x00010bf51e00();
  func_0x00010c044860();
  _objc_release(ppuVar13);
  _objc_release(ppuVar1);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_78) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar9);
    auVar23._8_8_ = param_2;
    auVar23._0_8_ = uVar7;
    return auVar23;
  }
  ___stack_chk_fail();
  pcStack_148 = FUN_108f795d4;
  lStack_1c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_250 = PTR_PTR_1126ff770;
  ppuStack_258 = param_4;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&ppuStack_258,PTR_s_layoutSubviews_112600e60);
  ppuVar2 = param_4;
  func_0x00010be19160();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  puStack_290 = (undefined8 *)0x0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  ppuVar1 = param_4;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  ppuVar4 = ppuVar1;
  func_0x00010bf52a60();
  if (ppuVar4 != (undefined **)0x0) {
    ppuVar9 = (undefined **)0x0;
    unaff_x26 = (undefined **)*puStack_290;
    do {
      unaff_x27 = (undefined **)0x0;
      do {
        uVar14 = uVar7;
        uVar17 = param_2;
        if ((undefined **)*puStack_290 != unaff_x26) {
          _objc_enumerationMutation(ppuVar1);
          uVar14 = uVar7;
          uVar17 = param_2;
        }
        unaff_x24 = *(ulong *)(lStack_298 + (long)unaff_x27 * 8);
        uVar8 = unaff_x24;
        func_0x00010c074c20();
        uVar7 = uVar14;
        param_2 = uVar17;
        if ((uVar8 & 1) == 0) {
          unaff_x25 = ppuVar2;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc1080();
          _objc_release(unaff_x25);
          uVar7 = uVar14;
          param_2 = uVar17;
          func_0x00010b8166f8(param_4);
          func_0x00010c19f0e0(unaff_x24);
          ppuVar9 = (undefined **)((long)ppuVar9 + 1);
          param_1 = uVar14;
          unaff_d9 = uVar17;
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar4 != unaff_x27);
      ppuVar4 = ppuVar1;
      func_0x00010bf52a60();
      ppuVar13 = (undefined **)0x0;
    } while (ppuVar4 != (undefined **)0x0);
  }
  _objc_release(ppuVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c8) {
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = uVar7;
    return auVar19;
  }
  ___stack_chk_fail();
  pcStack_2a8 = FUN_108f79788;
  lStack_320 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar18 = *(double *)PTR__CGSizeZero_110347620;
  dVar16 = 0.0;
  lStack_3d8 = 0;
  uStack_3e0 = 0;
  uStack_3c8 = 0;
  puStack_3d0 = (ulong *)0x0;
  uStack_3b8 = 0;
  uStack_3c0 = 0;
  uStack_3a8 = 0;
  uStack_3b0 = 0;
  ppuVar4 = ppuVar2;
  uStack_310 = unaff_d9;
  uStack_308 = param_1;
  ppuStack_2b0 = &puStack_150;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  ppuVar5 = ppuVar4;
  func_0x00010bf52a60();
  if (ppuVar5 != (undefined **)0x0) {
    unaff_x24 = *puStack_3d0;
    unaff_x25 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    unaff_x26 = (undefined **)0x7fefffffffffffff;
    do {
      unaff_x27 = (undefined **)0x0;
      do {
        if (*puStack_3d0 != unaff_x24) {
          _objc_enumerationMutation(ppuVar4);
        }
        uVar10 = *(ulong *)(lStack_3d8 + (long)unaff_x27 * 8);
        puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_opt_class(PTR__OBJC_CLASS___UIImageView_1126aec28);
        uVar8 = uVar10;
        _objc_opt_isKindOfClass(uVar10,puVar3);
        if ((uVar8 & 1) == 0) {
          dVar16 = 1.79769313486232e+308;
          param_2 = 0x7fefffffffffffff;
          func_0x00010c23d5a0(0x7fefffffffffffff,0x7fefffffffffffff,uVar10);
        }
        else {
          dVar16 = param_3;
          func_0x00010bfb68e0(uVar10);
          param_3 = dVar16;
        }
        dVar18 = dVar18 + dVar16;
        ppuVar1 = ppuVar2;
        func_0x00010c261580();
        _objc_retainAutoreleasedReturnValue();
        ppuVar9 = ppuVar1;
        func_0x00010bfecde0();
        _objc_release(ppuVar1);
        ppuVar13 = ppuVar2;
        func_0x00010c261580();
        _objc_retainAutoreleasedReturnValue();
        ppuVar1 = ppuVar13;
        func_0x00010bf529e0();
        unaff_x28 = (undefined **)((long)ppuVar1 + -1);
        _objc_release(ppuVar13);
        if (ppuVar9 != unaff_x28) {
          func_0x00010bebe820(ppuVar2);
          dVar18 = dVar18 + dVar16;
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar5 != unaff_x27);
      ppuVar5 = ppuVar4;
      func_0x00010bf52a60();
      ppuVar1 = (undefined **)0x0;
    } while (ppuVar5 != (undefined **)0x0);
  }
  _objc_release(ppuVar4);
  ppuVar5 = ppuVar2;
  _objc_opt_class();
  uVar8 = *(ulong *)((long)ppuVar2 + (long)_DAT_11277e6c0);
  func_0x00010bfe0a60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_320) {
    auVar20._8_8_ = dVar16;
    auVar20._0_8_ = dVar18;
    return auVar20;
  }
  ___stack_chk_fail();
  pcStack_3e8 = FUN_108f79964;
  lStack_460 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_450 = unaff_d9;
  dStack_448 = dVar18;
  ppuStack_440 = unaff_x28;
  ppuStack_438 = unaff_x27;
  ppuStack_430 = unaff_x26;
  ppuStack_428 = unaff_x25;
  uStack_420 = unaff_x24;
  ppuStack_418 = ppuVar13;
  ppuStack_410 = ppuVar9;
  ppuStack_408 = ppuVar1;
  ppuStack_400 = ppuVar4;
  ppuStack_3f8 = ppuVar2;
  pppuStack_3f0 = &ppuStack_2b0;
  _objc_retain(uVar8);
  lVar11 = (long)_DAT_11277e6c0;
  uVar10 = *(ulong *)((long)ppuVar5 + lVar11);
  _objc_retain(uVar8);
  _objc_retain(uVar10);
  if (uVar8 == uVar10) {
    _objc_release(uVar10);
    _objc_release(uVar8);
  }
  else {
    if (uVar10 == 0) {
      _objc_release();
    }
    else {
      uVar6 = uVar8;
      func_0x00010c071ae0();
      _objc_release(uVar10);
      _objc_release(uVar8);
      if ((uVar6 & 1) != 0) goto LAB_108f79d70;
    }
    uStack_5f8 = 0;
    uStack_600 = 0;
    uStack_5e8 = 0;
    uStack_5f0 = 0;
    uStack_618 = 0;
    uStack_620 = 0;
    uStack_608 = 0;
    plStack_610 = (long *)0x0;
    uVar6 = uVar8;
    func_0x00010bf445c0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar6;
    func_0x00010bf52a60();
    if (uVar10 != 0) {
      lVar12 = *plStack_610;
      do {
        if (*plStack_610 != lVar12) {
          _objc_enumerationMutation(uVar6);
        }
        uVar10 = uVar10 - 1;
      } while ((uVar10 != 0) || (uVar10 = uVar6, func_0x00010bf52a60(), uVar10 != 0));
    }
    _objc_release(uVar6);
    _objc_retain(uVar8);
    uVar7 = *(undefined8 *)((long)ppuVar5 + lVar11);
    *(ulong *)((long)ppuVar5 + lVar11) = uVar8;
    _objc_release(uVar7);
    dVar16 = 0.0;
    uStack_638 = 0;
    uStack_640 = 0;
    uStack_628 = 0;
    uStack_630 = 0;
    lStack_658 = 0;
    uStack_660 = 0;
    uStack_648 = 0;
    plStack_650 = (long *)0x0;
    ppuVar1 = ppuVar5;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    ppuVar9 = ppuVar1;
    func_0x00010bf52a60();
    if (ppuVar9 != (undefined **)0x0) {
      lVar11 = *plStack_650;
      do {
        ppuVar13 = (undefined **)0x0;
        do {
          if (*plStack_650 != lVar11) {
            _objc_enumerationMutation(ppuVar1);
          }
          func_0x00010c12c960(*(undefined8 *)(lStack_658 + (long)ppuVar13 * 8));
          ppuVar13 = (undefined **)((long)ppuVar13 + 1);
        } while (ppuVar9 != ppuVar13);
        ppuVar9 = ppuVar1;
        func_0x00010bf52a60();
      } while (ppuVar9 != (undefined **)0x0);
    }
    _objc_release(ppuVar1);
    uVar10 = uVar8;
    func_0x00010bf445c0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar10;
    func_0x00010bf529e0();
    _objc_release(uVar10);
    if (uVar6 != 0) {
      dVar16 = 0.0;
      uStack_678 = 0;
      uStack_680 = 0;
      uStack_668 = 0;
      uStack_670 = 0;
      lStack_698 = 0;
      uStack_6a0 = 0;
      uStack_688 = 0;
      plStack_690 = (long *)0x0;
      uVar10 = uVar8;
      func_0x00010bf445c0();
      _objc_retainAutoreleasedReturnValue();
      uVar6 = uVar10;
      func_0x00010bf52a60();
      uVar7 = 0;
      if (uVar6 != 0) {
        lVar11 = *plStack_690;
        do {
          uVar15 = 0;
          uVar14 = uVar7;
          do {
            if (*plStack_690 != lVar11) {
              _objc_enumerationMutation(uVar10);
            }
            uVar7 = *(undefined8 *)(lStack_698 + uVar15 * 8);
            uStack_6d0 = 0;
            uStack_6c0 = 0x3032000000;
            pcStack_6b8 = FUN_108f79dd8;
            uStack_6b0 = 0x108f79de8;
            puStack_6c8 = &uStack_6d0;
            _objc_retain(uVar14);
            uStack_6a8 = uVar14;
            _objc_retain(uVar8);
            _objc_retain(uVar14);
            func_0x00010c0c0c00(uVar7);
            uVar7 = puStack_6c8[5];
            _objc_retain(uVar7);
            _objc_release(uVar14);
            _objc_release(uVar14);
            _objc_release(uVar8);
            __Block_object_dispose(&uStack_6d0,8);
            _objc_release(uStack_6a8);
            uVar15 = uVar15 + 1;
            uVar14 = uVar7;
          } while (uVar6 != uVar15);
          uVar6 = uVar10;
          func_0x00010bf52a60();
        } while (uVar6 != 0);
      }
      _objc_release(uVar10);
      func_0x00010c1cbe20(ppuVar5);
      _objc_release(uVar7);
    }
  }
LAB_108f79d70:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_460) {
    ___stack_chk_fail();
    lVar11 = 8;
    __Block_object_dispose(&uStack_6d0);
    __Unwind_Resume();
    *(undefined8 *)(uVar8 + 0x28) = *(undefined8 *)(lVar11 + 0x28);
    *(undefined8 *)(lVar11 + 0x28) = 0;
    auVar22._8_8_ = param_2;
    auVar22._0_8_ = dVar16;
    return auVar22;
  }
  auVar21._8_8_ = param_2;
  auVar21._0_8_ = dVar16;
  return auVar21;
}



/* Entry: 108f795d4; end: 108f79787; -[SCUnifiedSplitTextView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_108f795d4(undefined8 param_1,undefined8 param_2,double param_3,undefined **param_4)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined **unaff_x22;
  ulong uVar8;
  undefined **unaff_x23;
  long lVar9;
  ulong unaff_x24;
  long lVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined **unaff_x25;
  ulong uVar13;
  long unaff_x26;
  undefined **unaff_x27;
  undefined **unaff_x28;
  double dVar14;
  undefined8 uVar15;
  undefined8 unaff_d8;
  double dVar16;
  undefined8 unaff_d9;
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_590;
  undefined8 *puStack_588;
  undefined8 uStack_580;
  code *pcStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  long lStack_558;
  long *plStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long lStack_518;
  long *plStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  long *plStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  long lStack_320;
  undefined8 uStack_310;
  double dStack_308;
  undefined **ppuStack_300;
  undefined **ppuStack_2f8;
  long lStack_2f0;
  undefined **ppuStack_2e8;
  ulong uStack_2e0;
  undefined **ppuStack_2d8;
  undefined **ppuStack_2d0;
  undefined **ppuStack_2c8;
  undefined **ppuStack_2c0;
  undefined **ppuStack_2b8;
  undefined1 **ppuStack_2b0;
  code *pcStack_2a8;
  undefined8 uStack_2a0;
  long lStack_298;
  ulong *puStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  long lStack_1e0;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined1 *puStack_170;
  code *pcStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined **ppuStack_118;
  undefined *puStack_110;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_110 = PTR_PTR_1126ff770;
  ppuStack_118 = param_4;
  _objc_msgSendSuper2(&ppuStack_118,PTR_s_layoutSubviews_112600e60);
  ppuVar1 = param_4;
  func_0x00010be19160();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = 0;
  lStack_158 = 0;
  uStack_160 = 0;
  uStack_148 = 0;
  plStack_150 = (long *)0x0;
  uStack_138 = 0;
  uStack_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  ppuVar2 = param_4;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  ppuVar11 = ppuVar2;
  func_0x00010bf52a60();
  if (ppuVar11 != (undefined **)0x0) {
    unaff_x22 = (undefined **)0x0;
    unaff_x26 = *plStack_150;
    do {
      unaff_x27 = (undefined **)0x0;
      do {
        uVar12 = uVar6;
        uVar15 = param_2;
        if (*plStack_150 != unaff_x26) {
          _objc_enumerationMutation(ppuVar2);
          uVar12 = uVar6;
          uVar15 = param_2;
        }
        unaff_x24 = *(ulong *)(lStack_158 + (long)unaff_x27 * 8);
        uVar7 = unaff_x24;
        func_0x00010c074c20();
        uVar6 = uVar12;
        param_2 = uVar15;
        if ((uVar7 & 1) == 0) {
          unaff_x25 = ppuVar1;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc1080();
          _objc_release(unaff_x25);
          uVar6 = uVar12;
          param_2 = uVar15;
          func_0x00010b8166f8(param_4);
          func_0x00010c19f0e0(unaff_x24);
          unaff_x22 = (undefined **)((long)unaff_x22 + 1);
          unaff_d8 = uVar12;
          unaff_d9 = uVar15;
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar11 != unaff_x27);
      ppuVar11 = ppuVar2;
      func_0x00010bf52a60();
      unaff_x23 = (undefined **)0x0;
    } while (ppuVar11 != (undefined **)0x0);
  }
  _objc_release(ppuVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    auVar17._8_8_ = param_2;
    auVar17._0_8_ = uVar6;
    return auVar17;
  }
  ___stack_chk_fail();
  pcStack_168 = FUN_108f79788;
  lStack_1e0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar16 = *(double *)PTR__CGSizeZero_110347620;
  dVar14 = 0.0;
  lStack_298 = 0;
  uStack_2a0 = 0;
  uStack_288 = 0;
  puStack_290 = (ulong *)0x0;
  uStack_278 = 0;
  uStack_280 = 0;
  uStack_268 = 0;
  uStack_270 = 0;
  ppuVar11 = ppuVar1;
  uStack_1d0 = unaff_d9;
  uStack_1c8 = unaff_d8;
  puStack_170 = &stack0xfffffffffffffff0;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  ppuVar3 = ppuVar11;
  func_0x00010bf52a60();
  if (ppuVar3 != (undefined **)0x0) {
    unaff_x24 = *puStack_290;
    unaff_x25 = &PTR__OBJC_CLASS___SKPaymentTransaction_1126ae000;
    unaff_x26 = 0x7fefffffffffffff;
    do {
      unaff_x27 = (undefined **)0x0;
      do {
        if (*puStack_290 != unaff_x24) {
          _objc_enumerationMutation(ppuVar11);
        }
        uVar8 = *(ulong *)(lStack_298 + (long)unaff_x27 * 8);
        puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
        _objc_opt_class(PTR__OBJC_CLASS___UIImageView_1126aec28);
        uVar7 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar4);
        if ((uVar7 & 1) == 0) {
          dVar14 = 1.79769313486232e+308;
          param_2 = 0x7fefffffffffffff;
          func_0x00010c23d5a0(0x7fefffffffffffff,0x7fefffffffffffff,uVar8);
        }
        else {
          dVar14 = param_3;
          func_0x00010bfb68e0(uVar8);
          param_3 = dVar14;
        }
        dVar16 = dVar16 + dVar14;
        ppuVar2 = ppuVar1;
        func_0x00010c261580();
        _objc_retainAutoreleasedReturnValue();
        unaff_x22 = ppuVar2;
        func_0x00010bfecde0();
        _objc_release(ppuVar2);
        unaff_x23 = ppuVar1;
        func_0x00010c261580();
        _objc_retainAutoreleasedReturnValue();
        ppuVar2 = unaff_x23;
        func_0x00010bf529e0();
        unaff_x28 = (undefined **)((long)ppuVar2 + -1);
        _objc_release(unaff_x23);
        if (unaff_x22 != unaff_x28) {
          func_0x00010bebe820(ppuVar1);
          dVar16 = dVar16 + dVar14;
        }
        unaff_x27 = (undefined **)((long)unaff_x27 + 1);
      } while (ppuVar3 != unaff_x27);
      ppuVar3 = ppuVar11;
      func_0x00010bf52a60();
      ppuVar2 = (undefined **)0x0;
    } while (ppuVar3 != (undefined **)0x0);
  }
  _objc_release(ppuVar11);
  ppuVar3 = ppuVar1;
  _objc_opt_class();
  uVar7 = *(ulong *)((long)ppuVar1 + (long)_DAT_11277e6c0);
  func_0x00010bfe0a60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1e0) {
    auVar18._8_8_ = dVar14;
    auVar18._0_8_ = dVar16;
    return auVar18;
  }
  ___stack_chk_fail();
  pcStack_2a8 = FUN_108f79964;
  lStack_320 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_310 = unaff_d9;
  dStack_308 = dVar16;
  ppuStack_300 = unaff_x28;
  ppuStack_2f8 = unaff_x27;
  lStack_2f0 = unaff_x26;
  ppuStack_2e8 = unaff_x25;
  uStack_2e0 = unaff_x24;
  ppuStack_2d8 = unaff_x23;
  ppuStack_2d0 = unaff_x22;
  ppuStack_2c8 = ppuVar2;
  ppuStack_2c0 = ppuVar11;
  ppuStack_2b8 = ppuVar1;
  ppuStack_2b0 = &puStack_170;
  _objc_retain(uVar7);
  lVar9 = (long)_DAT_11277e6c0;
  uVar8 = *(ulong *)((long)ppuVar3 + lVar9);
  _objc_retain(uVar7);
  _objc_retain(uVar8);
  if (uVar7 == uVar8) {
    _objc_release(uVar8);
    _objc_release(uVar7);
  }
  else {
    if (uVar8 == 0) {
      _objc_release();
    }
    else {
      uVar5 = uVar7;
      func_0x00010c071ae0();
      _objc_release(uVar8);
      _objc_release(uVar7);
      if ((uVar5 & 1) != 0) goto LAB_108f79d70;
    }
    uStack_4b8 = 0;
    uStack_4c0 = 0;
    uStack_4a8 = 0;
    uStack_4b0 = 0;
    uStack_4d8 = 0;
    uStack_4e0 = 0;
    uStack_4c8 = 0;
    plStack_4d0 = (long *)0x0;
    uVar5 = uVar7;
    func_0x00010bf445c0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar5;
    func_0x00010bf52a60();
    if (uVar8 != 0) {
      lVar10 = *plStack_4d0;
      do {
        if (*plStack_4d0 != lVar10) {
          _objc_enumerationMutation(uVar5);
        }
        uVar8 = uVar8 - 1;
      } while ((uVar8 != 0) || (uVar8 = uVar5, func_0x00010bf52a60(), uVar8 != 0));
    }
    _objc_release(uVar5);
    _objc_retain(uVar7);
    uVar6 = *(undefined8 *)((long)ppuVar3 + lVar9);
    *(ulong *)((long)ppuVar3 + lVar9) = uVar7;
    _objc_release(uVar6);
    dVar14 = 0.0;
    uStack_4f8 = 0;
    uStack_500 = 0;
    uStack_4e8 = 0;
    uStack_4f0 = 0;
    lStack_518 = 0;
    uStack_520 = 0;
    uStack_508 = 0;
    plStack_510 = (long *)0x0;
    ppuVar2 = ppuVar3;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    ppuVar1 = ppuVar2;
    func_0x00010bf52a60();
    if (ppuVar1 != (undefined **)0x0) {
      lVar9 = *plStack_510;
      do {
        ppuVar11 = (undefined **)0x0;
        do {
          if (*plStack_510 != lVar9) {
            _objc_enumerationMutation(ppuVar2);
          }
          func_0x00010c12c960(*(undefined8 *)(lStack_518 + (long)ppuVar11 * 8));
          ppuVar11 = (undefined **)((long)ppuVar11 + 1);
        } while (ppuVar1 != ppuVar11);
        ppuVar1 = ppuVar2;
        func_0x00010bf52a60();
      } while (ppuVar1 != (undefined **)0x0);
    }
    _objc_release(ppuVar2);
    uVar8 = uVar7;
    func_0x00010bf445c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar8;
    func_0x00010bf529e0();
    _objc_release(uVar8);
    if (uVar5 != 0) {
      dVar14 = 0.0;
      uStack_538 = 0;
      uStack_540 = 0;
      uStack_528 = 0;
      uStack_530 = 0;
      lStack_558 = 0;
      uStack_560 = 0;
      uStack_548 = 0;
      plStack_550 = (long *)0x0;
      uVar8 = uVar7;
      func_0x00010bf445c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar8;
      func_0x00010bf52a60();
      uVar6 = 0;
      if (uVar5 != 0) {
        lVar9 = *plStack_550;
        do {
          uVar13 = 0;
          uVar12 = uVar6;
          do {
            if (*plStack_550 != lVar9) {
              _objc_enumerationMutation(uVar8);
            }
            uVar6 = *(undefined8 *)(lStack_558 + uVar13 * 8);
            uStack_590 = 0;
            uStack_580 = 0x3032000000;
            pcStack_578 = FUN_108f79dd8;
            uStack_570 = 0x108f79de8;
            puStack_588 = &uStack_590;
            _objc_retain(uVar12);
            uStack_568 = uVar12;
            _objc_retain(uVar7);
            _objc_retain(uVar12);
            func_0x00010c0c0c00(uVar6);
            uVar6 = puStack_588[5];
            _objc_retain(uVar6);
            _objc_release(uVar12);
            _objc_release(uVar12);
            _objc_release(uVar7);
            __Block_object_dispose(&uStack_590,8);
            _objc_release(uStack_568);
            uVar13 = uVar13 + 1;
            uVar12 = uVar6;
          } while (uVar5 != uVar13);
          uVar5 = uVar8;
          func_0x00010bf52a60();
        } while (uVar5 != 0);
      }
      _objc_release(uVar8);
      func_0x00010c1cbe20(ppuVar3);
      _objc_release(uVar6);
    }
  }
LAB_108f79d70:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_320) {
    ___stack_chk_fail();
    lVar9 = 8;
    __Block_object_dispose(&uStack_590);
    __Unwind_Resume();
    *(undefined8 *)(uVar7 + 0x28) = *(undefined8 *)(lVar9 + 0x28);
    *(undefined8 *)(lVar9 + 0x28) = 0;
    auVar20._8_8_ = param_2;
    auVar20._0_8_ = dVar14;
    return auVar20;
  }
  auVar19._8_8_ = param_2;
  auVar19._0_8_ = dVar14;
  return auVar19;
}



/* Entry: 108f79788; end: 108f79963; -[SCUnifiedSplitTextView intrinsicContentSize] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_108f79788(undefined8 param_1,undefined8 param_2,double param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  double dVar16;
  double dVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined8 uStack_430;
  undefined8 *puStack_428;
  undefined8 uStack_420;
  code *pcStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  long lStack_3f8;
  long *plStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  long lStack_3b8;
  long *plStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long *plStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  long lStack_1c0;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar17 = *(double *)PTR__CGSizeZero_110347620;
  dVar16 = 0.0;
  lVar12 = param_4;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar12;
  func_0x00010bf52a60();
  lVar11 = lRam0000000000000000;
  while (lVar7 != 0) {
    lVar15 = 0;
    do {
      if (lRam0000000000000000 != lVar11) {
        _objc_enumerationMutation(lVar12);
      }
      uVar10 = *(ulong *)(lVar15 * 8);
      puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
      _objc_opt_class(PTR__OBJC_CLASS___UIImageView_1126aec28);
      uVar8 = uVar10;
      _objc_opt_isKindOfClass(uVar10,puVar1);
      if ((uVar8 & 1) == 0) {
        dVar16 = 1.79769313486232e+308;
        param_2 = 0x7fefffffffffffff;
        func_0x00010c23d5a0(0x7fefffffffffffff,0x7fefffffffffffff,uVar10);
      }
      else {
        dVar16 = param_3;
        func_0x00010bfb68e0(uVar10);
        param_3 = dVar16;
      }
      dVar17 = dVar17 + dVar16;
      lVar2 = param_4;
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00010bfecde0();
      _objc_release(lVar2);
      lVar2 = param_4;
      func_0x00010c261580();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar2;
      func_0x00010bf529e0();
      _objc_release(lVar2);
      if (lVar3 != lVar4 + -1) {
        func_0x00010bebe820(param_4);
        dVar17 = dVar17 + dVar16;
      }
      lVar15 = lVar15 + 1;
    } while (lVar7 != lVar15);
    lVar7 = lVar12;
    func_0x00010bf52a60();
  }
  _objc_release(lVar12);
  lVar7 = param_4;
  _objc_opt_class();
  uVar8 = *(ulong *)(param_4 + _DAT_11277e6c0);
  func_0x00010bfe0a60();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    auVar18._8_8_ = dVar16;
    auVar18._0_8_ = dVar17;
    return auVar18;
  }
  ___stack_chk_fail();
  lStack_1c0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(uVar8);
  lVar11 = (long)_DAT_11277e6c0;
  uVar10 = *(ulong *)(lVar7 + lVar11);
  _objc_retain(uVar8);
  _objc_retain(uVar10);
  if (uVar8 == uVar10) {
    _objc_release(uVar10);
    _objc_release(uVar8);
  }
  else {
    if (uVar10 == 0) {
      _objc_release();
    }
    else {
      uVar5 = uVar8;
      func_0x00010c071ae0();
      _objc_release(uVar10);
      _objc_release(uVar8);
      if ((uVar5 & 1) != 0) goto LAB_108f79d70;
    }
    uStack_358 = 0;
    uStack_360 = 0;
    uStack_348 = 0;
    uStack_350 = 0;
    uStack_378 = 0;
    uStack_380 = 0;
    uStack_368 = 0;
    plStack_370 = (long *)0x0;
    uVar5 = uVar8;
    func_0x00010bf445c0();
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar5;
    func_0x00010bf52a60();
    if (uVar10 != 0) {
      lVar12 = *plStack_370;
      do {
        if (*plStack_370 != lVar12) {
          _objc_enumerationMutation(uVar5);
        }
        uVar10 = uVar10 - 1;
      } while ((uVar10 != 0) || (uVar10 = uVar5, func_0x00010bf52a60(), uVar10 != 0));
    }
    _objc_release(uVar5);
    _objc_retain(uVar8);
    uVar6 = *(undefined8 *)(lVar7 + lVar11);
    *(ulong *)(lVar7 + lVar11) = uVar8;
    _objc_release(uVar6);
    dVar16 = 0.0;
    uStack_398 = 0;
    uStack_3a0 = 0;
    uStack_388 = 0;
    uStack_390 = 0;
    lStack_3b8 = 0;
    uStack_3c0 = 0;
    uStack_3a8 = 0;
    plStack_3b0 = (long *)0x0;
    lVar11 = lVar7;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = lVar11;
    func_0x00010bf52a60();
    if (lVar12 != 0) {
      lVar9 = *plStack_3b0;
      do {
        lVar15 = 0;
        do {
          if (*plStack_3b0 != lVar9) {
            _objc_enumerationMutation(lVar11);
          }
          func_0x00010c12c960(*(undefined8 *)(lStack_3b8 + lVar15 * 8));
          lVar15 = lVar15 + 1;
        } while (lVar12 != lVar15);
        lVar12 = lVar11;
        func_0x00010bf52a60();
      } while (lVar12 != 0);
    }
    _objc_release(lVar11);
    uVar10 = uVar8;
    func_0x00010bf445c0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar10;
    func_0x00010bf529e0();
    _objc_release(uVar10);
    if (uVar5 != 0) {
      dVar16 = 0.0;
      uStack_3d8 = 0;
      uStack_3e0 = 0;
      uStack_3c8 = 0;
      uStack_3d0 = 0;
      lStack_3f8 = 0;
      uStack_400 = 0;
      uStack_3e8 = 0;
      plStack_3f0 = (long *)0x0;
      uVar10 = uVar8;
      func_0x00010bf445c0();
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar10;
      func_0x00010bf52a60();
      uVar6 = 0;
      if (uVar5 != 0) {
        lVar11 = *plStack_3f0;
        do {
          uVar14 = 0;
          uVar13 = uVar6;
          do {
            if (*plStack_3f0 != lVar11) {
              _objc_enumerationMutation(uVar10);
            }
            uVar6 = *(undefined8 *)(lStack_3f8 + uVar14 * 8);
            uStack_430 = 0;
            uStack_420 = 0x3032000000;
            pcStack_418 = FUN_108f79dd8;
            uStack_410 = 0x108f79de8;
            puStack_428 = &uStack_430;
            _objc_retain(uVar13);
            uStack_408 = uVar13;
            _objc_retain(uVar8);
            _objc_retain(uVar13);
            func_0x00010c0c0c00(uVar6);
            uVar6 = puStack_428[5];
            _objc_retain(uVar6);
            _objc_release(uVar13);
            _objc_release(uVar13);
            _objc_release(uVar8);
            __Block_object_dispose(&uStack_430,8);
            _objc_release(uStack_408);
            uVar14 = uVar14 + 1;
            uVar13 = uVar6;
          } while (uVar5 != uVar14);
          uVar5 = uVar10;
          func_0x00010bf52a60();
        } while (uVar5 != 0);
      }
      _objc_release(uVar10);
      func_0x00010c1cbe20(lVar7);
      _objc_release(uVar6);
    }
  }
LAB_108f79d70:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1c0) {
    auVar19._8_8_ = param_2;
    auVar19._0_8_ = dVar16;
    return auVar19;
  }
  ___stack_chk_fail();
  lVar7 = 8;
  __Block_object_dispose(&uStack_430);
  __Unwind_Resume();
  *(undefined8 *)(uVar8 + 0x28) = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  auVar20._8_8_ = param_2;
  auVar20._0_8_ = dVar16;
  return auVar20;
}



/* Entry: 108f79964; end: 108f79dd7; -[SCUnifiedSplitTextView setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f79964(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uStack_2f0;
  undefined8 *puStack_2e8;
  undefined8 uStack_2e0;
  code *pcStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
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
  undefined8 uStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar4 = (long)_DAT_11277e6c0;
  uVar3 = *(ulong *)(param_1 + lVar4);
  _objc_retain(param_3);
  _objc_retain(uVar3);
  if (param_3 == uVar3) {
    _objc_release(uVar3);
    _objc_release(param_3);
  }
  else {
    if (uVar3 == 0) {
      _objc_release();
    }
    else {
      uVar1 = param_3;
      func_0x00010c071ae0();
      _objc_release(uVar3);
      _objc_release(param_3);
      if ((uVar1 & 1) != 0) goto LAB_108f79d70;
    }
    uStack_218 = 0;
    uStack_220 = 0;
    uStack_208 = 0;
    uStack_210 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    uStack_228 = 0;
    plStack_230 = (long *)0x0;
    uVar1 = param_3;
    func_0x00010bf445c0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar1;
    func_0x00010bf52a60();
    if (uVar3 != 0) {
      lVar6 = *plStack_230;
      do {
        if (*plStack_230 != lVar6) {
          _objc_enumerationMutation(uVar1);
        }
        uVar3 = uVar3 - 1;
      } while ((uVar3 != 0) || (uVar3 = uVar1, func_0x00010bf52a60(), uVar3 != 0));
    }
    _objc_release(uVar1);
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(ulong *)(param_1 + lVar4) = param_3;
    _objc_release(uVar2);
    uStack_258 = 0;
    uStack_260 = 0;
    uStack_248 = 0;
    uStack_250 = 0;
    lStack_278 = 0;
    uStack_280 = 0;
    uStack_268 = 0;
    plStack_270 = (long *)0x0;
    lVar4 = param_1;
    func_0x00010c261580();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = lVar4;
    func_0x00010bf52a60();
    if (lVar6 != 0) {
      lVar5 = *plStack_270;
      do {
        lVar7 = 0;
        do {
          if (*plStack_270 != lVar5) {
            _objc_enumerationMutation(lVar4);
          }
          func_0x00010c12c960(*(undefined8 *)(lStack_278 + lVar7 * 8));
          lVar7 = lVar7 + 1;
        } while (lVar6 != lVar7);
        lVar6 = lVar4;
        func_0x00010bf52a60();
      } while (lVar6 != 0);
    }
    _objc_release(lVar4);
    uVar3 = param_3;
    func_0x00010bf445c0();
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uVar3;
    func_0x00010bf529e0();
    _objc_release(uVar3);
    if (uVar1 != 0) {
      uStack_298 = 0;
      uStack_2a0 = 0;
      uStack_288 = 0;
      uStack_290 = 0;
      lStack_2b8 = 0;
      uStack_2c0 = 0;
      uStack_2a8 = 0;
      plStack_2b0 = (long *)0x0;
      uVar3 = param_3;
      func_0x00010bf445c0();
      _objc_retainAutoreleasedReturnValue();
      uVar1 = uVar3;
      func_0x00010bf52a60();
      uVar2 = 0;
      if (uVar1 != 0) {
        lVar4 = *plStack_2b0;
        do {
          uVar9 = 0;
          uVar8 = uVar2;
          do {
            if (*plStack_2b0 != lVar4) {
              _objc_enumerationMutation(uVar3);
            }
            uVar2 = *(undefined8 *)(lStack_2b8 + uVar9 * 8);
            uStack_2f0 = 0;
            uStack_2e0 = 0x3032000000;
            pcStack_2d8 = FUN_108f79dd8;
            uStack_2d0 = 0x108f79de8;
            puStack_2e8 = &uStack_2f0;
            _objc_retain(uVar8);
            uStack_2c8 = uVar8;
            _objc_retain(param_3);
            _objc_retain(uVar8);
            func_0x00010c0c0c00(uVar2);
            uVar2 = puStack_2e8[5];
            _objc_retain(uVar2);
            _objc_release(uVar8);
            _objc_release(uVar8);
            _objc_release(param_3);
            __Block_object_dispose(&uStack_2f0,8);
            _objc_release(uStack_2c8);
            uVar9 = uVar9 + 1;
            uVar8 = uVar2;
          } while (uVar1 != uVar9);
          uVar1 = uVar3;
          func_0x00010bf52a60();
        } while (uVar1 != 0);
      }
      _objc_release(uVar3);
      func_0x00010c1cbe20(param_1);
      _objc_release(uVar2);
    }
  }
LAB_108f79d70:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_80) {
    ___stack_chk_fail();
    lVar4 = 8;
    __Block_object_dispose(&uStack_2f0);
    __Unwind_Resume();
    *(undefined8 *)(param_3 + 0x28) = *(undefined8 *)(lVar4 + 0x28);
    *(undefined8 *)(lVar4 + 0x28) = 0;
    return;
  }
  return;
}



/* Entry: 108f79dd8; end: 108f79def;  */

void FUN_108f79dd8(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108f79df0; end: 108f79e4f;  */

void FUN_108f79df0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  FUN_108f79e50(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befbb60(uVar2);
  _objc_release(param_2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108f79e50; end: 108f79eab;  */

void FUN_108f79e50(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_retain();
  _objc_alloc(puVar1);
  func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c16b720();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108f79eac; end: 108f7a057;  */

void FUN_108f79eac(double param_1,long param_2,undefined8 param_3,long param_4,int param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c08fa60(param_3);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  if (param_4 != 0) {
    func_0x00010c14d100(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  puVar1 = puVar2;
  if (param_5 != 0) {
    func_0x00010bfe77e0(puVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
  }
  func_0x00010c23d0a0(puVar1);
  func_0x00010c23d0a0(puVar1);
  puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  _objc_alloc(PTR__OBJC_CLASS___UIImageView_1126aec28);
  dVar5 = *(double *)PTR__CGRectZero_110347608;
  dVar6 = *(double *)(PTR__CGRectZero_110347608 + 8);
  func_0x00010c013de0(dVar5,dVar6,*(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  if (((param_1 != 0.0) && (func_0x00010c23d0a0(puVar1), dVar5 != 0.0)) &&
     (func_0x00010c23d0a0(puVar1), dVar6 != 0.0)) {
    func_0x00010c1a9f00(puVar2);
    func_0x00010c23d0a0(puVar1);
    func_0x00010c23d0a0(puVar1);
    func_0x00010c19f0e0(0,0,param_1 * (dVar5 / dVar6),param_1,puVar2);
  }
  _objc_release(puVar1);
  _objc_release(param_4);
  func_0x00010befbb60(uVar4);
  _objc_release(puVar2);
  lVar3 = *(long *)(*(long *)(param_2 + 0x28) + 8);
  uVar4 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = 0;
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 108f7a058; end: 108f7a0c3;  */

void FUN_108f7a058(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c15e440();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_108f79e50();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x28),param_2,uVar2);
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f7a0c4; end: 108f7a413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7a0c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_c8 [8];
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
  _objc_alloc();
  uVar4 = param_2;
  func_0x00010c09d4a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04e840();
  puVar2 = puVar1;
  FUN_108f79e50();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(uVar4);
  puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
  _objc_opt_class(PTR__OBJC_CLASS___UILabel_1126aec30);
  puVar3 = puVar2;
  _objc_opt_isKindOfClass(puVar2,puVar1);
  puVar1 = puVar2;
  if (((ulong)puVar3 & 1) == 0) {
    puVar1 = (undefined *)0x0;
  }
  _objc_retain(puVar1);
  _objc_release(puVar2);
  func_0x00010befbb60(*(undefined8 *)(param_1 + 0x20));
  lVar6 = (long)_DAT_11277e6c4;
  lVar5 = *(long *)(param_1 + 0x20) + lVar6;
  _objc_loadWeakRetained();
  _objc_release();
  if (lVar5 == 0) {
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = param_2;
    func_0x00010c09d4a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bed80c0(uVar7);
    _objc_release(uVar4);
  }
  else {
    _objc_initWeak(auStack_78,*(undefined8 *)(param_1 + 0x20));
    lVar6 = *(long *)(param_1 + 0x20) + lVar6;
    _objc_loadWeakRetained(lVar6);
    uVar4 = param_2;
    func_0x00010c09b6c0(param_2);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_108f7a414;
    puStack_a8 = &UNK_110acf2e0;
    _objc_retain(param_2);
    uStack_a0 = param_2;
    _objc_copyWeak(auStack_80,auStack_78);
    _objc_retain(param_3);
    uStack_98 = param_3;
    _objc_retain(puVar1);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    puStack_90 = puVar1;
    _objc_retain(uVar7);
    uStack_88 = uVar7;
    _objc_copyWeak(auStack_c8,auStack_78);
    _objc_retain(param_2);
    _objc_retain(param_3);
    _objc_retain(puVar1);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar7);
    _objc_retain(PTR___dispatch_main_q_11034be20);
    func_0x00010c09b780(lVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(PTR___dispatch_main_q_11034be20);
    _objc_release(uVar4);
    _objc_release(lVar6);
    _objc_release(uVar7);
    _objc_release(puVar1);
    _objc_release(param_3);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_c8);
    _objc_release(uStack_88);
    _objc_release(puStack_90);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_80);
    _objc_release(uStack_a0);
    _objc_destroyWeak(auStack_78);
  }
  lVar5 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar4 = *(undefined8 *)(lVar5 + 0x28);
  *(undefined8 *)(lVar5 + 0x28) = 0;
  _objc_release(uVar4);
  _objc_release(puVar1);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 108f7a414; end: 108f7a57f;  */

void FUN_108f7a414(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar3 = *(ulong *)(param_1 + 0x20);
  func_0x00010c09b6c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar1);
  _objc_retain(uVar3);
  if (uVar1 == uVar3) {
    _objc_release(uVar3);
    _objc_release(uVar1);
    _objc_release(uVar3);
LAB_108f7a4ec:
    uVar4 = param_1 + 0x40;
    _objc_loadWeakRetained(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    _objc_retain(param_3);
    _objc_opt_class(puVar2);
    uVar5 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar2);
    uVar3 = param_3;
    if ((uVar5 & 1) == 0) {
      uVar3 = 0;
    }
    _objc_retain(uVar3);
    _objc_release(param_3);
    func_0x00010bed80c0(uVar4);
    _objc_release(uVar3);
  }
  else {
    uVar4 = uVar1;
    if (uVar3 != 0) {
      func_0x00010c071ae0();
      _objc_release(uVar3);
      _objc_release(uVar1);
      _objc_release(uVar3);
      if ((int)uVar4 == 0) goto LAB_108f7a554;
      goto LAB_108f7a4ec;
    }
  }
  _objc_release(uVar4);
LAB_108f7a554:
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108f7a580; end: 108f7a5e3;  */

void FUN_108f7a580(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x40;
  _objc_loadWeakRetained(lVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c09d4a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bed80c0(lVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108f7a5e4; end: 108f7a99b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7a5e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_f0 [8];
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 uStack_88;
  undefined1 auStack_80 [16];
  
  _objc_retain(param_2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if (param_5 == 0) {
    if (param_4 == 0) goto LAB_108f7a908;
    puVar2 = PTR_PTR_1126dcbc0;
    _objc_opt_new(PTR_PTR_1126dcbc0);
    _objc_initWeak(auStack_80,*(undefined8 *)(param_1 + 0x20));
    _objc_copyWeak(auStack_f0,auStack_80);
    _objc_retain(param_2);
    uStack_e8 = param_3;
    _objc_retain(param_4);
    func_0x00010c1d37e0(puVar2);
    puVar3 = PTR_PTR_1126dcbc8;
    _objc_alloc(PTR_PTR_1126dcbc8);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277e6c8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40(puVar3);
    _objc_release(uVar6);
    _objc_release(uVar1);
    puVar4 = puVar3;
    func_0x00010c295200(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a1560();
    _objc_release(puVar4);
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
    _objc_release(param_4);
    _objc_release(param_2);
    puVar5 = auStack_f0;
  }
  else {
    puVar2 = PTR_PTR_1126cc490;
    _objc_opt_new(PTR_PTR_1126cc490);
    _objc_initWeak(auStack_80,*(undefined8 *)(param_1 + 0x20));
    puVar3 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b0 = 0xc2000000;
    pcStack_a8 = FUN_108f7a99c;
    puStack_a0 = &UNK_110acf370;
    _objc_copyWeak(auStack_90,auStack_80);
    _objc_retain(param_2);
    uStack_98 = param_2;
    uStack_88 = param_3;
    func_0x00010c1d37e0(puVar2);
    puStack_e0 = puVar3;
    uStack_d8 = 0xc2000000;
    pcStack_d0 = FUN_108f7a9f4;
    puStack_c8 = &UNK_110843540;
    _objc_copyWeak(auStack_c0,auStack_80);
    func_0x00010c1d3800(puVar2);
    lVar7 = param_5;
    func_0x00010c272120(param_5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e4500(puVar2);
    _objc_release(lVar7);
    puVar3 = PTR_PTR_1126dcbb8;
    _objc_alloc(PTR_PTR_1126dcbb8);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11277e6c8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar6 = uVar1;
    func_0x00010c142e00();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c061d40(puVar3);
    _objc_release(uVar6);
    _objc_release(uVar1);
    puVar4 = puVar3;
    func_0x00010c295200(puVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c2a1560();
    _objc_release(puVar4);
    func_0x00010befbb60(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puVar3);
    _objc_destroyWeak(auStack_c0);
    _objc_release(uStack_98);
    puVar5 = auStack_90;
  }
  _objc_destroyWeak(puVar5);
  _objc_destroyWeak(auStack_80);
  _objc_release(puVar2);
LAB_108f7a908:
  lVar7 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar6 = *(undefined8 *)(lVar7 + 0x28);
  *(undefined8 *)(lVar7 + 0x28) = 0;
  _objc_release(uVar6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_2);
  return;
}



/* Entry: 108f7a99c; end: 108f7a9f3;  */

void FUN_108f7a99c(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7bb00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f7a9f4; end: 108f7aa3b;  */

void FUN_108f7a9f4(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be7ecc0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108f7aa3c; end: 108f7aaa3;  */

void FUN_108f7aa3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained(lVar2);
  uVar4 = *(undefined8 *)(param_1 + 0x38);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c25bea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be7bb00(lVar2,param_2,uVar1,uVar4,uVar3);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 108f7aaa4; end: 108f7ac17; -[SCUnifiedSplitTextView _presentGroupStreakDialogWithGroupName:maxGroupCount:streakData:] */

void FUN_108f7aaa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b42c8;
  _objc_alloc(PTR_PTR_1126b42c8);
  func_0x00010c028c80((double)param_4);
  func_0x00010c1a49a0();
  puVar2 = PTR_PTR_1126afdb8;
  _objc_alloc(PTR_PTR_1126afdb8);
  func_0x00010bff0880();
  puVar3 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_108f7ac18;
  puStack_60 = &UNK_110841fb0;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(puVar3);
  puStack_58 = puVar3;
  func_0x000107c312cc("APPSTORE",&puStack_78);
  _objc_release(puStack_58);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(puVar3);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108f7ac18; end: 108f7ac63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7ac18(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bfd0140(*(undefined8 *)(lVar1 + _DAT_11277e6cc),param_2,lVar1,
                        *(undefined8 *)(param_1 + 0x20),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108f7ac64; end: 108f7ad8b; -[SCUnifiedSplitTextView _presentStreakRestoreDialogWithConversationId:] */

void FUN_108f7ac64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126afdb8;
  _objc_alloc(PTR_PTR_1126afdb8);
  func_0x00010bff0880();
  puVar2 = PTR_PTR_1126b02a8;
  _objc_alloc();
  func_0x00010c01b460();
  _objc_initWeak(auStack_38,param_1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108f7ad8c;
  puStack_50 = &UNK_110841fb0;
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(puVar2);
  puStack_48 = puVar2;
  func_0x000107c312cc("APPSTORE",&puStack_68);
  _objc_release(puStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 108f7ad8c; end: 108f7add7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7ad8c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bfd0140(*(undefined8 *)(lVar1 + _DAT_11277e6cc),param_2,lVar1,
                        *(undefined8 *)(param_1 + 0x20),0);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108f7add8; end: 108f7aeef; -[SCUnifiedSplitTextView _updateFetchedNetworkString:textAttributes:onView:previousSeparator:] */

void FUN_108f7add8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  uVar1 = param_1;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf4b900();
  _objc_release(uVar1);
  if ((int)uVar2 != 0) {
    if (param_3 == 0) {
      func_0x00010c1a7f60(param_5,param_2,1);
      func_0x00010c1a7f60(param_6,param_2,1);
    }
    else {
      func_0x00010c1a7f60(param_5,param_2,0);
      func_0x00010c1a7f60(param_6,param_2,0);
      puVar3 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
      _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
      func_0x00010c04e840();
      func_0x00010c16b720(param_5,param_2,puVar3);
      _objc_release(puVar3);
    }
    func_0x00010c1cbe20(param_1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f7aef0; end: 108f7b167; +[SCUnifiedSplitTextView heightWithViewModel:] */

undefined8 FUN_108f7aef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_80;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010bf445c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    uVar6 = 0;
  }
  else {
    puStack_118 = &uStack_120;
    uStack_120 = 0;
    uVar6 = 0x2020000000;
    uStack_110 = 0x2020000000;
    lVar1 = param_4;
    func_0x00010c15e440(param_4);
    _objc_retainAutoreleasedReturnValue();
    FUN_108f7b168();
    _objc_release(lVar1);
    param_1 = 0;
    lVar3 = param_4;
    uStack_108 = uVar6;
    func_0x00010bf445c0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar3;
    func_0x00010bf52a60();
    lVar2 = lRam0000000000000000;
    while (lVar1 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar2) {
          _objc_enumerationMutation(lVar3);
        }
        func_0x00010c0c0c00(*(undefined8 *)(lVar5 * 8));
        lVar5 = lVar5 + 1;
      } while (lVar1 != lVar5);
      lVar1 = lVar3;
      func_0x00010bf52a60();
    }
    _objc_release(lVar3);
    uVar6 = puStack_118[3];
    __Block_object_dispose(&uStack_120,8);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_80) {
    return uVar6;
  }
  ___stack_chk_fail();
  __Block_object_dispose(&uStack_120,8);
  __Unwind_Resume(param_4);
  _objc_retain();
  puVar4 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  lVar1 = param_4;
  func_0x00010c25cd40(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00();
  _objc_release(lVar1);
  uVar6 = 0;
  if (((ulong)puVar4 & 1) == 0) {
    lVar1 = param_4;
    func_0x00010bf0e760(param_4);
    _objc_retainAutoreleasedReturnValue();
    FUN_108f7b298();
    _objc_release(lVar1);
    uVar6 = param_1;
  }
  _objc_release(param_4);
  return uVar6;
}



/* Entry: 108f7b168; end: 108f7b20b;  */

undefined8 FUN_108f7b168(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  _objc_retain();
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar1 = param_2;
  func_0x00010c25cd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c078c00(puVar2,param_3,uVar1);
  _objc_release(uVar1);
  uVar1 = 0;
  if (((ulong)puVar2 & 1) == 0) {
    uVar1 = param_2;
    func_0x00010bf0e760(param_2,param_3,0,0);
    _objc_retainAutoreleasedReturnValue();
    FUN_108f7b298();
    _objc_release(uVar1);
    uVar1 = param_1;
  }
  _objc_release(param_2);
  return uVar1;
}



/* Entry: 108f7b20c; end: 108f7b247;  */

void FUN_108f7b20c(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  double dVar2;
  
  FUN_108f7b168(param_3);
  lVar1 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  dVar2 = *(double *)(lVar1 + 0x18);
  if (dVar2 <= param_1) {
    dVar2 = param_1;
  }
  *(double *)(lVar1 + 0x18) = dVar2;
  return;
}



/* Entry: 108f7b248; end: 108f7b267;  */

void FUN_108f7b248(double param_1,long param_2)

{
  long lVar1;
  double dVar2;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  dVar2 = *(double *)(lVar1 + 0x18);
  if (dVar2 <= param_1) {
    dVar2 = param_1;
  }
  *(double *)(lVar1 + 0x18) = dVar2;
  return;
}



/* Entry: 108f7b268; end: 108f7b297;  */

void FUN_108f7b268(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_108f7b298(param_4);
  *(undefined8 *)(*(long *)(*(long *)(param_2 + 0x20) + 8) + 0x18) = param_1;
  return;
}



/* Entry: 108f7b298; end: 108f7b31b;  */

undefined8 FUN_108f7b298(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  func_0x00010c0e00e0(param_2,param_3,*(undefined8 *)PTR__NSFontAttributeName_1103457f0);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
  _objc_opt_class(PTR__OBJC_CLASS___UIFont_1126aec38);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_2);
  func_0x00010c099280(uVar1);
  _objc_release(uVar1);
  return param_1;
}



/* Entry: 108f7b31c; end: 108f7b32f;  */

void FUN_108f7b31c(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 0x4038000000000000;
  return;
}



/* Entry: 108f7b330; end: 108f7b72b; -[SCUnifiedSplitTextView _framesForComponentViews] */

void FUN_108f7b330(undefined8 param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined8 *puVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  undefined8 uStack_220;
  long lStack_218;
  long *plStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  long lStack_1d8;
  long *plStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 auStack_1a0 [32];
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_1d8 = 0;
  uStack_1e0 = 0;
  uStack_1c8 = 0;
  plStack_1d0 = (long *)0x0;
  uStack_1b8 = 0;
  uStack_1c0 = 0;
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  puVar12 = param_5;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar12;
  func_0x00010bf52a60();
  dVar15 = 0.0;
  dVar17 = 0.0;
  if (puVar1 != (undefined8 *)0x0) {
    lVar8 = *plStack_1d0;
    dVar17 = 0.0;
    do {
      puVar10 = (undefined8 *)0x0;
      dVar14 = dVar17;
      do {
        if (*plStack_1d0 != lVar8) {
          _objc_enumerationMutation(puVar12);
        }
        dVar17 = 1.79769313486232e+308;
        func_0x00010c23d5a0(0x7fefffffffffffff,*(undefined8 *)(lStack_1d8 + (long)puVar10 * 8));
        if (dVar17 <= dVar14) {
          dVar17 = dVar14;
        }
        puVar10 = (undefined8 *)((long)puVar10 + 1);
        dVar14 = dVar17;
      } while (puVar1 != puVar10);
      puVar1 = puVar12;
      func_0x00010bf52a60();
    } while (puVar1 != (undefined8 *)0x0);
    dVar17 = dVar17 * 0.5;
  }
  _objc_release(puVar12);
  puVar10 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  dVar16 = *(double *)PTR__CGPointZero_110347540;
  dVar14 = 0.0;
  lStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  plStack_210 = (long *)0x0;
  uStack_1f8 = 0;
  uStack_200 = 0;
  uStack_1e8 = 0;
  uStack_1f0 = 0;
  puVar9 = param_5;
  func_0x00010c261580();
  _objc_retainAutoreleasedReturnValue();
  puVar12 = &uStack_220;
  puVar1 = auStack_1a0;
  puVar2 = puVar9;
  func_0x00010bf52a60();
  if (puVar2 == (undefined8 *)0x0) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    lVar8 = *plStack_210;
    dVar15 = 0.0;
    do {
      puVar12 = (undefined8 *)0x0;
      do {
        if (*plStack_210 != lVar8) {
          _objc_enumerationMutation(puVar9);
        }
        uVar11 = *(ulong *)(lStack_218 + (long)puVar12 * 8);
        uVar3 = uVar11;
        func_0x00010c074c20();
        if ((uVar3 & 1) == 0) {
          puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
          _objc_opt_class(PTR__OBJC_CLASS___UIImageView_1126aec28);
          uVar3 = uVar11;
          _objc_opt_isKindOfClass(uVar11,puVar4);
          if ((uVar3 & 1) == 0) {
            dVar13 = 1.79769313486232e+308;
            dVar14 = 1.79769313486232e+308;
            func_0x00010c23d5a0(uVar11);
          }
          else {
            dVar14 = param_4;
            func_0x00010bfb68e0(uVar11);
            param_4 = dVar14;
            dVar13 = param_3;
          }
          dVar14 = dVar17 + dVar14 * -0.5;
          puVar4 = PTR__OBJC_CLASS___NSValue_1126afdf8;
          func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar10);
          _objc_release(puVar4);
          if (dVar15 < dVar13) {
            _objc_retain(uVar11);
            _objc_release(uVar7);
            uVar7 = uVar11;
            dVar15 = dVar13;
          }
          dVar16 = dVar16 + dVar13;
          puVar1 = param_5;
          func_0x00010c261580();
          _objc_retainAutoreleasedReturnValue();
          puVar5 = puVar1;
          func_0x00010bfecde0();
          _objc_release(puVar1);
          puVar1 = param_5;
          func_0x00010c261580();
          _objc_retainAutoreleasedReturnValue();
          puVar6 = puVar1;
          func_0x00010bf529e0();
          _objc_release(puVar1);
          if (puVar5 != (undefined8 *)((long)puVar6 + -1)) {
            func_0x00010bebe820(param_5);
            dVar16 = dVar16 + dVar14;
          }
        }
        puVar12 = (undefined8 *)((long)puVar12 + 1);
      } while (puVar2 != puVar12);
      puVar12 = &uStack_220;
      puVar1 = auStack_1a0;
      puVar2 = puVar9;
      func_0x00010bf52a60();
    } while (puVar2 != (undefined8 *)0x0);
  }
  _objc_release(puVar9);
  func_0x00010bf20c00(param_5);
  _CGRectGetWidth();
  if (dVar14 < dVar16) {
    func_0x00010bf20c00(param_5);
    _CGRectGetWidth();
    if (dVar16 - dVar14 < dVar15) {
      puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_opt_class(PTR__OBJC_CLASS___UILabel_1126aec30);
      uVar3 = uVar7;
      _objc_opt_isKindOfClass(uVar7,puVar4);
      if ((uVar3 & 1) != 0) {
        puVar9 = param_5;
        func_0x00010c261580();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar9;
        func_0x00010bfecde0();
        func_0x00010bf20c00(param_5);
        _CGRectGetWidth();
        puVar12 = puVar10;
        func_0x00010bdc9400();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar9);
        goto LAB_108f7b6d0;
      }
    }
  }
  param_5 = puVar10;
  func_0x00010bf51e00();
LAB_108f7b6d0:
  _objc_release(uVar7);
  _objc_release(puVar10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_a0) {
    ___stack_chk_fail();
    _objc_retain(puVar12);
    puVar10 = puVar12;
    func_0x00010c0dfd40(puVar12);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bdc1080();
    _objc_release(puVar10);
    puVar10 = (undefined8 *)PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
    _objc_retainAutoreleasedReturnValue();
    puVar9 = puVar12;
    func_0x00010bf529e0();
    if (puVar9 != (undefined8 *)0x0) {
      puVar9 = (undefined8 *)0x0;
      do {
        if (puVar9 < puVar1) {
          puVar2 = puVar12;
          func_0x00010c0dfd40();
          _objc_retainAutoreleasedReturnValue();
        }
        else {
          if (puVar1 == puVar9) {
            puVar2 = puVar12;
            func_0x00010c0dfd40();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc1080();
            _objc_release(puVar2);
          }
          else {
            puVar2 = puVar12;
            func_0x00010c0dfd40(puVar12);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bdc1080();
            _objc_release(puVar2);
          }
          puVar2 = (undefined8 *)PTR__OBJC_CLASS___NSValue_1126afdf8;
          func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8);
          _objc_retainAutoreleasedReturnValue();
        }
        func_0x00010befa120(puVar10);
        _objc_release(puVar2);
        puVar9 = (undefined8 *)((long)puVar9 + 1);
        puVar2 = puVar12;
        func_0x00010bf529e0();
      } while (puVar9 < puVar2);
    }
    param_5 = puVar10;
    func_0x00010bf51e00(puVar10);
    _objc_release(puVar10);
    _objc_release(puVar12);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_5);
  return;
}



/* Entry: 108f7b72c; end: 108f7b8f3; -[SCUnifiedSplitTextView _adjustLinearLayoutFrames:index:adjustedWidth:] */

void FUN_108f7b72c(double param_1,undefined8 param_2,double param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined *param_7,undefined *param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  double *pdVar3;
  undefined *puVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  double dStack_c0;
  undefined8 uStack_b8;
  double dStack_b0;
  undefined8 uStack_a8;
  double dStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  undefined8 uStack_88;
  
  dVar5 = param_1;
  _objc_retain(param_7);
  puVar1 = param_7;
  func_0x00010c0dfd40(param_7,param_6,param_8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bdc1080();
  dVar8 = param_3;
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = param_7;
  func_0x00010bf529e0();
  if (puVar4 != (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
    do {
      if (puVar4 < param_8) {
        puVar2 = param_7;
        func_0x00010c0dfd40(param_7,param_6,puVar4);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        if (param_8 == puVar4) {
          puVar2 = param_7;
          func_0x00010c0dfd40(param_7,param_6,param_8);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc1080();
          dVar6 = dVar5;
          uVar7 = param_2;
          uVar10 = param_4;
          _objc_release(puVar2);
          pdVar3 = &dStack_a0;
          dVar9 = dVar8;
          dStack_a0 = dVar5;
          uStack_98 = param_2;
          dStack_90 = param_1;
          uStack_88 = param_4;
        }
        else {
          puVar2 = param_7;
          func_0x00010c0dfd40(param_7,param_6,puVar4);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bdc1080();
          uVar7 = param_2;
          dVar9 = dVar8;
          uVar10 = param_4;
          _objc_release(puVar2);
          dStack_c0 = dVar5 - (param_3 - param_1);
          pdVar3 = &dStack_c0;
          dVar6 = dStack_c0;
          uStack_b8 = param_2;
          dStack_b0 = dVar8;
          uStack_a8 = param_4;
        }
        param_4 = uVar10;
        dVar8 = dVar9;
        param_2 = uVar7;
        dVar5 = dVar6;
        puVar2 = PTR__OBJC_CLASS___NSValue_1126afdf8;
        func_0x00010c297120(PTR__OBJC_CLASS___NSValue_1126afdf8,param_6,pdVar3,
                            "{CGRect={CGPoint=dd}{CGSize=dd}}");
        _objc_retainAutoreleasedReturnValue();
      }
      func_0x00010befa120(puVar1,param_6,puVar2);
      _objc_release(puVar2);
      puVar4 = puVar4 + 1;
      puVar2 = param_7;
      func_0x00010bf529e0();
    } while (puVar4 < puVar2);
  }
  puVar4 = puVar1;
  func_0x00010bf51e00(puVar1);
  _objc_release(puVar1);
  _objc_release(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108f7b8f4; end: 108f7ba4b; -[SCUnifiedSplitTextView _spacingToNextItemForSubviewIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f7b8f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11277e6c0);
  func_0x00010bf445c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0dfd20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0;
  func_0x00010c0c0c00(uVar2);
  uVar1 = puStack_48[3];
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uVar2);
  return uVar1;
}



/* Entry: 108f7ba4c; end: 108f7baab;  */

void FUN_108f7ba4c(double param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + 0x20) + 8);
  *(double *)(lVar1 + 0x18) = param_1 + *(double *)(lVar1 + 0x18);
  return;
}



/* Entry: 108f7baac; end: 108f7babb; -[SCUnifiedSplitTextView actionHandler] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f7baac(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e6cc);
}



/* Entry: 108f7babc; end: 108f7bafb; -[SCUnifiedSplitTextView setActionHandler:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7babc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e6cc;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f7bafc; end: 108f7bb0b; -[SCUnifiedSplitTextView viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f7bafc(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e6c0);
}



/* Entry: 108f7bb0c; end: 108f7bb2b; -[SCUnifiedSplitTextView infoFetcher] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7bb0c(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_11277e6c4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f7bb2c; end: 108f7bb3f; -[SCUnifiedSplitTextView setInfoFetcher:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7bb2c(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + _DAT_11277e6c4,param_3);
  return;
}



/* Entry: 108f7bb40; end: 108f7bb4f; -[SCUnifiedSplitTextView imageDownloader] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f7bb40(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e6d0);
}



/* Entry: 108f7bb50; end: 108f7bb8f; -[SCUnifiedSplitTextView setImageDownloader:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7bb50(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e6d0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f7bb90; end: 108f7bb9f; -[SCUnifiedSplitTextView valdiRuntimeProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_108f7bb90(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11277e6c8);
}



/* Entry: 108f7bba0; end: 108f7bbdf; -[SCUnifiedSplitTextView setValdiRuntimeProvider:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7bba0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11277e6c8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108f7bbe0; end: 108f7bc4b; -[SCUnifiedSplitTextView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_108f7bbe0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11277e6c8,0);
  _objc_storeStrong(param_1 + _DAT_11277e6d0,0);
  _objc_destroyWeak(param_1 + _DAT_11277e6c4);
  _objc_storeStrong(param_1 + _DAT_11277e6c0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11277e6cc,0);
  return;
}



/* Entry: 108f7bc4c; end: 108f7bcf7; -[SCUnifiedSplitTextViewModel initWithSeparatorAttributedString:componentViewModels:] */

undefined1 *
FUN_108f7bc4c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126ff778;
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



/* Entry: 108f7bcf8; end: 108f7bd1b; -[SCUnifiedSplitTextViewModel copyWithZone:] */

undefined8 FUN_108f7bcf8(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f7bd1c; end: 108f7bd8f; -[SCUnifiedSplitTextViewModel hash] */

undefined8 * FUN_108f7bd1c(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_108f7be10:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_108f7be1c;
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
          goto LAB_108f7be1c;
        }
        goto LAB_108f7be10;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_108f7be1c:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 108f7bd90; end: 108f7be37; -[SCUnifiedSplitTextViewModel isEqual:] */

long FUN_108f7bd90(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f7be10:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f7be1c;
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
          goto LAB_108f7be1c;
        }
        goto LAB_108f7be10;
      }
    }
    lVar3 = 0;
  }
LAB_108f7be1c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 108f7be38; end: 108f7be3f; -[SCUnifiedSplitTextViewModel separatorAttributedString] */

undefined8 FUN_108f7be38(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 108f7be40; end: 108f7be47; -[SCUnifiedSplitTextViewModel componentViewModels] */

undefined8 FUN_108f7be40(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 108f7be48; end: 108f7be77; -[SCUnifiedSplitTextViewModel .cxx_destruct] */

void FUN_108f7be48(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108f7be78; end: 108f7bf33; +[SCUnifiedSplitTextComponentViewModel iconWithIconAssetName:iconAssetTint:iconHeight:distanceToNextItem:flipForRightToLeftLayoutDirection:] */

void FUN_108f7be78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c7300;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x28);
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  *(undefined8 *)(puVar2 + 0x30) = param_1;
  *(undefined8 *)(puVar2 + 0x38) = param_2;
  puVar2[0x40] = param_7;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f7bf34; end: 108f7bfdb; +[SCUnifiedSplitTextComponentViewModel networkStringWithNetworkString:textAttributes:distanceToNextItem:] */

void FUN_108f7bf34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126c7300;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x50);
  *(undefined8 *)(puVar2 + 0x50) = param_4;
  _objc_retain(param_4);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x58);
  *(undefined8 *)(puVar2 + 0x58) = param_5;
  _objc_release(uVar3);
  _objc_release(param_4);
  *(undefined8 *)(puVar2 + 0x60) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f7bfdc; end: 108f7c0ab; +[SCUnifiedSplitTextComponentViewModel pillViewWithGroupName:maxGroupCount:pillViewModel:profileStreakDataObservable:] */

void FUN_108f7bfdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR_PTR_1126c7300;
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
  uVar3 = *(undefined8 *)(puVar2 + 0x78);
  *(undefined8 *)(puVar2 + 0x70) = param_4;
  *(undefined8 *)(puVar2 + 0x78) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(puVar2 + 0x80);
  *(undefined8 *)(puVar2 + 0x80) = param_6;
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f7c0ac; end: 108f7c107; +[SCUnifiedSplitTextComponentViewModel separatorWithDistanceToNextItem:] */

void FUN_108f7c0ac(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c7300;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  *(undefined8 *)(puVar2 + 0x48) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f7c108; end: 108f7c17b; +[SCUnifiedSplitTextComponentViewModel textWithAttributedText:distanceToNextItem:] */

void FUN_108f7c108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126c7300;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 0;
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  _objc_release(uVar3);
  *(undefined8 *)(puVar2 + 0x18) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f7c17c; end: 108f7c19f; -[SCUnifiedSplitTextComponentViewModel copyWithZone:] */

undefined8 FUN_108f7c17c(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 108f7c1a0; end: 108f7c313; -[SCUnifiedSplitTextComponentViewModel hash] */

void FUN_108f7c1a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_a8 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = ~*(ulong *)(param_1 + 0x18) + *(ulong *)(param_1 + 0x18) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_98 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_98 = uStack_98 ^ uStack_98 >> 0x16;
  uStack_a0 = uVar4;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_90 = uVar3;
  func_0x00010bfde980();
  uVar6 = ~*(ulong *)(param_1 + 0x30) + *(ulong *)(param_1 + 0x30) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_80 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_80 = uStack_80 ^ uStack_80 >> 0x16;
  uVar6 = ~*(ulong *)(param_1 + 0x38) + *(ulong *)(param_1 + 0x38) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_78 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_78 = uStack_78 ^ uStack_78 >> 0x16;
  uStack_70 = (ulong)*(byte *)(param_1 + 0x40);
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  uVar6 = ~*(ulong *)(param_1 + 0x48) + *(ulong *)(param_1 + 0x48) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_68 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_68 = uStack_68 ^ uStack_68 >> 0x16;
  uStack_88 = uVar2;
  func_0x00010bfde980();
  uVar3 = *(undefined8 *)(param_1 + 0x58);
  uStack_60 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x68);
  uVar6 = ~*(ulong *)(param_1 + 0x60) + *(ulong *)(param_1 + 0x60) * 0x40000;
  uVar6 = (uVar6 ^ uVar6 >> 0x1f) * 0x15;
  uStack_50 = (uVar6 ^ uVar6 >> 0xb) * 0x41;
  uStack_50 = uStack_50 ^ uStack_50 >> 0x16;
  uStack_58 = uVar3;
  func_0x00010bfde980();
  lVar1 = *(long *)(param_1 + 0x70);
  uStack_38 = *(undefined8 *)(param_1 + 0x78);
  lStack_40 = -lVar1;
  if (-1 < lVar1) {
    lStack_40 = lVar1;
  }
  uStack_48 = uVar4;
  func_0x00010bfde980();
  uVar4 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010bfde980();
  puVar5 = &uStack_a8;
  uStack_30 = uVar4;
  func_0x000107c3191c(puVar5,0x10);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  uStack_d0 = 0x15;
  pcStack_b8 = FUN_108f7c314;
  lStack_c8 = param_1;
  puStack_c0 = &stack0xfffffffffffffff0;
  _objc_retain();
  puStack_d8 = PTR_PTR_1126ff780;
  puStack_e0 = puVar5;
  _objc_msgSendSuper2(&puStack_e0,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f7c314; end: 108f7c357; -[SCUnifiedSplitTextComponentViewModel internalInit] */

void FUN_108f7c314(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126ff780;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108f7c358; end: 108f7c5c7; -[SCUnifiedSplitTextComponentViewModel isEqual:] */

long FUN_108f7c358(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_108f7c5a0:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_108f7c5ac;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(char *)(param_1 + 0x40) == *(char *)(param_3 + 0x40))) &&
        (*(long *)(param_1 + 0x70) == *(long *)(param_3 + 0x70))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x18) - *(double *)(param_3 + 0x18));
      dVar5 = ABS(*(double *)(param_1 + 0x18) + *(double *)(param_3 + 0x18)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        dVar6 = ABS(*(double *)(param_1 + 0x30) - *(double *)(param_3 + 0x30));
        dVar5 = ABS(*(double *)(param_1 + 0x30) + *(double *)(param_3 + 0x30)) *
                2.220446049250313e-16;
        bVar1 = true;
        if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
          bVar1 = dVar6 < dVar5;
        }
        if (bVar1) {
          dVar6 = ABS(*(double *)(param_1 + 0x38) - *(double *)(param_3 + 0x38));
          dVar5 = ABS(*(double *)(param_1 + 0x38) + *(double *)(param_3 + 0x38)) *
                  2.220446049250313e-16;
          bVar1 = true;
          if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
            bVar1 = dVar6 < dVar5;
          }
          if (bVar1) {
            dVar5 = ABS(*(double *)(param_1 + 0x48) - *(double *)(param_3 + 0x48));
            if ((dVar5 < 2.2250738585072014e-308) ||
               (dVar5 < ABS(*(double *)(param_1 + 0x48) + *(double *)(param_3 + 0x48)) *
                        2.220446049250313e-16)) {
              dVar5 = ABS(*(double *)(param_1 + 0x60) - *(double *)(param_3 + 0x60));
              if (((((dVar5 < 2.2250738585072014e-308) ||
                    (dVar5 < ABS(*(double *)(param_1 + 0x60) + *(double *)(param_3 + 0x60)) *
                             2.220446049250313e-16)) &&
                   ((lVar4 = *(long *)(param_1 + 0x10), lVar4 == *(long *)(param_3 + 0x10) ||
                    (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                  ((lVar4 = *(long *)(param_1 + 0x20), lVar4 == *(long *)(param_3 + 0x20) ||
                   (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                 (((((lVar4 = *(long *)(param_1 + 0x28), lVar4 == *(long *)(param_3 + 0x28) ||
                     (func_0x00010c071c60(), (int)lVar4 != 0)) &&
                    ((lVar4 = *(long *)(param_1 + 0x50), lVar4 == *(long *)(param_3 + 0x50) ||
                     (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                   ((lVar4 = *(long *)(param_1 + 0x58), lVar4 == *(long *)(param_3 + 0x58) ||
                    (func_0x00010c071ae0(), (int)lVar4 != 0)))) &&
                  (((lVar4 = *(long *)(param_1 + 0x68), lVar4 == *(long *)(param_3 + 0x68) ||
                    (func_0x00010c071ae0(), (int)lVar4 != 0)) &&
                   ((lVar4 = *(long *)(param_1 + 0x78), lVar4 == *(long *)(param_3 + 0x78) ||
                    (func_0x00010c071ae0(), (int)lVar4 != 0)))))))) {
                lVar4 = *(long *)(param_1 + 0x80);
                if (lVar4 != *(long *)(param_3 + 0x80)) {
                  func_0x00010c071ae0();
                  goto LAB_108f7c5ac;
                }
                goto LAB_108f7c5a0;
              }
            }
          }
        }
      }
    }
    lVar4 = 0;
  }
LAB_108f7c5ac:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 108f7c5c8; end: 108f7c70b; -[SCUnifiedSplitTextComponentViewModel matchText:icon:separator:networkString:pillView:] */

void FUN_108f7c5c8(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      if (param_3 != 0) {
        (**(code **)(param_3 + 0x10))
                  (*(undefined8 *)(param_1 + 0x18),param_3,*(undefined8 *)(param_1 + 0x10));
      }
    }
    else if ((lVar1 == 1) && (param_4 != 0)) {
      (**(code **)(param_4 + 0x10))
                (*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),param_4,
                 *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                 *(undefined1 *)(param_1 + 0x40));
    }
  }
  else if (lVar1 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(*(undefined8 *)(param_1 + 0x48),param_5);
    }
  }
  else if (lVar1 == 3) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))
                (*(undefined8 *)(param_1 + 0x60),param_6,*(undefined8 *)(param_1 + 0x50),
                 *(undefined8 *)(param_1 + 0x58));
    }
  }
  else if ((lVar1 == 4) && (param_7 != 0)) {
    (**(code **)(param_7 + 0x10))
              (param_7,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x70),
               *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80));
  }
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 108f7c70c; end: 108f7c783; -[SCUnifiedSplitTextComponentViewModel .cxx_destruct] */

void FUN_108f7c70c(long param_1)

{
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 108f7c784; end: 108f7c7eb; +[SCAuraActionDataModel friendProfileWithFriend:] */

void FUN_108f7c784(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3d80;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar3 = *(undefined8 *)(puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108f7c7ec; end: 108f7c833; +[SCAuraActionDataModel myProfile] */

void FUN_108f7c7ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126b3d80;
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



/* Entry: 108f7c834; end: 108f7c857; -[SCAuraActionDataModel copyWithZone:] */

undefined8 FUN_108f7c834(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}


