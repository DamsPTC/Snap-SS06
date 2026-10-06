/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 007372e4; end: 0073737b; -[FBTweak isChanged] */

bool FUN_007372e4(ulong param_1)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar2 = param_1;
  func_0x00787400();
  if ((uVar2 & 1) == 0) {
    uVar2 = param_1;
    func_0x007814a0();
    _objc_retainAutoreleasedReturnValue();
    if (uVar2 == 0) {
      bVar1 = false;
    }
    else {
      uVar3 = param_1;
      func_0x007814a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00781ce0(param_1);
      _objc_retainAutoreleasedReturnValue();
      bVar1 = uVar3 != param_1;
      _objc_release();
      _objc_release(uVar3);
    }
    _objc_release(uVar2);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}



/* Entry: 0073737c; end: 00737383; -[FBTweak identifier] */

undefined8 FUN_0073737c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 00737384; end: 0073738b; -[FBTweak name] */

undefined8 FUN_00737384(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 0073738c; end: 00737393; -[FBTweak setName:] */

void FUN_0073738c(void)

{
                    /* WARNING: Could not recover jumptable at 0x0077aad4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_setProperty_nonatomic_copy_0099ade8)();
  return;
}



/* Entry: 00737394; end: 0073739b; -[FBTweak defaultValue] */

undefined8 FUN_00737394(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 0073739c; end: 007373cb; -[FBTweak setDefaultValue:] */

void FUN_0073739c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 007373cc; end: 007373d3; -[FBTweak currentValue] */

undefined8 FUN_007373cc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 007373d4; end: 007373db; -[FBTweak possibleValues] */

undefined8 FUN_007373d4(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 007373dc; end: 0073740b; -[FBTweak setPossibleValues:] */

void FUN_007373dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0073740c; end: 00737413; -[FBTweak actionBlock] */

undefined8 FUN_0073740c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 00737414; end: 00737443; -[FBTweak setActionBlock:] */

void FUN_00737414(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00737444; end: 0073744b; -[FBTweak stepValue] */

undefined8 FUN_00737444(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 0073744c; end: 0073747b; -[FBTweak setStepValue:] */

void FUN_0073744c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 0073747c; end: 00737483; -[FBTweak precisionValue] */

undefined8 FUN_0073747c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 00737484; end: 007374b3; -[FBTweak setPrecisionValue:] */

void FUN_00737484(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 007374b4; end: 00737537; -[FBTweak .cxx_destruct] */

void FUN_007374b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00737538; end: 007376ef; -[FBTweakCategory initWithCoder:] */

undefined1 * FUN_00737538(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 **ppuVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
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
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00785c60();
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00789700();
    uVar8 = *(undefined8 *)(param_1 + 8);
    *(undefined1 **)(param_1 + 8) = puVar3;
    _objc_release(uVar8);
    _objc_release(puVar2);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar9 = *(long *)(param_1 + 8);
    _objc_retain(lVar9);
    lVar4 = lVar9;
    func_0x00780ea0();
    if (lVar4 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar9);
          }
          uVar8 = *(undefined8 *)(lStack_128 + lVar12 * 8);
          uVar10 = *(undefined8 *)(param_1 + 0x10);
          func_0x00789760(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x0078f4a0(uVar10);
          _objc_release(uVar8);
          lVar12 = lVar12 + 1;
        } while (lVar4 != lVar12);
        lVar4 = lVar9;
        puVar7 = &uStack_130;
        func_0x00780ea0();
      } while (lVar4 != 0);
    }
    _objc_release(lVar9);
    puVar2 = (undefined1 *)puVar7;
  }
  _objc_release(puVar1);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_160;
  pcStack_138 = FUN_007376f0;
  puStack_150 = param_1;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  puStack_158 = PTR_PTR_00ac4630;
  puStack_160 = puVar1;
  _objc_msgSendSuper2(&puStack_160,PTR_s_init_00abbf70);
  if (ppuVar5 != (undefined1 **)0x0) {
    puVar1 = puVar2;
    func_0x00780e20();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x18);
    *(undefined1 **)((long)ppuVar5 + 0x18) = puVar1;
    _objc_release(uVar8);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_alloc();
    func_0x00784f20();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 8);
    *(undefined **)((long)ppuVar5 + 8) = puVar6;
    _objc_release(uVar8);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc();
    func_0x00784f20();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x10);
    *(undefined **)((long)ppuVar5 + 0x10) = puVar6;
    _objc_release(uVar8);
  }
  _objc_release(puVar2);
  return (undefined1 *)ppuVar5;
}



/* Entry: 007376f0; end: 007377af; -[FBTweakCategory initWithName:] */

undefined1 * FUN_007376f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac4630;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_alloc();
    func_0x00784f20();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc();
    func_0x00784f20();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 007377b0; end: 0073780f; -[FBTweakCategory encodeWithCoder:] */

void FUN_007377b0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00782780(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_00a215a0);
  func_0x00782780(param_3,param_2,*(undefined8 *)(param_1 + 8),
                  &PTR____CFConstantStringClassReference_00a4a520);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00737810; end: 00737817; -[FBTweakCategory tweakCollectionWithName:] */

void FUN_00737810(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00789f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_objectForKeyedSubscript__00abd4d0);
  return;
}



/* Entry: 00737818; end: 0073782f; -[FBTweakCategory tweakCollections] */

void FUN_00737818(long param_1)

{
  func_0x00780e20(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00737830; end: 007378a3; -[FBTweakCategory addTweakCollection:] */

void FUN_00737830(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x0077e720(uVar2,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = param_3;
  func_0x00789760(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4a0(uVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 007378a4; end: 00737913; -[FBTweakCategory removeTweakCollection:] */

void FUN_007378a4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x0078b460(uVar2,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = param_3;
  func_0x00789760(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x0078b4a0(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 00737914; end: 00737a5f; -[FBTweakCategory changedTweakCollections] */

undefined * FUN_00737914(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  func_0x00792ec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00780ea0();
  if (lVar2 != 0) {
    lVar6 = *plStack_120;
    do {
      lVar7 = 0;
      do {
        if (*plStack_120 != lVar6) {
          _objc_enumerationMutation(param_1);
        }
        lVar5 = *(long *)(lStack_128 + lVar7 * 8);
        lVar3 = lVar5;
        func_0x00780100();
        _objc_retainAutoreleasedReturnValue();
        lVar4 = lVar3;
        func_0x00780e80();
        _objc_release(lVar3);
        if (lVar4 != 0) {
          func_0x0077e720(puVar1,param_2,lVar5);
        }
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_1;
      func_0x00780ea0(param_1,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_1 + 0x18);
}



/* Entry: 00737a60; end: 00737a67; -[FBTweakCategory name] */

undefined8 FUN_00737a60(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00737a68; end: 00737aa3; -[FBTweakCategory .cxx_destruct] */

void FUN_00737a68(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00737aa4; end: 00737c5b; -[FBTweakCollection initWithCoder:] */

undefined1 * FUN_00737aa4(undefined1 *param_1,undefined8 param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 **ppuVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined1 *puStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined1 *puStack_148;
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
  long lStack_70;
  
  puVar7 = &uStack_130;
  lStack_70 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  puVar1 = param_3;
  func_0x00781b00();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00785c60();
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar2;
    func_0x00789700();
    uVar8 = *(undefined8 *)(param_1 + 8);
    *(undefined1 **)(param_1 + 8) = puVar3;
    _objc_release(uVar8);
    _objc_release(puVar2);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar9 = *(long *)(param_1 + 8);
    _objc_retain(lVar9);
    lVar4 = lVar9;
    func_0x00780ea0();
    if (lVar4 != 0) {
      lVar11 = *plStack_120;
      do {
        lVar12 = 0;
        do {
          if (*plStack_120 != lVar11) {
            _objc_enumerationMutation(lVar9);
          }
          uVar8 = *(undefined8 *)(lStack_128 + lVar12 * 8);
          uVar10 = *(undefined8 *)(param_1 + 0x10);
          func_0x007845a0(uVar8);
          _objc_retainAutoreleasedReturnValue();
          func_0x0078f4a0(uVar10);
          _objc_release(uVar8);
          lVar12 = lVar12 + 1;
        } while (lVar4 != lVar12);
        lVar4 = lVar9;
        puVar7 = &uStack_130;
        func_0x00780ea0();
      } while (lVar4 != 0);
    }
    _objc_release(lVar9);
    puVar2 = (undefined1 *)puVar7;
  }
  _objc_release(puVar1);
  puVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_70) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar5 = &puStack_160;
  pcStack_138 = FUN_00737c5c;
  puStack_150 = param_1;
  puStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar2);
  puStack_158 = PTR_PTR_00ac4638;
  puStack_160 = puVar1;
  _objc_msgSendSuper2(&puStack_160,PTR_s_init_00abbf70);
  if (ppuVar5 != (undefined1 **)0x0) {
    puVar1 = puVar2;
    func_0x00780e20();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x18);
    *(undefined1 **)((long)ppuVar5 + 0x18) = puVar1;
    _objc_release(uVar8);
    puVar6 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_alloc();
    func_0x00784f20();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 8);
    *(undefined **)((long)ppuVar5 + 8) = puVar6;
    _objc_release(uVar8);
    puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc();
    func_0x00784f20();
    uVar8 = *(undefined8 *)((long)ppuVar5 + 0x10);
    *(undefined **)((long)ppuVar5 + 0x10) = puVar6;
    _objc_release(uVar8);
  }
  _objc_release(puVar2);
  return (undefined1 *)ppuVar5;
}



/* Entry: 00737c5c; end: 00737d1b; -[FBTweakCollection initWithName:] */

undefined1 * FUN_00737c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac4638;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar4 = param_3;
    func_0x00780e20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar4;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_alloc();
    func_0x00784f20();
    uVar4 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc();
    func_0x00784f20();
    uVar4 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar4);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00737d1c; end: 00737d7b; -[FBTweakCollection encodeWithCoder:] */

void FUN_00737d1c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00782780(param_3,param_2,uVar1,&PTR____CFConstantStringClassReference_00a215a0);
  func_0x00782780(param_3,param_2,*(undefined8 *)(param_1 + 8),
                  &PTR____CFConstantStringClassReference_00a4a540);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00737d7c; end: 00737d83; -[FBTweakCollection tweakWithIdentifier:] */

void FUN_00737d7c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00789f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_objectForKeyedSubscript__00abd4d0);
  return;
}



/* Entry: 00737d84; end: 00737d9b; -[FBTweakCollection tweaks] */

void FUN_00737d84(long param_1)

{
  func_0x00780e20(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00737d9c; end: 00737e0f; -[FBTweakCollection addTweak:] */

void FUN_00737d9c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x0077e720(uVar2,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = param_3;
  func_0x007845a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4a0(uVar1,param_2,param_3,uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 00737e10; end: 00737e7f; -[FBTweakCollection removeTweak:] */

void FUN_00737e10(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x0078b460(uVar2,param_2,param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = param_3;
  func_0x007845a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x0078b4a0(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar2);
  return;
}



/* Entry: 00737e80; end: 00737fa7; -[FBTweakCollection changedTweaks] */

undefined * FUN_00737e80(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
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
  
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_00ac29a0);
  lStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  func_0x00792f00();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00780ea0();
  if (lVar2 != 0) {
    lVar5 = *plStack_110;
    do {
      lVar6 = 0;
      do {
        if (*plStack_110 != lVar5) {
          _objc_enumerationMutation(param_1);
        }
        uVar4 = *(undefined8 *)(lStack_118 + lVar6 * 8);
        uVar3 = uVar4;
        func_0x00787560();
        if ((int)uVar3 != 0) {
          func_0x0077e720(puVar1,param_2,uVar4);
        }
        lVar6 = lVar6 + 1;
      } while (lVar2 != lVar6);
      lVar2 = param_1;
      func_0x00780ea0(param_1,param_2,&uStack_120,auStack_d8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(puVar1);
    return puVar1;
  }
  ___stack_chk_fail();
  return *(undefined **)(param_1 + 0x18);
}



/* Entry: 00737fa8; end: 00737faf; -[FBTweakCollection name] */

undefined8 FUN_00737fa8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 00737fb0; end: 00737feb; -[FBTweakCollection .cxx_destruct] */

void FUN_00737fb0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00737fec; end: 007380c7; -[FBTweakShakeWindow initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_00737fec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_00ac4640;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__00abc2c8);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_00ac5f58) = 1;
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50;
    func_0x00781c00(PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e7c0();
    _objc_release(puVar2);
    puVar2 = PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50;
    func_0x00781c00(PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50);
    _objc_retainAutoreleasedReturnValue();
    func_0x0077e7c0();
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 007380c8; end: 0073817b; -[FBTweakShakeWindow dealloc] */

void FUN_007380c8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50;
  func_0x00781c00(PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078b500();
  _objc_release(puVar1);
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50;
  func_0x00781c00(PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078b500();
  _objc_release(puVar1);
  puStack_38 = PTR_PTR_00ac4640;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_dealloc_00ab6538);
  return;
}



/* Entry: 0073817c; end: 0073818b; -[FBTweakShakeWindow _applicationWillResignActiveWithNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073817c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_00ac5f58) = 0;
  return;
}



/* Entry: 0073818c; end: 0073819f; -[FBTweakShakeWindow _applicationDidBecomeActiveWithNotification:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0073818c(long param_1)

{
  *(undefined1 *)(param_1 + _DAT_00ac5f58) = 1;
  return;
}



/* Entry: 007381a0; end: 0073820f; -[FBTweakShakeWindow tweakViewControllerPressedDone:] */

void FUN_007381a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNotificationCenter_00ac2d50;
  _objc_retain(param_3);
  func_0x00781c00(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078a760();
  _objc_release(puVar1);
  func_0x00782240(param_3,param_2,1,0);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00738210; end: 00738317; -[FBTweakShakeWindow _presentTweaks] */

void FUN_00738210(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  func_0x0078bd00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x0078a960();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar3 = PTR_PTR_00ac3328;
  while (PTR_PTR_00ac3328 = puVar3, uVar1 != 0) {
    uVar2 = param_1;
    func_0x0078a960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    uVar1 = uVar2;
    func_0x0078a960();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    param_1 = uVar2;
    puVar3 = PTR_PTR_00ac3328;
  }
  _objc_opt_class(puVar3);
  uVar1 = param_1;
  _objc_opt_isKindOfClass(param_1,puVar3);
  if ((uVar1 & 1) == 0) {
    puVar3 = PTR_PTR_00ac3320;
    func_0x007915a0(PTR_PTR_00ac3320);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = PTR_PTR_00ac3328;
    _objc_alloc(PTR_PTR_00ac3328);
    func_0x007868e0();
    func_0x00790d00();
    func_0x0078a900(param_1);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_1);
  return;
}



/* Entry: 00738318; end: 0073831f; -[FBTweakShakeWindow _shouldPresentTweaks] */

undefined8 FUN_00738318(void)

{
  return 0;
}



/* Entry: 00738320; end: 007383ef; -[FBTweakShakeWindow motionBegan:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00738320(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  if (param_3 == 1) {
    *(undefined1 *)(param_1 + _DAT_00ac5f5c) = 1;
    _dispatch_time(0,400000000);
    puStack_58 = PTR___NSConcreteStackBlock_00999f30;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_007383f0;
    puStack_40 = &UNK_009e3fc0;
    lStack_38 = param_1;
    _dispatch_after();
  }
  puStack_60 = PTR_PTR_00ac4640;
  lStack_68 = param_1;
  _objc_msgSendSuper2(&lStack_68,PTR_s_motionBegan_withEvent__00ab9548,param_3,param_4);
  _objc_release(param_4);
  return;
}



/* Entry: 007383f0; end: 00738427;  */

void FUN_007383f0(long param_1)

{
  int iVar1;
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x0077dc00();
  if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0077d610. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_0099ad68)
              (*(undefined8 *)(param_1 + 0x20),PTR_s__presentTweaks_00aba278);
    return;
  }
  return;
}



/* Entry: 00738428; end: 0073846f; -[FBTweakShakeWindow motionEnded:withEvent:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00738428(long param_1,undefined8 param_2,long param_3)

{
  long lStack_20;
  undefined *puStack_18;
  
  if (param_3 == 1) {
    *(undefined1 *)(param_1 + _DAT_00ac5f5c) = 0;
  }
  puStack_18 = PTR_PTR_00ac4640;
  lStack_20 = param_1;
  _objc_msgSendSuper2(&lStack_20,PTR_s_motionEnded_withEvent__00ab9550);
  return;
}



/* Entry: 00738470; end: 007384f7; +[FBTweakStore sharedInstance] */

void FUN_00738470(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  puStack_48 = PTR___NSConcreteStackBlock_00999f30;
  uStack_40 = 0xc0000000;
  pcStack_38 = FUN_007384f8;
  puStack_30 = &UNK_00a023b0;
  uStack_28 = param_1;
  if (lRam0000000000b64550 != -1) {
    _dispatch_once(0xb64550,&puStack_48);
  }
  uVar1 = uRam0000000000b64548;
  _objc_retain(uRam0000000000b64548);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)(uVar1);
  return;
}



/* Entry: 007384f8; end: 0073851f;  */

void FUN_007384f8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_alloc_init();
  uVar1 = uRam0000000000b64548;
  uRam0000000000b64548 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(uVar1);
  return;
}



/* Entry: 00738520; end: 007386af; -[FBTweakStore initWithCoder:] */

undefined1 * FUN_00738520(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_160;
  undefined *puStack_158;
  undefined1 *puStack_150;
  undefined8 uStack_148;
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
  
  lStack_68 = *(long *)PTR____stack_chk_guard_00999f88;
  _objc_retain(param_3);
  func_0x007849a0();
  if (param_1 != (undefined1 *)0x0) {
    uVar6 = param_3;
    func_0x00781b00();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00789700();
    uVar4 = *(undefined8 *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = uVar7;
    _objc_release(uVar4);
    _objc_release(uVar6);
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar5 = *(long *)(param_1 + 8);
    _objc_retain(lVar5);
    lVar1 = lVar5;
    func_0x00780ea0();
    if (lVar1 != 0) {
      lVar8 = *plStack_120;
      do {
        lVar9 = 0;
        do {
          if (*plStack_120 != lVar8) {
            _objc_enumerationMutation(lVar5);
          }
          uVar6 = *(undefined8 *)(lStack_128 + lVar9 * 8);
          uVar7 = *(undefined8 *)(param_1 + 0x10);
          func_0x00789760(uVar6);
          _objc_retainAutoreleasedReturnValue();
          func_0x0078f4a0(uVar7);
          _objc_release(uVar6);
          lVar9 = lVar9 + 1;
        } while (lVar1 != lVar9);
        lVar1 = lVar5;
        func_0x00780ea0();
      } while (lVar1 != 0);
    }
    _objc_release(lVar5);
  }
  uVar6 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_68) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar2 = &uStack_160;
  pcStack_138 = FUN_007386b0;
  puStack_158 = PTR_PTR_00ac4648;
  uStack_160 = uVar6;
  puStack_150 = param_1;
  uStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&uStack_160,PTR_s_init_00abbf70);
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_alloc();
    func_0x00784f20();
    uVar6 = *(undefined8 *)((long)puVar2 + 8);
    *(undefined **)((long)puVar2 + 8) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc();
    func_0x00784f20();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x10);
    *(undefined **)((long)puVar2 + 0x10) = puVar3;
    _objc_release(uVar6);
    puVar3 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_alloc();
    func_0x00784f20();
    uVar6 = *(undefined8 *)((long)puVar2 + 0x18);
    *(undefined **)((long)puVar2 + 0x18) = puVar3;
    _objc_release(uVar6);
  }
  return (undefined1 *)puVar2;
}



/* Entry: 007386b0; end: 0073875f; -[FBTweakStore init] */

undefined1 * FUN_007386b0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac4648;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_alloc();
    func_0x00784f20();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined **)((long)puVar1 + 8) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_00ac29c8;
    _objc_alloc();
    func_0x00784f20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    _objc_alloc();
    func_0x00784f20();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar2;
    _objc_release(uVar3);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 00738760; end: 00738777; -[FBTweakStore encodeWithCoder:] */

void FUN_00738760(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00782790. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (param_3,PTR_s_encodeObject_forKey__00abb6d8,*(undefined8 *)(param_1 + 8),
             &PTR____CFConstantStringClassReference_00a4a560);
  return;
}



/* Entry: 00738778; end: 0073878f; -[FBTweakStore tweakCategories] */

void FUN_00738778(long param_1)

{
  func_0x00780e20(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00738790; end: 00738797; -[FBTweakStore tweakCategoryWithName:] */

void FUN_00738790(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00789f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_objectForKeyedSubscript__00abd4d0);
  return;
}



/* Entry: 00738798; end: 00738807; -[FBTweakStore addTweakCategory:] */

void FUN_00738798(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00789760(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078f4a0(uVar2,param_2,param_3,uVar1);
  _objc_release(uVar1);
  func_0x0077e720(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00738808; end: 00738873; -[FBTweakStore removeTweakCategory:] */

void FUN_00738808(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00789760(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x0078b4a0(uVar2,param_2,uVar1);
  _objc_release(uVar1);
  func_0x0078b460(*(undefined8 *)(param_1 + 8),param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00738874; end: 007388ab; -[FBTweakStore addResetBlock:] */

void FUN_00738874(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retainBlock(param_3);
  func_0x0077e720(uVar1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 007388ac; end: 00738b87; -[FBTweakStore reset] */

/* WARNING: Removing unreachable block (ram,0x007389f8) */
/* WARNING: Removing unreachable block (ram,0x00738938) */
/* WARNING: Removing unreachable block (ram,0x00738998) */
/* WARNING: Removing unreachable block (ram,0x00738b04) */

void FUN_007388ac(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  lVar8 = *(long *)PTR____stack_chk_guard_00999f88;
  lVar7 = param_1;
  func_0x00792ea0();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00780ea0();
  while (lVar1 != 0) {
    lVar12 = 0;
    do {
      lVar2 = *(long *)(lVar12 * 8);
      func_0x00792ec0();
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      func_0x00780ea0();
      while (lVar3 != 0) {
        lVar9 = 0;
        do {
          lVar4 = *(long *)(lVar9 * 8);
          func_0x00792f00();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00780ea0();
          while (lVar5 != 0) {
            lVar10 = 0;
            do {
              uVar11 = *(ulong *)(lVar10 * 8);
              uVar6 = uVar11;
              func_0x00787400();
              if ((uVar6 & 1) == 0) {
                func_0x0078d8a0(uVar11);
              }
              lVar10 = lVar10 + 1;
            } while (lVar5 != lVar10);
            lVar5 = lVar4;
            func_0x00780ea0();
          }
          _objc_release(lVar4);
          lVar9 = lVar9 + 1;
        } while (lVar9 != lVar3);
        lVar3 = lVar2;
        func_0x00780ea0();
      }
      _objc_release(lVar2);
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar1);
    lVar1 = lVar7;
    func_0x00780ea0();
  }
  _objc_release(lVar7);
  lVar7 = *(long *)(param_1 + 0x18);
  func_0x00780e20();
  lVar1 = lVar7;
  func_0x00780ea0();
  while (lVar1 != 0) {
    lVar12 = 0;
    do {
      (**(code **)(*(long *)(lVar12 * 8) + 0x10))();
      lVar12 = lVar12 + 1;
    } while (lVar1 != lVar12);
    lVar1 = lVar7;
    func_0x00780ea0();
  }
  _objc_release(lVar7);
  if (*(long *)PTR____stack_chk_guard_00999f88 != lVar8) {
    ___stack_chk_fail();
    _objc_storeStrong(lVar7 + 0x18,0);
    _objc_storeStrong(lVar7 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_0099adf0)(lVar7 + 8,0);
    return;
  }
  return;
}



/* Entry: 00738b88; end: 00738bc3; -[FBTweakStore .cxx_destruct] */

void FUN_00738b88(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00738bc4; end: 00738c77; -[_FBTweakBindObserver initWithTweak:block:] */

undefined1 *
FUN_00738bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_00ac4650;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_00abbf70);
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
    func_0x0077e7a0(param_3);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00738c78; end: 00738cb7; -[_FBTweakBindObserver tweakDidChange:] */

void FUN_00738c78(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar1);
  return;
}



/* Entry: 00738cb8; end: 00738d03; -[_FBTweakBindObserver attachToObject:] */

void FUN_00738cb8(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_storeWeak(param_1 + 0x18,param_3);
  _objc_setAssociatedObject(param_3,param_1,param_1,1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00738d04; end: 00738d3b; -[_FBTweakBindObserver .cxx_destruct] */

void FUN_00738d04(long param_1)

{
  _objc_destroyWeak(param_1 + 0x18);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00738d3c; end: 00738d43; -[FBTweakViewController initWithStore:] */

void FUN_00738d3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00786910. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_0099ad68)(param_1,PTR_s_initWithStore_category__00abc748,param_3,0);
  return;
}



/* Entry: 00738d44; end: 00738d77; -[FBTweakViewController initWithStore:category:] */

void FUN_00738d44(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_00ac4658;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_00abbf70);
  return;
}



/* Entry: 00738d78; end: 00738d97; -[FBTweakViewController tweaksDelegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00738d78(long param_1)

{
  _objc_loadWeakRetained(param_1 + _DAT_00ac5f78);
                    /* WARNING: Could not recover jumptable at 0x0077a954. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_0099ace0)();
  return;
}



/* Entry: 00738d98; end: 00738dab; -[FBTweakViewController setTweaksDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00738d98(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x0077aaec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_0099adf8)(param_1 + _DAT_00ac5f78,param_3);
  return;
}



/* Entry: 00738dac; end: 00738dc3; -[FBTweakViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00738dac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077a978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_0099acf8)(param_1 + _DAT_00ac5f78);
  return;
}



/* Entry: 00738dc4; end: 00738e3f;  */

undefined * FUN_00738dc4(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  
  if (puRam0000000000b64558 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948;
    func_0x0077ec00(PTR__OBJC_CLASS___GPBEnumDescriptor_00ac2948,param_2,
                    &PTR____CFConstantStringClassReference_00a4a5a0,&UNK_0083cf50,&UNK_0083d050,0xb,
                    FUN_00738e40,0);
    do {
      if (puRam0000000000b64558 != (undefined *)0x0) {
        ClearExclusiveLocal();
        _objc_release();
        return puRam0000000000b64558;
      }
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0xb64558,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        puRam0000000000b64558 = puVar3;
      }
    } while (cVar1 != '\0');
  }
  return puRam0000000000b64558;
}



/* Entry: 00738e40; end: 00738e4b;  */

bool FUN_00738e40(uint param_1)

{
  return param_1 < 0xb;
}



/* Entry: 00738e4c; end: 00738eb3; +[SCParamedicJournalEntry descriptor] */

void FUN_00738e4c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b64560 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae3798,
                    &PTR____CFConstantStringClassReference_00a4a5c0,&PTR_DAT_00b2aad8,
                    &PTR_DAT_00b2ab10,8,0x40,0x1c);
    puRam0000000000b64560 = puVar1;
  }
  return;
}



/* Entry: 00738eb4; end: 00738f1b; +[SCParamedicJournal descriptor] */

void FUN_00738eb4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b64568 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae37e8,
                    &PTR____CFConstantStringClassReference_00a4a5e0,&PTR_DAT_00b2aad8,
                    &PTR_DAT_00b2aaf0,1,0x10,0x1c);
    puRam0000000000b64568 = puVar1;
  }
  return;
}



/* Entry: 00738f1c; end: 00738f93; -[SCCallbackCancelable initWithCallbackBlock:] */

undefined1 * FUN_00738f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_00ac4660;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 00738f94; end: 00738ff7; -[SCCallbackCancelable cancel] */

void FUN_00738f94(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain();
  _objc_sync_enter(param_1);
  lVar1 = *(long *)(param_1 + 8);
  _objc_retainBlock();
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = 0;
  _objc_release(uVar2);
  _objc_sync_exit(param_1);
  _objc_release(param_1);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x10))(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(lVar1);
  return;
}



/* Entry: 00738ff8; end: 00739003; -[SCCallbackCancelable .cxx_destruct] */

void FUN_00738ff8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 8,0);
  return;
}



/* Entry: 00739004; end: 00739067; -[SCCancelableGroup addCancelableWithBlock:] */

void FUN_00739004(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_00ac3720;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00784f00();
  _objc_release(param_3);
  func_0x0077e440(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(puVar1);
  return;
}



/* Entry: 00739068; end: 007390d7; -[SCCancelableGroup init] */

undefined1 * FUN_00739068(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  puStack_28 = PTR_PTR_00ac4668;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_00ac29a0;
    func_0x0077f120();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar2;
    _objc_release(uVar3);
    *(undefined4 *)((long)puVar1 + 0x18) = 0;
  }
  return (undefined1 *)puVar1;
}



/* Entry: 007390d8; end: 0073910b; -[SCCancelableGroup isCancelled] */

undefined1 FUN_007390d8(long param_1)

{
  undefined1 uVar1;
  
  _os_unfair_lock_lock(param_1 + 0x18);
  uVar1 = *(undefined1 *)(param_1 + 8);
  _os_unfair_lock_unlock(param_1 + 0x18);
  return uVar1;
}



/* Entry: 0073910c; end: 0073924f; -[SCCancelableGroup cancel] */

void FUN_0073910c(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar2 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_00999f88;
  _os_unfair_lock_lock(param_1 + 0x18);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined1 *)(param_1 + 8) = 1;
    lStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    plStack_100 = (long *)0x0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    lVar3 = *(long *)(param_1 + 0x10);
    _objc_retain(lVar3);
    lVar1 = lVar3;
    func_0x00780ea0();
    if (lVar1 != 0) {
      lVar4 = *plStack_100;
      do {
        lVar5 = 0;
        do {
          if (*plStack_100 != lVar4) {
            _objc_enumerationMutation(lVar3);
          }
          func_0x0077ff80(*(undefined8 *)(lStack_108 + lVar5 * 8));
          lVar5 = lVar5 + 1;
        } while (lVar1 != lVar5);
        lVar1 = lVar3;
        puVar2 = &uStack_110;
        func_0x00780ea0();
      } while (lVar1 != 0);
    }
    _objc_release(lVar3);
    func_0x0078b280(*(undefined8 *)(param_1 + 0x10));
    param_3 = (undefined1 *)puVar2;
  }
  lVar1 = param_1 + 0x18;
  _os_unfair_lock_unlock();
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _os_unfair_lock_unlock(param_1 + 0x18);
  __Unwind_Resume();
  _objc_retain(param_3);
  if (param_3 != (undefined1 *)0x0) {
    _os_unfair_lock_lock(lVar1 + 0x18);
    if ((*(byte *)(lVar1 + 8) & 1) == 0) {
      func_0x0077e720(*(undefined8 *)(lVar1 + 0x10),param_2,param_3);
    }
    else {
      func_0x0077ff80(param_3);
    }
    _os_unfair_lock_unlock(lVar1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 00739250; end: 007392c3; -[SCCancelableGroup addCancelable:] */

void FUN_00739250(long param_1,undefined8 param_2,long param_3)

{
  _objc_retain(param_3);
  if (param_3 != 0) {
    _os_unfair_lock_lock(param_1 + 0x18);
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      func_0x0077e720(*(undefined8 *)(param_1 + 0x10),param_2,param_3);
    }
    else {
      func_0x0077ff80(param_3);
    }
    _os_unfair_lock_unlock(param_1 + 0x18);
  }
                    /* WARNING: Could not recover jumptable at 0x0077aa68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_0099ada0)(param_3);
  return;
}



/* Entry: 007392c4; end: 007392cf; -[SCCancelableGroup .cxx_destruct] */

void FUN_007392c4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_0099adf0)(param_1 + 0x10,0);
  return;
}



/* Entry: 007392d0; end: 0073930b; -[sc_lock_box init] */

void FUN_007392d0(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puVar1 = &uStack_20;
  puStack_18 = PTR_PTR_00ac4670;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_00abbf70);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)((long)puVar1 + 8) = 0;
  }
  return;
}



/* Entry: 0073930c; end: 00739313; -[sc_lock_box lock] */

void FUN_0073930c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077ab88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_lock_0099a490)(param_1 + 8);
  return;
}



/* Entry: 00739314; end: 0073931b; -[sc_lock_box unlock] */

void FUN_00739314(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077aba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_unlock_0099a4a0)(param_1 + 8);
  return;
}



/* Entry: 0073931c; end: 00739323; -[sc_lock_box tryLock] */

void FUN_0073931c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077ab94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_trylock_0099a498)(param_1 + 8);
  return;
}



/* Entry: 00739324; end: 0073932b; -[sc_lock_box assertOwner] */

void FUN_00739324(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077ab7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_assert_owner_0099a488)(param_1 + 8);
  return;
}



/* Entry: 0073932c; end: 00739333; -[sc_lock_box assertNotOwner] */

void FUN_0073932c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0077ab70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__os_unfair_lock_assert_not_owner_0099a480)(param_1 + 8);
  return;
}



/* Entry: 00739334; end: 0073933b; -[sc_lock_box _unsafe_private_reference] */

long FUN_00739334(long param_1)

{
  return param_1 + 8;
}



/* Entry: 0073933c; end: 007393a3; +[TraceSession descriptor] */

void FUN_0073933c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b64570 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae3978,
                    &PTR____CFConstantStringClassReference_00a4a600,&PTR_DAT_00b2ac70,
                    &PTR_DAT_00b2afa8,0xb,0x60,0x1c);
    puRam0000000000b64570 = puVar1;
  }
  return;
}



/* Entry: 007393a4; end: 0073940b; +[TraceSessionHeader descriptor] */

void FUN_007393a4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b64578 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae39c8,
                    &PTR____CFConstantStringClassReference_00a4a620,&PTR_DAT_00b2ac70,0,0,4,0x1c);
    puRam0000000000b64578 = puVar1;
  }
  return;
}



/* Entry: 0073940c; end: 00739473; +[SessionData descriptor] */

void FUN_0073940c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b64580 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae3a18,
                    &PTR____CFConstantStringClassReference_00a22ce0,&PTR_DAT_00b2ac70,
                    &PTR_s_sessionId_00b2b108,0xd,0x68,0x1c);
    puRam0000000000b64580 = puVar1;
  }
  return;
}



/* Entry: 00739474; end: 007394db; +[VarintSpan descriptor] */

void FUN_00739474(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b64588 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae3a68,
                    &PTR____CFConstantStringClassReference_00a4a640,&PTR_DAT_00b2ac70,
                    &PTR_s_id_p_00b2ae68,10,0x50,0x1c);
    puRam0000000000b64588 = puVar1;
  }
  return;
}



/* Entry: 007394dc; end: 00739543; +[IdEntry descriptor] */

void FUN_007394dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b64590 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae3ab8,
                    &PTR____CFConstantStringClassReference_00a4a660,&PTR_DAT_00b2ac70,
                    &PTR_s_name_00b2ac88,2,0x18,0x1c);
    puRam0000000000b64590 = puVar1;
  }
  return;
}



/* Entry: 00739544; end: 007395ab; +[CounterEntry descriptor] */

void FUN_00739544(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b64598 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae3b08,
                    &PTR____CFConstantStringClassReference_00a4a680,&PTR_DAT_00b2ac70,
                    &PTR_s_id_p_00b2acc8,4,0x28,0x1c);
    puRam0000000000b64598 = puVar1;
  }
  return;
}



/* Entry: 007395ac; end: 00739613; +[AuxEntry descriptor] */

void FUN_007395ac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b645a0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae3b58,
                    &PTR____CFConstantStringClassReference_00a4a6a0,&PTR_DAT_00b2ac70,
                    &PTR_s_id_p_00b2adc8,5,0x30,0x1c);
    puRam0000000000b645a0 = puVar1;
  }
  return;
}



/* Entry: 00739614; end: 0073967b; +[NetworkSpan descriptor] */

void FUN_00739614(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b645a8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae3ba8,
                    &PTR____CFConstantStringClassReference_00a4a6c0,&PTR_DAT_00b2ac70,
                    &PTR_s_id_p_00b2b2a8,0x19,0xd0,0x1c);
    puRam0000000000b645a8 = puVar1;
  }
  return;
}



/* Entry: 0073967c; end: 007396e3; +[PerfLoggerEvent descriptor] */

void FUN_0073967c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b645b0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae3bf8,
                    &PTR____CFConstantStringClassReference_00a4a6e0,&PTR_DAT_00b2ac70,
                    &PTR_DAT_00b2ad48,4,0x28,0x1c);
    puRam0000000000b645b0 = puVar1;
  }
  return;
}



/* Entry: 007396e4; end: 007396f3;  */

undefined ** FUN_007396e4(void)

{
  return &PTR____CFConstantStringClassReference_00a4b8a0;
}



/* Entry: 007396f4; end: 0073976f; +[GPBAny descriptor] */

undefined * FUN_007396f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b645b8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae3c98,
                    &PTR____CFConstantStringClassReference_00a4a700,&PTR_DAT_00b2b5c8,
                    &PTR_DAT_00b2b5e0,2,0x18,0x1c);
    func_0x00791440();
    puRam0000000000b645b8 = puVar1;
  }
  return puRam0000000000b645b8;
}



/* Entry: 00739770; end: 007397d7; +[GPBApi descriptor] */

void FUN_00739770(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b645c0 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae3d38,
                    &PTR____CFConstantStringClassReference_00a4a720,&PTR_DAT_00b2b620,
                    &PTR_s_name_00b2b678,7,0x38,0x1c);
    puRam0000000000b645c0 = puVar1;
  }
  return;
}



/* Entry: 007397d8; end: 00739853; +[GPBMethod descriptor] */

undefined * FUN_007397d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  if (puRam0000000000b645c8 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___GPBDescriptor_00ac2950;
    func_0x0077ebc0(PTR__OBJC_CLASS___GPBDescriptor_00ac2950,param_2,&PTR_PTR_00ae3d88,
                    &PTR____CFConstantStringClassReference_00a4a740,&PTR_DAT_00b2b620,
                    &PTR_s_name_00b2b758,7,0x28,0x1c);
    func_0x00791440();
    puRam0000000000b645c8 = puVar1;
  }
  return puRam0000000000b645c8;
}


