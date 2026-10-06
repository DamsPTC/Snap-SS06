/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105a507bc; end: 105a507c7; -[SCSpectaclesSystemSettingsService .cxx_destruct] */

void FUN_105a507bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a507c8; end: 105a508db; -[SCSpectaclesSystemSetting initWithSettingId:category:title:desc:options:] */

undefined1 *
FUN_105a507c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  puStack_48 = PTR_PTR_1126eb6a8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
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
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a508dc; end: 105a508ff; -[SCSpectaclesSystemSetting copyWithZone:] */

undefined8 FUN_105a508dc(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105a50900; end: 105a5098f; -[SCSpectaclesSystemSetting hash] */

undefined8 * FUN_105a50900(long param_1,undefined8 param_2,undefined1 *param_3)

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
  uStack_48 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uStack_50 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  uStack_30 = uVar2;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_105a50a50:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105a50a5c;
    puVar6 = (undefined1 *)puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && (*(long *)((long)puVar3 + 0x10) == *(long *)(param_3 + 0x10)))
    {
      lVar5 = *(long *)((long)puVar3 + 8);
      if ((lVar5 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = *(long *)((long)puVar3 + 0x18);
        if ((lVar5 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = *(long *)((long)puVar3 + 0x20);
          if ((lVar5 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            puVar6 = *(undefined1 **)((long)puVar3 + 0x28);
            if (puVar6 != *(undefined1 **)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_105a50a5c;
            }
            goto LAB_105a50a50;
          }
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105a50a5c:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105a50990; end: 105a50a77; -[SCSpectaclesSystemSetting isEqual:] */

long FUN_105a50990(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105a50a50:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105a50a5c;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 0x10) == *(long *)(param_3 + 0x10))) {
      lVar3 = *(long *)(param_1 + 8);
      if ((lVar3 == *(long *)(param_3 + 8)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x28);
            if (lVar3 != *(long *)(param_3 + 0x28)) {
              func_0x00010c071ae0();
              goto LAB_105a50a5c;
            }
            goto LAB_105a50a50;
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_105a50a5c:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105a50a78; end: 105a50a7f; -[SCSpectaclesSystemSetting settingId] */

undefined8 FUN_105a50a78(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105a50a80; end: 105a50a87; -[SCSpectaclesSystemSetting category] */

undefined8 FUN_105a50a80(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a50a88; end: 105a50a8f; -[SCSpectaclesSystemSetting title] */

undefined8 FUN_105a50a88(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a50a90; end: 105a50a97; -[SCSpectaclesSystemSetting desc] */

undefined8 FUN_105a50a90(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a50a98; end: 105a50a9f; -[SCSpectaclesSystemSetting options] */

undefined8 FUN_105a50a98(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105a50aa0; end: 105a50ae7; -[SCSpectaclesSystemSetting .cxx_destruct] */

void FUN_105a50aa0(long param_1)

{
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a50ae8; end: 105a50b93; -[SCSpectaclesSystemSettingOption initWithLabel:value:] */

undefined1 *
FUN_105a50ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126eb6b0;
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



/* Entry: 105a50b94; end: 105a50bb7; -[SCSpectaclesSystemSettingOption copyWithZone:] */

undefined8 FUN_105a50b94(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105a50bb8; end: 105a50c2b; -[SCSpectaclesSystemSettingOption hash] */

undefined8 * FUN_105a50bb8(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_105a50cac:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_105a50cb8;
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
          goto LAB_105a50cb8;
        }
        goto LAB_105a50cac;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_105a50cb8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 105a50c2c; end: 105a50cd3; -[SCSpectaclesSystemSettingOption isEqual:] */

long FUN_105a50c2c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105a50cac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105a50cb8;
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
          goto LAB_105a50cb8;
        }
        goto LAB_105a50cac;
      }
    }
    lVar3 = 0;
  }
LAB_105a50cb8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105a50cd4; end: 105a50cdb; -[SCSpectaclesSystemSettingOption label] */

undefined8 FUN_105a50cd4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105a50cdc; end: 105a50ce3; -[SCSpectaclesSystemSettingOption value] */

undefined8 FUN_105a50cdc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a50ce4; end: 105a50d13; -[SCSpectaclesSystemSettingOption .cxx_destruct] */

void FUN_105a50ce4(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a50d14; end: 105a50d6b; +[SCSpectaclesSystemSettingValue booleanWithBoolValue:] */

void FUN_105a50d14(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1908;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 0;
  puVar2[0x10] = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a50d6c; end: 105a50dc7; +[SCSpectaclesSystemSettingValue floatWithFloatValue:] */

void FUN_105a50d6c(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1908;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a50dc8; end: 105a50e23; +[SCSpectaclesSystemSettingValue integerWithIntValue:] */

void FUN_105a50dc8(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126c1908;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 1;
  *(undefined4 *)(puVar2 + 0x14) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a50e24; end: 105a50e8f; +[SCSpectaclesSystemSettingValue textWithStringValue:] */

void FUN_105a50e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126c1908;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 2;
  uVar3 = *(undefined8 *)(puVar2 + 0x18);
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a50e90; end: 105a50eb3; -[SCSpectaclesSystemSettingValue copyWithZone:] */

undefined8 FUN_105a50e90(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105a50eb4; end: 105a50f53; -[SCSpectaclesSystemSettingValue hash] */

void FUN_105a50eb4(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined1 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_50;
  ulong uStack_48;
  long lStack_40;
  undefined8 uStack_38;
  ulong uStack_30;
  long lStack_28;
  
  puVar2 = &uStack_50;
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_50 = *(undefined8 *)(param_1 + 8);
  uStack_48 = (ulong)*(byte *)(param_1 + 0x10);
  lStack_40 = (long)*(int *)(param_1 + 0x14);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bfde980();
  uVar3 = ~*(ulong *)(param_1 + 0x20) + *(ulong *)(param_1 + 0x20) * 0x40000;
  uVar3 = (uVar3 ^ uVar3 >> 0x1f) * 0x15;
  uStack_30 = (uVar3 ^ uVar3 >> 0xb) * 0x41;
  uStack_30 = uStack_30 ^ uStack_30 >> 0x16;
  uStack_38 = uVar1;
  func_0x000100505190(&uStack_50,5);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126eb6b8;
  puStack_80 = (undefined1 *)puVar2;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a50f54; end: 105a50f97; -[SCSpectaclesSystemSettingValue internalInit] */

void FUN_105a50f54(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126eb6b8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105a50f98; end: 105a5108b; -[SCSpectaclesSystemSettingValue isEqual:] */

long FUN_105a50f98(ulong param_1,undefined8 param_2,ulong param_3)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  double dVar5;
  double dVar6;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105a51064:
    lVar4 = 1;
  }
  else {
    lVar4 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105a51070;
    uVar2 = param_1;
    _objc_opt_class(param_1);
    uVar3 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar2);
    if (((uVar3 & 1) != 0) &&
       (((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
         (*(char *)(param_1 + 0x10) == *(char *)(param_3 + 0x10))) &&
        (*(int *)(param_1 + 0x14) == *(int *)(param_3 + 0x14))))) {
      dVar6 = ABS(*(double *)(param_1 + 0x20) - *(double *)(param_3 + 0x20));
      dVar5 = ABS(*(double *)(param_1 + 0x20) + *(double *)(param_3 + 0x20)) * 2.220446049250313e-16
      ;
      bVar1 = true;
      if ((2.2250738585072014e-308 <= dVar6) && (bVar1 = false, !NAN(dVar6) && !NAN(dVar5))) {
        bVar1 = dVar6 < dVar5;
      }
      if (bVar1) {
        lVar4 = *(long *)(param_1 + 0x18);
        if (lVar4 != *(long *)(param_3 + 0x18)) {
          func_0x00010c071ae0();
          goto LAB_105a51070;
        }
        goto LAB_105a51064;
      }
    }
    lVar4 = 0;
  }
LAB_105a51070:
  _objc_release(param_3);
  return lVar4;
}



/* Entry: 105a5108c; end: 105a51183; -[SCSpectaclesSystemSettingValue matchBoolean:integer:text:float:] */

void FUN_105a5108c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  uint uVar1;
  long lVar2;
  code *pcVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = *(long *)(param_1 + 8);
  if (lVar2 < 2) {
    if (lVar2 == 0) {
      if (param_3 == 0) goto LAB_105a51154;
      uVar1 = (uint)*(byte *)(param_1 + 0x10);
      pcVar3 = *(code **)(param_3 + 0x10);
      lVar2 = param_3;
    }
    else {
      if ((lVar2 != 1) || (param_4 == 0)) goto LAB_105a51154;
      uVar1 = *(uint *)(param_1 + 0x14);
      pcVar3 = *(code **)(param_4 + 0x10);
      lVar2 = param_4;
    }
    (*pcVar3)(lVar2,uVar1);
  }
  else if (lVar2 == 2) {
    if (param_5 != 0) {
      (**(code **)(param_5 + 0x10))(param_5,*(undefined8 *)(param_1 + 0x18));
    }
  }
  else if ((lVar2 == 3) && (param_6 != 0)) {
    (**(code **)(param_6 + 0x10))(*(undefined8 *)(param_1 + 0x20),param_6);
  }
LAB_105a51154:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a51184; end: 105a5118f; -[SCSpectaclesSystemSettingValue .cxx_destruct] */

void FUN_105a51184(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 105a51190; end: 105a512eb; -[SCSpectaclesRemotePropertyDescriptor initWithSetMessageType:setParameterMapper:fetchMessageType:fetchParameter:responseMessageType:responsePayloadMapper:] */

undefined1 *
FUN_105a51190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126eb6c0;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = uVar2;
    _objc_release(uVar3);
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
    uVar2 = param_8;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a512ec; end: 105a512f3; -[SCSpectaclesRemotePropertyDescriptor setMessageType] */

undefined8 FUN_105a512ec(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105a512f4; end: 105a512fb; -[SCSpectaclesRemotePropertyDescriptor setParameterMapper] */

undefined8 FUN_105a512f4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a512fc; end: 105a51303; -[SCSpectaclesRemotePropertyDescriptor fetchMessageType] */

undefined8 FUN_105a512fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a51304; end: 105a5130b; -[SCSpectaclesRemotePropertyDescriptor fetchParameter] */

undefined8 FUN_105a51304(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 105a5130c; end: 105a51313; -[SCSpectaclesRemotePropertyDescriptor responseMessageType] */

undefined8 FUN_105a5130c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 105a51314; end: 105a5131b; -[SCSpectaclesRemotePropertyDescriptor responsePayloadMapper] */

undefined8 FUN_105a51314(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 105a5131c; end: 105a5137b; -[SCSpectaclesRemotePropertyDescriptor .cxx_destruct] */

void FUN_105a5131c(long param_1)

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



/* Entry: 105a5137c; end: 105a5142b; -[SCSpectaclesRemotePropertyMessageContext initWithIsSetRequest:setValue:completion:] */

undefined1 *
FUN_105a5137c(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126eb6c8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 105a5142c; end: 105a51433; -[SCSpectaclesRemotePropertyMessageContext isSetRequest] */

undefined1 FUN_105a5142c(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Entry: 105a51434; end: 105a5143b; -[SCSpectaclesRemotePropertyMessageContext setValue] */

undefined8 FUN_105a51434(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a5143c; end: 105a51443; -[SCSpectaclesRemotePropertyMessageContext completion] */

undefined8 FUN_105a5143c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a51444; end: 105a51473; -[SCSpectaclesRemotePropertyMessageContext .cxx_destruct] */

void FUN_105a51444(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105a51474; end: 105a51713; -[SCSpectaclesRemotePropertyImpl initWithDescriptor:messageSender:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 *
FUN_105a51474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_68 = PTR_PTR_1126eb6d0;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR_PTR_1126c18e0;
    _objc_alloc_init();
    lVar8 = (long)_DAT_11272df1c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar8);
    *(undefined **)((long)puVar1 + lVar8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR_PTR_1126c1918;
    _objc_alloc();
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init(PTR_PTR_1126ae820);
    func_0x00010c050a00();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272df20);
    *(undefined **)((long)puVar1 + (long)_DAT_11272df20) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126c1918;
    _objc_alloc();
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc_init(PTR_PTR_1126ae820);
    func_0x00010c050a00();
    lVar6 = (long)_DAT_11272df24;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    lVar7 = (long)_DAT_11272df28;
    _objc_retain(param_3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined8 *)((long)puVar1 + lVar7) = param_3;
    _objc_release(uVar4);
    uVar4 = param_4;
    func_0x000106ec57f0(param_4,*(undefined8 *)((long)puVar1 + lVar8));
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272df2c);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11272df2c) = uVar4;
    _objc_release(uVar5);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    func_0x00010c2bd760(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840();
    _objc_release(uVar4);
    func_0x000106ec5470(puVar1,*(undefined8 *)((long)puVar1 + lVar8));
    puVar2 = PTR_PTR_1126ae810;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11272df30);
    *(undefined **)((long)puVar1 + (long)_DAT_11272df30) = puVar2;
    _objc_release(uVar4);
    _objc_initWeak(auStack_78,puVar1);
    uVar4 = param_4;
    func_0x00010bfc1040(param_4);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_80,auStack_78);
    uVar5 = uVar4;
    func_0x00010c25ff60(uVar4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_80);
    _objc_destroyWeak(auStack_78);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 105a51714; end: 105a5175b;  */

void FUN_105a51714(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bfd2500();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105a5175c; end: 105a5178b; -[SCSpectaclesRemotePropertyImpl value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a5175c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272df34);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105a5178c; end: 105a5179b; -[SCSpectaclesRemotePropertyImpl valueBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a5178c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2bd770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11272df20),PTR_s_wrappedSubject_11268d000);
  return;
}



/* Entry: 105a5179c; end: 105a5179f; -[SCSpectaclesRemotePropertyImpl state] */

void FUN_105a5179c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bec2490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__state_11258e2c8);
  return;
}



/* Entry: 105a517a0; end: 105a517ef; -[SCSpectaclesRemotePropertyImpl stateBehavior] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a517a0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272df24);
  func_0x00010c2bd760(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105a517f0; end: 105a51957; -[SCSpectaclesRemotePropertyImpl set:completion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a517f0(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar7 = (long)_DAT_11272df28;
  lVar1 = *(long *)(param_1 + lVar7);
  func_0x00010c1c7140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = *(long *)(param_1 + lVar7);
    func_0x00010c1d8f20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar1 == 0) {
      _objc_retain(param_3);
      lVar3 = param_3;
    }
    else {
      lVar2 = *(long *)(param_1 + lVar7);
      func_0x00010c1d8f20();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      (**(code **)(lVar2 + 0x10))();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
    }
    _objc_release(lVar1);
    puVar4 = PTR_PTR_1126c1920;
    _objc_alloc(PTR_PTR_1126c1920);
    func_0x00010c01f6c0();
    puVar5 = PTR_PTR_1126c1928;
    _objc_alloc(PTR_PTR_1126c1928);
    uVar6 = *(undefined8 *)(param_1 + lVar7);
    func_0x00010c1c7140(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055e80(puVar5);
    func_0x00010be9fe40(param_1);
    _objc_release(puVar5);
    _objc_release(uVar6);
    _objc_release(puVar4);
    _objc_release(lVar3);
  }
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a51958; end: 105a51a87; -[SCSpectaclesRemotePropertyImpl fetchWithCompletion:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a51958(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = (long)_DAT_11272df28;
  lVar1 = *(long *)(param_1 + lVar6);
  func_0x00010bfa89e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    puVar2 = *(undefined **)(param_1 + lVar6);
    func_0x00010bfa9220();
    _objc_retainAutoreleasedReturnValue();
    if (puVar2 == (undefined *)0x0) {
      puVar3 = PTR__OBJC_CLASS___NSNull_1126aef28;
      func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar2);
      puVar3 = puVar2;
    }
    _objc_release(puVar2);
    puVar2 = PTR_PTR_1126c1920;
    _objc_alloc(PTR_PTR_1126c1920);
    func_0x00010c01f6c0();
    puVar4 = PTR_PTR_1126c1928;
    _objc_alloc(PTR_PTR_1126c1928);
    uVar5 = *(undefined8 *)(param_1 + lVar6);
    func_0x00010bfa89e0(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055e80(puVar4,param_2,uVar5,puVar3,puVar2);
    func_0x00010be9fe40(param_1,param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(uVar5);
    _objc_release(puVar2);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a51a88; end: 105a51b9b; -[SCSpectaclesRemotePropertyImpl resetWithValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a51a88(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11272df20),param_2,param_3);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11272df24),param_2,
                      &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c23f8);
  lVar3 = (long)_DAT_11272df38;
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  lVar1 = param_1;
  func_0x00010bdda800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde31e0(param_1,param_2,uVar2,0,lVar1);
  _objc_release(lVar1);
  lVar4 = (long)_DAT_11272df3c;
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  lVar1 = param_1;
  func_0x00010bdda800(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bde31e0(param_1,param_2,uVar2,0,lVar1);
  _objc_release(lVar1);
  uVar2 = *(undefined8 *)(param_1 + _DAT_11272df34);
  *(undefined8 *)(param_1 + _DAT_11272df34) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar3);
  *(undefined8 *)(param_1 + lVar3) = 0;
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a51b9c; end: 105a51ce3; -[SCSpectaclesRemotePropertyImpl handleResponse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a51b9c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bee7ea0(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    lVar5 = (long)_DAT_11272df34;
    _objc_retain(lVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar5);
    *(long *)(param_1 + lVar5) = lVar1;
    _objc_release(uVar2);
    func_0x00010c0d9840(*(undefined8 *)(param_1 + _DAT_11272df20),param_2,lVar1);
  }
  lVar5 = (long)_DAT_11272df38;
  if (*(long *)(param_1 + lVar5) != 0) {
    lVar3 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = *(long *)(param_1 + lVar5);
    _objc_release();
    if (lVar3 == lVar6) {
      lVar3 = param_3;
      func_0x00010c252d60();
      if ((lVar1 == 0) || (lVar3 != 0)) {
        puVar4 = PTR__OBJC_CLASS___NSError_1126ae858;
        func_0x00010bf99240(PTR__OBJC_CLASS___NSError_1126ae858,param_2,
                            &PTR____CFConstantStringClassReference_110e19198,1,0);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010bde31e0(param_1,param_2,*(undefined8 *)(param_1 + lVar5),0,puVar4);
        _objc_release(puVar4);
      }
      else {
        func_0x00010bde31e0(param_1,param_2,*(undefined8 *)(param_1 + lVar5),lVar1,0);
      }
      uVar2 = *(undefined8 *)(param_1 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = 0;
      _objc_release(uVar2);
      func_0x00010be980a0(param_1);
    }
  }
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105a51ce4; end: 105a51e9b; -[SCSpectaclesRemotePropertyImpl _valueForResponse:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a51ce4(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar5 = param_3;
  func_0x00010c27dd80();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = (long)_DAT_11272df28;
  uVar1 = *(undefined8 *)(param_1 + lVar6);
  func_0x00010c13b9c0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c0720c0();
  _objc_release(uVar1);
  _objc_release(lVar5);
  if ((int)lVar2 == 0) {
    lVar5 = (long)_DAT_11272df38;
    if (*(long *)(param_1 + lVar5) != 0) {
      lVar2 = param_3;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = *(long *)(param_1 + lVar5);
      _objc_release();
      if (lVar2 == lVar6) {
        lVar2 = *(long *)(param_1 + lVar5);
        func_0x00010bf4e080();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar2;
        func_0x00010c07dac0();
        if ((int)lVar5 == 0) {
          lVar5 = 0;
        }
        else {
          lVar5 = lVar2;
          func_0x00010c220140(lVar2);
          _objc_retainAutoreleasedReturnValue();
        }
        goto LAB_105a51e6c;
      }
    }
    lVar5 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + lVar6);
    func_0x00010c13bb60();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 == 0) {
      lVar5 = param_3;
      func_0x00010c0f6420(param_3);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      lVar3 = *(long *)(param_1 + lVar6);
      func_0x00010c13bb60();
      _objc_retainAutoreleasedReturnValue();
      lVar6 = param_3;
      func_0x00010c134680(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar4 = param_3;
      func_0x00010c0f6420(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar3;
      (**(code **)(lVar3 + 0x10))(lVar3,lVar6,lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar6);
      _objc_release(lVar3);
    }
LAB_105a51e6c:
    _objc_release(lVar2);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar5);
  return;
}



/* Entry: 105a51e9c; end: 105a51ebb; -[SCSpectaclesRemotePropertyImpl _cancelError] */

void FUN_105a51e9c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf99250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___NSError_1126ae858,PTR_s_errorWithDomain_code_userInfo__1125c3e38,
             &PTR____CFConstantStringClassReference_110e19198,0,0);
  return;
}



/* Entry: 105a51ebc; end: 105a51fcf; -[SCSpectaclesRemotePropertyImpl _completeRequest:value:error:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a51ebc(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010bf4e080();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_3;
  func_0x00010bf43fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + _DAT_11272df1c);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_105a51fd0;
    puStack_60 = &UNK_110848ba8;
    _objc_retain(param_3);
    lStack_58 = param_3;
    _objc_retain(param_4);
    uStack_50 = param_4;
    _objc_retain(param_5);
    uStack_48 = param_5;
    func_0x00010bf6ab00(uVar2,param_2,&puStack_78);
    _objc_release(uStack_48);
    _objc_release(uStack_50);
    _objc_release(lStack_58);
  }
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 105a51fd0; end: 105a5200f;  */

void FUN_105a51fd0(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010bf43fe0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 105a52010; end: 105a5209f; -[SCSpectaclesRemotePropertyImpl _sendRequest:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a52010(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  lVar3 = (long)_DAT_11272df3c;
  if (*(long *)(param_1 + lVar3) == 0) {
    uVar2 = 0;
  }
  else {
    lVar1 = param_1;
    func_0x00010bdda800(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bde31e0(param_1);
    _objc_release(lVar1);
    uVar2 = *(undefined8 *)(param_1 + lVar3);
  }
  *(undefined8 *)(param_1 + lVar3) = param_3;
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be980b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__runRequests_1125839c8);
  return;
}



/* Entry: 105a520a0; end: 105a5215b; -[SCSpectaclesRemotePropertyImpl _runRequests] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a520a0(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11272df3c;
  lVar3 = *(long *)(param_1 + lVar5);
  if (lVar3 != 0) {
    lVar4 = (long)_DAT_11272df38;
    if (*(long *)(param_1 + lVar4) == 0) {
      _objc_retain(lVar3);
      uVar1 = *(undefined8 *)(param_1 + lVar4);
      *(long *)(param_1 + lVar4) = lVar3;
      _objc_release(uVar1);
      uVar1 = *(undefined8 *)(param_1 + lVar5);
      *(undefined8 *)(param_1 + lVar5) = 0;
      _objc_release(uVar1);
      func_0x00010c15bec0(*(undefined8 *)(param_1 + _DAT_11272df2c),param_2,
                          *(undefined8 *)(param_1 + lVar4));
    }
  }
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar1 = *(undefined8 *)(param_1 + _DAT_11272df24);
  func_0x00010bec2480(param_1);
  func_0x00010c0df840(puVar2,param_2,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a5215c; end: 105a521b7; -[SCSpectaclesRemotePropertyImpl _state] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_105a5215c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + _DAT_11272df38);
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    func_0x00010bf4e080();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c07dac0();
    uVar3 = 1;
    if ((int)lVar2 == 0) {
      uVar3 = 2;
    }
    _objc_release(lVar1);
  }
  return uVar3;
}



/* Entry: 105a521b8; end: 105a52267; -[SCSpectaclesRemotePropertyImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a521b8(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272df3c,0);
  _objc_storeStrong(param_1 + _DAT_11272df38,0);
  _objc_storeStrong(param_1 + _DAT_11272df2c,0);
  _objc_storeStrong(param_1 + _DAT_11272df28,0);
  _objc_storeStrong(param_1 + _DAT_11272df24,0);
  _objc_storeStrong(param_1 + _DAT_11272df20,0);
  _objc_storeStrong(param_1 + _DAT_11272df34,0);
  _objc_storeStrong(param_1 + _DAT_11272df30,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272df1c,0);
  return;
}



/* Entry: 105a52268; end: 105a5226f; -[SCSpectaclesRemoteProperty value] */

undefined8 FUN_105a52268(void)

{
  return 0;
}



/* Entry: 105a52270; end: 105a52277; -[SCSpectaclesRemoteProperty valueBehavior] */

undefined8 FUN_105a52270(void)

{
  return 0;
}



/* Entry: 105a52278; end: 105a5227f; -[SCSpectaclesRemoteProperty state] */

undefined8 FUN_105a52278(void)

{
  return 0;
}



/* Entry: 105a52280; end: 105a52287; -[SCSpectaclesRemoteProperty stateBehavior] */

undefined8 FUN_105a52280(void)

{
  return 0;
}



/* Entry: 105a52288; end: 105a5228b; -[SCSpectaclesRemoteProperty resetWithValue:] */

void FUN_105a52288(void)

{
  return;
}



/* Entry: 105a5228c; end: 105a5228f; -[SCSpectaclesReadOnlyRemoteProperty fetchWithCompletion:] */

void FUN_105a5228c(void)

{
  return;
}



/* Entry: 105a52290; end: 105a52293; -[SCSpectaclesReadWriteRemoteProperty set:completion:] */

void FUN_105a52290(void)

{
  return;
}



/* Entry: 105a52294; end: 105a523e3; -[SCSpectaclesAudioSettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a52294(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1 + _DAT_11272df40;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c263680();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126ae720;
  if ((int)lVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf11fe0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_40);
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272df44);
  puVar4 = PTR_PTR_1126c1930;
  _objc_alloc(PTR_PTR_1126c1930);
  func_0x00010bff5680();
  func_0x00010bf9d660(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105a523e4; end: 105a52423;  */

void FUN_105a523e4(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeafe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a52424; end: 105a5249f; -[SCSpectaclesAudioSettingsEntryPoint _createAudioSettingsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a52424(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c1938;
  _objc_alloc(PTR_PTR_1126c1938);
  param_1 = param_1 + _DAT_11272df40;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002100(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a524a0; end: 105a524db; -[SCSpectaclesAudioSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a524a0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272df44,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272df40);
  return;
}



/* Entry: 105a524dc; end: 105a525a3; -[SCSpectaclesAudioSettingsManager initWithConnectionHub:] */

undefined1 * FUN_105a524dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eb6d8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    func_0x00010befb0c0(*(undefined8 *)((long)puVar1 + 8));
    func_0x00010befac20(*(undefined8 *)((long)puVar1 + 8));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a525a4; end: 105a525e7; -[SCSpectaclesAudioSettingsManager requestAudioLevelAsyncWithForceBoot:] */

void FUN_105a525a4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfc29c0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a525e8; end: 105a5262b; -[SCSpectaclesAudioSettingsManager setAudioLevelAsync:] */

void FUN_105a525e8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c16be00(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a5262c; end: 105a5266f; -[SCSpectaclesAudioSettingsManager requestSystemSoundMutedStatusAsync] */

void FUN_105a5262c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfcafa0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a52670; end: 105a526b3; -[SCSpectaclesAudioSettingsManager muteSystemSoundAsync:] */

void FUN_105a52670(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c0d4140(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a526b4; end: 105a526f7; -[SCSpectaclesAudioSettingsManager playSound:] */

void FUN_105a526b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c0fe860(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a526f8; end: 105a5273b; -[SCSpectaclesAudioSettingsManager _handleNewAudioLevel:] */

void FUN_105a526f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010c2619e0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a5273c; end: 105a527af; -[SCSpectaclesAudioSettingsManager _handleMutedSettings:] */

void FUN_105a5273c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar2 = PTR_PTR_1126af5d0;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2619e0(puVar2,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar3,param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a527b0; end: 105a527f3; -[SCSpectaclesAudioSettingsManager _handleAudioLevelError:] */

void FUN_105a527b0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a527f4; end: 105a52837; -[SCSpectaclesAudioSettingsManager _handleMutedSettingsError:] */

void FUN_105a527f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1 = PTR_PTR_1126af5d0;
  func_0x00010bfa01c0(PTR_PTR_1126af5d0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a52838; end: 105a528b7; -[SCSpectaclesAudioSettingsManager _errorFromResponse:] */

void FUN_105a52838(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c13bcc0();
  puVar2 = PTR__OBJC_CLASS___NSError_1126ae858;
  if (lVar1 - 1U < 3) {
    lVar1 = param_3;
    func_0x00010c13bcc0(param_3);
    func_0x00010bf99240(puVar2,param_2,&PTR____CFConstantStringClassReference_110e191b8,lVar1,0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar2 = (undefined *)0x0;
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105a528b8; end: 105a52b6f; -[SCSpectaclesAudioSettingsManager handleResponse:] */

void FUN_105a528b8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  long lStack_f0;
  long lStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  code *pcStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  long lStack_50;
  long lStack_48;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010be0afa0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c134680();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c27dd80();
  _objc_release(lVar2);
  if (lVar3 == 0x2b) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_105a52b70;
    puStack_58 = &UNK_110841f80;
    _objc_retain(lVar1);
    lStack_50 = lVar1;
    lStack_48 = param_1;
    func_0x000100162d98("APPSTORE",&puStack_70);
    lVar2 = lStack_50;
  }
  else {
    lVar2 = param_3;
    func_0x00010c134680();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c27dd80();
    _objc_release(lVar2);
    lVar2 = param_3;
    if (lVar3 == 0x2d) {
      func_0x00010bf0f200();
      _objc_retainAutoreleasedReturnValue();
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0xc2000000;
      uStack_98 = 0x105a52b84;
      puStack_90 = &UNK_110848ba8;
      _objc_retain(lVar1);
      lStack_88 = lVar1;
      lStack_80 = param_1;
      lStack_78 = lVar2;
      _objc_retain(lVar2);
      func_0x000100162d98("APPSTORE",&puStack_a8);
      _objc_release(lStack_78);
      _objc_release(lStack_88);
    }
    else {
      lVar3 = param_3;
      func_0x00010c134680();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c27dd80();
      _objc_release(lVar3);
      if (lVar4 == 0x5b) {
        puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_d8 = 0xc2000000;
        pcStack_d0 = FUN_105a52b9c;
        puStack_c8 = &UNK_110848ba8;
        _objc_retain(lVar1);
        lStack_c0 = lVar1;
        lStack_b8 = param_1;
        _objc_retain(param_3);
        lStack_b0 = param_3;
        func_0x0001000d76cc("APPSTORE",&puStack_e0);
        _objc_release(lStack_b0);
        lVar2 = lStack_c0;
      }
      else {
        lVar3 = param_3;
        func_0x00010c134680();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00010c27dd80();
        _objc_release(lVar3);
        if (lVar4 == 0x5a) {
          puStack_110 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_108 = 0xc2000000;
          pcStack_100 = FUN_105a52bdc;
          puStack_f8 = &UNK_110841f80;
          _objc_retain(lVar1);
          lStack_f0 = lVar1;
          lStack_e8 = param_1;
          func_0x0001000d76cc("APPSTORE",&puStack_110);
          lVar2 = lStack_f0;
        }
        else {
          func_0x00010c134680(param_3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c27dd80();
        }
      }
    }
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 105a52b70; end: 105a52b9b;  */

void FUN_105a52b70(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be25f50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s__handleAudioLevelError__112567170);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c134990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_requestAudioLevelAsyncWithForceB_11262ac80,1);
  return;
}



/* Entry: 105a52b9c; end: 105a52bdb;  */

void FUN_105a52b9c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be2c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s__handleMutedSettingsError__112568bf0);
    return;
  }
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c267340(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010be2c930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(uVar1,PTR_s__handleMutedSettings__112568be8,uVar2);
  return;
}



/* Entry: 105a52bdc; end: 105a52beb;  */

void FUN_105a52bdc(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010be2c950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x28),PTR_s__handleMutedSettingsError__112568bf0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010c1369b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_requestSystemSoundMutedStatusAsy_11262b488);
  return;
}



/* Entry: 105a52bec; end: 105a52bf3; -[SCSpectaclesAudioSettingsManager responseMonitorState] */

undefined8 FUN_105a52bec(void)

{
  return 0;
}



/* Entry: 105a52bf4; end: 105a52bfb; -[SCSpectaclesAudioSettingsManager audioLevel] */

undefined8 FUN_105a52bf4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105a52bfc; end: 105a52c03; -[SCSpectaclesAudioSettingsManager muted] */

undefined8 FUN_105a52bfc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 105a52c04; end: 105a52c3f; -[SCSpectaclesAudioSettingsManager .cxx_destruct] */

void FUN_105a52c04(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105a52c40; end: 105a52d8f; -[SCSpectaclesBrightnessSettingsEntryPoint begin] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a52c40(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  lVar1 = param_1 + _DAT_11272df54;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010bf6fd20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c263680();
  _objc_release(lVar2);
  _objc_release(lVar1);
  puVar6 = PTR_PTR_1126ae720;
  if ((int)lVar3 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    _objc_copyWeak(auStack_40,auStack_38);
    func_0x00010bf11fe0(puVar6);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_40);
  }
  uVar5 = *(undefined8 *)(param_1 + _DAT_11272df58);
  puVar4 = PTR_PTR_1126c1940;
  _objc_alloc(PTR_PTR_1126c1940);
  func_0x00010bff9700();
  func_0x00010bf9d660(uVar5);
  _objc_release(puVar4);
  _objc_release(puVar6);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 105a52d90; end: 105a52dcf;  */

void FUN_105a52d90(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdeb760();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105a52dd0; end: 105a52e4b; -[SCSpectaclesBrightnessSettingsEntryPoint _createBrightnessSettingsManager] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a52dd0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126c1948;
  _objc_alloc(PTR_PTR_1126c1948);
  param_1 = param_1 + _DAT_11272df54;
  _objc_loadWeakRetained(param_1);
  lVar2 = param_1;
  func_0x00010bf48c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c002100(puVar1,param_2,lVar2);
  _objc_release(lVar2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105a52e4c; end: 105a52e87; -[SCSpectaclesBrightnessSettingsEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105a52e4c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11272df58,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11272df54);
  return;
}



/* Entry: 105a52e88; end: 105a52f4f; -[SCSpectaclesBrightnessSettingsManager initWithConnectionHub:] */

undefined1 * FUN_105a52e88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126eb6e0;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    func_0x00010befb0c0(*(undefined8 *)((long)puVar1 + 8));
    func_0x00010befac20(*(undefined8 *)((long)puVar1 + 8));
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 105a52f50; end: 105a52f93; -[SCSpectaclesBrightnessSettingsManager requestBrightnessLevelAsyncWithForceBoot:] */

void FUN_105a52f50(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfc3200(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a52f94; end: 105a52f97; -[SCSpectaclesBrightnessSettingsManager setBrightnessLevelAsync:] */

void FUN_105a52f94(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdf9930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__delayAndUpdateBrightnessLevel__11255bfe8);
  return;
}



/* Entry: 105a52f98; end: 105a52fdb; -[SCSpectaclesBrightnessSettingsManager requestAutoBrightnessAsync] */

void FUN_105a52f98(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010bfc2a80(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a52fdc; end: 105a5301f; -[SCSpectaclesBrightnessSettingsManager setAutoBrightnessAsync:] */

void FUN_105a52fdc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1 = PTR_PTR_1126b6718;
  func_0x00010c16cba0(PTR_PTR_1126b6718);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar2,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 105a53020; end: 105a5308f; -[SCSpectaclesBrightnessSettingsManager _updateBrightnessLevel:] */

void FUN_105a53020(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if ((lVar1 != 0) && (func_0x00010c067fc0(), lVar1 == param_3)) {
    return;
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  puVar2 = PTR_PTR_1126b6718;
  func_0x00010c173c80(PTR_PTR_1126b6718,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c15c6e0(uVar3,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 105a53090; end: 105a5317b; -[SCSpectaclesBrightnessSettingsManager _delayAndUpdateBrightnessLevel:] */

void FUN_105a53090(long param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined4 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined1 auStack_58 [8];
  long lStack_50;
  undefined1 auStack_48 [8];
  
  func_0x00010bdda560();
  lVar4 = *(long *)(param_1 + 0x18);
  func_0x00010c067fc0();
  uVar2 = lVar4 - param_3;
  uVar1 = -uVar2;
  if (-1 < (long)uVar2) {
    uVar1 = uVar2;
  }
  uVar3 = 0;
  if (uVar1 < 0xb) {
    uVar3 = 0x3dcccccd;
  }
  _objc_initWeak(auStack_48,param_1);
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105a5317c;
  puStack_60 = &UNK_110846540;
  _objc_copyWeak(auStack_58,auStack_48);
  uVar5 = 0;
  lStack_50 = param_3;
  func_0x0001008553e8(0,&puStack_78);
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = uVar5;
  _objc_release(uVar6);
  func_0x000100c749e0(uVar3,"APPSTORE",*(undefined8 *)(param_1 + 0x10));
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  return;
}


