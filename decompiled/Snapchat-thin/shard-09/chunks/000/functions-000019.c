/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10681f17c; end: 10681f227; -[SCImpalaNotificationSettingsActionHandler initWithUpdateMidRollLambda:updateMilestoneLambda:] */

undefined1 *
FUN_10681f17c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3610;
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



/* Entry: 10681f228; end: 10681f237; -[SCImpalaNotificationSettingsActionHandler updateMidrollNotificationsWithEnabled:] */

void FUN_10681f228(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010681f234. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))(*(long *)(param_1 + 8),param_3);
  return;
}



/* Entry: 10681f238; end: 10681f247; -[SCImpalaNotificationSettingsActionHandler updateMilestoneNotificationsWithEnabled:] */

void FUN_10681f238(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010681f244. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))(*(long *)(param_1 + 0x10),param_3);
  return;
}



/* Entry: 10681f248; end: 10681f277; -[SCImpalaNotificationSettingsActionHandler .cxx_destruct] */

void FUN_10681f248(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10681f278; end: 10681f383; -[SCImpalaProfileManagementNuxActionHandler initWithRemoveProfileNewLabelLambda:removeSavedStoriesNewLabelLambda:removeStoriesPinnedTooltipLambda:removeSpotlightPinnedTooltipLambda:] */

undefined1 *
FUN_10681f278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_48 = PTR_PTR_1126f3618;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
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
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_6;
    _objc_retainBlock();
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



/* Entry: 10681f384; end: 10681f38f; -[SCImpalaProfileManagementNuxActionHandler removeProfileNewLabel] */

void FUN_10681f384(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010681f38c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 8) + 0x10))();
  return;
}



/* Entry: 10681f390; end: 10681f39b; -[SCImpalaProfileManagementNuxActionHandler removeSavedStoriesNewLabel] */

void FUN_10681f390(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010681f398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x10) + 0x10))();
  return;
}



/* Entry: 10681f39c; end: 10681f3a7; -[SCImpalaProfileManagementNuxActionHandler removeStoriesPinnedTooltip] */

void FUN_10681f39c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010681f3a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x18) + 0x10))();
  return;
}



/* Entry: 10681f3a8; end: 10681f3b3; -[SCImpalaProfileManagementNuxActionHandler removeSpotlightPinnedTooltip] */

void FUN_10681f3a8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010681f3b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10681f3b4; end: 10681f3fb; -[SCImpalaProfileManagementNuxActionHandler .cxx_destruct] */

void FUN_10681f3b4(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10681f3fc; end: 10681f5bf; -[SCLivePublicStoryStateObserver initWithMyStoriesDataCoordinator:snapProProfilesProvider:] */

undefined1 * FUN_10681f3fc(undefined1 *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined1 **ppuVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puStack_40;
  undefined *puStack_38;
  
  ppuVar1 = &puStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar4 = (undefined1 *)0x0;
  if ((param_3 != 0) && (param_4 != 0)) {
    puStack_38 = PTR_PTR_1126f3620;
    puStack_40 = param_1;
    _objc_msgSendSuper2(&puStack_40,PTR_s_init_1125d9248);
    if (ppuVar1 != (undefined1 **)0x0) {
      _objc_retain(param_3);
      uVar2 = *(undefined8 *)((long)ppuVar1 + 8);
      *(long *)((long)ppuVar1 + 8) = param_3;
      _objc_release(uVar2);
      _objc_retain(param_4);
      uVar2 = *(undefined8 *)((long)ppuVar1 + 0x10);
      *(long *)((long)ppuVar1 + 0x10) = param_4;
      _objc_release(uVar2);
      puVar3 = PTR_PTR_1126ae790;
      _objc_alloc();
      func_0x00010c021520();
      uVar2 = *(undefined8 *)((long)ppuVar1 + 0x18);
      *(undefined **)((long)ppuVar1 + 0x18) = puVar3;
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      func_0x00010bf09f00();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)ppuVar1 + 0x20);
      *(undefined **)((long)ppuVar1 + 0x20) = puVar3;
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)ppuVar1 + 0x28);
      *(undefined **)((long)ppuVar1 + 0x28) = puVar3;
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)ppuVar1 + 0x30);
      *(undefined **)((long)ppuVar1 + 0x30) = puVar3;
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)ppuVar1 + 0x38);
      *(undefined **)((long)ppuVar1 + 0x38) = puVar3;
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      func_0x00010bf71e20();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)ppuVar1 + 0x40);
      *(undefined **)((long)ppuVar1 + 0x40) = puVar3;
      _objc_release(uVar2);
      puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
      func_0x00010c1607a0();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = *(undefined8 *)((long)ppuVar1 + 0x48);
      *(undefined **)((long)ppuVar1 + 0x48) = puVar3;
      _objc_release(uVar2);
    }
    _objc_retain(ppuVar1);
    param_1 = (undefined1 *)ppuVar1;
    puVar4 = (undefined1 *)ppuVar1;
  }
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(param_1);
  return puVar4;
}



/* Entry: 10681f5c0; end: 10681f79b; -[SCLivePublicStoryStateObserver dealloc] */

void FUN_10681f5c0(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  long lStack_48;
  
  plVar4 = &lStack_1e0;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if (*(char *)(param_1 + 0x51) == '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c12cf80();
    _objc_release(uVar1);
  }
  uStack_168 = 0;
  uStack_170 = 0;
  uStack_158 = 0;
  uStack_160 = 0;
  lStack_188 = 0;
  uStack_190 = 0;
  uStack_178 = 0;
  plStack_180 = (long *)0x0;
  lVar2 = *(long *)(param_1 + 0x38);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar5 = *plStack_180;
    do {
      lVar6 = 0;
      do {
        if (*plStack_180 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010bf2dba0(*(undefined8 *)(lStack_188 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  uStack_1a8 = 0;
  uStack_1b0 = 0;
  uStack_198 = 0;
  uStack_1a0 = 0;
  lStack_1c8 = 0;
  uStack_1d0 = 0;
  uStack_1b8 = 0;
  plStack_1c0 = (long *)0x0;
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar5 = *plStack_1c0;
    do {
      lVar6 = 0;
      do {
        if (*plStack_1c0 != lVar5) {
          _objc_enumerationMutation(lVar2);
        }
        func_0x00010bf2dba0(*(undefined8 *)(lStack_1c8 + lVar6 * 8));
        lVar6 = lVar6 + 1;
      } while (lVar3 != lVar6);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  puStack_1d8 = PTR_PTR_1126f3620;
  lStack_1e0 = param_1;
  _objc_msgSendSuper2(&lStack_1e0,PTR_s_dealloc_112525b20);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010c0f7fc0(*(undefined8 *)((long)plVar4 + 0x18));
  return;
}



/* Entry: 10681f79c; end: 10681f7f3; -[SCLivePublicStoryStateObserver tearDown] */

void FUN_10681f79c(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_10681f7f4;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f7fc0(*(undefined8 *)(param_1 + 0x18),param_2,&puStack_38);
  return;
}



/* Entry: 10681f7f4; end: 10681fa23;  */

void FUN_10681f7f4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uStack_1d0;
  long lStack_1c8;
  long *plStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  long lStack_188;
  long *plStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined1 auStack_148 [128];
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x50) & 1) == 0) {
    *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x50) = 1;
    lVar3 = *(long *)(param_1 + 0x20);
    if (*(char *)(lVar3 + 0x51) == '\x01') {
      uVar1 = *(undefined8 *)(lVar3 + 8);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c12cf80();
      _objc_release(uVar1);
      *(undefined1 *)(*(long *)(param_1 + 0x20) + 0x51) = 0;
      lVar3 = *(long *)(param_1 + 0x20);
    }
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    lStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    plStack_180 = (long *)0x0;
    lVar2 = *(long *)(lVar3 + 0x38);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar4 = *plStack_180;
      do {
        lVar5 = 0;
        do {
          if (*plStack_180 != lVar4) {
            _objc_enumerationMutation(lVar2);
          }
          func_0x00010bf2dba0(*(undefined8 *)(lStack_188 + lVar5 * 8));
          lVar5 = lVar5 + 1;
        } while (lVar3 != lVar5);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_190,auStack_c8,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    lStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    plStack_1c0 = (long *)0x0;
    lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x40);
    func_0x00010bf00d20();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010bf52a60();
    if (lVar3 != 0) {
      lVar4 = *plStack_1c0;
      do {
        lVar5 = 0;
        do {
          if (*plStack_1c0 != lVar4) {
            _objc_enumerationMutation(lVar2);
          }
          func_0x00010bf2dba0(*(undefined8 *)(lStack_1c8 + lVar5 * 8));
          lVar5 = lVar5 + 1;
        } while (lVar3 != lVar5);
        lVar3 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_1d0,auStack_148,0x10);
      } while (lVar3 != 0);
    }
    _objc_release(lVar2);
    func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38));
    func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40));
    func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20));
    func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28));
    func_0x00010c12adc0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30));
    param_1 = *(long *)(*(long *)(param_1 + 0x20) + 0x48);
    func_0x00010c12adc0();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10681fa24; end: 10681fa4b; -[SCLivePublicStoryStateObserver queuePerformer] */

void FUN_10681fa24(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10681fa4c; end: 10681fb9f; -[SCLivePublicStoryStateObserver observeLivePublicStoryWithBusinessProfileId:onChange:] */

void FUN_10681fa4c(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar2 = PTR_PTR_1126ce630;
    _objc_alloc();
    func_0x00010bff9de0();
    _objc_initWeak(auStack_48,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(puVar2);
    _objc_retain(param_3);
    func_0x00010c0f7fc0(uVar3);
    _objc_retain(puVar2);
    _objc_release(param_3);
    _objc_release(puVar2);
    _objc_release(puVar2);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10681fba0; end: 10681fd1b;  */

void FUN_10681fba0(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lVar2 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0x50) & 1) == 0)) {
    func_0x00010be898c0(lVar2);
    func_0x00010befa120(*(undefined8 *)(lVar2 + 0x20));
    func_0x00010be0a6a0(lVar2);
    lVar3 = *(long *)(lVar2 + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      puVar4 = *(undefined **)(lVar2 + 0x30);
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar1 = PTR____NSArray0__struct_11034ab48;
      if (puVar4 != (undefined *)0x0) {
        puVar1 = puVar4;
      }
      _objc_retain(puVar1);
      _objc_release(puVar4);
      lVar5 = *(long *)(param_1 + 0x20);
      func_0x00010bf5f620();
      _objc_retainAutoreleasedReturnValue();
      if (lVar5 != 0) {
        puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_70 = 0xc2000000;
        pcStack_68 = FUN_10681fd1c;
        puStack_60 = &UNK_11084a9e8;
        _objc_retain(lVar5);
        lStack_48 = lVar5;
        _objc_retain(lVar3);
        lStack_58 = lVar3;
        _objc_retain(puVar1);
        puStack_50 = puVar1;
        func_0x000100162d98("APPSTORE",&puStack_78);
        _objc_release(puStack_50);
        _objc_release(lStack_58);
        _objc_release(lStack_48);
      }
      _objc_release(lVar5);
      _objc_release(puVar1);
    }
    func_0x00010be87260(lVar2);
    _objc_release(lVar3);
  }
  _objc_release(lVar2);
  return;
}



/* Entry: 10681fd1c; end: 10681fd2f;  */

void FUN_10681fd1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010681fd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x30) + 0x10))
            (*(long *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x20),
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 10681fd30; end: 10681fdbf; -[SCLivePublicStoryStateObserver removeSubscription:] */

void FUN_10681fd30(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_10681fdc0;
  puStack_48 = &UNK_110841f80;
  lStack_40 = param_1;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_60);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 10681fdc0; end: 10681ff8f;  */

void FUN_10681fdc0(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
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
  func_0x00010c12d360(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x20),param_2,
                      *(undefined8 *)(param_1 + 0x28));
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  lVar6 = *(long *)(*(long *)(param_1 + 0x20) + 0x20);
  _objc_retain(lVar6);
  lVar2 = lVar6;
  func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
  if (lVar2 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(lVar6);
        }
        uVar3 = *(ulong *)(lStack_128 + lVar8 * 8);
        func_0x00010bf25140();
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010c0720c0();
        _objc_release(uVar3);
        if ((uVar4 & 1) != 0) {
          _objc_release(lVar6);
          goto LAB_10681ff4c;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = lVar6;
      func_0x00010bf52a60(lVar6,param_2,&uStack_130,auStack_e8,0x10);
    } while (lVar2 != 0);
  }
  _objc_release(lVar6);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  func_0x00010c0e00e0(uVar5,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
  _objc_release(uVar5);
  func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),param_2,lVar1);
  uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  func_0x00010c0e00e0(uVar5,param_2,lVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf2dba0();
  _objc_release(uVar5);
  func_0x00010c12d3e0(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40),param_2,lVar1);
LAB_10681ff4c:
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010bf0ae40(*(undefined8 *)(lVar1 + 0x18));
  if ((*(byte *)(lVar1 + 0x51) & 1) == 0) {
    uVar5 = *(undefined8 *)(lVar1 + 8);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar5);
    *(undefined1 *)(lVar1 + 0x51) = 1;
  }
  return;
}



/* Entry: 10681ff90; end: 10681ffe7; -[SCLivePublicStoryStateObserver _registerListenerIfNeededLocked] */

void FUN_10681ff90(long param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x18));
  if ((*(byte *)(param_1 + 0x51) & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar1);
    *(undefined1 *)(param_1 + 0x51) = 1;
  }
  return;
}



/* Entry: 10681ffe8; end: 10682023f; -[SCLivePublicStoryStateObserver _ensureStoryHandlerObserverForBusinessProfileIdLocked:] */

void FUN_10681ffe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_90 [8];
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x18));
  lVar1 = param_1;
  func_0x00010be16bc0();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    _objc_initWeak(auStack_58,param_1);
    lVar3 = *(long *)(param_1 + 0x38);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      lVar3 = lVar1;
      func_0x00010c259c00();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_80 = 0xc2000000;
        pcStack_78 = FUN_106820240;
        puStack_70 = &UNK_110942028;
        _objc_copyWeak(auStack_60,auStack_58);
        _objc_retain(uVar2);
        lVar4 = lVar3;
        uStack_68 = uVar2;
        func_0x00010befa2a0();
        _objc_retainAutoreleasedReturnValue();
        if (lVar4 != 0) {
          func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x38));
        }
        _objc_release(lVar4);
        _objc_release(uStack_68);
        _objc_destroyWeak(auStack_60);
      }
      _objc_release(lVar3);
    }
    lVar3 = *(long *)(param_1 + 0x40);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar3 == 0) {
      _objc_copyWeak(auStack_90,auStack_58);
      _objc_retain(uVar2);
      lVar3 = lVar1;
      func_0x00010befa2a0();
      _objc_retainAutoreleasedReturnValue();
      if (lVar3 != 0) {
        func_0x00010c1d0640(*(undefined8 *)(param_1 + 0x40));
      }
      _objc_release(lVar3);
      _objc_release(uVar2);
      _objc_destroyWeak(auStack_90);
    }
    _objc_destroyWeak(auStack_58);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
  return;
}



/* Entry: 106820240; end: 1068202db;  */

void FUN_106820240(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_1068202dc;
    puStack_48 = &UNK_110841f80;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lStack_40 = lVar1;
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_60);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 1068202dc; end: 1068202f7;  */

void FUN_1068202dc(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x50) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be87270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__recomputeAndEmitForBusinessProf_11257f638,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1068202f8; end: 106820393;  */

void FUN_1068202f8(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar3 = *(undefined8 *)(lVar1 + 0x18);
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106820394;
    puStack_48 = &UNK_110841f80;
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    lStack_40 = lVar1;
    _objc_retain(uVar2);
    uStack_38 = uVar2;
    func_0x00010c0f7fc0(uVar3,param_2,&puStack_60);
    _objc_release(uStack_38);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106820394; end: 1068203af;  */

void FUN_106820394(long param_1)

{
  if ((*(byte *)(*(long *)(param_1 + 0x20) + 0x50) & 1) != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010be87270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(long *)(param_1 + 0x20),PTR_s__recomputeAndEmitForBusinessProf_11257f638,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 1068203b0; end: 10682067b; -[SCLivePublicStoryStateObserver _recomputeAndEmitForBusinessProfileIdLocked:] */

void FUN_1068203b0(long param_1,undefined1 *param_2,long param_3)

{
  undefined1 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **unaff_x24;
  long lVar6;
  long lVar7;
  undefined *puStack_170;
  undefined8 uStack_168;
  code *pcStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 auStack_140 [8];
  undefined1 auStack_138 [8];
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x18));
  if ((*(byte *)(param_1 + 0x50) & 1) == 0) {
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    lStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    lVar4 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar4);
    lVar2 = lVar4;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar6 = *plStack_120;
      do {
        lVar7 = 0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(lVar4);
          }
          puVar1 = *(undefined1 **)(lStack_128 + lVar7 * 8);
          func_0x00010bf25140();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = (undefined **)puVar1;
          func_0x00010c0720c0();
          _objc_release(puVar1);
          if (((ulong)unaff_x24 & 1) != 0) {
            _objc_release(lVar4);
            lVar4 = param_1;
            func_0x00010be16bc0();
            _objc_retainAutoreleasedReturnValue();
            if (lVar4 != 0) {
              lVar2 = *(long *)(param_1 + 0x38);
              func_0x00010c0e00e0();
              _objc_retainAutoreleasedReturnValue();
              if (lVar2 != 0) {
                lVar6 = *(long *)(param_1 + 0x40);
                func_0x00010c0e00e0();
                _objc_retainAutoreleasedReturnValue();
                _objc_release();
                _objc_release(lVar2);
                if (lVar6 != 0) goto LAB_10682052c;
              }
              func_0x00010be0a6a0(param_1);
            }
LAB_10682052c:
            lVar2 = param_3;
            func_0x00010bf51e00();
            uVar5 = *(undefined8 *)(param_1 + 0x18);
            _objc_retain(uVar5);
            _objc_initWeak(auStack_138,param_1);
            uVar3 = *(undefined8 *)(param_1 + 8);
            func_0x00010c269d40();
            _objc_retainAutoreleasedReturnValue();
            puStack_170 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_168 = 0xc2000000;
            pcStack_160 = FUN_10682067c;
            puStack_158 = &UNK_1108576a8;
            param_2 = auStack_138;
            _objc_copyWeak(auStack_140);
            _objc_retain(uVar5);
            uStack_150 = uVar5;
            _objc_retain(lVar2);
            lStack_148 = lVar2;
            func_0x00010c11d940(uVar3);
            _objc_release(uVar3);
            _objc_release(lStack_148);
            _objc_release(uStack_150);
            _objc_destroyWeak(auStack_140);
            _objc_destroyWeak(auStack_138);
            _objc_release(uVar5);
            _objc_release(lVar2);
            unaff_x24 = &puStack_170;
            goto LAB_106820604;
          }
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        lVar2 = lVar4;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
LAB_106820604:
    _objc_release(lVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    _objc_destroyWeak((undefined1 *)((long)unaff_x24 + 0x30));
    _objc_destroyWeak(auStack_138);
    __Unwind_Resume();
    _objc_retain(param_2);
    lVar2 = param_3 + 0x30;
    _objc_loadWeakRetained();
    if (lVar2 != 0) {
      uVar3 = *(undefined8 *)(param_3 + 0x20);
      uVar5 = *(undefined8 *)(param_3 + 0x28);
      _objc_retain(uVar5);
      _objc_retain(param_2);
      func_0x00010c0f7fc0(uVar3);
      _objc_release(param_2);
      _objc_release(uVar5);
    }
    _objc_release(lVar2);
    _objc_release(param_2);
    return;
  }
  return;
}



/* Entry: 10682067c; end: 10682073b;  */

void FUN_10682067c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  _objc_retain(param_2);
  lVar3 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar3 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    uVar2 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar2);
    _objc_retain(param_2);
    func_0x00010c0f7fc0(uVar1);
    _objc_release(param_2);
    _objc_release(uVar2);
  }
  _objc_release(lVar3);
  _objc_release(param_2);
  return;
}



/* Entry: 10682073c; end: 106821293;  */

void FUN_10682073c(long param_1,undefined8 param_2,long param_3,undefined *param_4,
                  undefined *param_5,undefined *param_6,undefined *param_7,undefined *param_8)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  byte bVar11;
  undefined *unaff_x19;
  undefined *unaff_x20;
  long lVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *unaff_x21;
  undefined *puVar15;
  long lVar16;
  uint uVar17;
  undefined *unaff_x22;
  long lVar18;
  undefined *puVar19;
  ulong uVar20;
  undefined *unaff_x23;
  ulong uVar21;
  undefined *unaff_x24;
  undefined *unaff_x25;
  undefined *puVar22;
  undefined *unaff_x26;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *unaff_x28;
  long lVar26;
  undefined1 auStack_7d0 [8];
  undefined1 auStack_7c8 [8];
  undefined *puStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined *puStack_7a8;
  undefined8 *puStack_7a0;
  undefined *puStack_798;
  undefined8 uStack_790;
  code *pcStack_788;
  undefined *puStack_780;
  undefined8 *puStack_778;
  undefined *puStack_770;
  undefined8 uStack_768;
  code *pcStack_760;
  undefined *puStack_758;
  undefined8 *puStack_750;
  undefined *puStack_748;
  undefined8 uStack_740;
  code *pcStack_738;
  undefined *puStack_730;
  undefined8 *puStack_728;
  undefined8 uStack_720;
  undefined8 *puStack_718;
  undefined8 uStack_710;
  undefined1 uStack_708;
  undefined8 uStack_6c0;
  long lStack_6b8;
  long *plStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  long lStack_5f8;
  undefined *puStack_5f0;
  undefined *puStack_5e8;
  undefined *puStack_5e0;
  undefined *puStack_5d8;
  undefined *puStack_5d0;
  undefined *puStack_5c8;
  undefined *puStack_5c0;
  undefined *puStack_5b8;
  undefined *puStack_5b0;
  long lStack_5a8;
  undefined1 ***pppuStack_5a0;
  code *pcStack_598;
  undefined8 uStack_590;
  long lStack_588;
  undefined8 *puStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  long lStack_4c8;
  undefined *puStack_4c0;
  undefined *puStack_4b8;
  undefined *puStack_4b0;
  undefined *puStack_4a8;
  undefined *puStack_4a0;
  long lStack_498;
  undefined1 **ppuStack_490;
  code *pcStack_488;
  undefined *puStack_478;
  undefined *puStack_470;
  uint uStack_464;
  undefined *puStack_460;
  undefined *puStack_458;
  undefined *puStack_450;
  undefined *puStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined *puStack_430;
  undefined *puStack_428;
  undefined *puStack_420;
  undefined *puStack_418;
  undefined *puStack_410;
  undefined *puStack_408;
  undefined *puStack_400;
  undefined *puStack_3f8;
  undefined *puStack_3f0;
  undefined *puStack_3e8;
  undefined8 uStack_3e0;
  code *pcStack_3d8;
  undefined *puStack_3d0;
  undefined *puStack_3c8;
  undefined *puStack_3c0;
  undefined *puStack_3b8;
  undefined8 uStack_3b0;
  long lStack_3a8;
  undefined8 *puStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  long lStack_2f0;
  undefined *puStack_2e0;
  long lStack_2d8;
  undefined *puStack_2d0;
  undefined *puStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined *puStack_2b0;
  undefined *puStack_2a8;
  undefined *puStack_2a0;
  undefined *puStack_298;
  undefined1 *puStack_290;
  code *pcStack_288;
  undefined *puStack_280;
  undefined *puStack_278;
  byte bStack_270;
  byte bStack_26f;
  undefined *puStack_268;
  undefined *puStack_260;
  uint uStack_254;
  undefined *puStack_250;
  long lStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined *puStack_230;
  undefined *puStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined *puStack_210;
  uint uStack_204;
  undefined8 uStack_200;
  undefined *puStack_1f8;
  undefined8 uStack_1f0;
  long lStack_1e8;
  long *plStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  long lStack_1a8;
  long *plStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar2 = *(undefined **)(param_1 + 0x20);
  if ((puVar2[0x50] & 1) == 0) {
    func_0x00010be16bc0(puVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar2;
    func_0x00010c258f40();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar24;
    func_0x00010c089fc0();
    _objc_retainAutoreleasedReturnValue();
    puStack_240 = puVar23;
    _objc_release(puVar24);
    puStack_238 = puVar2;
    func_0x00010c259c00();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar2;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    puVar23 = puVar24;
    func_0x00010c25a380();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar24);
    _objc_release(puVar2);
    _objc_retain(puVar23);
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    puVar2 = puVar23;
    func_0x00010bf8d2c0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar2;
    func_0x00010bf52a60();
    if (puVar24 == (undefined *)0x0) {
      unaff_x23 = (undefined *)0x0;
    }
    else {
      unaff_x23 = (undefined *)0x0;
      lVar18 = *plStack_1a0;
      do {
        puVar22 = (undefined *)0x0;
        do {
          if (*plStack_1a0 != lVar18) {
            _objc_enumerationMutation(puVar2);
          }
          puVar15 = *(undefined **)(lStack_1a8 + (long)puVar22 * 8);
          if (unaff_x23 == (undefined *)0x0) {
LAB_106820890:
            _objc_retain(puVar15);
            _objc_release(unaff_x23);
            unaff_x23 = puVar15;
          }
          else {
            puVar25 = puVar15;
            func_0x00010c2709c0();
            puVar19 = unaff_x23;
            func_0x00010c2709c0();
            if ((long)puVar19 <= (long)puVar25) goto LAB_106820890;
          }
          puVar22 = puVar22 + 1;
        } while (puVar24 != puVar22);
        puVar24 = puVar2;
        func_0x00010bf52a60();
      } while (puVar24 != (undefined *)0x0);
    }
    _objc_release(puVar2);
    _objc_release(puVar23);
    puVar2 = unaff_x23;
    func_0x00010c24cfc0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar2;
    func_0x000108ea5f00();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar2);
    puVar2 = unaff_x23;
    func_0x00010bfe5ea0();
    _objc_retainAutoreleasedReturnValue();
    puStack_218 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    if (unaff_x23 == (undefined *)0x0) {
      puStack_218 = (undefined *)0x0;
    }
    else {
      puVar22 = unaff_x23;
      func_0x00010c2709c0(unaff_x23);
      func_0x00010c0df720((double)(long)puVar22 / 1000.0);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_retain(unaff_x23);
    puVar22 = unaff_x23;
    func_0x00010c26df40();
    _objc_retainAutoreleasedReturnValue();
    puVar15 = puVar22;
    func_0x00010c26e3a0();
    _objc_retainAutoreleasedReturnValue();
    puVar25 = puVar15;
    func_0x00010c08fa60();
    _objc_release(puVar15);
    _objc_release(puVar22);
    puVar22 = unaff_x23;
    puStack_230 = puVar2;
    if (puVar25 == (undefined *)0x0) {
      func_0x00010c112140();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar22;
      func_0x00010c08fa60();
      if (puVar2 == (undefined *)0x0) {
        puStack_220 = (undefined *)0x0;
      }
      else {
        puVar2 = unaff_x23;
        func_0x00010c112140();
        _objc_retainAutoreleasedReturnValue();
        puStack_220 = puVar2;
      }
    }
    else {
      func_0x00010c26df40();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar22;
      func_0x00010c26e3a0();
      _objc_retainAutoreleasedReturnValue();
      puStack_220 = puVar2;
    }
    _objc_release(puVar22);
    _objc_release(unaff_x23);
    puStack_228 = puVar23;
    func_0x00010bf8d2c0();
    _objc_retainAutoreleasedReturnValue();
    puVar22 = puVar23;
    func_0x00010c246ca0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar23);
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(puVar22);
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    plStack_1a0 = (long *)0x0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    uStack_180 = 0;
    puStack_1f8 = puVar2;
    _objc_retain(puVar22);
    puVar2 = puVar22;
    func_0x00010bf52a60();
    if (puVar2 != (undefined *)0x0) {
      lVar18 = *plStack_1a0;
      do {
        puVar23 = (undefined *)0x0;
        do {
          if (*plStack_1a0 != lVar18) {
            _objc_enumerationMutation(puVar22);
          }
          lVar3 = *(long *)(lStack_1a8 + (long)puVar23 * 8);
          func_0x00010c24cfc0();
          _objc_retainAutoreleasedReturnValue();
          lVar12 = lVar3;
          func_0x000108ea5f00();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar3);
          lVar3 = lVar12;
          func_0x00010c08fa60();
          if (lVar3 != 0) {
            func_0x00010befa120(puStack_1f8);
          }
          _objc_release(lVar12);
          puVar23 = puVar23 + 1;
        } while (puVar2 != puVar23);
        puVar2 = puVar22;
        func_0x00010bf52a60();
      } while (puVar2 != (undefined *)0x0);
    }
    puStack_250 = puVar24;
    _objc_release(puVar22);
    _objc_release(puVar22);
    unaff_x19 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    func_0x00010bf529e0(*(undefined8 *)(param_1 + 0x30));
    func_0x00010bf0a0e0();
    _objc_retainAutoreleasedReturnValue();
    lStack_1e8 = 0;
    uStack_1f0 = 0;
    uStack_1d8 = 0;
    plStack_1e0 = (long *)0x0;
    uStack_1c8 = 0;
    uStack_1d0 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    lVar12 = *(long *)(param_1 + 0x30);
    lStack_248 = param_1;
    _objc_retain(lVar12);
    lVar18 = lVar12;
    func_0x00010bf52a60();
    if (lVar18 == 0) {
      uStack_200 = 0;
      uStack_204 = 0;
    }
    else {
      uStack_200 = 0;
      uStack_204 = 0;
      lVar3 = *plStack_1e0;
      do {
        lVar26 = 0;
        do {
          if (*plStack_1e0 != lVar3) {
            _objc_enumerationMutation(lVar12);
          }
          lVar16 = *(long *)(lStack_1e8 + lVar26 * 8);
          lVar4 = lVar16;
          func_0x00010c105980();
          if ((lVar4 + 6U & 0xfffffffffffffff9) == 0) {
            uStack_200 = CONCAT44(uStack_200._4_4_,1);
          }
          else {
            lVar4 = lVar16;
            func_0x00010c105980();
            if (lVar4 + 7U < 7 && (1L << (lVar4 + 7U & 0x3f) & 0x45U) != 0) {
              uStack_200 = CONCAT44(1,(undefined4)uStack_200);
            }
            else {
              lVar4 = lVar16;
              func_0x00010c105980();
              if ((lVar4 == 1) || (lVar4 = lVar16, func_0x00010c105980(), lVar4 == 2)) {
                uStack_204 = 1;
              }
            }
          }
          func_0x00010c23f220();
          _objc_retainAutoreleasedReturnValue();
          lVar4 = lVar16;
          func_0x00010c0f79a0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar16);
          if (lVar4 != 0) {
            func_0x00010befa120(unaff_x19);
          }
          _objc_release(lVar4);
          lVar26 = lVar26 + 1;
        } while (lVar18 != lVar26);
        lVar18 = lVar12;
        func_0x00010bf52a60();
      } while (lVar18 != 0);
    }
    _objc_release(lVar12);
    param_1 = lStack_248;
    uStack_254 = (uint)*(undefined8 *)(*(long *)(lStack_248 + 0x20) + 0x48);
    func_0x00010bf4b900();
    puVar23 = *(undefined **)(*(long *)(param_1 + 0x20) + 0x28);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    puVar24 = puVar23;
    func_0x00010c11a880();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR____NSArray0__struct_11034ab48;
    if (puVar24 != (undefined *)0x0) {
      puVar2 = puVar24;
    }
    _objc_retain(puVar2);
    _objc_release(puVar24);
    unaff_x26 = puStack_228;
    puVar24 = puVar23;
    unaff_x25 = puStack_230;
    unaff_x28 = puStack_250;
    puStack_210 = puVar23;
    if ((puStack_228 == (undefined *)0x0) &&
       (puVar25 = puVar2, func_0x00010bf529e0(), puVar15 = puStack_230, puVar22 = puStack_250,
       unaff_x25 = puStack_230, unaff_x28 = puStack_250, puVar25 != (undefined *)0x0)) {
      unaff_x28 = puVar23;
      func_0x00010c11a520();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
      unaff_x25 = puVar23;
      func_0x00010c11a540();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar15);
      func_0x00010c11a580();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_218);
      puVar22 = puStack_210;
      func_0x00010c11a560();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puStack_220);
      _objc_retain(puVar2);
      _objc_release(puStack_1f8);
      puVar24 = puStack_210;
      puStack_220 = puVar22;
      puStack_218 = puVar23;
      puStack_1f8 = puVar2;
    }
    puStack_250 = puVar2;
    func_0x00010c071b60();
    if ((int)puVar2 == 0) {
LAB_106820fb4:
      func_0x00010c11a8a0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar24;
      func_0x00010c2827c0();
      puVar2 = puVar2 + 1;
    }
    else {
      puVar2 = puVar24;
      func_0x00010c11a520();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_retain(unaff_x28);
      if (puVar2 != unaff_x28) {
        puVar24 = puVar2;
        if (unaff_x28 == (undefined *)0x0) goto LAB_106820fa0;
        puVar23 = puVar2;
        func_0x00010c0720c0();
        _objc_release(unaff_x28);
        _objc_release(puVar2);
        puVar24 = puStack_210;
        if ((int)puVar23 != 0) goto LAB_106820e78;
LAB_106820fac:
        puVar24 = puStack_210;
        _objc_release(puVar2);
        goto LAB_106820fb4;
      }
      _objc_release(unaff_x28);
      _objc_release(puVar2);
LAB_106820e78:
      func_0x00010c11a540();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      _objc_retain(unaff_x25);
      if (puVar24 != unaff_x25) {
        puVar23 = puVar24;
        if (unaff_x25 != (undefined *)0x0) {
          func_0x00010c0720c0();
          _objc_release(unaff_x25);
          _objc_release(puVar24);
          if ((int)puVar23 == 0) goto LAB_106820fa0;
          goto LAB_106820ee8;
        }
LAB_106820f98:
        _objc_release(puVar23);
LAB_106820fa0:
        _objc_release(puVar24);
        goto LAB_106820fac;
      }
      _objc_release(unaff_x25);
      _objc_release(puVar24);
LAB_106820ee8:
      puVar22 = puStack_210;
      puVar23 = puStack_210;
      func_0x00010c11a580();
      _objc_retainAutoreleasedReturnValue();
      puVar15 = puStack_260;
      if (puVar23 != puStack_218) {
        func_0x00010c11a580();
        _objc_retainAutoreleasedReturnValue();
        puVar25 = puVar22;
        func_0x00010c071f40();
        puVar15 = puVar22;
        if ((int)puVar25 == 0) {
          _objc_release(puVar22);
          unaff_x26 = puStack_228;
          goto LAB_106820f98;
        }
      }
      puStack_260 = puVar15;
      unaff_x26 = puStack_228;
      puVar15 = puStack_210;
      puStack_230 = unaff_x25;
      func_0x00010c11a560();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain();
      puVar22 = puStack_220;
      _objc_retain(puStack_220);
      if (puVar15 == puVar22) {
        uVar17 = 0;
      }
      else if (puVar22 == (undefined *)0x0) {
        uVar17 = 1;
      }
      else {
        puVar22 = puVar15;
        func_0x00010c0720c0();
        uVar17 = (uint)puVar22 ^ 1;
        puVar22 = puStack_220;
      }
      _objc_release(puVar22);
      _objc_release(puVar15);
      _objc_release(puVar15);
      if (puVar23 != puStack_218) {
        _objc_release(puStack_260);
      }
      _objc_release(puVar23);
      _objc_release(puVar24);
      _objc_release(puVar2);
      unaff_x25 = puStack_230;
      puVar24 = puStack_210;
      if ((uVar17 & 1) != 0) goto LAB_106820fb4;
      func_0x00010c11a8a0();
      _objc_retainAutoreleasedReturnValue();
      puVar2 = puVar24;
      func_0x00010c2827c0();
    }
    _objc_release(puVar24);
    unaff_x22 = puStack_240;
    puVar24 = puStack_240;
    func_0x00010c08fa60();
    if (puVar24 == (undefined *)0x0) {
LAB_106821060:
      unaff_x21 = puStack_218;
      uVar17 = uStack_200._4_4_;
      uVar10 = uStack_254;
      bStack_26f = uStack_200._4_1_;
      bVar11 = (byte)uStack_200;
      if ((uStack_200 & 1) == 0) {
        if ((uStack_204 & 1) == 0) {
          if (((uVar17 | uStack_254) & 1) != 0) {
            func_0x00010c12d360(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
          }
          uVar10 = 0;
          bStack_26f = uStack_200._4_1_;
          bVar11 = (byte)uStack_200;
        }
        else {
          func_0x00010befa120(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
          puVar24 = puStack_210;
          puVar23 = puStack_210;
          func_0x00010c089fc0();
          _objc_retainAutoreleasedReturnValue();
          puVar22 = puVar23;
          func_0x00010c08fa60();
          _objc_release(puVar23);
          if (puVar22 != (undefined *)0x0) {
            func_0x00010c089fc0();
            _objc_retainAutoreleasedReturnValue();
            _objc_release(unaff_x22);
            unaff_x22 = puVar24;
          }
          unaff_x21 = puStack_218;
          unaff_x26 = puStack_228;
          uVar10 = 1;
          bStack_26f = (byte)(uStack_200 >> 0x20);
          bVar11 = (byte)uStack_200;
        }
      }
    }
    else {
      puVar24 = puStack_210;
      func_0x00010c089fc0();
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(unaff_x22);
      _objc_retain(puVar24);
      if (unaff_x22 == puVar24) {
        _objc_release(puVar24);
        _objc_release(unaff_x22);
        _objc_release(puVar24);
        goto LAB_106821060;
      }
      if (puVar24 == (undefined *)0x0) {
        _objc_release();
      }
      else {
        puVar23 = unaff_x22;
        func_0x00010c0720c0();
        _objc_release(puVar24);
        _objc_release(unaff_x22);
        _objc_release(puVar24);
        if (((ulong)puVar23 & 1) != 0) goto LAB_106821060;
      }
      func_0x00010c12d360(*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x48));
      unaff_x21 = puStack_218;
      uVar10 = 0;
      bStack_26f = uStack_200._4_1_;
      bVar11 = (byte)uStack_200;
    }
    unaff_x24 = puStack_1f8;
    unaff_x20 = puStack_220;
    param_3 = *(long *)(param_1 + 0x28);
    bStack_26f = bStack_26f & 1;
    bStack_270 = (bVar11 | (byte)uVar10) & 1;
    puStack_280 = puStack_1f8;
    param_4 = unaff_x22;
    param_5 = unaff_x28;
    param_6 = unaff_x25;
    param_7 = unaff_x21;
    param_8 = puStack_220;
    puStack_278 = puVar2;
    puStack_268 = unaff_x19;
    func_0x00010be08420(*(undefined8 *)(param_1 + 0x20));
    _objc_release(puStack_250);
    _objc_release(puStack_210);
    _objc_release(unaff_x19);
    _objc_release(unaff_x24);
    _objc_release(unaff_x20);
    _objc_release(unaff_x21);
    _objc_release(unaff_x25);
    _objc_release(unaff_x28);
    _objc_release(unaff_x23);
    _objc_release(unaff_x26);
    _objc_release(unaff_x22);
    puVar2 = puStack_238;
    _objc_release();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar23 = puStack_268;
  puVar24 = puStack_280;
  pcStack_288 = FUN_106821294;
  lStack_2f0 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_2e0 = unaff_x28;
  lStack_2d8 = param_1;
  puStack_2d0 = unaff_x26;
  puStack_2c8 = unaff_x25;
  puStack_2c0 = unaff_x24;
  puStack_2b8 = unaff_x23;
  puStack_2b0 = unaff_x22;
  puStack_2a8 = unaff_x21;
  puStack_2a0 = unaff_x20;
  puStack_298 = unaff_x19;
  puStack_290 = &stack0xfffffffffffffff0;
  _objc_retain(param_3);
  puStack_418 = param_4;
  _objc_retain(param_4);
  puStack_420 = param_5;
  _objc_retain(param_5);
  puStack_428 = param_6;
  _objc_retain(param_6);
  puStack_410 = param_7;
  _objc_retain(param_7);
  puStack_3f0 = param_8;
  _objc_retain(param_8);
  puStack_3f8 = puVar24;
  _objc_retain(puVar24);
  _objc_retain(puVar23);
  func_0x00010bf0ae40(*(undefined8 *)(puVar2 + 0x18));
  puStack_430 = puVar23;
  puStack_400 = PTR____NSArray0__struct_11034ab48;
  if (puVar23 != (undefined *)0x0) {
    puStack_400 = puVar23;
  }
  _objc_retain();
  puVar22 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_3a8 = 0;
  uStack_3b0 = 0;
  uStack_398 = 0;
  puStack_3a0 = (undefined8 *)0x0;
  uStack_388 = 0;
  uStack_390 = 0;
  uStack_378 = 0;
  uStack_380 = 0;
  puVar23 = *(undefined **)(puVar2 + 0x20);
  puStack_408 = puVar2;
  _objc_retain(puVar23);
  puVar15 = puVar23;
  func_0x00010bf52a60();
  if (puVar15 != (undefined *)0x0) {
    puVar24 = (undefined *)*puStack_3a0;
    do {
      puVar25 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_3a0 != puVar24) {
          _objc_enumerationMutation(puVar23);
        }
        lVar3 = *(long *)(lStack_3a8 + (long)puVar25 * 8);
        lVar18 = lVar3;
        func_0x00010bf25140();
        _objc_retainAutoreleasedReturnValue();
        lVar12 = lVar18;
        func_0x00010c0720c0();
        _objc_release(lVar18);
        if ((int)lVar12 != 0) {
          func_0x00010bf5f620();
          _objc_retainAutoreleasedReturnValue();
          if (lVar3 != 0) {
            lVar18 = lVar3;
            _objc_retainBlock(lVar3);
            func_0x00010befa120(puVar22);
            _objc_release(lVar18);
          }
          _objc_release(lVar3);
        }
        puVar25 = puVar25 + 1;
      } while (puVar15 != puVar25);
      puVar15 = puVar23;
      func_0x00010bf52a60();
    } while (puVar15 != (undefined *)0x0);
  }
  _objc_release(puVar23);
  puVar13 = puVar22;
  func_0x00010bf529e0();
  bVar1 = bStack_26f;
  bVar11 = bStack_270;
  puVar5 = puStack_408;
  puVar6 = puStack_410;
  puVar15 = puStack_418;
  puVar19 = puStack_420;
  puVar25 = puStack_428;
  if (puVar13 == (undefined *)0x0) goto LAB_106821924;
  puVar2 = (undefined *)(ulong)bStack_26f;
  puVar24 = (undefined *)(ulong)bStack_270;
  puStack_440 = puStack_278;
  puVar23 = *(undefined **)(puStack_408 + 0x28);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = *(undefined **)(puVar5 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_438 = puVar5;
  if (((puVar23 == (undefined *)0x0) ||
      (puVar5 = puVar23, func_0x00010c1058e0(), (uint)bVar11 != (uint)puVar5)) ||
     (puVar5 = puVar23, func_0x00010c28dc60(), (uint)bVar1 != (uint)puVar5)) {
LAB_1068217b0:
    puVar13 = PTR_PTR_1126ce638;
    _objc_alloc_init();
    puStack_448 = puVar23;
    func_0x00010c1b8820();
    func_0x00010c1e5760(puVar13);
    func_0x00010c1e5780(puVar13);
    func_0x00010c1e57c0(puVar13);
    func_0x00010c1e57a0(puVar13);
    func_0x00010c1e5940(puVar13);
    puVar23 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5960(puVar13);
    _objc_release(puVar23);
    func_0x00010c1df780(puVar13);
    func_0x00010c21cd00(puVar13);
    puVar23 = puStack_408;
    func_0x00010c1d0640(*(undefined8 *)(puStack_408 + 0x28));
    puVar5 = puStack_400;
    func_0x00010c1d0640(*(undefined8 *)(puVar23 + 0x30));
    puStack_3e8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_3e0 = 0xc2000000;
    pcStack_3d8 = FUN_1068219e4;
    puStack_3d0 = &UNK_110848ba8;
    _objc_retain(puVar22);
    puStack_3c8 = puVar22;
    puStack_3c0 = puVar13;
    _objc_retain(puVar5);
    puStack_3b8 = puVar5;
    _objc_retain(puVar13);
    func_0x000100162d98("APPSTORE",&puStack_3e8);
    _objc_release(puStack_3b8);
    _objc_release(puStack_3c0);
    _objc_release(puStack_3c8);
    puVar23 = puStack_448;
    _objc_release(puVar13);
  }
  else {
    puVar5 = puVar23;
    func_0x00010c089fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(puVar15);
    puStack_448 = puVar5;
    if (puVar5 != puVar15) {
      if (puVar15 == (undefined *)0x0) goto LAB_1068217a0;
      puVar13 = puVar5;
      func_0x00010c0720c0();
      puStack_450 = (undefined *)CONCAT44(puStack_450._4_4_,(int)puVar13);
      _objc_release(puVar15);
      _objc_release(puVar5);
      if ((int)puStack_450 != 0) goto LAB_106821570;
LAB_1068217a8:
      _objc_release(puStack_448);
      goto LAB_1068217b0;
    }
    _objc_release(puVar15);
    _objc_release(puVar5);
LAB_106821570:
    puVar13 = puVar23;
    func_0x00010c11a520();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(puVar19);
    if (puVar13 != puVar19) {
      puVar5 = puVar13;
      if (puVar19 != (undefined *)0x0) {
        func_0x00010c0720c0();
        puStack_458 = (undefined *)CONCAT44(puStack_458._4_4_,(int)puVar5);
        _objc_release(puVar19);
        puStack_450 = puVar13;
        _objc_release(puVar13);
        puVar5 = puStack_450;
        if ((int)puStack_458 == 0) goto LAB_1068217a0;
        goto LAB_1068215e8;
      }
LAB_10682179c:
      _objc_release(puVar13);
LAB_1068217a0:
      _objc_release(puVar5);
      goto LAB_1068217a8;
    }
    _objc_release(puVar19);
    puStack_450 = puVar13;
    _objc_release(puVar13);
LAB_1068215e8:
    puVar5 = puVar23;
    func_0x00010c11a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(puVar25);
    if (puVar5 != puVar25) {
      puVar13 = puVar5;
      if (puVar25 != (undefined *)0x0) {
        func_0x00010c0720c0();
        puStack_460 = (undefined *)CONCAT44(puStack_460._4_4_,(int)puVar13);
        _objc_release(puVar25);
        puStack_458 = puVar5;
        _objc_release(puVar5);
        puVar13 = puStack_458;
        puVar5 = puStack_450;
        if ((int)puStack_460 == 0) goto LAB_10682179c;
        goto LAB_106821660;
      }
LAB_106821790:
      _objc_release(puVar5);
      puVar5 = puStack_450;
      goto LAB_10682179c;
    }
    _objc_release(puVar25);
    puStack_458 = puVar5;
    _objc_release(puVar5);
LAB_106821660:
    puVar5 = puVar23;
    func_0x00010c11a580();
    _objc_retainAutoreleasedReturnValue();
    puStack_460 = puVar5;
    if (puVar5 == puVar6) {
LAB_1068216a0:
      puVar6 = puVar23;
      func_0x00010c11a560();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar6;
      func_0x00010bd86e5c();
      if ((int)puVar5 == 0) {
LAB_106821738:
        _objc_release(puVar6);
        puVar5 = puStack_460;
        puVar13 = puStack_458;
        puVar6 = puStack_410;
        if (puStack_460 == puStack_410) goto LAB_106821790;
        goto LAB_106821750;
      }
      puVar5 = puVar23;
      func_0x00010c11a880();
      _objc_retainAutoreleasedReturnValue();
      puVar13 = puVar5;
      func_0x00010c071b60();
      if ((int)puVar13 == 0) {
        _objc_release(puVar5);
        goto LAB_106821738;
      }
      puVar13 = puVar23;
      puStack_478 = puVar5;
      func_0x00010c11a8a0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar13;
      func_0x00010c2827c0();
      if ((puVar5 == puStack_440) && (puStack_438 != puStack_400)) {
        puVar5 = puStack_438;
        func_0x00010c071b60();
        uStack_464 = (uint)puVar5;
      }
      else {
        uStack_464 = (uint)(puVar5 == puStack_440);
      }
      _objc_release(puVar13);
      _objc_release(puStack_478);
      _objc_release(puVar6);
      puVar5 = puStack_448;
      puVar6 = puStack_410;
      if (puStack_460 != puStack_410) goto LAB_106821758;
    }
    else {
      puVar5 = puVar23;
      func_0x00010c11a580();
      _objc_retainAutoreleasedReturnValue();
      puStack_470 = puVar5;
      func_0x00010c071f40();
      if ((int)puVar5 != 0) goto LAB_1068216a0;
LAB_106821750:
      uStack_464 = 0;
LAB_106821758:
      puVar5 = puStack_448;
      _objc_release(puStack_470);
    }
    _objc_release(puStack_460);
    _objc_release(puStack_458);
    _objc_release(puStack_450);
    _objc_release(puVar5);
    if ((uStack_464 & 1) == 0) goto LAB_1068217b0;
  }
  _objc_release(puStack_438);
  _objc_release(puVar23);
LAB_106821924:
  puVar5 = puStack_3f0;
  _objc_release(puVar22);
  _objc_release(puStack_400);
  _objc_release(puStack_430);
  _objc_release(puStack_3f8);
  _objc_release(puVar5);
  _objc_release(puVar6);
  _objc_release(puVar25);
  _objc_release(puVar19);
  _objc_release(puVar15);
  lVar18 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_2f0) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_590;
  puStack_4b0 = puVar19;
  puStack_4a8 = puVar15;
  puStack_4a0 = puVar5;
  pcStack_488 = FUN_1068219e4;
  lStack_4c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_588 = 0;
  uStack_590 = 0;
  uStack_578 = 0;
  puStack_580 = (undefined8 *)0x0;
  uStack_568 = 0;
  uStack_570 = 0;
  uStack_558 = 0;
  uStack_560 = 0;
  puVar13 = *(undefined **)(lVar18 + 0x20);
  puStack_4c0 = puVar2;
  puStack_4b8 = puVar23;
  lStack_498 = param_3;
  ppuStack_490 = &puStack_290;
  _objc_retain(puVar13);
  puVar5 = puVar13;
  func_0x00010bf52a60();
  if (puVar5 != (undefined *)0x0) {
    puVar19 = (undefined *)*puStack_580;
    do {
      puVar23 = (undefined *)0x0;
      do {
        if ((undefined *)*puStack_580 != puVar19) {
          _objc_enumerationMutation(puVar13);
        }
        lVar12 = *(long *)(lStack_588 + (long)puVar23 * 8);
        (**(code **)(lVar12 + 0x10))
                  (lVar12,*(undefined8 *)(lVar18 + 0x28),*(undefined8 *)(lVar18 + 0x30));
        puVar23 = puVar23 + 1;
      } while (puVar5 != puVar23);
      puVar5 = puVar13;
      puVar8 = &uStack_590;
      func_0x00010bf52a60();
      puVar15 = (undefined *)0x0;
    } while (puVar5 != (undefined *)0x0);
  }
  puVar5 = puVar13;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_4c8) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_6c0;
  puStack_5e8 = puVar25;
  pcStack_598 = FUN_106821ae0;
  lStack_5f8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_5f0 = puVar22;
  puStack_5e0 = puVar24;
  puStack_5d8 = puVar6;
  puStack_5d0 = puVar2;
  puStack_5c8 = puVar23;
  puStack_5c0 = puVar19;
  puStack_5b8 = puVar15;
  puStack_5b0 = puVar13;
  lStack_5a8 = lVar18;
  pppuStack_5a0 = &ppuStack_490;
  _objc_retain(puVar8);
  func_0x00010bf0ae40(*(undefined8 *)(puVar5 + 0x18));
  lVar12 = *(long *)(puVar5 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = lVar12;
  func_0x00010c1168c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar12);
  uStack_698 = 0;
  uStack_6a0 = 0;
  uStack_688 = 0;
  uStack_690 = 0;
  lStack_6b8 = 0;
  uStack_6c0 = 0;
  uStack_6a8 = 0;
  plStack_6b0 = (long *)0x0;
  _objc_retain(lVar18);
  lVar12 = lVar18;
  func_0x00010bf52a60();
  if (lVar12 != 0) {
    lVar3 = *plStack_6b0;
    do {
      lVar26 = 0;
      do {
        if (*plStack_6b0 != lVar3) {
          _objc_enumerationMutation(lVar18);
        }
        puVar2 = PTR_PTR_1126b0f68;
        uVar21 = *(ulong *)(lStack_6b8 + lVar26 * 8);
        _objc_retain(uVar21);
        _objc_opt_class(puVar2);
        uVar7 = uVar21;
        _objc_opt_isKindOfClass(uVar21,puVar2);
        uVar20 = uVar21;
        if ((uVar7 & 1) == 0) {
          uVar20 = 0;
        }
        _objc_retain(uVar20);
        _objc_release(uVar21);
        uVar7 = uVar20;
        func_0x00010bf24ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar21 = uVar7;
        puVar9 = puVar8;
        func_0x00010c0720c0();
        _objc_release(uVar7);
        if ((uVar21 & 1) != 0) goto LAB_106821c4c;
        _objc_release(uVar20);
        lVar26 = lVar26 + 1;
      } while (lVar12 != lVar26);
      lVar12 = lVar18;
      puVar9 = &uStack_6c0;
      func_0x00010bf52a60();
    } while (lVar12 != 0);
  }
  uVar20 = 0;
LAB_106821c4c:
  _objc_release(lVar18);
  _objc_release(lVar18);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_5f8) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar20);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar9);
  puStack_7a0 = &uStack_720;
  uStack_720 = 0;
  uStack_710 = 0x2020000000;
  uStack_708 = 0;
  puStack_748 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_740 = 0xc2000000;
  pcStack_738 = FUN_106821e58;
  puStack_730 = &UNK_110847658;
  puStack_770 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_768 = 0xc2000000;
  pcStack_760 = FUN_106821e6c;
  puStack_758 = &UNK_110942058;
  puStack_798 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_790 = 0xc2000000;
  pcStack_788 = FUN_106821ec8;
  puStack_780 = &UNK_110942088;
  puStack_7c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_7b8 = 0xc2000000;
  uStack_7b0 = 0x106821edc;
  puStack_7a8 = &UNK_1108610e8;
  puStack_778 = puStack_7a0;
  puStack_750 = puStack_7a0;
  puStack_728 = puStack_7a0;
  puStack_718 = puStack_7a0;
  func_0x00010c0be260(puVar9);
  if ((*(byte *)(puStack_718 + 3) & 1) != 0) {
    _objc_initWeak(auStack_7c8,puVar8);
    uVar14 = *(undefined8 *)((long)puVar8 + 0x18);
    _objc_copyWeak(auStack_7d0,auStack_7c8);
    func_0x00010c0f7fc0(uVar14);
    _objc_destroyWeak(auStack_7d0);
    _objc_destroyWeak(auStack_7c8);
  }
  __Block_object_dispose(&uStack_720,8);
  _objc_release(puVar9);
  return;
}



/* Entry: 106821294; end: 1068219e3; -[SCLivePublicStoryStateObserver _emitStateForBusinessProfileIdLocked:lastSnapId:publicLatestComponentId:publicLatestServerId:publicLatestTimestamp:publicLatestThumbnailURL:publicSnapComponentIds:publicSnapshotVersion:postingInProgress:uploadFailed:pendingPublicPlaybackInfos:] */

void FUN_106821294(ulong param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6,long param_7,undefined8 param_8,ulong param_9,long param_10,
                  uint param_11,undefined4 param_12,undefined *param_13)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined1 auStack_550 [8];
  undefined1 auStack_548 [8];
  undefined *puStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined *puStack_528;
  undefined8 *puStack_520;
  undefined *puStack_518;
  undefined8 uStack_510;
  code *pcStack_508;
  undefined *puStack_500;
  undefined8 *puStack_4f8;
  undefined *puStack_4f0;
  undefined8 uStack_4e8;
  code *pcStack_4e0;
  undefined *puStack_4d8;
  undefined8 *puStack_4d0;
  undefined *puStack_4c8;
  undefined8 uStack_4c0;
  code *pcStack_4b8;
  undefined *puStack_4b0;
  undefined8 *puStack_4a8;
  undefined8 uStack_4a0;
  undefined8 *puStack_498;
  undefined8 uStack_490;
  undefined1 uStack_488;
  undefined8 uStack_440;
  long lStack_438;
  long *plStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  long lStack_378;
  undefined *puStack_370;
  long lStack_368;
  ulong uStack_360;
  long lStack_358;
  ulong uStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  undefined1 **ppuStack_320;
  code *pcStack_318;
  undefined8 uStack_310;
  long lStack_308;
  long *plStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  long lStack_248;
  ulong uStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  undefined8 uStack_220;
  long lStack_218;
  undefined1 *puStack_210;
  code *pcStack_208;
  long lStack_1f8;
  long lStack_1f0;
  uint uStack_1e4;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  undefined *puStack_1b8;
  undefined *puStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  ulong uStack_188;
  undefined *puStack_180;
  ulong uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined8 uStack_130;
  long lStack_128;
  ulong *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lStack_198 = param_4;
  _objc_retain(param_4);
  lStack_1a0 = param_5;
  _objc_retain(param_5);
  lStack_1a8 = param_6;
  _objc_retain(param_6);
  lStack_190 = param_7;
  _objc_retain(param_7);
  uStack_170 = param_8;
  _objc_retain(param_8);
  uStack_178 = param_9;
  _objc_retain(param_9);
  _objc_retain(param_13);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x18));
  puStack_1b0 = param_13;
  puStack_180 = PTR____NSArray0__struct_11034ab48;
  if (param_13 != (undefined *)0x0) {
    puStack_180 = param_13;
  }
  _objc_retain();
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  puStack_120 = (ulong *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar15 = *(long *)(param_1 + 0x20);
  uStack_188 = param_1;
  _objc_retain(lVar15);
  lVar6 = lVar15;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    param_9 = *puStack_120;
    do {
      lVar17 = 0;
      do {
        if (*puStack_120 != param_9) {
          _objc_enumerationMutation(lVar15);
        }
        lVar12 = *(long *)(lStack_128 + lVar17 * 8);
        lVar13 = lVar12;
        func_0x00010bf25140();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = lVar13;
        func_0x00010c0720c0();
        _objc_release(lVar13);
        if ((int)lVar2 != 0) {
          func_0x00010bf5f620();
          _objc_retainAutoreleasedReturnValue();
          if (lVar12 != 0) {
            lVar13 = lVar12;
            _objc_retainBlock(lVar12);
            func_0x00010befa120(puVar1);
            _objc_release(lVar13);
          }
          _objc_release(lVar12);
        }
        lVar17 = lVar17 + 1;
      } while (lVar6 != lVar17);
      lVar6 = lVar15;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  _objc_release(lVar15);
  puVar3 = puVar1;
  func_0x00010bf529e0();
  uVar14 = uStack_188;
  lVar2 = lStack_190;
  lVar6 = lStack_198;
  lVar13 = lStack_1a0;
  lVar17 = lStack_1a8;
  if (puVar3 == (undefined *)0x0) goto LAB_106821924;
  param_1 = (ulong)param_11._1_1_;
  param_9 = (ulong)(byte)param_11;
  lStack_1c0 = param_10;
  lVar15 = *(long *)(uStack_188 + 0x28);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = *(undefined **)(uVar14 + 0x30);
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  puStack_1b8 = puVar3;
  if (((lVar15 == 0) || (lVar12 = lVar15, func_0x00010c1058e0(), (param_11 & 0xff) != (uint)lVar12))
     || (lVar12 = lVar15, func_0x00010c28dc60(), (uint)param_11._1_1_ != (uint)lVar12)) {
LAB_1068217b0:
    puVar5 = PTR_PTR_1126ce638;
    _objc_alloc_init();
    lStack_1c8 = lVar15;
    func_0x00010c1b8820();
    func_0x00010c1e5760(puVar5);
    func_0x00010c1e5780(puVar5);
    func_0x00010c1e57c0(puVar5);
    func_0x00010c1e57a0(puVar5);
    func_0x00010c1e5940(puVar5);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df840(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1e5960(puVar5);
    _objc_release(puVar3);
    func_0x00010c1df780(puVar5);
    func_0x00010c21cd00(puVar5);
    uVar14 = uStack_188;
    func_0x00010c1d0640(*(undefined8 *)(uStack_188 + 0x28));
    puVar3 = puStack_180;
    func_0x00010c1d0640(*(undefined8 *)(uVar14 + 0x30));
    puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_160 = 0xc2000000;
    pcStack_158 = FUN_1068219e4;
    puStack_150 = &UNK_110848ba8;
    _objc_retain(puVar1);
    puStack_148 = puVar1;
    puStack_140 = puVar5;
    _objc_retain(puVar3);
    puStack_138 = puVar3;
    _objc_retain(puVar5);
    func_0x000100162d98("APPSTORE",&puStack_168);
    _objc_release(puStack_138);
    _objc_release(puStack_140);
    _objc_release(puStack_148);
    lVar15 = lStack_1c8;
    _objc_release(puVar5);
  }
  else {
    lVar12 = lVar15;
    func_0x00010c089fc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(lVar6);
    lStack_1c8 = lVar12;
    if (lVar12 != lVar6) {
      if (lVar6 == 0) goto LAB_1068217a0;
      lVar4 = lVar12;
      func_0x00010c0720c0();
      lStack_1d0 = CONCAT44(lStack_1d0._4_4_,(int)lVar4);
      _objc_release(lVar6);
      _objc_release(lVar12);
      if ((int)lStack_1d0 != 0) goto LAB_106821570;
LAB_1068217a8:
      _objc_release(lStack_1c8);
      goto LAB_1068217b0;
    }
    _objc_release(lVar6);
    _objc_release(lVar12);
LAB_106821570:
    lVar4 = lVar15;
    func_0x00010c11a520();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(lVar13);
    if (lVar4 != lVar13) {
      lVar12 = lVar4;
      if (lVar13 != 0) {
        func_0x00010c0720c0();
        lStack_1d8 = CONCAT44(lStack_1d8._4_4_,(int)lVar12);
        _objc_release(lVar13);
        lStack_1d0 = lVar4;
        _objc_release(lVar4);
        lVar12 = lStack_1d0;
        if ((int)lStack_1d8 == 0) goto LAB_1068217a0;
        goto LAB_1068215e8;
      }
LAB_10682179c:
      _objc_release(lVar4);
LAB_1068217a0:
      _objc_release(lVar12);
      goto LAB_1068217a8;
    }
    _objc_release(lVar13);
    lStack_1d0 = lVar4;
    _objc_release(lVar4);
LAB_1068215e8:
    lVar12 = lVar15;
    func_0x00010c11a540();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain();
    _objc_retain(lVar17);
    if (lVar12 != lVar17) {
      lVar4 = lVar12;
      if (lVar17 != 0) {
        func_0x00010c0720c0();
        lStack_1e0 = CONCAT44(lStack_1e0._4_4_,(int)lVar4);
        _objc_release(lVar17);
        lStack_1d8 = lVar12;
        _objc_release(lVar12);
        lVar4 = lStack_1d8;
        lVar12 = lStack_1d0;
        if ((int)lStack_1e0 == 0) goto LAB_10682179c;
        goto LAB_106821660;
      }
LAB_106821790:
      _objc_release(lVar12);
      lVar12 = lStack_1d0;
      goto LAB_10682179c;
    }
    _objc_release(lVar17);
    lStack_1d8 = lVar12;
    _objc_release(lVar12);
LAB_106821660:
    lVar12 = lVar15;
    func_0x00010c11a580();
    _objc_retainAutoreleasedReturnValue();
    lStack_1e0 = lVar12;
    if (lVar12 == lVar2) {
LAB_1068216a0:
      lVar2 = lVar15;
      func_0x00010c11a560();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar2;
      func_0x00010bd86e5c();
      if ((int)lVar12 == 0) {
LAB_106821738:
        _objc_release(lVar2);
        lVar12 = lStack_1e0;
        lVar4 = lStack_1d8;
        lVar2 = lStack_190;
        if (lStack_1e0 == lStack_190) goto LAB_106821790;
        goto LAB_106821750;
      }
      lVar12 = lVar15;
      func_0x00010c11a880();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar12;
      func_0x00010c071b60();
      if ((int)lVar4 == 0) {
        _objc_release(lVar12);
        goto LAB_106821738;
      }
      lVar4 = lVar15;
      lStack_1f8 = lVar12;
      func_0x00010c11a8a0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar4;
      func_0x00010c2827c0();
      if ((lVar12 == lStack_1c0) && (puStack_1b8 != puStack_180)) {
        puVar3 = puStack_1b8;
        func_0x00010c071b60();
        uStack_1e4 = (uint)puVar3;
      }
      else {
        uStack_1e4 = (uint)(lVar12 == lStack_1c0);
      }
      _objc_release(lVar4);
      _objc_release(lStack_1f8);
      _objc_release(lVar2);
      lVar12 = lStack_1c8;
      lVar2 = lStack_190;
      if (lStack_1e0 != lStack_190) goto LAB_106821758;
    }
    else {
      lVar12 = lVar15;
      func_0x00010c11a580();
      _objc_retainAutoreleasedReturnValue();
      lStack_1f0 = lVar12;
      func_0x00010c071f40();
      if ((int)lVar12 != 0) goto LAB_1068216a0;
LAB_106821750:
      uStack_1e4 = 0;
LAB_106821758:
      lVar12 = lStack_1c8;
      _objc_release(lStack_1f0);
    }
    _objc_release(lStack_1e0);
    _objc_release(lStack_1d8);
    _objc_release(lStack_1d0);
    _objc_release(lVar12);
    if ((uStack_1e4 & 1) == 0) goto LAB_1068217b0;
  }
  _objc_release(puStack_1b8);
  _objc_release(lVar15);
LAB_106821924:
  uVar11 = uStack_170;
  _objc_release(puVar1);
  _objc_release(puStack_180);
  _objc_release(puStack_1b0);
  _objc_release(uStack_178);
  _objc_release(uVar11);
  _objc_release(lVar2);
  _objc_release(lVar17);
  _objc_release(lVar13);
  _objc_release(lVar6);
  lVar12 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  puVar8 = &uStack_310;
  lStack_230 = lVar13;
  lStack_228 = lVar6;
  uStack_220 = uVar11;
  pcStack_208 = FUN_1068219e4;
  lStack_248 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_308 = 0;
  uStack_310 = 0;
  uStack_2f8 = 0;
  plStack_300 = (long *)0x0;
  uStack_2e8 = 0;
  uStack_2f0 = 0;
  uStack_2d8 = 0;
  uStack_2e0 = 0;
  lVar10 = *(long *)(lVar12 + 0x20);
  uStack_240 = param_1;
  lStack_238 = lVar15;
  lStack_218 = param_3;
  puStack_210 = &stack0xfffffffffffffff0;
  _objc_retain(lVar10);
  lVar4 = lVar10;
  func_0x00010bf52a60();
  if (lVar4 != 0) {
    lVar13 = *plStack_300;
    do {
      lVar15 = 0;
      do {
        if (*plStack_300 != lVar13) {
          _objc_enumerationMutation(lVar10);
        }
        lVar6 = *(long *)(lStack_308 + lVar15 * 8);
        (**(code **)(lVar6 + 0x10))
                  (lVar6,*(undefined8 *)(lVar12 + 0x28),*(undefined8 *)(lVar12 + 0x30));
        lVar15 = lVar15 + 1;
      } while (lVar4 != lVar15);
      lVar4 = lVar10;
      puVar8 = &uStack_310;
      func_0x00010bf52a60();
      lVar6 = 0;
    } while (lVar4 != 0);
  }
  lVar4 = lVar10;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_248) {
    return;
  }
  ___stack_chk_fail();
  puVar9 = &uStack_440;
  lStack_368 = lVar17;
  pcStack_318 = FUN_106821ae0;
  lStack_378 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_370 = puVar1;
  uStack_360 = param_9;
  lStack_358 = lVar2;
  uStack_350 = param_1;
  lStack_348 = lVar15;
  lStack_340 = lVar13;
  lStack_338 = lVar6;
  lStack_330 = lVar10;
  lStack_328 = lVar12;
  ppuStack_320 = &puStack_210;
  _objc_retain(puVar8);
  func_0x00010bf0ae40(*(undefined8 *)(lVar4 + 0x18));
  lVar6 = *(long *)(lVar4 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = lVar6;
  func_0x00010c1168c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar6);
  uStack_418 = 0;
  uStack_420 = 0;
  uStack_408 = 0;
  uStack_410 = 0;
  lStack_438 = 0;
  uStack_440 = 0;
  uStack_428 = 0;
  plStack_430 = (long *)0x0;
  _objc_retain(lVar15);
  lVar6 = lVar15;
  func_0x00010bf52a60();
  if (lVar6 != 0) {
    lVar17 = *plStack_430;
    do {
      lVar13 = 0;
      do {
        if (*plStack_430 != lVar17) {
          _objc_enumerationMutation(lVar15);
        }
        puVar1 = PTR_PTR_1126b0f68;
        uVar16 = *(ulong *)(lStack_438 + lVar13 * 8);
        _objc_retain(uVar16);
        _objc_opt_class(puVar1);
        uVar7 = uVar16;
        _objc_opt_isKindOfClass(uVar16,puVar1);
        uVar14 = uVar16;
        if ((uVar7 & 1) == 0) {
          uVar14 = 0;
        }
        _objc_retain(uVar14);
        _objc_release(uVar16);
        uVar7 = uVar14;
        func_0x00010bf24ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar16 = uVar7;
        puVar9 = puVar8;
        func_0x00010c0720c0();
        _objc_release(uVar7);
        if ((uVar16 & 1) != 0) goto LAB_106821c4c;
        _objc_release(uVar14);
        lVar13 = lVar13 + 1;
      } while (lVar6 != lVar13);
      lVar6 = lVar15;
      puVar9 = &uStack_440;
      func_0x00010bf52a60();
    } while (lVar6 != 0);
  }
  uVar14 = 0;
LAB_106821c4c:
  _objc_release(lVar15);
  _objc_release(lVar15);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_378) {
    ___stack_chk_fail();
    _objc_retain(puVar9);
    puStack_520 = &uStack_4a0;
    uStack_4a0 = 0;
    uStack_490 = 0x2020000000;
    uStack_488 = 0;
    puStack_4c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_4c0 = 0xc2000000;
    pcStack_4b8 = FUN_106821e58;
    puStack_4b0 = &UNK_110847658;
    puStack_4f0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_4e8 = 0xc2000000;
    pcStack_4e0 = FUN_106821e6c;
    puStack_4d8 = &UNK_110942058;
    puStack_518 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_510 = 0xc2000000;
    pcStack_508 = FUN_106821ec8;
    puStack_500 = &UNK_110942088;
    puStack_540 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_538 = 0xc2000000;
    uStack_530 = 0x106821edc;
    puStack_528 = &UNK_1108610e8;
    puStack_4f8 = puStack_520;
    puStack_4d0 = puStack_520;
    puStack_4a8 = puStack_520;
    puStack_498 = puStack_520;
    func_0x00010c0be260(puVar9);
    if ((*(byte *)(puStack_498 + 3) & 1) != 0) {
      _objc_initWeak(auStack_548,puVar8);
      uVar11 = *(undefined8 *)((long)puVar8 + 0x18);
      _objc_copyWeak(auStack_550,auStack_548);
      func_0x00010c0f7fc0(uVar11);
      _objc_destroyWeak(auStack_550);
      _objc_destroyWeak(auStack_548);
    }
    __Block_object_dispose(&uStack_4a0,8);
    _objc_release(puVar9);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar14);
  return;
}



/* Entry: 1068219e4; end: 106821adf;  */

void FUN_1068219e4(long param_1)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_350 [8];
  undefined1 auStack_348 [8];
  undefined *puStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined *puStack_328;
  undefined8 *puStack_320;
  undefined *puStack_318;
  undefined8 uStack_310;
  code *pcStack_308;
  undefined *puStack_300;
  undefined8 *puStack_2f8;
  undefined *puStack_2f0;
  undefined8 uStack_2e8;
  code *pcStack_2e0;
  undefined *puStack_2d8;
  undefined8 *puStack_2d0;
  undefined *puStack_2c8;
  undefined8 uStack_2c0;
  code *pcStack_2b8;
  undefined *puStack_2b0;
  undefined8 *puStack_2a8;
  undefined8 uStack_2a0;
  undefined8 *puStack_298;
  undefined8 uStack_290;
  undefined1 uStack_288;
  undefined8 uStack_240;
  long lStack_238;
  long *plStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  long lStack_178;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  long lStack_48;
  
  puVar5 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  lVar7 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar7);
  lVar1 = lVar7;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_100;
    do {
      lVar11 = 0;
      do {
        if (*plStack_100 != lVar9) {
          _objc_enumerationMutation(lVar7);
        }
        lVar2 = *(long *)(lStack_108 + lVar11 * 8);
        (**(code **)(lVar2 + 0x10))
                  (lVar2,*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
        lVar11 = lVar11 + 1;
      } while (lVar1 != lVar11);
      lVar1 = lVar7;
      puVar5 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  puVar6 = &uStack_240;
  lStack_178 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(puVar5);
  func_0x00010bf0ae40(*(undefined8 *)(lVar7 + 0x18));
  lVar7 = *(long *)(lVar7 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = lVar7;
  func_0x00010c1168c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  uStack_218 = 0;
  uStack_220 = 0;
  uStack_208 = 0;
  uStack_210 = 0;
  lStack_238 = 0;
  uStack_240 = 0;
  uStack_228 = 0;
  plStack_230 = (long *)0x0;
  _objc_retain(lVar1);
  lVar7 = lVar1;
  func_0x00010bf52a60();
  if (lVar7 != 0) {
    lVar9 = *plStack_230;
    do {
      lVar11 = 0;
      do {
        if (*plStack_230 != lVar9) {
          _objc_enumerationMutation(lVar1);
        }
        puVar3 = PTR_PTR_1126b0f68;
        uVar12 = *(ulong *)(lStack_238 + lVar11 * 8);
        _objc_retain(uVar12);
        _objc_opt_class(puVar3);
        uVar4 = uVar12;
        _objc_opt_isKindOfClass(uVar12,puVar3);
        uVar10 = uVar12;
        if ((uVar4 & 1) == 0) {
          uVar10 = 0;
        }
        _objc_retain(uVar10);
        _objc_release(uVar12);
        uVar4 = uVar10;
        func_0x00010bf24ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar12 = uVar4;
        puVar6 = puVar5;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        if ((uVar12 & 1) != 0) goto LAB_106821c4c;
        _objc_release(uVar10);
        lVar11 = lVar11 + 1;
      } while (lVar7 != lVar11);
      lVar7 = lVar1;
      puVar6 = &uStack_240;
      func_0x00010bf52a60();
    } while (lVar7 != 0);
  }
  uVar10 = 0;
LAB_106821c4c:
  _objc_release(lVar1);
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_178) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar10);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar6);
  puStack_320 = &uStack_2a0;
  uStack_2a0 = 0;
  uStack_290 = 0x2020000000;
  uStack_288 = 0;
  puStack_2c8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2c0 = 0xc2000000;
  pcStack_2b8 = FUN_106821e58;
  puStack_2b0 = &UNK_110847658;
  puStack_2f0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_2e8 = 0xc2000000;
  pcStack_2e0 = FUN_106821e6c;
  puStack_2d8 = &UNK_110942058;
  puStack_318 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_310 = 0xc2000000;
  pcStack_308 = FUN_106821ec8;
  puStack_300 = &UNK_110942088;
  puStack_340 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_338 = 0xc2000000;
  uStack_330 = 0x106821edc;
  puStack_328 = &UNK_1108610e8;
  puStack_2f8 = puStack_320;
  puStack_2d0 = puStack_320;
  puStack_2a8 = puStack_320;
  puStack_298 = puStack_320;
  func_0x00010c0be260(puVar6);
  if ((*(byte *)(puStack_298 + 3) & 1) != 0) {
    _objc_initWeak(auStack_348,puVar5);
    uVar8 = *(undefined8 *)((long)puVar5 + 0x18);
    _objc_copyWeak(auStack_350,auStack_348);
    func_0x00010c0f7fc0(uVar8);
    _objc_destroyWeak(auStack_350);
    _objc_destroyWeak(auStack_348);
  }
  __Block_object_dispose(&uStack_2a0,8);
  _objc_release(puVar6);
  return;
}



/* Entry: 106821ae0; end: 106821ca3; -[SCLivePublicStoryStateObserver _findProfileHandlerForBusinessProfileId:] */

void FUN_106821ae0(long param_1,undefined8 param_2,undefined1 *param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_240 [8];
  undefined1 auStack_238 [8];
  undefined *puStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined *puStack_218;
  undefined8 *puStack_210;
  undefined *puStack_208;
  undefined8 uStack_200;
  code *pcStack_1f8;
  undefined *puStack_1f0;
  undefined8 *puStack_1e8;
  undefined *puStack_1e0;
  undefined8 uStack_1d8;
  code *pcStack_1d0;
  undefined *puStack_1c8;
  undefined8 *puStack_1c0;
  undefined *puStack_1b8;
  undefined8 uStack_1b0;
  code *pcStack_1a8;
  undefined *puStack_1a0;
  undefined8 *puStack_198;
  undefined8 uStack_190;
  undefined8 *puStack_188;
  undefined8 uStack_180;
  undefined1 uStack_178;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_68;
  
  puVar5 = &uStack_130;
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  func_0x00010bf0ae40(*(undefined8 *)(param_1 + 0x18));
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c1168c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(lVar2);
  lVar1 = lVar2;
  func_0x00010bf52a60();
  if (lVar1 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar10 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(lVar2);
        }
        puVar3 = PTR_PTR_1126b0f68;
        uVar8 = *(ulong *)(lStack_128 + lVar10 * 8);
        _objc_retain(uVar8);
        _objc_opt_class(puVar3);
        uVar4 = uVar8;
        _objc_opt_isKindOfClass(uVar8,puVar3);
        uVar7 = uVar8;
        if ((uVar4 & 1) == 0) {
          uVar7 = 0;
        }
        _objc_retain(uVar7);
        _objc_release(uVar8);
        uVar4 = uVar7;
        func_0x00010bf24ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar4;
        puVar5 = (undefined8 *)param_3;
        func_0x00010c0720c0();
        _objc_release(uVar4);
        if ((uVar8 & 1) != 0) goto LAB_106821c4c;
        _objc_release(uVar7);
        lVar10 = lVar10 + 1;
      } while (lVar1 != lVar10);
      lVar1 = lVar2;
      puVar5 = &uStack_130;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
  }
  uVar7 = 0;
LAB_106821c4c:
  _objc_release(lVar2);
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar7);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar5);
  puStack_210 = &uStack_190;
  uStack_190 = 0;
  uStack_180 = 0x2020000000;
  uStack_178 = 0;
  puStack_1b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1b0 = 0xc2000000;
  pcStack_1a8 = FUN_106821e58;
  puStack_1a0 = &UNK_110847658;
  puStack_1e0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_1d8 = 0xc2000000;
  pcStack_1d0 = FUN_106821e6c;
  puStack_1c8 = &UNK_110942058;
  puStack_208 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_200 = 0xc2000000;
  pcStack_1f8 = FUN_106821ec8;
  puStack_1f0 = &UNK_110942088;
  puStack_230 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_228 = 0xc2000000;
  uStack_220 = 0x106821edc;
  puStack_218 = &UNK_1108610e8;
  puStack_1e8 = puStack_210;
  puStack_1c0 = puStack_210;
  puStack_198 = puStack_210;
  puStack_188 = puStack_210;
  func_0x00010c0be260(puVar5);
  if ((*(byte *)(puStack_188 + 3) & 1) != 0) {
    _objc_initWeak(auStack_238,param_3);
    uVar6 = *(undefined8 *)(param_3 + 0x18);
    _objc_copyWeak(auStack_240,auStack_238);
    func_0x00010c0f7fc0(uVar6);
    _objc_destroyWeak(auStack_240);
    _objc_destroyWeak(auStack_238);
  }
  __Block_object_dispose(&uStack_190,8);
  _objc_release(puVar5);
  return;
}



/* Entry: 106821ca4; end: 106821e57; -[SCLivePublicStoryStateObserver didUpdateMyStoriesDataRequest:] */

void FUN_106821ca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_110 [8];
  undefined1 auStack_108 [8];
  undefined *puStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined *puStack_e8;
  undefined8 *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined8 *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined8 *puStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  _objc_retain(param_3);
  puStack_e0 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x2020000000;
  uStack_48 = 0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106821e58;
  puStack_70 = &UNK_110847658;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  pcStack_a0 = FUN_106821e6c;
  puStack_98 = &UNK_110942058;
  puStack_d8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_d0 = 0xc2000000;
  pcStack_c8 = FUN_106821ec8;
  puStack_c0 = &UNK_110942088;
  puStack_100 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_f8 = 0xc2000000;
  uStack_f0 = 0x106821edc;
  puStack_e8 = &UNK_1108610e8;
  puStack_b8 = puStack_e0;
  puStack_90 = puStack_e0;
  puStack_68 = puStack_e0;
  puStack_58 = puStack_e0;
  func_0x00010c0be260(param_3);
  if ((*(byte *)(puStack_58 + 3) & 1) != 0) {
    _objc_initWeak(auStack_108,param_1);
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    _objc_copyWeak(auStack_110,auStack_108);
    func_0x00010c0f7fc0(uVar1);
    _objc_destroyWeak(auStack_110);
    _objc_destroyWeak(auStack_108);
  }
  __Block_object_dispose(&uStack_60,8);
  _objc_release(param_3);
  return;
}



/* Entry: 106821e58; end: 106821e6b;  */

void FUN_106821e58(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106821e6c; end: 106821ec7;  */

void FUN_106821e6c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  
  func_0x00010bf25140();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_4;
  func_0x00010c08fa60();
  _objc_release(param_4);
  if (lVar1 != 0) {
    *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  }
  return;
}



/* Entry: 106821ec8; end: 106821eef;  */

void FUN_106821ec8(long param_1)

{
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
  return;
}



/* Entry: 106821ef0; end: 10682210f;  */

void FUN_106821ef0(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  
  lVar7 = *(long *)PTR____stack_chk_guard_11034bdc0;
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x50) & 1) == 0)) {
    puVar2 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0();
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(param_1 + 0x20);
    _objc_retain(lVar8);
    lVar3 = lVar8;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar3 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar8);
        }
        lVar9 = *(long *)(lVar11 * 8);
        lVar4 = lVar9;
        func_0x00010bf25140();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010c08fa60();
        _objc_release(lVar4);
        if (lVar5 != 0) {
          func_0x00010bf25140(lVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar2);
          _objc_release(lVar9);
        }
        lVar11 = lVar11 + 1;
      } while (lVar3 != lVar11);
      lVar3 = lVar8;
      func_0x00010bf52a60();
    }
    _objc_release(lVar8);
    _objc_retain(puVar2);
    puVar6 = puVar2;
    func_0x00010bf52a60();
    lVar3 = lRam0000000000000000;
    while (puVar6 != (undefined *)0x0) {
      puVar10 = (undefined *)0x0;
      do {
        if (lRam0000000000000000 != lVar3) {
          _objc_enumerationMutation(puVar2);
        }
        func_0x00010be87260(param_1);
        puVar10 = puVar10 + 1;
      } while (puVar6 != puVar10);
      puVar6 = puVar2;
      func_0x00010bf52a60();
    }
    _objc_release(puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar7) {
    return;
  }
  ___stack_chk_fail();
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 106822110; end: 106822193; -[SCLivePublicStoryStateObserver .cxx_destruct] */

void FUN_106822110(long param_1)

{
  _objc_storeStrong(param_1 + 0x48,0);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
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



/* Entry: 106822194; end: 10682225f; -[SCLivePublicStorySubscription initWithBusinessProfileId:onChange:owner:] */

undefined1 *
FUN_106822194(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126f3628;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    uVar2 = param_3;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
    uVar2 = param_4;
    func_0x00010bf51e00();
    uVar3 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar2;
    _objc_release(uVar3);
    _objc_storeWeak((undefined1 *)((long)puVar1 + 0x10),param_5);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106822260; end: 1068222cb; -[SCLivePublicStorySubscription currentOnChange] */

void FUN_106822260(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar2 = lVar1;
    func_0x00010c11dfc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf0ae40();
    _objc_release(lVar2);
  }
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retainBlock(uVar3);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1068222cc; end: 106822387; -[SCLivePublicStorySubscription cancel] */

void FUN_1068222cc(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1 + 0x10;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 8);
    *(undefined8 *)(param_1 + 8) = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x00010c11dfc0(lVar1);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106822388;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    _objc_retain(lVar1);
    lStack_38 = lVar1;
    func_0x00010c0f7fc0(lVar2,param_2,&puStack_60);
    _objc_release(lVar2);
    lVar2 = lStack_38;
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  return;
}



/* Entry: 106822388; end: 1068223b7;  */

void FUN_106822388(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 8);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 8) = 0;
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010c12e770. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_removeSubscription__1126293f8,
             *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1068223b8; end: 1068223bf; -[SCLivePublicStorySubscription businessProfileId] */

undefined8 FUN_1068223b8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 1068223c0; end: 1068223f7; -[SCLivePublicStorySubscription .cxx_destruct] */

void FUN_1068223c0(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_destroyWeak(param_1 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1068223f8; end: 1068224db;  */

long FUN_1068223f8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_2;
  func_0x00010c2709c0();
  lVar2 = param_3;
  func_0x00010c2709c0();
  if (lVar2 < lVar1) {
    lVar3 = -1;
  }
  else {
    lVar1 = param_2;
    func_0x00010c2709c0();
    lVar2 = param_3;
    func_0x00010c2709c0();
    if (lVar1 < lVar2) {
      lVar3 = 1;
    }
    else {
      lVar1 = param_2;
      func_0x00010c24cfc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      lVar2 = param_3;
      func_0x00010c24cfc0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar1;
      func_0x00010bf433a0(lVar1);
      _objc_release(lVar2);
      _objc_release(lVar1);
    }
  }
  _objc_release(param_3);
  _objc_release(param_2);
  return lVar3;
}



/* Entry: 1068224dc; end: 106822687; -[SCMemoriesTranscoder initWithShareableMediaProvider:memoriesAPIDataProvider:composerImageFactory:composerVideoFactory:asyncQueueProvider:crashLogger:] */

undefined8 *
FUN_1068224dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f3630;
  puVar1 = &uStack_60;
  uStack_60 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
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
    _objc_retain(param_8);
    uVar2 = puVar1[5];
    puVar1[5] = param_8;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_7);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_7);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106822688; end: 1068226d7;  */

void FUN_106822688(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c11e0e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1068226d8; end: 1068227f7; -[SCMemoriesTranscoder transcodeWithMemories:callback:] */

void FUN_1068226d8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1068227f8; end: 10682282b;  */

void FUN_1068227f8(long param_1)

{
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010bece7a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10682282c; end: 106822837; -[SCMemoriesTranscoder pushToValdiMarshaller:] */

undefined8 FUN_10682282c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af9e7d4(param_3,param_1);
  func_0x00010af9e7dc();
  func_0x00010af9e7a0();
  func_0x00010af9e7b0();
  return param_3;
}



/* Entry: 106822838; end: 106822957; -[SCMemoriesTranscoder _transcodeMemories:callback:] */

void FUN_106822838(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_4);
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_110942118);
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  puVar1 = PTR_PTR_1126aed88;
  func_0x00010c26a560(PTR_PTR_1126aed88);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfaa540(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c297260(uVar3);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(param_3);
  return;
}



/* Entry: 106822958; end: 10682298b;  */

void FUN_106822958(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c241230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_snapId_11266deb0);
  return;
}



/* Entry: 10682298c; end: 106822a4b; -[SCMemoriesTranscoder _onFetchError:callback:] */

void FUN_10682298c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010be6c120(param_1);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_106822a4c;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = param_3;
  uStack_38 = param_4;
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x000100162d98("APPSTORE",&puStack_60);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 106822a4c; end: 106822a93;  */

void FUN_106822a4c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010c09e4e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,PTR____NSArray0__struct_11034ab48,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106822a94; end: 106822b7b; -[SCMemoriesTranscoder _generateShareableMediaWithSnaps:callback:] */

void FUN_106822a94(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_106822b7c;
  puStack_40 = &UNK_110849810;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106822b88;
  puStack_70 = &UNK_110858190;
  lStack_68 = param_1;
  uStack_60 = param_4;
  lStack_38 = param_1;
  _objc_retain(param_4);
  func_0x00010bfc0140(uVar1,param_2,param_3,&puStack_58,&puStack_88);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uStack_60);
  _objc_release(param_4);
  return;
}



/* Entry: 106822b7c; end: 106822b87;  */

void FUN_106822b7c(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6c130. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onTranscodeError__1125789e8,param_2);
  return;
}



/* Entry: 106822b88; end: 106822c4b;  */

void FUN_106822b88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar1);
  _objc_retain(param_2);
  func_0x00010c0f7fc0(uVar2);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_2);
  _objc_release(param_2);
  return;
}



/* Entry: 106822c4c; end: 106822c5b;  */

void FUN_106822c4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be6c110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__onTranscodeCompleteWithMedia_ca_1125789e0,
             *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Entry: 106822c5c; end: 106822e2f; -[SCMemoriesTranscoder _onTranscodeCompleteWithMedia:callback:] */

void FUN_106822c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  uStack_58 = 0x106822d3c;
  puStack_50 = &UNK_110942198;
  uStack_48 = param_1;
  func_0x000100504554(param_3,&puStack_68);
  puStack_98 = puVar1;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_106822f30;
  puStack_80 = &UNK_11084aaa8;
  uStack_78 = param_3;
  uStack_70 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  func_0x000100162d98("APPSTORE",&puStack_98);
  _objc_release(uStack_78);
  _objc_release(uStack_70);
  _objc_release(param_3);
  _objc_release(param_4);
  return;
}



/* Entry: 106822e30; end: 106822f2f;  */

void FUN_106822e30(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x18);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c2bd620();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + 0x20));
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 106822f30; end: 106822f43;  */

void FUN_106822f30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106822f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 106822f44; end: 106823033; -[SCMemoriesTranscoder _onTranscodeError:] */

void FUN_106822f44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126b3e90;
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  func_0x00010c1c5b60();
  puVar3 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = param_3;
  func_0x00010bf6e340();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar6 = uVar2;
  func_0x00010c14de00(puVar3,param_2,&PTR____CFConstantStringClassReference_110e61038);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b3e98;
  func_0x00010bf60460(PTR_PTR_1126b3e98);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c133420(uVar5,param_2,puVar1,0,puVar3,puVar4,in_x6,in_x7,uVar6);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106823034; end: 106823093; -[SCMemoriesTranscoder .cxx_destruct] */

void FUN_106823034(long param_1)

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



/* Entry: 106823094; end: 106823497; -[SCPublicProfileManagementActionHandler initWithScopeLauncher:viewController:shareScopeExposer:linkGenerationService:chatCameraScopeExposer:userSession:publicProfileManagementScopeDelegate:profilesProvider:addToStoryCameraScopeLauncher:addToStoryCameraScopeBuilder:directorModeScopeExposer:directorModeScopeServices:memoriesQuickPostScopeExposer:qrCodeCardScopeExposer:notificationPool:userTrackedLogger:creatorSubscriptionOnboardingScopeFactoryServices:spotlightThumbnailEditLauncher:] */

undefined8 *
FUN_106823094(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
             undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
             undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_78;
  undefined *puStack_70;
  
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
  _objc_retain(param_14);
  _objc_retain(param_15);
  _objc_retain(param_16);
  _objc_retain(param_17);
  _objc_retain(param_18);
  _objc_retain(param_19);
  _objc_retain(param_20);
  puStack_70 = PTR_PTR_1126f3638;
  puVar1 = &uStack_78;
  uStack_78 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = puVar1[2];
    puVar1[2] = param_3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 1,param_4);
    _objc_retain(param_5);
    uVar2 = puVar1[4];
    puVar1[4] = param_5;
    _objc_release(uVar2);
    _objc_retain(param_6);
    uVar2 = puVar1[5];
    puVar1[5] = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = puVar1[6];
    puVar1[6] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 8,param_9);
    _objc_retain(param_10);
    uVar2 = puVar1[9];
    puVar1[9] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[10];
    puVar1[10] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[0xb];
    puVar1[0xb] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126b02d0;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    _objc_storeWeak(puVar1 + 0xe,param_13);
    _objc_retain(param_14);
    uVar2 = puVar1[0xf];
    puVar1[0xf] = param_14;
    _objc_release(uVar2);
    _objc_retain(param_15);
    uVar2 = puVar1[0x10];
    puVar1[0x10] = param_15;
    _objc_release(uVar2);
    _objc_retain(param_16);
    uVar2 = puVar1[0x11];
    puVar1[0x11] = param_16;
    _objc_release(uVar2);
    _objc_retain(param_18);
    uVar2 = puVar1[0x12];
    puVar1[0x12] = param_18;
    _objc_release(uVar2);
    _objc_retain(param_17);
    uVar2 = puVar1[0x13];
    puVar1[0x13] = param_17;
    _objc_release(uVar2);
    _objc_retain(param_19);
    uVar2 = puVar1[0x14];
    puVar1[0x14] = param_19;
    _objc_release(uVar2);
    _objc_retain(param_20);
    uVar2 = puVar1[0x15];
    puVar1[0x15] = param_20;
    _objc_release(uVar2);
  }
  _objc_release(param_20);
  _objc_release(param_19);
  _objc_release(param_18);
  _objc_release(param_17);
  _objc_release(param_16);
  _objc_release(param_15);
  _objc_release(param_14);
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



/* Entry: 106823498; end: 106823533; -[SCPublicProfileManagementActionHandler editSpotlightThumbnailWithHighlightId:encodedStoryDoc:coverSnapId:onCoverPicked:] */

void FUN_106823498(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(0,param_6,0,0);
    }
  }
  else {
    func_0x00010c08bee0(*(undefined8 *)(param_1 + 0xa8));
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 106823534; end: 1068235cf; -[SCPublicProfileManagementActionHandler editSpotlightThumbnailFromStoryCardWithHighlightId:encodedMixerStory:coverSnapId:onCoverPicked:] */

void FUN_106823534(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  long lVar1;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_4;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(0,param_6,0,0);
    }
  }
  else {
    func_0x00010c08bec0(*(undefined8 *)(param_1 + 0xa8));
  }
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1068235d0; end: 106823783; -[SCPublicProfileManagementActionHandler presentPublicProfilePreviewWithEncodedBusinessProfile:showHighlightCta:onCreateHighlight:] */

void FUN_1068235d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  if ((*(long *)(param_1 + 0x10) != 0) && (*(long *)(param_1 + 0x18) == 0)) {
    uStack_68 = 0;
    puVar2 = PTR_PTR_1126b1a58;
    func_0x00010c0f40e0(PTR_PTR_1126b1a58,param_2,param_3,&uStack_68);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = uStack_68;
    _objc_retain(uStack_68);
    if (puVar2 != (undefined *)0x0) {
      puVar3 = PTR_PTR_1126b0f10;
      _objc_alloc(PTR_PTR_1126b0f10);
      func_0x00010c033440();
      puVar4 = PTR_PTR_1126b0f18;
      _objc_alloc(PTR_PTR_1126b0f18);
      puVar5 = puVar2;
      func_0x00010bfe5ea0(puVar2);
      _objc_retainAutoreleasedReturnValue();
      uVar6 = param_4;
      func_0x00010bf1f3c0(param_4);
      func_0x00010bff9da0(puVar4,param_2,puVar5,puVar3,1,uVar6,1,1,param_5,0);
      _objc_release(puVar5);
      func_0x00010c1cd960(puVar4,param_2,0x32);
      func_0x00010c1cd9a0(puVar4,param_2,0x20e40509);
      puVar5 = PTR_PTR_1126b0f20;
      _objc_alloc();
      func_0x00010c001da0();
      uVar6 = *(undefined8 *)(param_1 + 0x18);
      *(undefined **)(param_1 + 0x18) = puVar5;
      _objc_release(uVar6);
      func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x10),param_2,*(undefined8 *)(param_1 + 0x18),
                          param_1);
      _objc_release(puVar4);
      _objc_release(puVar3);
    }
    _objc_release(puVar2);
    _objc_release(uVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106823784; end: 10682393b; -[SCPublicProfileManagementActionHandler presentProfileExternalSheetWithUsername:userId:shareSource:] */

void FUN_106823784(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar2,param_2,lVar1,1);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010be0d860(param_1,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126b2498;
    _objc_alloc(PTR_PTR_1126b2498);
    puVar4 = puVar3;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c037ea0(puVar3,param_2,param_4,0,puVar4,0,0);
    _objc_release(puVar4);
    puVar4 = PTR_PTR_1126b24a0;
    _objc_alloc(PTR_PTR_1126b24a0);
    uVar5 = param_5;
    func_0x000108f94e00();
    uVar6 = uVar5;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0574a0(puVar4,param_2,puVar2,lVar1,0,puVar3,0,uVar5,uVar6,param_1);
    _objc_release(uVar6);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x20),param_2,puVar4);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(lVar1);
    _objc_release(puVar2);
  }
  _objc_release(param_5);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10682393c; end: 106823afb; -[SCPublicProfileManagementActionHandler presentQRCodeSharePageWithUsername:] */

void FUN_10682393c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x88);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010c038f40(puVar2);
    _objc_release(lVar1);
    puVar3 = PTR_PTR_1126b4a78;
    _objc_alloc(PTR_PTR_1126b4a78);
    uVar4 = 4;
    func_0x000100c6f294(4);
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010011df08();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c058400(puVar3);
    _objc_release(uVar5);
    _objc_release(uVar4);
    _objc_initWeak(auStack_48,param_1);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_106823afc;
    puStack_60 = &UNK_110841fb0;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    uStack_58 = param_3;
    func_0x0001000d76cc("APPSTORE",&puStack_78);
    func_0x00010c1d4f40(puVar3);
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x88));
    _objc_release(uStack_58);
    _objc_destroyWeak(auStack_50);
    _objc_destroyWeak(auStack_48);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  return;
}



/* Entry: 106823afc; end: 106823b37;  */

void FUN_106823afc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010be1a800(lVar1,param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106823b38; end: 106823cf3; -[SCPublicProfileManagementActionHandler _generateAddFriendLinkAndCopyToClipboard:] */

void FUN_106823b38(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar5;
  func_0x00010bfbf720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar5);
  puVar2 = PTR__OBJC_CLASS___UIPasteboard_1126b2090;
  func_0x00010bfbedc0(PTR__OBJC_CLASS___UIPasteboard_1126b2090);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar1;
  func_0x00010beec820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c20e7c0(puVar2);
  _objc_release(uVar5);
  uVar3 = *(undefined8 *)(param_2 + 0x98);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126afde0;
  uVar5 = uVar3;
  func_0x0001068285f0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf54760(puVar4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25f340(uVar3);
  _objc_release(puVar4);
  _objc_release(uVar5);
  _objc_release(uVar3);
  _CACurrentMediaTime();
  uVar3 = *(undefined8 *)(param_2 + 0x90);
  uVar5 = uVar1;
  func_0x00010beec820(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108f9516c(param_1,0,0x19,0,0,0,uVar3,0x14,uVar5,0,0xc,0,6,0,0,0);
  _objc_release(uVar5);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106823cf4; end: 106823d63; -[SCPublicProfileManagementActionHandler createSpotlightWithBusinessProfileId:title:logo:isHost:] */

void FUN_106823cf4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR_PTR_1126aff58;
  _objc_alloc(PTR_PTR_1126aff58);
  lVar2 = param_1 + 8;
  _objc_loadWeakRetained(lVar2);
  func_0x00010c038f60(puVar1,param_2,lVar2,1,4);
  _objc_release(lVar2);
  func_0x00010be7b020(param_1,param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106823d64; end: 106823e1f; -[SCPublicProfileManagementActionHandler _presentDirectorMode:] */

void FUN_106823d64(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126c57e0;
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010bff5ca0();
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010bf235e0(uVar2,param_2,param_3,0xe,0xb,0,param_1,0,0,0,0,0,puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  param_1 = param_1 + 0x70;
  _objc_loadWeakRetained(param_1);
  func_0x00010bf9d620();
  _objc_release(param_1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106823e20; end: 106823f73; -[SCPublicProfileManagementActionHandler _externalShareTextConfiguration:] */

void FUN_106823e20(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010bfbf720();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  puVar2 = PTR_PTR_1126ae720;
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  uStack_48 = 0x106823efc;
  puStack_40 = &UNK_110866fa0;
  uStack_38 = uVar1;
  _objc_retain(uVar1);
  func_0x00010bf11fe0(puVar2,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_38);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 106823f74; end: 10682414b; -[SCPublicProfileManagementActionHandler addSnapToBusinessStoryWithBusinessProfileId:] */

void FUN_106823f74(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  
  _objc_retain(param_3);
  lVar8 = param_3;
  func_0x00010c08fa60();
  if (lVar8 != 0) {
    puVar1 = PTR_PTR_1126b47d0;
    _objc_alloc(PTR_PTR_1126b47d0);
    func_0x00010c03ca00();
    puVar2 = PTR_PTR_1126ae6c0;
    func_0x00010c294300(PTR_PTR_1126ae6c0,param_2,&PTR____CFConstantStringClassReference_110daafd8);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR_PTR_1126ae6d0;
    _objc_alloc(PTR_PTR_1126ae6d0);
    func_0x00010c03e5a0();
    puVar4 = PTR_PTR_1126b1bb0;
    func_0x00010bfea1a0(PTR_PTR_1126b1bb0,param_2,puVar3,puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR_PTR_1126aead8;
    _objc_alloc(PTR_PTR_1126aead8);
    lVar8 = param_1 + 8;
    _objc_loadWeakRetained(lVar8);
    func_0x00010c038f40(puVar5,param_2,lVar8,1);
    _objc_release(lVar8);
    puVar6 = PTR_PTR_1126b47b8;
    _objc_alloc(PTR_PTR_1126b47b8);
    func_0x00010c05aa60();
    puVar7 = PTR_PTR_1126b47c0;
    _objc_alloc(PTR_PTR_1126b47c0);
    func_0x00010c00b040();
    lVar8 = *(long *)(param_1 + 0x80);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar8 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x80));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x80),param_2,puVar7);
    _objc_release(puVar7);
    _objc_release(puVar6);
    _objc_release(puVar5);
    _objc_release(puVar4);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10682414c; end: 1068242d7; -[SCPublicProfileManagementActionHandler addSnapToFriendStory] */

void FUN_10682414c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126ae6c0;
  func_0x00010c25bbc0(PTR_PTR_1126ae6c0,param_2,&PTR____CFConstantStringClassReference_110daafd8,0,0
                      ,1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126ae6d0;
  _objc_alloc(PTR_PTR_1126ae6d0);
  func_0x00010c03e5a0();
  puVar3 = PTR_PTR_1126b1bb0;
  func_0x00010bf165e0(PTR_PTR_1126b1bb0,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar7 = param_1 + 8;
  _objc_loadWeakRetained(lVar7);
  func_0x00010c038f40(puVar4,param_2,lVar7,1);
  _objc_release(lVar7);
  puVar5 = PTR_PTR_1126b47b8;
  _objc_alloc(PTR_PTR_1126b47b8);
  func_0x00010c05aa60();
  puVar6 = PTR_PTR_1126b47c0;
  _objc_alloc(PTR_PTR_1126b47c0);
  func_0x00010c00b040();
  lVar7 = *(long *)(param_1 + 0x80);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar7 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x80));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x80),param_2,puVar6);
  _objc_release(puVar6);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(puVar3);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1068242d8; end: 10682436f; -[SCPublicProfileManagementActionHandler _launchCameraWithReplyConfiguration:] */

void FUN_1068242d8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  if (param_3 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    _objc_retain(param_3);
    lVar1 = param_1 + 8;
    _objc_loadWeakRetained(lVar1);
    func_0x00010bf237e0(uVar2,param_2,param_3,lVar1,param_1,param_1,0,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_release(lVar1);
    func_0x00010c08b7c0(*(undefined8 *)(param_1 + 0x50),param_2,uVar2,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 106824370; end: 106824567; -[SCPublicProfileManagementActionHandler observeBusinessProfileWithBusinessProfileId:isPlaceholderProfile:onUpdated:cancel:] */

void FUN_106824370(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSUUID_1126b0270;
  func_0x00010bdc3540();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010bdc3580();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_initWeak(auStack_68,param_1);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_106824568;
  puStack_88 = &UNK_1109421c8;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(puVar2);
  puStack_80 = puVar2;
  _objc_retain(param_5);
  uStack_78 = param_5;
  func_0x00010bfd3260(uVar3);
  _objc_release(uVar3);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  pcStack_c0 = FUN_1068246f0;
  puStack_b8 = &UNK_110841fb0;
  _objc_copyWeak(auStack_a8,auStack_68);
  _objc_retain(puVar2);
  puStack_b0 = puVar2;
  (**(code **)(param_6 + 0x10))(param_6,&puStack_d0);
  _objc_release(puStack_b0);
  _objc_destroyWeak(auStack_a8);
  _objc_release(uStack_78);
  _objc_release(puStack_80);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(puVar2);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 106824568; end: 106824637;  */

void FUN_106824568(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if ((param_2 != 0) && (lVar1 != 0)) {
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar3);
    lVar2 = param_2;
    func_0x00010befa2a0(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0640(*(undefined8 *)(lVar1 + 0x68));
    _objc_release(lVar2);
    _objc_release(uVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
  return;
}



/* Entry: 106824638; end: 1068246ef;  */

void FUN_106824638(long param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  
  _objc_retain(param_2);
  puVar2 = PTR_PTR_1126b0f68;
  _objc_opt_class(PTR_PTR_1126b0f68);
  uVar3 = param_2;
  _objc_opt_isKindOfClass(param_2,puVar2);
  uVar1 = param_2;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if (uVar1 != 0) {
    lVar5 = *(long *)(param_1 + 0x20);
    uVar3 = param_2;
    func_0x00010bf25020(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf63640();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar5 + 0x10))(lVar5,uVar4);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1068246f0; end: 106824757;  */

void FUN_1068246f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x68);
    func_0x00010c0e00e0(uVar2,param_2,*(undefined8 *)(param_1 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf2dba0();
    _objc_release(uVar2);
    func_0x00010c12d3e0(*(undefined8 *)(lVar1 + 0x68),param_2,*(undefined8 *)(param_1 + 0x20));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106824758; end: 1068248ab; -[SCPublicProfileManagementActionHandler reloadManagedBusinessProfilesWithOnComplete:] */

void FUN_106824758(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf25180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b7dc0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbf00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf25180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfda1e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1cbf00();
  _objc_release(uVar2);
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010bf25180(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0b7dc0();
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_1068248ac;
  puStack_40 = &UNK_1109421f8;
  uStack_38 = param_3;
  _objc_retain(param_3);
  func_0x00010c2a14c0(uVar2,param_2,&puStack_58);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  func_0x00010bf7dbc0(*(undefined8 *)(param_1 + 0x60),param_2,
                      &PTR____CFConstantStringClassReference_110e61058,
                      &PTR____CFConstantStringClassReference_110e61078,0);
  _objc_release(uStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1068248ac; end: 1068248bf;  */

void FUN_1068248ac(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001068248b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1068248c0; end: 1068248f7; -[SCPublicProfileManagementActionHandler unifiedPublicProfilesPresenterScopeDidComplete] */

void FUN_1068248c0(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bf94c80(*(undefined8 *)(param_1 + 0x10));
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1068248f8; end: 10682490f; -[SCPublicProfileManagementActionHandler presentingViewControllerForUnifiedPublicProfilesPresenterScope] */

void FUN_1068248f8(long param_1)

{
  _objc_loadWeakRetained(param_1 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106824910; end: 106824913; -[SCPublicProfileManagementActionHandler swipeInteractionPresenter:didStartPresentingWithSwipeDirection:] */

void FUN_106824910(void)

{
  return;
}



/* Entry: 106824914; end: 10682494b; -[SCPublicProfileManagementActionHandler swipeInteractionPresenterDidFinishDismissing:] */

void FUN_106824914(long param_1)

{
  undefined8 uVar1;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010bf94c80(*(undefined8 *)(param_1 + 0x10));
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    *(undefined8 *)(param_1 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 10682494c; end: 106824953; -[SCPublicProfileManagementActionHandler swipeInteractionPresenter:swipeEnabledWithDirection:] */

undefined8 FUN_10682494c(void)

{
  return 0;
}



/* Entry: 106824954; end: 10682495b; -[SCPublicProfileManagementActionHandler handleShareDestination:standardExternalContentShareScope:] */

undefined8 FUN_106824954(void)

{
  return 0;
}



/* Entry: 10682495c; end: 1068249a3; -[SCPublicProfileManagementActionHandler shareSheetDismissedWithShareDestination:] */

void FUN_10682495c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x20));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1068249a4; end: 106824a17; -[SCPublicProfileManagementActionHandler dismissCameraScope:] */

void FUN_1068249a4(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x50);
  _objc_retain(param_3);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(lVar1);
  if (lVar1 != param_3) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf94c30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x50),PTR_s_endLaunchedFeature_1125c2cb0);
  return;
}



/* Entry: 106824a18; end: 106824a1b; -[SCPublicProfileManagementActionHandler captureWorkflowDidDismissWithDidSendSnap:] */

void FUN_106824a18(void)

{
  return;
}



/* Entry: 106824a1c; end: 106824a97; -[SCPublicProfileManagementActionHandler directorModeScopeDidComplete] */

void FUN_106824a1c(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1 + 0x70;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  _objc_release(lVar1);
  if (lVar2 != 0) {
    param_1 = param_1 + 0x70;
    _objc_loadWeakRetained(param_1);
    func_0x00010c12e1c0();
    _objc_unsafeClaimAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 106824a98; end: 106824adf; -[SCPublicProfileManagementActionHandler memoriesQuickPostDidFinishWithDidSend:] */

void FUN_106824a98(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x80));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 106824ae0; end: 106824bdb; -[SCPublicProfileManagementActionHandler startCameraWorkflow] */

void FUN_106824ae0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  lVar1 = *(long *)(param_1 + 0x80);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c131bc0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(uVar2);
    uVar4 = *(undefined8 *)(param_1 + 0x80);
    func_0x00010c12e1c0(uVar4);
    _objc_retainAutoreleasedReturnValue();
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_106824bdc;
    puStack_48 = &UNK_110841f80;
    lStack_40 = param_1;
    uStack_38 = uVar3;
    _objc_retain(uVar3);
    func_0x00010c2a4ae0(uVar4,param_2,&puStack_60);
    _objc_release(uStack_38);
    _objc_release(uVar3);
    _objc_release(uVar4);
  }
  return;
}



/* Entry: 106824bdc; end: 106824be7;  */

void FUN_106824bdc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be47670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__launchCameraWithReplyConfigurat_11256f738,
             *(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 106824be8; end: 106824c6f; -[SCPublicProfileManagementActionHandler presentCreatorSubscriptionOnboarding] */

void FUN_106824be8(undefined8 param_1)

{
  undefined *puStack_50;
  undefined8 uStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0xc2000000;
  pcStack_40 = FUN_106824c70;
  puStack_38 = &UNK_1108434b0;
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x000100162d98("APPSTORE",&puStack_50);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 106824c70; end: 106824d07;  */

void FUN_106824c70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    puVar1 = PTR_PTR_1126ce648;
    _objc_alloc(PTR_PTR_1126ce648);
    func_0x00010c00a2c0();
    uVar2 = *(undefined8 *)(param_1 + 0xa0);
    func_0x00010bf21f80(uVar2,param_2,puVar1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1 + 8;
    _objc_loadWeakRetained(lVar3);
    func_0x00010c10eda0();
    _objc_release(lVar3);
    _objc_release(uVar2);
    _objc_release(puVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 106824d08; end: 106824d0f; -[SCPublicProfileManagementActionHandler shouldRetainInstanceWhenMarshalling] */

undefined8 FUN_106824d08(void)

{
  return 0;
}



/* Entry: 106824d10; end: 106824d1b; -[SCPublicProfileManagementActionHandler pushToValdiMarshaller:] */

void FUN_106824d10(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010af8feb4(param_3,param_1);
  func_0x00010af8fe58();
  func_0x00010af8fe50();
  func_0x00010af8fd34();
  func_0x00010af8fd10();
  return;
}


