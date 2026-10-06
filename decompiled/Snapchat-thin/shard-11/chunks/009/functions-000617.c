/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 108bd112c; end: 108bd151f; -[SCSnapchattersHiddenSuggestionCoordinator _hideCachedHiddenSuggestionsWithHiddenSuggestions:placement:completionQueue:completionHandler:] */

void FUN_108bd112c(long param_1,undefined8 param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puStack_200;
  undefined8 uStack_1f8;
  code *pcStack_1f0;
  undefined *puStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 auStack_1c0 [8];
  undefined1 auStack_1b8 [8];
  undefined *puStack_1b0;
  undefined8 uStack_1a8;
  code *pcStack_1a0;
  undefined *puStack_198;
  long lStack_190;
  undefined8 *puStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  long lStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined *puStack_140;
  long lStack_138;
  undefined8 *puStack_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  long lStack_108;
  undefined8 *puStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined *puStack_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  long lStack_80;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar2 = param_3;
  func_0x00010bf529e0();
  if (lVar2 == 0) {
    if (param_6 == 0) goto LAB_108bd14b8;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_108bd1520;
    puStack_88 = &UNK_110849530;
    _objc_retain(param_6);
    ppuVar6 = &puStack_a0;
    lStack_80 = param_6;
    _objc_retainBlock();
    if (param_5 == 0) {
      (*(code *)ppuVar6[2])(ppuVar6);
    }
    else {
      func_0x000107c27d8c(param_5,ppuVar6);
    }
    _objc_release(ppuVar6);
    lVar2 = lStack_80;
  }
  else {
    puStack_c8 = &uStack_d0;
    uStack_d0 = 0;
    uStack_c0 = 0x3032000000;
    uStack_b8 = 0x108bd153c;
    uStack_b0 = 0x108bd154c;
    lStack_a8 = 0;
    _dispatch_group_create();
    lVar3 = param_3;
    func_0x00010bf002e0(param_3);
    _objc_retainAutoreleasedReturnValue();
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    puStack_f8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_f0 = 0xc2000000;
    pcStack_e8 = FUN_108bd1554;
    puStack_e0 = &UNK_11089b0f0;
    lVar4 = lVar3;
    lStack_d8 = param_1;
    func_0x000107c31908();
    _objc_release(lVar3);
    _dispatch_group_enter(lVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_128 = puVar1;
    uStack_120 = 0xc2000000;
    uStack_118 = 0x108bd15c4;
    puStack_110 = &UNK_110943a18;
    puStack_100 = &uStack_d0;
    lStack_108 = lVar2;
    func_0x00010bdfa8c0(param_1);
    _objc_release(uVar5);
    _dispatch_group_enter(lVar2);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_158 = puVar1;
    uStack_150 = 0xc2000000;
    uStack_148 = 0x108bd1620;
    puStack_140 = &UNK_110943a18;
    puStack_130 = &uStack_d0;
    lStack_138 = lVar2;
    func_0x00010be3c460(param_1);
    _objc_release(uVar5);
    _dispatch_group_enter(lVar2);
    puStack_180 = puVar1;
    uStack_178 = 0xc2000000;
    uStack_170 = 0x108bd167c;
    puStack_168 = &UNK_11089b0f0;
    lVar3 = param_3;
    lStack_160 = param_1;
    func_0x00010bd869d0(param_3,&puStack_180,&PTR___NSConcreteGlobalBlock_110ab6480);
    uVar7 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_1b0 = puVar1;
    uStack_1a8 = 0xc2000000;
    pcStack_1a0 = FUN_108bd1714;
    puStack_198 = &UNK_1108646c8;
    puStack_188 = &uStack_d0;
    lStack_190 = lVar2;
    func_0x00010bfe2a80(uVar7);
    _objc_release(uVar5);
    _objc_initWeak(auStack_1b8,param_1);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_200 = puVar1;
    uStack_1f8 = 0xc2000000;
    pcStack_1f0 = FUN_108bd1770;
    puStack_1e8 = &UNK_1108e8e10;
    puStack_1c8 = &uStack_d0;
    _objc_copyWeak(auStack_1c0,auStack_1b8);
    _objc_retain(param_6);
    lStack_1d0 = param_6;
    _objc_retain(param_3);
    lStack_1e0 = param_3;
    _objc_retain(param_5);
    lStack_1d8 = param_5;
    func_0x000107c27d98(lVar2,uVar5,&puStack_200);
    _objc_release(uVar5);
    _objc_release(lStack_1d8);
    _objc_release(lStack_1e0);
    _objc_release(lStack_1d0);
    _objc_destroyWeak(auStack_1c0);
    _objc_destroyWeak(auStack_1b8);
    _objc_release(lVar3);
    _objc_release(lVar4);
    _objc_release(lVar2);
    __Block_object_dispose(&uStack_d0,8);
    lVar2 = lStack_a8;
  }
  _objc_release(lVar2);
LAB_108bd14b8:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd1520; end: 108bd1553;  */

void FUN_108bd1520(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bd1538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,0,0,0);
  return;
}



/* Entry: 108bd1554; end: 108bd16eb;  */

void FUN_108bd1554(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x40);
  _objc_retain(param_2);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c2448a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bd16ec; end: 108bd1713;  */

void FUN_108bd16ec(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108bd1714; end: 108bd176f;  */

void FUN_108bd1714(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _objc_retain(param_2);
  if (param_2 != 0) {
    lVar2 = *(long *)(*(long *)(param_1 + 0x28) + 8);
    _objc_retain(param_2);
    uVar1 = *(undefined8 *)(lVar2 + 0x28);
    *(long *)(lVar2 + 0x28) = param_2;
    _objc_release(uVar1);
  }
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bd1770; end: 108bd1887;  */

void FUN_108bd1770(long param_1)

{
  undefined **ppuVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined1 auStack_38 [8];
  
  ppuVar1 = &puStack_70;
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28) == 0) {
    lVar2 = param_1 + 0x40;
    _objc_loadWeakRetained(lVar2);
    func_0x00010bddff60();
    _objc_release(lVar2);
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_108bd1888;
    puStack_58 = &UNK_110947248;
    _objc_retain(lVar2);
    uStack_40 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    lStack_48 = lVar2;
    _objc_retain(uVar3);
    uStack_50 = uVar3;
    _objc_copyWeak(auStack_38,param_1 + 0x40);
    _objc_retainBlock();
    if (*(long *)(param_1 + 0x28) == 0) {
      (**(code **)((long)ppuVar1 + 0x10))(ppuVar1);
    }
    else {
      func_0x000107c27d8c(*(long *)(param_1 + 0x28),ppuVar1);
    }
    _objc_release(ppuVar1);
    _objc_destroyWeak(auStack_38);
    _objc_release(uStack_50);
    _objc_release(lStack_48);
  }
  return;
}



/* Entry: 108bd1888; end: 108bd1907;  */

void FUN_108bd1888(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 0x28);
  lVar4 = *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf529e0(uVar2);
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  lVar3 = param_1;
  func_0x00010be1f900();
  (**(code **)(lVar1 + 0x10))(lVar1,lVar4 == 0,lVar4,uVar2,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bd1908; end: 108bd1a13; -[SCSnapchattersHiddenSuggestionCoordinator _getHiddenSuggestionsWithFeedbackCountFromHiddenSuggestions:] */

undefined1 * FUN_108bd1908(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined8 unaff_x21;
  long unaff_x22;
  undefined8 uVar7;
  long lVar8;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined1 *puStack_148;
  long lStack_140;
  undefined8 uStack_138;
  undefined1 *puStack_130;
  long lStack_128;
  undefined1 *puStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined1 auStack_c8 [128];
  long lStack_48;
  
  puVar3 = &uStack_110;
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  plStack_100 = (long *)0x0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = auStack_c8;
  uVar5 = 0x10;
  lVar1 = param_3;
  func_0x00010bf52a60();
  if (lVar1 == 0) {
    puVar6 = (undefined1 *)0x0;
  }
  else {
    puVar6 = (undefined1 *)0x0;
    unaff_x22 = *plStack_100;
    do {
      lVar8 = 0;
      do {
        if (*plStack_100 != unaff_x22) {
          _objc_enumerationMutation(param_3);
        }
        lVar2 = *(long *)(lStack_108 + lVar8 * 8);
        func_0x00010c282820();
        if (lVar2 == 0) {
          puVar6 = puVar6 + 1;
        }
        lVar8 = lVar8 + 1;
      } while (lVar1 != lVar8);
      puVar4 = auStack_c8;
      uVar5 = 0x10;
      lVar1 = param_3;
      puVar3 = &uStack_110;
      func_0x00010bf52a60();
    } while (lVar1 != 0);
    unaff_x21 = 0;
  }
  lVar1 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return puVar6;
  }
  ___stack_chk_fail();
  pcStack_118 = FUN_108bd1a14;
  lStack_140 = unaff_x22;
  uStack_138 = unaff_x21;
  puStack_130 = puVar6;
  lStack_128 = param_3;
  puStack_120 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_retain(uVar5);
  uVar7 = *(undefined8 *)(lVar1 + 8);
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_108bd1af0;
  puStack_150 = &UNK_11085adb8;
  puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_188 = 0xc2000000;
  pcStack_180 = FUN_108bd1bfc;
  puStack_178 = &UNK_110842508;
  uStack_170 = uVar5;
  puStack_148 = (undefined1 *)puVar3;
  _objc_retain(uVar5);
  _objc_retain(puVar3);
  func_0x00010c0f8500(uVar7,param_2,&puStack_168,puVar4,&puStack_190);
  _objc_release(uStack_170);
  _objc_release(puStack_148);
  _objc_release(uVar5);
  _objc_release(puVar3);
  return (undefined1 *)puVar3;
}



/* Entry: 108bd1a14; end: 108bd1aef; -[SCSnapchattersHiddenSuggestionCoordinator _deleteSuggestedSnapchattersFriendInfo:completionQueue:completionHandler:] */

void FUN_108bd1a14(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108bd1af0;
  puStack_40 = &UNK_11085adb8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108bd1bfc;
  puStack_68 = &UNK_110842508;
  uStack_60 = param_5;
  uStack_38 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,param_4,&puStack_80);
  _objc_release(uStack_60);
  _objc_release(uStack_38);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd1af0; end: 108bd1bfb;  */

void FUN_108bd1af0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x000108c203b8(param_2,*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_2 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bd1c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108bd1bfc; end: 108bd1c13;  */

void FUN_108bd1bfc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bd1c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,0);
    return;
  }
  return;
}



/* Entry: 108bd1c14; end: 108bd1c7b; -[SCSnapchattersHiddenSuggestionCoordinator snapchattersHiddenSuggestionObserver] */

void FUN_108bd1c14(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(param_1 + 0x38);
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126db050;
    _objc_alloc();
    func_0x00010c00dac0();
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    *(undefined **)(param_1 + 0x38) = puVar2;
    _objc_release(uVar3);
    lVar1 = *(long *)(param_1 + 0x38);
  }
  func_0x00010c24f780(lVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 108bd1c7c; end: 108bd1c87;  */

void FUN_108bd1c7c(undefined8 param_1,long param_2)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  long lVar3;
  long *plVar4;
  undefined4 uStack_b8;
  undefined1 uStack_b1;
  long lStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  long lStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined4 uStack_3c;
  undefined *puStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_opt_class(PTR_PTR_1126db058);
  if (param_2 == 0) {
    uStack_50 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
  }
  else {
    func_0x00010bfa6be0(&uStack_80,param_2);
  }
  puVar1 = &uStack_b1;
  func_0x000108c33a80();
  uStack_48 = *(undefined8 *)(puVar1 + 0x10);
  uStack_40 = puVar1[0x19];
  uStack_3f = puVar1[0x18];
  uStack_30 = *(undefined8 *)(puVar1 + 0x28);
  uStack_3c = 1;
  puStack_38 = &UNK_108c129cc;
  lStack_a8 = 0;
  uStack_a0 = 0;
  lStack_b0 = 0;
  func_0x000100c435d0(&lStack_b0,&uStack_48,&lStack_28,1);
  func_0x000100c436b8(&lStack_98,&lStack_b0);
  uStack_b8 = 0xfa;
  puVar2 = &uStack_80;
  plVar4 = &lStack_98;
  func_0x000107c310d0(puVar2,plVar4,&uStack_b8);
  _objc_retainAutoreleasedReturnValue();
  if (lStack_98 != 0) {
    lStack_90 = lStack_98;
    __ZdlPv();
  }
  if (lStack_b0 != 0) {
    lStack_a8 = lStack_b0;
    __ZdlPv();
  }
  func_0x000107c27da8(&uStack_58);
  _objc_release(uStack_68);
  _objc_release(uStack_70);
  lVar3 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  func_0x000104d96620(&uStack_80);
  _objc_release(param_2);
  __Unwind_Resume(lVar3);
  _objc_retain();
  func_0x000108c34780(plVar4,0);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(lVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(plVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar3);
  return;
}



/* Entry: 108bd1c88; end: 108bd1e9f; -[SCSnapchattersHiddenSuggestionCoordinator _fetchHiddenSuggestionWithCompletionQueue:completionHandler:] */

void FUN_108bd1c88(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bfd70e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    uVar6 = *(undefined8 *)(param_1 + 0x10);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c11de00(uVar5);
    _objc_retainAutoreleasedReturnValue();
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_108bd1ea0;
    puStack_68 = &UNK_110ab64c0;
    _objc_copyWeak(auStack_50,auStack_48);
    _objc_retain(param_3);
    uStack_60 = param_3;
    _objc_retain(param_4);
    uStack_58 = param_4;
    func_0x00010bfa7700(uVar6);
    _objc_release(uVar5);
    _objc_release(uStack_58);
    _objc_release(uStack_60);
    _objc_destroyWeak(auStack_50);
  }
  else {
    uVar2 = param_1;
    func_0x00010c244c40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bfe14a0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x000107c31908();
    _objc_release(uVar3);
    _objc_release(uVar2);
    puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a8 = 0xc2000000;
    pcStack_a0 = FUN_108bd1f0c;
    puStack_98 = &UNK_11084aaa8;
    _objc_retain(param_4);
    uStack_88 = param_4;
    _objc_retain(uVar4);
    uStack_90 = uVar4;
    func_0x000107c27d8c(param_3,&puStack_b0);
    uVar2 = uVar4;
    func_0x00010bf529e0();
    if (0xfa < uVar2) {
      func_0x00010be8bfc0(param_1);
    }
    _objc_release(uStack_90);
    _objc_release(uStack_88);
    _objc_release(uVar4);
  }
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd1ea0; end: 108bd1f0b;  */

void FUN_108bd1ea0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x30;
  _objc_loadWeakRetained(param_1);
  func_0x00010be813e0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bd1f0c; end: 108bd1f1f;  */

void FUN_108bd1f0c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bd1f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108bd1f20; end: 108bd1fff; -[SCSnapchattersHiddenSuggestionCoordinator _insertHiddenSuggestedFriend:completionQueue:completionHandler:] */

void FUN_108bd1f20(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bf0a140();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  puVar2 = puVar1;
  lVar3 = param_4;
  puVar4 = param_5;
  func_0x00010be3c460(param_1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  _objc_retain(puVar2);
  _objc_retain(lVar3);
  _objc_retain(puVar4);
  lVar5 = *(long *)(puVar1 + 0x18);
  func_0x00010bfd70e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar5 == 0) {
    if ((lVar3 == 0) || (puVar4 == (undefined *)0x0)) goto LAB_108bd214c;
    puStack_c8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c0 = 0xc2000000;
    pcStack_b8 = FUN_108bd2180;
    puStack_b0 = &UNK_110849530;
    _objc_retain(puVar4);
    puStack_a8 = puVar4;
    func_0x000107c27d8c(lVar3,&puStack_c8);
    puVar1 = puStack_a8;
  }
  else {
    func_0x0001090216c8(*(undefined8 *)(puVar1 + 0x20));
    uVar6 = *(undefined8 *)(puVar1 + 8);
    _objc_retain(puVar2);
    _objc_retain(puVar4);
    func_0x00010c0f8500(uVar6);
    _objc_release(puVar4);
    puVar1 = puVar2;
  }
  _objc_release(puVar1);
LAB_108bd214c:
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(puVar2);
  return;
}



/* Entry: 108bd2000; end: 108bd217f; -[SCSnapchattersHiddenSuggestionCoordinator _insertHiddenSuggestedFriends:completionQueue:completionHandler:] */

void FUN_108bd2000(long param_1,undefined8 param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = *(long *)(param_1 + 0x18);
  func_0x00010bfd70e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 == 0) {
    if ((param_4 == 0) || (param_5 == 0)) goto LAB_108bd214c;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108bd2180;
    puStack_60 = &UNK_110849530;
    _objc_retain(param_5);
    lStack_58 = param_5;
    func_0x000107c27d8c(param_4,&puStack_78);
    lVar1 = lStack_58;
  }
  else {
    func_0x0001090216c8(*(undefined8 *)(param_1 + 0x20));
    uVar2 = *(undefined8 *)(param_1 + 8);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010c0f8500(uVar2);
    _objc_release(param_5);
    lVar1 = param_3;
  }
  _objc_release(lVar1);
LAB_108bd214c:
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd2180; end: 108bd2193;  */

void FUN_108bd2180(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bd2190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),1,0);
  return;
}



/* Entry: 108bd2194; end: 108bd22c7;  */

void FUN_108bd2194(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  uVar12 = 0;
  lVar10 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar10);
  lVar2 = lVar10;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar10);
      }
      uVar3 = *(undefined8 *)(lVar11 * 8);
      uVar12 = *(undefined8 *)(param_1 + 0x28);
      FUN_108bd22c8(uVar12);
      _objc_retainAutoreleasedReturnValue();
      func_0x000108c12518(param_2,uVar3);
      _objc_release(uVar3);
      lVar11 = lVar11 + 1;
    } while (lVar2 != lVar11);
    lVar2 = lVar10;
    func_0x00010bf52a60();
  }
  _objc_release(lVar10);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar9) {
    return;
  }
  ___stack_chk_fail();
  puVar4 = PTR_PTR_1126db058;
  _objc_retain();
  _objc_alloc(puVar4);
  uVar3 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010bf5b820(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c05c040(uVar12,puVar4);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar4);
  return;
}



/* Entry: 108bd22c8; end: 108bd23db;  */

void FUN_108bd22c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  puVar1 = PTR_PTR_1126db058;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010bf5b820(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c05c040(param_1,puVar1,param_3,uVar2,uVar3,uVar4,uVar5,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108bd23dc; end: 108bd23f3;  */

void FUN_108bd23dc(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bd23ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,0);
    return;
  }
  return;
}



/* Entry: 108bd23f4; end: 108bd250f; -[SCSnapchattersHiddenSuggestionCoordinator _removeHiddenSuggestedFriend:completionQueue:completionHandler:] */

void FUN_108bd23f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bfd70e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108bd2510;
    puStack_60 = &UNK_11085adb8;
    _objc_retain(param_3);
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    pcStack_90 = FUN_108bd2568;
    puStack_88 = &UNK_110842508;
    uStack_58 = param_3;
    _objc_retain(param_5);
    uStack_80 = param_5;
    func_0x00010c0f8500(uVar3,param_2,&puStack_78,param_4,&puStack_a0);
    _objc_release(uStack_80);
    _objc_release(uStack_58);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd2510; end: 108bd2567;  */

void FUN_108bd2510(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(param_2);
  FUN_108bd22c8(0,uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c125a0(param_2,uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bd2568; end: 108bd257f;  */

void FUN_108bd2568(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bd2578. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,0);
    return;
  }
  return;
}



/* Entry: 108bd2580; end: 108bd2aab; -[SCSnapchattersHiddenSuggestionCoordinator _processHiddenSuggestedFriendResponse:error:completionQueue:completionHandler:] */

void FUN_108bd2580(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  long lVar16;
  long lStack_1e8;
  undefined *puStack_1e0;
  undefined *puStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined *puStack_1c0;
  long lStack_1b8;
  undefined *puStack_1b0;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  undefined *puStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  code *pcStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  long *plStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  if ((param_4 == 0) || (param_5 != 0)) {
    puStack_1d8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1d0 = 0xc2000000;
    uStack_1c8 = 0x108bd2d44;
    puStack_1c0 = &UNK_11084aaa8;
    _objc_retain(param_7);
    puStack_1b0 = param_7;
    _objc_retain(param_5);
    lStack_1b8 = param_5;
    func_0x000107c27d8c(param_6,&puStack_1d8);
    _objc_release(lStack_1b8);
    puVar2 = puStack_1b0;
  }
  else {
    func_0x00010c1a5f60(*(undefined8 *)(param_2 + 0x18));
    func_0x0001090216c8(*(undefined8 *)(param_2 + 0x20));
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    lStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    plStack_140 = (long *)0x0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    lVar3 = param_4;
    func_0x00010c261ea0();
    _objc_retainAutoreleasedReturnValue();
    lStack_1e8 = lVar3;
    func_0x00010bf52a60();
    if (lStack_1e8 != 0) {
      lVar13 = *plStack_140;
      do {
        lVar16 = 0;
        do {
          if (*plStack_140 != lVar13) {
            _objc_enumerationMutation(lVar3);
          }
          lVar15 = *(long *)(lStack_148 + lVar16 * 8);
          lVar4 = lVar15;
          func_0x00010bf933a0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010c08fa60();
          _objc_release(lVar4);
          if (lVar5 == 0) {
            puStack_1e0 = (undefined *)0x0;
          }
          else {
            puStack_1e0 = PTR__OBJC_CLASS___NSData_1126ae778;
            _objc_alloc();
            lVar4 = lVar15;
            func_0x00010bf933a0(lVar15);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010bff6b20();
            _objc_release(lVar4);
          }
          puVar6 = PTR_PTR_1126b14b8;
          _objc_alloc(PTR_PTR_1126b14b8);
          lVar4 = lVar15;
          func_0x00010bf1acc0(lVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar15;
          func_0x00010bf1c0a0(lVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar15;
          func_0x00010bf1c000();
          _objc_retainAutoreleasedReturnValue();
          lVar8 = lVar15;
          func_0x00010bf1af00(lVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar9 = lVar15;
          func_0x00010bf1af40();
          _objc_retainAutoreleasedReturnValue();
          lVar10 = lVar9;
          func_0x00010bf147e0();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bff7be0(puVar6);
          _objc_release(lVar10);
          _objc_release(lVar9);
          _objc_release(lVar8);
          _objc_release(lVar7);
          _objc_release(lVar5);
          _objc_release(lVar4);
          lVar4 = lVar15;
          func_0x00010c2427e0(lVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x000100c38020();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          puVar11 = PTR_PTR_1126db058;
          _objc_alloc(PTR_PTR_1126db058);
          lVar4 = lVar15;
          func_0x00010c2923e0(lVar15);
          _objc_retainAutoreleasedReturnValue();
          lVar7 = lVar15;
          func_0x00010c294420(lVar15);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf85d80();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c05c040(param_1,puVar11);
          _objc_release(lVar15);
          _objc_release(lVar7);
          _objc_release(lVar4);
          func_0x00010befa120(puVar2);
          puVar12 = puVar11;
          FUN_108bd2aac(puVar11);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar1);
          _objc_release(puVar12);
          _objc_release(puVar11);
          _objc_release(lVar5);
          _objc_release(puVar6);
          _objc_release(puStack_1e0);
          lVar16 = lVar16 + 1;
        } while (lStack_1e8 != lVar16);
        lStack_1e8 = lVar3;
        func_0x00010bf52a60();
      } while (lStack_1e8 != 0);
    }
    _objc_release(lVar3);
    uVar14 = *(undefined8 *)(param_2 + 8);
    puStack_178 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_170 = 0xc2000000;
    pcStack_168 = FUN_108bd2c24;
    puStack_160 = &UNK_11085adb8;
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_108bd2d30;
    puStack_190 = &UNK_110858070;
    puStack_158 = puVar2;
    _objc_retain(param_7);
    puStack_188 = puVar1;
    puStack_180 = param_7;
    _objc_retain(puVar1);
    _objc_retain(puVar2);
    func_0x00010c0f8500(uVar14);
    _objc_release(puStack_188);
    _objc_release(puStack_180);
    _objc_release(puStack_158);
    _objc_release(puVar1);
  }
  _objc_release(puVar2);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  puVar2 = PTR_PTR_1126b15c8;
  _objc_retain();
  _objc_alloc(puVar2);
  lVar3 = param_4;
  func_0x00010c2923e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar13 = param_4;
  func_0x00010c294420(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar16 = param_4;
  func_0x00010bf85d80(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_4;
  func_0x00010bf1bae0(param_4);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = param_4;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar15 = param_4;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_4;
  func_0x00010bf5b820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010c05c0e0(puVar2);
  _objc_release(lVar7);
  _objc_release(lVar15);
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar16);
  _objc_release(lVar13);
  _objc_release(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 108bd2aac; end: 108bd2c23;  */

void FUN_108bd2aac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b15c8;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_1;
  func_0x00010c2923e0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_1;
  func_0x00010c294420(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_1;
  func_0x00010bf85d80(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_1;
  func_0x00010bf1bae0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_1;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_1;
  func_0x00010bf5b820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  func_0x00010c05c0e0(puVar1,param_2,uVar2,uVar3,uVar4,0,0,uVar5,0,0);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108bd2c24; end: 108bd2d2f;  */

void FUN_108bd2c24(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar5 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x000108c12518(param_2,*(undefined8 *)(lVar5 * 8));
      lVar5 = lVar5 + 1;
    } while (lVar2 != lVar5);
    lVar2 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000108bd2d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_2 + 0x28) + 0x10))
            (*(long *)(param_2 + 0x28),*(undefined8 *)(param_2 + 0x20),0);
  return;
}



/* Entry: 108bd2d30; end: 108bd2d57;  */

void FUN_108bd2d30(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bd2d40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108bd2d58; end: 108bd2d7b; -[SCSnapchattersHiddenSuggestionCoordinator _removeExpiredHiddenSuggestedFriend] */

void FUN_108bd2d58(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0f8510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_performChanges_completionQueue_c_11261bb60,
             &PTR___NSConcreteGlobalBlock_110ab6520,0,0);
  return;
}



/* Entry: 108bd2d7c; end: 108bd2e57; -[SCSnapchattersHiddenSuggestionCoordinator _cacheHideRequestWithUserId:completionQueue:completionHandler:] */

void FUN_108bd2d7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bfe2e00();
  _objc_release(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108bd2e58;
  puStack_40 = &UNK_110849530;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x000107c27d8c(param_4,&puStack_58);
  _objc_release(param_4);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 108bd2e58; end: 108bd2e6f;  */

void FUN_108bd2e58(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bd2e68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 108bd2e70; end: 108bd2f47; -[SCSnapchattersHiddenSuggestionCoordinator _fetchCachedHiddenSuggestionsWithCompletionQueue:completionHandler:] */

void FUN_108bd2e70(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfe1460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108bd2f48;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = uVar1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x000107c27d8c(param_3,&puStack_60);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 108bd2f48; end: 108bd2f67;  */

void FUN_108bd2f48(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bd2f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20),0);
    return;
  }
  return;
}



/* Entry: 108bd2f68; end: 108bd303f; -[SCSnapchattersHiddenSuggestionCoordinator _fetchLastHiddenSuggestionPendingFeedbackWithCompletionQueue:completionHandler:] */

void FUN_108bd2f68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c292460();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108bd3040;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = uVar1;
  uStack_38 = param_4;
  _objc_retain(param_4);
  func_0x000107c27d8c(param_3,&puStack_60);
  _objc_release(param_3);
  _objc_release(uStack_38);
  _objc_release(param_4);
  _objc_release(uVar1);
  return;
}



/* Entry: 108bd3040; end: 108bd305f;  */

void FUN_108bd3040(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bd3058. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_1 + 0x20),0);
    return;
  }
  return;
}



/* Entry: 108bd3060; end: 108bd313b; -[SCSnapchattersHiddenSuggestionCoordinator _undoCacheHideRequestWithUserId:completionQueue:completionHandler:] */

void FUN_108bd3060(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c27fc60();
  _objc_release(param_3);
  _objc_release(uVar1);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108bd313c;
  puStack_40 = &UNK_110849530;
  uStack_38 = param_5;
  _objc_retain(param_5);
  func_0x000107c27d8c(param_4,&puStack_58);
  _objc_release(param_4);
  _objc_release(uStack_38);
  _objc_release(param_5);
  return;
}



/* Entry: 108bd313c; end: 108bd3153;  */

void FUN_108bd313c(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bd314c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 108bd3154; end: 108bd323f; -[SCSnapchattersHiddenSuggestionCoordinator _updateFeedbackIndex:forUser:completionQueue:completionHandler:] */

void FUN_108bd3154(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_6);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c19b280();
  _objc_release(param_4);
  _objc_release(uVar1);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_108bd3240;
  puStack_50 = &UNK_110849530;
  uStack_48 = param_6;
  _objc_retain(param_6);
  func_0x000107c27d8c(param_5,&puStack_68);
  _objc_release(param_5);
  _objc_release(uStack_48);
  _objc_release(param_6);
  return;
}



/* Entry: 108bd3240; end: 108bd3257;  */

void FUN_108bd3240(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bd3250. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,1);
    return;
  }
  return;
}



/* Entry: 108bd3258; end: 108bd328b; -[SCSnapchattersHiddenSuggestionCoordinator _clearCache] */

void FUN_108bd3258(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf3a660();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bd328c; end: 108bd3303; -[SCSnapchattersHiddenSuggestionCoordinator .cxx_destruct] */

void FUN_108bd328c(long param_1)

{
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



/* Entry: 108bd3304; end: 108bd330b;  */

void FUN_108bd3304(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = PTR_PTR_1126b15c8;
  _objc_retain();
  _objc_alloc(puVar1);
  uVar2 = param_2;
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_2;
  func_0x00010c294420(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_2;
  func_0x00010bf85d80(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_2;
  func_0x00010bf1bae0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = param_2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = param_2;
  func_0x00010c294420();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = param_2;
  func_0x00010bf5b820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  func_0x00010c05c0e0(puVar1);
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 108bd330c; end: 108bd344b;  */

undefined ** FUN_108bd330c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined **ppuVar6;
  long lVar7;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuVar4 = &PTR___NSConcreteGlobalBlock_110ab6580;
  func_0x000107c3190c(param_2,&PTR___NSConcreteGlobalBlock_110ab6580);
  _objc_retain(param_1);
  lVar2 = param_1;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  if (lVar2 == 0) {
    ppuVar6 = (undefined **)0x0;
  }
  else {
    ppuVar6 = (undefined **)0x0;
    do {
      lVar7 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_1);
        }
        uVar3 = param_2;
        func_0x00010bf4b900(param_2);
        ppuVar6 = (undefined **)((long)ppuVar6 + (ulong)((uint)uVar3 ^ 1));
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_1;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_1);
  _objc_release(param_2);
  _objc_release(param_1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    _objc_retain(ppuVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar4);
    return ppuVar4;
  }
  return ppuVar6;
}



/* Entry: 108bd344c; end: 108bd3473;  */

void FUN_108bd344c(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 108bd3474; end: 108bd35b7; -[SCSnapchattersSuggestRequestCoordinator fetchSuggestionWithSuggestRequest:completionQueue:completionHandler:] */

void FUN_108bd3474(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _CACurrentMediaTime();
  _objc_initWeak(auStack_58,param_2);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_4);
  uStack_60 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_destroyWeak(auStack_58);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108bd35b8; end: 108bd35f3;  */

void FUN_108bd35b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010be14d20(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bd35f4; end: 108bd35f7; -[SCSnapchattersSuggestRequestCoordinator hideSuggestionWithSuggestRequest:completionQueue:completionHandler:] */

void FUN_108bd35f4(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be35e30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__hideSuggestionWithSuggestReques_11256b128);
  return;
}



/* Entry: 108bd35f8; end: 108bd3727; -[SCSnapchattersSuggestRequestCoordinator hideAllSuggestionWithSuggestRequest:completionQueue:completionHandler:] */

void FUN_108bd35f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd3728; end: 108bd375f;  */

void FUN_108bd3728(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be35360();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bd3760; end: 108bd388f; -[SCSnapchattersSuggestRequestCoordinator viewSuggestionWithSuggestRequest:completionQueue:completionHandler:] */

void FUN_108bd3760(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd3890; end: 108bd38c7;  */

void FUN_108bd3890(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee9d60();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bd38c8; end: 108bd39f7; -[SCSnapchattersSuggestRequestCoordinator hideSuggestedSnapchatter:completionQueue:completionHandler:] */

void FUN_108bd38c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd39f8; end: 108bd3a33;  */

void FUN_108bd39f8(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be81400();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bd3a34; end: 108bd3c4b; -[SCSnapchattersSuggestRequestCoordinator _fetchSuggestionWithSuggestRequest:fetchStartTime:completionQueue:completionHandler:] */

void FUN_108bd3a34(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [8];
  undefined8 uStack_80;
  undefined1 auStack_78 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_6;
  _objc_retain();
  func_0x000107c31920();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_4;
  func_0x00010bf0a6a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_78,param_2);
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010c07aa00(uVar2);
  func_0x00010c076fa0(uVar2);
  func_0x00010c27c360(uVar2);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_88,auStack_78);
  _objc_retain(uVar2);
  uStack_80 = param_1;
  _objc_retain(uVar1);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_4);
  func_0x00010bfaaac0(uVar4);
  _objc_release(uVar3);
  _objc_release(param_4);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_88);
  _objc_destroyWeak(auStack_78);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 108bd3c4c; end: 108bd3d03;  */

void FUN_108bd3c4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  lVar1 = param_1 + 0x48;
  _objc_loadWeakRetained(lVar1);
  func_0x00010c07aa00(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c27c260(*(undefined8 *)(param_1 + 0x20));
  func_0x00010c27c360(*(undefined8 *)(param_1 + 0x20));
  func_0x00010be81180(*(undefined8 *)(param_1 + 0x50),lVar1);
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bd3d04; end: 108bd4237; -[SCSnapchattersSuggestRequestCoordinator _processFetchSuggestionWithSuggestedFriendResponse:isPrefetchForNotification:triggerSourceType:triggerType:startTime:error:fetchRequestId:completionQueue:completionHandler:] */

void FUN_108bd3d04(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,long param_10,long param_11)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  code *pcStack_1c0;
  undefined *puStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  code *pcStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_168;
  long lStack_160;
  undefined8 *puStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  undefined *puStack_138;
  long lStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined *puStack_118;
  undefined8 *puStack_110;
  undefined8 *puStack_108;
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [8];
  undefined8 uStack_d8;
  undefined8 *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  _objc_retain(param_4);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_10);
  _objc_retain(param_11);
  if (param_8 == 0) {
    lVar10 = param_4;
    func_0x00010c261ea0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar10 == 0) {
      uVar1 = *(undefined8 *)(param_2 + 0x40);
      func_0x00010c269d40(uVar1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ab220();
      _objc_release(uVar1);
    }
    if (param_4 == 0) goto LAB_108bd3d74;
    lVar10 = param_4;
    func_0x00010bf156c0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16ee80(*(undefined8 *)(param_2 + 0x38));
    _objc_release(lVar10);
    lVar10 = param_4;
    func_0x00010bf156a0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16ee60(*(undefined8 *)(param_2 + 0x38));
    _objc_release(lVar10);
    lVar10 = param_4;
    func_0x00010bf156e0(param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16eea0(*(undefined8 *)(param_2 + 0x38));
    _objc_release(lVar10);
    lVar2 = *(long *)(param_2 + 0x30);
    _objc_retain();
    uVar1 = *(undefined8 *)(param_2 + 0x28);
    _objc_retain();
    lVar8 = *(long *)(param_2 + 0x28);
    _objc_retain(lVar8);
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf71e20();
    _objc_retainAutoreleasedReturnValue();
    lVar10 = 0;
    do {
      lVar4 = lVar8;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar5 = lVar4;
      func_0x00010bf86620();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      if (lVar5 != 0) {
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c1d0640(puVar3);
        _objc_release(puVar6);
      }
      _objc_release(lVar5);
      lVar10 = lVar10 + 1;
    } while (lVar10 != 9);
    _objc_release(lVar8);
    puStack_a0 = &uStack_a8;
    uStack_a8 = 0;
    uStack_98 = 0x3032000000;
    pcStack_90 = FUN_108bd4238;
    uStack_88 = 0x108bd4248;
    uStack_80 = 0;
    uStack_d8 = 0;
    uStack_c8 = 0x3032000000;
    pcStack_c0 = FUN_108bd4238;
    uStack_b8 = 0x108bd4248;
    uStack_b0 = 0;
    puStack_d0 = &uStack_d8;
    _objc_initWeak(auStack_e0,param_2);
    uVar11 = *(undefined8 *)(param_2 + 0x38);
    _objc_retain(uVar11);
    uVar9 = *(undefined8 *)(param_2 + 0x58);
    _objc_retain(uVar9);
    puVar6 = PTR___NSConcreteStackBlock_11034bd00;
    uVar7 = *(undefined8 *)(param_2 + 8);
    puStack_150 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_148 = 0xc2000000;
    pcStack_140 = FUN_108bd4250;
    puStack_138 = &UNK_110ab65d0;
    _objc_retain(param_4);
    lStack_130 = param_4;
    puStack_110 = &uStack_a8;
    _objc_retain(uVar9);
    uStack_128 = uVar9;
    puStack_108 = &uStack_d8;
    _objc_retain(lVar2);
    lStack_120 = lVar2;
    _objc_copyWeak(auStack_100,auStack_e0);
    _objc_retain(puVar3);
    puStack_1a0 = puVar6;
    uStack_198 = 0xc2000000;
    pcStack_190 = FUN_108bd4434;
    puStack_188 = &UNK_110ab6600;
    puStack_118 = puVar3;
    uStack_f8 = param_6;
    uStack_f0 = param_7;
    uStack_e8 = param_1;
    _objc_retain(uVar11);
    uStack_180 = uVar11;
    _objc_retain(param_9);
    puStack_158 = &uStack_a8;
    uStack_178 = param_9;
    _objc_retain(uVar1);
    uStack_170 = uVar1;
    _objc_retain(param_11);
    lStack_160 = param_11;
    _objc_retain(param_4);
    lStack_168 = param_4;
    func_0x00010c0f8500(uVar7);
    _objc_release(lStack_168);
    _objc_release(lStack_160);
    _objc_release(uStack_170);
    _objc_release(uStack_178);
    _objc_release(uStack_180);
    _objc_release(puStack_118);
    _objc_destroyWeak(auStack_100);
    _objc_release(lStack_120);
    _objc_release(uStack_128);
    _objc_release(lStack_130);
    _objc_release(uVar9);
    _objc_release(uVar11);
    _objc_destroyWeak(auStack_e0);
    __Block_object_dispose(&uStack_d8,8);
    _objc_release(uStack_b0);
    __Block_object_dispose(&uStack_a8,8);
    _objc_release(uStack_80);
    _objc_release(puVar3);
    _objc_release(uVar1);
  }
  else {
LAB_108bd3d74:
    func_0x00010bdffaa0(param_1,param_2);
    if ((param_10 == 0) || (param_11 == 0)) goto LAB_108bd41ac;
    puStack_1d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1c8 = 0xc2000000;
    pcStack_1c0 = FUN_108bd44b8;
    puStack_1b8 = &UNK_11084aaa8;
    _objc_retain(param_11);
    lStack_1a8 = param_11;
    _objc_retain(param_8);
    lStack_1b0 = param_8;
    func_0x000107c27d8c(param_10,&puStack_1d0);
    _objc_release(lStack_1b0);
    lVar2 = lStack_1a8;
  }
  _objc_release(lVar2);
LAB_108bd41ac:
  func_0x00010be596e0(param_2);
  _objc_release(param_11);
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_4);
  return;
}



/* Entry: 108bd4238; end: 108bd424f;  */

void FUN_108bd4238(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108bd4250; end: 108bd4433;  */

void FUN_108bd4250(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x20);
  func_0x00010c261ea0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    lVar1 = param_2;
    func_0x000108c0b050(param_2,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lVar8 = *(long *)(*(long *)(param_1 + 0x40) + 8);
    uVar6 = *(undefined8 *)(lVar8 + 0x28);
    *(long *)(lVar8 + 0x28) = lVar1;
    _objc_release(uVar6);
    lVar2 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar1 = lVar2;
    func_0x00010bf52a60();
    lVar8 = lRam0000000000000000;
    while (lVar1 != 0) {
      do {
        if (lRam0000000000000000 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        lVar1 = lVar1 + -1;
      } while (lVar1 != 0);
      lVar1 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
  }
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf5e5e0(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0;
  func_0x000108c10994(0,uVar6);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(*(long *)(param_1 + 0x48) + 8);
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = uVar3;
  _objc_release(uVar7);
  _objc_release(uVar6);
  iVar4 = (int)*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28);
  func_0x000100c40f54(param_2);
  lVar1 = param_1 + 0x50;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bdffaa0(*(undefined8 *)(param_1 + 0x68));
  _objc_release(lVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  if (iVar4 != 0) {
    func_0x00010c20fb40(*(undefined8 *)(param_2 + 0x20));
  }
  if (*(long *)(*(long *)(*(long *)(param_2 + 0x48) + 8) + 0x28) != 0) {
    uVar6 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010c269d40(uVar6);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ff60();
    _objc_release(uVar6);
  }
  lVar1 = *(long *)(param_2 + 0x40);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bd44a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,*(undefined8 *)(param_2 + 0x38),0);
    return;
  }
  return;
}



/* Entry: 108bd4434; end: 108bd44b7;  */

void FUN_108bd4434(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  if ((int)param_2 != 0) {
    func_0x00010c20fb40(*(undefined8 *)(param_1 + 0x20),param_2,*(undefined8 *)(param_1 + 0x28));
  }
  if (*(long *)(*(long *)(*(long *)(param_1 + 0x48) + 8) + 0x28) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    func_0x00010c269d40(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c18ff60();
    _objc_release(uVar1);
  }
  lVar2 = *(long *)(param_1 + 0x40);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bd44a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,*(undefined8 *)(param_1 + 0x38),0);
    return;
  }
  return;
}



/* Entry: 108bd44b8; end: 108bd44cb;  */

void FUN_108bd44b8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bd44c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),0,*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108bd44cc; end: 108bd45ef; -[SCSnapchattersSuggestRequestCoordinator _hideSuggestionWithSuggestRequest:completionQueue:completionHandler:] */

void FUN_108bd44cc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010bf0a780(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = uVar1;
  func_0x00010c262220();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar1;
  func_0x00010c0fdba0(uVar1);
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108bd45f0;
  puStack_68 = &UNK_1108538b0;
  uStack_60 = param_3;
  uStack_58 = param_5;
  _objc_retain(param_3);
  _objc_retain(param_5);
  func_0x00010bfe2a20(uVar4,param_2,uVar2,uVar3,param_4,&puStack_80);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_release(uStack_60);
  _objc_release(uStack_58);
  _objc_release(param_3);
  _objc_release(param_5);
  _objc_release(uVar1);
  return;
}



/* Entry: 108bd45f0; end: 108bd460b;  */

void FUN_108bd45f0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bd4604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2 != 0);
    return;
  }
  return;
}



/* Entry: 108bd460c; end: 108bd478b; -[SCSnapchattersSuggestRequestCoordinator _processHideSuggestedSnapchatter:error:completionQueue:completionHandler:] */

void FUN_108bd460c(long param_1,undefined8 param_2,long param_3,long param_4,long param_5,
                  long param_6)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  long lStack_b0;
  long lStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  long lStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (param_4 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 8);
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_108bd478c;
    puStack_60 = &UNK_11085adb8;
    _objc_retain(param_3);
    puStack_a0 = puVar1;
    uStack_98 = 0xc2000000;
    uStack_90 = 0x108bd479c;
    puStack_88 = &UNK_110842508;
    lStack_58 = param_3;
    _objc_retain(param_6);
    lStack_80 = param_6;
    func_0x00010c0f8500(uVar3);
    _objc_release(lStack_80);
    lVar2 = lStack_58;
  }
  else {
    if ((param_5 == 0) || (param_6 == 0)) goto LAB_108bd4750;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    uStack_c0 = 0x108bd47b4;
    puStack_b8 = &UNK_11084aaa8;
    _objc_retain(param_6);
    lStack_a8 = param_6;
    _objc_retain(param_4);
    lStack_b0 = param_4;
    func_0x000107c27d8c(param_5,&puStack_d0);
    _objc_release(lStack_b0);
    lVar2 = lStack_a8;
  }
  _objc_release(lVar2);
LAB_108bd4750:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd478c; end: 108bd47c7;  */

void FUN_108bd478c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x20);
  _objc_retain();
  _objc_retain(lVar4);
  puVar1 = PTR_PTR_1126c2820;
  func_0x000100c36048(PTR_PTR_1126c2820,lVar4);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar1;
  if (puVar1 == (undefined *)0x0) goto code_r0x000108c2046c;
  lVar2 = lVar4;
  func_0x00010c262240();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar2 == 0) goto code_r0x000108c2046c;
  lVar2 = lVar4;
  func_0x00010bfb8280();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    lVar2 = lVar4;
    func_0x00010bfebe20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar2 != 0) goto code_r0x000108c20444;
    lVar2 = lVar4;
    func_0x00010bf4a3a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar2 != 0) goto code_r0x000108c20448;
    puVar3 = PTR_PTR_1126c2820;
    func_0x000108c303f4(PTR_PTR_1126c2820,lVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  else {
code_r0x000108c20444:
    _objc_release();
code_r0x000108c20448:
    _objc_setProperty_nonatomic_copy(puVar1);
  }
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
code_r0x000108c2046c:
  _objc_release(puVar3);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bd47c8; end: 108bd48fb; -[SCSnapchattersSuggestRequestCoordinator _hideAllSuggestionWithSuggestRequest:completionQueue:completionHandler:] */

void FUN_108bd47c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf0a7a0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = uVar1;
  func_0x00010c0fdba0();
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c11de00(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_108bd48fc;
  puStack_70 = &UNK_110864758;
  uStack_68 = param_3;
  uStack_60 = param_4;
  uStack_58 = param_5;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010bfe17a0(uVar4,param_2,uVar2,uVar3,&puStack_88);
  _objc_release(uVar3);
  _objc_release(uStack_58);
  _objc_release(uStack_60);
  _objc_release(uStack_68);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar1);
  return;
}



/* Entry: 108bd48fc; end: 108bd49a3;  */

void FUN_108bd48fc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  long lStack_40;
  undefined1 uStack_38;
  
  _objc_retain(param_2);
  lVar1 = *(long *)(param_1 + 0x28);
  if ((lVar1 != 0) && (lVar2 = *(long *)(param_1 + 0x30), lVar2 != 0)) {
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0xc2000000;
    pcStack_50 = FUN_108bd49a4;
    puStack_48 = &UNK_11084a9b8;
    _objc_retain(lVar2);
    lStack_40 = lVar2;
    uStack_38 = param_2 == 0;
    func_0x000107c27d8c(lVar1,&puStack_60);
    _objc_release(lStack_40);
  }
  _objc_release(param_2);
  return;
}



/* Entry: 108bd49a4; end: 108bd49bb;  */

void FUN_108bd49a4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108bd49b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),*(undefined1 *)(param_1 + 0x28),0);
  return;
}



/* Entry: 108bd49bc; end: 108bd4ab3; -[SCSnapchattersSuggestRequestCoordinator _viewSuggestionWithSuggestRequest:completionQueue:completionHandler:] */

void FUN_108bd49bc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_5);
  _objc_retain(param_4);
  func_0x00010bf0ab00();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108bd4ab4;
  puStack_40 = &UNK_11085adb8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  pcStack_70 = FUN_108bd4be0;
  puStack_68 = &UNK_110842508;
  uStack_60 = param_5;
  uStack_38 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,param_4,&puStack_80);
  _objc_release(param_4);
  _objc_release(uStack_60);
  _objc_release(uStack_38);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd4ab4; end: 108bd4bdf;  */

void FUN_108bd4ab4(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x00010c262280();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar3 != 0) {
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar5 = *(undefined8 *)(lVar6 * 8);
      func_0x000108c1f3f8(param_2,uVar5,1);
      func_0x000108c1f5e4(param_2,uVar5);
      lVar6 = lVar6 + 1;
    } while (lVar3 != lVar6);
    lVar3 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
    return;
  }
  ___stack_chk_fail();
  if (*(long *)(param_2 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bd4bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_2 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 108bd4be0; end: 108bd4bf7;  */

void FUN_108bd4be0(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000108bd4bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,0);
    return;
  }
  return;
}



/* Entry: 108bd4bf8; end: 108bd4ca3; -[SCSnapchattersSuggestRequestCoordinator _logSuggestionSyncGapPeriod] */

void FUN_108bd4bf8(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  double dVar4;
  
  lVar1 = *(long *)(param_2 + 0x38);
  func_0x00010c088b40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf5e5e0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 != 0) {
    func_0x00010c26f320(uVar2);
    dVar4 = param_1;
    func_0x00010c26f320(lVar1);
    uVar3 = *(undefined8 *)(param_2 + 0x40);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0b1540(param_1 - dVar4);
    _objc_release(uVar3);
  }
  func_0x00010c1b7c60(*(undefined8 *)(param_2 + 0x38),param_3,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 108bd4ca4; end: 108bd5147; -[SCSnapchattersSuggestRequestCoordinator _didReceiveSuggestionMap:previousSuggestionMap:deltaSyncMetadata:purgedBeforeImpressedCount:triggerSourceType:triggerType:startTime:error:] */

void FUN_108bd4ca4(undefined8 param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  undefined8 in_stack_00000000;
  undefined *puStack_228;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(in_stack_00000000);
  dVar12 = 0.0;
  lVar2 = param_4;
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar9 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(lVar2);
      }
      uVar3 = *(undefined8 *)(lVar11 * 8);
      func_0x00010c292720(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf529e0();
      _objc_release(uVar3);
      lVar11 = lVar11 + 1;
    } while (lVar9 != lVar11);
    lVar9 = lVar2;
    func_0x00010bf52a60();
  }
  _objc_release(lVar2);
  _objc_retain(param_5);
  _objc_retain(param_4);
  if (param_4 == 0 && param_5 == 0) {
    puStack_228 = (undefined *)0x0;
  }
  else {
    puStack_228 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_opt_new();
    dVar12 = 0.0;
    lVar2 = param_4;
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    lVar9 = lVar2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar9 != 0) {
      lVar11 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(lVar2);
        }
        lVar4 = param_5;
        func_0x00010c0e00e0();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = param_4;
        func_0x00010c0e00e0(param_4);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c067ec0();
        if (lVar4 == 0) {
          lVar7 = lVar5;
          func_0x00010c292720(lVar5);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010bf529e0();
          _objc_release(lVar7);
        }
        else {
          lVar7 = lVar4;
          func_0x00010c292720(lVar4);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar5;
          func_0x00010c292720(lVar5);
          _objc_retainAutoreleasedReturnValue();
          FUN_108bd330c(lVar7,lVar6);
          _objc_release(lVar6);
          _objc_release(lVar7);
          lVar7 = lVar5;
          func_0x00010c292720(lVar5);
          _objc_retainAutoreleasedReturnValue();
          lVar6 = lVar4;
          func_0x00010c292720(lVar4);
          _objc_retainAutoreleasedReturnValue();
          FUN_108bd330c(lVar7,lVar6);
          _objc_release(lVar6);
          _objc_release(lVar7);
        }
        puVar8 = PTR_PTR_1126db060;
        _objc_alloc(PTR_PTR_1126db060);
        func_0x00010c02c800();
        func_0x00010befa120(puStack_228);
        _objc_release(puVar8);
        _objc_release(lVar5);
        _objc_release(lVar4);
        lVar11 = lVar11 + 1;
      } while (lVar9 != lVar11);
      lVar9 = lVar2;
      func_0x00010bf52a60();
    }
    _objc_release(lVar2);
  }
  _objc_release(param_4);
  _objc_release(param_5);
  lVar9 = *(long *)(param_2 + 0x38);
  func_0x00010c088b40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  func_0x00010bf5e5e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  if (lVar9 == 0) {
    dVar14 = 0.0;
  }
  else {
    func_0x00010c26f320(uVar3);
    dVar13 = dVar12;
    func_0x00010c26f320(lVar9);
    dVar14 = dVar12 - dVar13;
    dVar12 = dVar13;
  }
  _CACurrentMediaTime();
  puVar8 = PTR_PTR_1126db068;
  _objc_alloc();
  func_0x00010c0128a0(param_1,param_1,dVar12,dVar12,dVar14);
  func_0x00010c0d9840(*(undefined8 *)(param_2 + 0x48));
  _objc_release(puVar8);
  _objc_release(uVar3);
  _objc_release(lVar9);
  _objc_release(puStack_228);
  _objc_release(in_stack_00000000);
  _objc_release(param_5);
  _objc_release(param_4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    _objc_storeStrong(param_4 + 0x58,0);
    _objc_storeStrong(param_4 + 0x50,0);
    _objc_storeStrong(param_4 + 0x48,0);
    _objc_storeStrong(param_4 + 0x40,0);
    _objc_storeStrong(param_4 + 0x38,0);
    _objc_storeStrong(param_4 + 0x30,0);
    _objc_storeStrong(param_4 + 0x28,0);
    _objc_storeStrong(param_4 + 0x20,0);
    _objc_storeStrong(param_4 + 0x18,0);
    _objc_storeStrong(param_4 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_storeStrong_11034d330)(param_4 + 8,0);
    return;
  }
  return;
}



/* Entry: 108bd5148; end: 108bd51e3; -[SCSnapchattersSuggestRequestCoordinator .cxx_destruct] */

void FUN_108bd5148(long param_1)

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
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bd51e4; end: 108bd5313; -[SCSnapchattersUpdateRequestCoordinator setStoryPrivacyWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bd51e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd5314; end: 108bd534b;  */

void FUN_108bd5314(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010bea8060();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bd534c; end: 108bd54f3; -[SCSnapchattersUpdateRequestCoordinator _setStoryPrivacyWithUpdateRequest:completionQueue:completionHandler:] */

void FUN_108bd534c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  uVar1 = param_3;
  func_0x00010bf0a980(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  uVar4 = uVar1;
  func_0x00010c292720();
  _objc_retainAutoreleasedReturnValue();
  func_0x000108c1b05c(uVar3,uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010bf0a540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar4);
  _objc_initWeak(auStack_58,param_1);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  _objc_copyWeak(auStack_60,auStack_58);
  _objc_retain(uVar2);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f7fc0(uVar4);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd54f4; end: 108bd552b;  */

void FUN_108bd54f4(long param_1)

{
  param_1 = param_1 + 0x38;
  _objc_loadWeakRetained(param_1);
  func_0x00010be82560();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108bd552c; end: 108bd5607; -[SCSnapchattersUpdateRequestCoordinator _processStoryPrivacyForSnapchatters:completionQueue:completionHandler:] */

void FUN_108bd552c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  uVar1 = *(undefined8 *)(param_1 + 8);
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_108bd5608;
  puStack_40 = &UNK_11085adb8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0xc2000000;
  uStack_70 = 0x108bd5618;
  puStack_68 = &UNK_110842508;
  uStack_60 = param_5;
  uStack_38 = param_3;
  _objc_retain(param_5);
  _objc_retain(param_3);
  func_0x00010c0f8500(uVar1,param_2,&puStack_58,param_4,&puStack_80);
  _objc_release(uStack_60);
  _objc_release(uStack_38);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd5608; end: 108bd562f;  */

void FUN_108bd5608(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)(param_1 + 0x20);
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar4);
  _objc_retain(lVar4);
  lVar1 = lVar4;
  func_0x00010bf52a60();
  lVar5 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar7 = 0;
    do {
      if (lRam0000000000000000 != lVar5) {
        _objc_enumerationMutation(lVar4);
      }
      func_0x000108c1e164(param_2,*(undefined8 *)(lVar7 * 8),0);
      lVar7 = lVar7 + 1;
    } while (lVar1 != lVar7);
    lVar1 = lVar4;
    func_0x00010bf52a60();
  }
  _objc_release(lVar4);
  lVar2 = lVar4;
  func_0x000107c31908(lVar4,&PTR___NSConcreteGlobalBlock_110ab87f0);
  lVar3 = param_2;
  lVar5 = lVar2;
  func_0x000108c1b5c0(param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar1 = lVar3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar1 != 0) {
    lVar8 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(lVar3);
      }
      lVar5 = *(long *)(lVar8 * 8);
      func_0x000108c1e164(param_2,lVar5,1);
      lVar8 = lVar8 + 1;
    } while (lVar1 != lVar8);
    lVar1 = lVar3;
    func_0x00010bf52a60();
  }
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar4);
  lVar1 = param_2;
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar6) {
    return;
  }
  ___stack_chk_fail();
  _objc_release(lVar3);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar4);
  _objc_release(param_2);
  __Unwind_Resume(lVar1);
  func_0x00010c2923e0(lVar5);
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 108bd5630; end: 108bd568f; -[SCSnapchattersUpdateRequestCoordinator .cxx_destruct] */

void FUN_108bd5630(long param_1)

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



/* Entry: 108bd5690; end: 108bd56bf; -[SCFriendStatusManagerCreatorDefault .cxx_destruct] */

void FUN_108bd5690(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 108bd56c0; end: 108bd574f; -[SCSnapchatterFriendStatusManagerDefault addSnapchattersToTrack:] */

void FUN_108bd56c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108bd5750;
  puStack_48 = &UNK_110841f80;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  func_0x00010c0f9420(uVar1,param_2,&puStack_60);
  _objc_release(uStack_40);
  _objc_release(param_3);
  return;
}



/* Entry: 108bd5750; end: 108bd5a73;  */

void FUN_108bd5750(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puStack_1a8;
  undefined8 uStack_1a0;
  code *pcStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined1 *puStack_180;
  code *pcStack_178;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long lStack_158;
  long *plStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = *(long *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
  func_0x00010bf002e0(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(lVar4);
  lVar2 = lVar4;
  func_0x00010c0b8600(lVar4,param_2,&PTR___NSConcreteGlobalBlock_110ab6660);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf0a0c0(puVar3,param_2,lVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar2);
  func_0x00010c12d500(puVar3,param_2,uVar1);
  puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_110 = 0xc2000000;
  pcStack_108 = FUN_108bd6e90;
  puStack_100 = &UNK_11085a548;
  puStack_f8 = puVar3;
  _objc_retain(puVar3);
  lVar2 = lVar4;
  func_0x00010bfaea20(lVar4,param_2,&puStack_118);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(puStack_f8);
  _objc_release(puVar3);
  _objc_release(uVar1);
  lVar4 = lVar2;
  func_0x00010bf529e0();
  if (lVar4 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    func_0x00010bf72020(PTR__OBJC_CLASS___NSMutableDictionary_1126ae878,param_2,
                        *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28));
    _objc_retainAutoreleasedReturnValue();
    lStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    _objc_retain(lVar2);
    lVar4 = lVar2;
    func_0x00010bf52a60(lVar2,param_2,&uStack_160,auStack_f0,0x10);
    if (lVar4 == 0) {
      uStack_168 = 0x10;
      puVar8 = (undefined *)0x0;
    }
    else {
      puVar8 = (undefined *)0x0;
      lVar9 = *plStack_150;
      uStack_168 = 0x10;
      do {
        lVar7 = 0;
        puVar6 = puVar8;
        do {
          if (*plStack_150 != lVar9) {
            _objc_enumerationMutation(lVar2);
          }
          puVar8 = *(undefined **)(lStack_158 + lVar7 * 8);
          uVar1 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010bdc6da0(uVar1,param_2,puVar8);
          puVar5 = puVar8;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release();
          if (puVar5 == (undefined *)0x0) {
            func_0x00010c294420();
            _objc_retainAutoreleasedReturnValue();
            uStack_168 = uVar1;
          }
          else {
            puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
            func_0x00010c0df780(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,uVar1);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c2923e0(puVar8);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c1d0560(puVar3,param_2,puVar5,puVar8);
            _objc_release(puVar8);
            puVar8 = puVar6;
            puVar6 = puVar5;
          }
          _objc_release(puVar6);
          lVar7 = lVar7 + 1;
          puVar6 = puVar8;
        } while (lVar4 != lVar7);
        lVar4 = lVar2;
        func_0x00010bf52a60(lVar2,param_2,&uStack_160,auStack_f0,0x10);
      } while (lVar4 != 0);
    }
    _objc_release(lVar2);
    puVar6 = puVar3;
    func_0x00010bf51e00();
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x28);
    *(undefined **)(*(long *)(param_1 + 0x28) + 0x28) = puVar6;
    _objc_release(uVar1);
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x30);
    *(undefined **)(*(long *)(param_1 + 0x28) + 0x30) = puVar8;
    _objc_retain(puVar8);
    _objc_release(uVar1);
    *(undefined8 *)(*(long *)(param_1 + 0x28) + 0x38) = uStack_168;
    func_0x00010be03d00(*(undefined8 *)(param_1 + 0x28));
    _objc_release(puVar8);
    _objc_release(puVar3);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_178 = FUN_108bd5a74;
    puStack_1a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_1a0 = 0xc2000000;
    pcStack_198 = FUN_108bd5acc;
    puStack_190 = &UNK_110842e18;
    lStack_188 = lVar2;
    puStack_180 = &stack0xfffffffffffffff0;
    func_0x00010c0f8240(*(undefined8 *)(lVar2 + 0x10),param_2,&puStack_1a8);
    return;
  }
  return;
}



/* Entry: 108bd5a74; end: 108bd5acb; -[SCSnapchatterFriendStatusManagerDefault removeAllTrackedSnapchatters] */

void FUN_108bd5a74(long param_1,undefined8 param_2)

{
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  long lStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108bd5acc;
  puStack_20 = &UNK_110842e18;
  lStack_18 = param_1;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10),param_2,&puStack_38);
  return;
}



/* Entry: 108bd5acc; end: 108bd5adb;  */

void FUN_108bd5acc(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108bd5adc; end: 108bd5bbb; -[SCSnapchatterFriendStatusManagerDefault statusForSnapchatterId:] */

undefined8 FUN_108bd5adc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x2020000000;
  uStack_38 = 0x10;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_48[3];
  _objc_release(param_3);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 108bd5bbc; end: 108bd5c43;  */

void FUN_108bd5bbc(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0dff20(lVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    func_0x00010c0dff20(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c067ec0();
    *(long *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = (long)(int)uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = 0x10;
  return;
}



/* Entry: 108bd5c44; end: 108bd5d03; -[SCSnapchatterFriendStatusManagerDefault statusForSnapchatterUsername:] */

undefined8 FUN_108bd5c44(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0x10;
  func_0x00010c0f8240(*(undefined8 *)(param_1 + 0x10));
  uVar1 = puStack_38[3];
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_3);
  return uVar1;
}



/* Entry: 108bd5d04; end: 108bd5d17;  */

void FUN_108bd5d04(long param_1)

{
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) =
       *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
  return;
}



/* Entry: 108bd5d18; end: 108bd5e17; -[SCSnapchatterFriendStatusManagerDefault snapchatterIdToFriendStatusOrDefault:] */

void FUN_108bd5d18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  puStack_58 = &uStack_60;
  uStack_60 = 0;
  uStack_50 = 0x3032000000;
  pcStack_48 = FUN_108bd5e18;
  uStack_40 = 0x108bd5e28;
  uStack_38 = 0;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c0f8240(uVar1);
  uVar1 = puStack_58[5];
  _objc_retain(uVar1);
  _objc_release(param_3);
  __Block_object_dispose(&uStack_60,8);
  _objc_release(uStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108bd5e18; end: 108bd5e2f;  */

void FUN_108bd5e18(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108bd5e30; end: 108bd5ea7;  */

void FUN_108bd5e30(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 0x28);
  if (lVar2 == 0) {
    lVar3 = *(long *)(param_1 + 0x28);
  }
  else {
    lVar3 = lVar2;
    func_0x00010bf51e00();
  }
  lVar4 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  _objc_retain(lVar3);
  uVar1 = *(undefined8 *)(lVar4 + 0x28);
  *(long *)(lVar4 + 0x28) = lVar3;
  _objc_release(uVar1);
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar3);
    return;
  }
  return;
}



/* Entry: 108bd5ea8; end: 108bd5eaf; -[SCSnapchatterFriendStatusManagerDefault snapchatterIdToFriendStatus] */

void FUN_108bd5ea8(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2444d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_snapchatterIdToFriendStatusOrDef_11266eb58,0)
  ;
  return;
}



/* Entry: 108bd5eb0; end: 108bd5ebb; +[SCSnapchatterFriendStatusManagerDefault announcerIdentifier] */

undefined ** FUN_108bd5eb0(void)

{
  return &PTR____CFConstantStringClassReference_110eec498;
}



/* Entry: 108bd5ebc; end: 108bd5ec3; -[SCSnapchatterFriendStatusManagerDefault removeUpdateListener:] */

void FUN_108bd5ebc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 8),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 108bd5ec4; end: 108bd5f8f; -[SCSnapchatterFriendStatusManagerDefault didStartSnapchattersUpdateDataRequest:] */

void FUN_108bd5ec4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined8 uStack_30;
  code *pcStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  
  puStack_38 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_30 = 0xc2000000;
  pcStack_28 = FUN_108bd5f90;
  puStack_20 = &UNK_110855640;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x108bd6010;
  puStack_48 = &UNK_110866ad0;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  uStack_78 = 0x108bd6090;
  puStack_70 = &UNK_110866b00;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x108bd6110;
  puStack_98 = &UNK_110862228;
  uStack_90 = param_1;
  uStack_68 = param_1;
  uStack_40 = param_1;
  uStack_18 = param_1;
  func_0x00010c0bc6c0(param_3,param_2,&puStack_38,0,&puStack_60,0,&puStack_88,&puStack_b0,0,0,0);
  return;
}



/* Entry: 108bd5f90; end: 108bd618f;  */

void FUN_108bd5f90(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  if (param_2 != 0) {
    uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    func_0x00010bf4b900();
    _objc_release(uVar1);
    if ((int)uVar2 != 0) {
      func_0x00010bed2be0(*(undefined8 *)(param_1 + 0x20));
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 108bd6190; end: 108bd6273; -[SCSnapchatterFriendStatusManagerDefault didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_108bd6190(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  code *pcStack_30;
  undefined *puStack_28;
  undefined8 uStack_20;
  undefined1 uStack_18;
  
  puStack_40 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_38 = 0xc2000000;
  pcStack_30 = FUN_108bd6274;
  puStack_28 = &UNK_110856ba8;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  uStack_60 = 0x108bd6304;
  puStack_58 = &UNK_11092a510;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  uStack_90 = 0x108bd6394;
  puStack_88 = &UNK_11092a540;
  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x108bd6424;
  puStack_b8 = &UNK_110ab6630;
  uStack_b0 = param_1;
  uStack_a8 = param_4;
  uStack_80 = param_1;
  uStack_78 = param_4;
  uStack_50 = param_1;
  uStack_48 = param_4;
  uStack_20 = param_1;
  uStack_18 = param_4;
  func_0x00010c0bc6c0(param_3,param_2,&puStack_40,0,&puStack_70,0,&puStack_a0,&puStack_d0,0,0,0);
  return;
}



/* Entry: 108bd6274; end: 108bd64b3;  */

void FUN_108bd6274(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010c2923e0(param_2);
  _objc_retainAutoreleasedReturnValue();
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar1 + 0x30) == 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    func_0x00010bf002e0();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010bf4b900();
    _objc_release(uVar2);
    if ((int)uVar3 == 0) goto LAB_108bd62f0;
    lVar1 = *(long *)(param_1 + 0x20);
  }
  func_0x00010bed2be0(lVar1);
LAB_108bd62f0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}


