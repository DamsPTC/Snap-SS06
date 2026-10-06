/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10804e360; end: 10804e48b; -[SCCustomStoriesDataSyncer pendingCustomStoryMetadataForPublicationIds:completionQueue:completion:] */

void FUN_10804e360(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010beea540(param_1);
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



/* Entry: 10804e48c; end: 10804e4cb;  */

void FUN_10804e48c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0f7440(*(undefined8 *)(lVar1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10804e4cc; end: 10804e667; -[SCCustomStoriesDataSyncer customStoryMetadataForPublicationId:completionQueue:completion:] */

void FUN_10804e4cc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10804e668;
    puStack_60 = &UNK_110849530;
    uStack_58 = param_5;
    _objc_retain(param_5);
    func_0x00010007380c(param_4,&puStack_78);
    uVar3 = uStack_58;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010bf62520(param_1);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_release(param_5);
    uVar3 = param_4;
  }
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010804e674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0);
  return;
}



/* Entry: 10804e668; end: 10804e677;  */

void FUN_10804e668(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010804e674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10804e678; end: 10804e737;  */

void FUN_10804e678(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10804e738;
  puStack_50 = &UNK_11084a9e8;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = param_2;
  uStack_38 = uVar3;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  _objc_retain(param_2);
  func_0x00010007380c(uVar2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10804e738; end: 10804e77f;  */

void FUN_10804e738(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10804e780; end: 10804e91b; -[SCCustomStoriesDataSyncer pendingCustomStoryMetadataForPublicationId:completionQueue:completion:] */

void FUN_10804e780(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10804e91c;
    puStack_60 = &UNK_110849530;
    uStack_58 = param_5;
    _objc_retain(param_5);
    func_0x00010007380c(param_4,&puStack_78);
    uVar3 = uStack_58;
  }
  else {
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    _objc_retain(param_4);
    _objc_retain(param_3);
    _objc_retain(param_5);
    func_0x00010c0f7440(param_1);
    _objc_release(puVar2);
    _objc_release(param_3);
    _objc_release(param_5);
    uVar3 = param_4;
  }
  _objc_release(uVar3);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x00010804e928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0);
  return;
}



/* Entry: 10804e91c; end: 10804e92b;  */

void FUN_10804e91c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010804e928. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 10804e92c; end: 10804e9eb;  */

void FUN_10804e92c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_60 = 0xc2000000;
  pcStack_58 = FUN_10804e9ec;
  puStack_50 = &UNK_11084a9e8;
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uStack_48 = param_2;
  uStack_38 = uVar3;
  _objc_retain(uVar1);
  uStack_40 = uVar1;
  _objc_retain(param_2);
  func_0x00010007380c(uVar2,&puStack_68);
  _objc_release(uStack_40);
  _objc_release(uStack_48);
  _objc_release(uStack_38);
  _objc_release(param_2);
  return;
}



/* Entry: 10804e9ec; end: 10804ea33;  */

void FUN_10804e9ec(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_1 + 0x30);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c0e00e0(uVar2,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 10804ea34; end: 10804eb2f; -[SCCustomStoriesDataSyncer customStoryMetadataWithCompletionQueue:completion:] */

void FUN_10804ea34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010beea540(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804eb30; end: 10804eb6b;  */

void FUN_10804eb30(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf625a0(*(undefined8 *)(lVar1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10804eb6c; end: 10804ec67; -[SCCustomStoriesDataSyncer pendingCustomStoryMetadataWithCompletionQueue:completion:] */

void FUN_10804eb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010beea540(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10804ec68; end: 10804eca3;  */

void FUN_10804ec68(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c0f7480(*(undefined8 *)(lVar1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10804eca4; end: 10804edd7; -[SCCustomStoriesDataSyncer customStoryMetadataByCreatorUserId:storyType:completionQueue:completion:] */

void FUN_10804eca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_58 [8];
  undefined8 uStack_50;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  _objc_initWeak(auStack_48,param_1);
  _objc_copyWeak(auStack_58,auStack_48);
  _objc_retain(param_3);
  uStack_50 = param_4;
  _objc_retain(param_5);
  _objc_retain(param_6);
  func_0x00010beea540(param_1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_58);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 10804edd8; end: 10804ee1b;  */

void FUN_10804edd8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010bf624c0(*(undefined8 *)(lVar1 + 0x38),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x28),
                        *(undefined8 *)(param_1 + 0x30));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10804ee1c; end: 10804ee23; -[SCCustomStoriesDataSyncer customStoryMetadataWithPublicationId:] */

void FUN_10804ee1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf625d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x38),PTR_s_customStoryMetadataWithPublicati_1125b6318);
  return;
}



/* Entry: 10804ee24; end: 10804ef27; -[SCCustomStoriesDataSyncer friendOfGroupFeedDisplayNameForPublicationId:] */

void FUN_10804ee24(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    func_0x00010c269d40();
    _objc_retainAutoreleasedReturnValue();
    puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    FUN_1084e5d80(uVar2,puVar3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar3);
    _objc_release(uVar2);
    uVar2 = uVar4;
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar5) {
    ___stack_chk_fail();
    uVar2 = *(undefined8 *)(param_3 + 0x10);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar2;
    func_0x000100447b78();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar2);
    uVar2 = uVar4;
    func_0x00010bf0a540(uVar4);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10804ef28; end: 10804ef8b; -[SCCustomStoriesDataSyncer allCustomStoryMetadata] */

void FUN_10804ef28(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100447b78();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf0a540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10804ef8c; end: 10804efef; -[SCCustomStoriesDataSyncer allCommunityStoryMetadata] */

void FUN_10804ef8c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  FUN_1084dc3b4();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf0a540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10804eff0; end: 10804f03b; -[SCCustomStoriesDataSyncer allCommunityStoryMetadataObservable] */

void FUN_10804eff0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf62560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10804f03c; end: 10804f1a3;  */

void FUN_10804f03c(undefined8 param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  
  lVar6 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_2);
  puVar3 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (puVar3 != (undefined *)0x0) {
    puVar7 = (undefined *)0x0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      puVar4 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar4;
      func_0x00010c27dd80();
      if (puVar5 == (undefined *)0x7) {
        puVar5 = puVar4;
        func_0x00010bfa2680();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (puVar5 != (undefined *)0x0) {
          func_0x00010befa120(puVar2);
        }
      }
      _objc_release(puVar4);
      puVar7 = puVar7 + 1;
    } while (puVar3 != puVar7);
    puVar3 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar6) {
    ___stack_chk_fail();
    func_0x00010bf62560();
    _objc_retainAutoreleasedReturnValue();
    puVar2 = param_2;
    func_0x00010c0b8600();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 10804f1a4; end: 10804f1ef; -[SCCustomStoriesDataSyncer allUniversityCommunityStoryMetadataObservable] */

void FUN_10804f1a4(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x00010bf62560();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_1;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10804f1f0; end: 10804f3a3;  */

void FUN_10804f1f0(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar6 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar1 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar9 = 0;
    do {
      if (lRam0000000000000000 != lVar1) {
        _objc_enumerationMutation(param_2);
      }
      lVar3 = param_2;
      func_0x00010c0e00e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c27dd80();
      if (lVar4 == 7) {
        lVar4 = lVar3;
        func_0x00010bfa2680();
        _objc_retainAutoreleasedReturnValue();
        _objc_release();
        if (lVar4 != 0) {
          lVar4 = lVar3;
          func_0x00010bfa2680();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = lVar4;
          func_0x00010bf0a5c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar4);
          lVar4 = lVar5;
          func_0x00010c0ecf20();
          if (lVar4 == 1) {
            func_0x00010befa120(puVar6);
          }
          _objc_release(lVar5);
        }
      }
      _objc_release(lVar3);
      lVar9 = lVar9 + 1;
    } while (lVar2 != lVar9);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    puVar6 = *(undefined **)(param_2 + 0x10);
    func_0x00010c269d40(puVar6);
    _objc_retainAutoreleasedReturnValue();
    puVar7 = puVar6;
    func_0x000100558768();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar6);
    puVar6 = puVar7;
    func_0x00010bf0a540(puVar7);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar7);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 10804f3a4; end: 10804f407; -[SCCustomStoriesDataSyncer allPendingCustomStoryMetadata] */

void FUN_10804f3a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x000100558768();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar1 = uVar2;
  func_0x00010bf0a540(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10804f408; end: 10804f4a7; -[SCCustomStoriesDataSyncer publicationIdForShortcutStoryWithListId:] */

void FUN_10804f408(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  FUN_1084df030();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(uVar3);
  uVar3 = uVar1;
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar3;
  func_0x00010c11ac00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10804f4a8; end: 10804f69f; -[SCCustomStoriesDataSyncer sharedStoryBlockedSnapchattersInGroupForPublicationId:completionQueue:completion:] */

void FUN_10804f4a8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined **unaff_x24;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  long lStack_48;
  
  lStack_48 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0xc2000000;
    pcStack_68 = FUN_10804f6a0;
    puStack_60 = &UNK_110849530;
    _objc_retain(param_5);
    uStack_58 = param_5;
    func_0x00010007380c(param_4,&puStack_78);
    _objc_release(uStack_58);
  }
  else {
    _objc_initWeak(auStack_80,param_1);
    puVar2 = PTR__OBJC_CLASS___NSArray_1126ae530;
    lStack_50 = param_3;
    func_0x00010bf0a140(PTR__OBJC_CLASS___NSArray_1126ae530);
    _objc_retainAutoreleasedReturnValue();
    puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_b8 = 0xc2000000;
    pcStack_b0 = FUN_10804f6b4;
    puStack_a8 = &UNK_110894250;
    _objc_retain(param_3);
    lStack_a0 = param_3;
    _objc_copyWeak(auStack_88,auStack_80);
    _objc_retain(param_4);
    uStack_98 = param_4;
    _objc_retain(param_5);
    uStack_90 = param_5;
    func_0x00010bf62520(param_1);
    _objc_release(puVar2);
    _objc_release(uStack_90);
    _objc_release(uStack_98);
    _objc_destroyWeak(auStack_88);
    _objc_release(lStack_a0);
    _objc_destroyWeak(auStack_80);
    unaff_x24 = &puStack_c0;
  }
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_48) {
    return;
  }
  ___stack_chk_fail();
  _objc_destroyWeak((undefined1 *)((long)unaff_x24 + 0x38));
  _objc_destroyWeak(auStack_80);
  __Unwind_Resume();
                    /* WARNING: Could not recover jumptable at 0x00010804f6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))
            (*(long *)(param_3 + 0x20),PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 10804f6a0; end: 10804f6b3;  */

void FUN_10804f6a0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010804f6b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))
            (*(long *)(param_1 + 0x20),PTR____NSArray0__struct_11034ab48);
  return;
}



/* Entry: 10804f6b4; end: 10804f7af;  */

void FUN_10804f6b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  lVar2 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(lVar2 + 0x68);
    func_0x00010c269d40(uVar3);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = param_2;
    func_0x00010bf1d820(param_2);
    _objc_retainAutoreleasedReturnValue();
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    _objc_retain(uVar1);
    func_0x00010c244e80(uVar3);
    _objc_release(uVar4);
    _objc_release(uVar3);
    _objc_release(uVar1);
  }
  _objc_release(lVar2);
  _objc_release(param_2);
  return;
}



/* Entry: 10804f7b0; end: 10804f7bb;  */

void FUN_10804f7b0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010804f7b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10804f7bc; end: 10804f9b7; -[SCCustomStoriesDataSyncer updateCustomStoryPublicGroupByFriendUserId:completionQueue:completion:] */

void FUN_10804f7bc(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_68 [8];
  double dStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == 0) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,0);
    }
    goto LAB_10804f968;
  }
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_1084de6bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar5 = param_1 * 1000.0;
  _objc_release(puVar3);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
LAB_10804f8a0:
    _objc_initWeak(auStack_58,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_4);
    dStack_60 = dVar5;
    _objc_retain(param_5);
    _objc_retain(param_6);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(param_6);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  else {
    lVar1 = lVar2;
    func_0x00010c0dfd40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9c880();
    _objc_release(lVar1);
    if (param_1 <= dVar5) goto LAB_10804f8a0;
  }
  _objc_release(lVar2);
LAB_10804f968:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10804f9b8; end: 10804f9f7;  */

void FUN_10804f9b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained(lVar1);
  func_0x00010bde1980(*(undefined8 *)(param_1 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 10804f9f8; end: 10804fc07; -[SCCustomStoriesDataSyncer updateCustomStoryPublicGroupByUserId:completionQueue:completion:] */

void FUN_10804f9f8(double param_1,long param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  double dVar5;
  undefined1 auStack_68 [8];
  double dStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_6);
  if (param_4 == 0) {
    if (param_6 != 0) {
      (**(code **)(param_6 + 0x10))(param_6,0);
    }
    goto LAB_10804fbb8;
  }
  lVar1 = *(long *)(param_2 + 0x10);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  FUN_1084de6bc();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar1);
  puVar3 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x00010bf64de0(PTR__OBJC_CLASS___NSDate_1126ae770);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c26f320();
  dVar5 = param_1 * 1000.0;
  _objc_release(puVar3);
  lVar1 = lVar2;
  func_0x00010bf529e0();
  if (lVar1 == 0) {
LAB_10804faf0:
    _objc_initWeak(auStack_58,param_2);
    uVar4 = *(undefined8 *)(param_2 + 0x30);
    _objc_copyWeak(auStack_68,auStack_58);
    _objc_retain(param_6);
    _objc_retain(param_4);
    dStack_60 = dVar5;
    _objc_retain(param_5);
    func_0x00010c0f7fc0(uVar4);
    _objc_release(param_5);
    _objc_release(param_4);
    _objc_release(param_6);
    _objc_destroyWeak(auStack_68);
    _objc_destroyWeak(auStack_58);
  }
  else {
    lVar1 = lVar2;
    func_0x00010c0dfd40(lVar2);
    _objc_retainAutoreleasedReturnValue();
    func_0x00010bf9c880();
    _objc_release(lVar1);
    if (param_1 <= dVar5) goto LAB_10804faf0;
    (**(code **)(param_6 + 0x10))(param_6,1);
  }
  _objc_release(lVar2);
LAB_10804fbb8:
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release(param_4);
  return;
}



/* Entry: 10804fc08; end: 10804fca7;  */

void FUN_10804fc08(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_28 [8];
  
  _objc_copyWeak(auStack_28,param_1 + 0x38);
  puVar1 = auStack_28;
  _objc_loadWeakRetained();
  _objc_release();
  if (puVar1 == (undefined1 *)0x0) {
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0);
    }
  }
  else {
    puVar1 = auStack_28;
    _objc_loadWeakRetained(puVar1);
    func_0x00010bde1980(*(undefined8 *)(param_1 + 0x40));
    _objc_release(puVar1);
  }
  _objc_destroyWeak(auStack_28);
  return;
}



/* Entry: 10804fca8; end: 10804fe3f; -[SCCustomStoriesDataSyncer _coalesceListGroupsWithUserId:isPublic:currentTime:completionQueue:completion:] */

void FUN_10804fca8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,int param_5
                  ,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [8];
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  lVar1 = 0x90;
  if (param_5 == 0) {
    lVar1 = 0x88;
  }
  uVar3 = *(undefined8 *)(param_2 + lVar1);
  _objc_retain(uVar3);
  _objc_initWeak(auStack_58,param_2);
  uVar2 = param_4;
  func_0x00010bf64920(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_68,auStack_58);
  _objc_retain(param_7);
  _objc_retain(param_4);
  uStack_60 = param_1;
  _objc_retain(param_6);
  func_0x00010c0f85e0(uVar3);
  _objc_release(param_6);
  _objc_release(param_4);
  _objc_release(param_7);
  _objc_destroyWeak(auStack_68);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar3);
  _objc_release(param_7);
  _objc_release(param_6);
  _objc_release(param_4);
  return;
}



/* Entry: 10804fe40; end: 10804fed3;  */

void FUN_10804fe40(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar1 = param_1 + 0x38;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    lVar2 = *(long *)(param_1 + 0x30);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x10))(lVar2,0);
    }
  }
  else {
    func_0x00010be2b6e0(*(undefined8 *)(param_1 + 0x40),lVar1);
  }
  _objc_release(lVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 10804fed4; end: 10804ffc3;  */

void FUN_10804fed4(long param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_copyWeak(auStack_38,param_1 + 0x20);
  puVar1 = auStack_38;
  _objc_loadWeakRetained();
  _objc_release();
  if (puVar1 == (undefined1 *)0x0) {
    if (param_3 == 0) goto LAB_10804ff84;
    puVar2 = PTR_PTR_1126b3938;
    func_0x00010c275da0(PTR_PTR_1126b3938);
    _objc_retainAutoreleasedReturnValue();
    (**(code **)(param_3 + 0x10))(param_3,0,puVar2);
  }
  else {
    puVar2 = auStack_38;
    _objc_loadWeakRetained(puVar2);
    func_0x00010be17940();
  }
  _objc_release(puVar2);
LAB_10804ff84:
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
  _objc_release(param_2);
  return;
}



/* Entry: 10804ffc4; end: 1080500cb; -[SCCustomStoriesDataSyncer _fireListUserCustomStoryGroupsWithRequest:isPublic:reply:] */

void FUN_10804ffc4(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  puVar2 = PTR__OBJC_CLASS___NSString_1126ae4d0;
  _objc_opt_class(PTR__OBJC_CLASS___NSString_1126ae4d0);
  uVar3 = param_3;
  _objc_opt_isKindOfClass(param_3,puVar2);
  uVar1 = param_3;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  uVar5 = *(undefined8 *)(param_1 + 8);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c11de00(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_retain(param_5);
  func_0x00010c09a300(uVar5);
  _objc_release(uVar1);
  _objc_release(uVar4);
  _objc_release(param_5);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 1080500cc; end: 1080500df;  */

void FUN_1080500cc(long param_1)

{
  if (*(long *)(param_1 + 0x20) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001080500d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
    return;
  }
  return;
}



/* Entry: 1080500e0; end: 1080501db; -[SCCustomStoriesDataSyncer _handleListGroupsCoalescerResponse:error:userId:currentTime:completionQueue:completion:] */

void FUN_1080500e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  _objc_retain(param_4);
  _objc_retain(param_6);
  _objc_retain(param_7);
  _objc_retain(param_8);
  puVar2 = PTR_PTR_1126d8f38;
  _objc_opt_class(PTR_PTR_1126d8f38);
  uVar3 = param_4;
  _objc_opt_isKindOfClass(param_4,puVar2);
  uVar1 = param_4;
  if ((uVar3 & 1) == 0) {
    uVar1 = 0;
  }
  _objc_retain(uVar1);
  if ((param_5 == 0) && (uVar1 != 0)) {
    func_0x00010be27ca0(param_1,param_2);
  }
  else if (param_8 != 0) {
    (**(code **)(param_8 + 0x10))(param_8,0);
  }
  _objc_release(uVar1);
  _objc_release(param_8);
  _objc_release(param_7);
  _objc_release(param_6);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_4);
  return;
}



/* Entry: 1080501dc; end: 10805035f; -[SCCustomStoriesDataSyncer _handleCustomStoryPublicGroupsListResponse:friendUserId:currentTime:completionQueue:completion:] */

void FUN_1080501dc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  uVar3 = param_1;
  _objc_retain(param_4);
  _objc_retain(param_5);
  _objc_retain(param_7);
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  _objc_retain(param_6);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf885a0();
  _objc_release(uVar2);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_108050360;
  puStack_88 = &UNK_110a19050;
  _objc_retain(param_4);
  puStack_d0 = puVar1;
  uStack_c8 = 0xc2000000;
  uStack_c0 = 0x108050374;
  puStack_b8 = &UNK_110858070;
  uStack_b0 = param_4;
  uStack_a8 = param_7;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_1;
  uStack_68 = uVar3;
  _objc_retain(param_7);
  _objc_retain(param_4);
  _objc_retain(param_5);
  func_0x00010c0f8500(uVar2,param_3,&puStack_a0,param_6,&puStack_d0);
  _objc_release(param_6);
  _objc_release(uVar2);
  _objc_release(uStack_a8);
  _objc_release(uStack_b0);
  _objc_release(uStack_78);
  _objc_release(uStack_80);
  _objc_release(param_7);
  _objc_release(param_4);
  _objc_release(param_5);
  return;
}



/* Entry: 108050360; end: 10805037f;  */

undefined8 FUN_108050360(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  double dVar29;
  double dVar30;
  long lStack_148;
  
  lVar1 = *(long *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  dVar29 = *(double *)(param_1 + 0x30);
  dVar30 = *(double *)(param_1 + 0x38);
  lVar27 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain();
  _objc_retain(lVar1);
  _objc_retain(uVar2);
  FUN_1084de31c(param_2,uVar2);
  FUN_1084de8ec(param_2,uVar2);
  puVar5 = PTR_PTR_1126d8fa0;
  _objc_alloc();
  func_0x00010c015e40(dVar29 + dVar30);
  puVar6 = puVar5;
  FUN_1085248e0();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c25ed40(param_2);
  _objc_unsafeClaimAutoreleasedReturnValue();
  _objc_release(puVar6);
  lVar7 = lVar1;
  func_0x00010bf622c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_retain();
  lVar8 = lVar7;
  func_0x00010bf52a60();
  lVar3 = lRam0000000000000000;
  while (lVar8 != 0) {
    lStack_148 = 0;
    do {
      if (lRam0000000000000000 != lVar3) {
        _objc_enumerationMutation(lVar7);
      }
      lVar28 = *(long *)(lStack_148 * 8);
      func_0x00010bf626e0();
      FUN_108055b2c();
      puVar6 = PTR_PTR_1126d8fa8;
      _objc_alloc();
      lVar9 = lVar28;
      func_0x00010bf43080();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bf1f020();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c0c54a0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar28;
      func_0x00010bf43080();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bf1f020();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010c0c5480();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar28;
      func_0x00010bf43080(lVar28);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010bf1f020();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar16;
      func_0x00010c120140();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar28;
      func_0x00010bf43080(lVar28);
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar18;
      func_0x00010bf1f020();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar19;
      func_0x00010c279e80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029860();
      _objc_release(lVar20);
      _objc_release(lVar19);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      puVar21 = PTR_PTR_1126d8fa8;
      _objc_alloc();
      lVar9 = lVar28;
      func_0x00010bf43080();
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bf1f040();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010c0c54a0();
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar28;
      func_0x00010bf43080();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar12;
      func_0x00010bf1f040();
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010c0c5480();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar28;
      func_0x00010bf43080(lVar28);
      _objc_retainAutoreleasedReturnValue();
      lVar16 = lVar15;
      func_0x00010bf1f040();
      _objc_retainAutoreleasedReturnValue();
      lVar17 = lVar16;
      func_0x00010c120140();
      _objc_retainAutoreleasedReturnValue();
      lVar18 = lVar28;
      func_0x00010bf43080(lVar28);
      _objc_retainAutoreleasedReturnValue();
      lVar19 = lVar18;
      func_0x00010bf1f040();
      _objc_retainAutoreleasedReturnValue();
      lVar20 = lVar19;
      func_0x00010c279e80();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c029860();
      _objc_release(lVar20);
      _objc_release(lVar19);
      _objc_release(lVar18);
      _objc_release(lVar17);
      _objc_release(lVar16);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      puVar22 = PTR_PTR_1126d8fb0;
      _objc_alloc();
      lVar9 = lVar28;
      func_0x00010bf43080(lVar28);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bf1b400();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar10;
      func_0x00010bf8aa00();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c00e720();
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      lVar9 = lVar28;
      func_0x00010bf43080();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0ecf20();
      _objc_release(lVar9);
      puVar23 = PTR_PTR_1126d8fb8;
      _objc_alloc(PTR_PTR_1126d8fb8);
      lVar9 = lVar28;
      func_0x00010bf43080(lVar28);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x00010bf6e6e0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar28;
      func_0x00010bf43080(lVar28);
      _objc_retainAutoreleasedReturnValue();
      lVar12 = lVar11;
      func_0x00010c22d240();
      _objc_retainAutoreleasedReturnValue();
      lVar13 = lVar28;
      func_0x00010bf43080(lVar28);
      _objc_retainAutoreleasedReturnValue();
      lVar14 = lVar13;
      func_0x00010c0ecf00();
      _objc_retainAutoreleasedReturnValue();
      lVar15 = lVar14;
      func_0x000108f579f0();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c04d660(puVar23);
      _objc_release(lVar15);
      _objc_release(lVar14);
      _objc_release(lVar13);
      _objc_release(lVar12);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      puVar24 = PTR_PTR_1126d8fc0;
      _objc_alloc(PTR_PTR_1126d8fc0);
      lVar9 = lVar28;
      func_0x00010bfceb20(lVar28);
      _objc_retainAutoreleasedReturnValue();
      lVar10 = lVar9;
      func_0x000108f579f0();
      _objc_retainAutoreleasedReturnValue();
      lVar11 = lVar28;
      func_0x00010bf85d80(lVar28);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf5a680(lVar28);
      func_0x00010c015e60((double)lVar28,puVar24);
      _objc_release(lVar11);
      _objc_release(lVar10);
      _objc_release(lVar9);
      puVar25 = puVar24;
      FUN_1085233e4(puVar24,0);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c25ed40(param_2);
      _objc_unsafeClaimAutoreleasedReturnValue();
      _objc_release(puVar25);
      _objc_release(puVar24);
      _objc_release(puVar23);
      _objc_release(puVar22);
      _objc_release(puVar21);
      _objc_release(puVar6);
      lStack_148 = lStack_148 + 1;
    } while (lVar8 != lStack_148);
    lVar8 = lVar7;
    func_0x00010bf52a60();
  }
  _objc_release(lVar7);
  _objc_release(lVar7);
  _objc_release(puVar5);
  _objc_release(uVar2);
  _objc_release(lVar1);
  uVar26 = param_2;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar27) {
    ___stack_chk_fail();
    iVar4 = (int)uVar26;
    _objc_release(lVar7);
    _objc_release(lVar7);
    _objc_release(puVar5);
    _objc_release(uVar2);
    _objc_release(lVar1);
    _objc_release(param_2);
    __Unwind_Resume();
    if (7 < iVar4 - 1U) {
      return 0;
    }
    return *(undefined8 *)(&UNK_10deed730 + (ulong)(iVar4 - 1U) * 8);
  }
  return uVar26;
}



/* Entry: 108050380; end: 10805047b; -[SCCustomStoriesDataSyncer postableCustomStoryMetadataWithCompletionQueue:completion:] */

void FUN_108050380(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  _objc_retain(param_4);
  func_0x00010beea540(param_1);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 10805047c; end: 1080504b7;  */

void FUN_10805047c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = param_1 + 0x30;
  _objc_loadWeakRetained();
  if (lVar1 != 0) {
    func_0x00010c1055a0(*(undefined8 *)(lVar1 + 0x40),param_2,*(undefined8 *)(param_1 + 0x20),
                        *(undefined8 *)(param_1 + 0x28));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 1080504b8; end: 10805053f; -[SCCustomStoriesDataSyncer _waitForLoginSyncToFinishWithBlock:] */

void FUN_1080504b8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_108050540;
  puStack_30 = &UNK_110849530;
  uStack_28 = param_3;
  _objc_retain(param_3);
  func_0x00010c0f7fc0(uVar1,param_2,&puStack_48);
  _objc_release(uStack_28);
  _objc_release(param_3);
  return;
}



/* Entry: 108050540; end: 10805054b;  */

void FUN_108050540(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108050548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))();
  return;
}



/* Entry: 10805054c; end: 108050553; -[SCCustomStoriesDataSyncer addListener:] */

void FUN_10805054c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bef9990. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_addListener__11259c008);
  return;
}



/* Entry: 108050554; end: 10805055b; -[SCCustomStoriesDataSyncer removeListener:] */

void FUN_108050554(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c12cf90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(param_1 + 0x48),PTR_s_removeListener__112628e00);
  return;
}



/* Entry: 10805055c; end: 10805055f; -[SCCustomStoriesDataSyncer didStartSnapchattersUpdateDataRequest:] */

void FUN_10805055c(void)

{
  return;
}



/* Entry: 108050560; end: 108050693; -[SCCustomStoriesDataSyncer didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

void FUN_108050560(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_78 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_initWeak(auStack_48,param_1);
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0xc2000000;
  pcStack_60 = FUN_108050694;
  puStack_58 = &UNK_1108caed8;
  _objc_copyWeak(auStack_50,auStack_48);
  _objc_copyWeak(auStack_78,auStack_48);
  func_0x00010c0bc6c0(param_3);
  _objc_destroyWeak(auStack_78);
  _objc_destroyWeak(auStack_50);
  _objc_destroyWeak(auStack_48);
  _objc_release(param_5);
  _objc_release(param_3);
  return;
}



/* Entry: 108050694; end: 1080506eb;  */

void FUN_108050694(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be307e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1080506ec; end: 1080507e7; -[SCCustomStoriesDataSyncer .cxx_destruct] */

void FUN_1080506ec(long param_1)

{
  _objc_storeStrong(param_1 + 0x98,0);
  _objc_storeStrong(param_1 + 0x90,0);
  _objc_storeStrong(param_1 + 0x88,0);
  _objc_storeStrong(param_1 + 0x80,0);
  _objc_storeStrong(param_1 + 0x78,0);
  _objc_storeStrong(param_1 + 0x70,0);
  _objc_storeStrong(param_1 + 0x68,0);
  _objc_storeStrong(param_1 + 0x60,0);
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



/* Entry: 1080507e8; end: 108050807;  */

uint FUN_1080507e8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bf4b900(uVar1,param_2,param_2);
  return (uint)uVar1 ^ 1;
}



/* Entry: 108050808; end: 108050897;  */

void FUN_108050808(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010bed6920();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 108050898; end: 10805089f;  */

void FUN_108050898(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_publicationId_112624520);
  return;
}



/* Entry: 1080508a0; end: 1080508c7;  */

void FUN_1080508a0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1080508c8; end: 1080508cf;  */

void FUN_1080508c8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c11ac10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_publicationId_112624520);
  return;
}



/* Entry: 1080508d0; end: 1080508f7;  */

void FUN_1080508d0(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 1080508f8; end: 108050b43; -[SCCustomStoriesObserver customStoryMetadataForPublicationIds:completionQueue:completion:] */

void FUN_1080508f8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (lVar1 == 0) {
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_108050b44;
    puStack_100 = &UNK_110849530;
    puStack_f8 = param_5;
    _objc_retain(param_5);
    func_0x00010007380c(param_4,&puStack_118);
    puVar2 = puStack_f8;
  }
  else {
    func_0x00010bf529e0(param_3);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar4 = *plStack_150;
      do {
        lVar5 = 0;
        do {
          if (*plStack_150 != lVar4) {
            _objc_enumerationMutation(param_3);
          }
          uVar3 = *(undefined8 *)(param_1 + 0x28);
          func_0x00010c0e00e0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(uVar3);
          lVar5 = lVar5 + 1;
        } while (lVar1 != lVar5);
        lVar1 = param_3;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(param_3);
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0xc2000000;
    pcStack_180 = FUN_108050b54;
    puStack_178 = &UNK_11084aaa8;
    puStack_170 = puVar2;
    puStack_168 = param_5;
    _objc_retain(puVar2);
    _objc_retain(param_5);
    func_0x00010007380c(param_4,&puStack_190);
    _objc_release(puStack_170);
    _objc_release(puStack_168);
  }
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000108050b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0);
  return;
}



/* Entry: 108050b44; end: 108050b53;  */

void FUN_108050b44(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108050b50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108050b54; end: 108050b8b;  */

void FUN_108050b54(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108050b8c; end: 108050c4f; -[SCCustomStoriesObserver customStoryMetadataWithCompletionQueue:completion:] */

void FUN_108050b8c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108050c50;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = uVar1;
  uStack_38 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  func_0x00010007380c(param_3,&puStack_60);
  _objc_release(param_3);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 108050c50; end: 108050c5f;  */

void FUN_108050c50(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108050c5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108050c60; end: 108050eab; -[SCCustomStoriesObserver pendingCustomStoryMetadataForPublicationIds:completionQueue:completion:] */

void FUN_108050c60(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined *param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined *puStack_190;
  undefined8 uStack_188;
  code *pcStack_180;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  _objc_retain(param_5);
  lVar1 = param_3;
  func_0x00010bf529e0();
  puVar2 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  if (lVar1 == 0) {
    puStack_118 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_110 = 0xc2000000;
    pcStack_108 = FUN_108050eac;
    puStack_100 = &UNK_110849530;
    puStack_f8 = param_5;
    _objc_retain(param_5);
    func_0x00010007380c(param_4,&puStack_118);
    puVar2 = puStack_f8;
  }
  else {
    func_0x00010bf529e0(param_3);
    func_0x00010bf71fe0();
    _objc_retainAutoreleasedReturnValue();
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_148 = 0;
    plStack_150 = (long *)0x0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    _objc_retain(param_3);
    lVar1 = param_3;
    func_0x00010bf52a60();
    if (lVar1 != 0) {
      lVar4 = *plStack_150;
      do {
        lVar5 = 0;
        do {
          if (*plStack_150 != lVar4) {
            _objc_enumerationMutation(param_3);
          }
          uVar3 = *(undefined8 *)(param_1 + 0x30);
          func_0x00010c0e00e0(uVar3);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c1d0640(puVar2);
          _objc_release(uVar3);
          lVar5 = lVar5 + 1;
        } while (lVar1 != lVar5);
        lVar1 = param_3;
        func_0x00010bf52a60();
      } while (lVar1 != 0);
    }
    _objc_release(param_3);
    puStack_190 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_188 = 0xc2000000;
    pcStack_180 = FUN_108050ebc;
    puStack_178 = &UNK_11084aaa8;
    puStack_170 = puVar2;
    puStack_168 = param_5;
    _objc_retain(puVar2);
    _objc_retain(param_5);
    func_0x00010007380c(param_4,&puStack_190);
    _objc_release(puStack_170);
    _objc_release(puStack_168);
  }
  _objc_release(puVar2);
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
                    /* WARNING: Could not recover jumptable at 0x000108050eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + 0x20) + 0x10))(*(long *)(param_3 + 0x20),0);
  return;
}



/* Entry: 108050eac; end: 108050ebb;  */

void FUN_108050eac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108050eb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x20) + 0x10))(*(long *)(param_1 + 0x20),0);
  return;
}



/* Entry: 108050ebc; end: 108050ef3;  */

void FUN_108050ebc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108050ef4; end: 108050fb7; -[SCCustomStoriesObserver pendingCustomStoryMetadataWithCompletionQueue:completion:] */

void FUN_108050ef4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_4);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(param_3);
  func_0x00010bf51e00();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  pcStack_50 = FUN_108050fb8;
  puStack_48 = &UNK_11084aaa8;
  uStack_40 = uVar1;
  uStack_38 = param_4;
  _objc_retain();
  _objc_retain(param_4);
  func_0x00010007380c(param_3,&puStack_60);
  _objc_release(param_3);
  _objc_release(uStack_40);
  _objc_release(uStack_38);
  _objc_release(uVar1);
  _objc_release(param_4);
  return;
}



/* Entry: 108050fb8; end: 108050fc7;  */

void FUN_108050fb8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000108050fc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + 0x28) + 0x10))
            (*(long *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Entry: 108050fc8; end: 108051207; -[SCCustomStoriesObserver customStoryMetadataByCreatorUserId:storyType:completionQueue:completion:] */

void FUN_108050fc8(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined *puStack_160;
  undefined8 uStack_158;
  code *pcStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_5);
  _objc_retain(param_6);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lVar2 = *(long *)(param_1 + 0x28);
  func_0x00010bf00d20();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar8 = *plStack_120;
    do {
      lVar9 = 0;
      do {
        if (*plStack_120 != lVar8) {
          _objc_enumerationMutation(lVar2);
        }
        lVar10 = *(long *)(lStack_128 + lVar9 * 8);
        lVar4 = lVar10;
        func_0x00010bf5a820();
        _objc_retainAutoreleasedReturnValue();
        lVar5 = lVar4;
        func_0x00010bf5bbc0();
        _objc_retainAutoreleasedReturnValue();
        lVar6 = lVar5;
        func_0x00010c0720c0();
        if ((int)lVar6 == 0) {
          _objc_release(lVar5);
          _objc_release(lVar4);
        }
        else {
          func_0x00010c27dd80();
          _objc_release(lVar5);
          _objc_release(lVar4);
          if (lVar10 == param_4) {
            func_0x00010befa120(puVar1);
          }
        }
        lVar9 = lVar9 + 1;
      } while (lVar3 != lVar9);
      lVar3 = lVar2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(lVar2);
  puStack_160 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_158 = 0xc2000000;
  pcStack_150 = FUN_108051208;
  puStack_148 = &UNK_11084aaa8;
  puStack_140 = puVar1;
  uStack_138 = param_6;
  _objc_retain(puVar1);
  _objc_retain(param_6);
  func_0x00010007380c(param_5,&puStack_160);
  _objc_release(puStack_140);
  _objc_release(uStack_138);
  _objc_release(puVar1);
  _objc_release(param_6);
  _objc_release(param_5);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return;
  }
  ___stack_chk_fail();
  uVar7 = *(undefined8 *)(param_3 + 0x20);
  lVar3 = *(long *)(param_3 + 0x28);
  func_0x00010bf51e00(uVar7);
  (**(code **)(lVar3 + 0x10))(lVar3,uVar7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar7);
  return;
}



/* Entry: 108051208; end: 10805123f;  */

void FUN_108051208(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  func_0x00010bf51e00(uVar2);
  (**(code **)(lVar1 + 0x10))(lVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108051240; end: 108051327; -[SCCustomStoriesObserver customStoryMetadataObservableForPublicationId:observationQueue:] */

void FUN_108051240(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  FUN_1084dc184();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  uVar2 = uVar1;
  func_0x00010bfb1920(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar3 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  func_0x00010c0e0500(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108051328; end: 1080513ef; -[SCCustomStoriesObserver customStoryPublicGroupMetadataObservableForFriendId:groupId:observationQueue:] */

void FUN_108051328(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 8);
  _objc_retain(param_5);
  _objc_retain(param_4);
  _objc_retain(param_3);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar2;
  FUN_1084dec10();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_5);
  _objc_release(param_4);
  _objc_release(param_3);
  _objc_release(uVar2);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1080513f0; end: 1080513f7;  */

void FUN_1080513f0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfb1930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_firstObject_1125c9ff0);
  return;
}



/* Entry: 1080513f8; end: 10805141f; -[SCCustomStoriesObserver customStoryMetadataMapObservable] */

void FUN_1080513f8(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108051420; end: 108051447; -[SCCustomStoriesObserver pendingCustomStoryMetadataMapObservable] */

void FUN_108051420(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108051448; end: 10805155f; -[SCCustomStoriesObserver customStoryMetadataWithPublicationId:] */

void FUN_108051448(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_60;
  undefined8 *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  lVar1 = param_3;
  func_0x00010c08fa60();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    puStack_58 = &uStack_60;
    uStack_60 = 0;
    uStack_50 = 0x3032000000;
    pcStack_48 = FUN_108051560;
    uStack_40 = 0x108051570;
    uStack_38 = 0;
    uVar2 = *(undefined8 *)(param_1 + 0x10);
    _objc_retain(param_3);
    func_0x00010c0f8240(uVar2);
    uVar2 = puStack_58[5];
    _objc_retain(uVar2);
    _objc_release(param_3);
    __Block_object_dispose(&uStack_60,8);
    _objc_release(uStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 108051560; end: 108051577;  */

void FUN_108051560(long param_1,long param_2)

{
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = 0;
  return;
}



/* Entry: 108051578; end: 1080515bb;  */

void FUN_108051578(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x28);
  func_0x00010c0e00e0(uVar1,param_2,*(undefined8 *)(param_1 + 0x28));
  _objc_retainAutoreleasedReturnValue();
  lVar3 = *(long *)(*(long *)(param_1 + 0x30) + 8);
  uVar2 = *(undefined8 *)(lVar3 + 0x28);
  *(undefined8 *)(lVar3 + 0x28) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1080515bc; end: 1080515d3; -[SCCustomStoriesObserver delegate] */

void FUN_1080515bc(long param_1)

{
  _objc_loadWeakRetained(param_1 + 0x48);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1080515d4; end: 108051653; -[SCCustomStoriesObserver .cxx_destruct] */

void FUN_1080515d4(long param_1)

{
  _objc_destroyWeak(param_1 + 0x48);
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



/* Entry: 108051654; end: 10805176f; -[SCCustomStoriesOnboardingManager initWithUserPreferences:featureSettingsService:] */

undefined8 *
FUN_108051654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_48 [8];
  undefined8 uStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  puStack_38 = PTR_PTR_1126fc328;
  puVar1 = &uStack_40;
  uStack_40 = param_1;
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
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[9];
    puVar1[9] = puVar3;
    _objc_release(uVar2);
    _objc_initWeak(auStack_48,puVar1);
    uVar2 = puVar1[3];
    puVar1[3] = 0;
    _objc_release(uVar2);
    uVar2 = puVar1[4];
    puVar1[4] = 0;
    _objc_release(uVar2);
    uVar2 = puVar1[5];
    puVar1[5] = 0;
    _objc_release(uVar2);
    uVar2 = puVar1[6];
    puVar1[6] = 0;
    _objc_release(uVar2);
    uVar2 = puVar1[7];
    puVar1[7] = 0;
    _objc_release(uVar2);
    uVar2 = puVar1[8];
    puVar1[8] = 0;
    _objc_release(uVar2);
    _objc_destroyWeak(auStack_48);
  }
  _objc_release(param_4);
  _objc_release(param_3);
  return puVar1;
}



/* Entry: 108051770; end: 108051803; -[SCCustomStoriesOnboardingManager displayedPrivateStorySendToIntro] */

undefined8 FUN_108051770(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar2 == 0) {
    uVar2 = uVar1;
    func_0x00010c114360(uVar1);
  }
  else {
    uVar2 = 1;
    func_0x00010c1e35a0(uVar1,param_2,1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 108051804; end: 108051877; -[SCCustomStoriesOnboardingManager setDisplayedPrivateStorySendToIntro:] */

void FUN_108051804(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1e35a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108051878; end: 10805190b; -[SCCustomStoriesOnboardingManager displayedCustomStorySendToIntro] */

undefined8 FUN_108051878(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar2 == 0) {
    uVar2 = uVar1;
    func_0x00010bf62320(uVar1);
  }
  else {
    uVar2 = 1;
    func_0x00010c188b20(uVar1,param_2,1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 10805190c; end: 10805197f; -[SCCustomStoriesOnboardingManager setDisplayedCustomStorySendToIntro:] */

void FUN_10805190c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108051980; end: 108051a13; -[SCCustomStoriesOnboardingManager displayedCommunityStorySendToIntro] */

undefined8 FUN_108051980(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar2 == 0) {
    uVar2 = uVar1;
    func_0x00010bf43180(uVar1);
  }
  else {
    uVar2 = 1;
    func_0x00010c17f8c0(uVar1,param_2,1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 108051a14; end: 108051a87; -[SCCustomStoriesOnboardingManager setDisplayedCommunityStorySendToIntro:] */

void FUN_108051a14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c172fe0();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c17f8c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108051a88; end: 108051b1b; -[SCCustomStoriesOnboardingManager displayedCustomStoryWithBlockedUserSendToIntro] */

undefined8 FUN_108051a88(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf1f320();
  _objc_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  if ((int)uVar2 == 0) {
    uVar2 = uVar1;
    func_0x00010bf62320(uVar1);
  }
  else {
    uVar2 = 1;
    func_0x00010c188b20(uVar1,param_2,1);
  }
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 108051b1c; end: 108051b57; -[SCCustomStoriesOnboardingManager setDisplayedCustomStoryWithBlockedUserSendToIntro:] */

void FUN_108051b1c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c188b20();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108051b58; end: 108051b97; -[SCCustomStoriesOnboardingManager sharedStoryTrustAndSafetyPromptAccepted] */

undefined8 FUN_108051b58(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22c200();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 108051b98; end: 108051bd3; -[SCCustomStoriesOnboardingManager setSharedStoryTrustAndSafetyPromptAccepted:] */

void FUN_108051b98(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff1a0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108051bd4; end: 108051c13; -[SCCustomStoriesOnboardingManager sharedStoryNewStoryMenuBadgeAccepted] */

undefined8 FUN_108051bd4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22c280();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 108051c14; end: 108051c4f; -[SCCustomStoriesOnboardingManager setSharedStoryNewStoryMenuBadgeAccepted:] */

void FUN_108051c14(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff1e0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 108051c50; end: 108051c8f; -[SCCustomStoriesOnboardingManager sharedStoryNewStoryActionBadgeAccepted] */

undefined8 FUN_108051c50(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c22c240();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 108051c90; end: 108051d07; -[SCCustomStoriesOnboardingManager setSharedStoryNewStoryActionBadgeAccepted:] */

void FUN_108051c90(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010c0df6e0(PTR__OBJC_CLASS___NSNumber_1126ae570);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar2,param_2,puVar1);
  _objc_release(puVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1ff1c0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 108051d08; end: 108051d2f; -[SCCustomStoriesOnboardingManager sharedStoryNewStoryMenuBadgeAcceptedObservable] */

void FUN_108051d08(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  _objc_retain(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 108051d30; end: 108051d37; -[SCCustomStoriesOnboardingManager _resetSharedStoryTrustAndSafetyPromptAccepted] */

void FUN_108051d30(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ff290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSharedStoryTrustAndSafetyProm_11265d6c8,0)
  ;
  return;
}



/* Entry: 108051d38; end: 108051d3f; -[SCCustomStoriesOnboardingManager _resetSharedStoryNewStoryActionBadgeAccepted] */

void FUN_108051d38(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ff1d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSharedStoryNewStoryActionBadg_11265d698,0)
  ;
  return;
}



/* Entry: 108051d40; end: 108051d47; -[SCCustomStoriesOnboardingManager _resetSharedStoryNewStoryMenuBadgeAccepted] */

void FUN_108051d40(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c1ff1f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setSharedStoryNewStoryMenuBadgeA_11265d6a0,0)
  ;
  return;
}



/* Entry: 108051d48; end: 108051d4f; -[SCCustomStoriesOnboardingManager _resetPrivateStoryIntroPromptAccepted] */

void FUN_108051d48(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c190650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_setDisplayedPrivateStorySendToIn_112641bb0,0)
  ;
  return;
}


