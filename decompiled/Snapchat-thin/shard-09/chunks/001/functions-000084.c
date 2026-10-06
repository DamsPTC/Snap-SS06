/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10698f654; end: 10698f6db; -[SCComposerPeopleHiddenSuggestedFriendStore _removeHiddenSnapchatter:completionQueue:completionHandler:] */

void FUN_10698f654(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12ca80();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10698f6dc; end: 10698f70b; -[SCComposerPeopleHiddenSuggestedFriendStore .cxx_destruct] */

void FUN_10698f6dc(long param_1)

{
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 10698f70c; end: 10698f72f; +[SCCHiddenSuggestedFriendStoring valdiMarshallableObjectDescriptor] */

void FUN_10698f70c(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11094efe0;
  param_1[1] = &PTR_DAT_11094f028;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  return;
}



/* Entry: 10698f730; end: 10698f78b;  */

undefined8 FUN_10698f730(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126cf658;
  _objc_retain(param_2);
  _objc_opt_class(puVar1);
  func_0x00010b967838(param_1,param_2,puVar1);
  FUN_10698f858();
  return param_1;
}



/* Entry: 10698f78c; end: 10698f797; +[SCComposerRecentFriendOperationView componentPath] */

undefined ** FUN_10698f78c(void)

{
  return &PTR____CFConstantStringClassReference_110e66858;
}



/* Entry: 10698f798; end: 10698f7cb; -[SCComposerRecentFriendOperationView initWithViewModel:componentContext:runtime:] */

void FUN_10698f798(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f3f68;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithViewModelUntyped_compone_1125f6218);
  return;
}



/* Entry: 10698f7cc; end: 10698f817; -[SCComposerRecentFriendOperationView setViewModel:] */

void FUN_10698f7cc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  func_0x00010c295200(param_1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c2226c0();
  FUN_10698f858();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10698f818; end: 10698f857; -[SCComposerRecentFriendOperationView viewModel] */

void FUN_10698f818(undefined8 param_1)

{
  func_0x00010c295200();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c29d560();
  _objc_retainAutoreleasedReturnValue();
  FUN_10698f858();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10698f858; end: 10698f85f;  */

void FUN_10698f858(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10698f860; end: 10698f90b; -[SCComposerRecentFriendOperationType__Enum init] */

undefined1 * FUN_10698f860(undefined1 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined1 *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_40 = PTR_PTR_11316b408;
  puStack_38 = PTR_PTR_11316b410;
  puStack_30 = PTR_PTR_11316b418;
  puVar1 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530,param_2,&puStack_40,3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0105e0(param_1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return param_1;
  }
  ___stack_chk_fail();
  ppuVar2 = &puStack_60;
  pcStack_48 = FUN_10698f90c;
  puStack_58 = PTR_PTR_1126f3f70;
  puStack_60 = puVar1;
  puStack_50 = &stack0xfffffffffffffff0;
  _objc_msgSendSuper2(&puStack_60,PTR_s_init_1125d9248);
  return (undefined1 *)ppuVar2;
}



/* Entry: 10698f90c; end: 10698f93f; -[SCComposerRecentFriendOperationContext init] */

void FUN_10698f90c(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f3f70;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10698f940; end: 10698f953; +[SCComposerRecentFriendOperationContext valdiMarshallableObjectDescriptor] */

void FUN_10698f940(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11094f038;
  param_1[1] = &PTR_s_SCCFriendStoring_11094f1e8;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10698f954; end: 10698f98f; -[SCComposerRecentFriendOperationViewModel initWithRecentFriendOperationType:] */

void FUN_10698f954(undefined8 param_1)

{
  undefined8 uStack_20;
  undefined *puStack_18;
  
  puStack_18 = PTR_PTR_1126f3f78;
  uStack_20 = param_1;
  _objc_msgSendSuper2(&uStack_20,PTR_s_initWithFieldValues__1125e24b8,0);
  return;
}



/* Entry: 10698f990; end: 10698f9b3; +[SCComposerRecentFriendOperationViewModel valdiMarshallableObjectDescriptor] */

void FUN_10698f990(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_11094f250;
  param_1[1] = &PTR_DAT_11094f280;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}



/* Entry: 10698f9b4; end: 10698f9ff; -[SCCBlockedUser initWithSCSnapchatter:] */

undefined8 FUN_10698f9b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010c2923e0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05ac00(param_1,param_2,param_3);
  _objc_release(param_3);
  return param_1;
}



/* Entry: 10698fa00; end: 10698fbe7; -[SCComposerPeopleBlockedUserStore initWithBlockedSnapchatterFetcher:snapchattersDataFetcher:snapchattersDataTracker:snapchattersDataMutator:snapchattersPublicInfoFetcher:performerProvider:] */

undefined1 *
FUN_10698fa00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  puVar1 = &uStack_60;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puStack_58 = PTR_PTR_1126f3f80;
  uStack_60 = param_1;
  _objc_msgSendSuper2(&uStack_60,PTR_s_init_1125d9248);
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_6;
    _objc_release(uVar2);
    _objc_retain(param_7);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_7;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bef9980();
    _objc_release(uVar2);
    puVar3 = (undefined1 *)puVar1;
    func_0x00010bdef1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined1 **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined **)((long)puVar1 + 0x38) = puVar4;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x38);
    func_0x00010b09c8d0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x48);
    *(undefined8 *)((long)puVar1 + 0x48) = uVar2;
    _objc_release(uVar5);
    puVar4 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x40);
    *(undefined **)((long)puVar1 + 0x40) = puVar4;
    _objc_release(uVar2);
    func_0x00010be102c0(puVar1);
  }
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10698fbe8; end: 10698fbf3; -[SCComposerPeopleBlockedUserStore pushToValdiMarshaller:] */

void FUN_10698fbe8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b8987c0(param_3,param_1);
  func_0x00010b8987b8();
  func_0x00010b8987b0();
  func_0x00010b89873c();
  func_0x00010b898758();
  return;
}



/* Entry: 10698fbf4; end: 10698fcbb; -[SCComposerPeopleBlockedUserStore _fetchBlockedUsersAndPublishInPerformer] */

void FUN_10698fbf4(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10698fcbc; end: 10698fce7;  */

void FUN_10698fcbc(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be102a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10698fce8; end: 10698fdef; -[SCComposerPeopleBlockedUserStore _fetchBlockedUsersAndPublish] */

void FUN_10698fce8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf1d7c0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 10698fdf0; end: 10698fe57;  */

void FUN_10698fdf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be83de0();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10698fe58; end: 10699002f; -[SCComposerPeopleBlockedUserStore _publishBlockedUsersWithSnapchatters:error:] */

void FUN_10698fe58(long param_1,undefined8 param_2,long param_3,undefined1 *param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *unaff_x22;
  long lVar6;
  long lVar7;
  undefined1 auStack_170 [8];
  undefined1 auStack_168 [8];
  undefined *puStack_160;
  undefined *puStack_158;
  undefined8 uStack_150;
  long lStack_148;
  undefined1 *puStack_140;
  code *pcStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_e8 [128];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar4 = param_4;
  _objc_retain(param_3);
  if (param_4 == (undefined1 *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bf529e0(param_3);
    func_0x00010bffc4a0();
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_118 = 0;
    plStack_120 = (long *)0x0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    uStack_100 = 0;
    _objc_retain(param_3);
    puVar4 = auStack_e8;
    lVar2 = param_3;
    func_0x00010bf52a60();
    if (lVar2 != 0) {
      lVar6 = *plStack_120;
      do {
        lVar7 = 0;
        do {
          if (*plStack_120 != lVar6) {
            _objc_enumerationMutation(param_3);
          }
          puVar3 = PTR_PTR_1126cf660;
          _objc_alloc(PTR_PTR_1126cf660);
          func_0x00010c040f20();
          func_0x00010befa120(puVar1);
          _objc_release(puVar3);
          lVar7 = lVar7 + 1;
        } while (lVar2 != lVar7);
        puVar4 = auStack_e8;
        lVar2 = param_3;
        func_0x00010bf52a60();
      } while (lVar2 != 0);
    }
    _objc_release(param_3);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    unaff_x22 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = unaff_x22;
    func_0x00010c0d9840(uVar5);
    _objc_release(unaff_x22);
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    func_0x00010c0d9840(uVar5);
  }
  _objc_release(puVar1);
  lVar2 = param_3;
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  ___stack_chk_fail();
  pcStack_138 = FUN_106990030;
  puStack_160 = unaff_x22;
  puStack_158 = puVar1;
  uStack_150 = uVar5;
  lStack_148 = param_3;
  puStack_140 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_retain(puVar4);
  _objc_initWeak(auStack_168,lVar2);
  _objc_copyWeak(auStack_170,auStack_168);
  _objc_retain(puVar4);
  func_0x00010be14180(lVar2);
  _objc_release(puVar4);
  _objc_destroyWeak(auStack_170);
  _objc_destroyWeak(auStack_168);
  _objc_release(puVar4);
  _objc_release(puVar3);
  return;
}



/* Entry: 106990030; end: 10699011b; -[SCComposerPeopleBlockedUserStore blockUserWithUserId:callback:] */

void FUN_106990030(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010be14180(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10699011c; end: 1069901e7;  */

void FUN_10699011c(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (param_3 == 0) {
      func_0x00010bdd4ec0(lVar1);
    }
    else if (lVar4 != 0) {
      lVar2 = param_3;
      func_0x00010c09e4e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      lVar3 = lVar2;
      FUN_1069901e8();
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,lVar3);
      _objc_release(lVar3);
      _objc_release(lVar2);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1069901e8; end: 1069902af;  */

void FUN_1069901e8(undefined *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined ***pppuVar7;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined ***pppuStack_98;
  undefined **ppuStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  ppuStack_48 = &PTR____CFConstantStringClassReference_110dd9438;
  puVar1 = param_1;
  if (param_1 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___NSNull_1126aef28;
    func_0x00010c0ddbe0();
    _objc_retainAutoreleasedReturnValue();
  }
  ppuVar6 = &puStack_40;
  pppuVar7 = &ppuStack_48;
  puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  puStack_40 = puVar1;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670,param_2,ppuVar6,pppuVar7,1);
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == (undefined *)0x0) {
    _objc_release(puVar1);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
    return;
  }
  ___stack_chk_fail();
  _objc_retain(pppuVar7);
  puVar1 = PTR_PTR_1126ae5c0;
  func_0x00010bf1d620(PTR_PTR_1126ae5c0,param_2,ppuVar6,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_b8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b0 = 0xc2000000;
  pcStack_a8 = FUN_1069903cc;
  puStack_a0 = &UNK_110842508;
  pppuStack_98 = pppuVar7;
  _objc_retain(pppuVar7);
  func_0x00010bf1d520(uVar3,param_2,puVar1,uVar5,&puStack_b8);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(pppuStack_98);
  _objc_release(pppuVar7);
  _objc_release(puVar1);
  return;
}



/* Entry: 1069902b0; end: 1069903cb; -[SCComposerPeopleBlockedUserStore _blockSnapchatter:callback:] */

void FUN_1069902b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae5c0;
  func_0x00010bf1d620(PTR_PTR_1126ae5c0,param_2,param_3,0,0);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_1069903cc;
  puStack_50 = &UNK_110842508;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010bf1d520(uVar2,param_2,puVar1,uVar4,&puStack_68);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 1069903cc; end: 10699043f;  */

void FUN_1069903cc(long param_1,int param_2)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar2 == 0) {
    return;
  }
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001069903f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,0);
    return;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e668d8;
  FUN_1069901e8(&PTR____CFConstantStringClassReference_110e668d8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106990440; end: 10699052b; -[SCComposerPeopleBlockedUserStore unblockUserWithUserId:callback:] */

void FUN_106990440(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_4);
  func_0x00010be14180(param_1);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10699052c; end: 10699060f;  */

void FUN_10699052c(long param_1,long param_2,undefined **param_3)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  long lVar4;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    lVar4 = *(long *)(param_1 + 0x20);
    if ((param_2 == 0) || (param_3 != (undefined **)0x0)) {
      if (param_3 == (undefined **)0x0) {
        ppuVar2 = &PTR____CFConstantStringClassReference_110e668f8;
      }
      else {
        ppuVar2 = param_3;
        func_0x00010c09e4e0(param_3);
        _objc_retainAutoreleasedReturnValue();
      }
      ppuVar3 = ppuVar2;
      FUN_1069901e8(ppuVar2);
      _objc_retainAutoreleasedReturnValue();
      (**(code **)(lVar4 + 0x10))(lVar4,ppuVar3);
      _objc_release(ppuVar3);
      if (param_3 != (undefined **)0x0) {
        _objc_release(ppuVar2);
      }
    }
    else {
      func_0x00010bed0f40(lVar1);
    }
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 106990610; end: 106990723; -[SCComposerPeopleBlockedUserStore _unblockSnapchatter:callback:] */

void FUN_106990610(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_4);
  puVar1 = PTR_PTR_1126ae5c0;
  func_0x00010c27f540(PTR_PTR_1126ae5c0,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_106990724;
  puStack_50 = &UNK_110842508;
  uStack_48 = param_4;
  _objc_retain(param_4);
  func_0x00010c27f500(uVar2,param_2,puVar1,uVar4,&puStack_68);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uStack_48);
  _objc_release(param_4);
  _objc_release(puVar1);
  return;
}



/* Entry: 106990724; end: 106990787;  */

void FUN_106990724(long param_1,int param_2)

{
  undefined **ppuVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x20);
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010699074c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 0x10))(lVar2,0);
    return;
  }
  ppuVar1 = &PTR____CFConstantStringClassReference_110e668d8;
  FUN_1069901e8(&PTR____CFConstantStringClassReference_110e668d8);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar2 + 0x10))(lVar2,ppuVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(ppuVar1);
  return;
}



/* Entry: 106990788; end: 10699078b; -[SCComposerPeopleBlockedUserStore didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_106990788(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010be102d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s__fetchBlockedUsersAndPublishInPe_112561a50);
  return;
}



/* Entry: 10699078c; end: 10699078f; -[SCComposerPeopleBlockedUserStore didStartSnapchattersUpdateDataRequest:] */

void FUN_10699078c(void)

{
  return;
}



/* Entry: 106990790; end: 106990883; -[SCComposerPeopleBlockedUserStore _createLazyPerformerWithPerformerProvider:] */

void FUN_106990790(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puVar1 = PTR_PTR_1126ae720;
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  uStack_38 = 0x106990828;
  puStack_30 = &UNK_1108545f0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bf11fe0(puVar1,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106990884; end: 1069909e7; -[SCComposerPeopleBlockedUserStore _fetchSnapchatterForUserId:completion:] */

void FUN_106990884(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_48,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c2448c0(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
  _objc_release(param_4);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1069909e8; end: 106990b8f;  */

void FUN_1069909e8(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar6 = param_2;
  puVar7 = param_3;
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar9 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar9 != 0) {
    if (param_2 == 0 && param_3 == (undefined *)0x0) {
      uVar2 = *(undefined8 *)(lVar9 + 0x28);
      func_0x00010c269d40();
      _objc_retainAutoreleasedReturnValue();
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(lVar9 + 0x30);
      func_0x00010c269d40(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c11de00();
      _objc_retainAutoreleasedReturnValue();
      uVar10 = *(undefined8 *)(param_1 + 0x28);
      _objc_retain(uVar10);
      puVar7 = puVar3;
      func_0x00010c244ea0(uVar2);
      _objc_release(uVar5);
      _objc_release(uVar4);
      _objc_release(puVar3);
      _objc_release(uVar2);
      _objc_release(uVar10);
    }
    else {
      lVar1 = *(long *)(param_1 + 0x28);
      if (lVar1 != 0) {
        lVar6 = param_2;
        puVar7 = param_3;
        (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
      }
    }
  }
  _objc_release(lVar9);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar8) {
    return;
  }
  ___stack_chk_fail();
  lVar9 = *(long *)(param_2 + 0x20);
  if (lVar9 != 0) {
    _objc_retain(puVar7);
    func_0x00010bfb1920(lVar6);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar9 + 0x10))(lVar9,lVar6,puVar7);
    _objc_release(puVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 106990b90; end: 106990c0b;  */

void FUN_106990b90(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    _objc_retain(param_3);
    func_0x00010bfb1920(param_2);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar1 + 0x10))(lVar1,param_2,param_3);
    _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_2);
    return;
  }
  return;
}



/* Entry: 106990c0c; end: 106990c0f; -[SCComposerPeopleBlockedUserStore getBlockedUsersWithCompletion:] */

void FUN_106990c0c(void)

{
  return;
}



/* Entry: 106990c10; end: 106990c1f; -[SCComposerPeopleBlockedUserStore onBlockedUsersUpdatedWithCallback:] */

undefined ** FUN_106990c10(void)

{
  return &PTR___NSConcreteGlobalBlock_11094f290;
}



/* Entry: 106990c20; end: 106990c27; -[SCComposerPeopleBlockedUserStore blockedUsersObservable] */

undefined8 FUN_106990c20(long param_1)

{
  return *(undefined8 *)(param_1 + 0x48);
}



/* Entry: 106990c28; end: 106990c57; -[SCComposerPeopleBlockedUserStore setBlockedUsersObservable:] */

void FUN_106990c28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 106990c58; end: 106990cdb; -[SCComposerPeopleBlockedUserStore .cxx_destruct] */

void FUN_106990c58(long param_1)

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



/* Entry: 106990cdc; end: 106990d67; -[SCComposerPeopleFriendmojiProvider initWithFriendmojiPresenter:shouldDisplayStreakCounter:shouldDisplayStreak:] */

undefined1 *
FUN_106990cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f3f88;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
    *(undefined1 *)((long)puVar1 + 0x11) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106990d68; end: 106990d73; -[SCComposerPeopleFriendmojiProvider pushToValdiMarshaller:] */

void FUN_106990d68(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b8987c0(param_3,param_1);
  func_0x00010b8987b8();
  func_0x00010b8987b0();
  func_0x00010b89873c();
  func_0x00010b898758();
  return;
}



/* Entry: 106990d74; end: 106990e63; -[SCComposerPeopleFriendmojiProvider forGroupsWithRequests:completion:] */

void FUN_106990d74(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_4);
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,param_3,0);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106990e64; end: 106990eff; -[SCComposerPeopleFriendmojiProvider forUsersWithRequests:completion:] */

void FUN_106990e64(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _objc_retain(param_4);
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(param_4 + 0x10))(param_4,param_3,0);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106990f00; end: 106990f0b;  */

void FUN_106990f00(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010be196d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x20),PTR_s__friendmojiFromUserRequest__112563f50,param_2);
  return;
}



/* Entry: 106990f0c; end: 106990fef; -[SCComposerPeopleFriendmojiProvider observeFriendmojisForUsersWithRequests:] */

void FUN_106990f0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  func_0x00010bebd600(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_11094f330,
                      &PTR___NSConcreteGlobalBlock_11094f370);
  _objc_release(param_3);
  func_0x00010be16400(param_1);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0e09c0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 106990ff0; end: 106990ff7;  */

void FUN_106990ff0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 106990ff8; end: 106991053;  */

void FUN_106990ff8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c06bb80(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1f3c0();
  func_0x00010c0df6e0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106991054; end: 1069910ef; -[SCComposerPeopleFriendmojiProvider observeFriendmojisForGroupsWithRequests:] */

void FUN_106991054(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_11094f3b0,
                      &PTR___NSConcreteGlobalBlock_11094f3f0);
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0e09e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1069910f0; end: 106991103;  */

void FUN_1069910f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfceb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_groupId_1125d1470);
  return;
}



/* Entry: 106991104; end: 10699112b; -[SCComposerPeopleFriendmojiProvider _snapchatterFriendmojisFromUserRequests:] */

void FUN_106991104(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010050471c(param_3,&PTR___NSConcreteGlobalBlock_11094f410,
                      &PTR___NSConcreteGlobalBlock_11094f450);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10699112c; end: 106991133;  */

void FUN_10699112c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 106991134; end: 1069911d7;  */

void FUN_106991134(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  func_0x000100504554(puVar1,&PTR___NSConcreteGlobalBlock_11094f490);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1069911d8; end: 106991203; -[SCComposerPeopleFriendmojiProvider _filterTypeForUserRequests] */

undefined8 FUN_1069911d8(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x11) == '\x01') {
    uVar1 = 8;
    if (*(char *)(param_1 + 0x10) == '\0') {
      uVar1 = 3;
    }
    return uVar1;
  }
  return 2;
}



/* Entry: 106991204; end: 106991293; -[SCComposerPeopleFriendmojiProvider _friendmojiFromGroupRequest:] */

void FUN_106991204(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x00010bfceb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar3;
  func_0x00010bfb97a0(uVar3,param_2,uVar1,8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 106991294; end: 106991447; -[SCComposerPeopleFriendmojiProvider _friendmojiFromUserRequest:] */

void FUN_106991294(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined **ppuVar5;
  long lVar6;
  
  _objc_retain(param_3);
  lVar6 = param_3;
  func_0x00010bfb9b40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar6 != 0) {
    lVar1 = param_3;
    func_0x00010bfb9b40();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar1;
    func_0x00010bf529e0();
    _objc_release(lVar1);
    _objc_release(lVar6);
    if (lVar2 != 0) {
      lVar6 = param_3;
      func_0x00010bfb9b40();
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar6;
      func_0x00010bf529e0();
      _objc_release(lVar6);
      if (lVar1 == 0) {
        lVar6 = 0;
      }
      else {
        lVar1 = param_3;
        func_0x00010bfb9b40(param_3);
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar1;
        func_0x000100504554();
        _objc_release(lVar1);
      }
      ppuVar3 = *(undefined ***)(param_1 + 8);
      func_0x00010c269d40(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = param_3;
      func_0x00010c25c060(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c067fc0();
      lVar2 = param_3;
      func_0x00010c2923e0(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010be16400(param_1);
      lVar4 = param_3;
      func_0x00010c06bb80(param_3);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1f3c0();
      ppuVar5 = ppuVar3;
      func_0x00010bf86560(ppuVar3);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar4);
      _objc_release(lVar2);
      _objc_release(lVar1);
      _objc_release(ppuVar3);
      _objc_release(lVar6);
      goto LAB_106991424;
    }
  }
  ppuVar5 = &PTR____CFConstantStringClassReference_110daafd8;
LAB_106991424:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 106991448; end: 106991493;  */

void FUN_106991448(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba270;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c040e40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106991494; end: 10699149f; -[SCComposerPeopleFriendmojiProvider .cxx_destruct] */

void FUN_106991494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1069914a0; end: 10699152b; -[SCComposerPeopleFriendmojiRenderer initWithFriendmojiPresenter:shouldDisplayStreakCounter:shouldDisplayStreak:] */

undefined1 *
FUN_1069914a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
             undefined1 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  puStack_38 = PTR_PTR_1126f3f90;
  uStack_40 = param_1;
  _objc_msgSendSuper2(&uStack_40,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = param_3;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x10) = param_4;
    *(undefined1 *)((long)puVar1 + 0x11) = param_5;
  }
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 10699152c; end: 106991537; -[SCComposerPeopleFriendmojiRenderer pushToValdiMarshaller:] */

void FUN_10699152c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b8987c0(param_3,param_1);
  func_0x00010b8987b8();
  func_0x00010b8987b0();
  func_0x00010b89873c();
  func_0x00010b898758();
  return;
}



/* Entry: 106991538; end: 10699158b; -[SCComposerPeopleFriendmojiRenderer renderForGroupWithRequest:] */

void FUN_106991538(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010bfceb20(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c12fb60(param_1,param_2,param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_1);
  return;
}



/* Entry: 10699158c; end: 1069915fb; -[SCComposerPeopleFriendmojiRenderer renderForGroupNoRequestWithGroupId:] */

void FUN_10699158c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bfb97a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069915fc; end: 1069916d3; -[SCComposerPeopleFriendmojiRenderer renderForFriendWithRequest:] */

void FUN_1069915fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_4);
  uVar1 = param_4;
  func_0x00010c2923e0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25c060(param_4);
  uVar2 = param_4;
  func_0x00010bfb9b40(param_4);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = param_4;
  func_0x00010c06bb80(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  uVar4 = uVar3;
  func_0x00010bf1f3c0(uVar3);
  func_0x00010c12fb40(param_1,param_2,param_3,uVar1,uVar2,uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1069916d4; end: 1069917db; -[SCComposerPeopleFriendmojiRenderer renderForFriendNoRequestWithUserId:streakLength:friendmojis:isAiChatBot:] */

void FUN_1069916d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if ((param_4 == 0) || (lVar1 = param_4, func_0x00010bf529e0(), lVar1 == 0)) {
    ppuVar3 = &PTR____CFConstantStringClassReference_110daafd8;
  }
  else {
    lVar1 = param_4;
    func_0x000100504554(param_4,&PTR___NSConcreteGlobalBlock_11094f4d0);
    ppuVar2 = *(undefined ***)(param_1 + 8);
    func_0x00010c269d40(ppuVar2);
    _objc_retainAutoreleasedReturnValue();
    ppuVar3 = ppuVar2;
    func_0x00010bf86560();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(ppuVar2);
    _objc_release(lVar1);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar3);
  return;
}



/* Entry: 1069917dc; end: 106991827;  */

void FUN_1069917dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126ba270;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c040e40();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 106991828; end: 106991833; -[SCComposerPeopleFriendmojiRenderer .cxx_destruct] */

void FUN_106991828(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106991834; end: 10699191f; -[SCComposerPeopleActionFriendStore initWithSnapchattersDataMutator:circumstanceEngine:placement:] */

undefined1 *
FUN_106991834(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  puVar1 = &uStack_40;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126f3f98;
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
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined **)((long)puVar1 + 0x18) = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined **)((long)puVar1 + 0x20) = puVar3;
    _objc_release(uVar2);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 106991920; end: 10699192b; -[SCComposerPeopleActionFriendStore pushToValdiMarshaller:] */

void FUN_106991920(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b8987c0(param_3,param_1);
  func_0x00010b8987b8();
  func_0x00010b8987b0();
  func_0x00010b89873c();
  func_0x00010b898758();
  return;
}



/* Entry: 10699192c; end: 106991a13; -[SCComposerPeopleActionFriendStore addFriendWithRequest:] */

void FUN_10699192c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *(undefined8 *)(param_1 + 0x18);
  _objc_retain(param_3);
  func_0x00010c067fc0(uVar5);
  puVar1 = PTR_PTR_1126ae5c0;
  func_0x00010c040e20(PTR_PTR_1126ae5c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar2;
  func_0x00010bef8aa0(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar5;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106991a14; end: 106991a2b; -[SCComposerPeopleActionFriendStore _isAddFriendCooldownDialogOn] */

void FUN_106991a14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x10),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e66938,0,0);
  return;
}



/* Entry: 106991a2c; end: 106991a73; -[SCComposerPeopleActionFriendStore .cxx_destruct] */

void FUN_106991a2c(long param_1)

{
  _objc_storeStrong(param_1 + 0x20,0);
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 106991a74; end: 106991cef; -[SCComposerPeopleFriendStore initWithSnapchattersDataFetcher:snapchattersDataMutator:snapchattersDataTracker:snapchatterObservableRepository:circumstanceEngine:placement:plusFeatureGating:emissionPerformer:] */

undefined8 *
FUN_106991a74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_9);
  _objc_retain(param_10);
  puStack_78 = PTR_PTR_1126f3fa0;
  puVar1 = &uStack_80;
  uStack_80 = param_1;
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
    _objc_retain(param_7);
    uVar2 = puVar1[5];
    puVar1[5] = param_7;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[6];
    puVar1[6] = param_9;
    _objc_release(uVar2);
    puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x00010c0df780();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[7];
    puVar1[7] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_7);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae720;
    _objc_retain(param_7);
    func_0x00010bf11fe0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = puVar1[10];
    puVar1[10] = puVar3;
    _objc_release(uVar2);
    _objc_release(param_7);
    _objc_release(param_7);
  }
  _objc_release(param_10);
  _objc_release(param_9);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 106991cf0; end: 106991d6f;  */

void FUN_106991cf0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf1f440(uVar2,param_2,&PTR____CFConstantStringClassReference_110e66958,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010c0df6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithBool__1126157d0,uVar2);
  return;
}



/* Entry: 106991d70; end: 106991d7b; -[SCComposerPeopleFriendStore pushToValdiMarshaller:] */

void FUN_106991d70(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b8987c0(param_3,param_1);
  func_0x00010b8987b8();
  func_0x00010b8987b0();
  func_0x00010b89873c();
  func_0x00010b898758();
  return;
}



/* Entry: 106991d7c; end: 106991e8b; -[SCComposerPeopleFriendStore getBestFriendsWithCompletion:] */

void FUN_106991d7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_1;
  _objc_opt_class(param_1);
  func_0x00010bfc5f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  lVar2 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf9dae0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c252440();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  uVar6 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  if (lVar5 == 3) {
    func_0x00010c11f780();
  }
  else {
    func_0x00010c11f720(uVar6);
  }
  _objc_release(uVar7);
  _objc_release(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 106991e8c; end: 10699223b; -[SCComposerPeopleFriendStore getFriendsWithCompletion:] */

void FUN_106991e8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  code *pcStack_1d8;
  undefined *puStack_1d0;
  undefined8 uStack_1c8;
  undefined8 *puStack_1c0;
  undefined8 *puStack_1b8;
  undefined8 *puStack_1b0;
  undefined8 *puStack_1a8;
  undefined *puStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined *puStack_188;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  code *pcStack_158;
  undefined *puStack_150;
  undefined8 uStack_148;
  undefined8 *puStack_140;
  undefined8 *puStack_138;
  undefined8 uStack_130;
  undefined8 *puStack_128;
  undefined8 uStack_120;
  code *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 *puStack_f8;
  undefined8 uStack_f0;
  code *pcStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 *puStack_c8;
  undefined8 uStack_c0;
  code *pcStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar2 = param_3;
  _objc_retain();
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_10699223c;
  uStack_80 = 0x10699224c;
  uStack_78 = 0;
  puStack_c8 = &uStack_d0;
  uStack_d0 = 0;
  uStack_c0 = 0x3032000000;
  pcStack_b8 = FUN_10699223c;
  uStack_b0 = 0x10699224c;
  uStack_a8 = 0;
  puStack_f8 = &uStack_100;
  uStack_100 = 0;
  uStack_f0 = 0x3032000000;
  pcStack_e8 = FUN_10699223c;
  uStack_e0 = 0x10699224c;
  uStack_d8 = 0;
  puStack_128 = &uStack_130;
  uStack_130 = 0;
  uStack_120 = 0x3032000000;
  pcStack_118 = FUN_10699223c;
  uStack_110 = 0x10699224c;
  uStack_108 = 0;
  _dispatch_group_create();
  _dispatch_group_enter();
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_168 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_160 = 0xc2000000;
  pcStack_158 = FUN_106992254;
  puStack_150 = &UNK_110857be8;
  puStack_140 = &uStack_a0;
  puStack_138 = &uStack_d0;
  _objc_retain(uVar2);
  uStack_148 = uVar2;
  func_0x00010c0eea40(uVar3);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _dispatch_group_enter(uVar2);
  puStack_1a0 = puVar1;
  uStack_198 = 0xc2000000;
  uStack_190 = 0x1069922e4;
  puStack_188 = &UNK_110857be8;
  puStack_178 = &uStack_100;
  puStack_170 = &uStack_130;
  _objc_retain(uVar2);
  ppuVar5 = &puStack_1a0;
  uStack_180 = uVar2;
  _objc_retainBlock(ppuVar5);
  lVar6 = *(long *)(param_1 + 0x30);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010bf9dae0();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  lVar9 = lVar8;
  func_0x00010c252440();
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  uVar3 = *(undefined8 *)(param_1 + 8);
  if (lVar9 == 3) {
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f780(uVar3);
  }
  else {
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c11f720(uVar3);
  }
  _objc_release(uVar4);
  _objc_release(uVar3);
  uVar3 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  puStack_1e8 = puVar1;
  uStack_1e0 = 0xc2000000;
  pcStack_1d8 = FUN_106992374;
  puStack_1d0 = &UNK_11094f4f0;
  puStack_1c0 = &uStack_a0;
  puStack_1b8 = &uStack_100;
  puStack_1b0 = &uStack_130;
  puStack_1a8 = &uStack_d0;
  uStack_1c8 = param_3;
  _objc_retain(param_3);
  func_0x000100bc0718(uVar2,uVar3,&puStack_1e8);
  _objc_release(uVar3);
  _objc_release(uStack_1c8);
  _objc_release(ppuVar5);
  _objc_release(uStack_180);
  _objc_release(uStack_148);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_130,8);
  _objc_release(uStack_108);
  __Block_object_dispose(&uStack_100,8);
  _objc_release(uStack_d8);
  __Block_object_dispose(&uStack_d0,8);
  _objc_release(uStack_a8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  _objc_release(param_3);
  return;
}



/* Entry: 10699223c; end: 106992253;  */

void FUN_10699223c(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 106992254; end: 106992373;  */

void FUN_106992254(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  _dispatch_group_leave(*(undefined8 *)(param_1 + 0x20));
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106992374; end: 1069926db;  */

void FUN_106992374(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar6 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x28);
  if (puVar6 == (undefined *)0x0) {
    puVar6 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x28);
    _objc_retain(puVar6);
    if (puVar6 == (undefined *)0x0) {
      puVar6 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
      _objc_alloc();
      func_0x00010bf529e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28));
      func_0x00010bffc4a0();
      lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) + 8) + 0x28);
      _objc_retain(lVar8);
      lVar7 = lVar8;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar7 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar8);
          }
          uVar9 = *(undefined8 *)(lVar10 * 8);
          func_0x00010c2923e0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar6);
          _objc_release(uVar9);
          lVar10 = lVar10 + 1;
        } while (lVar7 != lVar10);
        lVar7 = lVar8;
        func_0x00010bf52a60();
      }
      _objc_release(lVar8);
      puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
      _objc_alloc();
      func_0x00010bf529e0(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28));
      func_0x00010bffc4a0();
      lVar8 = *(long *)(*(long *)(*(long *)(param_1 + 0x40) + 8) + 0x28);
      _objc_retain(lVar8);
      lVar7 = lVar8;
      func_0x00010bf52a60();
      lVar1 = lRam0000000000000000;
      while (lVar7 != 0) {
        lVar10 = 0;
        do {
          if (lRam0000000000000000 != lVar1) {
            _objc_enumerationMutation(lVar8);
          }
          uVar9 = *(undefined8 *)(lVar10 * 8);
          func_0x00010c2923e0(uVar9);
          _objc_retainAutoreleasedReturnValue();
          puVar3 = puVar6;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(uVar9);
          puVar4 = PTR_PTR_1126b4c30;
          _objc_alloc(PTR_PTR_1126b4c30);
          func_0x00010c040f20();
          func_0x00010befa120(puVar2);
          _objc_release(puVar4);
          _objc_release(puVar3);
          lVar10 = lVar10 + 1;
        } while (lVar7 != lVar10);
        lVar7 = lVar8;
        func_0x00010bf52a60();
      }
      _objc_release(lVar8);
      lVar7 = *(long *)(param_1 + 0x20);
      if (lVar7 != 0) {
        param_2 = puVar2;
        (**(code **)(lVar7 + 0x10))(lVar7,puVar2,0);
      }
      goto LAB_106992444;
    }
  }
  else {
    _objc_retain(puVar6);
  }
  lVar7 = *(long *)(param_1 + 0x20);
  puVar2 = puVar6;
  func_0x00010c09e4e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
  func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
  _objc_retainAutoreleasedReturnValue();
  param_2 = (undefined *)0x0;
  (**(code **)(lVar7 + 0x10))(lVar7,0,puVar3);
  _objc_release(puVar3);
LAB_106992444:
  _objc_release(puVar2);
  _objc_release(puVar6);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar5) {
    return;
  }
  ___stack_chk_fail();
  __Block_object_assign(puVar6 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  __Block_object_assign(puVar6 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(puVar6 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(puVar6 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(puVar6 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  return;
}



/* Entry: 1069926dc; end: 106992747;  */

void FUN_1069926dc(long param_1,long param_2)

{
  __Block_object_assign(param_1 + 0x20,*(undefined8 *)(param_2 + 0x20),7);
  __Block_object_assign(param_1 + 0x28,*(undefined8 *)(param_2 + 0x28),8);
  __Block_object_assign(param_1 + 0x30,*(undefined8 *)(param_2 + 0x30),8);
  __Block_object_assign(param_1 + 0x38,*(undefined8 *)(param_2 + 0x38),8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___Block_object_assign_11034bce0)(param_1 + 0x40,*(undefined8 *)(param_2 + 0x40),8);
  return;
}



/* Entry: 106992748; end: 1069927cb; -[SCComposerPeopleFriendStore getFriendCountWithCompletion:] */

void FUN_106992748(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1069927cc;
  puStack_30 = &UNK_11094f520;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010bfc5f40(param_1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 1069927cc; end: 106992893;  */

void FUN_1069927cc(long param_1,undefined8 param_2,undefined *param_3)

{
  undefined *puVar1;
  long lVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  if (param_3 == (undefined *)0x0) {
    lVar2 = *(long *)(param_1 + 0x20);
    func_0x00010bf529e0(param_2);
    func_0x00010c0df840(puVar1);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar2 + 0x10))(lVar2,puVar1,0);
  }
  else {
    func_0x00010c0e00e0(param_3,param_2,&PTR____CFConstantStringClassReference_110dd9438);
    _objc_retainAutoreleasedReturnValue();
    lVar2 = *(long *)(param_1 + 0x20);
    puVar1 = PTR_PTR_1126b3588;
    _objc_alloc(PTR_PTR_1126b3588);
    func_0x00010c02b2e0();
    (**(code **)(lVar2 + 0x10))(lVar2,0,puVar1);
    _objc_release(puVar1);
    puVar1 = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 106992894; end: 10699297b; -[SCComposerPeopleFriendStore getFriendByIdWithUserId:callback:] */

void FUN_106992894(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_4);
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = 0x15;
  func_0x0001000819a8(0x15,0);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_4);
  func_0x00010c2448c0(uVar2);
  _objc_release(param_3);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(param_4);
  _objc_release(param_4);
  return;
}



/* Entry: 10699297c; end: 106992ac7;  */

void FUN_10699297c(long param_1,long param_2,undefined *param_3,undefined ***param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *unaff_x22;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined ***pppuStack_a8;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [8];
  undefined *puStack_90;
  long lStack_88;
  undefined *puStack_80;
  long lStack_78;
  undefined1 *puStack_70;
  code *pcStack_68;
  undefined **ppuStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  _objc_retain(param_3);
  if (param_3 == (undefined *)0x0) {
    lVar4 = *(long *)(param_1 + 0x20);
    if (param_2 == 0) {
      puVar3 = (undefined *)0x0;
      (**(code **)(lVar4 + 0x10))(lVar4,0,0);
      goto LAB_106992a6c;
    }
    unaff_x22 = PTR_PTR_1126b4c30;
    _objc_alloc();
    func_0x00010c040f20();
    puVar3 = (undefined *)0x0;
    (**(code **)(lVar4 + 0x10))(lVar4,unaff_x22,0);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    ppuStack_58 = &PTR____CFConstantStringClassReference_110dd9438;
    unaff_x22 = param_3;
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    param_4 = &ppuStack_58;
    puVar1 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    puStack_50 = unaff_x22;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar1;
    (**(code **)(lVar4 + 0x10))(lVar4,0,puVar1);
    _objc_release(puVar1);
  }
  _objc_release(unaff_x22);
LAB_106992a6c:
  _objc_release(param_3);
  lVar2 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  pcStack_68 = FUN_106992ac8;
  puStack_90 = unaff_x22;
  lStack_88 = lVar4;
  puStack_80 = param_3;
  lStack_78 = param_2;
  puStack_70 = &stack0xfffffffffffffff0;
  _objc_retain(puVar3);
  _objc_retain(param_4);
  if (*(long *)(lVar2 + 0x38) == 0) {
    if (param_4 != (undefined ***)0x0) {
      (*(code *)param_4[2])(param_4,0,0);
    }
  }
  else {
    func_0x00010c067fc0();
    puVar1 = PTR_PTR_1126ae5c0;
    func_0x00010c040e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_98,lVar2);
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0xc2000000;
    pcStack_c0 = FUN_106992bfc;
    puStack_b8 = &UNK_110848378;
    _objc_copyWeak(auStack_a0,auStack_98);
    puStack_b0 = puVar1;
    _objc_retain(param_4);
    pppuStack_a8 = param_4;
    _objc_retain(puVar1);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_d0);
    _objc_release(pppuStack_a8);
    _objc_release(puStack_b0);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_a0);
    _objc_destroyWeak(auStack_98);
  }
  _objc_release(param_4);
  _objc_release(puVar3);
  return;
}



/* Entry: 106992ac8; end: 106992bfb; -[SCComposerPeopleFriendStore addFriendWithRequest:completion:] */

void FUN_106992ac8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  long lStack_48;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  if (*(long *)(param_1 + 0x38) == 0) {
    if (param_4 != 0) {
      (**(code **)(param_4 + 0x10))(param_4,0,0);
    }
  }
  else {
    func_0x00010c067fc0();
    puVar1 = PTR_PTR_1126ae5c0;
    func_0x00010c040e20();
    _objc_retainAutoreleasedReturnValue();
    _objc_initWeak(auStack_38,param_1);
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0xc2000000;
    pcStack_60 = FUN_106992bfc;
    puStack_58 = &UNK_110848378;
    _objc_copyWeak(auStack_40,auStack_38);
    puStack_50 = puVar1;
    _objc_retain(param_4);
    lStack_48 = param_4;
    _objc_retain(puVar1);
    func_0x00010007380c(PTR___dispatch_main_q_11034be20,&puStack_70);
    _objc_release(lStack_48);
    _objc_release(puStack_50);
    _objc_release(puVar1);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 106992bfc; end: 106992d0b;  */

void FUN_106992bfc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = 0x15;
    func_0x0001000819a8(0x15,0);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_48,param_1 + 0x30);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    _objc_retain(uVar4);
    func_0x00010bef8a80(uVar2);
    _objc_release(uVar3);
    _objc_release(uVar2);
    _objc_release(uVar4);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(lVar1);
  return;
}



/* Entry: 106992d0c; end: 106992e67;  */

void FUN_106992d0c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  _objc_retain(param_3);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = lVar1;
  func_0x00010be3dfe0();
  _objc_release(lVar1);
  if ((int)lVar2 == 0) {
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,0);
  }
  else {
    puVar3 = PTR_PTR_1126cf668;
    _objc_alloc(PTR_PTR_1126cf668);
    uVar4 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar6 = param_3;
    func_0x00010c292820();
    _objc_retainAutoreleasedReturnValue();
    uVar7 = uVar6;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c055d40(puVar3);
    _objc_release(uVar7);
    _objc_release(uVar6);
    _objc_release(uVar5);
    _objc_release(uVar4);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_2,puVar3);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 106992e68; end: 106993077; -[SCComposerPeopleFriendStore onFriendsUpdatedWithCallback:] */

void FUN_106992e68(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_110;
  undefined8 uStack_108;
  code *pcStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined1 auStack_c0 [8];
  undefined1 auStack_b8 [8];
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126cf650;
  _objc_alloc();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_88 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0xc2000000;
  pcStack_78 = FUN_106993078;
  puStack_70 = &UNK_11094f550;
  _objc_retain(param_3);
  puStack_b0 = puVar1;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x106993084;
  puStack_98 = &UNK_11094f580;
  uStack_68 = param_3;
  _objc_retain(param_3);
  uStack_90 = param_3;
  func_0x00010c04ba80();
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bef9980();
  _objc_release(uVar3);
  _objc_initWeak(auStack_b8,param_1);
  puVar4 = PTR_PTR_1126afd78;
  _objc_alloc();
  puStack_e8 = puVar1;
  uStack_e0 = 0xc2000000;
  pcStack_d8 = FUN_106993090;
  puStack_d0 = &UNK_110841fb0;
  _objc_copyWeak(auStack_c0,auStack_b8);
  _objc_retain(puVar2);
  puStack_c8 = puVar2;
  func_0x00010bffae00();
  puStack_110 = puVar1;
  uStack_108 = 0xc2000000;
  pcStack_100 = FUN_1069930ec;
  puStack_f8 = &UNK_110842e18;
  puStack_f0 = puVar4;
  _objc_retain();
  ppuVar5 = &puStack_110;
  _objc_retainBlock(ppuVar5);
  _objc_release(puStack_f0);
  _objc_release(puVar4);
  _objc_release(puStack_c8);
  _objc_destroyWeak(auStack_c0);
  _objc_destroyWeak(auStack_b8);
  _objc_release(puVar2);
  _objc_release(uStack_90);
  _objc_release(uStack_68);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar5);
  return;
}



/* Entry: 106993078; end: 10699308f;  */

void FUN_106993078(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000106993080. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 106993090; end: 1069930eb;  */

void FUN_106993090(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
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



/* Entry: 1069930ec; end: 1069930f3;  */

void FUN_1069930ec(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf2dbb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_cancel_1125a9090);
  return;
}



/* Entry: 1069930f4; end: 10699310b; -[SCComposerPeopleFriendStore _isAddFriendCooldownDialogOn] */

void FUN_1069930f4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf1f450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x28),PTR_s_boolValueForConfigKeySync_defaul_1125a56b8,
             &PTR____CFConstantStringClassReference_110e66938,0,0);
  return;
}



/* Entry: 10699310c; end: 10699318f; +[SCComposerPeopleFriendStore getFriendsCompletionHandlerForCompletion:] */

void FUN_10699310c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined **ppuVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_106993190;
  puStack_30 = &UNK_11084e3a0;
  uStack_28 = param_3;
  _objc_retain(param_3);
  ppuVar1 = &puStack_48;
  _objc_retainBlock(ppuVar1);
  _objc_release(uStack_28);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(ppuVar1);
  return;
}



/* Entry: 106993190; end: 106993383;  */

void FUN_106993190(long param_1,long param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar3 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  if (param_3 == (undefined *)0x0) {
    param_3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bf529e0(param_2);
    func_0x00010bffc4a0();
    _objc_retain(param_2);
    lVar4 = param_2;
    func_0x00010bf52a60();
    lVar1 = lRam0000000000000000;
    while (lVar4 != 0) {
      lVar5 = 0;
      do {
        if (lRam0000000000000000 != lVar1) {
          _objc_enumerationMutation(param_2);
        }
        puVar2 = PTR_PTR_1126b4c30;
        _objc_alloc(PTR_PTR_1126b4c30);
        func_0x00010c040f20();
        func_0x00010befa120(param_3);
        _objc_release(puVar2);
        lVar5 = lVar5 + 1;
      } while (lVar4 != lVar5);
      lVar4 = param_2;
      func_0x00010bf52a60();
    }
    _objc_release(param_2);
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),param_3,0);
  }
  else {
    lVar4 = *(long *)(param_1 + 0x20);
    func_0x00010c09e4e0();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = PTR__OBJC_CLASS___NSDictionary_1126ae670;
    func_0x00010bf72080(PTR__OBJC_CLASS___NSDictionary_1126ae670);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(lVar4 + 0x10))(lVar4,0,puVar2);
    _objc_release(puVar2);
  }
  _objc_release(param_3);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar3) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010be19980();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_2;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 106993384; end: 1069933c7; -[SCComposerPeopleFriendStore friendsObservable] */

void FUN_106993384(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be19980();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1069933c8; end: 106993453; -[SCComposerPeopleFriendStore bestFriendsObservable] */

void FUN_1069933c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf19580();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 106993454; end: 106993473;  */

void FUN_106993454(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_11094f630);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 106993474; end: 1069934df; -[SCComposerPeopleFriendStore friendCountObservable] */

void FUN_106993474(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x00010be19980();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}


