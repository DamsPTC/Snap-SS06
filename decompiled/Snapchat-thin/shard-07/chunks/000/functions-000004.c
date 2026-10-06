/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105006350; end: 1050063bf; -[SCAuraData .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_105006350(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127195bc,0);
  _objc_storeStrong(param_1 + _DAT_1127195b4,0);
  _objc_storeStrong(param_1 + _DAT_1127195b0,0);
  _objc_storeStrong(param_1 + _DAT_1127195ac,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127195a8,0);
  return;
}



/* Entry: 1050063c0; end: 105006437; -[SCAuraProfile initWithSnaps:] */

undefined1 * FUN_1050063c0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e59b0;
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



/* Entry: 105006438; end: 10500645b; -[SCAuraProfile copyWithZone:] */

undefined8 FUN_105006438(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 10500645c; end: 105006463; -[SCAuraProfile hash] */

void FUN_10500645c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfde990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 8),PTR_s_hash_1125d5420);
  return;
}



/* Entry: 105006464; end: 1050064f3; -[SCAuraProfile isEqual:] */

long FUN_105006464(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 != param_3) {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050064d8;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if ((uVar2 & 1) == 0) {
      lVar3 = 0;
      goto LAB_1050064d8;
    }
    lVar3 = *(long *)(param_1 + 8);
    if (lVar3 != *(long *)(param_3 + 8)) {
      func_0x00010c071ae0();
      goto LAB_1050064d8;
    }
  }
  lVar3 = 1;
LAB_1050064d8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050064f4; end: 1050064fb; -[SCAuraProfile snaps] */

undefined8 FUN_1050064f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1050064fc; end: 105006507; -[SCAuraProfile .cxx_destruct] */

void FUN_1050064fc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105006508; end: 1050065b3; -[SCAuraSnapADTContainer initWithIdentifier:snapADT:] */

undefined1 *
FUN_105006508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e59b8;
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



/* Entry: 1050065b4; end: 1050065d7; -[SCAuraSnapADTContainer copyWithZone:] */

undefined8 FUN_1050065b4(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050065d8; end: 10500664b; -[SCAuraSnapADTContainer hash] */

undefined8 * FUN_1050065d8(long param_1,undefined8 param_2,undefined8 *param_3)

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
LAB_1050066cc:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_1050066d8;
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
          goto LAB_1050066d8;
        }
        goto LAB_1050066cc;
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_1050066d8:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 10500664c; end: 1050066f3; -[SCAuraSnapADTContainer isEqual:] */

long FUN_10500664c(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050066cc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050066d8;
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
          goto LAB_1050066d8;
        }
        goto LAB_1050066cc;
      }
    }
    lVar3 = 0;
  }
LAB_1050066d8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050066f4; end: 1050066fb; -[SCAuraSnapADTContainer identifier] */

undefined8 FUN_1050066f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1050066fc; end: 105006703; -[SCAuraSnapADTContainer snapADT] */

undefined8 FUN_1050066fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105006704; end: 105006733; -[SCAuraSnapADTContainer .cxx_destruct] */

void FUN_105006704(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105006734; end: 10500679f; +[SCAuraSnapADT compatibilitySnapWithCompatibilitySnap:] */

void FUN_105006734(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3ba8;
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



/* Entry: 1050067a0; end: 105006807; +[SCAuraSnapADT personalitySnapWithPersonalitySnap:] */

void FUN_1050067a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3ba8;
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



/* Entry: 105006808; end: 105006873; +[SCAuraSnapADT summarySnapWithSummarySnap:] */

void FUN_105006808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b3ba8;
  _objc_alloc();
  puVar2 = puVar1;
  func_0x00010c069400();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  *(undefined8 *)(puVar2 + 8) = 3;
  uVar3 = *(undefined8 *)(puVar2 + 0x20);
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105006874; end: 105006897; -[SCAuraSnapADT copyWithZone:] */

undefined8 FUN_105006874(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105006898; end: 10500691b; -[SCAuraSnapADT hash] */

void FUN_105006898(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_48 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_48;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain();
  puStack_78 = PTR_PTR_1126e59c0;
  puStack_80 = puVar3;
  _objc_msgSendSuper2(&puStack_80,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10500691c; end: 10500695f; -[SCAuraSnapADT internalInit] */

void FUN_10500691c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  _objc_retain();
  puStack_28 = PTR_PTR_1126e59c0;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105006960; end: 105006a2f; -[SCAuraSnapADT isEqual:] */

long FUN_105006960(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_105006a08:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105006a14;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) && (*(long *)(param_1 + 8) == *(long *)(param_3 + 8))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x18);
        if ((lVar3 == *(long *)(param_3 + 0x18)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x20);
          if (lVar3 != *(long *)(param_3 + 0x20)) {
            func_0x00010c071ae0();
            goto LAB_105006a14;
          }
          goto LAB_105006a08;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105006a14:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105006a30; end: 105006adf; -[SCAuraSnapADT matchPersonalitySnap:compatibilitySnap:summarySnap:] */

void FUN_105006a30(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 == 3) {
    if (param_5 == 0) goto LAB_105006abc;
    lVar2 = 0x20;
    lVar1 = param_5;
  }
  else if (lVar1 == 2) {
    if (param_4 == 0) goto LAB_105006abc;
    lVar2 = 0x18;
    lVar1 = param_4;
  }
  else {
    if ((lVar1 != 1) || (param_3 == 0)) goto LAB_105006abc;
    lVar2 = 0x10;
    lVar1 = param_3;
  }
  (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + lVar2));
LAB_105006abc:
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 105006ae0; end: 105006b1b; -[SCAuraSnapADT .cxx_destruct] */

void FUN_105006ae0(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 105006b1c; end: 105006b3b; -[SCAuraSnapADT isSameSubtype:] */

bool FUN_105006b1c(long param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    return *(long *)(param_1 + 8) == *(long *)(param_3 + 8);
  }
  return false;
}



/* Entry: 105006b3c; end: 105006b43; -[SCAuraSnapADT subtype] */

undefined8 FUN_105006b3c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 105006b44; end: 105006c17; -[SCAuraSnapADT asPersonalitySnap] */

void FUN_105006b44(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105006c18;
  uStack_30 = 0x105006c28;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105006c30;
  puStack_60 = &UNK_110862088;
  puStack_48 = puStack_58;
  func_0x00010c0bf340(param_1,param_2,&puStack_78,&PTR___NSConcreteGlobalBlock_110862868,
                      &PTR___NSConcreteGlobalBlock_1108628a8);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105006c18; end: 105006c2f;  */

void FUN_105006c18(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 105006c30; end: 105006c67;  */

void FUN_105006c30(long param_1,undefined8 param_2)

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



/* Entry: 105006c68; end: 105006c6f;  */

void FUN_105006c68(void)

{
  return;
}



/* Entry: 105006c70; end: 105006d43; -[SCAuraSnapADT asCompatibilitySnap] */

void FUN_105006c70(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105006c18;
  uStack_30 = 0x105006c28;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105006d48;
  puStack_60 = &UNK_1108620b8;
  puStack_48 = puStack_58;
  func_0x00010c0bf340(param_1,param_2,&PTR___NSConcreteGlobalBlock_1108628c8,&puStack_78,
                      &PTR___NSConcreteGlobalBlock_1108628e8);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105006d44; end: 105006d47;  */

void FUN_105006d44(void)

{
  return;
}



/* Entry: 105006d48; end: 105006d7f;  */

void FUN_105006d48(long param_1,undefined8 param_2)

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



/* Entry: 105006d80; end: 105006d83;  */

void FUN_105006d80(void)

{
  return;
}



/* Entry: 105006d84; end: 105006e57; -[SCAuraSnapADT asSummarySnap] */

void FUN_105006d84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puStack_58 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105006c18;
  uStack_30 = 0x105006c28;
  uStack_28 = 0;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0xc2000000;
  pcStack_68 = FUN_105006e60;
  puStack_60 = &UNK_110862028;
  puStack_48 = puStack_58;
  func_0x00010c0bf340(param_1,param_2,&PTR___NSConcreteGlobalBlock_110862908,
                      &PTR___NSConcreteGlobalBlock_110862928,&puStack_78);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105006e58; end: 105006e5f;  */

void FUN_105006e58(void)

{
  return;
}



/* Entry: 105006e60; end: 105006e97;  */

void FUN_105006e60(long param_1,undefined8 param_2)

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



/* Entry: 105006e98; end: 105006f6f; -[SCAuraPersonalitySnap initWithData:chromeTitle:chromeSubTitle:] */

undefined1 *
FUN_105006e98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e59c8;
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



/* Entry: 105006f70; end: 105006f93; -[SCAuraPersonalitySnap copyWithZone:] */

undefined8 FUN_105006f70(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105006f94; end: 105007013; -[SCAuraPersonalitySnap hash] */

undefined8 * FUN_105006f94(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1050070ac:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1050070b8;
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
            goto LAB_1050070b8;
          }
          goto LAB_1050070ac;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1050070b8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105007014; end: 1050070d3; -[SCAuraPersonalitySnap isEqual:] */

long FUN_105007014(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050070ac:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050070b8;
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
            goto LAB_1050070b8;
          }
          goto LAB_1050070ac;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1050070b8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050070d4; end: 1050070db; -[SCAuraPersonalitySnap data] */

undefined8 FUN_1050070d4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1050070dc; end: 1050070e3; -[SCAuraPersonalitySnap chromeTitle] */

undefined8 FUN_1050070dc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 1050070e4; end: 1050070eb; -[SCAuraPersonalitySnap chromeSubTitle] */

undefined8 FUN_1050070e4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1050070ec; end: 105007127; -[SCAuraPersonalitySnap .cxx_destruct] */

void FUN_1050070ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105007128; end: 1050071ff; -[SCAuraCompatibilitySnap initWithData:chromeTitle:chromeSubTitle:] */

undefined1 *
FUN_105007128(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e59d0;
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



/* Entry: 105007200; end: 105007223; -[SCAuraCompatibilitySnap copyWithZone:] */

undefined8 FUN_105007200(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 105007224; end: 1050072a3; -[SCAuraCompatibilitySnap hash] */

undefined8 * FUN_105007224(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_10500733c:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_105007348;
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
            goto LAB_105007348;
          }
          goto LAB_10500733c;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_105007348:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 1050072a4; end: 105007363; -[SCAuraCompatibilitySnap isEqual:] */

long FUN_1050072a4(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_10500733c:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_105007348;
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
            goto LAB_105007348;
          }
          goto LAB_10500733c;
        }
      }
    }
    lVar3 = 0;
  }
LAB_105007348:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 105007364; end: 10500736b; -[SCAuraCompatibilitySnap data] */

undefined8 FUN_105007364(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10500736c; end: 105007373; -[SCAuraCompatibilitySnap chromeTitle] */

undefined8 FUN_10500736c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105007374; end: 10500737b; -[SCAuraCompatibilitySnap chromeSubTitle] */

undefined8 FUN_105007374(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10500737c; end: 1050073b7; -[SCAuraCompatibilitySnap .cxx_destruct] */

void FUN_10500737c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050073b8; end: 10500748f; -[SCAuraSummarySnap initWithData:chromeTitle:chromeSubTitle:] */

undefined1 *
FUN_1050073b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e59d8;
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



/* Entry: 105007490; end: 1050074b3; -[SCAuraSummarySnap copyWithZone:] */

undefined8 FUN_105007490(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 1050074b4; end: 105007533; -[SCAuraSummarySnap hash] */

undefined8 * FUN_1050074b4(long param_1,undefined8 param_2,undefined1 *param_3)

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
  func_0x000100505190(&uStack_40,3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == (undefined8 *)param_3) {
LAB_1050075cc:
    puVar6 = (undefined1 *)0x1;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined1 *)0x0)) goto LAB_1050075d8;
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
            goto LAB_1050075d8;
          }
          goto LAB_1050075cc;
        }
      }
    }
    puVar6 = (undefined1 *)0x0;
  }
LAB_1050075d8:
  _objc_release(param_3);
  return (undefined8 *)puVar6;
}



/* Entry: 105007534; end: 1050075f3; -[SCAuraSummarySnap isEqual:] */

long FUN_105007534(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_1050075cc:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_1050075d8;
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
            goto LAB_1050075d8;
          }
          goto LAB_1050075cc;
        }
      }
    }
    lVar3 = 0;
  }
LAB_1050075d8:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 1050075f4; end: 1050075fb; -[SCAuraSummarySnap data] */

undefined8 FUN_1050075f4(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 1050075fc; end: 105007603; -[SCAuraSummarySnap chromeTitle] */

undefined8 FUN_1050075fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 105007604; end: 10500760b; -[SCAuraSummarySnap chromeSubTitle] */

undefined8 FUN_105007604(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10500760c; end: 105007647; -[SCAuraSummarySnap .cxx_destruct] */

void FUN_10500760c(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 105007648; end: 1050076ab;  */

undefined ** FUN_105007648(void)

{
  int iVar1;
  
  if ((bRam0000000113817d90 & 1) == 0) {
    iVar1 = 0x13817d90;
    ___cxa_guard_acquire();
    if (iVar1 != 0) {
      ___cxa_atexit(0x105004938,&PTR_PTR_1130bfbf8,0x100000000);
      ___cxa_guard_release(0x113817d90);
    }
  }
  return &PTR_PTR_1130bfbf8;
}



/* Entry: 1050076ac; end: 105007733;  */

void FUN_1050076ac(uint *param_1,undefined1 *param_2)

{
  ushort *puVar1;
  
  puVar1 = (ushort *)
           ((long)((long)param_1 + (ulong)*param_1) -
           (long)*(int *)((long)param_1 + (ulong)*param_1));
  if ((*puVar1 < 5) || (puVar1[2] == 0)) {
    *param_2 = 1;
  }
  else {
    *param_2 = 0;
    _objc_alloc(PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x00010bffa1c0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105007734; end: 1050077bf;  */

void FUN_105007734(long param_1,undefined1 *param_2)

{
  long lVar1;
  
  _objc_retain();
  _objc_retain(param_1);
  lVar1 = param_1;
  func_0x00010c0f0700();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    *param_2 = 1;
    lVar1 = 0;
  }
  else {
    *param_2 = 0;
    lVar1 = param_1;
    func_0x00010c0f0700(param_1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(param_1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1050077c0; end: 105007a2f;  */

undefined8 * FUN_1050077c0(undefined8 *param_1)

{
  long *plVar1;
  
  *param_1 = &PTR_FUN_110862958;
  plVar1 = (long *)param_1[0xd];
  param_1[0xd] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  plVar1 = (long *)param_1[0xc];
  param_1[0xc] = 0;
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 8))();
  }
  if (param_1[9] != 0) {
    param_1[10] = param_1[9];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 105007a30; end: 105007ac7;  */

undefined8 * FUN_105007a30(undefined8 *param_1,undefined4 param_2,long *param_3,long *param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_FUN_110862958;
  param_1[7] = lVar4;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  func_0x0001006581c0(param_1 + 9,*param_4,param_4[1],param_4[1] - *param_4 >> 3);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 105007ac8; end: 105007b4f;  */

undefined8 * FUN_105007ac8(undefined8 *param_1,undefined4 param_2,long *param_3,undefined8 param_4)

{
  undefined1 uVar1;
  undefined2 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *param_3;
  uVar2 = *(undefined2 *)(lVar4 + 0x19);
  uVar1 = *(undefined1 *)(lVar4 + 0x1b);
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)(param_1 + 3) = 0;
  *(undefined2 *)((long)param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar1;
  *param_1 = &PTR_SUB_1108629c8;
  param_1[7] = lVar4;
  param_1[8] = 0;
  FUN_105007b50(param_1 + 9,param_4);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  lVar4 = *param_3;
  *param_3 = 0;
  plVar3 = (long *)param_1[0xc];
  param_1[0xc] = lVar4;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  return param_1;
}



/* Entry: 105007b50; end: 105007c53;  */

undefined8 * FUN_105007b50(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  if (param_2[1] != 0) {
    func_0x000104becc68(param_1);
    func_0x000105007ba8(param_1,*param_2,0,*param_2 + ((ulong)param_2[1] >> 6) * 8,param_2[1] & 0x3f
                       );
  }
  return param_1;
}



/* Entry: 105007c54; end: 105007c5f; +[SCAuraData table] */

char * FUN_105007c54(void)

{
  return "aura__data_draft_2";
}



/* Entry: 105007c60; end: 105007f73; +[SCAuraData immutableObjectParse:bufferSize:] */

void FUN_105007c60(undefined8 param_1,undefined8 param_2,uint *param_3)

{
  int *piVar1;
  uint *puVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  ushort uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  
  piVar1 = (int *)((long)param_3 + (ulong)*param_3);
  puVar4 = PTR_PTR_1126b3b98;
  _objc_alloc(PTR_PTR_1126b3b98);
  lVar7 = (long)*piVar1;
  uVar6 = *(ushort *)((long)piVar1 - lVar7);
  if (uVar6 < 5) {
    puVar10 = (undefined *)0x0;
LAB_105007d24:
    lVar7 = 0;
  }
  else {
    uVar9 = (ulong)((ushort *)((long)piVar1 - lVar7))[2];
    if (uVar9 == 0) {
      puVar10 = (undefined *)0x0;
    }
    else {
      puVar2 = (uint *)((long)piVar1 + uVar9);
      puVar10 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,
                          (long)puVar2 + (ulong)*puVar2 + 4);
      _objc_retainAutoreleasedReturnValue();
      lVar7 = (long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - lVar7);
    }
    if ((uVar6 < 7) || (uVar9 = (ulong)*(ushort *)((long)piVar1 + (6 - lVar7)), uVar9 == 0))
    goto LAB_105007d24;
    puVar2 = (uint *)((long)piVar1 + uVar9);
    lVar7 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_1050090b0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  if ((*(ushort *)((long)piVar1 - (long)*piVar1) < 9) ||
     (uVar9 = (ulong)((ushort *)((long)piVar1 - (long)*piVar1))[4], uVar9 == 0)) {
    lVar5 = 0;
  }
  else {
    puVar2 = (uint *)((long)piVar1 + uVar9);
    lVar5 = (long)puVar2 + (ulong)*puVar2;
  }
  FUN_1050090b0(lVar5);
  _objc_retainAutoreleasedReturnValue();
  lVar8 = (long)*piVar1;
  uVar6 = *(ushort *)((long)piVar1 - lVar8);
  if (uVar6 < 0xb) {
    puVar11 = (undefined *)0x0;
LAB_105007e00:
    uVar12 = 0;
LAB_105007e04:
    puVar13 = (undefined *)0x0;
  }
  else {
    if (((ushort *)((long)piVar1 - lVar8))[5] == 0) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      lVar8 = (long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - lVar8);
    }
    lVar8 = -lVar8;
    if (uVar6 < 0xd) goto LAB_105007e00;
    uVar9 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0xc);
    if (uVar9 == 0) {
      uVar12 = 0;
    }
    else {
      uVar12 = *(undefined8 *)((long)piVar1 + uVar9);
    }
    if (uVar6 < 0xf) goto LAB_105007e04;
    if (*(short *)((long)piVar1 + lVar8 + 0xe) == 0) {
      puVar13 = (undefined *)0x0;
    }
    else {
      puVar13 = PTR__OBJC_CLASS___NSData_1126ae778;
      _objc_alloc(PTR__OBJC_CLASS___NSData_1126ae778);
      func_0x00010bffa160();
      lVar8 = -(long)*piVar1;
      uVar6 = *(ushort *)((long)piVar1 - (long)*piVar1);
    }
    if (0x10 < uVar6) {
      uVar9 = (ulong)*(ushort *)((long)piVar1 + lVar8 + 0x10);
      bVar3 = false;
      if (uVar9 != 0) {
        bVar3 = *(char *)((long)piVar1 + uVar9) != '\0';
      }
      goto LAB_105007e10;
    }
  }
  bVar3 = false;
LAB_105007e10:
  func_0x00010c032ac0(puVar4,param_2,puVar10,lVar7,lVar5,puVar11,uVar12,puVar13,bVar3);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(lVar5);
  _objc_release(lVar7);
  _objc_release(puVar10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105007f74; end: 105007f97; +[SCAuraData objectClassFunctionPointer] */

undefined1  [16] FUN_105007f74(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x105007f90;
  auVar1._0_8_ = 0x105007f88;
  return auVar1;
}



/* Entry: 105007f98; end: 10500816f;  */

void FUN_105007f98(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  puVar8 = PTR_PTR_1126b3ba0;
  if (param_2 == 0) {
    _objc_opt_new();
    *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
  }
  else {
    _objc_alloc();
    lVar1 = param_2;
    func_0x00010c0f0700(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = param_2;
    func_0x00010c0fa680(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_2;
    func_0x00010bf435a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_2;
    func_0x00010c2667e0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar5 = param_2;
    func_0x00010c0d9f00(param_2);
    lVar6 = param_2;
    func_0x00010c08a340(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = param_2;
    func_0x00010bfdbae0();
    func_0x00010bfdb8c0();
    FUN_105008170(puVar8,0xffffffffffffffff,lVar1,lVar2,lVar3,lVar4,lVar5,lVar6,(char)lVar7);
    _objc_release(lVar6);
    _objc_release(lVar4);
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar1);
  }
  *(undefined4 *)(puVar8 + 0x10) = 1;
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar8);
  return;
}



/* Entry: 105008170; end: 1050082fb;  */

undefined1 *
FUN_105008170(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9)

{
  long *plVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lStack_70;
  undefined *puStack_68;
  
  plVar1 = &lStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_8);
  puVar3 = (undefined1 *)0x0;
  if (param_1 != 0) {
    puStack_68 = PTR_PTR_1126e59e0;
    lStack_70 = param_1;
    _objc_msgSendSuper2(&lStack_70,PTR_s_init_1125d9248);
    puVar3 = (undefined1 *)plVar1;
    if (plVar1 != (long *)0x0) {
      *(undefined8 *)((long)plVar1 + 8) = param_2;
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x18);
      *(undefined8 *)((long)plVar1 + 0x18) = param_3;
      _objc_release(uVar2);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x20);
      *(undefined8 *)((long)plVar1 + 0x20) = param_4;
      _objc_release(uVar2);
      _objc_retain(param_5);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x28);
      *(undefined8 *)((long)plVar1 + 0x28) = param_5;
      _objc_release(uVar2);
      _objc_retain(param_6);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x30);
      *(undefined8 *)((long)plVar1 + 0x30) = param_6;
      _objc_release(uVar2);
      *(undefined8 *)((long)plVar1 + 0x38) = param_7;
      _objc_retain(param_8);
      uVar2 = *(undefined8 *)((long)plVar1 + 0x40);
      *(undefined8 *)((long)plVar1 + 0x40) = param_8;
      _objc_release(uVar2);
      *(undefined1 *)((long)plVar1 + 0x14) = (undefined1)param_9;
      *(undefined1 *)((long)plVar1 + 0x15) = param_9._1_1_;
    }
  }
  _objc_release(param_8);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar3;
}



/* Entry: 1050082fc; end: 10500836f;  */

void FUN_1050082fc(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_105008370();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 2;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105008370; end: 10500881b;  */

void FUN_105008370(undefined *param_1)

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
  
  _objc_retain();
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
    func_0x00010c1422e0();
    if ((long)puVar1 < 0) {
      puVar1 = param_1;
      func_0x00010c0f0700();
      _objc_retainAutoreleasedReturnValue();
      _objc_release();
      if (puVar1 != (undefined *)0x0) {
        puVar1 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0();
        _objc_retainAutoreleasedReturnValue();
        puVar10 = puVar1;
        func_0x00010bf636c0();
        _objc_release(puVar1);
        func_0x0001001b9e08(puVar10,
                            "SELECT rowid, p FROM aura__data_draft_2 WHERE ownerId=?1 LIMIT 1");
        if (puVar10 != (undefined *)0x0) {
          puVar1 = param_1;
          func_0x00010c0f0700(param_1);
          _objc_retainAutoreleasedReturnValue();
          _objc_retain();
          puVar2 = puVar1;
          _objc_retainAutorelease(puVar1);
          func_0x00010bdc3520();
          _sqlite3_bind_text(puVar10,1,puVar2,0xffffffff,0xffffffffffffffff);
          _objc_release(puVar1);
          _objc_release(puVar1);
          puVar1 = puVar10;
          _sqlite3_step();
          if ((int)puVar1 == 100) {
            puVar1 = puVar10;
            _sqlite3_column_int64(puVar10,0);
            puVar2 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0();
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b3b98);
            _sqlite3_column_blob(puVar10,1);
            _sqlite3_column_bytes(puVar10,1);
            puVar3 = puVar2;
            func_0x00010c0dfea0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(param_1);
            _objc_release(puVar2);
            _sqlite3_reset(puVar10);
            if (puVar3 == (undefined *)0x0) goto LAB_105008724;
            puVar10 = PTR_PTR_1126b3ba0;
            _objc_alloc(PTR_PTR_1126b3ba0);
            puVar2 = puVar3;
            func_0x00010c0f0700(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar4 = puVar3;
            func_0x00010c0fa680(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar5 = puVar3;
            func_0x00010bf435a0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar6 = puVar3;
            func_0x00010c2667e0(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = puVar3;
            func_0x00010c0d9f00(puVar3);
            puVar8 = puVar3;
            func_0x00010c08a340(puVar3);
            _objc_retainAutoreleasedReturnValue();
            puVar9 = puVar3;
            func_0x00010bfdbae0();
            func_0x00010bfdb8c0();
            FUN_105008170(puVar10,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,(char)puVar9);
            goto LAB_1050084d8;
          }
        }
      }
    }
    else {
      puVar1 = param_1;
      func_0x00010c1422e0(param_1);
      puVar10 = PTR_PTR_1126b04a8;
      func_0x00010bf877e0();
      _objc_retainAutoreleasedReturnValue();
      _objc_opt_class(PTR_PTR_1126b3b98);
      puVar3 = puVar10;
      func_0x00010c0dfea0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(param_1);
      _objc_release(puVar10);
      if (puVar3 != (undefined *)0x0) {
        puVar10 = PTR_PTR_1126b3ba0;
        _objc_alloc(PTR_PTR_1126b3ba0);
        puVar2 = puVar3;
        func_0x00010c0f0700(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar4 = puVar3;
        func_0x00010c0fa680(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar5 = puVar3;
        func_0x00010bf435a0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar6 = puVar3;
        func_0x00010c2667e0(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar3;
        func_0x00010c0d9f00(puVar3);
        puVar8 = puVar3;
        func_0x00010c08a340(puVar3);
        _objc_retainAutoreleasedReturnValue();
        puVar9 = puVar3;
        func_0x00010bfdbae0();
        func_0x00010bfdb8c0();
        FUN_105008170(puVar10,puVar1,puVar2,puVar4,puVar5,puVar6,puVar7,puVar8,(char)puVar9);
LAB_1050084d8:
        _objc_release(puVar8);
        _objc_release(puVar6);
        _objc_release(puVar5);
        _objc_release(puVar4);
        _objc_release(puVar2);
        param_1 = puVar3;
        goto LAB_10500872c;
      }
LAB_105008724:
      param_1 = (undefined *)0x0;
    }
  }
  puVar10 = (undefined *)0x0;
LAB_10500872c:
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar10);
  return;
}



/* Entry: 10500881c; end: 10500888f;  */

void FUN_10500881c(undefined8 param_1,long param_2)

{
  long lVar1;
  
  _objc_retain(param_2);
  _objc_opt_self(param_1);
  lVar1 = param_2;
  FUN_105008370();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    *(undefined4 *)(lVar1 + 0x10) = 3;
  }
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105008890; end: 105008907;  */

void FUN_105008890(long param_1)

{
  undefined *puVar1;
  
  if (param_1 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR_PTR_1126b3b98;
    _objc_alloc(PTR_PTR_1126b3b98);
    func_0x00010c032ac0();
    func_0x00010c1eeb60();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105008908; end: 10500895b; -[SCAuraDataChangeRequest .cxx_destruct] */

void FUN_105008908(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x18,0);
  return;
}



/* Entry: 10500895c; end: 105008967; -[SCAuraDataChangeRequest table] */

char * FUN_10500895c(void)

{
  return "aura__data_draft_2";
}



/* Entry: 105008968; end: 1050089af; -[SCAuraDataChangeRequest createTableWithSQLite:] */

void FUN_105008968(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uStack_18;
  
  _sqlite3_prepare_v2(param_3,&UNK_10dd8dcb0,0x82,&uStack_18,0);
  if ((int)param_3 == 0) {
    _sqlite3_step(uStack_18);
    _sqlite3_finalize(uStack_18);
  }
  return;
}



/* Entry: 1050089b0; end: 105008d37; -[SCAuraDataChangeRequest transactWithSQLite:flatbuffers:] */

void FUN_1050089b0(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  uint *puVar9;
  
  iVar3 = *(int *)(param_1 + 0x10);
  puVar5 = param_1;
  if (iVar3 == 1) {
    FUN_105008890(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_105008d38(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    lVar6 = param_3;
    func_0x0001001b9e08(param_3,"INSERT INTO aura__data_draft_2 (p, ownerId) VALUES (?1, ?2)");
    if (lVar6 == 0) goto LAB_105008cd4;
    _sqlite3_bind_blob(lVar6,1,*(undefined8 *)(param_4 + 0x30),
                       (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                       *(int *)(param_4 + 0x28),0);
    piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
    puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
    puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
    _sqlite3_bind_text(lVar6,2,puVar2 + 1,*puVar2,0);
    _sqlite3_step();
    if ((int)lVar6 != 0x65) goto LAB_105008cd4;
    uVar8 = *(undefined8 *)(param_3 + 0x58);
    _sqlite3_last_insert_rowid();
    *(undefined8 *)(param_1 + 8) = uVar8;
    func_0x00010c1eeb60(puVar5);
    puVar7 = PTR_PTR_1126b04a8;
    func_0x00010bf877e0(PTR_PTR_1126b04a8);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126b3b98);
    func_0x00010c21c9a0(puVar7);
LAB_105008cbc:
    _objc_release(puVar7);
    _objc_retain(puVar5);
    puVar7 = puVar5;
  }
  else {
    if (iVar3 != 2) {
      if (iVar3 == 3) {
        *(undefined4 *)(param_1 + 0x10) = 0;
        func_0x0001001b9e08(param_3,"DELETE FROM aura__data_draft_2 WHERE rowid=?1");
        if (param_3 != 0) {
          _sqlite3_bind_int64();
          _sqlite3_step();
          if ((int)param_3 == 0x65) {
            puVar5 = PTR_PTR_1126b04a8;
            func_0x00010bf877e0(PTR_PTR_1126b04a8);
            _objc_retainAutoreleasedReturnValue();
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            _objc_opt_class(PTR_PTR_1126b3b98);
            func_0x00010c21c9a0(puVar5);
            _objc_release(puVar7);
            _objc_release(puVar5);
            puVar7 = PTR__OBJC_CLASS___NSNull_1126aef28;
            func_0x00010c0ddbe0(PTR__OBJC_CLASS___NSNull_1126aef28);
            _objc_retainAutoreleasedReturnValue();
            goto LAB_105008ce0;
          }
        }
      }
      puVar7 = (undefined *)0x0;
      goto LAB_105008ce0;
    }
    FUN_105008890(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    FUN_105008d38(param_4,puVar5);
    func_0x0001001ce6fc(param_4,lVar6,0,0);
    puVar9 = *(uint **)(param_4 + 0x30);
    uVar4 = *puVar9;
    uVar8 = *(undefined8 *)(param_1 + 8);
    func_0x0001001b9e08(param_3,
                        "UPDATE aura__data_draft_2 SET p=?1, ownerId=?3 WHERE rowid=?2 LIMIT 1");
    if (param_3 != 0) {
      _sqlite3_bind_blob(param_3,1,*(undefined8 *)(param_4 + 0x30),
                         (*(int *)(param_4 + 0x20) - (int)*(undefined8 *)(param_4 + 0x30)) +
                         *(int *)(param_4 + 0x28),0);
      _sqlite3_bind_int64(param_3,2,uVar8);
      piVar1 = (int *)((long)puVar9 + (ulong)uVar4);
      puVar9 = (uint *)((long)piVar1 + (ulong)*(ushort *)((long)piVar1 + (4 - (long)*piVar1)));
      puVar2 = (undefined4 *)((long)puVar9 + (ulong)*puVar9);
      _sqlite3_bind_text(param_3,3,puVar2 + 1,*puVar2,0);
      _sqlite3_step();
      if ((int)param_3 == 0x65) {
        puVar7 = PTR_PTR_1126b04a8;
        func_0x00010bf877e0(PTR_PTR_1126b04a8);
        _objc_retainAutoreleasedReturnValue();
        _objc_opt_class(PTR_PTR_1126b3b98);
        func_0x00010c21c9a0(puVar7);
        goto LAB_105008cbc;
      }
    }
LAB_105008cd4:
    puVar7 = (undefined *)0x0;
  }
  _objc_release(puVar5);
LAB_105008ce0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105008d38; end: 1050090af;  */

ulong FUN_105008d38(ulong param_1,ulong param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  
  _objc_retain(param_2);
  uVar5 = param_2;
  func_0x00010c0fa680();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 == 0) {
    uVar13 = 0;
  }
  else {
    uVar14 = param_2;
    func_0x00010c0fa680(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar13 = param_1;
    FUN_105009a38(param_1,uVar14);
    _objc_release(uVar14);
    uVar13 = uVar13 & 0xffffffff;
  }
  _objc_release(uVar5);
  uVar5 = param_2;
  func_0x00010bf435a0();
  _objc_retainAutoreleasedReturnValue();
  if (uVar5 == 0) {
    uVar14 = 0;
  }
  else {
    uVar6 = param_2;
    func_0x00010bf435a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar14 = param_1;
    FUN_105009a38(param_1,uVar6);
    _objc_release(uVar6);
    uVar14 = uVar14 & 0xffffffff;
  }
  _objc_release(uVar5);
  uVar5 = param_2;
  func_0x00010c0f0700();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  FUN_105009ea4(param_1,uVar5);
  uVar7 = param_2;
  func_0x00010c2667e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar8 = uVar7;
    _objc_retainAutorelease(uVar7);
    func_0x00010bf25f00();
    uVar9 = uVar7;
    func_0x00010c08fa60(uVar7);
    uVar12 = param_1;
    func_0x0001001d1030(param_1,uVar8,uVar9);
    uVar4 = (undefined4)uVar12;
  }
  _objc_release(uVar7);
  uVar8 = param_2;
  func_0x00010c0d9f00(param_2);
  uVar9 = param_2;
  func_0x00010c08a340();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (uVar9 == 0) {
    uVar12 = 0;
  }
  else {
    uVar10 = uVar9;
    _objc_retainAutorelease(uVar9);
    func_0x00010bf25f00();
    uVar11 = uVar9;
    func_0x00010c08fa60(uVar9);
    uVar12 = param_1;
    func_0x0001001d1030(param_1,uVar10,uVar11);
  }
  _objc_release(uVar9);
  uVar10 = param_2;
  func_0x00010bfdbae0();
  uVar11 = param_2;
  func_0x00010bfdb8c0(param_2);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = *(int *)(param_1 + 0x30);
  iVar3 = *(int *)(param_1 + 0x28);
  func_0x0001001ce1c8(param_1,0xc,uVar8,0);
  func_0x0001001ce220(param_1,0xe,uVar12 & 0xffffffff);
  func_0x0001001ce220(param_1,10,uVar4);
  FUN_10500a948(param_1,8,uVar14);
  FUN_10500a948(param_1,6,uVar13);
  func_0x0001001ce2e4(param_1,4,uVar6 & 0xffffffff);
  func_0x000100ab13ac(param_1,0x12,uVar11,0);
  func_0x000100ab13ac(param_1,0x10,uVar10 & 0xffffffff,0);
  func_0x0001001ce548(param_1,(iVar1 - iVar2) + iVar3);
  _objc_release(uVar9);
  _objc_release(uVar7);
  _objc_release(uVar5);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 1050090b0; end: 105009a37;  */

void FUN_1050090b0(int *param_1)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ushort uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  undefined *puVar17;
  uint *puVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  
  puVar4 = (undefined *)0x0;
  if (param_1 != (int *)0x0) {
    puVar4 = PTR_PTR_1126b3bc8;
    _objc_alloc();
    if ((*(ushort *)((long)param_1 - (long)*param_1) < 5) ||
       (uVar16 = (ulong)((ushort *)((long)param_1 - (long)*param_1))[2], uVar16 == 0)) {
      puVar13 = (undefined *)0x0;
    }
    else {
      uVar15 = (ulong)*(uint *)((long)param_1 + uVar16);
      puVar1 = (uint *)((long)((long)param_1 + uVar16) + uVar15);
      puVar5 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf0a0e0();
      _objc_retainAutoreleasedReturnValue();
      if (*puVar1 != 0) {
        puVar18 = (uint *)((long)param_1 + uVar15 + uVar16 + 8);
        do {
          uVar16 = (ulong)puVar18[-1];
          puVar13 = PTR_PTR_1126b3ac8;
          _objc_alloc(PTR_PTR_1126b3ac8);
          lVar9 = (long)*(int *)((long)puVar18 + (uVar16 - 4));
          uVar7 = *(ushort *)((long)puVar18 + (uVar16 - lVar9) + -4);
          if (uVar7 < 5) {
            puVar14 = (undefined *)0x0;
LAB_1050094a0:
            puVar17 = (undefined *)0x0;
          }
          else {
            if (*(short *)((long)puVar18 + (uVar16 - lVar9)) == 0) {
              puVar14 = (undefined *)0x0;
            }
            else {
              puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
              func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0);
              _objc_retainAutoreleasedReturnValue();
              lVar9 = (long)*(int *)((long)puVar18 + (uVar16 - 4));
              uVar7 = *(ushort *)((long)puVar18 + (uVar16 - lVar9) + -4);
            }
            puVar17 = PTR_PTR_1126b3ba8;
            lVar9 = -lVar9;
            if ((uVar7 < 7) ||
               (uVar15 = (ulong)*(ushort *)((long)puVar18 + lVar9 + uVar16 + 2), uVar15 == 0))
            goto LAB_1050094a0;
            cVar2 = *(char *)((long)puVar18 + uVar16 + uVar15 + -4);
            if (8 < uVar7 && cVar2 == '\x01') {
              uVar15 = (ulong)*(ushort *)((long)puVar18 + lVar9 + uVar16 + 4);
              if (uVar15 != 0) {
                lVar9 = uVar16 + uVar15;
                uVar19 = (ulong)*(uint *)((long)puVar18 + lVar9 + -4);
                puVar6 = PTR_PTR_1126b3bb0;
                _objc_alloc();
                lVar8 = uVar19 + lVar9;
                lVar10 = (long)*(int *)((long)puVar18 + lVar8 + -4);
                uVar7 = *(ushort *)((long)puVar18 + ((lVar9 + uVar19) - lVar10) + -4);
                if (uVar7 < 5) {
                  puVar20 = (undefined *)0x0;
                  puVar21 = (undefined *)0x0;
                  puVar12 = (undefined *)0x0;
                }
                else {
                  if (*(short *)((long)puVar18 + ((uVar16 + uVar15 + uVar19) - lVar10)) == 0) {
                    puVar12 = (undefined *)0x0;
                  }
                  else {
                    puVar12 = PTR__OBJC_CLASS___NSData_1126ae778;
                    _objc_alloc();
                    func_0x00010bffa160();
                    lVar10 = (long)*(int *)((long)puVar18 + lVar8 + -4);
                    uVar7 = *(ushort *)((long)puVar18 + ((uVar16 + uVar15 + uVar19) - lVar10) + -4);
                  }
                  lVar10 = -lVar10;
                  if (uVar7 < 7) {
                    puVar21 = (undefined *)0x0;
                  }
                  else {
                    uVar11 = (ulong)*(ushort *)
                                     ((long)puVar18 + lVar10 + uVar16 + uVar15 + uVar19 + 2);
                    if (uVar11 == 0) {
                      puVar21 = (undefined *)0x0;
                    }
                    else {
                      lVar9 = uVar16 + uVar15 + uVar19;
                      lVar10 = lVar9 + uVar11;
                      puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,puVar6,
                                          (long)puVar18 +
                                          (ulong)*(uint *)((long)puVar18 + lVar10 + -4) + lVar10);
                      _objc_retainAutoreleasedReturnValue();
                      lVar8 = (long)*(int *)((long)puVar18 + lVar8 + -4);
                      lVar10 = -lVar8;
                      uVar7 = *(ushort *)((long)puVar18 + (lVar9 - lVar8) + -4);
                    }
                    if ((8 < uVar7) &&
                       (uVar11 = (ulong)*(ushort *)
                                         ((long)puVar18 + lVar10 + uVar16 + uVar15 + uVar19 + 4),
                       uVar11 != 0)) {
                      lVar9 = uVar16 + uVar15 + uVar19 + uVar11;
                      puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                      func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,puVar6,
                                          (long)puVar18 +
                                          (ulong)*(uint *)((long)puVar18 + lVar9 + -4) + lVar9);
                      _objc_retainAutoreleasedReturnValue();
                      goto LAB_1050096cc;
                    }
                  }
                  puVar20 = (undefined *)0x0;
                }
LAB_1050096cc:
                func_0x00010c008260(puVar6,puVar6,puVar12,puVar21,puVar20);
                _objc_release(puVar20);
                _objc_release(puVar21);
                _objc_release(puVar12);
                func_0x00010c0fa700(puVar17);
                _objc_retainAutoreleasedReturnValue();
                goto LAB_10500990c;
              }
              goto LAB_1050094a0;
            }
            if (uVar7 < 9 || cVar2 != '\x02') {
              if ((uVar7 < 9 || cVar2 != '\x03') ||
                 (uVar15 = (ulong)*(ushort *)((long)puVar18 + lVar9 + uVar16 + 4), uVar15 == 0))
              goto LAB_1050094a0;
              lVar9 = uVar16 + uVar15;
              uVar19 = (ulong)*(uint *)((long)puVar18 + lVar9 + -4);
              puVar6 = PTR_PTR_1126b3bc0;
              _objc_alloc();
              lVar8 = uVar19 + lVar9;
              lVar10 = (long)*(int *)((long)puVar18 + lVar8 + -4);
              uVar7 = *(ushort *)((long)puVar18 + ((lVar9 + uVar19) - lVar10) + -4);
              if (uVar7 < 5) {
                puVar20 = (undefined *)0x0;
                puVar21 = (undefined *)0x0;
                puVar12 = (undefined *)0x0;
              }
              else {
                if (*(short *)((long)puVar18 + ((uVar16 + uVar15 + uVar19) - lVar10)) == 0) {
                  puVar12 = (undefined *)0x0;
                }
                else {
                  puVar12 = PTR__OBJC_CLASS___NSData_1126ae778;
                  _objc_alloc();
                  func_0x00010bffa160();
                  lVar10 = (long)*(int *)((long)puVar18 + lVar8 + -4);
                  uVar7 = *(ushort *)((long)puVar18 + ((uVar16 + uVar15 + uVar19) - lVar10) + -4);
                }
                lVar10 = -lVar10;
                if (uVar7 < 7) {
                  puVar21 = (undefined *)0x0;
                }
                else {
                  uVar11 = (ulong)*(ushort *)((long)puVar18 + lVar10 + uVar16 + uVar15 + uVar19 + 2)
                  ;
                  if (uVar11 == 0) {
                    puVar21 = (undefined *)0x0;
                  }
                  else {
                    lVar9 = uVar16 + uVar15 + uVar19;
                    lVar10 = lVar9 + uVar11;
                    puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,puVar6,
                                        (long)puVar18 +
                                        (ulong)*(uint *)((long)puVar18 + lVar10 + -4) + lVar10);
                    _objc_retainAutoreleasedReturnValue();
                    lVar8 = (long)*(int *)((long)puVar18 + lVar8 + -4);
                    lVar10 = -lVar8;
                    uVar7 = *(ushort *)((long)puVar18 + (lVar9 - lVar8) + -4);
                  }
                  if ((8 < uVar7) &&
                     (uVar11 = (ulong)*(ushort *)
                                       ((long)puVar18 + lVar10 + uVar16 + uVar15 + uVar19 + 4),
                     uVar11 != 0)) {
                    lVar9 = uVar16 + uVar15 + uVar19 + uVar11;
                    puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,puVar6,
                                        (long)puVar18 +
                                        (ulong)*(uint *)((long)puVar18 + lVar9 + -4) + lVar9);
                    _objc_retainAutoreleasedReturnValue();
                    goto LAB_1050098c4;
                  }
                }
                puVar20 = (undefined *)0x0;
              }
LAB_1050098c4:
              func_0x00010c008260(puVar6,puVar6,puVar12,puVar21,puVar20);
              _objc_release(puVar20);
              _objc_release(puVar21);
              _objc_release(puVar12);
              func_0x00010c2629a0(puVar17);
              _objc_retainAutoreleasedReturnValue();
            }
            else {
              uVar15 = (ulong)*(ushort *)((long)puVar18 + lVar9 + uVar16 + 4);
              if (uVar15 == 0) goto LAB_1050094a0;
              lVar9 = uVar16 + uVar15;
              uVar19 = (ulong)*(uint *)((long)puVar18 + lVar9 + -4);
              puVar6 = PTR_PTR_1126b3bb8;
              _objc_alloc();
              lVar8 = uVar19 + lVar9;
              lVar10 = (long)*(int *)((long)puVar18 + lVar8 + -4);
              uVar7 = *(ushort *)((long)puVar18 + ((lVar9 + uVar19) - lVar10) + -4);
              if (uVar7 < 5) {
                puVar20 = (undefined *)0x0;
                puVar21 = (undefined *)0x0;
                puVar12 = (undefined *)0x0;
              }
              else {
                if (*(short *)((long)puVar18 + ((uVar16 + uVar15 + uVar19) - lVar10)) == 0) {
                  puVar12 = (undefined *)0x0;
                }
                else {
                  puVar12 = PTR__OBJC_CLASS___NSData_1126ae778;
                  _objc_alloc();
                  func_0x00010bffa160();
                  lVar10 = (long)*(int *)((long)puVar18 + lVar8 + -4);
                  uVar7 = *(ushort *)((long)puVar18 + ((uVar16 + uVar15 + uVar19) - lVar10) + -4);
                }
                lVar10 = -lVar10;
                if (uVar7 < 7) {
                  puVar21 = (undefined *)0x0;
                }
                else {
                  uVar11 = (ulong)*(ushort *)((long)puVar18 + lVar10 + uVar16 + uVar15 + uVar19 + 2)
                  ;
                  if (uVar11 == 0) {
                    puVar21 = (undefined *)0x0;
                  }
                  else {
                    lVar9 = uVar16 + uVar15 + uVar19;
                    lVar10 = lVar9 + uVar11;
                    puVar21 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,puVar6,
                                        (long)puVar18 +
                                        (ulong)*(uint *)((long)puVar18 + lVar10 + -4) + lVar10);
                    _objc_retainAutoreleasedReturnValue();
                    lVar8 = (long)*(int *)((long)puVar18 + lVar8 + -4);
                    lVar10 = -lVar8;
                    uVar7 = *(ushort *)((long)puVar18 + (lVar9 - lVar8) + -4);
                  }
                  if ((8 < uVar7) &&
                     (uVar11 = (ulong)*(ushort *)
                                       ((long)puVar18 + lVar10 + uVar16 + uVar15 + uVar19 + 4),
                     uVar11 != 0)) {
                    lVar9 = uVar16 + uVar15 + uVar19 + uVar11;
                    puVar20 = PTR__OBJC_CLASS___NSString_1126ae4d0;
                    func_0x00010c25da80(PTR__OBJC_CLASS___NSString_1126ae4d0,puVar6,
                                        (long)puVar18 +
                                        (ulong)*(uint *)((long)puVar18 + lVar9 + -4) + lVar9);
                    _objc_retainAutoreleasedReturnValue();
                    goto LAB_105009810;
                  }
                }
                puVar20 = (undefined *)0x0;
              }
LAB_105009810:
              func_0x00010c008260(puVar6,puVar6,puVar12,puVar21,puVar20);
              _objc_release(puVar20);
              _objc_release(puVar21);
              _objc_release(puVar12);
              func_0x00010bf43620(puVar17);
              _objc_retainAutoreleasedReturnValue();
            }
LAB_10500990c:
            _objc_release(puVar6);
          }
          func_0x00010c01b9e0(puVar13);
          _objc_release(puVar17);
          _objc_release(puVar14);
          func_0x00010befa120(puVar5);
          _objc_release(puVar13);
          bVar3 = puVar18 != puVar1 + (ulong)*puVar1 + 1;
          puVar18 = puVar18 + 1;
        } while (bVar3);
      }
      puVar13 = puVar5;
      func_0x00010bf51e00(puVar5);
      _objc_release(puVar5);
    }
    func_0x00010c04a0e0();
    _objc_release(puVar13);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 105009a38; end: 105009ea3;  */

undefined4 * FUN_105009a38(undefined4 *param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  undefined ***pppuVar6;
  long lVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  undefined4 *puVar20;
  undefined4 *puVar21;
  undefined4 *puStack_168;
  undefined8 uStack_118;
  undefined **ppuStack_110;
  code *pcStack_108;
  undefined ***pppuStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuStack_110 = &PTR_FUN_110862ab8;
  pcStack_108 = FUN_105009fd4;
  pppuStack_f8 = &ppuStack_110;
  func_0x00010c245680();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  _objc_retain(param_2);
  lVar5 = param_2;
  func_0x00010bf52a60();
  lVar13 = lRam0000000000000000;
  if (lVar5 == 0) {
    puStack_168 = (undefined4 *)0x0;
    puVar21 = (undefined4 *)0x0;
  }
  else {
    puStack_168 = (undefined4 *)0x0;
    puVar21 = (undefined4 *)0x0;
    puVar16 = (undefined4 *)0x0;
    do {
      lVar15 = 0;
      do {
        if (lRam0000000000000000 != lVar13) {
          _objc_enumerationMutation(param_2);
        }
        uVar17 = *(undefined8 *)(lVar15 * 8);
        _objc_retain(uVar17);
        _objc_retain(uVar17);
        uStack_118 = uVar17;
        if (pppuStack_f8 == (undefined ***)0x0) {
          func_0x000104bfeb48();
          goto LAB_105009dd0;
        }
        pppuVar6 = pppuStack_f8;
        (*(code *)(*pppuStack_f8)[6])(pppuStack_f8,param_1,&uStack_118);
        _objc_release(uStack_118);
        if (puVar21 < puVar16) {
          *puVar21 = (int)pppuVar6;
          puVar20 = puStack_168;
        }
        else {
          lVar19 = (long)puVar21 - (long)puStack_168;
          uVar3 = (lVar19 >> 2) + 1;
          if (uVar3 >> 0x3e != 0) {
            FUN_10500a218();
LAB_105009dd0:
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x105009dd4);
            (*pcVar4)();
          }
          uVar14 = (long)puVar16 - (long)puStack_168 >> 1;
          if (uVar14 <= uVar3) {
            uVar14 = uVar3;
          }
          if (0x7ffffffffffffffb < (ulong)((long)puVar16 - (long)puStack_168)) {
            uVar14 = 0x3fffffffffffffff;
          }
          if (uVar14 >> 0x3e != 0) {
            func_0x000104bd35f4();
            goto LAB_105009dd0;
          }
          lVar7 = uVar14 << 2;
          __Znwm();
          puVar21 = (undefined4 *)(lVar7 + lVar19);
          puVar16 = (undefined4 *)(lVar7 + uVar14 * 4);
          puVar20 = puVar21 + -(lVar19 >> 2);
          *puVar21 = (int)pppuVar6;
          _memcpy(puVar20,puStack_168,lVar19);
          if (puStack_168 != (undefined4 *)0x0) {
            __ZdlPv(puStack_168);
          }
        }
        puStack_168 = puVar20;
        puVar21 = puVar21 + 1;
        _objc_release(uVar17);
        lVar15 = lVar15 + 1;
      } while (lVar5 != lVar15);
      lVar5 = param_2;
      func_0x00010bf52a60();
    } while (lVar5 != 0);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar13 = 0x20;
LAB_105009c68:
    (**(code **)((long)*pppuStack_f8 + lVar13))();
  }
  else if (pppuStack_f8 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_105009c68;
  }
  uVar3 = (long)puVar21 - (long)puStack_168;
  puVar16 = (undefined4 *)&UNK_10dd8df07;
  if (uVar3 != 0) {
    puVar16 = puStack_168;
  }
  *(undefined1 *)((long)param_1 + 0x46) = 1;
  func_0x0001001cddd0(param_1,uVar3,4);
  func_0x0001001cddd0(param_1,uVar3,4);
  if (puStack_168 != puVar21) {
    lVar13 = (long)uVar3 >> 2;
    do {
      iVar2 = puVar16[lVar13 + -1];
      func_0x0001001ce088(param_1,4);
      func_0x0001001ce0bc(param_1,(((param_1[8] - param_1[0xc]) + param_1[10]) - iVar2) + 4);
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  *(undefined1 *)((long)param_1 + 0x46) = 0;
  puVar21 = param_1;
  func_0x0001001ce0bc(param_1,uVar3 >> 2);
  *(undefined1 *)((long)param_1 + 0x46) = 1;
  uVar17 = *(undefined8 *)(param_1 + 10);
  uVar1 = *(undefined8 *)(param_1 + 0xc);
  uVar18 = *(undefined8 *)(param_1 + 8);
  if ((int)puVar21 != 0) {
    func_0x0001001ce088(param_1,4);
    func_0x0001001ce354(param_1,4,(((param_1[8] - param_1[0xc]) + param_1[10]) - (int)puVar21) + 4,0
                       );
  }
  pcVar12 = (char *)(ulong)(uint)(((int)uVar18 - (int)uVar1) + (int)uVar17);
  func_0x0001001ce548();
  puVar21 = param_1;
  if (puStack_168 != (undefined4 *)0x0) {
    __ZdlPv();
    puVar21 = puStack_168;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  _objc_release(param_2);
  _objc_release(param_2);
  _objc_release(param_2);
  if (pppuStack_f8 == &ppuStack_110) {
    lVar13 = 0x20;
LAB_105009e88:
    (**(code **)((long)*pppuStack_f8 + lVar13))();
  }
  else if (pppuStack_f8 != (undefined ***)0x0) {
    lVar13 = 0x28;
    goto LAB_105009e88;
  }
  __Unwind_Resume(puVar21);
  _objc_retain(pcVar12);
  if (pcVar12 == (char *)0x0) {
    puVar21 = (undefined4 *)0x0;
    goto LAB_105009f84;
  }
  pcVar8 = pcVar12;
  _CFStringGetCStringPtr(pcVar12,0x8000100);
  if (pcVar8 != (char *)0x0) {
    pcVar9 = pcVar8;
    _strlen(pcVar8);
    func_0x0001001cde08(puVar21,pcVar8,pcVar9);
    goto LAB_105009f84;
  }
  pcVar8 = pcVar12;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar8 == (char *)0x0) {
    pcVar8 = pcVar12;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar8 != (char *)0x0) goto LAB_105009f44;
    puVar21 = (undefined4 *)0x0;
  }
  else {
LAB_105009f44:
    pcVar10 = pcVar8;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar11 = pcVar8;
    func_0x00010c08fa60(pcVar8);
    pcVar9 = "";
    if (pcVar10 != (char *)0x0) {
      pcVar9 = pcVar10;
    }
    func_0x0001001cde08(puVar21,pcVar9,pcVar11);
  }
  _objc_release(pcVar8);
LAB_105009f84:
  _objc_release(pcVar12);
  return puVar21;
}



/* Entry: 105009ea4; end: 105009fd3;  */

undefined8 FUN_105009ea4(undefined8 param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  
  _objc_retain(param_2);
  if (param_2 == (char *)0x0) {
    param_1 = 0;
    goto LAB_105009f84;
  }
  pcVar1 = param_2;
  _CFStringGetCStringPtr(param_2,0x8000100);
  if (pcVar1 != (char *)0x0) {
    pcVar2 = pcVar1;
    _strlen(pcVar1);
    func_0x0001001cde08(param_1,pcVar1,pcVar2);
    goto LAB_105009f84;
  }
  pcVar1 = param_2;
  func_0x00010bf64920();
  _objc_retainAutoreleasedReturnValue();
  if (pcVar1 == (char *)0x0) {
    pcVar1 = param_2;
    func_0x00010bf64940();
    _objc_retainAutoreleasedReturnValue();
    if (pcVar1 != (char *)0x0) goto LAB_105009f44;
    param_1 = 0;
  }
  else {
LAB_105009f44:
    pcVar3 = pcVar1;
    _objc_retainAutorelease();
    func_0x00010bf25f00();
    pcVar4 = pcVar1;
    func_0x00010c08fa60(pcVar1);
    pcVar2 = "";
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
    }
    func_0x0001001cde08(param_1,pcVar2,pcVar4);
  }
  _objc_release(pcVar1);
LAB_105009f84:
  _objc_release(param_2);
  return param_1;
}



/* Entry: 105009fd4; end: 10500a217;  */

ulong FUN_105009fd4(ulong param_1,undefined8 param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uStack_b8;
  undefined8 *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  char *pcStack_90;
  undefined4 uStack_88;
  undefined8 uStack_80;
  undefined8 *puStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  
  _objc_retain(param_2);
  uVar6 = param_2;
  func_0x00010c23f240(param_2);
  _objc_retainAutoreleasedReturnValue();
  puStack_78 = &uStack_80;
  uStack_80 = 0;
  uStack_70 = 0x2020000000;
  uStack_68 = 0;
  puStack_b0 = &uStack_b8;
  uStack_b8 = 0;
  uStack_a8 = 0x3812000000;
  pcStack_a0 = FUN_10500a22c;
  uStack_98 = 0x10500a238;
  pcStack_90 = "";
  uStack_88 = 0;
  func_0x00010c0bf340();
  uVar1 = *(uint *)(puStack_78 + 3);
  uVar2 = *(undefined4 *)(puStack_b0 + 6);
  __Block_object_dispose(&uStack_b8,8);
  __Block_object_dispose(&uStack_80,8);
  _objc_release(uVar6);
  uVar6 = param_2;
  func_0x00010bfe5ec0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  FUN_105009ea4(param_1,uVar6);
  *(undefined1 *)(param_1 + 0x46) = 1;
  iVar3 = *(int *)(param_1 + 0x20);
  iVar4 = *(int *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x28);
  func_0x000100c3b11c(param_1,8,uVar2);
  func_0x0001001ce2e4(param_1,4,uVar7 & 0xffffffff);
  func_0x000100ab13ac(param_1,6,uVar1 & 0xff,0);
  func_0x0001001ce548(param_1,(iVar3 - iVar4) + iVar5);
  _objc_release(uVar6);
  _objc_release(param_2);
  return param_1;
}



/* Entry: 10500a218; end: 10500a22b;  */

void FUN_10500a218(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_10f62a4d8;
  func_0x000104bd47e8();
  *(undefined4 *)(puVar1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return;
}



/* Entry: 10500a22c; end: 10500a23b;  */

void FUN_10500a22c(long param_1,long param_2)

{
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(param_2 + 0x30);
  return;
}



/* Entry: 10500a23c; end: 10500a42f;  */

void FUN_10500a23c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  uVar9 = *(ulong *)(param_1 + 0x30);
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar4 == 0) {
    uVar10 = 0;
  }
  else {
    lVar5 = lVar4;
    _objc_retainAutorelease(lVar4);
    func_0x00010bf25f00();
    lVar6 = lVar4;
    func_0x00010c08fa60(lVar4);
    uVar10 = uVar9;
    func_0x0001001d1030(uVar9,lVar5,lVar6);
  }
  _objc_release(lVar4);
  lVar5 = param_2;
  func_0x00010bf393c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  FUN_105009ea4(uVar9,lVar5);
  lVar6 = param_2;
  func_0x00010bf39380(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  FUN_105009ea4(uVar9,lVar6);
  *(undefined1 *)(uVar9 + 0x46) = 1;
  iVar1 = *(int *)(uVar9 + 0x20);
  iVar2 = *(int *)(uVar9 + 0x30);
  iVar3 = *(int *)(uVar9 + 0x28);
  func_0x0001001ce2e4(uVar9,8,uVar8 & 0xffffffff);
  func_0x0001001ce2e4(uVar9,6,uVar7 & 0xffffffff);
  func_0x0001001ce220(uVar9,4,uVar10 & 0xffffffff);
  func_0x0001001ce548(uVar9,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10500a430; end: 10500a49b;  */

void FUN_10500a430(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  return;
}



/* Entry: 10500a49c; end: 10500a68f;  */

void FUN_10500a49c(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 2;
  uVar9 = *(ulong *)(param_1 + 0x30);
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar4 == 0) {
    uVar10 = 0;
  }
  else {
    lVar5 = lVar4;
    _objc_retainAutorelease(lVar4);
    func_0x00010bf25f00();
    lVar6 = lVar4;
    func_0x00010c08fa60(lVar4);
    uVar10 = uVar9;
    func_0x0001001d1030(uVar9,lVar5,lVar6);
  }
  _objc_release(lVar4);
  lVar5 = param_2;
  func_0x00010bf393c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  FUN_105009ea4(uVar9,lVar5);
  lVar6 = param_2;
  func_0x00010bf39380(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  FUN_105009ea4(uVar9,lVar6);
  *(undefined1 *)(uVar9 + 0x46) = 1;
  iVar1 = *(int *)(uVar9 + 0x20);
  iVar2 = *(int *)(uVar9 + 0x30);
  iVar3 = *(int *)(uVar9 + 0x28);
  func_0x0001001ce2e4(uVar9,8,uVar8 & 0xffffffff);
  func_0x0001001ce2e4(uVar9,6,uVar7 & 0xffffffff);
  func_0x0001001ce220(uVar9,4,uVar10 & 0xffffffff);
  func_0x0001001ce548(uVar9,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10500a690; end: 10500a883;  */

void FUN_10500a690(long param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  _objc_retain(param_2);
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 3;
  uVar9 = *(ulong *)(param_1 + 0x30);
  _objc_retain(param_2);
  lVar4 = param_2;
  func_0x00010bf63640();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  if (lVar4 == 0) {
    uVar10 = 0;
  }
  else {
    lVar5 = lVar4;
    _objc_retainAutorelease(lVar4);
    func_0x00010bf25f00();
    lVar6 = lVar4;
    func_0x00010c08fa60(lVar4);
    uVar10 = uVar9;
    func_0x0001001d1030(uVar9,lVar5,lVar6);
  }
  _objc_release(lVar4);
  lVar5 = param_2;
  func_0x00010bf393c0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar9;
  FUN_105009ea4(uVar9,lVar5);
  lVar6 = param_2;
  func_0x00010bf39380(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar9;
  FUN_105009ea4(uVar9,lVar6);
  *(undefined1 *)(uVar9 + 0x46) = 1;
  iVar1 = *(int *)(uVar9 + 0x20);
  iVar2 = *(int *)(uVar9 + 0x30);
  iVar3 = *(int *)(uVar9 + 0x28);
  func_0x0001001ce2e4(uVar9,8,uVar8 & 0xffffffff);
  func_0x0001001ce2e4(uVar9,6,uVar7 & 0xffffffff);
  func_0x0001001ce220(uVar9,4,uVar10 & 0xffffffff);
  func_0x0001001ce548(uVar9,(iVar1 - iVar2) + iVar3);
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(param_2);
  *(int *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x30) = (int)uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10500a884; end: 10500a88b;  */

void FUN_10500a884(void)

{
  return;
}



/* Entry: 10500a88c; end: 10500a8bf;  */

void FUN_10500a88c(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x10;
  __Znwm();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *puVar1 = &PTR_FUN_110862ab8;
  puVar1[1] = uVar2;
  return;
}



/* Entry: 10500a8c0; end: 10500a8ff;  */

void FUN_10500a8c0(long param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  *param_2 = &PTR_FUN_110862ab8;
  param_2[1] = uVar1;
  return;
}



/* Entry: 10500a900; end: 10500a93b;  */

long FUN_10500a900(long param_1,undefined8 param_2)

{
  func_0x0001004a5364(param_2,&PTR_DAT_110862b28);
  param_1 = param_1 + 8;
  if ((int)param_2 == 0) {
    param_1 = 0;
  }
  return param_1;
}



/* Entry: 10500a93c; end: 10500a947;  */

undefined ** FUN_10500a93c(void)

{
  return &PTR_DAT_110862b28;
}



/* Entry: 10500a948; end: 10500a9ab;  */

void FUN_10500a948(ulong param_1,uint param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  
  if (param_3 == 0) {
    return;
  }
  func_0x0001001ce088(param_1,4);
  iVar1 = (((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x30)) + *(int *)(param_1 + 0x28)) -
          (int)param_3) + 4;
  if ((iVar1 == 0) && (*(char *)(param_1 + 0x50) != '\x01')) {
    return;
  }
  uVar3 = param_1;
  func_0x0001001ce0bc(param_1,iVar1);
  puVar4 = *(ulong **)(param_1 + 0x38);
  if ((ulong)(*(long *)(param_1 + 0x30) - (long)puVar4) < 8) {
    func_0x0001001cde7c(param_1,8);
    puVar4 = *(ulong **)(param_1 + 0x38);
  }
  *puVar4 = uVar3 & 0xffffffff | (ulong)param_2 << 0x20;
  *(long *)(param_1 + 0x38) = *(long *)(param_1 + 0x38) + 8;
  *(int *)(param_1 + 0x40) = *(int *)(param_1 + 0x40) + 1;
  uVar2 = (uint)*(ushort *)(param_1 + 0x44);
  if (*(ushort *)(param_1 + 0x44) <= param_2) {
    uVar2 = param_2;
  }
  *(short *)(param_1 + 0x44) = (short)uVar2;
  return;
}



/* Entry: 10500a9ac; end: 10500a9d7; +[SCGrapheneAuraMetric auraSess] */

void FUN_10500a9ac(void)

{
  _objc_alloc(PTR_PTR_1126b3a58);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10500a9d8; end: 10500aa03; +[SCGrapheneAuraMetric auraOperaSess] */

void FUN_10500a9d8(void)

{
  _objc_alloc(PTR_PTR_1126b3a58);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10500aa04; end: 10500aa2f; +[SCGrapheneAuraMetric auraOperaSessDurMs] */

void FUN_10500aa04(void)

{
  _objc_alloc(PTR_PTR_1126b3a58);
  func_0x00010c01b780();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


