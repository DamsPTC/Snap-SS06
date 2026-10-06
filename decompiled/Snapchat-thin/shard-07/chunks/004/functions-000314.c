/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1055bb2a4; end: 1055bb2bb;  */

void FUN_1055bb2a4(void)

{
  undefined **ppuVar1;
  undefined **ppuVar2;
  
  ppuVar1 = &PTR____CFConstantStringClassReference_110ded7b8;
  func_0x0001000f5ff4(&PTR____CFConstantStringClassReference_110ded7b8,
                      &PTR____CFConstantStringClassReference_110ded7d8,0);
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



/* Entry: 1055bb2bc; end: 1055bb3eb; -[SCFriendingSelectedSuggestionsRepositoryImpl initWithSuggestedSnapchatterObservable:performerProvider:circumstanceEngine:] */

undefined1 *
FUN_1055bb2bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  puStack_48 = PTR_PTR_1126e9248;
  uStack_50 = param_1;
  _objc_msgSendSuper2(&uStack_50,PTR_s_init_1125d9248);
  if (puVar1 != (undefined8 *)0x0) {
    _objc_retain(param_3);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined8 *)((long)puVar1 + 0x28) = param_3;
    _objc_release(uVar2);
    uVar2 = param_4;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar2;
    func_0x00010c0f9920();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 8);
    *(undefined8 *)((long)puVar1 + 8) = uVar3;
    _objc_release(uVar5);
    _objc_release(uVar2);
    puVar4 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x10);
    *(undefined **)((long)puVar1 + 0x10) = puVar4;
    _objc_release(uVar2);
    _objc_retain(param_5);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = param_5;
    _objc_release(uVar2);
    func_0x00010be66f60(puVar1);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055bb3ec; end: 1055bb413; -[SCFriendingSelectedSuggestionsRepositoryImpl selectedSuggestedSnapchatters] */

void FUN_1055bb3ec(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1055bb414; end: 1055bb4eb; -[SCFriendingSelectedSuggestionsRepositoryImpl userToggledSuggestionWithUserId:] */

void FUN_1055bb414(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 8);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  return;
}



/* Entry: 1055bb4ec; end: 1055bb51f;  */

void FUN_1055bb4ec(long param_1)

{
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  func_0x00010bee7200();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055bb520; end: 1055bb57f; -[SCFriendingSelectedSuggestionsRepositoryImpl _userToggledSuggestionWithUserId:] */

void FUN_1055bb520(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    func_0x00010bf4b900(lVar1,param_2,param_3);
    if ((int)lVar1 == 0) {
      func_0x00010befa120(*(undefined8 *)(param_1 + 0x20),param_2,param_3);
    }
    else {
      func_0x00010c12d360();
    }
    func_0x00010be843e0(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055bb580; end: 1055bb697; -[SCFriendingSelectedSuggestionsRepositoryImpl _observeToSuggestionsData] */

void FUN_1055bb580(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x000108c07454();
  if (iVar1 != 0) {
    puVar2 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined **)(param_1 + 0x30) = puVar2;
    _objc_release(uVar4);
    _objc_initWeak(auStack_38,param_1);
    uVar3 = *(undefined8 *)(param_1 + 0x28);
    func_0x00010c0e0ea0(uVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_copyWeak(auStack_40,auStack_38);
    uVar4 = uVar3;
    func_0x00010c25ff60(uVar3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf1a3e0();
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  return;
}



/* Entry: 1055bb698; end: 1055bb6df;  */

void FUN_1055bb698(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bdffac0();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055bb6e0; end: 1055bb7ff; -[SCFriendingSelectedSuggestionsRepositoryImpl _didReceiveSuggestions:] */

void FUN_1055bb6e0(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_11089b090);
  uVar2 = param_3;
  func_0x00010050471c();
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  *(ulong *)(param_1 + 0x38) = uVar2;
  _objc_release(uVar6);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x18);
  func_0x00010c067f00();
  uVar2 = param_3;
  func_0x00010bf529e0();
  if ((ulong)(long)iVar1 <= uVar2) {
    uVar2 = (long)iVar1;
  }
  puVar3 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uVar6 = *(undefined8 *)(param_1 + 0x20);
  *(undefined **)(param_1 + 0x20) = puVar3;
  _objc_release(uVar6);
  if (uVar2 != 0) {
    uVar7 = 0;
    do {
      uVar6 = *(undefined8 *)(param_1 + 0x20);
      uVar4 = param_3;
      func_0x00010c0dfd40(param_3);
      _objc_retainAutoreleasedReturnValue();
      uVar5 = uVar4;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010befa120(uVar6);
      _objc_release(uVar5);
      _objc_release(uVar4);
      uVar7 = uVar7 + 1;
    } while (uVar2 != uVar7);
  }
  func_0x00010be843e0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055bb800; end: 1055bb837;  */

bool FUN_1055bb800(undefined8 param_1,long param_2)

{
  func_0x00010bfb8280(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  return param_2 == 0;
}



/* Entry: 1055bb838; end: 1055bb83f;  */

void FUN_1055bb838(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 1055bb840; end: 1055bb867;  */

void FUN_1055bb840(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1055bb868; end: 1055bb8df; -[SCFriendingSelectedSuggestionsRepositoryImpl _publishSelectedSuggestions] */

void FUN_1055bb868(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1055bb8e0;
  puStack_30 = &UNK_11089b0f0;
  lStack_28 = param_1;
  func_0x000100504554(uVar1,&puStack_48);
  func_0x00010c0d9840(*(undefined8 *)(param_1 + 0x10));
  _objc_release(uVar1);
  return;
}



/* Entry: 1055bb8e0; end: 1055bb8ef;  */

void FUN_1055bb8e0(long param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0e00f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),
             PTR_s_objectForKeyedSubscript__112615a50,param_2);
  return;
}



/* Entry: 1055bb8f0; end: 1055bb99b; -[SCFriendingSelectedSuggestionsRepositoryImpl .cxx_destruct] */

void FUN_1055bb8f0(long param_1)

{
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



/* Entry: 1055bb99c; end: 1055bbae7; -[SCFriendingSelectedSuggestionsServiceProvider _createSelectedSuggestionsRepository] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055bb99c(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_1127260a4;
    _objc_loadWeakRetained(lVar7);
  }
  lVar1 = lVar7;
  func_0x00010c0f98e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  if (param_1 == 0) {
    lVar7 = 0;
  }
  else {
    lVar7 = param_1 + _DAT_1127260ac;
    _objc_loadWeakRetained(lVar7);
  }
  lVar2 = lVar7;
  func_0x00010bf398e0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar7);
  lVar7 = 0;
  if (param_1 != 0) {
    lVar7 = param_1 + _DAT_1127260a8;
    _objc_loadWeakRetained(lVar7);
  }
  lVar3 = lVar7;
  func_0x00010c2445a0(lVar7);
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar5 = lVar4;
  func_0x00010c262260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar7);
  puVar6 = PTR_PTR_1126bb520;
  _objc_alloc(PTR_PTR_1126bb520);
  func_0x00010c04f6a0();
  _objc_release(lVar5);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 1055bbae8; end: 1055bbb37; -[SCFriendingSelectedSuggestionsServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055bbae8(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127260ac);
  _objc_destroyWeak(param_1 + _DAT_1127260a8);
  _objc_destroyWeak(param_1 + _DAT_1127260a4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127260a0);
  return;
}



/* Entry: 1055bbb38; end: 1055bbb83; -[SCContactSyncCTAQualificationProviderImpl isQualifiedForSendToContactSyncCTA] */

bool FUN_1055bbb38(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d42e0();
  _objc_release(uVar1);
  return uVar2 < 99999;
}



/* Entry: 1055bbb84; end: 1055bbb8f; -[SCContactSyncCTAQualificationProviderImpl .cxx_destruct] */

void FUN_1055bbb84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055bbb90; end: 1055bbbf7; -[SCContactSyncCTAQualificationServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055bbb90(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127260b4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127260b8);
  return;
}



/* Entry: 1055bbbf8; end: 1055bbc63;  */

void FUN_1055bbbf8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bb578;
  _objc_alloc(PTR_PTR_1126bb578);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e180(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055bbc64; end: 1055bbc93;  */

void FUN_1055bbc64(void)

{
  _objc_alloc(PTR_PTR_1126bb580);
  func_0x00010c048980();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055bbc94; end: 1055bbcaf;  */

void FUN_1055bbc94(void)

{
  _objc_opt_new(PTR_PTR_1126bb588);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055bbcb0; end: 1055bbcbb;  */

void FUN_1055bbcb0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bb598,PTR_s_sharedInstance_1126688c8);
  return;
}



/* Entry: 1055bbcbc; end: 1055bbd47;  */

void FUN_1055bbcbc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_PTR_1126bb5a0;
  _objc_alloc(PTR_PTR_1126bb5a0);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e040(puVar1,param_2,uVar2,uVar3,*(undefined8 *)(param_1 + 0x30),
                      *(undefined8 *)(param_1 + 0x38),*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48));
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055bbd48; end: 1055bbe17;  */

void FUN_1055bbd48(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdd0080();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055bbe18; end: 1055bbf43;  */

void FUN_1055bbe18(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  
  puVar7 = PTR_PTR_1126bb5d8;
  _objc_alloc();
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar8);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar11 = *(undefined8 *)(param_1 + 0x38);
  puVar9 = PTR_PTR_1126bb5e0;
  _objc_alloc(PTR_PTR_1126bb5e0);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  uVar3 = *(undefined8 *)(param_1 + 0x50);
  uVar6 = *(undefined8 *)(param_1 + 0x58);
  puVar10 = PTR_PTR_1126ae720;
  func_0x00010bf11fe0(PTR_PTR_1126ae720,param_2,&PTR___NSConcreteGlobalBlock_11089b530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c058de0(puVar9,param_2,uVar2,uVar5,uVar3,uVar6,puVar10);
  func_0x00010c00da60(puVar7,param_2,uVar8,uVar1,uVar4,uVar11,puVar9,*(undefined8 *)(param_1 + 0x60)
                      ,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_1 + 0x48),
                      *(undefined8 *)(param_1 + 0x70),*(undefined8 *)(param_1 + 0x50),
                      *(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x80),
                      *(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90),
                      *(undefined8 *)(param_1 + 0x58));
  _objc_release(puVar9);
  _objc_release(puVar10);
  _objc_release(uVar8);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 1055bbf44; end: 1055bbf4f;  */

void FUN_1055bbf44(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010c22ba90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(PTR_PTR_1126bb598,PTR_s_sharedInstance_1126688c8);
  return;
}



/* Entry: 1055bbf50; end: 1055bbfdf;  */

void FUN_1055bbf50(long param_1)

{
  _objc_release(*(undefined8 *)(param_1 + 0x90));
  _objc_release(*(undefined8 *)(param_1 + 0x88));
  _objc_release(*(undefined8 *)(param_1 + 0x80));
  _objc_release(*(undefined8 *)(param_1 + 0x78));
  _objc_release(*(undefined8 *)(param_1 + 0x70));
  _objc_release(*(undefined8 *)(param_1 + 0x68));
  _objc_release(*(undefined8 *)(param_1 + 0x60));
  _objc_release(*(undefined8 *)(param_1 + 0x58));
  _objc_release(*(undefined8 *)(param_1 + 0x50));
  _objc_release(*(undefined8 *)(param_1 + 0x48));
  _objc_release(*(undefined8 *)(param_1 + 0x40));
  _objc_release(*(undefined8 *)(param_1 + 0x38));
  _objc_release(*(undefined8 *)(param_1 + 0x30));
  _objc_release(*(undefined8 *)(param_1 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 1055bbfe0; end: 1055bc04b;  */

void FUN_1055bbfe0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bb5f8;
  _objc_alloc(PTR_PTR_1126bb5f8);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00dbc0(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055bc04c; end: 1055bc1f3;  */

void FUN_1055bc04c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bfebf00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  puVar3 = PTR_PTR_1126bb608;
  _objc_alloc(PTR_PTR_1126bb608);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e100(puVar3,param_2,uVar1,uVar4,uVar2,uVar5,*(undefined8 *)(param_1 + 0x40));
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar1);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055bc1f4; end: 1055bc2ab;  */

void FUN_1055bc1f4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bb618;
  _objc_alloc(PTR_PTR_1126bb618);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d820(puVar1,param_2,uVar2);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055bc2ac; end: 1055bc313;  */

void FUN_1055bc2ac(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126bb628;
  _objc_alloc(PTR_PTR_1126bb628);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00df80(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28));
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055bc314; end: 1055bc3a7;  */

void FUN_1055bc314(void)

{
  _objc_alloc(PTR_PTR_1126bb630);
  func_0x00010c049b80();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1055bc3a8; end: 1055bc50f;  */

void FUN_1055bc3a8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = PTR_PTR_1126bb558;
  _objc_alloc(PTR_PTR_1126bb558);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e1c0(puVar3,param_2,uVar4,uVar1,uVar2,uVar5);
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055bc510; end: 1055bc63b;  */

void FUN_1055bc510(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = PTR_PTR_1126bb648;
  _objc_alloc(PTR_PTR_1126bb648);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c045580(puVar1,param_2,uVar2,*(undefined8 *)(param_1 + 0x28),
                      *(undefined8 *)(param_1 + 0x30),*(undefined8 *)(param_1 + 0x38),
                      *(undefined8 *)(param_1 + 0x40));
  _objc_release(uVar2);
  puVar3 = PTR_PTR_1126bb650;
  _objc_alloc(PTR_PTR_1126bb650);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar5 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0x60);
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00e200(puVar3,param_2,uVar2,uVar4,puVar1,uVar5,uVar7,uVar6);
  _objc_release(uVar6);
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar2);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055bc63c; end: 1055bc6e7;  */

void FUN_1055bc63c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar3 = PTR_PTR_1126bb658;
  _objc_alloc(PTR_PTR_1126bb658);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00d960(puVar3,param_2,uVar4,uVar1,uVar2,uVar5,*(undefined8 *)(param_1 + 0x40),
                      *(undefined8 *)(param_1 + 0x48),*(undefined8 *)(param_1 + 0x50));
  _objc_release(uVar5);
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1055bc6e8; end: 1055bc6f7;  */

void FUN_1055bc6e8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c0fc670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_pinningMetadataObservableOfTopSu_11261cbb8);
  return;
}



/* Entry: 1055bc6f8; end: 1055bc963; -[SCSnapchatterServicesEntryPoint _atlasGwGrpcService:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055bc6f8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  
  puVar1 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf18ba0();
  _objc_release(puVar1);
  puVar1 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  lVar9 = (long)_DAT_112726118;
  lVar2 = param_1 + lVar9;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c25d780();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320(puVar1,param_2,lVar4);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  func_0x00010c1ebf80(puVar1,param_2,&PTR____CFConstantStringClassReference_110dd9618);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c1eeba0(puVar1,param_2,60000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c214be0(puVar1,param_2,10000);
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar1,param_2,1);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar5 = param_1 + lVar9;
  _objc_loadWeakRetained(uVar5);
  uVar6 = uVar5;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c067f00();
  _objc_release(uVar6);
  _objc_release(uVar5);
  puVar8 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df7c0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,
                      -(uVar7 >> 0x1f & 1) & 0xfff0000000000000 | (uVar7 & 0xffffffff) << 0x14);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1c3360(puVar1,param_2,puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar8);
  func_0x0001003e4184(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1;
  func_0x00010bfcfa00();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf56360();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(param_1);
  puVar8 = PTR_PTR_1126ae4e8;
  func_0x00010c22b6a0(PTR_PTR_1126ae4e8);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf95660();
  _objc_release(puVar8);
  _objc_release(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar4);
  return;
}



/* Entry: 1055bc964; end: 1055bcb17; -[SCSnapchatterServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055bc964(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127260f4,0);
  _objc_storeStrong(param_1 + _DAT_112726108,0);
  _objc_storeStrong(param_1 + _DAT_112726104,0);
  _objc_destroyWeak(param_1 + _DAT_11272612c);
  _objc_destroyWeak(param_1 + _DAT_1127260e0);
  _objc_destroyWeak(param_1 + _DAT_1127260f0);
  _objc_destroyWeak(param_1 + _DAT_1127260f8);
  _objc_destroyWeak(param_1 + _DAT_1127260dc);
  _objc_destroyWeak(param_1 + _DAT_1127260ec);
  _objc_destroyWeak(param_1 + _DAT_1127260cc);
  _objc_destroyWeak(param_1 + _DAT_1127260d4);
  _objc_destroyWeak(param_1 + _DAT_112726128);
  _objc_destroyWeak(param_1 + _DAT_1127260d8);
  _objc_destroyWeak(param_1 + _DAT_1127260e8);
  _objc_destroyWeak(param_1 + _DAT_1127260bc);
  _objc_destroyWeak(param_1 + _DAT_112726118);
  _objc_destroyWeak(param_1 + _DAT_112726124);
  _objc_destroyWeak(param_1 + _DAT_11272610c);
  _objc_destroyWeak(param_1 + _DAT_1127260e4);
  _objc_destroyWeak(param_1 + _DAT_1127260c8);
  _objc_destroyWeak(param_1 + _DAT_1127260d0);
  _objc_destroyWeak(param_1 + _DAT_112726120);
  _objc_destroyWeak(param_1 + _DAT_112726100);
  _objc_destroyWeak(param_1 + _DAT_1127260c0);
  _objc_destroyWeak(param_1 + _DAT_1127260c4);
  _objc_destroyWeak(param_1 + _DAT_11272611c);
  _objc_storeStrong(param_1 + _DAT_112726130,0);
  _objc_storeStrong(param_1 + _DAT_112726114,0);
  _objc_storeStrong(param_1 + _DAT_112726134,0);
  _objc_storeStrong(param_1 + _DAT_112726110,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_1127260fc,0);
  return;
}



/* Entry: 1055bcb18; end: 1055bcd4b; -[SCSnapchatterServicesCleanupEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055bcb18(long param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long lStack_60;
  undefined *puStack_58;
  
  lVar9 = param_1 + _DAT_112726140;
  _objc_loadWeakRetained();
  lVar10 = lVar9;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar10;
  func_0x00010bf1f440();
  _objc_release(lVar10);
  _objc_release(lVar9);
  lVar9 = (long)_DAT_11272613c;
  iVar1 = (int)*(undefined8 *)(param_1 + lVar9);
  func_0x00010c06f880();
  if (iVar1 == 0 || (int)lVar2 != 0) {
    puStack_58 = PTR_PTR_1126e9258;
    plVar5 = &lStack_60;
    lStack_60 = param_1;
    _objc_msgSendSuper2(plVar5,PTR_s_end_1125c29d0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    lVar10 = param_1 + _DAT_112726144;
    _objc_loadWeakRetained(lVar10);
    lVar2 = lVar10;
    func_0x00010c0f98e0();
    _objc_retainAutoreleasedReturnValue();
    lVar3 = lVar2;
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bfcd0c0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar3);
    _objc_release(lVar2);
    _objc_release(lVar10);
    lVar10 = (long)_DAT_112726148;
    plVar5 = *(long **)(param_1 + lVar10);
    if (plVar5 == (long *)0x0) {
      puVar6 = PTR_PTR_1126afc98;
      func_0x00010bf0c040();
      _objc_retainAutoreleasedReturnValue();
      uVar7 = *(undefined8 *)(param_1 + lVar10);
      *(undefined **)(param_1 + lVar10) = puVar6;
      _objc_release(uVar7);
      uVar8 = *(undefined8 *)(param_1 + lVar10);
      _objc_retain(uVar8);
      uVar7 = *(undefined8 *)(param_1 + lVar9);
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      lVar9 = lVar4;
      func_0x00010c11de00(lVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_retain(uVar8);
      func_0x00010bf39e00(uVar7);
      _objc_release(lVar9);
      _objc_release(uVar7);
      plVar5 = *(long **)(param_1 + lVar10);
      func_0x00010c117720(plVar5);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar8);
      _objc_release(uVar8);
    }
    else {
      func_0x00010c117720();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(lVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 1055bcd4c; end: 1055bcd53;  */

void FUN_1055bcd4c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x20),PTR_s_finish_1125c9748);
  return;
}



/* Entry: 1055bcd54; end: 1055bcdc3; -[SCSnapchatterServicesCleanupEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055bcd54(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726138);
  _objc_destroyWeak(param_1 + _DAT_112726140);
  _objc_destroyWeak(param_1 + _DAT_112726144);
  _objc_destroyWeak(param_1 + _DAT_11272614c);
  _objc_storeStrong(param_1 + _DAT_112726148,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272613c,0);
  return;
}



/* Entry: 1055bcdc4; end: 1055bcf6f; -[SCCContactAddressBookEntry initWithSCSnapchattersContactNonSnapchatter:invited:eligibleForSMSInvite:contactPhotoURI:] */

undefined8
FUN_1055bcdc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  _objc_retain(param_6);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bf85d80(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_3;
  func_0x00010c0faf60(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02d900(param_1,param_2,uVar1,uVar2);
  _objc_retain();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1aecc0(param_1,param_2,puVar3);
  _objc_release(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570,param_2,param_5);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c193fc0(param_1,param_2,puVar3);
  _objc_release(puVar3);
  func_0x00010c181520(param_1,param_2,param_6);
  _objc_release(param_6);
  uVar1 = param_3;
  func_0x00010c260ca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1812c0(param_1,param_2,uVar1);
  _objc_release(uVar1);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c150c20(param_3);
  func_0x00010c0df720(puVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1f6cc0(param_1,param_2,puVar3);
  _objc_release(puVar3);
  uVar1 = param_3;
  func_0x00010bfded40(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  func_0x00010c1a7500(param_1,param_2,uVar1);
  _objc_release(uVar1);
  _objc_release(param_1);
  return param_1;
}



/* Entry: 1055bcf70; end: 1055bd22b; -[SCComposerPeopleContactAddressBookEntryStore initWithNonSnapchattersObservableRepository:snapchattersDataTracker:snapchattersDataMutator:inviteFriendStateTracker:inviteContactActionHandler:contactsAvailableObservable:enableTwilioInvites:shouldFilterOutIneligibleContacts:inviteFeatureSource:contactPhotosService:circumstanceEngine:] */

undefined8 *
FUN_1055bcf70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  _objc_retain(param_11);
  _objc_retain(param_12);
  puStack_68 = PTR_PTR_1126e9260;
  puVar1 = &uStack_70;
  uStack_70 = param_1;
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
    puVar3 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
    _objc_alloc_init();
    uVar2 = puVar1[6];
    puVar1[6] = puVar3;
    _objc_release(uVar2);
    _objc_retain(param_8);
    uVar2 = puVar1[7];
    puVar1[7] = param_8;
    _objc_release(uVar2);
    *(undefined1 *)((long)puVar1 + 0x41) = (undefined1)param_9;
    *(undefined1 *)(puVar1 + 8) = param_9._1_1_;
    *(undefined4 *)((long)puVar1 + 0x44) = param_10;
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    puVar4 = PTR__OBJC_CLASS___NSCache_1126b3388;
    _objc_opt_new(PTR__OBJC_CLASS___NSCache_1126b3388);
    func_0x00010c060400();
    uVar2 = puVar1[0xb];
    puVar1[0xb] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar4);
    puVar4 = (undefined *)puVar1[4];
    func_0x00010c06aaa0();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = puVar4;
    func_0x00010bf51e00();
    if (puVar3 == (undefined *)0x0) {
      puVar5 = PTR__OBJC_CLASS___NSSet_1126ae870;
      func_0x00010c1607a0(PTR__OBJC_CLASS___NSSet_1126ae870);
      _objc_retainAutoreleasedReturnValue();
    }
    else {
      _objc_retain(puVar3);
      puVar5 = puVar3;
    }
    _objc_release(puVar3);
    _objc_release(puVar4);
    puVar3 = PTR_PTR_1126ae820;
    _objc_alloc();
    func_0x00010c060400();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    _objc_release(puVar5);
  }
  _objc_release(param_12);
  _objc_release(param_11);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 1055bd22c; end: 1055bd49b; -[SCComposerPeopleContactAddressBookEntryStore _addressBookEntriesObservable] */

void FUN_1055bd22c(long param_1,undefined *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = *(long *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010bf49e40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  uVar11 = *(undefined8 *)(param_1 + 0x50);
  _objc_retain(uVar11);
  uVar12 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar12);
  puVar6 = PTR_PTR_1126ae6b8;
  puVar5 = PTR__OBJC_CLASS___NSArray_1126ae530;
  _objc_retain(uVar2);
  _objc_retain(uVar1);
  func_0x00010bf0a140(puVar5);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar11);
  func_0x00010bf41860();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar5);
  puVar5 = PTR_PTR_1126ae6b8;
  puVar7 = PTR__OBJC_CLASS___NSArray_1126ae530;
  func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf41860(puVar5);
  _objc_retainAutoreleasedReturnValue();
  puVar8 = puVar5;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(uVar12);
  puVar9 = puVar8;
  func_0x00010bf87460(puVar8);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar12);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(puVar7);
  _objc_release(puVar6);
  _objc_release(uVar11);
  _objc_release(uVar12);
  _objc_release(uVar11);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar10) {
    ___stack_chk_fail();
    _objc_retain(param_2);
    puVar5 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    puVar6 = param_2;
    func_0x00010c0dfd40(param_2);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
    puVar9 = puVar5;
    func_0x0001064e555c(puVar5,puVar6,*(undefined1 *)(lVar4 + 0x28),*(undefined1 *)(lVar4 + 0x29),
                        *(undefined8 *)(lVar4 + 0x20));
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar9);
  return;
}



/* Entry: 1055bd49c; end: 1055bd60b;  */

void FUN_1055bd49c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = param_2;
  func_0x00010c0dfd40(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  uVar3 = uVar1;
  func_0x0001064e555c(uVar1,uVar2,*(undefined1 *)(param_1 + 0x28),*(undefined1 *)(param_1 + 0x29),
                      *(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1055bd60c; end: 1055bd65f;  */

void FUN_1055bd60c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf529e0(param_2);
  func_0x00010c0df780(puVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1055bd660; end: 1055bd66b; -[SCComposerPeopleContactAddressBookEntryStore pushToValdiMarshaller:] */

void FUN_1055bd660(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b8987c0(param_3,param_1);
  func_0x00010b8987b8();
  func_0x00010b8987b0();
  func_0x00010b89873c();
  func_0x00010b898758();
  return;
}



/* Entry: 1055bd66c; end: 1055bd6bb; -[SCComposerPeopleContactAddressBookEntryStore getContactAddressBookEntriesWithIsForSmsInvite:] */

void FUN_1055bd66c(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010be130a0();
  func_0x00010bdc9220(param_1);
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



/* Entry: 1055bd6bc; end: 1055bd75b; -[SCComposerPeopleContactAddressBookEntryStore _fetchPhotos] */

void FUN_1055bd6bc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  _objc_retain(uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_1055bd75c;
  puStack_30 = &UNK_11086aee0;
  uStack_28 = uVar2;
  _objc_retain(uVar2);
  func_0x00010c09b160(uVar1,param_2,&puStack_48);
  _objc_release(uVar1);
  _objc_release(uStack_28);
  _objc_release(uVar2);
  return;
}



/* Entry: 1055bd75c; end: 1055bd773;  */

void FUN_1055bd75c(long param_1,long param_2,long param_3)

{
  if ((param_2 != 0) && (param_3 == 0)) {
                    /* WARNING: Could not recover jumptable at 0x00010c0d9850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(undefined8 *)(param_1 + 0x20),PTR_s_next__112614028,param_2);
    return;
  }
  return;
}



/* Entry: 1055bd774; end: 1055bda7b; -[SCComposerPeopleContactAddressBookEntryStore inviteContactAddressBookEntryWithRequest:completion:inviteViaSMS:smsInviteFeature:] */

void FUN_1055bd774(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  lVar1 = param_3;
  func_0x00010c0d4f60();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_3;
  func_0x00010c0faaa0();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = param_3;
  func_0x00010bf49c80();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = param_3;
  func_0x00010bfded40();
  _objc_retainAutoreleasedReturnValue();
  if (lVar2 == 0) {
    (**(code **)(param_4 + 0x10))(param_4,0);
  }
  else {
    puVar5 = PTR_PTR_1126bb3f0;
    _objc_alloc();
    func_0x00010c0359a0(0,0,0);
    func_0x00010c067fc0(param_6);
    puVar6 = PTR_PTR_1126b02a8;
    _objc_alloc(PTR_PTR_1126b02a8);
    puVar7 = PTR_PTR_1126b16e0;
    _objc_alloc(PTR_PTR_1126b16e0);
    func_0x00010bf1f3c0(param_5);
    func_0x00010c0023c0(puVar7);
    func_0x00010c01b460(puVar6);
    _objc_release(puVar7);
    func_0x00010bfd0140(*(undefined8 *)(param_1 + 0x28));
    _objc_initWeak(auStack_68,param_1);
    puVar7 = PTR_PTR_1126bb688;
    _objc_alloc(PTR_PTR_1126bb688);
    _objc_retain(lVar2);
    _objc_copyWeak(auStack_70,auStack_68);
    _objc_retain(param_4);
    func_0x00010c04ba60(puVar7);
    func_0x00010bef9980(*(undefined8 *)(param_1 + 0x20));
    func_0x00010c1d0560(*(undefined8 *)(param_1 + 0x30));
    _objc_release(puVar7);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_70);
    _objc_release(lVar2);
    _objc_destroyWeak(auStack_68);
    _objc_release(puVar6);
    _objc_release(puVar5);
  }
  _objc_release(lVar4);
  _objc_release(lVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 1055bda7c; end: 1055bdb3f;  */

void FUN_1055bda7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_2);
  iVar1 = (int)*(undefined8 *)(param_1 + 0x20);
  func_0x00010c0720c0();
  if (iVar1 != 0) {
    lVar2 = param_1 + 0x30;
    _objc_loadWeakRetained();
    lVar3 = *(long *)(lVar2 + 0x30);
    func_0x00010c0dff20();
    _objc_retainAutoreleasedReturnValue();
    if (lVar3 != 0) {
      lVar4 = *(long *)(param_1 + 0x28);
      if (lVar4 != 0) {
        (**(code **)(lVar4 + 0x10))(lVar4,param_3);
      }
      func_0x00010c12cf80(*(undefined8 *)(lVar2 + 0x20));
      func_0x00010c12d3e0(*(undefined8 *)(lVar2 + 0x30));
    }
    func_0x00010bed5e40(lVar2);
    _objc_release(lVar3);
    _objc_release(lVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 1055bdb40; end: 1055bdc1b; -[SCComposerPeopleContactAddressBookEntryStore _updateContactInviteStateWithPhoneNumber:success:] */

void FUN_1055bdb40(long param_1,undefined8 param_2,undefined8 param_3,int param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  puVar1 = *(undefined **)(param_1 + 0x60);
  func_0x00010c296d80();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c0d3c80();
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
    func_0x00010c1607a0(PTR__OBJC_CLASS___NSMutableSet_1126ae8e0);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    _objc_retain(puVar2);
    puVar3 = puVar2;
  }
  _objc_release(puVar2);
  _objc_release(puVar1);
  if (param_4 == 0) {
    func_0x00010c12d360(puVar3,param_2,param_3);
  }
  else {
    func_0x00010befa120();
  }
  uVar4 = *(undefined8 *)(param_1 + 0x60);
  puVar2 = puVar3;
  func_0x00010bf51e00(puVar3);
  func_0x00010c0d9840(uVar4,param_2,puVar2);
  _objc_release(puVar2);
  _objc_release(puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055bdc1c; end: 1055bdcb7; -[SCComposerPeopleContactAddressBookEntryStore .cxx_destruct] */

void FUN_1055bdc1c(long param_1)

{
  _objc_storeStrong(param_1 + 0x60,0);
  _objc_storeStrong(param_1 + 0x58,0);
  _objc_storeStrong(param_1 + 0x50,0);
  _objc_storeStrong(param_1 + 0x48,0);
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



/* Entry: 1055bdcb8; end: 1055bddbf;  */

void FUN_1055bdcb8(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  
  _objc_retain(param_2);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = param_2;
  func_0x00010c0faf60(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900(uVar4);
  _objc_release(lVar1);
  puVar2 = PTR_PTR_1126bb690;
  _objc_alloc(PTR_PTR_1126bb690);
  func_0x00010c070aa0(param_2);
  lVar1 = param_2;
  func_0x00010c0fb380();
  _objc_retainAutoreleasedReturnValue();
  if (lVar1 == 0) {
    func_0x00010c040fa0(puVar2);
  }
  else {
    lVar3 = param_2;
    func_0x00010c0faf60(param_2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c040fa0(puVar2);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1055bddc0; end: 1055bde97; -[SCComposerPeopleInviteFriendStateListener initWithStartFetchCallback:endFetchCallback:endInviteCallback:] */

undefined1 *
FUN_1055bddc0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  puStack_38 = PTR_PTR_1126e9268;
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
    uVar2 = param_5;
    _objc_retainBlock();
    uVar3 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined8 *)((long)puVar1 + 0x18) = uVar2;
    _objc_release(uVar3);
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055bde98; end: 1055bdeaf; -[SCComposerPeopleInviteFriendStateListener didStartFetchingFriendDeeplinkForPhoneNumber:] */

void FUN_1055bde98(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 8);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001055bdea8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3);
    return;
  }
  return;
}



/* Entry: 1055bdeb0; end: 1055bdecf; -[SCComposerPeopleInviteFriendStateListener didEndFetchingFriendDeeplinkForPhoneNumber:deeplink:success:] */

void FUN_1055bdeb0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001055bdec8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4,param_5);
    return;
  }
  return;
}



/* Entry: 1055bded0; end: 1055bdeeb; -[SCComposerPeopleInviteFriendStateListener didEndInvitingFriendWithPhoneNumber:success:] */

void FUN_1055bded0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001055bdee4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 0x10))(lVar1,param_3,param_4);
    return;
  }
  return;
}



/* Entry: 1055bdeec; end: 1055bdf27; -[SCComposerPeopleInviteFriendStateListener .cxx_destruct] */

void FUN_1055bdeec(long param_1)

{
  _objc_storeStrong(param_1 + 0x18,0);
  _objc_storeStrong(param_1 + 0x10,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + 8,0);
  return;
}



/* Entry: 1055bdf28; end: 1055be007; -[SCCContactUser initWithSCSnapchatter:] */

undefined8 FUN_1055bdf28(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined **ppuVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  
  _objc_retain(param_3);
  puVar2 = PTR_PTR_1126b1440;
  _objc_alloc(PTR_PTR_1126b1440);
  func_0x00010c040f20();
  func_0x00010c05a680(param_1,param_2,puVar2);
  _objc_retain();
  lVar3 = param_3;
  func_0x00010bf4a3a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release();
  if (lVar3 != 0) {
    lVar3 = param_3;
    func_0x00010bf4a3a0();
    _objc_retainAutoreleasedReturnValue();
    lVar4 = lVar3;
    func_0x00010bf4a480();
    _objc_release(lVar3);
    ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0c88;
    if ((int)lVar4 != 3) {
      ppuVar1 = &PTR__OBJC_CLASS___NSConstantIntegerNumber_1110c0ca0;
    }
    func_0x00010c1816e0(param_1,param_2,ppuVar1);
  }
  _objc_release(puVar2);
  _objc_release(param_3);
  _objc_release(param_1);
  return param_1;
}



/* Entry: 1055be008; end: 1055be17b; -[SCComposerPeopleContactUserStore initWithSnapchattersDataFetcher:snapchattersDataTracker:dataUpdatedObservable:performerProvider:] */

undefined1 *
FUN_1055be008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  puVar1 = &uStack_50;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puStack_48 = PTR_PTR_1126e9270;
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
    uVar2 = *(undefined8 *)((long)puVar1 + 0x20);
    *(undefined8 *)((long)puVar1 + 0x20) = param_5;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae820;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    *(undefined **)((long)puVar1 + 0x30) = puVar3;
    _objc_release(uVar2);
    uVar2 = *(undefined8 *)((long)puVar1 + 0x30);
    func_0x00010b09c8d0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = *(undefined8 *)((long)puVar1 + 0x38);
    *(undefined8 *)((long)puVar1 + 0x38) = uVar2;
    _objc_release(uVar5);
    puVar4 = (undefined1 *)puVar1;
    func_0x00010bdef1c0();
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x18);
    *(undefined1 **)((long)puVar1 + 0x18) = puVar4;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = *(undefined8 *)((long)puVar1 + 0x28);
    *(undefined **)((long)puVar1 + 0x28) = puVar3;
    _objc_release(uVar2);
    func_0x00010be65f60(puVar1);
    func_0x00010be10880(puVar1);
  }
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  return (undefined1 *)puVar1;
}



/* Entry: 1055be17c; end: 1055be187; -[SCComposerPeopleContactUserStore pushToValdiMarshaller:] */

void FUN_1055be17c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x00010b8987c0(param_3,param_1);
  func_0x00010b8987b8();
  func_0x00010b8987b0();
  func_0x00010b89873c();
  func_0x00010b898758();
  return;
}



/* Entry: 1055be188; end: 1055be253; -[SCComposerPeopleContactUserStore _observeDataUpdates] */

void FUN_1055be188(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_initWeak(auStack_38,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010c25ff60(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1055be254; end: 1055be27f;  */

void FUN_1055be254(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be10880();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055be280; end: 1055be347; -[SCComposerPeopleContactUserStore _fetchContactUsersAndPublishInPerformer] */

void FUN_1055be280(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  _objc_initWeak(auStack_28,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_30,auStack_28);
  func_0x00010c0f7fc0(uVar1);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_30);
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 1055be348; end: 1055be373;  */

void FUN_1055be348(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be10860();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055be374; end: 1055be47b; -[SCComposerPeopleContactUserStore _fetchContactUsersAndPublish] */

void FUN_1055be374(long param_1)

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
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11de00();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_40,auStack_38);
  func_0x00010bf4a460(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  return;
}



/* Entry: 1055be47c; end: 1055be4e3;  */

void FUN_1055be47c(long param_1,undefined8 param_2,undefined8 param_3)

{
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be83e00();
  _objc_release(param_3);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1055be4e4; end: 1055be593; -[SCComposerPeopleContactUserStore _publishContactUsersWithSnapchatters:error:] */

void FUN_1055be4e4(long param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (param_4 == 0) {
    func_0x00010c0b8600(param_3,param_2,&PTR___NSConcreteGlobalBlock_11089ba20);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    puVar1 = PTR_PTR_1126af5d0;
    func_0x00010c2619e0(PTR_PTR_1126af5d0,param_2,param_3);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,puVar1);
    _objc_release(puVar1);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    param_3 = PTR_PTR_1126af5d0;
    func_0x00010bfa01c0(PTR_PTR_1126af5d0,param_2,param_4);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010c0d9840(uVar2,param_2,param_3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1055be594; end: 1055be5df;  */

void FUN_1055be594(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb698;
  _objc_retain(param_2);
  _objc_alloc(puVar1);
  func_0x00010c040f20();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055be5e0; end: 1055be6d3; -[SCComposerPeopleContactUserStore _createLazyPerformerWithPerformerProvider:] */

void FUN_1055be5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uStack_38 = 0x1055be678;
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



/* Entry: 1055be6d4; end: 1055be6d7; -[SCComposerPeopleContactUserStore getContactUsersWithCompletion:] */

void FUN_1055be6d4(void)

{
  return;
}



/* Entry: 1055be6d8; end: 1055be6e7; -[SCComposerPeopleContactUserStore onContactUsersUpdatedWithCallback:] */

undefined ** FUN_1055be6d8(void)

{
  return &PTR___NSConcreteGlobalBlock_11089ba40;
}



/* Entry: 1055be6e8; end: 1055be6ef; -[SCComposerPeopleContactUserStore contactUsersObservable] */

undefined8 FUN_1055be6e8(long param_1)

{
  return *(undefined8 *)(param_1 + 0x38);
}



/* Entry: 1055be6f0; end: 1055be71f; -[SCComposerPeopleContactUserStore setContactUsersObservable:] */

void FUN_1055be6f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 1055be720; end: 1055be78b; -[SCComposerPeopleContactUserStore .cxx_destruct] */

void FUN_1055be720(long param_1)

{
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



/* Entry: 1055be78c; end: 1055be89b; -[SCComposerPeopleBridgeContactServiceProvider provide] */

void FUN_1055be78c(undefined8 param_1)

{
  undefined *puVar1;
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_initWeak(auStack_48,param_1);
  puVar1 = PTR_PTR_1126bb6a0;
  _objc_alloc(PTR_PTR_1126bb6a0);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_1055be89c;
  puStack_58 = &UNK_11089ba90;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c002360(puVar1);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055be89c; end: 1055be96b;  */

void FUN_1055be89c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055be96c; end: 1055be9b3;  */

void FUN_1055be96c(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5b4c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055be9b4; end: 1055bea83;  */

void FUN_1055be9b4(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae720;
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  _objc_retain(param_2);
  func_0x00010bf11fe0(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055bea84; end: 1055beacb;  */

void FUN_1055bea84(long param_1)

{
  long lVar1;
  
  param_1 = param_1 + 0x28;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be5b740();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 1055beacc; end: 1055bef8b; -[SCComposerPeopleBridgeContactServiceProvider _makeAddressBookEntryStoreWithConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055beacc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  
  lVar18 = (long)_DAT_1127261b0;
  _objc_retain(param_3);
  lVar18 = param_1 + lVar18;
  _objc_loadWeakRetained();
  lVar1 = lVar18;
  func_0x00010c06a7a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  lVar17 = (long)_DAT_1127261b4;
  lVar18 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar19 = lVar18;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = (long)_DAT_1127261b8;
  lVar2 = param_1 + lVar20;
  _objc_loadWeakRetained(lVar2);
  func_0x000108c7c620(lVar19,lVar2);
  _objc_release(lVar2);
  _objc_release(lVar19);
  _objc_release(lVar18);
  lVar18 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar18;
  func_0x00010c06a7c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar18);
  puVar3 = PTR_PTR_1126bb6a8;
  _objc_alloc();
  uVar4 = param_3;
  func_0x00010c06a5e0();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = lVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar18 = param_1 + _DAT_1127261bc;
  _objc_loadWeakRetained();
  lVar5 = lVar18;
  func_0x00010c293fc0();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + lVar20;
  _objc_loadWeakRetained();
  lVar6 = lVar20;
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = lVar6;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar8 = lVar7;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = param_1 + _DAT_1127261d0;
    _objc_loadWeakRetained();
  }
  lVar9 = lVar15;
  func_0x00010bf9e260();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar16 = 0;
  }
  else {
    lVar16 = param_1 + _DAT_1127261d4;
    _objc_loadWeakRetained();
  }
  lVar10 = lVar16;
  func_0x00010bf4aa00();
  _objc_retainAutoreleasedReturnValue();
  if (param_1 == 0) {
    lVar21 = 0;
  }
  else {
    lVar21 = param_1 + _DAT_1127261d8;
    _objc_loadWeakRetained();
  }
  lVar11 = lVar21;
  func_0x00010c22d320();
  _objc_retainAutoreleasedReturnValue();
  lVar12 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar13 = lVar12;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c038de0();
  _objc_release(lVar13);
  _objc_release(lVar12);
  _objc_release(lVar11);
  _objc_release(lVar21);
  _objc_release(lVar10);
  _objc_release(lVar16);
  _objc_release(lVar9);
  _objc_release(lVar15);
  _objc_release(lVar8);
  _objc_release(lVar7);
  _objc_release(lVar6);
  _objc_release(lVar20);
  _objc_release(lVar5);
  _objc_release(lVar18);
  _objc_release(lVar19);
  _objc_release(uVar4);
  puVar14 = PTR_PTR_1126bb6b0;
  _objc_alloc();
  lVar19 = (long)_DAT_1127261c0;
  lVar18 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar6 = lVar18;
  func_0x00010c0db000();
  _objc_retainAutoreleasedReturnValue();
  lVar20 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar7 = lVar20;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  lVar19 = param_1 + lVar19;
  _objc_loadWeakRetained();
  lVar8 = lVar19;
  func_0x00010c244ae0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = param_3;
  func_0x00010bf4a900(param_3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf92220();
  func_0x00010c2305e0();
  func_0x00010c06a780();
  _objc_release(param_3);
  lVar5 = param_1 + _DAT_1127261c4;
  _objc_loadWeakRetained();
  lVar15 = lVar5;
  func_0x00010bf4a300();
  _objc_retainAutoreleasedReturnValue();
  param_1 = param_1 + lVar17;
  _objc_loadWeakRetained();
  lVar17 = param_1;
  func_0x00010bf398e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c02fb20();
  _objc_release(lVar17);
  _objc_release(param_1);
  _objc_release(lVar15);
  _objc_release(lVar5);
  _objc_release(uVar4);
  _objc_release(lVar8);
  _objc_release(lVar19);
  _objc_release(lVar7);
  _objc_release(lVar20);
  _objc_release(lVar6);
  _objc_release(lVar18);
  _objc_release(puVar3);
  _objc_release(lVar2);
  _objc_release(lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar14);
  return;
}



/* Entry: 1055bef8c; end: 1055bf0bf; -[SCComposerPeopleBridgeContactServiceProvider _makeContactUserStoreWithConfig:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055bef8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_PTR_1126bb6b8;
  _objc_retain(param_3);
  _objc_alloc(puVar1);
  lVar7 = (long)_DAT_1127261c0;
  lVar2 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar2);
  lVar3 = lVar2;
  func_0x00010c244ac0();
  _objc_retainAutoreleasedReturnValue();
  lVar7 = param_1 + lVar7;
  _objc_loadWeakRetained(lVar7);
  lVar4 = lVar7;
  func_0x00010c244b40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = param_3;
  func_0x00010bf28680(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  param_1 = param_1 + _DAT_1127261c8;
  _objc_loadWeakRetained(param_1);
  lVar6 = param_1;
  func_0x00010c0f98e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c049a40(puVar1,param_2,lVar3,lVar4,uVar5,lVar6);
  _objc_release(lVar6);
  _objc_release(param_1);
  _objc_release(uVar5);
  _objc_release(lVar4);
  _objc_release(lVar7);
  _objc_release(lVar3);
  _objc_release(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 1055bf0c0; end: 1055bf163; -[SCComposerPeopleBridgeContactServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055bf0c0(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_1127261d8);
  _objc_destroyWeak(param_1 + _DAT_1127261c4);
  _objc_destroyWeak(param_1 + _DAT_1127261d4);
  _objc_destroyWeak(param_1 + _DAT_1127261c8);
  _objc_destroyWeak(param_1 + _DAT_1127261b4);
  _objc_destroyWeak(param_1 + _DAT_1127261d0);
  _objc_destroyWeak(param_1 + _DAT_1127261bc);
  _objc_destroyWeak(param_1 + _DAT_1127261b8);
  _objc_destroyWeak(param_1 + _DAT_1127261c0);
  _objc_destroyWeak(param_1 + _DAT_1127261b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_1127261cc);
  return;
}



/* Entry: 1055bf164; end: 1055bf1db; -[SCLegacySnapchatterServicesAdaptor isNewUser] */

undefined8 FUN_1055bf164(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c293640(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf5ff60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c078a60();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
  return uVar4;
}



/* Entry: 1055bf1dc; end: 1055bf1e3; -[SCLegacySnapchatterServicesAdaptor userId] */

void FUN_1055bf1dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x28),PTR_s_userId_112682320);
  return;
}



/* Entry: 1055bf1e4; end: 1055bf64b; -[SCLegacySnapchatterServicesAdaptor userSnapchatter] */

void FUN_1055bf1e4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined4 uVar20;
  ulong in_stack_fffffffffffffeb0;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf1b5c0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  puVar4 = PTR_PTR_1126b14b8;
  _objc_alloc();
  uVar5 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar5);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar5;
  func_0x00010bf12ea0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar6;
  func_0x00010c15ade0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar3;
  func_0x00010c14fa80(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar3;
  func_0x00010bf14060(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar3;
  func_0x00010bf14660(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bff7be0(puVar4,param_2,uVar2,uVar1,uVar7,uVar10,uVar8,0);
  _objc_release(uVar8);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(uVar6);
  _objc_release(uVar2);
  _objc_release(uVar5);
  puVar9 = PTR_PTR_1126bb6c0;
  _objc_alloc();
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf1a840(uVar10);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar10;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar1;
  func_0x00010901cc40();
  _objc_retainAutoreleasedReturnValue();
  uVar20 = 0;
  func_0x00010bff7860(0,puVar9,param_2,uVar7,0,0,0,1,0,0,0,0,
                      in_stack_fffffffffffffeb0 & 0xffffffffffffff00);
  _objc_release(uVar7);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar10);
  puVar11 = PTR_PTR_1126b15c8;
  _objc_alloc();
  uVar12 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  uVar13 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar13;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar14 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf85f80();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar14;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar10 = uVar7;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  puVar15 = PTR_PTR_1126bb6c8;
  _objc_alloc();
  puVar16 = PTR_PTR_1126bb6d0;
  func_0x00010c0d4280(PTR_PTR_1126bb6d0,param_2,puVar9);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c04f320(0,0,0,puVar15,param_2,puVar16,1,0,0,0);
  uVar17 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  uVar8 = uVar17;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar8;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar18 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c2946e0();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar18;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar19 = uVar6;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c05c0e0(puVar11,param_2,uVar12,uVar1,uVar10,0,0,puVar4,0,0,uVar20,puVar15,0,0,0,0,
                      uVar5,uVar19,0);
  _objc_release(uVar19);
  _objc_release(uVar6);
  _objc_release(uVar18);
  _objc_release(uVar5);
  _objc_release(uVar8);
  _objc_release(uVar17);
  _objc_release(puVar15);
  _objc_release(puVar16);
  _objc_release(uVar10);
  _objc_release(uVar7);
  _objc_release(uVar14);
  _objc_release(uVar1);
  _objc_release(uVar2);
  _objc_release(uVar13);
  _objc_release(uVar12);
  _objc_release(puVar9);
  _objc_release(puVar4);
  _objc_release(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar11);
  return;
}



/* Entry: 1055bf64c; end: 1055bf6b3; -[SCLegacySnapchatterServicesAdaptor birthday] */

void FUN_1055bf64c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010bf1a840(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1055bf6b4; end: 1055bf733; -[SCLegacySnapchatterServicesAdaptor phoneNumberCountryCode] */

void FUN_1055bf6b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c0fb000(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf60aa0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0fafc0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 1055bf734; end: 1055bf7ab; -[SCLegacySnapchatterServicesAdaptor .cxx_destruct] */

void FUN_1055bf734(long param_1)

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



/* Entry: 1055bf7ac; end: 1055bf82f; -[SCLegacySnapchatterServicesEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055bf7ac(long param_1)

{
  _objc_storeStrong(param_1 + _DAT_1127261fc,0);
  _objc_destroyWeak(param_1 + _DAT_112726218);
  _objc_destroyWeak(param_1 + _DAT_112726214);
  _objc_destroyWeak(param_1 + _DAT_112726210);
  _objc_destroyWeak(param_1 + _DAT_11272620c);
  _objc_destroyWeak(param_1 + _DAT_112726208);
  _objc_destroyWeak(param_1 + _DAT_112726204);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf2e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_destroyWeak_11034d218)(param_1 + _DAT_112726200);
  return;
}



/* Entry: 1055bf830; end: 1055bf89b; -[SCFetchFriendsResponseServiceProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1055bf830(long param_1)

{
  _objc_destroyWeak(param_1 + _DAT_112726220);
  _objc_destroyWeak(param_1 + _DAT_112726230);
  _objc_destroyWeak(param_1 + _DAT_11272622c);
  _objc_destroyWeak(param_1 + _DAT_112726228);
  _objc_destroyWeak(param_1 + _DAT_112726224);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_storeStrong_11034d330)(param_1 + _DAT_11272621c,0);
  return;
}



/* Entry: 1055bf89c; end: 1055bf96b; -[SCThrottledFriendsResponseFetcher _shouldThrottle:withIntervalInMinutes:] */

bool FUN_1055bf89c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  
  if (param_4 == 0) {
    bVar1 = false;
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x18);
    _objc_retain(param_3);
    func_0x00010c269d40(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar2 = uVar5;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
    func_0x00010bf655c0((double)(ulong)(param_4 * 0x3c),PTR__OBJC_CLASS___NSDate_1126ae770,param_2,
                        uVar2);
    _objc_retainAutoreleasedReturnValue();
    lVar4 = param_3;
    func_0x00010bf433a0(param_3,param_2,puVar3);
    _objc_release(param_3);
    bVar1 = lVar4 == -1;
    _objc_release(puVar3);
    _objc_release(uVar2);
  }
  return bVar1;
}



/* Entry: 1055bf96c; end: 1055bf96f; -[SCThrottledFriendsResponseFetcher didStartSnapchattersUpdateDataRequest:] */

void FUN_1055bf96c(void)

{
  return;
}



/* Entry: 1055bf970; end: 1055bf973; -[SCThrottledFriendsResponseFetcher didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_1055bf970(void)

{
  return;
}



/* Entry: 1055bf974; end: 1055bf9eb; -[SCThrottledFriendsResponseFetcher .cxx_destruct] */

void FUN_1055bf974(long param_1)

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



/* Entry: 1055bf9ec; end: 1055bfa5f; -[SCDefaultSnapchattersAdder initWithSnapchattersDataMutator:] */

undefined1 * FUN_1055bf9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined *puStack_28;
  
  puVar1 = &uStack_30;
  _objc_retain(param_3);
  puStack_28 = PTR_PTR_1126e9288;
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


