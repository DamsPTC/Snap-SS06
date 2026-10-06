/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 106e21f04; end: 106e21f0b; -[SCMemoriesBannerPluginUIConfig useBrandColor] */

undefined1 FUN_106e21f04(long param_1)

{
  return *(undefined1 *)(param_1 + 10);
}



/* Entry: 106e21f0c; end: 106e21f13; -[SCMemoriesBannerPluginUIConfig expectedHeight] */

undefined8 FUN_106e21f0c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e21f14; end: 106e21f1b; -[SCMemoriesBannerPluginUIConfig removeOnEmptyPage] */

undefined1 FUN_106e21f14(long param_1)

{
  return *(undefined1 *)(param_1 + 0xb);
}



/* Entry: 106e21f1c; end: 106e22097; -[SCMemoriesBannerPluginViewModel initWithPriority:actionHandler:style:uiConfig:temporarilySavedSnapCount:newlyAddWarningCount:newlyExpiredCount:warningWindowDays:] */

undefined1 *
FUN_106e21f1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_68 = PTR_PTR_1126f70d0;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
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
    uVar2 = param_8;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_9;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_10;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return (undefined1 *)puVar1;
}



/* Entry: 106e22098; end: 106e220bb; -[SCMemoriesBannerPluginViewModel copyWithZone:] */

undefined8 FUN_106e22098(undefined8 param_1)

{
  _objc_retain();
  return param_1;
}



/* Entry: 106e220bc; end: 106e22167; -[SCMemoriesBannerPluginViewModel hash] */

undefined8 * FUN_106e220bc(long param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uStack_68 = *(undefined8 *)(param_1 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bfde980();
  uStack_58 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uStack_60 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = uVar1;
  func_0x00010bfde980();
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uStack_40 = uVar2;
  func_0x00010bfde980();
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uStack_38 = uVar1;
  func_0x00010bfde980();
  puVar3 = &uStack_68;
  uStack_30 = uVar2;
  func_0x000100505190(puVar3,8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar3;
  }
  ___stack_chk_fail();
  _objc_retain(param_3);
  if (puVar3 == param_3) {
LAB_106e22268:
    puVar6 = (undefined8 *)0x1;
  }
  else {
    puVar6 = (undefined8 *)0x0;
    if ((puVar3 == (undefined8 *)0x0) || (param_3 == (undefined8 *)0x0)) goto LAB_106e22274;
    puVar6 = puVar3;
    _objc_opt_class(puVar3);
    puVar4 = param_3;
    _objc_opt_isKindOfClass(param_3,puVar6);
    if ((((ulong)puVar4 & 1) != 0) && ((puVar3[1] == param_3[1] && (puVar3[3] == param_3[3])))) {
      lVar5 = puVar3[2];
      if ((lVar5 == param_3[2]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
        lVar5 = puVar3[4];
        if ((lVar5 == param_3[4]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
          lVar5 = puVar3[5];
          if ((lVar5 == param_3[5]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
            lVar5 = puVar3[6];
            if ((lVar5 == param_3[6]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
              lVar5 = puVar3[7];
              if ((lVar5 == param_3[7]) || (func_0x00010c071ae0(), (int)lVar5 != 0)) {
                puVar6 = (undefined8 *)puVar3[8];
                if (puVar6 != (undefined8 *)param_3[8]) {
                  func_0x00010c071ae0();
                  goto LAB_106e22274;
                }
                goto LAB_106e22268;
              }
            }
          }
        }
      }
    }
    puVar6 = (undefined8 *)0x0;
  }
LAB_106e22274:
  _objc_release(param_3);
  return puVar6;
}



/* Entry: 106e22168; end: 106e2228f; -[SCMemoriesBannerPluginViewModel isEqual:] */

long FUN_106e22168(ulong param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  _objc_retain(param_3);
  if (param_1 == param_3) {
LAB_106e22268:
    lVar3 = 1;
  }
  else {
    lVar3 = 0;
    if ((param_1 == 0) || (param_3 == 0)) goto LAB_106e22274;
    uVar1 = param_1;
    _objc_opt_class(param_1);
    uVar2 = param_3;
    _objc_opt_isKindOfClass(param_3,uVar1);
    if (((uVar2 & 1) != 0) &&
       ((*(long *)(param_1 + 8) == *(long *)(param_3 + 8) &&
        (*(long *)(param_1 + 0x18) == *(long *)(param_3 + 0x18))))) {
      lVar3 = *(long *)(param_1 + 0x10);
      if ((lVar3 == *(long *)(param_3 + 0x10)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
        lVar3 = *(long *)(param_1 + 0x20);
        if ((lVar3 == *(long *)(param_3 + 0x20)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
          lVar3 = *(long *)(param_1 + 0x28);
          if ((lVar3 == *(long *)(param_3 + 0x28)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
            lVar3 = *(long *)(param_1 + 0x30);
            if ((lVar3 == *(long *)(param_3 + 0x30)) || (func_0x00010c071ae0(), (int)lVar3 != 0)) {
              lVar3 = *(long *)(param_1 + 0x38);
              if ((lVar3 == *(long *)(param_3 + 0x38)) || (func_0x00010c071ae0(), (int)lVar3 != 0))
              {
                lVar3 = *(long *)(param_1 + 0x40);
                if (lVar3 != *(long *)(param_3 + 0x40)) {
                  func_0x00010c071ae0();
                  goto LAB_106e22274;
                }
                goto LAB_106e22268;
              }
            }
          }
        }
      }
    }
    lVar3 = 0;
  }
LAB_106e22274:
  _objc_release(param_3);
  return lVar3;
}



/* Entry: 106e22290; end: 106e22297; -[SCMemoriesBannerPluginViewModel priority] */

undefined8 FUN_106e22290(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e22298; end: 106e2229f; -[SCMemoriesBannerPluginViewModel actionHandler] */

undefined8 FUN_106e22298(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e222a0; end: 106e222a7; -[SCMemoriesBannerPluginViewModel style] */

undefined8 FUN_106e222a0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e222a8; end: 106e222af; -[SCMemoriesBannerPluginViewModel uiConfig] */

undefined8 FUN_106e222a8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e222b0; end: 106e222b7; -[SCMemoriesBannerPluginViewModel temporarilySavedSnapCount] */

undefined8 FUN_106e222b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Entry: 106e222b8; end: 106e222bf; -[SCMemoriesBannerPluginViewModel newlyAddWarningCount] */

undefined8 FUN_106e222b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x30);
}



/* Entry: 106e222c0; end: 106e222c7; -[SCMemoriesBannerPluginViewModel newlyExpiredCount] */

undefined8 FUN_106e222c0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 106e222c8; end: 106e222cf; -[SCMemoriesBannerPluginViewModel warningWindowDays] */

undefined8 FUN_106e222c8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x40);
}



/* Entry: 106e222d0; end: 106e2232f; -[SCMemoriesBannerPluginViewModel .cxx_destruct] */

void FUN_106e222d0(long param_1)

{
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 0x10,0);
  return;
}



/* Entry: 106e22330; end: 106e2242f; -[SCMemoriesSnapsTabSectionPluginScope initWithPlugInRegistry:alertUIContainer:plusSubscribeScopeExposer:onTapManageStorage:] */

undefined1 *
FUN_106e22330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

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
  puStack_48 = PTR_PTR_1126f70d8;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_6;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e22430; end: 106e22437; -[SCMemoriesSnapsTabSectionPluginScope plugInRegistry] */

undefined8 FUN_106e22430(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e22438; end: 106e2243f; -[SCMemoriesSnapsTabSectionPluginScope alertUIContainer] */

undefined8 FUN_106e22438(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 106e22440; end: 106e22447; -[SCMemoriesSnapsTabSectionPluginScope plusSubscribeScopeExposer] */

undefined8 FUN_106e22440(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 106e22448; end: 106e2244f; -[SCMemoriesSnapsTabSectionPluginScope onTapManageStorage] */

undefined8 FUN_106e22448(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 106e22450; end: 106e22497; -[SCMemoriesSnapsTabSectionPluginScope .cxx_destruct] */

void FUN_106e22450(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e22498; end: 106e2250b; -[SCMemoriesSnapsTabCRSectionPluginScope initWithPlugInRegistry:] */

undefined1 * FUN_106e22498(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f70e0;
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



/* Entry: 106e2250c; end: 106e22513; -[SCMemoriesSnapsTabCRSectionPluginScope plugInRegistry] */

undefined8 FUN_106e2250c(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 106e22514; end: 106e2251f; -[SCMemoriesSnapsTabCRSectionPluginScope .cxx_destruct] */

void FUN_106e22514(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106e22520; end: 106e225ab; -[SCGallerySnapsTabCRSectionController initWithSelectionHelper:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_106e22520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126f70e8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    func_0x00010c189840(puVar1);
    func_0x00010c18faa0(puVar1);
    _objc_storeWeak((undefined1 *)((long)puVar1 + (long)_DAT_11275f338),param_3);
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106e225ac; end: 106e225e7; -[SCGallerySnapsTabCRSectionController inset] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e225ac(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (*(long *)(param_1 + _DAT_11275f33c) < 1) {
    uVar1 = *(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0;
  }
  return uVar1;
}



/* Entry: 106e225e8; end: 106e225f3; -[SCGallerySnapsTabCRSectionController _cellClassForItemAtIndex:] */

void FUN_106e225e8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_opt_class_11034d2a0)(PTR_PTR_1126d2180);
  return;
}



/* Entry: 106e225f4; end: 106e226ab; -[SCGallerySnapsTabCRSectionController sectionController:cellForViewModel:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e225f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_4);
  lVar1 = param_1;
  func_0x00010bf3fd40(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bddc180(param_1,param_2,param_5);
  lVar3 = lVar1;
  func_0x00010bf6e020(lVar1,param_2,lVar2,param_1,param_5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  param_1 = param_1 + _DAT_11275f338;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010c158e00();
  func_0x00010c2227c0(lVar3,param_2,param_4,lVar1);
  _objc_release(param_4);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106e226ac; end: 106e22753; -[SCGallerySnapsTabCRSectionController sectionController:sizeForViewModel:atIndex:] */

undefined1  [16]
FUN_106e226ac(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,ulong param_5)

{
  undefined *puVar1;
  ulong uVar2;
  double dVar3;
  undefined1 auVar4 [16];
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b2698;
  _objc_opt_class(PTR_PTR_1126b2698);
  uVar2 = param_5;
  _objc_opt_isKindOfClass(param_5,puVar1);
  if ((param_5 == 0) || ((uVar2 & 1) == 0)) {
    dVar3 = *(double *)PTR__CGSizeZero_110347620;
    param_1 = *(double *)(PTR__CGSizeZero_110347620 + 8);
  }
  else {
    func_0x00010bf3fd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf4afe0();
    _objc_release(param_2);
    dVar3 = (param_1 + -3.0) * 0.25;
    param_1 = param_1 * 0.25;
  }
  _objc_release(param_5);
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = dVar3;
  return auVar4;
}



/* Entry: 106e22754; end: 106e22797; -[SCGallerySnapsTabCRSectionController sectionController:viewModelsForObject:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e22754(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  func_0x00010be1db40(param_1,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf529e0();
  *(long *)(param_1 + _DAT_11275f33c) = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106e22798; end: 106e22837; -[SCGallerySnapsTabCRSectionController listAdapter:willDisplaySectionController:cell:atIndex:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e22798(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11275f338;
  _objc_retain(param_5);
  lVar2 = param_1 + lVar2;
  _objc_loadWeakRetained(lVar2);
  puVar1 = PTR__OBJC_CLASS___NSIndexPath_1126b0990;
  func_0x00010c1554e0(param_1);
  func_0x00010bfed020(puVar1,param_2,param_6,param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1fb080(lVar2,param_2,param_5,puVar1);
  _objc_release(param_5);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 106e22838; end: 106e2283b; -[SCGallerySnapsTabCRSectionController listAdapter:didEndDisplayingSectionController:] */

void FUN_106e22838(void)

{
  return;
}



/* Entry: 106e2283c; end: 106e2283f; -[SCGallerySnapsTabCRSectionController listAdapter:didEndDisplayingSectionController:cell:atIndex:] */

void FUN_106e2283c(void)

{
  return;
}



/* Entry: 106e22840; end: 106e22843; -[SCGallerySnapsTabCRSectionController listAdapter:willDisplaySectionController:] */

void FUN_106e22840(void)

{
  return;
}



/* Entry: 106e22844; end: 106e229a3; -[SCGallerySnapsTabCRSectionController _getCellViewModelsGivenObject:] */

void FUN_106e22844(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar3 = PTR_PTR_1126b2690;
  _objc_retain(param_3);
  _objc_opt_class(puVar3);
  uVar2 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar3);
  uVar1 = param_3;
  if ((uVar2 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_106e229a4;
  uStack_40 = 0x106e229b4;
  puStack_38 = PTR____NSArray0__struct_11034ab48;
  puVar3 = PTR____NSArray0__struct_11034ab48;
  if (uVar1 != 0) {
    uVar2 = param_3;
    func_0x00010c156980(param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0be2a0();
    _objc_release(uVar2);
    puVar3 = (undefined *)puStack_58[5];
  }
  _objc_retain(puVar3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(puStack_38);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 106e229a4; end: 106e229c3;  */

void FUN_106e229a4(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106e229c4; end: 106e22a1f;  */

void FUN_106e229c4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long in_x5;
  long lVar2;
  
  _objc_retain(param_2);
  if (0 < in_x5) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(undefined8 *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e22a20; end: 106e22bff; -[SCGallerySnapsTabCRSectionController toggleSelectAllWithAllItemSelected:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_106e22a20(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *unaff_x23;
  undefined8 uVar6;
  undefined8 unaff_x24;
  long lVar7;
  long unaff_x25;
  undefined *puVar8;
  undefined *unaff_x26;
  undefined8 uStack_250;
  long lStack_248;
  long *plStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined1 auStack_208 [128];
  long lStack_188;
  undefined *puStack_180;
  long lStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
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
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar1 = param_1;
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = param_1;
  func_0x00010be1db40(param_1,param_2,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  puVar2 = puVar5;
  func_0x00010bf529e0();
  if (puVar2 != (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(puVar5);
    puVar2 = puVar5;
    func_0x00010bf52a60(puVar5,param_2,&uStack_130,auStack_e8,0x10);
    if (puVar2 != (undefined *)0x0) {
      unaff_x25 = *plStack_120;
      do {
        unaff_x26 = (undefined *)0x0;
        do {
          if (*plStack_120 != unaff_x25) {
            _objc_enumerationMutation(puVar5);
          }
          unaff_x24 = *(undefined8 *)(lStack_128 + (long)unaff_x26 * 8);
          uVar3 = unaff_x24;
          func_0x00010bf171c0();
          if ((int)uVar3 != 0) {
            func_0x00010bf0af00();
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar1,param_2,unaff_x24);
            _objc_release(unaff_x24);
          }
          unaff_x26 = unaff_x26 + 1;
        } while (puVar2 != unaff_x26);
        puVar2 = puVar5;
        func_0x00010bf52a60(puVar5,param_2,&uStack_130,auStack_e8,0x10);
      } while (puVar2 != (undefined *)0x0);
    }
    _objc_release(puVar5);
    param_1 = param_1 + _DAT_11275f338;
    _objc_loadWeakRetained();
    unaff_x23 = puVar1;
    func_0x00010bf51e00();
    func_0x00010bf171a0(param_1,param_2,(uint)param_3 ^ 1,unaff_x23,0,1);
    _objc_release(unaff_x23);
    _objc_release(param_1);
    _objc_release(puVar1);
  }
  puVar2 = puVar5;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar2;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106e22c00;
  lStack_188 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = puVar2;
  puStack_180 = unaff_x26;
  lStack_178 = unaff_x25;
  uStack_170 = unaff_x24;
  puStack_168 = unaff_x23;
  puStack_160 = puVar1;
  puStack_158 = param_1;
  uStack_150 = param_3;
  puStack_148 = puVar5;
  puStack_140 = &stack0xfffffffffffffff0;
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar2;
  func_0x00010be1db40(puVar2,param_2,puVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  puVar5 = puVar1;
  func_0x00010bf529e0();
  if (puVar5 == (undefined *)0x0) {
    puVar5 = (undefined *)0x1;
  }
  else {
    puVar4 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    lStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    plStack_240 = (long *)0x0;
    uStack_228 = 0;
    uStack_230 = 0;
    uStack_218 = 0;
    uStack_220 = 0;
    _objc_retain(puVar1);
    puVar5 = puVar1;
    func_0x00010bf52a60(puVar1,param_2,&uStack_250,auStack_208,0x10);
    if (puVar5 != (undefined *)0x0) {
      lVar7 = *plStack_240;
      do {
        puVar8 = (undefined *)0x0;
        do {
          if (*plStack_240 != lVar7) {
            _objc_enumerationMutation(puVar1);
          }
          uVar6 = *(undefined8 *)(lStack_248 + (long)puVar8 * 8);
          uVar3 = uVar6;
          func_0x00010bf171c0();
          if ((int)uVar3 != 0) {
            func_0x00010bf0af00(uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar4,param_2,uVar6);
            _objc_release(uVar6);
          }
          puVar8 = puVar8 + 1;
        } while (puVar5 != puVar8);
        puVar5 = puVar1;
        func_0x00010bf52a60(puVar1,param_2,&uStack_250,auStack_208,0x10);
      } while (puVar5 != (undefined *)0x0);
    }
    _objc_release(puVar1);
    puVar2 = puVar2 + _DAT_11275f338;
    _objc_loadWeakRetained(puVar2);
    puVar8 = puVar4;
    func_0x00010bf51e00(puVar4);
    puVar5 = puVar2;
    func_0x00010c06d100(puVar2,param_2,puVar8,0);
    _objc_release(puVar8);
    _objc_release(puVar2);
    _objc_release(puVar4);
  }
  _objc_release(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_188) {
    return puVar5;
  }
  ___stack_chk_fail();
  puVar1 = puVar1 + _DAT_11275f338;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(puVar1);
  return puVar1;
}



/* Entry: 106e22c00; end: 106e22ddb; -[SCGallerySnapsTabCRSectionController allItemsSelected] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_106e22c00(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
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
  lVar5 = param_1;
  func_0x00010c0dfc60();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010be1db40(param_1,param_2,lVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar5);
  lVar5 = lVar1;
  func_0x00010bf529e0();
  if (lVar5 == 0) {
    lVar5 = 1;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
    lStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    plStack_110 = (long *)0x0;
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    _objc_retain(lVar1);
    lVar5 = lVar1;
    func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
    if (lVar5 != 0) {
      lVar7 = *plStack_110;
      do {
        lVar8 = 0;
        do {
          if (*plStack_110 != lVar7) {
            _objc_enumerationMutation(lVar1);
          }
          uVar6 = *(undefined8 *)(lStack_118 + lVar8 * 8);
          uVar3 = uVar6;
          func_0x00010bf171c0();
          if ((int)uVar3 != 0) {
            func_0x00010bf0af00(uVar6);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010befa120(puVar2,param_2,uVar6);
            _objc_release(uVar6);
          }
          lVar8 = lVar8 + 1;
        } while (lVar5 != lVar8);
        lVar5 = lVar1;
        func_0x00010bf52a60(lVar1,param_2,&uStack_120,auStack_d8,0x10);
      } while (lVar5 != 0);
    }
    _objc_release(lVar1);
    param_1 = param_1 + _DAT_11275f338;
    _objc_loadWeakRetained(param_1);
    puVar4 = puVar2;
    func_0x00010bf51e00(puVar2);
    lVar5 = param_1;
    func_0x00010c06d100(param_1,param_2,puVar4,0);
    _objc_release(puVar4);
    _objc_release(param_1);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return lVar5;
  }
  ___stack_chk_fail();
  lVar1 = lVar1 + _DAT_11275f338;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(lVar1);
  return lVar1;
}



/* Entry: 106e22ddc; end: 106e22deb; -[SCGallerySnapsTabCRSectionController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e22ddc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_11275f338);
  return;
}



/* Entry: 106e22dec; end: 106e23c73; -[SCGalleryCRItemCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106e22dec(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 *puStack_3d0;
  undefined *puStack_3c8;
  undefined8 uStack_3c0;
  undefined8 *puStack_3b8;
  undefined1 *puStack_3b0;
  code *pcStack_3a8;
  undefined8 uStack_398;
  undefined8 *puStack_390;
  undefined8 uStack_388;
  undefined8 *puStack_380;
  undefined8 uStack_378;
  undefined8 *puStack_370;
  undefined8 uStack_368;
  undefined8 *puStack_360;
  undefined8 uStack_358;
  undefined8 *puStack_350;
  undefined8 uStack_348;
  undefined8 *puStack_340;
  undefined8 uStack_338;
  undefined8 *puStack_330;
  undefined8 uStack_328;
  undefined8 *puStack_320;
  undefined8 uStack_318;
  undefined8 *puStack_310;
  undefined8 uStack_308;
  undefined8 *puStack_300;
  undefined8 uStack_2f8;
  undefined8 *puStack_2f0;
  undefined8 uStack_2e8;
  undefined8 *puStack_2e0;
  undefined8 uStack_2d8;
  undefined8 *puStack_2d0;
  undefined8 uStack_2c8;
  undefined8 *puStack_2c0;
  undefined8 uStack_2b8;
  undefined8 *puStack_2b0;
  undefined8 uStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 uStack_298;
  undefined8 *puStack_290;
  undefined8 uStack_288;
  undefined8 *puStack_280;
  undefined8 uStack_278;
  undefined8 *puStack_270;
  undefined8 uStack_268;
  undefined8 *puStack_260;
  undefined *puStack_258;
  undefined8 uStack_250;
  undefined8 *puStack_248;
  undefined8 uStack_240;
  undefined8 *puStack_238;
  undefined8 uStack_230;
  undefined8 *puStack_228;
  undefined8 uStack_220;
  undefined8 *puStack_218;
  undefined8 uStack_210;
  undefined8 *puStack_208;
  undefined8 uStack_200;
  undefined8 *puStack_1f8;
  undefined8 uStack_1f0;
  undefined8 *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 *puStack_1c8;
  undefined8 uStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 uStack_1b0;
  undefined8 *puStack_1a8;
  undefined8 uStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined8 *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined8 uStack_150;
  undefined *puStack_148;
  undefined8 *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  
  lStack_a0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_148 = PTR_PTR_1126f70f0;
  puVar1 = &uStack_150;
  uStack_150 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  puVar3 = (undefined8 *)0x0;
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined1 *)((long)puVar1 + (long)_DAT_11275f344) = 0;
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    uVar15 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar16 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar17 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar18 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar15,uVar16,uVar17,uVar18);
    lVar13 = (long)_DAT_11275f348;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar13);
    *(undefined **)((long)puVar1 + lVar13) = puVar2;
    _objc_release(uVar8);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar13));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar13));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar15,uVar16,uVar17,uVar18);
    lVar10 = (long)_DAT_11275f34c;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar10);
    *(undefined **)((long)puVar1 + lVar10) = puVar2;
    _objc_release(uVar8);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar10));
    _objc_release(puVar2);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar10));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar10));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar15,uVar16,uVar17,uVar18);
    lVar9 = (long)_DAT_11275f350;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    *(undefined **)((long)puVar1 + lVar9) = puVar2;
    _objc_release(uVar8);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c1cfce0(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar9));
    func_0x00010c213040(*(undefined8 *)((long)puVar1 + lVar9));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar9));
    _objc_release(puVar2);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar9));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar2 = PTR_PTR_1126aea58;
    _objc_alloc();
    func_0x00010c013de0(uVar15,uVar16,uVar17,uVar18);
    lVar12 = (long)_DAT_11275f354;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar12);
    *(undefined **)((long)puVar1 + lVar12) = puVar2;
    _objc_release(uVar8);
    func_0x00010c21ad00(*(undefined8 *)((long)puVar1 + lVar12));
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar12));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar12));
    _objc_release(puVar2);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar12));
    func_0x00010c181f00(0x447a0000,*(undefined8 *)((long)puVar1 + lVar12));
    func_0x00010c181f00(0x447a0000,*(undefined8 *)((long)puVar1 + lVar12));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    *(undefined8 *)((long)puVar1 + (long)_DAT_11275f358) = 0;
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    func_0x00010c013de0(uVar15,uVar16,uVar17,uVar18);
    lVar11 = (long)_DAT_11275f35c;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar11);
    *(undefined **)((long)puVar1 + lVar11) = puVar2;
    _objc_release(uVar8);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar11));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    puVar4 = puVar2;
    func_0x00010bf414e0(0x3fe0000000000000);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar11));
    _objc_release(puVar4);
    _objc_release(puVar2);
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar11));
    puVar3 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puVar4 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar14 = (long)_DAT_11275f360;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar14);
    *(undefined **)((long)puVar1 + lVar14) = puVar4;
    _objc_release(uVar8);
    _objc_release(puVar2);
    func_0x00010c219b60(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c1a7f60(*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c181f00(0x447a0000,*(undefined8 *)((long)puVar1 + lVar14));
    func_0x00010c181f00(0x447a0000,*(undefined8 *)((long)puVar1 + lVar14));
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    puStack_258 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    puVar5 = *(undefined8 **)((long)puVar1 + lVar13);
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    puStack_160 = puVar5;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_168 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_140 = puVar5;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar13);
    puStack_170 = puVar5;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_180 = uVar8;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_178 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_188 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_138 = uVar8;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar13);
    uStack_190 = uVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_1a0 = uVar15;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_198 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1a8 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_130 = uVar15;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar13);
    uStack_1b0 = uVar15;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_1c0 = uVar8;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1b8 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_1c8 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_128 = uVar8;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar10);
    uStack_1d0 = uVar8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_1e0 = uVar15;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1d8 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_1e8 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_120 = uVar15;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar10);
    uStack_1f0 = uVar15;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_200 = uVar8;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_1f8 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_208 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_118 = uVar8;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar10);
    uStack_210 = uVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_220 = uVar15;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_218 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_228 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_110 = uVar15;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar10);
    uStack_230 = uVar15;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_240 = uVar8;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_238 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_248 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_108 = uVar8;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar9);
    uStack_250 = uVar8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_268 = uVar15;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_260 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_270 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_100 = uVar15;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    uStack_278 = uVar15;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_288 = uVar8;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_280 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_290 = puVar3;
    func_0x00010bf493c0(0x4010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f8 = uVar8;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar9);
    uStack_298 = uVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_2a8 = uVar15;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_2a0 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_2b0 = puVar3;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_f0 = uVar15;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar9);
    uStack_2b8 = uVar15;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_2c8 = uVar8;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_2c0 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_2d0 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_e8 = uVar8;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar12);
    uStack_2d8 = uVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_2e8 = uVar15;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_2e0 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_2f0 = puVar3;
    func_0x00010bf493c0(0xc010000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_e0 = uVar15;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar12);
    uStack_2f8 = uVar15;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_308 = uVar8;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_300 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_310 = puVar3;
    func_0x00010bf493c0(0x4020000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_d8 = uVar8;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar11);
    uStack_318 = uVar8;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_328 = uVar15;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_320 = puVar3;
    func_0x00010c274200();
    _objc_retainAutoreleasedReturnValue();
    puStack_330 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_d0 = uVar15;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar11);
    uStack_338 = uVar15;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_348 = uVar8;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_340 = puVar3;
    func_0x00010c08de00();
    _objc_retainAutoreleasedReturnValue();
    puStack_350 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c8 = uVar8;
    uVar15 = *(undefined8 *)((long)puVar1 + lVar11);
    uStack_358 = uVar8;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_368 = uVar15;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_360 = puVar3;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puStack_370 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_c0 = uVar15;
    uVar8 = *(undefined8 *)((long)puVar1 + lVar11);
    uStack_378 = uVar15;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    uStack_388 = uVar8;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puStack_380 = puVar3;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puStack_390 = puVar3;
    func_0x00010bf493a0();
    _objc_retainAutoreleasedReturnValue();
    uStack_b8 = uVar8;
    unaff_x20 = *(undefined8 *)((long)puVar1 + lVar14);
    uStack_398 = uVar8;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    puVar6 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x00010bf1ff80();
    _objc_retainAutoreleasedReturnValue();
    uVar15 = unaff_x20;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    uStack_b0 = uVar15;
    uVar16 = *(undefined8 *)((long)puVar1 + lVar14);
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar1;
    func_0x00010bf4dce0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar5;
    func_0x00010c2793a0();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar16;
    func_0x00010bf493c0(0xc024000000000000);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    uStack_a8 = uVar8;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010beef8c0(puStack_258);
    _objc_release(puVar2);
    _objc_release(uVar8);
    _objc_release(puVar3);
    _objc_release(puVar5);
    _objc_release(uVar16);
    _objc_release(uVar15);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(unaff_x20);
    _objc_release(uStack_398);
    _objc_release(puStack_390);
    _objc_release(puStack_380);
    _objc_release(uStack_388);
    _objc_release(uStack_378);
    _objc_release(puStack_370);
    _objc_release(puStack_360);
    _objc_release(uStack_368);
    _objc_release(uStack_358);
    _objc_release(puStack_350);
    _objc_release(puStack_340);
    _objc_release(uStack_348);
    _objc_release(uStack_338);
    _objc_release(puStack_330);
    _objc_release(puStack_320);
    _objc_release(uStack_328);
    _objc_release(uStack_318);
    _objc_release(puStack_310);
    _objc_release(puStack_300);
    _objc_release(uStack_308);
    _objc_release(uStack_2f8);
    _objc_release(puStack_2f0);
    _objc_release(puStack_2e0);
    _objc_release(uStack_2e8);
    _objc_release(uStack_2d8);
    _objc_release(puStack_2d0);
    _objc_release(puStack_2c0);
    _objc_release(uStack_2c8);
    _objc_release(uStack_2b8);
    _objc_release(puStack_2b0);
    _objc_release(puStack_2a0);
    _objc_release(uStack_2a8);
    _objc_release(uStack_298);
    _objc_release(puStack_290);
    _objc_release(puStack_280);
    _objc_release(uStack_288);
    _objc_release(uStack_278);
    _objc_release(puStack_270);
    _objc_release(puStack_260);
    _objc_release(uStack_268);
    _objc_release(uStack_250);
    _objc_release(puStack_248);
    _objc_release(puStack_238);
    _objc_release(uStack_240);
    _objc_release(uStack_230);
    _objc_release(puStack_228);
    _objc_release(puStack_218);
    _objc_release(uStack_220);
    _objc_release(uStack_210);
    _objc_release(puStack_208);
    _objc_release(puStack_1f8);
    _objc_release(uStack_200);
    _objc_release(uStack_1f0);
    _objc_release(puStack_1e8);
    _objc_release(puStack_1d8);
    _objc_release(uStack_1e0);
    _objc_release(uStack_1d0);
    _objc_release(puStack_1c8);
    _objc_release(puStack_1b8);
    _objc_release(uStack_1c0);
    _objc_release(uStack_1b0);
    _objc_release(puStack_1a8);
    _objc_release(puStack_198);
    _objc_release(uStack_1a0);
    _objc_release(uStack_190);
    _objc_release(puStack_188);
    _objc_release(puStack_178);
    _objc_release(uStack_180);
    _objc_release(puStack_170);
    _objc_release(puStack_168);
    _objc_release(puStack_158);
    puVar3 = puStack_160;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_a0) {
    return puVar1;
  }
  ___stack_chk_fail();
  pcStack_3a8 = FUN_106e23c74;
  puStack_3c8 = PTR_PTR_1126f70f0;
  puStack_3d0 = puVar3;
  uStack_3c0 = unaff_x20;
  puStack_3b8 = puVar1;
  puStack_3b0 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_3d0,PTR_s_prepareForReuse_112620008);
  uVar8 = *(undefined8 *)((long)puVar3 + (long)_DAT_11275f364);
  *(undefined8 *)((long)puVar3 + (long)_DAT_11275f364) = 0;
  _objc_release(uVar8);
  func_0x00010c1a9f00(*(undefined8 *)((long)puVar3 + (long)_DAT_11275f348));
  *(undefined4 *)((long)puVar3 + (long)_DAT_11275f368) = 0xffffffff;
  func_0x00010c1a7f60(*(undefined8 *)((long)puVar3 + (long)_DAT_11275f34c));
  func_0x00010c1a7f60(*(undefined8 *)((long)puVar3 + (long)_DAT_11275f350));
  func_0x00010c1a7f60(*(undefined8 *)((long)puVar3 + (long)_DAT_11275f354));
  func_0x00010c1a7f60(*(undefined8 *)((long)puVar3 + (long)_DAT_11275f35c));
  func_0x00010c1a7f60(*(undefined8 *)((long)puVar3 + (long)_DAT_11275f360));
  *(undefined8 *)((long)puVar3 + (long)_DAT_11275f358) = 0;
  *(undefined1 *)((long)puVar3 + (long)_DAT_11275f344) = 0;
  *(undefined1 *)((long)puVar3 + (long)_DAT_11275f36c) = 0;
  func_0x00010c1facc0(puVar3);
  return puVar3;
}



/* Entry: 106e23c74; end: 106e23d5b; -[SCGalleryCRItemCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e23c74(long param_1)

{
  undefined8 uVar1;
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f70f0;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f364);
  *(undefined8 *)(param_1 + _DAT_11275f364) = 0;
  _objc_release(uVar1);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11275f348));
  *(undefined4 *)(param_1 + _DAT_11275f368) = 0xffffffff;
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f34c));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f350));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f354));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f35c));
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f360));
  *(undefined8 *)(param_1 + _DAT_11275f358) = 0;
  *(undefined1 *)(param_1 + _DAT_11275f344) = 0;
  *(undefined1 *)(param_1 + _DAT_11275f36c) = 0;
  func_0x00010c1facc0(param_1);
  return;
}



/* Entry: 106e23d5c; end: 106e24073; -[SCGalleryCRItemCell setViewModel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e23d5c(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  
  _objc_retain(param_7);
  puVar2 = PTR_PTR_1126b2698;
  _objc_opt_class(PTR_PTR_1126b2698);
  uVar7 = param_7;
  _objc_opt_isKindOfClass(param_7,puVar2);
  uVar1 = param_7;
  if ((uVar7 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 == 0) goto LAB_106e2403c;
  lVar8 = (long)_DAT_11275f364;
  uVar7 = *(ulong *)(param_5 + lVar8);
  _objc_retain(uVar7);
  _objc_retain(param_7);
  if (uVar7 == param_7) {
    _objc_release(param_7);
  }
  else {
    if (param_7 == 0) {
      _objc_release(uVar7);
    }
    else {
      uVar3 = uVar7;
      func_0x00010c071ae0();
      _objc_release(param_7);
      _objc_release(uVar7);
      if ((uVar3 & 1) != 0) goto LAB_106e2403c;
    }
    _objc_retain(param_7);
    uVar4 = *(undefined8 *)(param_5 + lVar8);
    *(ulong *)(param_5 + lVar8) = uVar1;
    _objc_release(uVar4);
    uVar7 = param_7;
    func_0x00010bf0af00(param_7);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c141e80(param_7);
    func_0x00010be4c9e0(param_5);
    uVar3 = param_7;
    func_0x00010c0efdc0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar3;
    func_0x00010c08fa60();
    _objc_release(uVar3);
    if (uVar5 == 0) {
      func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_11275f34c));
      func_0x00010c1a7f60(*(undefined8 *)(param_5 + _DAT_11275f350));
      func_0x00010bf8b160(uVar7);
      lVar8 = (long)_DAT_11275f354;
      uVar4 = *(undefined8 *)(param_5 + lVar8);
      if (0.0 < param_1) {
        func_0x00010c1a7f60(uVar4);
        puVar2 = PTR_PTR_1126b6600;
        func_0x00010bf8b160(uVar7);
        func_0x00010bfb6060(puVar2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c212f20(*(undefined8 *)(param_5 + lVar8));
        goto LAB_106e24004;
      }
      func_0x00010c1a7f60(uVar4);
    }
    else {
      puVar2 = PTR__OBJC_CLASS___CAShapeLayer_1126aec10;
      func_0x00010c08c0e0(PTR__OBJC_CLASS___CAShapeLayer_1126aec10);
      _objc_retainAutoreleasedReturnValue();
      puVar6 = PTR__OBJC_CLASS___UIBezierPath_1126aec18;
      func_0x00010bf20c00(param_5);
      func_0x00010c141e80(param_7);
      func_0x00010bf199e0(param_1,param_2,param_3,param_4,0x4028000000000000,0x4028000000000000,
                          puVar6);
      _objc_retainAutoreleasedReturnValue();
      _objc_retainAutorelease();
      func_0x00010bdc1040();
      func_0x00010c1d9820(puVar2);
      _objc_release(puVar6);
      lVar8 = (long)_DAT_11275f34c;
      uVar4 = *(undefined8 *)(param_5 + lVar8);
      func_0x00010c08c0e0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1c2c00();
      _objc_release(uVar4);
      func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar8));
      lVar8 = (long)_DAT_11275f350;
      func_0x00010c1a7f60(*(undefined8 *)(param_5 + lVar8));
      uVar4 = *(undefined8 *)(param_5 + lVar8);
      uVar3 = param_7;
      func_0x00010c0efdc0(param_7);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c212f20(uVar4);
      _objc_release(uVar3);
LAB_106e24004:
      _objc_release(puVar2);
    }
    uVar3 = param_7;
    func_0x00010c268ce0();
    *(ulong *)(param_5 + _DAT_11275f358) = uVar3;
    uVar3 = param_7;
    func_0x00010bf171c0();
    *(char *)(param_5 + _DAT_11275f344) = (char)uVar3;
  }
  _objc_release(uVar7);
LAB_106e2403c:
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_7);
  return;
}



/* Entry: 106e24074; end: 106e24083; -[SCGalleryCRItemCell getTapActionType] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e24074(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f358);
}



/* Entry: 106e24084; end: 106e24187; -[SCGalleryCRItemCell _loadAsset:roundedCorners:] */

void FUN_106e24084(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_7);
  func_0x00010bfb68e0(param_5);
  func_0x00010bfb68e0(param_5);
  _objc_initWeak(auStack_48,param_5);
  uVar1 = 0;
  _dispatch_get_global_queue(0,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0xc2000000;
  pcStack_80 = FUN_106e24188;
  puStack_78 = &UNK_110842ea8;
  _objc_copyWeak(auStack_68,auStack_48);
  uStack_70 = param_7;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_8;
  _objc_retain(param_7);
  func_0x00010007380c(uVar1,&puStack_90);
  _objc_release(uVar1);
  _objc_release(uStack_70);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_48);
  return;
}



/* Entry: 106e24188; end: 106e241c3;  */

void FUN_106e24188(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be4ca00(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e241c4; end: 106e242eb; -[SCGalleryCRItemCell _loadAssetOnBackgroundThread:targetSize:roundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e241c4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_5);
  _objc_initWeak(auStack_58,param_3);
  puVar1 = PTR__OBJC_CLASS___PHImageManager_1126bfc70;
  func_0x00010bf69bc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106e242ec;
  puStack_70 = &UNK_11097eb40;
  _objc_copyWeak(auStack_68,auStack_58);
  puVar2 = puVar1;
  uStack_60 = param_6;
  func_0x000107fe9568(param_1,param_2,puVar1,param_5,1,1,&puStack_88);
  *(int *)(param_3 + _DAT_11275f368) = (int)puVar2;
  _objc_release(puVar1);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_5);
  return;
}



/* Entry: 106e242ec; end: 106e24347;  */

void FUN_106e242ec(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be73b00();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e24348; end: 106e2446f; -[SCGalleryCRItemCell _photoAssetRequestCompletedWithThumbnail:originalRequestId:roundedCorners:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e24348(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,int param_8,undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [8];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  int iStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_7);
  if (*(int *)(param_5 + _DAT_11275f368) == param_8) {
    func_0x00010bf20c00(*(undefined8 *)(param_5 + _DAT_11275f348));
    _objc_initWeak(auStack_58,param_5);
    uVar1 = 0;
    _dispatch_get_global_queue(0,0);
    _objc_retainAutoreleasedReturnValue();
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0xc2000000;
    pcStack_98 = FUN_106e24470;
    puStack_90 = &UNK_1108e61b8;
    _objc_retain(param_7);
    uStack_88 = param_7;
    uStack_78 = param_3;
    uStack_70 = param_4;
    uStack_68 = param_9;
    _objc_copyWeak(auStack_80,auStack_58);
    iStack_60 = param_8;
    func_0x00010007380c(uVar1,&puStack_a8);
    _objc_release(uVar1);
    _objc_destroyWeak(auStack_80);
    _objc_release(uStack_88);
    _objc_destroyWeak(auStack_58);
  }
  _objc_release(param_7);
  return;
}



/* Entry: 106e24470; end: 106e24567;  */

void FUN_106e24470(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined1 auStack_40 [8];
  undefined4 uStack_38;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c14e6c0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      0x4010000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf5c8c0(*(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      0x4028000000000000);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106e24568;
  puStack_50 = &UNK_110870610;
  _objc_copyWeak(auStack_40,param_1 + 0x28);
  _objc_retain(uVar2);
  uStack_38 = *(undefined4 *)(param_1 + 0x48);
  uStack_48 = uVar2;
  func_0x0001000d76cc("APPSTORE",&puStack_68);
  _objc_release(uStack_48);
  _objc_destroyWeak(auStack_40);
  _objc_release(uVar2);
  return;
}



/* Entry: 106e24568; end: 106e2459f;  */

void FUN_106e24568(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea4820();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106e245a0; end: 106e245c7; -[SCGalleryCRItemCell _setImage:originalRequestId:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e245a0(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  if (*(int *)(param_1 + _DAT_11275f368) == param_4) {
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + _DAT_11275f348),PTR_s_setImage__1126481e8);
    return;
  }
  return;
}



/* Entry: 106e245c8; end: 106e245cb; -[SCGalleryCRItemCell bindViewModel:] */

void FUN_106e245c8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2226d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setViewModel__1126663d8);
  return;
}



/* Entry: 106e245cc; end: 106e24667; -[SCGalleryCRItemCell setSelected:selectOverlayImage:snapIds:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e245cc(long param_1,undefined8 param_2,uint param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  
  if (*(char *)(param_1 + _DAT_11275f36c) == '\x01') {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f35c),param_2,param_3 ^ 1);
    ppuVar1 = &PTR____CFConstantStringClassReference_110e228b8;
    if (param_3 == 0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e879f8;
    }
    puVar2 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,ppuVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11275f360),param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
  return;
}



/* Entry: 106e24668; end: 106e2466b; -[SCGalleryCRItemCell setSelectionOrderNumber:orderNumbersBySnapId:] */

void FUN_106e24668(void)

{
  return;
}



/* Entry: 106e2466c; end: 106e24697; -[SCGalleryCRItemCell setViewModel:selectModel:] */

void FUN_106e2466c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010c2226c0();
                    /* WARNING: Could not recover jumptable at 0x00010c1facd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSelectMode__11265c558,param_4);
  return;
}



/* Entry: 106e24698; end: 106e24703; -[SCGalleryCRItemCell setSelectMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e24698(long param_1,undefined8 param_2,uint param_3)

{
  if (*(char *)(param_1 + _DAT_11275f344) == '\x01') {
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f360),param_2,param_3 ^ 1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f35c),param_2,param_3 ^ 1);
    *(char *)(param_1 + _DAT_11275f36c) = (char)param_3;
  }
  return;
}



/* Entry: 106e24704; end: 106e2478f; -[SCGalleryCRItemCell interactionMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e24704(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  puVar2 = PTR_PTR_1126b2698;
  uVar4 = *(ulong *)(param_1 + _DAT_11275f364);
  _objc_retain(uVar4);
  _objc_opt_class(puVar2);
  uVar3 = uVar4;
  _objc_opt_isKindOfClass(uVar4,puVar2);
  uVar1 = uVar4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  _objc_release(uVar4);
  if (uVar1 == 0) {
    uVar5 = 1;
  }
  else {
    func_0x00010c268ce0();
    uVar5 = 3;
    if (uVar4 == 2) {
      uVar5 = 1;
    }
  }
  _objc_release(uVar1);
  return uVar5;
}



/* Entry: 106e24790; end: 106e2480b; -[SCGalleryCRItemCell animateLongTapForTouchLocation:reverse:] */

void FUN_106e24790(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uStack_18 = 0x3ff0000000000000;
  if (param_3 == 0) {
    uStack_18 = 0x3fee666666666666;
  }
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_106e2480c;
  puStack_28 = &UNK_110848c48;
  uStack_20 = param_1;
  func_0x00010bf03400(0x3fc999999999999a,PTR__OBJC_CLASS___UIView_1126aec20,param_2,&puStack_40);
  return;
}



/* Entry: 106e2480c; end: 106e2485b;  */

void FUN_106e2480c(long param_1,undefined8 param_2)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
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
  
  _CGAffineTransformMakeScale
            (&uStack_50,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x28));
  uStack_78 = uStack_48;
  uStack_80 = uStack_50;
  uStack_68 = uStack_38;
  uStack_70 = uStack_40;
  uStack_58 = uStack_28;
  uStack_60 = uStack_30;
  func_0x00010c219960(*(undefined8 *)(param_1 + 0x20),param_2,&uStack_80);
  return;
}



/* Entry: 106e2485c; end: 106e2486b; -[SCGalleryCRItemCell transitioningPosterFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2485c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f348),PTR_s_image_1125d7478);
  return;
}



/* Entry: 106e2486c; end: 106e2487b; -[SCGalleryCRItemCell transitioningImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2486c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f348),PTR_s_image_1125d7478);
  return;
}



/* Entry: 106e2487c; end: 106e2487f; -[SCGalleryCRItemCell transitioningExpandingView] */

void FUN_106e2487c(void)

{
  return;
}



/* Entry: 106e24880; end: 106e2488f; -[SCGalleryCRItemCell setTransitioningInitialImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e24880(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1a9f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f348),PTR_s_setImage__1126481e8);
  return;
}



/* Entry: 106e24890; end: 106e2489f; -[SCGalleryCRItemCell disableMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106e24890(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275f340);
}



/* Entry: 106e248a0; end: 106e248af; -[SCGalleryCRItemCell setDisableMode:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e248a0(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_11275f340) = param_3;
  return;
}



/* Entry: 106e248b0; end: 106e248bf; -[SCGalleryCRItemCell viewModel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_106e248b0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_11275f364);
}



/* Entry: 106e248c0; end: 106e248cf; -[SCGalleryCRItemCell selectMode] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_106e248c0(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_11275f36c);
}



/* Entry: 106e248d0; end: 106e2495f; -[SCGalleryCRItemCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e248d0(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275f364,0);
  _objc_storeStrong(param_1 + _DAT_11275f360,0);
  _objc_storeStrong(param_1 + _DAT_11275f35c,0);
  _objc_storeStrong(param_1 + _DAT_11275f354,0);
  _objc_storeStrong(param_1 + _DAT_11275f350,0);
  _objc_storeStrong(param_1 + _DAT_11275f34c,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275f348,0);
  return;
}



/* Entry: 106e24960; end: 106e24a0b; -[SCGalleryLagunaStoryCell initWithFrame:] */

undefined1 * FUN_106e24960(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  puStack_38 = PTR_PTR_1126f70f8;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = (undefined1 *)puVar1;
    func_0x00010c245740(puVar1);
    _objc_retainAutoreleasedReturnValue();
    _objc_opt_class(PTR_PTR_1126d2c00);
    puVar3 = PTR_PTR_1126d2c00;
    _objc_opt_class(PTR_PTR_1126d2c00);
    _NSStringFromClass();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c126000(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  return (undefined1 *)puVar1;
}



/* Entry: 106e24a0c; end: 106e24a6b; -[SCGalleryLagunaStoryCell layoutSubviews] */

void FUN_106e24a0c(undefined8 param_1)

{
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f70f8;
  uStack_30 = param_1;
  _objc_msgSendSuper2(&uStack_30,PTR_s_layoutSubviews_112600e60);
  func_0x00010bf4dce0(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c08cdc0();
  _objc_release(param_1);
  return;
}



/* Entry: 106e24a6c; end: 106e24c8f; -[SCGalleryLagunaStoryCell collectionView:cellForItemAtIndexPath:] */

void FUN_106e24a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126d2c00;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_class(puVar1);
  _NSStringFromClass();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010bf6e0c0(param_3,param_2,puVar1,param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(puVar1);
  uVar3 = param_1;
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bf343c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_4;
  func_0x00010c0840e0(param_4);
  _objc_release(param_4);
  uVar6 = uVar4;
  func_0x00010c0dfd40(uVar4,param_2,uVar5);
  _objc_retainAutoreleasedReturnValue();
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x106e24bd4;
  puStack_58 = &UNK_110952f08;
  _objc_retain(uVar2);
  uStack_50 = uVar2;
  uStack_48 = param_1;
  func_0x00010c0bff00(uVar6,param_2,&puStack_70,&PTR___NSConcreteGlobalBlock_11097eb70);
  _objc_release(uVar6);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_retain(uVar2);
  _objc_release(uStack_50);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106e24c90; end: 106e24c93;  */

void FUN_106e24c90(void)

{
  return;
}



/* Entry: 106e24c94; end: 106e24ca7; -[SCGalleryLagunaStoryCell _maskImage:] */

void FUN_106e24c94(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_imageNamed__1125d7a50,
             &PTR____CFConstantStringClassReference_110e87a18);
  return;
}



/* Entry: 106e24ca8; end: 106e24cbb; -[SCGalleryLagunaStoryCell _subtitleIcon] */

void FUN_106e24ca8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe8230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR__OBJC_CLASS___UIImage_1126aea68,PTR_s_imageNamed__1125d7a50,
             &PTR____CFConstantStringClassReference_110dcc5b8);
  return;
}



/* Entry: 106e24cbc; end: 106e24cc3; -[SCGalleryLagunaStoryCell _shouldShowSubtitleIcon] */

undefined8 FUN_106e24cbc(void)

{
  return 1;
}



/* Entry: 106e24cc4; end: 106e24dbf; -[SCGalleryLagunaStoryCell _subtitleString:] */

void FUN_106e24cc4(undefined **param_1,undefined8 param_2,int param_3)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  
  if ((param_3 == 0) || (ppuVar1 = param_1, func_0x00010c158e00(), (int)ppuVar1 != 0)) {
    ppuVar1 = param_1;
    func_0x00010c29d560();
    _objc_retainAutoreleasedReturnValue();
    ppuVar2 = ppuVar1;
    func_0x00010bf97060();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010c2711a0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010c08fa60();
    _objc_release(ppuVar3);
    _objc_release(ppuVar2);
    _objc_release(ppuVar1);
    if (ppuVar4 == (undefined **)0x0) {
      ppuVar1 = &PTR____CFConstantStringClassReference_110e87a38;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110e87a38,0);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_106e24da8;
    }
  }
  func_0x00010c29d560(param_1);
  _objc_retainAutoreleasedReturnValue();
  ppuVar2 = param_1;
  func_0x00010bf97060();
  _objc_retainAutoreleasedReturnValue();
  ppuVar1 = ppuVar2;
  func_0x00010b5f6c38();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(ppuVar2);
  _objc_release(param_1);
LAB_106e24da8:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106e24dc0; end: 106e24dc7; +[SCGalleryLagunaStoryCell _snapsPerRow] */

undefined8 FUN_106e24dc0(void)

{
  return 4;
}



/* Entry: 106e24dc8; end: 106e24e47; +[SCGalleryLagunaStoryCell _cellSize] */

void FUN_106e24dc8(void)

{
  undefined *puVar1;
  
  func_0x00010bebdaa0();
  puVar1 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14c760();
  _CGRectGetWidth();
  _objc_release(puVar1);
  return;
}



/* Entry: 106e24e48; end: 106e24e4f; -[SCGalleryLagunaStoryCell interactionMode] */

undefined8 FUN_106e24e48(void)

{
  return 3;
}



/* Entry: 106e24e50; end: 106e24fff; -[SCGalleryLagunaStorySnapCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106e24e50(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puStack_48 = PTR_PTR_1126f7100;
  puVar1 = &uStack_50;
  uStack_50 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c17d4c0();
    _objc_release(puVar2);
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = puVar4;
    func_0x00010bfe9720();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01bf60();
    lVar7 = (long)_DAT_11275f370;
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    *(undefined **)((long)puVar1 + lVar7) = puVar3;
    _objc_release(uVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c216160(uVar6);
    _objc_release(puVar3);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar7));
    puVar2 = puVar1;
    func_0x00010bf4b2a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar2);
    uVar6 = *(undefined8 *)((long)puVar1 + lVar7);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar6);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 106e25000; end: 106e25087;  */

void FUN_106e25000(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e25088; end: 106e250db; -[SCGalleryLagunaStorySnapCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e25088(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126f7100;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_prepareForReuse_112620008);
  func_0x00010c212f20(*(undefined8 *)(param_1 + _DAT_11275f374));
  return;
}



/* Entry: 106e250dc; end: 106e2523f; -[SCGalleryLagunaStorySnapCell setViewModel:selectMode:encryptedContentManager:cachingMediaManager:memoriesEntrySyncStatusGeneratorBuilder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e250dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  lVar4 = param_2;
  func_0x00010c06b5a0();
  if ((int)lVar4 != 0) {
    lVar4 = param_2;
    func_0x00010bf4dce0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetMidX();
    lVar1 = param_2;
    func_0x00010bf4b2a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1842e0(param_1);
    _objc_release(lVar2);
    _objc_release(lVar1);
    _objc_release(lVar4);
    lVar4 = (long)_DAT_11275f370;
    func_0x00010c12c960(*(undefined8 *)(param_2 + lVar4));
    uVar3 = *(undefined8 *)(param_2 + lVar4);
    *(undefined8 *)(param_2 + lVar4) = 0;
    _objc_release(uVar3);
  }
  puStack_78 = PTR_PTR_1126f7100;
  lStack_80 = param_2;
  _objc_msgSendSuper2(&lStack_80,PTR_s_setViewModel_selectMode_encrypte_112666410,param_4,param_5,
                      param_6,param_7,param_8);
  func_0x00010beb10e0(param_2);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 106e25240; end: 106e25243; -[SCGalleryLagunaStorySnapCell sourceViewForOpera] */

void FUN_106e25240(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf4b2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_containerView_1125b0650);
  return;
}



/* Entry: 106e25244; end: 106e2549b; -[SCGalleryLagunaStorySnapCell _favoriteIconLayoutConstraints] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e25244(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
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
  ulong uVar15;
  undefined *puVar16;
  undefined *puVar17;
  long lVar18;
  undefined8 uVar19;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar1 = param_1;
  func_0x00010bfa0fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010bf4b2a0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c274200();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bf493c0(0x4018000000000000);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010bfa0fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf4b2a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar8;
  func_0x00010bf34860();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf493a0();
  _objc_retainAutoreleasedReturnValue();
  uVar11 = param_1;
  func_0x00010bfa0fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar12 = uVar11;
  func_0x00010c2a5060();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = uVar12;
  func_0x00010bf49420(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfa0fe0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = param_1;
  func_0x00010bfe0660();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar14;
  func_0x00010bf49420(0x402e000000000000);
  _objc_retainAutoreleasedReturnValue();
  puVar16 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar15);
  _objc_release(uVar14);
  _objc_release(param_1);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar10);
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar16);
    return;
  }
  ___stack_chk_fail();
  uVar2 = uVar1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010b5fa088();
  if (uVar4 < 0xd && (1L << (uVar4 & 0x3f) & 0x1566U) != 0) {
    _objc_release(uVar3);
    _objc_release(uVar2);
    lVar18 = (long)_DAT_11275f374;
    if (*(long *)(uVar1 + lVar18) == 0) {
      puVar16 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar19 = *(undefined8 *)(uVar1 + lVar18);
      *(undefined **)(uVar1 + lVar18) = puVar16;
      _objc_release(uVar19);
      puVar16 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(*(undefined8 *)(uVar1 + lVar18));
      _objc_release(puVar16);
      puVar16 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)(uVar1 + lVar18));
      _objc_release(puVar16);
      puVar16 = PTR_PTR_1126b08d8;
      uVar19 = *(undefined8 *)(uVar1 + lVar18);
      puVar17 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x000100b74f58(0x4000000000000000,0x3fe3333333333333,0,0x3ff0000000000000,puVar16,uVar19,
                          puVar17);
      _objc_release(puVar17);
      uVar2 = uVar1;
      func_0x00010bf4b2a0(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(uVar2);
      func_0x00010c0bbfc0(*(undefined8 *)(uVar1 + lVar18));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar2 = uVar1;
    func_0x00010c29d560(uVar1);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c299de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(uVar1 + lVar18));
  }
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106e2549c; end: 106e256af; -[SCGalleryLagunaStorySnapCell _setupVideoThumbnailLabelIfNeeded] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e2549c(ulong param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  
  uVar1 = param_1;
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c113000();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010b5fa088();
  if (uVar3 < 0xd && (1L << (uVar3 & 0x3f) & 0x1566U) != 0) {
    _objc_release(uVar2);
    _objc_release(uVar1);
    lVar7 = (long)_DAT_11275f374;
    if (*(long *)(param_1 + lVar7) == 0) {
      puVar4 = PTR__OBJC_CLASS___UILabel_1126aec30;
      _objc_alloc();
      func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                          *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
      uVar6 = *(undefined8 *)(param_1 + lVar7);
      *(undefined **)(param_1 + lVar7) = puVar4;
      _objc_release(uVar6);
      puVar4 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010bf6d680(0x4026000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c19e480(*(undefined8 *)(param_1 + lVar7));
      _objc_release(puVar4);
      puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c213180(*(undefined8 *)(param_1 + lVar7));
      _objc_release(puVar4);
      puVar4 = PTR_PTR_1126b08d8;
      uVar6 = *(undefined8 *)(param_1 + lVar7);
      puVar5 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70);
      _objc_retainAutoreleasedReturnValue();
      func_0x000100b74f58(0x4000000000000000,0x3fe3333333333333,0,0x3ff0000000000000,puVar4,uVar6,
                          puVar5);
      _objc_release(puVar5);
      uVar1 = param_1;
      func_0x00010bf4b2a0(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befbb60();
      _objc_release(uVar1);
      func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar7));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    uVar1 = param_1;
    func_0x00010c29d560(param_1);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010c299de0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar7));
  }
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106e256b0; end: 106e25817;  */

void FUN_106e256b0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf1fec0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar6 = lVar5;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar6 + 0x10))(0xc008000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar6);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf34840();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b2a0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106e25818; end: 106e25857; -[SCGalleryLagunaStorySnapCell .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e25818(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11275f374,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11275f370,0);
  return;
}



/* Entry: 106e25858; end: 106e25aeb; -[SCGalleryLagunaStoryViewCell initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_106e25858(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puStack_58 = PTR_PTR_1126f7108;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    puVar2 = PTR__OBJC_CLASS___UIView_1126aec20;
    _objc_alloc();
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    func_0x00010c013de0();
    lVar5 = (long)_DAT_11275f380;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    _objc_release(puVar3);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010bf4dce0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befbb60();
    _objc_release(puVar3);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar6 = (long)_DAT_11275f384;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3feccccccccccccd,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR_PTR_1126d2c08;
    _objc_alloc();
    func_0x00010c01bf60();
    lVar6 = (long)_DAT_11275f388;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar6);
    *(undefined **)((long)puVar1 + lVar6) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf41680(0x3feccccccccccccd,0x3ff0000000000000,PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar6));
    _objc_release(puVar2);
    func_0x00010c182220(*(undefined8 *)((long)puVar1 + lVar6));
    func_0x00010befbb60(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR_PTR_1126b33c0;
    _objc_alloc_init();
    uVar4 = *(undefined8 *)((long)puVar1 + (long)_DAT_11275f38c);
    *(undefined **)((long)puVar1 + (long)_DAT_11275f38c) = puVar2;
    _objc_release(uVar4);
    puVar3 = (undefined8 *)((long)puVar1 + (long)_DAT_11275f390);
    uVar7 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 8);
    uVar4 = *(undefined8 *)PTR__CGAffineTransformIdentity_110347008;
    uVar9 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x18);
    uVar8 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x10);
    puVar3[1] = uVar7;
    *puVar3 = uVar4;
    puVar3[3] = uVar9;
    puVar3[2] = uVar8;
    uVar11 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
    uVar10 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
    puVar3[5] = uVar11;
    puVar3[4] = uVar10;
    puVar3 = (undefined8 *)((long)puVar1 + (long)_DAT_11275f394);
    puVar3[1] = uVar7;
    *puVar3 = uVar4;
    puVar3[3] = uVar9;
    puVar3[2] = uVar8;
    puVar3[5] = uVar11;
    puVar3[4] = uVar10;
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 106e25aec; end: 106e25b73;  */

void FUN_106e25aec(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  func_0x00010bf8c100();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4dce0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106e25b74; end: 106e25cb3; -[SCGalleryLagunaStoryViewCell prepareForReuse] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e25b74(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lStack_40;
  undefined *puStack_38;
  
  puStack_38 = PTR_PTR_1126f7108;
  lStack_40 = param_1;
  _objc_msgSendSuper2(&lStack_40,PTR_s_prepareForReuse_112620008);
  func_0x00010bfec280(*(undefined8 *)(param_1 + _DAT_11275f38c));
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275f398);
  *(undefined8 *)(param_1 + _DAT_11275f398) = 0;
  _objc_release(uVar3);
  func_0x00010c2558c0(*(undefined8 *)(param_1 + _DAT_11275f39c));
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11275f384));
  lVar4 = (long)_DAT_11275f388;
  func_0x00010c1677c0(0x3ff0000000000000,*(undefined8 *)(param_1 + lVar4));
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + _DAT_11275f3a0);
  *(undefined8 *)(param_1 + _DAT_11275f3a0) = 0;
  _objc_release(uVar3);
  func_0x00010c1a7f60(*(undefined8 *)(param_1 + _DAT_11275f3a4));
  lVar4 = (long)_DAT_11275f3a8;
  func_0x00010c18b5e0(*(undefined8 *)(param_1 + lVar4));
  *(undefined1 *)(param_1 + _DAT_11275f3ac) = 0;
  func_0x00010c256060(param_1);
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar3);
  *(undefined1 *)(param_1 + _DAT_11275f3b0) = 0;
  puVar2 = PTR__CGAffineTransformIdentity_110347008;
  puVar1 = (undefined8 *)(param_1 + _DAT_11275f390);
  uVar5 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x28);
  uVar3 = *(undefined8 *)(PTR__CGAffineTransformIdentity_110347008 + 0x20);
  puVar1[5] = uVar5;
  puVar1[4] = uVar3;
  uVar9 = *(undefined8 *)(puVar2 + 8);
  uVar8 = *(undefined8 *)puVar2;
  uVar7 = *(undefined8 *)(puVar2 + 0x18);
  uVar6 = *(undefined8 *)(puVar2 + 0x10);
  puVar1[1] = uVar9;
  *puVar1 = uVar8;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  puVar1 = (undefined8 *)(param_1 + _DAT_11275f394);
  puVar1[1] = uVar9;
  *puVar1 = uVar8;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
  puVar1[5] = uVar5;
  puVar1[4] = uVar3;
  lVar4 = (long)_DAT_11275f3b4;
  func_0x00010c137fe0(*(undefined8 *)(param_1 + lVar4));
  uVar3 = *(undefined8 *)(param_1 + lVar4);
  *(undefined8 *)(param_1 + lVar4) = 0;
  _objc_release(uVar3);
  return;
}



/* Entry: 106e25cb4; end: 106e25d13; -[SCGalleryLagunaStoryViewCell dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e25cb4(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c256060();
  lVar2 = (long)_DAT_11275f3b4;
  func_0x00010c137fe0(*(undefined8 *)(param_1 + lVar2));
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = 0;
  _objc_release(uVar1);
  puStack_28 = PTR_PTR_1126f7108;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 106e25d14; end: 106e25d47; -[SCGalleryLagunaStoryViewCell transitioningPosterFrame] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e25d14(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_11275f3a0);
  if (lVar1 != 0) {
    _objc_retain(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 106e25d48; end: 106e25d57; -[SCGalleryLagunaStoryViewCell transitioningImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e25d48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfe6ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + _DAT_11275f384),PTR_s_image_1125d7478);
  return;
}



/* Entry: 106e25d58; end: 106e25d5b; -[SCGalleryLagunaStoryViewCell transitioningExpandingView] */

void FUN_106e25d58(void)

{
  return;
}



/* Entry: 106e25d5c; end: 106e25d5f; -[SCGalleryLagunaStoryViewCell setTransitioningInitialImage:] */

void FUN_106e25d5c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdce2b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__applyImage__112551248);
  return;
}



/* Entry: 106e25d60; end: 106e25dfb; -[SCGalleryLagunaStoryViewCell _setFullImage:forSnap:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e25d60(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11275f3a0;
  if (*(long *)(param_1 + lVar2) == 0) {
    _objc_retain(param_3);
    uVar1 = *(undefined8 *)(param_1 + lVar2);
    *(undefined8 *)(param_1 + lVar2) = param_3;
    _objc_retain(param_4);
    _objc_release(uVar1);
    uVar1 = param_4;
    func_0x00010c0ed100();
    _objc_release(param_4);
    *(int *)(param_1 + _DAT_11275f3b8) = (int)uVar1;
  }
  func_0x00010bdce2a0(param_1,param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106e25dfc; end: 106e25e77; -[SCGalleryLagunaStoryViewCell _applyImage:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_106e25dfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_11275f384);
  _objc_retain(param_3);
  func_0x00010c1a9f00(uVar1,param_2,param_3);
  uVar1 = param_3;
  func_0x00010bf5c7e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11275f388),param_2,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}


