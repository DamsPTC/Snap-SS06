/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10509d374; end: 10509d583; -[SCFriendshipProfileWorkflow _presentFriendshipProfile:onSuccess:] */

void FUN_10509d374(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined *puStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010bf50420();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar4 = PTR_PTR_1126b01c0;
  lVar3 = param_3;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c294260();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  puStack_60 = puVar4;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(PTR___dispatch_main_q_11034be20);
  _objc_retain(param_4);
  puVar8 = auStack_68;
  _objc_copyWeak(auStack_70,puVar8);
  _objc_retain(param_3);
  func_0x00010bf504e0(uVar2);
  _objc_release(PTR___dispatch_main_q_11034be20);
  _objc_release(puVar5);
  _objc_release(puVar4);
  _objc_release(lVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_70);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  __Unwind_Resume();
  if (*(long *)(param_3 + 0x28) != 0) {
    _objc_retain(puVar8);
    lVar3 = param_3 + 0x30;
    _objc_loadWeakRetained(lVar3);
    lVar6 = lVar3;
    func_0x00010beb75e0();
    _objc_release(lVar3);
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    lVar3 = *(long *)(param_3 + 0x28);
    puVar7 = puVar8;
    func_0x00010bfb1920(puVar8);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar8);
    (**(code **)(lVar3 + 0x10))(lVar3,uVar2,0,puVar7,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar7);
    return;
  }
  return;
}



/* Entry: 10509d584; end: 10509d623;  */

void FUN_10509d584(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  if (*(long *)(param_1 + 0x28) != 0) {
    _objc_retain(param_2);
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained(lVar2);
    lVar3 = lVar2;
    func_0x00010beb75e0();
    _objc_release(lVar2);
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    uVar4 = param_2;
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    (**(code **)(lVar2 + 0x10))(lVar2,uVar1,0,uVar4,lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar4);
    return;
  }
  return;
}



/* Entry: 10509d624; end: 10509d663; -[SCFriendshipProfileWorkflow didEncounterError] */

void FUN_10509d624(long param_1)

{
  func_0x00010c0dcf20();
  func_0x00010c1429e0(*(undefined8 *)(param_1 + 0x30));
  func_0x00010c0dcf40(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010c0dcf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_notifyDelegateDidDismissIfNeeded_112614dd8,0)
  ;
  return;
}



/* Entry: 10509d664; end: 10509d66b;  */

void FUN_10509d664(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c10bff0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_presentErrorStatusMessage_112620a18);
  return;
}



/* Entry: 10509d66c; end: 10509d6fb; -[SCFriendshipProfileWorkflow notifyDelegateWillAppearIfNeeded] */

void FUN_10509d66c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + 0x38) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x38) = 1;
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf6b020(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb8860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 10509d6fc; end: 10509d793; -[SCFriendshipProfileWorkflow notifyDelegateDidAppearIfNeeded:] */

void FUN_10509d6fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_3);
  if ((*(byte *)(param_1 + 0x39) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x39) = 1;
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf6b020(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb86e0();
      _objc_release(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10509d794; end: 10509d79b; -[SCFriendshipProfileWorkflow isDismissing] */

undefined1 FUN_10509d794(long param_1)

{
  return *(undefined1 *)(param_1 + 0x3a);
}



/* Entry: 10509d79c; end: 10509d82f; -[SCFriendshipProfileWorkflow notifyDelegateWillDismissIfNeeded] */

void FUN_10509d79c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  if ((*(byte *)(param_1 + 0x3a) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x3a) = 1;
    uVar1 = *(ulong *)(param_1 + 8);
    func_0x00010bf6b020();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar1;
    _objc_opt_respondsToSelector();
    _objc_release(uVar1);
    if ((uVar2 & 1) != 0) {
      uVar3 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf6b020(uVar3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bfb8880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)(uVar3);
      return;
    }
  }
  return;
}



/* Entry: 10509d830; end: 10509d8ab; -[SCFriendshipProfileWorkflow notifyDelegateDidDismissIfNeededWithCompletion:] */

void FUN_10509d830(long param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  if (*(char *)(param_1 + 0x3b) != '\x01') {
    *(undefined1 *)(param_1 + 0x3b) = 1;
    uVar1 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf6b020(uVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bfb8700();
    _objc_release(uVar1);
  }
  if (param_3 != 0) {
    (**(code **)(param_3 + 0x10))(param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10509d8ac; end: 10509dae3; -[SCFriendshipProfileWorkflow shouldPresentPublicProfileWithSnapchatter:] */

void FUN_10509d8ac(long param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uStack_90;
  undefined8 *puStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined *puStack_70;
  ulong uStack_68;
  undefined1 *puStack_60;
  code *pcStack_58;
  ulong uStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126b4708;
  uVar5 = param_3;
  func_0x00010c242760(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c07bd60();
  if ((int)puVar1 == 0) {
LAB_10509d938:
    _objc_release(uVar5);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 8);
    func_0x00010bfb8820();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c263da0();
    if ((int)uVar3 != 0) {
      _objc_release(uVar2);
      goto LAB_10509d938;
    }
    uVar4 = param_3;
    func_0x000100bf119c();
    _objc_release(uVar2);
    _objc_release(uVar5);
    if ((uVar4 & 1) == 0) {
      uVar5 = param_3;
      func_0x00010901d398();
      if ((int)uVar5 != 0) {
        uVar5 = *(ulong *)(param_1 + 0x28);
        func_0x000108fab1cc();
        if ((uVar5 & 1) == 0) goto LAB_10509d950;
      }
      uVar5 = param_3;
      func_0x00010c07a6a0();
      if (((int)uVar5 == 0) && (uVar5 = param_3, func_0x00010901df08(), (int)uVar5 == 0)) {
        puVar6 = *(undefined **)(param_1 + 0x20);
        func_0x00010c1176a0();
        _objc_retainAutoreleasedReturnValue();
        puVar1 = puVar6;
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = param_3;
        func_0x00010c242760();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
        uStack_50 = uVar5;
        func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
        _objc_retainAutoreleasedReturnValue();
        puVar8 = puVar1;
        func_0x00010c1176c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar7);
        _objc_release(uVar5);
        _objc_release(puVar1);
        _objc_release(puVar6);
        puVar1 = puVar8;
        func_0x00010c268560();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar1;
        func_0x00010c0b8600();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar1);
        _objc_release(puVar8);
        goto LAB_10509d960;
      }
    }
  }
LAB_10509d950:
  puVar7 = PTR_PTR_1126ae6b8;
  func_0x00010c0860a0();
  _objc_retainAutoreleasedReturnValue();
LAB_10509d960:
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_48) {
    ___stack_chk_fail();
    pcStack_58 = FUN_10509dae4;
    puStack_70 = puVar7;
    uStack_68 = param_3;
    puStack_60 = &stack0xfffffffffffffff0;
    _objc_retain(param_2);
    puStack_88 = &uStack_90;
    uStack_90 = 0;
    uStack_80 = 0x2020000000;
    uStack_78 = 0;
    func_0x00010c0c0800(param_2);
    puVar7 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
    _objc_retainAutoreleasedReturnValue();
    __Block_object_dispose(&uStack_90,8);
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 10509dae4; end: 10509dbbb;  */

void FUN_10509dae4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  func_0x00010c0c0800(param_2);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10509dbbc; end: 10509dd03;  */

void FUN_10509dbbc(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  do {
    if (lVar2 == 0) {
LAB_10509dcbc:
      _objc_release(param_2);
      _objc_release(param_2);
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar4) {
        return;
      }
      ___stack_chk_fail();
      return;
    }
    lVar6 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      uVar5 = *(ulong *)(lVar6 * 8);
      uVar3 = uVar5;
      func_0x00010c078f60();
      if ((((uVar3 & 1) != 0) || (uVar3 = uVar5, func_0x00010c26e7a0(), uVar3 == 2)) ||
         (func_0x00010c26e7a0(), uVar5 == 3)) {
        *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x20) + 8) + 0x18) = 1;
        goto LAB_10509dcbc;
      }
      lVar6 = lVar6 + 1;
    } while (lVar2 != lVar6);
    lVar2 = param_2;
    func_0x00010bf52a60();
  } while( true );
}



/* Entry: 10509dd04; end: 10509dd07;  */

void FUN_10509dd04(void)

{
  return;
}



/* Entry: 10509dd08; end: 10509ddd7; -[SCFriendshipProfileWorkflow handleLaunchBehavior] */

void FUN_10509dd08(long param_1)

{
  long lVar1;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  lVar1 = *(long *)(param_1 + 8);
  func_0x00010c08b520();
  if (lVar1 != 0) {
    _objc_initWeak(auStack_28,param_1);
    puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_48 = 0xc2000000;
    uStack_40 = 0x10509dda4;
    puStack_38 = &UNK_1108434b0;
    _objc_copyWeak(auStack_30,auStack_28);
    func_0x000100c749e0(0x3f000000,"APPSTORE",&puStack_50);
    _objc_destroyWeak(auStack_30);
    _objc_destroyWeak(auStack_28);
  }
  return;
}



/* Entry: 10509ddd8; end: 10509de37; -[SCFriendshipProfileWorkflow .cxx_destruct] */

void FUN_10509ddd8(long param_1)

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



/* Entry: 10509de38; end: 10509de4f;  */

void FUN_10509de38(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110dc46f8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110dc46f8,
                      &PTR____CFConstantStringClassReference_110dc4718,0);
  func_0x000107c61180();
  if (lRam00000001137fe070 != -1) {
    func_0x00010002a2fc(0x1137fe070,&PTR___NSConcreteGlobalBlock_110d98d68);
  }
  ppuVar2 = ppuVar1;
  if ((bRam00000001137fe068 & 1) != 0) {
    func_0x000107c312ec(ppuVar1);
    func_0x000107c61180();
    func_0x000107c61170(ppuVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar2);
  return;
}



/* Entry: 10509de50; end: 10509def3; +[SCFriendProfileCellTextView textView:subLabel:showOfficialBadge:style:paddingStyle:] */

void FUN_10509de50(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b4710;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c014f00(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c28c3c0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10509def4; end: 10509df97; +[SCFriendProfileCellTextView textView:subLabel:showOfficialBadge:paddingStyle:colorStyle:] */

void FUN_10509def4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b4710;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c014ae0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c28c3c0();
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10509df98; end: 10509e13b; -[SCFriendProfileCellTextView initWithFrame:style:paddingStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10509df98(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  *(undefined8 *)(param_1 + _DAT_11271b664) = param_3;
  *(undefined8 *)(param_1 + _DAT_11271b668) = param_4;
  puStack_38 = PTR_PTR_1126e5ef0;
  plVar1 = &lStack_40;
  lStack_40 = param_1;
  _objc_msgSendSuper2(plVar1,PTR_s_initWithFrame__1125e2948);
  if (plVar1 != (long *)0x0) {
    puVar2 = PTR_PTR_1126b1a00;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar5 = (long)_DAT_11271b66c;
    uVar4 = *(undefined8 *)((long)plVar1 + lVar5);
    *(undefined **)((long)plVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    plVar3 = plVar1;
    func_0x00010be205c0(plVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)plVar1 + lVar5));
    _objc_release(plVar3);
    func_0x00010c165e20(*(undefined8 *)((long)plVar1 + lVar5));
    func_0x00010c1bdb00(*(undefined8 *)((long)plVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)plVar1 + lVar5));
    _objc_release(puVar2);
    plVar3 = plVar1;
    func_0x00010be205e0(plVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)plVar1 + lVar5));
    _objc_release(plVar3);
    func_0x00010befbb60(plVar1);
    uVar4 = *(undefined8 *)((long)plVar1 + lVar5);
    _objc_retain(plVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(plVar1);
  }
  return plVar1;
}



/* Entry: 10509e13c; end: 10509e297;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10509e13c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbee0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10509e298; end: 10509e437; -[SCFriendProfileCellTextView initWithFrame:paddingStyle:colorStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10509e298(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long lStack_40;
  undefined *puStack_38;
  
  *(undefined8 *)(param_1 + _DAT_11271b664) = param_4;
  *(undefined8 *)(param_1 + _DAT_11271b668) = param_3;
  puStack_38 = PTR_PTR_1126e5ef0;
  plVar1 = &lStack_40;
  lStack_40 = param_1;
  _objc_msgSendSuper2(plVar1,PTR_s_initWithFrame__1125e2948);
  if (plVar1 != (long *)0x0) {
    puVar2 = PTR_PTR_1126b1a00;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    lVar5 = (long)_DAT_11271b66c;
    uVar4 = *(undefined8 *)((long)plVar1 + lVar5);
    *(undefined **)((long)plVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    plVar3 = plVar1;
    func_0x00010be205c0(plVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)plVar1 + lVar5));
    _objc_release(plVar3);
    func_0x00010c165e20(*(undefined8 *)((long)plVar1 + lVar5));
    func_0x00010c1bdb00(*(undefined8 *)((long)plVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)plVar1 + lVar5));
    _objc_release(puVar2);
    plVar3 = plVar1;
    func_0x00010be205e0(plVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)plVar1 + lVar5));
    _objc_release(plVar3);
    func_0x00010befbb60(plVar1);
    uVar4 = *(undefined8 *)((long)plVar1 + lVar5);
    _objc_retain(plVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(plVar1);
  }
  return plVar1;
}



/* Entry: 10509e438; end: 10509e593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10509e438(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbee0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10509e594; end: 10509e71b; -[SCFriendProfileCellTextView subLabel] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10509e594(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar4 = (long)_DAT_11271b670;
  lVar3 = *(long *)(param_1 + lVar4);
  if (lVar3 == 0) {
    puVar1 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar2 = *(undefined8 *)(param_1 + lVar4);
    *(undefined **)(param_1 + lVar4) = puVar1;
    _objc_release(uVar2);
    lVar5 = (long)_DAT_11271b664;
    lVar3 = param_1;
    func_0x00010be23300(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
    _objc_release(lVar3);
    func_0x00010c165e20(*(undefined8 *)(param_1 + lVar4),param_2,0);
    func_0x00010c1bdb00(*(undefined8 *)(param_1 + lVar4),param_2,4);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar4),param_2,puVar1);
    _objc_release(puVar1);
    lVar3 = param_1;
    func_0x00010be23320(param_1,param_2,*(undefined8 *)(param_1 + lVar5));
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)(param_1 + lVar4),param_2,lVar3);
    _objc_release(lVar3);
    func_0x00010befbb60(param_1,param_2,*(undefined8 *)(param_1 + lVar4));
    lVar3 = param_1;
    func_0x00010c25e620(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbfc0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(lVar3);
    lVar3 = *(long *)(param_1 + lVar4);
  }
  _objc_retain(lVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10509e71c; end: 10509e86f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10509e71c(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c2a7440();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010be23340();
  (**(code **)(lVar5 + 0x10))(lVar5);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10509e870; end: 10509e9ff; -[SCFriendProfileCellTextView updateWith:subLabel:showOfficialBadge:style:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10509e870(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined4 param_5,undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  
  _objc_retain(param_4);
  *(undefined8 *)(param_1 + _DAT_11271b664) = param_6;
  lVar5 = (long)_DAT_11271b66c;
  func_0x00010c212f20(*(undefined8 *)(param_1 + lVar5),param_2,param_3);
  func_0x00010c16eda0(*(undefined8 *)(param_1 + lVar5),param_2,param_5);
  lVar1 = param_4;
  func_0x00010c08fa60();
  lVar6 = (long)_DAT_11271b670;
  uVar2 = *(ulong *)(param_1 + lVar6);
  if (lVar1 == 0) {
    if ((uVar2 != 0) && (func_0x00010c074c20(), (uVar2 & 1) == 0)) {
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c14df20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0bc0(0);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    func_0x00010c212f20(*(undefined8 *)(param_1 + lVar6),param_2,param_4);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar6),param_2,1);
  }
  else {
    if ((uVar2 == 0) || (func_0x00010c074c20(), (int)uVar2 != 0)) {
      uVar3 = *(undefined8 *)(param_1 + lVar5);
      func_0x00010c14df20(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = uVar3;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1d0bc0(0xc018000000000000);
      _objc_release(uVar4);
      _objc_release(uVar3);
    }
    lVar1 = param_1;
    func_0x00010c25e620(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c212f20();
    _objc_release(lVar1);
    func_0x00010c25e620(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10509ea00; end: 10509ea53; -[SCFriendProfileCellTextView _getMainLabelTextColor:] */

void FUN_10509ea00(undefined8 param_1,undefined8 param_2,long param_3)

{
  if ((param_3 == 0) || (param_3 == 2)) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 1) {
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10509ea54; end: 10509eab7; -[SCFriendProfileCellTextView _getSubLabelTextColor:] */

void FUN_10509ea54(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0xbf;
  }
  else {
    if (param_3 != 2) {
      if (param_3 == 1) {
        func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
        _objc_retainAutoreleasedReturnValue();
      }
      goto LAB_10509eab0;
    }
    uVar1 = 0x8c;
  }
  func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
  _objc_retainAutoreleasedReturnValue();
LAB_10509eab0:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10509eab8; end: 10509eadb; -[SCFriendProfileCellTextView _getSubLabelTopPadding:] */

undefined8 FUN_10509eab8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x4038000000000000;
  if (param_3 != 1) {
    uVar1 = 0x403c000000000000;
  }
  uVar2 = 0x4042000000000000;
  if (param_3 != 2) {
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Entry: 10509eadc; end: 10509eb2b; -[SCFriendProfileCellTextView _getMainLabelFontForStyle:] */

void FUN_10509eadc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 2) {
    func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 2) {
    func_0x00010bf6d680(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10509eb2c; end: 10509eb7b; -[SCFriendProfileCellTextView _getSubLabelFontForStyle:] */

void FUN_10509eb2c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 2) {
    func_0x00010c127e40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 2) {
    func_0x00010c0c7340(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10509eb7c; end: 10509ebbb; -[SCFriendProfileCellTextView setSubLabel:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10509eb7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271b670;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10509ebbc; end: 10509ebfb; -[SCFriendProfileCellTextView .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10509ebbc(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271b670,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271b66c,0);
  return;
}



/* Entry: 10509ebfc; end: 10509ecab; +[SCFriendProfileCellTextViewV2 textView:subLabel:thirdLabel:showOfficialBadge:style:] */

void FUN_10509ebfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b4718;
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c014e80(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  func_0x00010c28c9c0();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10509ecac; end: 10509f0f3; -[SCFriendProfileCellTextViewV2 initWithFrame:style:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10509ecac(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  
  puStack_a0 = PTR_PTR_1126e5ef8;
  puVar1 = &uStack_a8;
  uStack_a8 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126b1a00;
    _objc_alloc();
    uVar6 = *(undefined8 *)PTR__CGRectZero_110347608;
    uVar7 = *(undefined8 *)(PTR__CGRectZero_110347608 + 8);
    uVar8 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10);
    uVar9 = *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18);
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    lVar5 = (long)_DAT_11271b674;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010be205a0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    lVar5 = (long)_DAT_11271b678;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010c127e40(0x4028000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010be232e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    func_0x00010c16f5a0(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010befbb60(puVar1);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___UILabel_1126aec30;
    _objc_alloc();
    func_0x00010c013de0(uVar6,uVar7,uVar8,uVar9);
    lVar5 = (long)_DAT_11271b67c;
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    *(undefined **)((long)puVar1 + lVar5) = puVar2;
    _objc_release(uVar4);
    puVar2 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680(0x4022000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c19e480(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    func_0x00010c165e20(*(undefined8 *)((long)puVar1 + lVar5));
    func_0x00010c1bdb00(*(undefined8 *)((long)puVar1 + lVar5));
    puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar2);
    puVar3 = puVar1;
    func_0x00010be234e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c213180(*(undefined8 *)((long)puVar1 + lVar5));
    _objc_release(puVar3);
    func_0x00010befbb60(puVar1);
    uVar4 = *(undefined8 *)((long)puVar1 + lVar5);
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(uVar4);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 10509f0f4; end: 10509f373;  */

void FUN_10509f0f4(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10509f374; end: 10509f4c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10509f374(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c274140();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271b678);
  func_0x00010c0bbea0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0e1c40();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x4008000000000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar4 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10509f4c8; end: 10509f653; -[SCFriendProfileCellTextViewV2 updateWithMainLabel:subLabel:thirdLabel:showOfficialBadge:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10509f4c8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined4 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  _objc_retain(param_5);
  lVar6 = (long)_DAT_11271b674;
  uVar4 = *(undefined8 *)(param_1 + lVar6);
  _objc_retain(param_4);
  func_0x00010c212f20(uVar4,param_2,param_3);
  func_0x00010c16eda0(*(undefined8 *)(param_1 + lVar6),param_2,param_6);
  lVar3 = (long)_DAT_11271b678;
  func_0x00010c16b720(*(undefined8 *)(param_1 + lVar3),param_2,param_4);
  _objc_release(param_4);
  lVar1 = param_5;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    plVar5 = (long *)(param_1 + _DAT_11271b67c);
    func_0x00010c212f20(*plVar5,param_2,0);
  }
  else {
    lVar1 = param_5;
    func_0x00010c28ed80(param_5);
    _objc_retainAutoreleasedReturnValue();
    plVar5 = (long *)(param_1 + _DAT_11271b67c);
    func_0x00010c212f20(*plVar5,param_2,lVar1);
    _objc_release(lVar1);
  }
  lVar1 = *plVar5;
  func_0x00010c26b700();
  _objc_retainAutoreleasedReturnValue();
  dVar7 = 0.0;
  dVar9 = 0.0;
  if (lVar1 != 0) {
    dVar9 = 3.0;
  }
  _objc_release();
  lVar1 = param_1;
  func_0x00010c14df20(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0e00e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0699c0(*(undefined8 *)(param_1 + lVar6));
  dVar8 = dVar7;
  func_0x00010c0699c0(*(undefined8 *)(param_1 + lVar3));
  dVar7 = dVar7 + dVar8;
  func_0x00010c0699c0(*plVar5);
  func_0x00010c1d0bc0(dVar9 + dVar7 + dVar8,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_5);
  return;
}



/* Entry: 10509f654; end: 10509f69f; -[SCFriendProfileCellTextViewV2 _getMainLabelFontColorWithStyle:] */

void FUN_10509f654(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 2) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xc6);
    _objc_retainAutoreleasedReturnValue();
  }
  else if (param_3 == 2) {
    func_0x00010c2a4b20(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10509f6a0; end: 10509f703; -[SCFriendProfileCellTextViewV2 _getSubLabelFontColorWithStyle:] */

void FUN_10509f6a0(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  if (param_3 == 2) {
    func_0x00010c098f40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    if (param_3 == 1) {
      uVar1 = 0x8c;
    }
    else {
      if (param_3 != 0) goto LAB_10509f6fc;
      uVar1 = 0xbf;
    }
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,uVar1);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_10509f6fc:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10509f704; end: 10509f733; -[SCFriendProfileCellTextViewV2 _getThirdLabelFontColorWithStyle:] */

void FUN_10509f704(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 3) {
    func_0x00010c23ba80(PTR__OBJC_CLASS___UIColor_1126aea70,param_2,0xbf);
    _objc_retainAutoreleasedReturnValue();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10509f734; end: 10509f783; -[SCFriendProfileCellTextViewV2 .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10509f734(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271b67c,0);
  _objc_storeStrong(param_1 + _DAT_11271b678,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271b674,0);
  return;
}



/* Entry: 10509f784; end: 10509f83f; +[SCProfilePictureRenderStyle standardWithUserId:bitmojiAvatarProvider:bitmojiSelfieProvider:bitmojiSelfieFetcher:] */

void FUN_10509f784(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b4720;
  _objc_retain(param_6);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  func_0x00010c21e620();
  _objc_release(param_3);
  func_0x00010c171460(puVar1,param_2,param_6);
  _objc_release(param_6);
  func_0x00010c170b20(puVar1,param_2,param_4);
  _objc_release(param_4);
  func_0x00010c1714c0(puVar1,param_2,param_5);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10509f840; end: 10509f847; -[SCProfilePictureRenderStyle userId] */

undefined8 FUN_10509f840(long param_1)

{
  return *(undefined8 *)(param_1 + 8);
}



/* Entry: 10509f848; end: 10509f877; -[SCProfilePictureRenderStyle setUserId:] */

void FUN_10509f848(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10509f878; end: 10509f87f; -[SCProfilePictureRenderStyle bitmojiSelfieFetcher] */

undefined8 FUN_10509f878(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



/* Entry: 10509f880; end: 10509f8af; -[SCProfilePictureRenderStyle setBitmojiSelfieFetcher:] */

void FUN_10509f880(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10509f8b0; end: 10509f8b7; -[SCProfilePictureRenderStyle bitmojiAvatarProvider] */

undefined8 FUN_10509f8b0(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}



/* Entry: 10509f8b8; end: 10509f8e7; -[SCProfilePictureRenderStyle setBitmojiAvatarProvider:] */

void FUN_10509f8b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10509f8e8; end: 10509f8ef; -[SCProfilePictureRenderStyle bitmojiSelfieProvider] */

undefined8 FUN_10509f8e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}



/* Entry: 10509f8f0; end: 10509f91f; -[SCProfilePictureRenderStyle setBitmojiSelfieProvider:] */

void FUN_10509f8f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10509f920; end: 10509f967; -[SCProfilePictureRenderStyle .cxx_destruct] */

void FUN_10509f920(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10509f968; end: 10509fa2b; +[SCProfilePictureThumbnail thumbnailWithSnapchatter:contexts:renderStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10509f968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _objc_retain(param_5);
  puVar1 = PTR_PTR_1126b4728;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_alloc();
  func_0x00010be3abe0(*(undefined8 *)PTR__CGRectZero_110347608,
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                      *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
  uVar2 = *(undefined8 *)(puVar1 + _DAT_11271b698);
  *(undefined8 *)(puVar1 + _DAT_11271b698) = param_5;
  _objc_retain(param_5);
  _objc_release(uVar2);
  func_0x00010c28cd60(puVar1,param_2,param_3,param_4,param_5);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 10509fa2c; end: 10509fafb; -[SCProfilePictureThumbnail _initWithFrame:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_10509fa2c(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puStack_28 = PTR_PTR_1126e5f00;
  puVar1 = &uStack_30;
  uStack_30 = param_1;
  _objc_msgSendSuper2(puVar1,PTR_s_initWithFrame__1125e2948);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(puVar1);
    func_0x00010c0bbfc0(puVar1);
    _objc_unsafeClaimAutoreleasedReturnValue();
    puVar2 = PTR_PTR_1126ae720;
    func_0x00010c0b8440();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = *(undefined8 *)((long)puVar1 + (long)_DAT_11271b69c);
    *(undefined **)((long)puVar1 + (long)_DAT_11271b69c) = puVar2;
    _objc_release(uVar3);
    _objc_release(puVar1);
  }
  return puVar1;
}



/* Entry: 10509fafc; end: 10509fbaf;  */

void FUN_10509fafc(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c14df00();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar3 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10509fbb0; end: 10509fbcb;  */

void FUN_10509fbb0(void)

{
  _objc_opt_new(PTR_PTR_1126b4730);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10509fbcc; end: 10509ff6b; -[SCProfilePictureThumbnail updateWithSnapchatter:contexts:renderStyle:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10509fbcc(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar6 = param_2;
  func_0x00010be62840(param_2,param_3,param_4);
  if ((int)lVar6 != 0) {
    func_0x00010be23580(param_2);
    lVar6 = param_2;
    func_0x00010c14df20(param_2);
    _objc_retainAutoreleasedReturnValue();
    lVar11 = lVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1d0bc0(param_1);
    _objc_release(lVar11);
    _objc_release(lVar6);
  }
  if (param_4 == 0) {
    *(undefined1 *)(param_2 + _DAT_11271b6a0) = 0;
    uVar3 = *(undefined8 *)(param_2 + _DAT_11271b6a4);
    *(undefined8 *)(param_2 + _DAT_11271b6a4) = 0;
    _objc_release(uVar3);
    lVar6 = (long)_DAT_11271b698;
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)(param_2 + lVar6);
    *(undefined8 *)(param_2 + lVar6) = param_6;
    _objc_release(uVar3);
  }
  else {
    lVar11 = (long)_DAT_11271b6a4;
    uVar2 = *(undefined8 *)(param_2 + lVar11);
    func_0x00010c294420();
    _objc_retainAutoreleasedReturnValue();
    lVar6 = param_4;
    func_0x00010c294420(param_4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0720c0(uVar2,param_3,lVar6);
    if ((int)uVar3 == 0) {
      _objc_release(lVar6);
      _objc_release(uVar2);
    }
    else {
      cVar1 = *(char *)(param_2 + _DAT_11271b6a0);
      _objc_release(lVar6);
      _objc_release(uVar2);
      if (cVar1 == '\x01') {
        lVar6 = param_2;
        func_0x00010c116bc0(param_2);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c24dbc0();
        _objc_release(lVar6);
        func_0x00010bea42e0(param_2);
        goto LAB_10509ff38;
      }
    }
    lVar6 = param_4;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    lVar12 = (long)_DAT_11271b698;
    uVar3 = *(undefined8 *)(param_2 + lVar12);
    func_0x00010c2923e0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar6;
    func_0x00010c0720c0(lVar6,param_3,uVar3);
    _objc_release(uVar3);
    _objc_release(lVar6);
    if ((int)lVar4 == 0) {
      lVar6 = param_4;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = (long)_DAT_11271b6a8;
      uVar3 = *(undefined8 *)(param_2 + lVar10);
      *(long *)(param_2 + lVar10) = lVar4;
      _objc_release(uVar3);
      _objc_release(lVar6);
      lVar6 = param_4;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar6;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = *(long *)(param_2 + _DAT_11271b6ac);
      *(long *)(param_2 + _DAT_11271b6ac) = lVar4;
    }
    else {
      uVar5 = *(undefined8 *)(param_2 + lVar12);
      func_0x00010bf1ada0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = uVar5;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010bf12ea0();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = (long)_DAT_11271b6a8;
      uVar8 = *(undefined8 *)(param_2 + lVar10);
      *(undefined8 *)(param_2 + lVar10) = uVar2;
      _objc_release(uVar8);
      _objc_release(uVar3);
      _objc_release(uVar5);
      lVar6 = *(long *)(param_2 + lVar12);
      func_0x00010bf1c180();
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar6;
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar9;
      func_0x00010c15ade0();
      _objc_retainAutoreleasedReturnValue();
      uVar3 = *(undefined8 *)(param_2 + _DAT_11271b6ac);
      *(long *)(param_2 + _DAT_11271b6ac) = lVar4;
      _objc_release(uVar3);
    }
    _objc_release(lVar9);
    _objc_release(lVar6);
    lVar6 = (long)_DAT_11271b6a0;
    *(undefined1 *)(param_2 + lVar6) = 0;
    _objc_retain(param_4);
    uVar3 = *(undefined8 *)(param_2 + lVar11);
    *(long *)(param_2 + lVar11) = param_4;
    _objc_release(uVar3);
    _objc_retain(param_6);
    uVar3 = *(undefined8 *)(param_2 + lVar12);
    *(undefined8 *)(param_2 + lVar12) = param_6;
    _objc_release(uVar3);
    func_0x00010beb8da0(param_2,param_3,param_4);
    puVar7 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    func_0x00010c078d80(PTR__OBJC_CLASS___NSString_1126ae4d0,param_3,
                        *(undefined8 *)(param_2 + lVar10));
    if ((int)puVar7 != 0) {
      func_0x00010bed4140(param_2,param_3,param_4,param_5);
    }
    *(undefined1 *)(param_2 + lVar6) = 1;
  }
LAB_10509ff38:
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 10509ff6c; end: 1050a019b; -[SCProfilePictureThumbnail _updateBitmojiProfilePictureWithSnapchatter:contexts:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10509ff6c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined **ppuVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_68,param_1);
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0xc2000000;
  pcStack_88 = FUN_1050a019c;
  puStack_80 = &UNK_110865e48;
  _objc_copyWeak(auStack_70,auStack_68);
  _objc_retain(param_3);
  ppuVar1 = &puStack_98;
  uStack_78 = param_3;
  _objc_retainBlock();
  puVar2 = PTR_PTR_1126afd38;
  _objc_opt_new(PTR_PTR_1126afd38);
  uVar3 = param_3;
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2bc360(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  func_0x00010c2a8ea0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b8160(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c2b78c0(puVar2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + _DAT_11271b698);
  func_0x00010bf1c080(uVar3);
  _objc_retainAutoreleasedReturnValue();
  puVar4 = puVar2;
  func_0x00010bf21f60(puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(ppuVar1);
  func_0x00010bfaa020(uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar3);
  _objc_release(ppuVar1);
  _objc_release(puVar2);
  _objc_release(ppuVar1);
  _objc_release(uStack_78);
  _objc_destroyWeak(auStack_70);
  _objc_destroyWeak(auStack_68);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1050a019c; end: 1050a020f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050a019c(long param_1,long param_2)

{
  int iVar1;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    iVar1 = (int)*(undefined8 *)(param_1 + _DAT_11271b6a4);
    func_0x00010c071ae0();
    if ((param_2 != 0) && (iVar1 != 0)) {
      func_0x00010beb8000(param_1);
    }
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050a0210; end: 1050a021b;  */

void FUN_1050a0210(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x0001050a0218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 1050a021c; end: 1050a036f; -[SCProfilePictureThumbnail ghostFaceView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050a021c(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11271b6b0;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc4738;
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4738,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
    _objc_release(ppuVar2);
    func_0x00010befbb60(param_1);
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
    func_0x00010c161020(param_1);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1050a0370; end: 1050a0623;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050a0370(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_4);
  lVar1 = param_4;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c0bbfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c0bc000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  if (*(char *)(*(long *)(param_3 + 0x20) + (long)_DAT_11271b690) == '\x01') {
    func_0x00010c23d0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_4;
    func_0x00010c2a5040();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010be1f7a0(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c0df720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    func_0x00010bfe0640();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010be1f7a0(*(undefined8 *)(param_3 + 0x20));
    func_0x00010c0df720(param_2,puVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_4;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_3 + 0x20);
  func_0x00010c0bbee0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1050a0624; end: 1050a076f; -[SCProfilePictureThumbnail ghostBorderView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050a0624(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11271b6b4;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010bea42e0(param_1);
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc4758;
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4758,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
    _objc_release(ppuVar2);
    func_0x00010befbb60(param_1);
    func_0x00010c0bbfc0(*(undefined8 *)(param_1 + lVar5));
    _objc_unsafeClaimAutoreleasedReturnValue();
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1050a0770; end: 1050a0a1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050a0770(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010c08e360();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbfa0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c140820();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bc000(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  if (*(char *)(*(long *)(param_1 + 0x20) + (long)_DAT_11271b694) == '\x01') {
    func_0x00010c23d0a0();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))();
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  else {
    lVar2 = param_2;
    func_0x00010c2a5040();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010be23580(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0df720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(lVar2);
    func_0x00010bfe0640();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf985e0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010be23580(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c0df720(puVar5);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar5);
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(puVar5);
  }
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010bf348c0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0bbee0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,uVar3);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1050a0a20; end: 1050a0b47; -[SCProfilePictureThumbnail profileImageView] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050a0a20(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = (long)_DAT_11271b6b8;
  lVar4 = *(long *)(param_1 + lVar5);
  if (lVar4 == 0) {
    puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    _objc_alloc();
    func_0x00010c013de0(*(undefined8 *)PTR__CGRectZero_110347608,
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 8),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x10),
                        *(undefined8 *)(PTR__CGRectZero_110347608 + 0x18));
    uVar3 = *(undefined8 *)(param_1 + lVar5);
    *(undefined **)(param_1 + lVar5) = puVar1;
    _objc_release(uVar3);
    func_0x00010c182220(*(undefined8 *)(param_1 + lVar5));
    puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
    func_0x00010bf3ae40(PTR__OBJC_CLASS___UIColor_1126aea70);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c16e440(*(undefined8 *)(param_1 + lVar5));
    _objc_release(puVar1);
    func_0x00010c1a7f60(*(undefined8 *)(param_1 + lVar5));
    ppuVar2 = &PTR____CFConstantStringClassReference_110dc4778;
    func_0x00010c160fc0(*(undefined8 *)(param_1 + lVar5));
    func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4778,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c161020(*(undefined8 *)(param_1 + lVar5));
    _objc_release(ppuVar2);
    lVar4 = param_1;
    func_0x00010bfcc580(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c066fe0(param_1);
    _objc_release(lVar4);
    lVar4 = *(long *)(param_1 + lVar5);
  }
  _objc_retain(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1050a0b48; end: 1050a0d03; -[SCProfilePictureThumbnail _showBitmojiProfilePic:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050a0b48(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  
  if (param_3 != 0) {
    _objc_retain(param_3);
    lVar1 = param_1;
    func_0x00010c116bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c168240();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c116bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a9f00();
    _objc_release(param_3);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c116bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010c08c0e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1c8160();
    _objc_release(lVar2);
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010bfcc580(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar1);
    lVar1 = param_1;
    func_0x00010c116bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar1);
    if (*(long *)(param_1 + _DAT_11271b6b0) != 0) {
      lVar1 = param_1;
      func_0x00010bfcc640(param_1);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c1a7f60();
      _objc_release(lVar1);
    }
    func_0x00010c161020(param_1,param_2,&PTR____CFConstantStringClassReference_110dbf0f8);
    func_0x00010c116bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0bbfe0();
    _objc_unsafeClaimAutoreleasedReturnValue();
    _objc_release(param_1);
  }
  return;
}



/* Entry: 1050a0d04; end: 1050a0e27;  */

void FUN_1050a0d04(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  _objc_retain(param_2);
  lVar1 = param_2;
  func_0x00010bf345e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))();
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar2);
  _objc_release(lVar1);
  lVar1 = param_2;
  func_0x00010c2a5040();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  lVar2 = lVar1;
  func_0x00010bfe0640();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf985e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  (**(code **)(lVar3 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c0d2840();
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar5 + 0x10))(0x3feae147a0000000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar5);
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1050a0e28; end: 1050a1027; -[SCProfilePictureThumbnail _showEmptyStateImageForSnapchatter:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050a0e28(long param_1,undefined8 param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  
  uVar7 = *(undefined8 *)(param_1 + _DAT_11271b69c);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(uVar7);
  lVar1 = param_1;
  func_0x00010bfcc640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a7f60();
  _objc_release(lVar1);
  puVar4 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  puVar5 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  uVar2 = param_3;
  func_0x00010c294420(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar3 = uVar2;
  func_0x00010bfde980(uVar2);
  func_0x00010c0df840(puVar4,param_2,uVar3 % 0x13 + 1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c14de00(puVar5,param_2,&PTR____CFConstantStringClassReference_110dc4798);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar4);
  _objc_release(uVar2);
  puVar4 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar6 = puVar4;
  func_0x00010bfe9720();
  _objc_retainAutoreleasedReturnValue();
  lVar1 = param_1;
  func_0x00010bfcc640(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00();
  _objc_release(lVar1);
  _objc_release(puVar6);
  _objc_release(puVar4);
  if ((*(long *)(param_1 + _DAT_11271b6b4) != 0) || (*(long *)(param_1 + _DAT_11271b6b8) != 0)) {
    lVar1 = param_1;
    func_0x00010bfcc580(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(lVar1);
    func_0x00010c116bc0(param_1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c1a7f60();
    _objc_release(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1050a1028; end: 1050a10bb; -[SCProfilePictureThumbnail _needsUpdateWidth:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_1050a1028(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  
  _objc_retain(param_3);
  lVar2 = (long)_DAT_11271b6a4;
  uVar1 = param_1;
  func_0x00010be348e0(param_1,param_2,*(undefined8 *)(param_1 + lVar2));
  if (((int)uVar1 == 0) ||
     (uVar1 = param_1, func_0x00010be348e0(param_1,param_2,param_3), (int)uVar1 != 0)) {
    uVar1 = param_1;
    func_0x00010be348e0(param_1,param_2,*(undefined8 *)(param_1 + lVar2));
    if ((uVar1 & 1) == 0) {
      func_0x00010be348e0(param_1,param_2,param_3);
    }
    else {
      param_1 = 0;
    }
  }
  else {
    param_1 = 1;
  }
  _objc_release(param_3);
  return param_1;
}



/* Entry: 1050a10bc; end: 1050a10c7; -[SCProfilePictureThumbnail _hasThumbnail:] */

bool FUN_1050a10bc(undefined8 param_1,undefined8 param_2,long param_3)

{
  return param_3 != 0;
}



/* Entry: 1050a10c8; end: 1050a1123; -[SCProfilePictureThumbnail _getGhostSize] */

undefined1  [16]
FUN_1050a10c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_4,
                      &PTR____CFConstantStringClassReference_110dc47b8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(puVar1);
  auVar2._8_8_ = param_2;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Entry: 1050a1124; end: 1050a1177; -[SCProfilePictureThumbnail _getThumbnailWidth] */

undefined8 FUN_1050a1124(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_3,
                      &PTR____CFConstantStringClassReference_110dc47d8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c23d0a0();
  _objc_release(puVar1);
  return param_1;
}



/* Entry: 1050a1178; end: 1050a11cb; -[SCProfilePictureThumbnail _setGhostBorderImage] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050a1178(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x00010bfe8220(PTR__OBJC_CLASS___UIImage_1126aea68,param_2,
                      &PTR____CFConstantStringClassReference_110dc47f8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a9f00(*(undefined8 *)(param_1 + _DAT_11271b6b4),param_2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050a11cc; end: 1050a120b; -[SCProfilePictureThumbnail setProfileImageView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050a11cc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271b6b8;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050a120c; end: 1050a124b; -[SCProfilePictureThumbnail setGhostBorderView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050a120c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271b6b4;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050a124c; end: 1050a128b; -[SCProfilePictureThumbnail setGhostFaceView:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050a124c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = (long)_DAT_11271b6b0;
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1050a128c; end: 1050a135b; -[SCProfilePictureThumbnail .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1050a128c(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_11271b6b0,0);
  _objc_storeStrong(param_1 + _DAT_11271b6b4,0);
  _objc_storeStrong(param_1 + _DAT_11271b6b8,0);
  _objc_storeStrong(param_1 + _DAT_11271b6ac,0);
  _objc_storeStrong(param_1 + _DAT_11271b6a8,0);
  _objc_storeStrong(param_1 + _DAT_11271b6bc,0);
  _objc_storeStrong(param_1 + _DAT_11271b6c0,0);
  _objc_storeStrong(param_1 + _DAT_11271b6c4,0);
  _objc_storeStrong(param_1 + _DAT_11271b69c,0);
  _objc_storeStrong(param_1 + _DAT_11271b6a4,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11271b698,0);
  return;
}



/* Entry: 1050a135c; end: 1050a1507; -[SCFriendUnifiedActionMenuCategoryDataProvider initWithUnifiedProfileOpenFriendActionData:dataSource:friendmojiPresenter:messagingExperimentService:sponsoredSnapAdResponseParser:plugins:mapDataProvider:simpleSnapchatExperimentConfigProvider:circumstanceEngine:] */

undefined1 *
FUN_1050a135c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_9);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126e5f08;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
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
    _objc_retain(param_6);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined8 *)((long)puVar1 + 0x30) = param_7;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_9;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = param_12;
    _objc_release(uVar2);
  }
  _objc_release(param_12);
  _objc_release(param_9);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050a1508; end: 1050a2c17; -[SCFriendUnifiedActionMenuCategoryDataProvider updateViewModelWithCompletionBlock:] */

void FUN_1050a1508(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined8 uVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined **ppuVar33;
  undefined *puVar34;
  long lVar35;
  undefined **ppuVar36;
  uint uVar37;
  long lVar38;
  undefined *puVar39;
  undefined *puVar40;
  undefined *puVar41;
  undefined *puStack_138;
  undefined8 uStack_e0;
  undefined *puStack_c0;
  
  lVar38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  uVar7 = *(ulong *)(param_1 + 8);
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar7;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010bf60940(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar8;
  func_0x00010c0720c0();
  if ((uVar15 & 1) == 0) {
    puVar10 = *(undefined **)(param_1 + 8);
    func_0x00010c244280();
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar10 = *(undefined **)(param_1 + 0x10);
    func_0x00010c293a00();
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(uVar9);
  _objc_release(uVar8);
  _objc_release(uVar7);
  puVar11 = *(undefined **)(param_1 + 0x10);
  func_0x00010bf2bf20();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = puVar10;
  if (puVar11 != (undefined *)0x0) {
    puVar1 = puVar11;
  }
  _objc_retain(puVar1);
  _objc_release(puVar11);
  puVar12 = *(undefined **)(param_1 + 0x10);
  func_0x00010bfba020();
  _objc_retainAutoreleasedReturnValue();
  puVar11 = puVar12;
  func_0x00010bef0c80();
  _objc_retainAutoreleasedReturnValue();
  puVar13 = *(undefined **)(param_1 + 0x10);
  func_0x00010c24a7c0();
  _objc_retainAutoreleasedReturnValue();
  if ((puVar12 == (undefined *)0x0) ||
     (puVar14 = puVar12, func_0x000100bf39e4(), ((ulong)puVar14 & 1) == 0)) {
    bVar2 = puVar13 != (undefined *)0x0;
  }
  else {
    bVar2 = true;
  }
  uVar15 = *(ulong *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar15;
  func_0x00010c0d76c0();
  _objc_release(uVar15);
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar16;
  func_0x00010c0774c0();
  if ((int)uVar9 == 0) {
    bVar3 = false;
  }
  else {
    lVar17 = *(long *)(param_1 + 8);
    func_0x00010bf0e140();
    bVar3 = lVar17 == 0x67;
  }
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar16;
  func_0x00010bfb78c0();
  if ((int)uVar9 == 0) {
    uVar37 = 0;
  }
  else {
    lVar17 = *(long *)(param_1 + 8);
    func_0x00010bf0e140();
    uVar37 = (uint)(lVar17 == 0x67);
  }
  _objc_release(uVar16);
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar16;
  func_0x00010bf6d820();
  if ((int)uVar9 == 0) {
    bVar4 = false;
  }
  else {
    lVar17 = *(long *)(param_1 + 8);
    func_0x00010bf0e140();
    bVar4 = lVar17 == 0x67;
  }
  _objc_release(uVar16);
  puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar16 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar16;
  func_0x00010bfe2d20();
  _objc_release(uVar16);
  if ((int)uVar9 != 0) {
    puVar19 = param_3;
    puVar18 = puVar10;
    func_0x00010be61020(param_1);
    goto LAB_1050a2ba8;
  }
  if (bVar2) {
    if (puVar11 == (undefined *)0x0) {
      puVar41 = puVar13;
      func_0x00010bef4a60();
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar18 = *(undefined **)(param_1 + 0x30);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar19 = puVar11;
      func_0x000107cf6e3c(puVar11);
      _objc_retainAutoreleasedReturnValue();
      puVar41 = puVar18;
      func_0x00010c0f3e20();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar19);
      _objc_release(puVar18);
    }
  }
  else {
    puVar41 = (undefined *)0x0;
  }
  puVar19 = puVar41;
  func_0x00010c0745c0();
  uVar7 = *(ulong *)(param_1 + 8);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar15 = uVar7;
  func_0x00010bfe2700();
  _objc_release(uVar7);
  if ((uVar15 & 1) == 0) {
    uStack_e0 = *(undefined8 *)(param_1 + 0x40);
    uVar16 = *(undefined8 *)(param_1 + 8);
    func_0x00010c244280(uVar16);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar16;
    func_0x00010c2923e0();
    _objc_retainAutoreleasedReturnValue();
    uVar20 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010bf60940(uVar20);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0ba900();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar20);
    _objc_release(uVar9);
    _objc_release(uVar16);
    puVar39 = *(undefined **)(param_1 + 0x18);
    func_0x00010bf0e140();
    uVar9 = *(undefined8 *)(param_1 + 8);
    func_0x00010bf46560();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0daca0();
    uVar16 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(puVar39);
    _objc_retain(puVar1);
    _objc_retain(puVar11);
    _objc_retain(puVar13);
    _objc_retain(uVar16);
    _objc_retain(puVar41);
    _objc_retain(uStack_e0);
    puVar18 = puVar41;
    func_0x00010c0745c0();
    puVar34 = puVar39;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar21 = puVar34;
    func_0x00010bf86580();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar34);
    _objc_retain(puVar1);
    if (bVar2) {
      lVar17 = 5;
    }
    else {
      puVar34 = puVar1;
      func_0x00010c07a6a0();
      if ((((ulong)puVar34 & 1) == 0) &&
         (puVar34 = puVar1, func_0x00010901df08(), ((ulong)puVar34 & 1) == 0)) {
        puVar34 = puVar1;
        func_0x00010bfb8280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        lVar17 = 3;
        if (puVar34 == (undefined *)0x0) {
          lVar17 = 4;
        }
      }
      else {
        lVar17 = 1;
      }
    }
    _objc_release(puVar1);
    if (((ulong)puVar18 & 1) == 0) {
      if (puVar21 == (undefined *)0x0) {
        puVar34 = puVar1;
        func_0x00010bfb8280();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if ((puVar34 != (undefined *)0x0) ||
           (puVar34 = puVar1, func_0x00010c06d560(), ((ulong)puVar34 & 1) != 0)) goto LAB_1050a1a94;
        puVar34 = puVar1;
        func_0x00010901c6c4();
        uVar20 = 6;
        if ((int)puVar34 == 0) {
          uVar20 = 0;
        }
        puStack_138 = puVar39;
        func_0x000107cf2388(puVar39,puVar1,uVar20,0x13,0xfffffffffb39d9f1,0,0,0);
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar34 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc(PTR__OBJC_CLASS___NSAttributedString_1126af068);
        puVar22 = PTR__OBJC_CLASS___UIFont_1126aec38;
        func_0x00010c0c7340(0x402e000000000000);
        _objc_retainAutoreleasedReturnValue();
        puVar23 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e840(puVar34);
        _objc_release(puVar23);
        _objc_release(puVar22);
        puVar22 = PTR_PTR_1126b4738;
        _objc_alloc(PTR_PTR_1126b4738);
        func_0x00010c016020(*(undefined8 *)PTR__UIEdgeInsetsZero_110345bb0,
                            *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 8),
                            *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10),
                            *(undefined8 *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18));
        puStack_138 = PTR_PTR_1126b4740;
        func_0x00010bfb9b20();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar22);
        _objc_release(puVar34);
      }
    }
    else {
LAB_1050a1a94:
      puStack_138 = (undefined *)0x0;
    }
    uVar20 = uVar16;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar24 = uVar20;
    func_0x00010c080e80();
    if (((int)uVar24 == 0) ||
       (puVar34 = puVar1, func_0x000100bec1f0(puVar1,0), ((ulong)puVar34 & 1) == 0)) {
      _objc_release(uVar20);
LAB_1050a1c5c:
      puVar34 = puVar1;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar1;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar1;
      func_0x00010c294420();
      _objc_retainAutoreleasedReturnValue();
      puVar25 = puVar1;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      puVar26 = puVar25;
      func_0x00010bf1acc0();
      _objc_retainAutoreleasedReturnValue();
      puVar40 = puVar1;
      func_0x00010bf1bae0();
      _objc_retainAutoreleasedReturnValue();
      puVar27 = puVar40;
      func_0x00010bf1c0a0();
      _objc_retainAutoreleasedReturnValue();
      puVar28 = PTR__OBJC_CLASS___NSDate_1126ae770;
      func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
      _objc_retainAutoreleasedReturnValue();
      puVar29 = puVar1;
      func_0x00010901cdb0(puVar1,puVar28);
      puVar30 = PTR_PTR_1126b19f8;
      func_0x00010c1164a0();
      _objc_retainAutoreleasedReturnValue();
      puVar31 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      puVar32 = puVar34;
      func_0x000108feb5c8(puVar34,puVar22,puVar23,puVar26,puVar27,0,puVar29,puVar31);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar31);
      _objc_release(puVar30);
      _objc_release(puVar28);
      _objc_release(puVar27);
      _objc_release(puVar40);
      _objc_release(puVar26);
      _objc_release(puVar25);
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar34);
      puVar34 = puVar32;
      func_0x000108fec9ec(puVar32,0);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      puVar34 = puVar1;
      func_0x00010bf5b820();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar34;
      func_0x00010c116cc0();
      _objc_retainAutoreleasedReturnValue();
      puVar23 = puVar22;
      func_0x00010c08fa60();
      _objc_release(puVar22);
      _objc_release(puVar34);
      _objc_release(uVar20);
      if (puVar23 == (undefined *)0x0) goto LAB_1050a1c5c;
      puVar32 = puVar1;
      func_0x00010bf5b820();
      _objc_retainAutoreleasedReturnValue();
      puVar22 = puVar32;
      func_0x00010c116cc0();
      _objc_retainAutoreleasedReturnValue();
      puVar34 = puVar22;
      func_0x000108fecaa4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar22);
    }
    _objc_release(puVar32);
    puVar22 = PTR_PTR_1126b41d8;
    _objc_alloc();
    func_0x00010c01a700();
    puVar23 = PTR_PTR_1126b40a8;
    _objc_alloc();
    puVar25 = puVar1;
    func_0x00010c2923e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0491a0();
    _objc_release(puVar25);
    puVar25 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    puVar26 = puVar1;
    func_0x00010901d7c4(puVar1);
    _objc_retainAutoreleasedReturnValue();
    if (lVar17 == 5) {
      if (puVar11 == (undefined *)0x0) {
        puVar27 = puVar13;
        func_0x00010bf367c0();
        _objc_retainAutoreleasedReturnValue();
      }
      else {
        puVar27 = puVar11;
        func_0x000107cf6f88();
        _objc_retainAutoreleasedReturnValue();
      }
      puVar40 = puVar27;
      func_0x00010c08fa60();
      if (puVar40 == (undefined *)0x0) {
        puVar28 = puVar41;
        func_0x00010bef52c0(puVar41);
        _objc_retainAutoreleasedReturnValue();
        puVar29 = puVar28;
        func_0x00010bfb1920();
        _objc_retainAutoreleasedReturnValue();
        puVar40 = puVar29;
        func_0x00010bf20ee0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar29);
        _objc_release(puVar28);
      }
      else {
        _objc_retain(puVar27);
        puVar40 = puVar27;
      }
      puVar28 = puVar41;
      func_0x00010c116d40();
      _objc_retainAutoreleasedReturnValue();
      puVar29 = puVar28;
      func_0x000108fecaa4();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar34);
      puVar34 = puVar41;
      func_0x00010bf85d80();
      _objc_retainAutoreleasedReturnValue();
      puVar30 = puVar34;
      func_0x00010c08fa60();
      _objc_release(puVar34);
      puVar34 = puVar26;
      if (puVar30 != (undefined *)0x0) {
        puVar34 = puVar41;
        func_0x00010bf85d80(puVar41);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(puVar26);
      }
      _objc_release(puVar28);
      _objc_release(puVar27);
      puVar26 = puVar34;
      puVar34 = puVar29;
    }
    else {
      puVar40 = (undefined *)0x0;
    }
    puVar27 = (undefined *)0x0;
    if ((int)puVar18 == 0) {
      puVar27 = puVar25;
    }
    _objc_retain(puVar27);
    puVar18 = puVar1;
    func_0x00010c2923e0(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar28 = puVar18;
    func_0x00010c0720c0();
    puStack_c0 = puVar34;
    func_0x000107d4c020(puVar34,puStack_138,uStack_e0,puVar26,puVar27,puVar28,lVar17,puVar40);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar27);
    _objc_release(uStack_e0);
    _objc_release(puVar18);
    _objc_release(puVar40);
    _objc_release(puVar26);
    _objc_release(puVar25);
    _objc_release(puVar23);
    _objc_release(puVar22);
    _objc_release(puVar34);
    _objc_release(puVar21);
    _objc_release(puStack_138);
    _objc_release(puVar41);
    _objc_release(uVar16);
    _objc_release(puVar13);
    _objc_release(puVar11);
    _objc_release(puVar1);
    _objc_release(puVar39);
    _objc_release(uVar9);
    puVar18 = puVar10;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar18 != (undefined *)0x0 && !bVar2) {
      puVar18 = PTR_PTR_1126b4748;
      func_0x00010c101e00(PTR_PTR_1126b4748);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar14);
      _objc_release(puVar18);
      puVar18 = PTR_PTR_1126b4748;
      func_0x00010c101e00(PTR_PTR_1126b4748);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar14);
      _objc_release(puVar18);
      puVar18 = PTR_PTR_1126b4748;
      func_0x00010c101e00(PTR_PTR_1126b4748);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar14);
      _objc_release(puVar18);
      puVar18 = PTR_PTR_1126b4748;
      func_0x00010c101e00(PTR_PTR_1126b4748);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar14);
LAB_1050a226c:
      _objc_release(puVar18);
    }
    _objc_release(uStack_e0);
  }
  else {
    puVar18 = puVar10;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar18 == (undefined *)0x0) {
      puVar18 = puVar10;
      func_0x00010c06d560();
      if ((((uint)puVar18 | (uint)puVar19) & 1) == 0) {
        uStack_e0 = *(undefined8 *)(param_1 + 8);
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar9 = uStack_e0;
        func_0x00010c0daca0();
        puVar18 = *(undefined **)(param_1 + 8);
        func_0x00010bf46560(puVar18);
        _objc_retainAutoreleasedReturnValue();
        puVar34 = puVar18;
        func_0x00010c0dac60();
        puVar21 = puVar10;
        func_0x000107ce7374(puVar10,uVar9,puVar34);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar14);
        _objc_release(puVar21);
        puStack_c0 = (undefined *)0x0;
        goto LAB_1050a226c;
      }
      puStack_c0 = (undefined *)0x0;
    }
    else {
      puStack_c0 = (undefined *)0x0;
    }
  }
  lVar17 = *(long *)(param_1 + 8);
  func_0x00010bfce860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar17 != 0) {
    puVar18 = PTR_PTR_1126b4748;
    func_0x00010c101e00(PTR_PTR_1126b4748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar14);
    _objc_release(puVar18);
  }
  if (bVar2) {
    puVar18 = PTR_PTR_1126b4748;
    func_0x00010c101e00(PTR_PTR_1126b4748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar14);
    _objc_release(puVar18);
    puVar18 = PTR_PTR_1126b4748;
    func_0x00010c101e00(PTR_PTR_1126b4748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar14);
    _objc_release(puVar18);
    if (puVar13 == (undefined *)0x0) {
      func_0x000107ce77c0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar14);
      _objc_release(puVar18);
    }
    puVar18 = PTR_PTR_1126b4748;
    func_0x00010c101e00(PTR_PTR_1126b4748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar14);
    _objc_release(puVar18);
    puVar18 = PTR_PTR_1126b4748;
    func_0x00010c101e00(PTR_PTR_1126b4748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar14);
    _objc_release(puVar18);
LAB_1050a2ab0:
    puVar18 = PTR_PTR_1126b4748;
    func_0x00010c101e00(PTR_PTR_1126b4748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar14);
    _objc_release(puVar18);
  }
  else {
    puVar18 = puVar10;
    func_0x00010bfb8280();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (puVar18 == (undefined *)0x0) {
      lVar17 = *(long *)(param_1 + 8);
      func_0x00010bf0e140();
      if (lVar17 == 0x4c) {
        iVar5 = (int)*(undefined8 *)(param_1 + 0x48);
        func_0x00010bf1f440();
        if (iVar5 == 0) goto LAB_1050a27c4;
        puVar18 = puVar10;
        func_0x00010901c974();
        uVar6 = (uint)puVar18;
      }
      else {
LAB_1050a27c4:
        uVar6 = 0;
      }
      puVar18 = puVar10;
      func_0x00010901c54c();
      if ((((ulong)puVar18 & 1) == 0) &&
         (puVar18 = puVar10, func_0x000100bec434(), (((uint)puVar18 | uVar6) & 1) == 0)) {
        uVar15 = *(ulong *)(param_1 + 8);
        func_0x00010bf46560();
        _objc_retainAutoreleasedReturnValue();
        uVar8 = uVar15;
        func_0x00010c237b80();
        _objc_release(uVar15);
        if ((uVar8 & 1) == 0) {
          uVar9 = *(undefined8 *)(param_1 + 8);
          func_0x00010c247b60(uVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar18 = puVar10;
          func_0x000107ce72cc(puVar10,uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar14);
          _objc_release(puVar18);
          _objc_release(uVar9);
        }
      }
      iVar5 = (int)*(undefined8 *)(param_1 + 0x48);
      func_0x0001050dd288();
      if (iVar5 == 0) {
        uVar9 = 0;
      }
      else {
        puVar18 = puVar10;
        func_0x00010bf1bae0();
        _objc_retainAutoreleasedReturnValue();
        puVar34 = puVar18;
        func_0x00010bf1af20();
        _objc_retainAutoreleasedReturnValue();
        puVar21 = puVar34;
        func_0x00010c08fa60();
        _objc_release(puVar34);
        _objc_release(puVar18);
        if (puVar21 == (undefined *)0x0) {
          uVar9 = 0;
        }
        else {
          puVar18 = puVar10;
          func_0x000107ce7504(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar14);
          _objc_release(puVar18);
          uVar9 = 1;
        }
      }
      uVar16 = *(undefined8 *)(param_1 + 0x48);
      FUN_1050ac23c(uVar16,puVar10);
      if ((int)uVar16 != 0) {
        puVar18 = puVar10;
        func_0x000107ce75a4(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar14);
        _objc_release(puVar18);
        uVar9 = 1;
      }
      puVar18 = puVar10;
      func_0x000107ce744c(puVar10,uVar9);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar14);
      _objc_release(puVar18);
      puVar18 = puVar10;
      func_0x00010901c6c4();
      if (((int)puVar18 != 0) &&
         (puVar18 = puVar10, func_0x00010901c73c(), ((ulong)puVar18 & 1) == 0)) {
        puVar18 = puVar10;
        func_0x000107ce7a04(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar14);
        _objc_release(puVar18);
      }
      puVar34 = *(undefined **)(param_1 + 8);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      puVar18 = puVar34;
      func_0x00010c237b80();
      if (((ulong)puVar18 & 1) == 0) {
        puVar18 = puVar10;
        func_0x00010901c974();
        _objc_release(puVar34);
        if ((int)puVar18 != 0) {
          puVar34 = puVar10;
          func_0x000107ce7a9c(puVar10);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar14);
          goto LAB_1050a29e4;
        }
      }
      else {
LAB_1050a29e4:
        _objc_release(puVar34);
      }
      uVar16 = *(undefined8 *)(param_1 + 8);
      func_0x00010bf46560();
      _objc_retainAutoreleasedReturnValue();
      uVar9 = uVar16;
      func_0x00010c237b80();
      _objc_release(uVar16);
      if ((int)uVar9 != 0) {
        puVar18 = puVar10;
        func_0x000107ce7b38(puVar10);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar14);
        _objc_release(puVar18);
      }
      lVar35 = *(long *)(param_1 + 0x10);
      func_0x00010bfba020();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar35;
      _objc_release();
      if (lVar35 != 0) {
        func_0x000107ce77c0();
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar14);
        _objc_release(lVar17);
      }
      lVar17 = *(long *)(param_1 + 8);
      func_0x00010bf0e140();
      if (lVar17 == 0x46) {
        iVar5 = (int)*(undefined8 *)(param_1 + 0x48);
        func_0x00010bf1f440();
        if (iVar5 != 0) goto LAB_1050a2ab0;
      }
    }
    else {
      puVar18 = PTR_PTR_1126b4748;
      func_0x00010c101e00(PTR_PTR_1126b4748);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar14);
      _objc_release(puVar18);
      if (bVar4) {
        puVar18 = PTR_PTR_1126b4748;
        func_0x00010c101e00(PTR_PTR_1126b4748);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar14);
        _objc_release(puVar18);
        puVar18 = PTR_PTR_1126b4748;
        func_0x00010c101e00(PTR_PTR_1126b4748);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar14);
        _objc_release(puVar18);
      }
      puVar18 = PTR_PTR_1126b4748;
      func_0x00010c101e00(PTR_PTR_1126b4748);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar14);
      _objc_release(puVar18);
      uVar9 = *(undefined8 *)(param_1 + 8);
      func_0x00010c247b60(uVar9);
      _objc_retainAutoreleasedReturnValue();
      puVar18 = PTR_PTR_1126b02a8;
      _objc_retain();
      _objc_retain(puVar10);
      _objc_alloc(puVar18);
      puVar34 = PTR_PTR_1126b40e8;
      _objc_alloc(PTR_PTR_1126b40e8);
      func_0x00010c0490a0();
      _objc_release(uVar9);
      _objc_release(puVar10);
      func_0x00010c01b460(puVar18);
      _objc_release(puVar34);
      ppuVar36 = &PTR____CFConstantStringClassReference_110dc4878;
      func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4878,0);
      _objc_retainAutoreleasedReturnValue();
      ppuVar33 = ppuVar36;
      func_0x000107d4ba6c();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(ppuVar36);
      _objc_release(puVar18);
      func_0x00010befa120(puVar14);
      _objc_release(ppuVar33);
      _objc_release(uVar9);
      puVar18 = puVar10;
      func_0x00010901c54c();
      if ((int)puVar18 != 0) {
        uVar9 = *(undefined8 *)(param_1 + 0x48);
        func_0x00010bf1f440();
        if ((int)uVar9 != 0) {
          func_0x000107ce7bd8();
          _objc_retainAutoreleasedReturnValue();
          func_0x00010befa120(puVar14);
          _objc_release(uVar9);
        }
      }
      if (bVar4) {
        puVar18 = PTR_PTR_1126b4748;
        func_0x00010c101e00(PTR_PTR_1126b4748);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar14);
        _objc_release(puVar18);
      }
      puVar18 = PTR_PTR_1126b4748;
      func_0x00010c101e00(PTR_PTR_1126b4748);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(puVar14);
      _objc_release(puVar18);
      puVar18 = puVar10;
      func_0x000100bf119c();
      if (uVar37 == 0 && (((uint)puVar18 ^ 0xffffffff) & 1) == 0) {
        puVar18 = PTR_PTR_1126b4748;
        func_0x00010c101e00(PTR_PTR_1126b4748);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar14);
        _objc_release(puVar18);
      }
      puVar18 = PTR_PTR_1126b02a8;
      if (uVar37 == 0) {
        _objc_retain(puVar10);
        _objc_alloc(puVar18);
        func_0x00010c01b460();
        _objc_release(puVar10);
        ppuVar36 = &PTR____CFConstantStringClassReference_110dc36f8;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc36f8,0);
        _objc_retainAutoreleasedReturnValue();
        ppuVar33 = ppuVar36;
        func_0x000107d4ba6c();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar36);
        _objc_release(puVar18);
        func_0x00010befa120(puVar14);
        _objc_release(ppuVar33);
      }
      if ((uVar8 & 1) == 0 && !bVar3) {
        puVar18 = PTR_PTR_1126b4748;
        func_0x00010c101e00(PTR_PTR_1126b4748);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar14);
        _objc_release(puVar18);
      }
      if (uVar37 == 0) goto LAB_1050a2ab0;
    }
  }
  uVar16 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  uVar9 = uVar16;
  func_0x00010bfe27c0();
  _objc_release(uVar16);
  if ((((uint)uVar9 | (uint)puVar19 | uVar37) & 1) == 0) {
    func_0x000107ce71a0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar14);
    _objc_release(uVar16);
  }
  ppuVar36 = &PTR____CFConstantStringClassReference_110eba438;
  func_0x000107d4bf04();
  _objc_retainAutoreleasedReturnValue();
  puVar34 = PTR_PTR_1126b1210;
  _objc_alloc();
  puVar18 = (undefined *)0x0;
  puVar19 = puStack_c0;
  func_0x00010c019f60();
  (**(code **)(param_3 + 0x10))(param_3,puVar34);
  _objc_release(puVar34);
  _objc_release(ppuVar36);
  _objc_release(puVar41);
  _objc_release(puStack_c0);
LAB_1050a2ba8:
  _objc_release(puVar14);
  _objc_release(puVar13);
  _objc_release(puVar11);
  _objc_release(puVar12);
  _objc_release(puVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar38) {
    ___stack_chk_fail();
    param_3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_retain(puVar18);
    _objc_retain(puVar19);
    _objc_opt_new(param_3);
    ppuVar36 = &PTR____CFConstantStringClassReference_110eba438;
    func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110eba438);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = *(undefined8 *)(puVar10 + 8);
    func_0x00010c247b60(uVar9);
    _objc_retainAutoreleasedReturnValue();
    puVar10 = puVar18;
    func_0x000107ce72cc(puVar18,uVar9);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(param_3);
    _objc_release(puVar10);
    _objc_release(uVar9);
    puVar10 = puVar18;
    func_0x000107ce744c(puVar18,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar18);
    func_0x00010befa120(param_3);
    _objc_release(puVar10);
    func_0x000107ce7238();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(param_3);
    _objc_release(puVar10);
    puVar10 = PTR_PTR_1126b1210;
    _objc_alloc(PTR_PTR_1126b1210);
    func_0x00010c019f60();
    (**(code **)(puVar19 + 0x10))(puVar19,puVar10);
    _objc_release(puVar19);
    _objc_release(puVar10);
    _objc_release(ppuVar36);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1050a2c18; end: 1050a2d7b; -[SCFriendUnifiedActionMenuCategoryDataProvider _modifiedActionMenuWithUserDetailsHidden:snapchatter:] */

void FUN_1050a2c18(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_retain(param_4);
  _objc_retain(param_3);
  _objc_opt_new(puVar1);
  ppuVar2 = &PTR____CFConstantStringClassReference_110eba438;
  func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110eba438);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c247b60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_4;
  func_0x000107ce72cc(param_4,uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar4 = param_4;
  func_0x000107ce744c(param_4,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010befa120(puVar1);
  _objc_release(uVar4);
  func_0x000107ce7238();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar1);
  _objc_release(uVar4);
  puVar5 = PTR_PTR_1126b1210;
  _objc_alloc(PTR_PTR_1126b1210);
  func_0x00010c019f60();
  (**(code **)(param_3 + 0x10))(param_3,puVar5);
  _objc_release(param_3);
  _objc_release(puVar5);
  _objc_release(ppuVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050a2d7c; end: 1050a2d93; -[SCFriendUnifiedActionMenuCategoryDataProvider delegate] */

void FUN_1050a2d7c(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a2d94; end: 1050a2d9f; -[SCFriendUnifiedActionMenuCategoryDataProvider setDelegate:] */

void FUN_1050a2d94(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 1050a2da0; end: 1050a2e2b; -[SCFriendUnifiedActionMenuCategoryDataProvider .cxx_destruct] */

void FUN_1050a2da0(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
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



/* Entry: 1050a2e2c; end: 1050a2ef7; -[SCFriendUnifiedActionMenuMapDataProvider initWithMapSnapshotViewScopeExposer:mapSnapshotViewScopeServices:personLocationsProvider:] */

undefined1 *
FUN_1050a2e2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_38 = PTR_PTR_1126e5f10;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
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
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050a2ef8; end: 1050a2f3f; -[SCFriendUnifiedActionMenuMapDataProvider dealloc] */

void FUN_1050a2ef8(long param_1)

{
  long lStack_30;
  undefined *puStack_28;
  
  func_0x00010c26ab80(*(undefined8 *)(param_1 + 0x20));
  puStack_28 = PTR_PTR_1126e5f10;
  lStack_30 = param_1;
  _objc_msgSendSuper2(&lStack_30,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1050a2f40; end: 1050a313f; -[SCFriendUnifiedActionMenuMapDataProvider mapViewModelForFriendId:currentUserId:] */

void FUN_1050a2f40(undefined8 param_1,undefined8 param_2,double param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  _objc_retain(param_6);
  puVar6 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  _objc_retain(param_7);
  func_0x00010c0b6c20(puVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf20c00();
  _objc_release(puVar6);
  lVar1 = param_4;
  func_0x00010bdefd40(param_3 + -20.0,0x405e000000000000,param_4,param_5,param_6,param_7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_7);
  if (lVar1 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    lVar2 = *(long *)(param_4 + 0x18);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c0fa5c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010bf64de0(lVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010be1ff00(param_4,param_5,lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar2);
    lVar2 = lVar3;
    func_0x00010c09e300();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar2;
    _objc_release();
    puVar6 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    puVar5 = (undefined *)0x0;
    if ((lVar2 != 0) && (param_4 != 0)) {
      func_0x0001050ac368();
      _objc_retainAutoreleasedReturnValue();
      lVar2 = lVar3;
      func_0x00010c09e300();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c14de00(puVar6,param_5,lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar4);
      puVar5 = puVar6;
    }
    puVar6 = PTR_PTR_1126b4750;
    _objc_alloc(PTR_PTR_1126b4750);
    func_0x00010c0288e0(param_3 + -20.0,0x405e000000000000);
    _objc_release(puVar5);
    _objc_release(param_4);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1050a3140; end: 1050a33a3; -[SCFriendUnifiedActionMenuMapDataProvider _createMapSnapshotViewForFriendId:currentUserId:mapSize:] */

void FUN_1050a3140(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  
  uVar7 = param_1;
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = *(long *)(param_3 + 0x18);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c0fa5c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  if (lVar2 == 0) {
    puVar9 = (undefined *)0x0;
  }
  else {
    lVar1 = *(long *)(param_3 + 8);
    func_0x00010c150520();
    _objc_retainAutoreleasedReturnValue();
    _objc_release();
    if (lVar1 != 0) {
      func_0x00010c12e1c0(*(undefined8 *)(param_3 + 8));
      _objc_unsafeClaimAutoreleasedReturnValue();
    }
    puVar9 = PTR_PTR_1126b40c0;
    _objc_alloc_init(PTR_PTR_1126b40c0);
    puVar3 = PTR_PTR_1126b4758;
    _objc_alloc();
    puVar4 = puVar3;
    func_0x000100078e94();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c015ec0(puVar3,param_4,param_5,param_6,puVar4,*(undefined8 *)(param_3 + 0x18));
    uVar8 = *(undefined8 *)(param_3 + 0x20);
    *(undefined **)(param_3 + 0x20) = puVar3;
    _objc_release(uVar8);
    _objc_release(puVar4);
    func_0x00010c21c120(*(undefined8 *)(param_3 + 0x20));
    puVar3 = PTR_PTR_1126b4760;
    _objc_alloc(PTR_PTR_1126b4760);
    uVar8 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010c073760(uVar8);
    func_0x00010bf17920(*(undefined8 *)(param_3 + 0x20));
    uVar5 = *(undefined8 *)(param_3 + 0x20);
    func_0x00010bf87000(uVar5);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c01f000(uVar7,puVar3,param_4,uVar8,uVar5);
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126b4768;
    _objc_alloc(PTR_PTR_1126b4768);
    func_0x00010c0286a0(param_1,param_2);
    puVar6 = PTR_PTR_1126ae820;
    _objc_alloc_init(PTR_PTR_1126ae820);
    uVar7 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010bf247a0(uVar7,param_4,puVar9,puVar6,0xffffffffffffffff,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9d620(*(undefined8 *)(param_3 + 8),param_4,uVar7);
    func_0x00010c0d9840(puVar6,param_4,puVar4);
    _objc_release(uVar7);
    _objc_release(puVar6);
    _objc_release(puVar4);
    _objc_release(puVar3);
  }
  _objc_release(lVar2);
  _objc_release(param_6);
  _objc_release(param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1050a33a4; end: 1050a346f; -[SCFriendUnifiedActionMenuMapDataProvider _getLastLocationUpdateLabelForLastLocationUpdateDate:] */

void FUN_1050a33a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_3);
  if (param_3 == 0) {
    puVar2 = (undefined *)0x0;
  }
  else {
    puVar1 = PTR__OBJC_CLASS___NSCalendar_1126aeec8;
    func_0x00010bf5e300();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c070320();
    if ((int)puVar2 == 0) {
      puVar2 = puVar1;
      func_0x00010c070360(puVar1,param_2,param_3);
      if ((int)puVar2 == 0) {
        puVar2 = (undefined *)0x0;
      }
      else {
        FUN_1050ac350();
        _objc_retainAutoreleasedReturnValue();
      }
    }
    else {
      puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
      func_0x00010bfb5a60(0x404e000000000000,PTR__OBJC_CLASS___NSString_1126ae4d0,param_2,param_3,0,
                          0x18,0,0);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar1);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1050a3470; end: 1050a34b7; -[SCFriendUnifiedActionMenuMapDataProvider .cxx_destruct] */

void FUN_1050a3470(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050a34b8; end: 1050a3683; -[SCGroupUnifiedActionMenuCategoryDataProvider initWithGroupsDataFetcher:groupId:sourcePageType:hideHeader:memberNames:userId:attributedPage:legacySnapchatterServices:messagingExperimentService:] */

undefined1 *
FUN_1050a34b8(undefined8 param_1,undefined8 param_2,undefined **param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined4 param_10,undefined4 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  puVar1 = &uStack_70;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126e5f18;
  uStack_70 = param_1;
  _objc_msgSendSuper2(&uStack_70,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_5;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x18) = param_6;
    uVar2 = param_7;
    func_0x00010bf51e00();
    uVar6 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = uVar2;
    _objc_release(uVar6);
    *(undefined8 *)((long)puVar1 + 0x48) = param_9;
    _objc_retain(param_12);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined8 *)((long)puVar1 + 0x40) = param_12;
    _objc_release(uVar2);
    ppuVar3 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar4 = ppuVar3;
    func_0x00010bfc61a0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined ***)((long)puVar1 + 0x30) = ppuVar4;
    _objc_release(uVar2);
    _objc_release(ppuVar3);
    ppuVar4 = param_3;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    ppuVar5 = ppuVar4;
    func_0x00010bf85ec0();
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
    if (ppuVar5 != (undefined **)0x0) {
      ppuVar3 = ppuVar5;
    }
    _objc_retain(ppuVar3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined ***)((long)puVar1 + 0x28) = ppuVar3;
    _objc_release(uVar2);
    _objc_release(ppuVar5);
    _objc_release(ppuVar4);
  }
  _objc_release(param_12);
  _objc_release(param_7);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050a3684; end: 1050a4067; -[SCGroupUnifiedActionMenuCategoryDataProvider updateViewModelWithCompletionBlock:] */

void FUN_1050a3684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  bool bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  long lVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined *puVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  undefined8 uVar21;
  double dVar22;
  ulong in_stack_fffffffffffffeb0;
  
  lVar13 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_7);
  if (*(char *)(param_5 + 0x18) == '\x01') {
    lVar2 = *(long *)(param_5 + 0x20);
    func_0x00010bf529e0();
    if (lVar2 == 0) goto LAB_1050a3924;
    uVar3 = *(undefined8 *)(param_5 + 0x20);
    func_0x00010bf446e0();
    _objc_retainAutoreleasedReturnValue();
    uVar16 = uVar3;
    func_0x00010c0720c0();
    uVar21 = uVar16;
    func_0x00010052bbec();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar21;
    func_0x00010bfb3e60();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar21);
    puVar17 = PTR__OBJC_CLASS___UIScreen_1126aea10;
    func_0x00010c0b6c20(PTR__OBJC_CLASS___UIScreen_1126aea10);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf20c00();
    _CGRectGetWidth();
    _objc_release(puVar17);
    dVar18 = (double)NEON_fminnm(param_1,0x4079e00000000000);
    dVar22 = dVar18 + -88.0;
    if (dVar18 <= 0.0) {
      dVar22 = 280.0;
    }
    puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    uVar21 = 0x7fefffffffffffff;
    dVar18 = dVar22;
    func_0x00010bf20ba0(dVar22,0x7fefffffffffffff,uVar3);
    _objc_release(puVar17);
    _CGRectGetHeight(dVar18,uVar21,param_3,param_4);
    dVar19 = dVar18;
    func_0x00010c099280(uVar4);
    dVar20 = 16.0;
    puVar5 = PTR__OBJC_CLASS___UIFont_1126aec38;
    func_0x00010bf6d680();
    _objc_retainAutoreleasedReturnValue();
    puVar17 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c23d660(uVar3);
    _objc_release(puVar17);
    puVar14 = PTR__OBJC_CLASS___NSString_1126ae4d0;
    if ((int)uVar16 == 0) {
LAB_1050a3890:
      if ((ulong)(long)(dVar18 / dVar19) < 3) {
        puVar17 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc();
        puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e840();
        puVar14 = (undefined *)0x0;
      }
      else {
        ppuVar12 = &PTR____CFConstantStringClassReference_110dc4898;
        func_0x00010bcbeaa8(&PTR____CFConstantStringClassReference_110dc4898,0);
        _objc_retainAutoreleasedReturnValue();
        lVar2 = *(long *)(param_5 + 0x20);
        func_0x00010bf529e0();
        in_stack_fffffffffffffeb0 = lVar2 + 1;
        func_0x00010c14de00();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(ppuVar12);
        puVar17 = PTR__OBJC_CLASS___NSAttributedString_1126af068;
        _objc_alloc();
        puVar15 = PTR__OBJC_CLASS___UIColor_1126aea70;
        func_0x00010c23ba80();
        _objc_retainAutoreleasedReturnValue();
        puVar11 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
        func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010c04e840();
      }
      _objc_release(puVar11);
      _objc_release(puVar15);
      puVar15 = puVar14;
    }
    else {
      puVar17 = (undefined *)0x0;
      puVar15 = (undefined *)0x0;
      if (dVar22 < dVar20) goto LAB_1050a3890;
    }
    _objc_release(puVar5);
    _objc_release(uVar4);
    _objc_release(uVar3);
  }
  else {
LAB_1050a3924:
    puVar17 = (undefined *)0x0;
    puVar15 = (undefined *)0x0;
  }
  if (*(char *)(param_5 + 0x18) == '\x01') {
    lVar2 = *(long *)(param_5 + 0x20);
    func_0x00010bf529e0();
    bVar1 = lVar2 != 0;
    if (*(char *)(param_5 + 0x18) != '\x01') goto LAB_1050a3a70;
    lVar2 = *(long *)(param_5 + 0x20);
    func_0x00010bf529e0();
    if (lVar2 != 0) goto LAB_1050a3a70;
    uVar16 = 0;
  }
  else {
    bVar1 = false;
LAB_1050a3a70:
    uVar16 = *(undefined8 *)(param_5 + 8);
    uVar4 = *(undefined8 *)(param_5 + 0x10);
    uVar21 = *(undefined8 *)(param_5 + 0x28);
    uVar3 = *(undefined8 *)(param_5 + 0x30);
    uVar6 = *(undefined8 *)(param_5 + 0x38);
    func_0x00010c2928c0();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar8 = uVar7;
    func_0x00010c293a00();
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(uVar21);
    _objc_retain(puVar15);
    _objc_retain(puVar17);
    _objc_retain(uVar3);
    _objc_retain(uVar4);
    _objc_retain(uVar16);
    uVar9 = uVar8;
    func_0x00010c2923e0(uVar8);
    _objc_retainAutoreleasedReturnValue();
    uVar10 = uVar3;
    func_0x000108ef2144(uVar3,uVar9);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar3);
    _objc_release(uVar9);
    uVar3 = uVar10;
    func_0x0001085a35dc(uVar10,0);
    _objc_retainAutoreleasedReturnValue();
    puVar14 = PTR_PTR_1126b19f8;
    func_0x00010c1164a0();
    _objc_retainAutoreleasedReturnValue();
    puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar9 = uVar3;
    func_0x0001085a39a4(uVar3,0,puVar5,0,1,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(puVar14);
    puVar14 = PTR_PTR_1126b4290;
    _objc_alloc(PTR_PTR_1126b4290);
    func_0x00010c019040();
    _objc_release(uVar4);
    _objc_release(uVar16);
    puVar5 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    func_0x00010c01b460();
    uVar16 = uVar9;
    if (bVar1) {
      puVar11 = PTR__OBJC_CLASS___UIFont_1126aec38;
      func_0x00010c0c7340(0x4030000000000000,PTR__OBJC_CLASS___UIFont_1126aec38);
      _objc_retainAutoreleasedReturnValue();
      func_0x000107d4c794(uVar9,0,uVar21,puVar11,puVar15,0,puVar5,puVar5,0,puVar17);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(puVar11);
    }
    else {
      func_0x000107d4c020(uVar9,0,0,uVar21,puVar5,0,2,0,
                          in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(puVar5);
    _objc_release(puVar14);
    _objc_release(uVar9);
    _objc_release(uVar3);
    _objc_release(uVar10);
    _objc_release(puVar17);
    _objc_release(puVar15);
    _objc_release(uVar21);
    _objc_release(uVar8);
    _objc_release(uVar7);
    _objc_release(uVar6);
  }
  puVar14 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc_init(PTR__OBJC_CLASS___NSMutableArray_1126ae5d8);
  if ((*(byte *)(param_5 + 0x18) & 1) == 0) {
    puVar5 = PTR_PTR_1126b4748;
    func_0x00010c101e00(PTR_PTR_1126b4748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar14);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b4748;
    func_0x00010c101e00(PTR_PTR_1126b4748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar14);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b4748;
    func_0x00010c101e00(PTR_PTR_1126b4748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar14);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b4748;
    func_0x00010c101e00(PTR_PTR_1126b4748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar14);
    _objc_release(puVar5);
  }
  puVar5 = PTR_PTR_1126b4748;
  func_0x00010c101e00(PTR_PTR_1126b4748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar14);
  _objc_release(puVar5);
  puVar11 = *(undefined **)(param_5 + 0x40);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  puVar5 = puVar11;
  func_0x00010bf6d820();
  if ((int)puVar5 != 0) {
    lVar2 = *(long *)(param_5 + 0x48);
    _objc_release(puVar11);
    if (lVar2 != 0x67) goto LAB_1050a3ee8;
    puVar5 = PTR_PTR_1126b4748;
    func_0x00010c101e00(PTR_PTR_1126b4748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar14);
    _objc_release(puVar5);
    puVar5 = PTR_PTR_1126b4748;
    func_0x00010c101e00(PTR_PTR_1126b4748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar14);
    _objc_release(puVar5);
    puVar11 = PTR_PTR_1126b4748;
    func_0x00010c101e00(PTR_PTR_1126b4748);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010befa120(puVar14);
  }
  _objc_release(puVar11);
LAB_1050a3ee8:
  puVar5 = PTR_PTR_1126b4748;
  func_0x00010c101e00(PTR_PTR_1126b4748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar14);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b4748;
  func_0x00010c101e00(PTR_PTR_1126b4748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar14);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b4748;
  func_0x00010c101e00(PTR_PTR_1126b4748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar14);
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126b4748;
  func_0x00010c101e00(PTR_PTR_1126b4748);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010befa120(puVar14);
  _objc_release(puVar5);
  ppuVar12 = &PTR____CFConstantStringClassReference_110eba4f8;
  func_0x000107d4bf04(&PTR____CFConstantStringClassReference_110eba4f8);
  _objc_retainAutoreleasedReturnValue();
  puVar5 = PTR_PTR_1126b1210;
  _objc_alloc(PTR_PTR_1126b1210);
  func_0x00010c019f60();
  (**(code **)(param_7 + 0x10))(param_7,puVar5);
  _objc_release(puVar5);
  _objc_release(ppuVar12);
  _objc_release(puVar14);
  _objc_release(uVar16);
  _objc_release(puVar17);
  _objc_release(puVar15);
  _objc_release(param_7);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar13) {
    return;
  }
  ___stack_chk_fail();
  _objc_loadWeakRetained(param_7 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a4068; end: 1050a407f; -[SCGroupUnifiedActionMenuCategoryDataProvider delegate] */

void FUN_1050a4068(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1050a4080; end: 1050a408b; -[SCGroupUnifiedActionMenuCategoryDataProvider setDelegate:] */

void FUN_1050a4080(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeWeak_11034d338)(param_1 + 0x50,param_3);
  return;
}



/* Entry: 1050a408c; end: 1050a40ff; -[SCGroupUnifiedActionMenuCategoryDataProvider .cxx_destruct] */

void FUN_1050a408c(long param_1)

{
  _objc_destroyWeak(param_1 + 0x50);
  _objc_storeStrong(param_1 + 0x40,0);
  _objc_storeStrong(param_1 + 0x38,0);
  _objc_storeStrong(param_1 + 0x30,0);
  _objc_storeStrong(param_1 + 0x28,0);
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1050a4100; end: 1050a41ab; -[SCFriendUnifiedProfileActionMenuPresentingActionHandler initWithFriendUnifiedProfileDataSource:friendActionSheetScopeExposer:sourcePageType:] */

undefined1 *
FUN_1050a4100(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126e5f20;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_retain(param_4);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined8 *)((long)puVar1 + 0x10) = param_4;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1050a41ac; end: 1050a420f; -[SCFriendUnifiedProfileActionMenuPresentingActionHandler handleActionWithSender:actionModel:fromSourceView:] */

undefined8
FUN_1050a41ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010bfe5ec0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_4;
  func_0x00010c0720c0();
  _objc_release(param_4);
  if ((int)uVar1 != 0) {
    func_0x00010be7b800(param_1);
  }
  return uVar1;
}



/* Entry: 1050a4210; end: 1050a436b; -[SCFriendUnifiedProfileActionMenuPresentingActionHandler _presentFriendProfilePageActionMenu] */

void FUN_1050a4210(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126aead8;
  _objc_alloc(PTR_PTR_1126aead8);
  lVar6 = param_1 + 0x20;
  _objc_loadWeakRetained(lVar6);
  func_0x00010c038f40(puVar1,param_2,lVar6,0);
  _objc_release(lVar6);
  puVar2 = PTR_PTR_1126b2860;
  _objc_alloc(PTR_PTR_1126b2860);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c2923e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0daca0();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010bf46560();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0dac60();
  func_0x00010c058a40(puVar2,param_2,puVar1,uVar3,0x66,uVar7,0,1,0);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  lVar6 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar6 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  func_0x00010bf9d620(*(undefined8 *)(param_1 + 0x10),param_2,puVar2);
  _objc_release(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1050a436c; end: 1050a436f; -[SCFriendUnifiedProfileActionMenuPresentingActionHandler friendActionSheetOpenProfile:] */

void FUN_1050a436c(void)

{
  return;
}



/* Entry: 1050a4370; end: 1050a4373; -[SCFriendUnifiedProfileActionMenuPresentingActionHandler friendActionSheetShowCameraForSnap:] */

void FUN_1050a4370(void)

{
  return;
}



/* Entry: 1050a4374; end: 1050a43bb; -[SCFriendUnifiedProfileActionMenuPresentingActionHandler friendActionSheetDidDismiss:] */

void FUN_1050a4374(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  func_0x00010c150520();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar1 != 0) {
    func_0x00010c12e1c0(*(undefined8 *)(param_1 + 0x10));
    _objc_unsafeClaimAutoreleasedReturnValue();
  }
  return;
}



/* Entry: 1050a43bc; end: 1050a43d3; -[SCFriendUnifiedProfileActionMenuPresentingActionHandler presentingViewController] */

void FUN_1050a43bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


