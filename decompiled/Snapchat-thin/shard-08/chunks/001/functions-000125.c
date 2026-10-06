/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 105e23b68; end: 105e23bc3;  */

void FUN_105e23b68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5438;
  _objc_retain(param_2);
  func_0x00010c07be00(param_2);
  func_0x00010c15a700(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e23bc4; end: 105e23bcb;  */

void FUN_105e23bc4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bf09f90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_arrayByAddingObjectsFromArray__1125a0188);
  return;
}



/* Entry: 105e23bcc; end: 105e23beb;  */

void FUN_105e23bcc(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108eb7c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e23bec; end: 105e23c47;  */

void FUN_105e23bec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b5438;
  _objc_retain(param_2);
  func_0x00010c07be00(param_2);
  func_0x00010c15a700(puVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e23c48; end: 105e23d83; -[SCSendToSectionDataSource selectionStoryObservableForSectionIdentifier:query:] */

void FUN_105e23c48(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12a18);
  if (((uVar1 & 1) == 0) &&
     (uVar1 = param_3,
     func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12dd8),
     (int)uVar1 == 0)) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12ad8);
    if ((int)uVar1 == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12b98);
      if ((int)uVar1 == 0) {
        uVar2 = 0;
        goto LAB_105e23cb4;
      }
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar4 = *(undefined8 *)(param_1 + 0x10);
      func_0x00010c0ecca0(uVar4);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c159f40(uVar3,param_2,uVar4);
      _objc_retainAutoreleasedReturnValue();
      _objc_release(uVar4);
    }
    else {
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      func_0x00010c269d40(uVar3);
      _objc_retainAutoreleasedReturnValue();
      uVar2 = uVar3;
      func_0x00010c154200();
      _objc_retainAutoreleasedReturnValue();
    }
    _objc_release(uVar3);
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + 0x130);
    func_0x00010c269d40(uVar2);
    _objc_retainAutoreleasedReturnValue();
  }
LAB_105e23cb4:
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e23d84; end: 105e23dcb; -[SCSendToSectionDataSource lastSnapTitle] */

void FUN_105e23d84(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c08a120();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e23dcc; end: 105e23e13; -[SCSendToSectionDataSource lastSnapItems] */

void FUN_105e23dcc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c089fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e23e14; end: 105e23e1b; -[SCSendToSectionDataSource sortedEntitiesObservable] */

void FUN_105e23e14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010c269d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(*(undefined8 *)(param_1 + 0x100),PTR_s_target_112678178);
  return;
}



/* Entry: 105e23e1c; end: 105e23f43; -[SCSendToSectionDataSource entityCountObservableForIndexKey:] */

void FUN_105e23e1c(long param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f8a438);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f8a458);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f8a478);
      if ((uVar1 & 1) == 0) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f8a4b8);
        if ((int)uVar1 == 0) {
          uVar5 = 0;
          goto LAB_105e23f20;
        }
        lVar4 = 0xf0;
      }
      else {
        lVar4 = 0x110;
      }
    }
    else {
      lVar4 = 0x128;
    }
  }
  else {
    lVar4 = 0xd0;
  }
  uVar2 = *(undefined8 *)(param_1 + lVar4);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar3;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
LAB_105e23f20:
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105e23f44; end: 105e24003;  */

void FUN_105e23f44(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x00010bf529e0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010c0df850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(puVar1,PTR_s_numberWithUnsignedInteger__112615828,param_2);
  return;
}



/* Entry: 105e24004; end: 105e24073; -[SCSendToSectionDataSource _bestFriendsObservable] */

void FUN_105e24004(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf19580();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105e24074; end: 105e2419b; -[SCSendToSectionDataSource _bestFriendsWithGroupsObservable] */

void FUN_105e24074(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  func_0x00010bdd4040();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010becd4a0(param_1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf41860(uVar1,param_2,param_1,&PTR___NSConcreteGlobalBlock_1108eb860);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_1);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e2419c; end: 105e241cf;  */

void FUN_105e2419c(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c244890. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (PTR_PTR_1126b5438,PTR_s_snapchatterWithSnapchatter_story_11266ec48,param_2,0,0,0,0);
  return;
}



/* Entry: 105e241d0; end: 105e24217; -[SCSendToSectionDataSource _replyRecipientsObservable] */

void FUN_105e241d0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c122fe0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e24218; end: 105e2437f; -[SCSendToSectionDataSource _selectedReplySectionObservable] */

void FUN_105e24218(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_initWeak(auStack_58,param_1);
  uVar1 = *(undefined8 *)(param_1 + 0xe0);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x00010c159a20(uVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar3 = uVar1;
  func_0x00010bf41860(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010bfad7a0();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010bfb0d80();
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar5;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar5);
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_60);
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_destroyWeak(auStack_58);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar6);
  return;
}



/* Entry: 105e24380; end: 105e243fb;  */

void FUN_105e24380(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010be433c0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e243fc; end: 105e2441b;  */

bool FUN_105e243fc(undefined8 param_1,long param_2)

{
  func_0x00010bf529e0(param_2);
  return param_2 != 0;
}



/* Entry: 105e2441c; end: 105e245f7; -[SCSendToSectionDataSource _isReplySectionSelectedWithReplyRecipients:selectedItems:] */

void FUN_105e2441c(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  long lStack_150;
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
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_3);
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSSet_1126ae870;
  ppuVar6 = &PTR___NSConcreteGlobalBlock_1108eb930;
  puVar7 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108eb930);
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar7);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_4);
  lVar2 = param_4;
  func_0x00010bf52a60();
  puVar7 = PTR____NSArray0__struct_11034ab48;
  if (lVar2 != 0) {
    lVar9 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar9) {
          _objc_enumerationMutation(param_4);
        }
        uVar3 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        func_0x00010c122a80(uVar3);
        _objc_retainAutoreleasedReturnValue();
        uVar4 = uVar3;
        func_0x00010bfe5ec0();
        _objc_retainAutoreleasedReturnValue();
        uVar5 = uVar4;
        func_0x00010c122b80();
        _objc_retainAutoreleasedReturnValue();
        puVar7 = puVar1;
        func_0x00010bf4b900();
        _objc_release(uVar5);
        _objc_release(uVar4);
        _objc_release(uVar3);
        if ((int)puVar7 != 0) {
          _objc_retain(param_3);
          puVar7 = param_3;
          goto LAB_105e24598;
        }
        lVar8 = lVar8 + 1;
      } while (lVar2 != lVar8);
      lVar2 = param_4;
      func_0x00010bf52a60();
      puVar7 = PTR____NSArray0__struct_11034ab48;
    } while (lVar2 != 0);
  }
LAB_105e24598:
  _objc_release(param_4);
  _objc_release(puVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_105e245f8;
    lStack_150 = param_4;
    puStack_148 = param_3;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain();
    puStack_178 = &uStack_180;
    uStack_180 = 0;
    uStack_170 = 0x3032000000;
    puStack_168 = &UNK_106c871d8;
    puStack_160 = &UNK_106c871e8;
    uStack_158 = 0;
    func_0x00010c0c0060(ppuVar6);
    puVar7 = (undefined *)puStack_178[5];
    _objc_retain(puVar7);
    __Block_object_dispose(&uStack_180,8);
    _objc_release(uStack_158);
    _objc_release(ppuVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar7);
  return;
}



/* Entry: 105e245f8; end: 105e245ff;  */

void FUN_105e245f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_106c871d8;
  puStack_30 = &UNK_106c871e8;
  uStack_28 = 0;
  func_0x00010c0c0060(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e24600; end: 105e24693; -[SCSendToSectionDataSource _dedupedFoldedSectionObservable:precedingSectionObservables:] */

void FUN_105e24600(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_4);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e24694;
  puStack_30 = &UNK_1108eb990;
  uStack_28 = param_4;
  _objc_retain(param_4);
  func_0x00010bfb2660(param_3,param_2,&puStack_48);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_28);
  _objc_release(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 105e24694; end: 105e2475b;  */

void FUN_105e24694(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  puVar1 = PTR_PTR_1126ae6b8;
  _objc_retain(param_2);
  func_0x00010bf41860(puVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar1);
  _objc_release(param_2);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e2475c; end: 105e24927;  */

void FUN_105e2475c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uStack_180;
  undefined8 *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined8 uStack_158;
  undefined *puStack_150;
  long lStack_148;
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
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  puVar2 = PTR__OBJC_CLASS___NSSet_1126ae870;
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  ppuVar5 = &PTR___NSConcreteGlobalBlock_1108eb950;
  func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_1108eb950);
  func_0x00010c225c20();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  _objc_retain(param_2);
  lVar3 = param_2;
  func_0x00010bf52a60();
  if (lVar3 != 0) {
    lVar7 = *plStack_120;
    do {
      lVar8 = 0;
      do {
        if (*plStack_120 != lVar7) {
          _objc_enumerationMutation(param_2);
        }
        puVar6 = PTR__OBJC_CLASS___NSSet_1126ae870;
        uVar1 = *(undefined8 *)(lStack_128 + lVar8 * 8);
        ppuVar5 = &PTR___NSConcreteGlobalBlock_1108eb970;
        func_0x000100504554(uVar1,&PTR___NSConcreteGlobalBlock_1108eb970);
        func_0x00010c225c20(puVar6);
        _objc_retainAutoreleasedReturnValue();
        _objc_release(uVar1);
        puVar4 = puVar2;
        func_0x00010c072060();
        _objc_release(puVar6);
        if ((int)puVar4 != 0) {
          _objc_release(param_2);
          puVar6 = PTR____NSArray0__struct_11034ab48;
          goto LAB_105e248d8;
        }
        lVar8 = lVar8 + 1;
      } while (lVar3 != lVar8);
      lVar3 = param_2;
      func_0x00010bf52a60();
    } while (lVar3 != 0);
  }
  _objc_release(param_2);
  puVar6 = *(undefined **)(param_1 + 0x20);
  _objc_retain(puVar6);
LAB_105e248d8:
  _objc_release(puVar2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_138 = FUN_105e24928;
    puStack_150 = puVar6;
    lStack_148 = param_2;
    puStack_140 = &stack0xfffffffffffffff0;
    _objc_retain();
    puStack_178 = &uStack_180;
    uStack_180 = 0;
    uStack_170 = 0x3032000000;
    puStack_168 = &UNK_106c871d8;
    puStack_160 = &UNK_106c871e8;
    uStack_158 = 0;
    func_0x00010c0c0060(ppuVar5);
    puVar6 = (undefined *)puStack_178[5];
    _objc_retain(puVar6);
    __Block_object_dispose(&uStack_180,8);
    _objc_release(uStack_158);
    _objc_release(ppuVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105e24928; end: 105e24937;  */

void FUN_105e24928(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  _objc_retain();
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  puStack_38 = &UNK_106c871d8;
  puStack_30 = &UNK_106c871e8;
  uStack_28 = 0;
  func_0x00010c0c0060(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e24938; end: 105e249a7; -[SCSendToSectionDataSource _allFriendsObservable] */

void FUN_105e24938(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf000c0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105e249a8; end: 105e24a17; -[SCSendToSectionDataSource _sortableSnapchatterMapObservable] */

void FUN_105e249a8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010beec0e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105e24a18; end: 105e24ae7; -[SCSendToSectionDataSource _sortedFriendsObservableForLetterKey:] */

void FUN_105e24a18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x108);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_50 = 0xc2000000;
  pcStack_48 = FUN_105e24ae8;
  puStack_40 = &UNK_1108b2f88;
  uStack_38 = param_3;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1,param_2,&puStack_58);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uStack_38);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105e24ae8; end: 105e24b3b;  */

void FUN_105e24ae8(long param_1,undefined *param_2)

{
  undefined *puVar1;
  
  func_0x00010c0e00e0(param_2,param_2,*(undefined8 *)(param_1 + 0x20));
  _objc_retainAutoreleasedReturnValue();
  puVar1 = PTR____NSArray0__struct_11034ab48;
  if (param_2 != (undefined *)0x0) {
    puVar1 = param_2;
  }
  _objc_retain(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e24b3c; end: 105e24c13; -[SCSendToSectionDataSource _quickAddSnapchatterObservableWithConfiguration:] */

void FUN_105e24b3c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c262260();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c0dad60();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar2;
  func_0x00010bf41860(uVar2,param_2,uVar1,&PTR___NSConcreteGlobalBlock_1108eb9c0);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
  _objc_release(uVar3);
  uVar2 = uVar4;
  func_0x00010c11ac40(uVar4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e24c14; end: 105e24eb3;  */

void FUN_105e24c14(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  _objc_retain(param_2);
  func_0x0001006372a4(param_3,&PTR___NSConcreteGlobalBlock_1108ebe90);
  _objc_retain(param_2);
  _objc_retain(param_3);
  lVar6 = param_2;
  func_0x00010c0d3c80();
  puVar1 = PTR__OBJC_CLASS___NSMutableSet_1126ae8e0;
  _objc_opt_new();
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_2);
      }
      lVar9 = *(long *)(lVar11 * 8);
      lVar3 = lVar9;
      func_0x00010c2923e0();
      _objc_retainAutoreleasedReturnValue();
      lVar4 = lVar3;
      func_0x00010c08fa60();
      _objc_release(lVar3);
      if (lVar4 != 0) {
        func_0x00010c2923e0(lVar9);
        _objc_retainAutoreleasedReturnValue();
        func_0x00010befa120(puVar1);
        _objc_release(lVar9);
      }
      lVar11 = lVar11 + 1;
    } while (lVar2 != lVar11);
    lVar2 = param_2;
    func_0x00010bf52a60();
  }
  _objc_release(param_2);
  _objc_retain(param_3);
  lVar2 = param_3;
  func_0x00010bf52a60();
  lVar7 = lRam0000000000000000;
  while (lVar2 != 0) {
    lVar11 = 0;
    do {
      if (lRam0000000000000000 != lVar7) {
        _objc_enumerationMutation(param_3);
      }
      uVar10 = *(undefined8 *)(lVar11 * 8);
      func_0x00010c2923e0(uVar10);
      _objc_retainAutoreleasedReturnValue();
      puVar5 = puVar1;
      func_0x00010bf4b900();
      _objc_release(uVar10);
      if (((ulong)puVar5 & 1) == 0) {
        func_0x00010befa120(lVar6);
      }
      lVar11 = lVar11 + 1;
    } while (lVar2 != lVar11);
    lVar2 = param_3;
    func_0x00010bf52a60();
  }
  _objc_release(param_3);
  lVar2 = lVar6;
  func_0x00010bf51e00(lVar6);
  _objc_release(puVar1);
  _objc_release(lVar6);
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_3);
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar8) {
    ___stack_chk_fail();
    lVar6 = *(long *)(param_2 + 0x98);
    func_0x00010c269d40(lVar6);
    _objc_retainAutoreleasedReturnValue();
    lVar7 = lVar6;
    func_0x00010c245560();
    _objc_retainAutoreleasedReturnValue();
    lVar2 = lVar7;
    func_0x00010bf870a0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar7);
    _objc_release(lVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105e24eb4; end: 105e24f23; -[SCSendToSectionDataSource _snappableSnapchatterObservable] */

void FUN_105e24eb4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x98);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c245560();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105e24f24; end: 105e24fef; -[SCSendToSectionDataSource _selectedFriendsObservableWithSelectionTracker:] */

void FUN_105e24f24(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010c0ecca0(param_3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  func_0x000108425d60();
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf09f00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(param_3);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  func_0x00010c269d40(uVar3);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = uVar3;
  func_0x00010c2445e0();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar1;
  func_0x00010bf870a0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
  _objc_release(uVar3);
  _objc_release(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105e24ff0; end: 105e25137; -[SCSendToSectionDataSource _universalSearchObservableForQuery:] */

void FUN_105e24ff0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x78);
  func_0x00010c154960(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_initWeak(auStack_48,param_1);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_copyWeak(auStack_50,auStack_48);
  uVar2 = uVar3;
  func_0x00010c2656e0(uVar3);
  _objc_retainAutoreleasedReturnValue();
  _objc_destroyWeak(auStack_50);
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_48);
  _objc_release(uVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e25138; end: 105e25157;  */

void FUN_105e25138(undefined8 param_1,undefined8 param_2)

{
  func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108eba20);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 105e25158; end: 105e2519f;  */

void FUN_105e25158(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf431a0(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010bfe5da0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e251a0; end: 105e25257;  */

void FUN_105e251a0(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 == 0) {
    puVar2 = PTR_PTR_1126ae6b8;
    func_0x00010c0860a0(PTR_PTR_1126ae6b8);
    _objc_retainAutoreleasedReturnValue();
  }
  else {
    puVar1 = *(undefined **)(param_1 + 0x48);
    func_0x00010c269d40(puVar1);
    _objc_retainAutoreleasedReturnValue();
    puVar2 = puVar1;
    func_0x00010c15a8e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar1);
  }
  _objc_release(param_1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e25258; end: 105e25467; -[SCSendToSectionDataSource _searchAddFriendsV2ObservableForQuery:] */

void FUN_105e25258(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  uVar1 = *(undefined8 *)(param_1 + 0x138);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0xc2000000;
  uStack_50 = 0x105e25310;
  puStack_48 = &UNK_1108ebac0;
  uStack_40 = param_3;
  lStack_38 = param_1;
  _objc_retain(param_3);
  uVar2 = uVar1;
  func_0x00010c2656e0(uVar1,param_2,&puStack_60);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uStack_40);
  _objc_release(param_3);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e25468; end: 105e254fb;  */

void FUN_105e25468(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e254fc; end: 105e25563; -[SCSendToSectionDataSource _recentGroupObservable] */

void FUN_105e254fc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c1225a0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105e25564; end: 105e255a3; -[SCSendToSectionDataSource _newGroupObservable] */

undefined8 FUN_105e25564(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c0d8fc0();
  _objc_release(uVar1);
  return uVar2;
}



/* Entry: 105e255a4; end: 105e255eb; -[SCSendToSectionDataSource _topGroupsObservable] */

void FUN_105e255a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x90);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010bf2fb00();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e255ec; end: 105e258bf; -[SCSendToSectionDataSource _recentRecipientsObservableWithInternalConfiguration:] */

void FUN_105e255ec(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined1 uStack_67;
  undefined1 uStack_66;
  
  _objc_retain(param_3);
  uVar5 = param_3;
  func_0x00010c122580();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar5;
  func_0x00010bf4b900();
  _objc_release(uVar5);
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x18);
  func_0x000108f3ded4();
  uVar2 = (undefined1)*(undefined8 *)(param_1 + 0x18);
  func_0x000108f3dec0();
  lVar4 = param_1 + 0x140;
  _objc_loadWeakRetained();
  uVar5 = *(undefined8 *)(param_1 + 0x48);
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = *(undefined8 *)(param_1 + 0xb0);
  uVar8 = *(ulong *)(param_1 + 0x148);
  _objc_retain(uVar7);
  func_0x00010c0cba00();
  if (uVar8 < 0x26) {
    uStack_70 = *(undefined8 *)(&UNK_10ddd0f58 + uVar8 * 8);
  }
  else {
    uStack_70 = 0xffffffffffffffff;
  }
  uVar6 = *(undefined8 *)(param_1 + 0x150);
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0xc2000000;
  uStack_a0 = 0x105e25784;
  puStack_98 = &UNK_1108ebb10;
  uStack_68 = (undefined1)uVar3;
  uStack_90 = uVar5;
  uStack_88 = uVar7;
  uStack_80 = param_3;
  lStack_78 = lVar4;
  uStack_67 = uVar1;
  uStack_66 = uVar2;
  _objc_retain(param_3);
  func_0x00010bfb2660(uVar6,param_2,&puStack_b0);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar6;
  func_0x00010c11ac40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar6);
  _objc_release(uStack_80);
  _objc_release(uVar7);
  _objc_release(param_3);
  _objc_release(uVar5);
  _objc_release(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105e258c0; end: 105e258c7;  */

void FUN_105e258c0(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c122f10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_recipients_1126265e0);
  return;
}



/* Entry: 105e258c8; end: 105e2590f; -[SCSendToSectionDataSource _selectionStoryObservable] */

void FUN_105e258c8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x50);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c15aa80();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e25910; end: 105e25993; -[SCSendToSectionDataSource _searchServiceClientObservable] */

void FUN_105e25910(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  puVar2 = PTR_PTR_1126c50e8;
  _objc_alloc(PTR_PTR_1126c50e8);
  func_0x00010c0137a0();
  uVar3 = uVar1;
  func_0x00010bf54280(uVar1,param_2,puVar2);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(puVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105e25994; end: 105e25c3b; -[SCSendToSectionDataSource _selectionSnapchatterWithSnapchatterObservable:includeStoriesSummaryInfo:includeLocation:includeRecentlyActive:] */

void FUN_105e25994(long param_1,undefined8 param_2,long param_3,int param_4,int param_5,int param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [8];
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar5);
  _objc_initWeak(auStack_58,param_1);
  uVar6 = *(undefined8 *)(param_1 + 0xb8);
  _objc_retain(uVar6);
  lVar1 = param_3;
  func_0x00010c0b8600(param_3);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  if (param_6 != 0) {
    lVar2 = param_1;
    func_0x00010bde2120(param_1);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(lVar1);
  }
  lVar1 = lVar2;
  if (param_4 == 0) {
    if (param_5 != 0) {
      func_0x00010be4f600(param_1);
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_88,auStack_58);
      lVar3 = lVar2;
      func_0x00010bf41860(lVar2);
      _objc_retainAutoreleasedReturnValue();
      lVar1 = lVar3;
      func_0x00010bf870a0();
      _objc_retainAutoreleasedReturnValue();
      _objc_release(lVar2);
      _objc_release(lVar3);
      uVar4 = uVar5;
      func_0x00010c269d40(uVar5);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c128900(0x404e000000000000);
      _objc_release(uVar4);
      _objc_destroyWeak(auStack_88);
      _objc_release(param_1);
    }
    _objc_retain(lVar1);
    lVar2 = lVar1;
  }
  else {
    func_0x00010bee6d00(param_1);
    _objc_retainAutoreleasedReturnValue();
    lVar3 = param_1;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_1);
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0xc2000000;
    pcStack_70 = FUN_105e25d8c;
    puStack_68 = &UNK_110867a98;
    _objc_copyWeak(auStack_60,auStack_58);
    func_0x00010bf41860(lVar2);
    _objc_retainAutoreleasedReturnValue();
    _objc_destroyWeak(auStack_60);
    _objc_release(lVar3);
  }
  _objc_release(lVar1);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar5);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105e25c3c; end: 105e25d8b;  */

void FUN_105e25c3c(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long *plStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long lStack_58;
  
  puVar5 = &uStack_120;
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar4 = param_2;
  _objc_retain(param_2);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_opt_new();
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  plStack_110 = (long *)0x0;
  uStack_f8 = 0;
  uStack_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  _objc_retain(param_2);
  lVar2 = param_2;
  func_0x00010bf52a60();
  if (lVar2 != 0) {
    lVar6 = *plStack_110;
    do {
      lVar7 = 0;
      do {
        if (*plStack_110 != lVar6) {
          _objc_enumerationMutation(param_2);
        }
        puVar3 = PTR_PTR_1126c25b8;
        _objc_alloc();
        func_0x00010c049120();
        func_0x00010befa120(puVar1);
        _objc_release(puVar3);
        lVar7 = lVar7 + 1;
      } while (lVar2 != lVar7);
      lVar2 = param_2;
      puVar5 = &uStack_120;
      func_0x00010bf52a60();
    } while (lVar2 != 0);
  }
  _objc_release(param_2);
  _objc_release(param_2);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _objc_retain(puVar5);
    _objc_retain(lVar4);
    puVar3 = (undefined *)(param_2 + 0x20);
    _objc_loadWeakRetained(puVar3);
    puVar1 = puVar3;
    func_0x00010bdcd540();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(puVar5);
    _objc_release(lVar4);
    _objc_release(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e25d8c; end: 105e25e8b;  */

void FUN_105e25d8c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _objc_retain(param_3);
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  lVar1 = param_1;
  func_0x00010bdcd540();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_release(param_2);
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar1);
  return;
}



/* Entry: 105e25e8c; end: 105e25f6f; -[SCSendToSectionDataSource _combineRecentlyActiveObservableWithSelectionSnapchatter:] */

void FUN_105e25e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfb2660(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e25f70; end: 105e260b3;  */

void FUN_105e25f70(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
  }
  else {
    uVar2 = param_2;
    func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108ebed0);
    uVar4 = *(undefined8 *)(lVar1 + 0x88);
    _objc_retain();
    _objc_copyWeak(auStack_48,param_1 + 0x28);
    _objc_retain(param_2);
    func_0x00010bfb2660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar2);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105e260b4; end: 105e261a7;  */

void FUN_105e260b4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c122900(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e261a8; end: 105e26227;  */

void FUN_105e261a8(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    _objc_retain(lVar2);
  }
  else {
    lVar2 = lVar1;
    func_0x00010be76020(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105e26228; end: 105e26323; -[SCSendToSectionDataSource _combineRecentlyActiveObservableWithSelectionGroups:] */

void FUN_105e26228(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  uVar1 = param_3;
  if ((*(byte *)(param_1 + 0xc0) & 1) == 0) {
    _objc_retain(param_3);
  }
  else {
    _objc_initWeak(auStack_38,param_1);
    _objc_copyWeak(auStack_40,auStack_38);
    _objc_retain(param_3);
    func_0x00010bfb2660(param_3);
    _objc_retainAutoreleasedReturnValue();
    _objc_release(param_3);
    _objc_destroyWeak(auStack_40);
    _objc_destroyWeak(auStack_38);
  }
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e26324; end: 105e26467;  */

void FUN_105e26324(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar3);
  }
  else {
    uVar2 = param_2;
    func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108ebef0);
    uVar4 = *(undefined8 *)(lVar1 + 0x88);
    _objc_retain();
    _objc_copyWeak(auStack_48,param_1 + 0x28);
    _objc_retain(param_2);
    func_0x00010bfb2660(uVar4);
    _objc_retainAutoreleasedReturnValue();
    uVar3 = uVar4;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar4);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_48);
    _objc_release(uVar2);
    _objc_release(uVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 105e26468; end: 105e2655b;  */

void FUN_105e26468(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c122900(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  _objc_retain(uVar3);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e2655c; end: 105e265db;  */

void FUN_105e2655c(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    _objc_retain(lVar2);
  }
  else {
    lVar2 = lVar1;
    func_0x00010be75fe0(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105e265dc; end: 105e266bf; -[SCSendToSectionDataSource _combineRecentlyActiveObservableWithSelectionRecipients:] */

void FUN_105e265dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [8];
  
  _objc_retain(param_3);
  _objc_initWeak(auStack_38,param_1);
  _objc_copyWeak(auStack_40,auStack_38);
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010bfb2660(param_3);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_3);
  _objc_destroyWeak(auStack_40);
  _objc_destroyWeak(auStack_38);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e266c0; end: 105e26857;  */

void FUN_105e266c0(long param_1,undefined *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [8];
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  if (lVar1 == 0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    _objc_retain(uVar4);
  }
  else {
    puVar2 = param_2;
    func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108ebf10);
    if ((*(byte *)(lVar1 + 0xc0) & 1) == 0) {
      puVar3 = PTR__OBJC_CLASS___NSArray_1126ae530;
      _objc_opt_new();
    }
    else {
      puVar3 = param_2;
      func_0x000100504554(param_2,&PTR___NSConcreteGlobalBlock_1108ebf30);
    }
    uVar5 = *(undefined8 *)(lVar1 + 0x88);
    _objc_retain(puVar2);
    _objc_retain(puVar3);
    _objc_copyWeak(auStack_58,param_1 + 0x28);
    _objc_retain(param_2);
    func_0x00010bfb2660(uVar5);
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar5;
    func_0x00010c2519e0();
    _objc_retainAutoreleasedReturnValue();
    _objc_release(uVar5);
    _objc_release(param_2);
    _objc_destroyWeak(auStack_58);
    _objc_release(puVar3);
    _objc_release(puVar2);
    _objc_release(puVar3);
    _objc_release(puVar2);
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105e26858; end: 105e26943;  */

void FUN_105e26858(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_38 [8];
  
  _objc_retain(param_2);
  uVar1 = param_2;
  func_0x00010c122900(param_2);
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_38,param_1 + 0x38);
  uVar3 = *(undefined8 *)(param_1 + 0x30);
  _objc_retain(uVar3);
  uVar2 = uVar1;
  func_0x00010c0b8600(uVar1);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_destroyWeak(auStack_38);
  _objc_release(uVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e26944; end: 105e269c3;  */

void FUN_105e26944(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  _objc_retain(param_2);
  lVar1 = param_1 + 0x28;
  _objc_loadWeakRetained();
  lVar2 = *(long *)(param_1 + 0x20);
  if (lVar1 == 0) {
    _objc_retain(lVar2);
  }
  else {
    lVar2 = lVar1;
    func_0x00010be76000(lVar1);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 105e269c4; end: 105e26a53; -[SCSendToSectionDataSource _userIdToStoriesSummaryInfoObservable] */

void FUN_105e269c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c25b4e0();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar4);
  return;
}



/* Entry: 105e26a54; end: 105e26aa3;  */

void FUN_105e26a54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010bf0a540(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010050471c();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e26aa4; end: 105e26aab;  */

void FUN_105e26aa4(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c259cd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_storyId_112674158);
  return;
}



/* Entry: 105e26aac; end: 105e26ad3;  */

void FUN_105e26aac(undefined8 param_1,undefined8 param_2)

{
  _objc_retain(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_2);
  return;
}



/* Entry: 105e26ad4; end: 105e26b87; -[SCSendToSectionDataSource _locationIsAvailableObservableFilterAndMapWithPerformer:] */

void FUN_105e26ad4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010c269d40(uVar1);
  _objc_retainAutoreleasedReturnValue();
  uVar2 = uVar1;
  func_0x00010c09fa60();
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c0b8600();
  _objc_retainAutoreleasedReturnValue();
  uVar4 = uVar3;
  func_0x00010c268560();
  _objc_retainAutoreleasedReturnValue();
  uVar5 = uVar4;
  func_0x00010c2519e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar5);
  return;
}



/* Entry: 105e26b88; end: 105e26b93;  */

undefined * FUN_105e26b88(void)

{
  return PTR____kCFBooleanTrue_11034ab68;
}



/* Entry: 105e26b94; end: 105e26d9f; -[SCSendToSectionDataSource _appendStoriesSummaryInfoWithSelectionSnapchatter:userIdToStoriesSummayInfo:] */

void FUN_105e26b94(undefined8 param_1,undefined8 param_2,undefined8 *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  long unaff_x25;
  undefined *unaff_x26;
  undefined *unaff_x27;
  long unaff_x28;
  undefined1 auStack_2e0 [8];
  undefined1 auStack_2d8 [8];
  undefined *puStack_2d0;
  long lStack_2c8;
  undefined *puStack_2c0;
  undefined *puStack_2b8;
  undefined8 uStack_2b0;
  undefined *puStack_2a8;
  undefined8 *puStack_2a0;
  undefined8 *puStack_298;
  undefined1 **ppuStack_290;
  code *pcStack_288;
  undefined8 *puStack_280;
  undefined8 *puStack_278;
  undefined8 uStack_270;
  long lStack_268;
  long *plStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined1 auStack_230 [128];
  long lStack_1b0;
  long lStack_1a0;
  undefined *puStack_198;
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  undefined8 *puStack_160;
  undefined8 *puStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_138;
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
  lStack_138 = param_4;
  _objc_retain(param_4);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar4 = &uStack_130;
  puVar2 = param_3;
  func_0x00010bf52a60();
  puVar11 = param_3;
  if (puVar2 != (undefined8 *)0x0) {
    unaff_x28 = *plStack_120;
    do {
      puVar11 = (undefined8 *)0x0;
      do {
        if (*plStack_120 != unaff_x28) {
          _objc_enumerationMutation(param_3);
        }
        unaff_x26 = *(undefined **)(lStack_128 + (long)puVar11 * 8);
        unaff_x23 = unaff_x26;
        func_0x00010c244280();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        puVar3 = unaff_x24;
        func_0x00010c08fa60();
        if (puVar3 != (undefined *)0x0) {
          unaff_x25 = lStack_138;
          func_0x00010c0e00e0();
          _objc_retainAutoreleasedReturnValue();
          if (unaff_x25 == 0) {
            func_0x00010befa120(puVar1);
          }
          else {
            unaff_x27 = PTR_PTR_1126c25b8;
            _objc_alloc();
            func_0x00010c07be00(unaff_x26);
            unaff_x26 = unaff_x27;
            func_0x00010c049120();
            func_0x00010befa120(puVar1);
            _objc_release(unaff_x26);
          }
          _objc_release(unaff_x25);
        }
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        puVar11 = (undefined8 *)((long)puVar11 + 1);
      } while (puVar2 != puVar11);
      puVar4 = &uStack_130;
      puVar2 = param_3;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (puVar2 != (undefined8 *)0x0);
  }
  _objc_release(param_3);
  _objc_release(lStack_138);
  puVar2 = param_3;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_70) {
    ___stack_chk_fail();
    pcStack_148 = FUN_105e26da0;
    lStack_1b0 = *(long *)PTR____stack_chk_guard_11034bdc0;
    puStack_278 = puVar2;
    lStack_1a0 = unaff_x28;
    puStack_198 = unaff_x27;
    puStack_190 = unaff_x26;
    lStack_188 = unaff_x25;
    puStack_180 = unaff_x24;
    puStack_178 = unaff_x23;
    uStack_170 = unaff_x22;
    puStack_168 = puVar1;
    puStack_160 = param_3;
    puStack_158 = puVar11;
    puStack_150 = &stack0xfffffffffffffff0;
    _objc_retain(puVar4);
    puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
    _objc_alloc();
    func_0x00010bf529e0(puVar4);
    func_0x00010bffc4a0();
    lStack_268 = 0;
    uStack_270 = 0;
    uStack_258 = 0;
    plStack_260 = (long *)0x0;
    uStack_248 = 0;
    uStack_250 = 0;
    uStack_238 = 0;
    uStack_240 = 0;
    _objc_retain(puVar4);
    puVar11 = &uStack_270;
    puVar10 = auStack_230;
    puStack_280 = puVar4;
    func_0x00010bf52a60();
    if (puVar4 != (undefined8 *)0x0) {
      lVar12 = *plStack_260;
      do {
        param_3 = (undefined8 *)0x0;
        do {
          if (*plStack_260 != lVar12) {
            _objc_enumerationMutation(puStack_280);
          }
          unaff_x26 = *(undefined **)(lStack_268 + (long)param_3 * 8);
          unaff_x23 = unaff_x26;
          func_0x00010c244280();
          _objc_retainAutoreleasedReturnValue();
          unaff_x24 = unaff_x23;
          func_0x00010c2923e0();
          _objc_retainAutoreleasedReturnValue();
          lVar5 = puStack_278[5];
          func_0x00010c269d40();
          _objc_retainAutoreleasedReturnValue();
          unaff_x25 = lVar5;
          func_0x00010c0fa5c0();
          _objc_retainAutoreleasedReturnValue();
          _objc_release(lVar5);
          if (unaff_x25 == 0) {
            func_0x00010befa120(puVar1);
          }
          else {
            puVar3 = PTR_PTR_1126c25b8;
            _objc_alloc();
            puVar6 = unaff_x26;
            func_0x00010c25b500(unaff_x26);
            _objc_retainAutoreleasedReturnValue();
            func_0x00010c07be00(unaff_x26);
            func_0x00010c049120();
            _objc_release(puVar6);
            func_0x00010befa120(puVar1);
            _objc_release(puVar3);
            unaff_x26 = puVar3;
          }
          _objc_release(unaff_x25);
          _objc_release(unaff_x24);
          _objc_release(unaff_x23);
          param_3 = (undefined8 *)((long)param_3 + 1);
        } while (puVar4 != param_3);
        puVar11 = &uStack_270;
        puVar10 = auStack_230;
        puVar4 = puStack_280;
        func_0x00010bf52a60();
        unaff_x22 = 0;
      } while (puVar4 != (undefined8 *)0x0);
    }
    puVar4 = puStack_280;
    _objc_release(puStack_280);
    puVar2 = puVar4;
    _objc_release();
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_1b0) {
      ___stack_chk_fail();
      puStack_298 = puVar4;
      pcStack_288 = FUN_105e26fcc;
      puStack_2d0 = unaff_x26;
      lStack_2c8 = unaff_x25;
      puStack_2c0 = unaff_x24;
      puStack_2b8 = unaff_x23;
      uStack_2b0 = unaff_x22;
      puStack_2a8 = puVar1;
      puStack_2a0 = param_3;
      ppuStack_290 = &puStack_150;
      _objc_retain(puVar11);
      _objc_retain(puVar10);
      puVar4 = puVar11;
      func_0x000100504554(puVar11,&PTR___NSConcreteGlobalBlock_1108ebcd0);
      _objc_initWeak(auStack_2d8,puVar2);
      uVar7 = puVar2[0x10];
      func_0x00010c269d40(uVar7);
      _objc_retainAutoreleasedReturnValue();
      uVar8 = uVar7;
      func_0x00010c122900();
      _objc_retainAutoreleasedReturnValue();
      _objc_copyWeak(auStack_2e0,auStack_2d8);
      uVar9 = uVar8;
      func_0x00010c25ff60(uVar8);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010bf1a3e0();
      _objc_release(uVar9);
      _objc_release(uVar8);
      _objc_release(uVar7);
      _objc_destroyWeak(auStack_2e0);
      _objc_destroyWeak(auStack_2d8);
      _objc_release(puVar4);
      _objc_release(puVar10);
      _objc_release(puVar11);
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
  return;
}



/* Entry: 105e26da0; end: 105e26fcb; -[SCSendToSectionDataSource _appendLocationWithSelectionSnapchatter:] */

void FUN_105e26da0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  long unaff_x20;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  undefined *unaff_x24;
  long unaff_x25;
  undefined *unaff_x26;
  undefined1 auStack_1a0 [8];
  undefined1 auStack_198 [8];
  undefined *puStack_190;
  long lStack_188;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  long lStack_160;
  long lStack_158;
  undefined1 *puStack_150;
  code *pcStack_148;
  long lStack_140;
  long lStack_138;
  undefined8 uStack_130;
  long lStack_128;
  long *plStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lStack_138 = param_1;
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableArray_1126ae5d8;
  _objc_alloc();
  func_0x00010bf529e0(param_3);
  func_0x00010bffc4a0();
  lStack_128 = 0;
  uStack_130 = 0;
  uStack_118 = 0;
  plStack_120 = (long *)0x0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  _objc_retain(param_3);
  puVar9 = &uStack_130;
  puVar10 = auStack_f0;
  lStack_140 = param_3;
  func_0x00010bf52a60();
  if (param_3 != 0) {
    lVar11 = *plStack_120;
    do {
      unaff_x20 = 0;
      do {
        if (*plStack_120 != lVar11) {
          _objc_enumerationMutation(lStack_140);
        }
        unaff_x26 = *(undefined **)(lStack_128 + unaff_x20 * 8);
        unaff_x23 = unaff_x26;
        func_0x00010c244280();
        _objc_retainAutoreleasedReturnValue();
        unaff_x24 = unaff_x23;
        func_0x00010c2923e0();
        _objc_retainAutoreleasedReturnValue();
        lVar2 = *(long *)(lStack_138 + 0x28);
        func_0x00010c269d40();
        _objc_retainAutoreleasedReturnValue();
        unaff_x25 = lVar2;
        func_0x00010c0fa5c0();
        _objc_retainAutoreleasedReturnValue();
        _objc_release(lVar2);
        if (unaff_x25 == 0) {
          func_0x00010befa120(puVar1);
        }
        else {
          puVar3 = PTR_PTR_1126c25b8;
          _objc_alloc();
          puVar4 = unaff_x26;
          func_0x00010c25b500(unaff_x26);
          _objc_retainAutoreleasedReturnValue();
          func_0x00010c07be00(unaff_x26);
          func_0x00010c049120();
          _objc_release(puVar4);
          func_0x00010befa120(puVar1);
          _objc_release(puVar3);
          unaff_x26 = puVar3;
        }
        _objc_release(unaff_x25);
        _objc_release(unaff_x24);
        _objc_release(unaff_x23);
        unaff_x20 = unaff_x20 + 1;
      } while (param_3 != unaff_x20);
      puVar9 = &uStack_130;
      puVar10 = auStack_f0;
      param_3 = lStack_140;
      func_0x00010bf52a60();
      unaff_x22 = 0;
    } while (param_3 != 0);
  }
  lVar11 = lStack_140;
  _objc_release(lStack_140);
  lVar2 = lVar11;
  _objc_release();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar1);
    return;
  }
  ___stack_chk_fail();
  lStack_158 = lVar11;
  pcStack_148 = FUN_105e26fcc;
  puStack_190 = unaff_x26;
  lStack_188 = unaff_x25;
  puStack_180 = unaff_x24;
  puStack_178 = unaff_x23;
  uStack_170 = unaff_x22;
  puStack_168 = puVar1;
  lStack_160 = unaff_x20;
  puStack_150 = &stack0xfffffffffffffff0;
  _objc_retain(puVar9);
  _objc_retain(puVar10);
  puVar5 = puVar9;
  func_0x000100504554(puVar9,&PTR___NSConcreteGlobalBlock_1108ebcd0);
  _objc_initWeak(auStack_198,lVar2);
  uVar6 = *(undefined8 *)(lVar2 + 0x80);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c122900();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_1a0,auStack_198);
  uVar8 = uVar7;
  func_0x00010c25ff60(uVar7);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar8);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_destroyWeak(auStack_1a0);
  _objc_destroyWeak(auStack_198);
  _objc_release(puVar5);
  _objc_release(puVar10);
  _objc_release(puVar9);
  return;
}



/* Entry: 105e26fcc; end: 105e2712f; -[SCSendToSectionDataSource _recievedSnapchatters:error:] */

void FUN_105e26fcc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  
  _objc_retain(param_3);
  _objc_retain(param_4);
  uVar1 = param_3;
  func_0x000100504554(param_3,&PTR___NSConcreteGlobalBlock_1108ebcd0);
  _objc_initWeak(auStack_58,param_1);
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  uVar3 = uVar2;
  func_0x00010c122900();
  _objc_retainAutoreleasedReturnValue();
  _objc_copyWeak(auStack_60,auStack_58);
  uVar4 = uVar3;
  func_0x00010c25ff60(uVar3);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf1a3e0();
  _objc_release(uVar4);
  _objc_release(uVar3);
  _objc_release(uVar2);
  _objc_destroyWeak(auStack_60);
  _objc_destroyWeak(auStack_58);
  _objc_release(uVar1);
  _objc_release(param_4);
  _objc_release(param_3);
  return;
}



/* Entry: 105e27130; end: 105e27137;  */

void FUN_105e27130(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010c2923f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_userId_112682320);
  return;
}



/* Entry: 105e27138; end: 105e27163;  */

void FUN_105e27138(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained(param_1);
  func_0x00010be86f40();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e27164; end: 105e2719f; -[SCSendToSectionDataSource _recentlyActiveServiceIsPopulated] */

void FUN_105e27164(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x80);
  uVar1 = *(undefined8 *)(param_1 + 0x88);
  func_0x00010c269d40(uVar2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c0d9840(uVar1,param_2,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 105e271a0; end: 105e272c7; -[SCSendToSectionDataSource _populateSelectionRecipients:withRecentlyActiveResponse:] */

void FUN_105e271a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  _objc_retain(param_3);
  puVar1 = PTR__OBJC_CLASS___NSMutableDictionary_1126ae878;
  _objc_retain(param_4);
  _objc_alloc();
  uVar2 = param_4;
  func_0x00010c2948a0(param_4);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c00c560();
  _objc_release(uVar2);
  uVar2 = param_4;
  func_0x00010bfcf800(param_4);
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_4);
  func_0x00010bef7f60(puVar1);
  _objc_release(uVar2);
  uVar2 = param_3;
  if (puVar1 == (undefined *)0x0) {
    _objc_retain(param_3);
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105e272c8;
    puStack_40 = &UNK_1108ebd50;
    _objc_retain(puVar1);
    puStack_38 = puVar1;
    func_0x000100504554(param_3,&puStack_58);
    _objc_release(puStack_38);
  }
  _objc_release(puVar1);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 105e272c8; end: 105e275bf;  */

void FUN_105e272c8(long param_1,undefined *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uStack_120;
  undefined8 *puStack_118;
  undefined8 uStack_110;
  code *pcStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 *puStack_e8;
  undefined8 uStack_e0;
  code *pcStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 *puStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 *puStack_68;
  undefined8 uStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  _objc_retain(param_2);
  puStack_68 = &uStack_70;
  uStack_70 = 0;
  uStack_60 = 0x3032000000;
  pcStack_58 = FUN_105e23144;
  uStack_50 = 0x105e23154;
  uStack_48 = 0;
  puStack_98 = &uStack_a0;
  uStack_a0 = 0;
  uStack_90 = 0x3032000000;
  pcStack_88 = FUN_105e23144;
  uStack_80 = 0x105e23154;
  uStack_78 = 0;
  puStack_b8 = &uStack_c0;
  uStack_c0 = 0;
  uStack_b0 = 0x2020000000;
  uStack_a8 = 0;
  puStack_e8 = &uStack_f0;
  uStack_f0 = 0;
  uStack_e0 = 0x3032000000;
  pcStack_d8 = FUN_105e23144;
  uStack_d0 = 0x105e23154;
  uStack_c8 = 0;
  puStack_118 = &uStack_120;
  uStack_120 = 0;
  uStack_110 = 0x3032000000;
  pcStack_108 = FUN_105e23144;
  uStack_100 = 0x105e23154;
  uStack_f8 = 0;
  func_0x00010c0c0060(param_2);
  lVar1 = puStack_68[5];
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar1;
  func_0x00010c08fa60();
  if (lVar2 != 0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      puVar6 = PTR_PTR_1126b5438;
      func_0x00010c244880(PTR_PTR_1126b5438);
      _objc_retainAutoreleasedReturnValue();
      goto LAB_105e274e8;
    }
  }
  lVar5 = puStack_118[5];
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar5;
  func_0x00010c08fa60();
  if (lVar2 == 0) {
LAB_105e274d4:
    _objc_retain(param_2);
    puVar6 = param_2;
  }
  else {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    if ((int)uVar4 == 0) goto LAB_105e274d4;
    puVar6 = PTR_PTR_1126b5438;
    func_0x00010c15a700(PTR_PTR_1126b5438);
    _objc_retainAutoreleasedReturnValue();
  }
  _objc_release(lVar5);
LAB_105e274e8:
  _objc_release(lVar1);
  __Block_object_dispose(&uStack_120,8);
  _objc_release(uStack_f8);
  __Block_object_dispose(&uStack_f0,8);
  _objc_release(uStack_c8);
  __Block_object_dispose(&uStack_c0,8);
  __Block_object_dispose(&uStack_a0,8);
  _objc_release(uStack_78);
  __Block_object_dispose(&uStack_70,8);
  _objc_release(uStack_48);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar6);
  return;
}



/* Entry: 105e275c0; end: 105e2767f;  */

void FUN_105e275c0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  _objc_retain(param_2);
  _objc_retain(param_3);
  _objc_retain(param_5);
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_2;
  _objc_retain(param_2);
  _objc_release(uVar2);
  lVar1 = *(long *)(*(long *)(param_1 + 0x28) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _objc_retain(param_3);
  _objc_release(uVar2);
  *(undefined8 *)(*(long *)(*(long *)(param_1 + 0x30) + 8) + 0x18) = param_4;
  lVar1 = *(long *)(*(long *)(param_1 + 0x38) + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  _objc_release(uVar2);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e27680; end: 105e276b7;  */

void FUN_105e27680(long param_1,undefined8 param_2)

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



/* Entry: 105e276b8; end: 105e2776b; -[SCSendToSectionDataSource _populateSelectionSnapchatters:withRecentlyActiveResponse:] */

void FUN_105e276b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  func_0x00010c2948a0();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  if (param_4 == 0) {
    _objc_retain(param_3);
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105e2776c;
    puStack_40 = &UNK_1108ebd80;
    lStack_38 = param_4;
    func_0x000100504554(param_3,&puStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e2776c; end: 105e2788b;  */

void FUN_105e2776c(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010c244280();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  puVar3 = puVar2;
  func_0x00010c08fa60();
  if (puVar3 != (undefined *)0x0) {
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar5 = uVar4;
    func_0x00010bf1f3c0();
    _objc_release(uVar4);
    if ((int)uVar5 != 0) {
      puVar3 = PTR_PTR_1126c25b8;
      _objc_alloc(PTR_PTR_1126c25b8);
      puVar6 = param_2;
      func_0x00010c25b500(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_2;
      func_0x00010c09ea00(param_2);
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c049120(puVar3);
      _objc_release(puVar7);
      _objc_release(puVar6);
      goto LAB_105e2785c;
    }
  }
  _objc_retain(param_2);
  puVar3 = param_2;
LAB_105e2785c:
  _objc_release(puVar2);
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 105e2788c; end: 105e2793f; -[SCSendToSectionDataSource _populateSelectionGroups:withRecentlyActiveResponse:] */

void FUN_105e2788c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined *puStack_58;
  undefined8 uStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  _objc_retain(param_3);
  func_0x00010bfcf800();
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_3;
  if (param_4 == 0) {
    _objc_retain(param_3);
  }
  else {
    puStack_58 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_50 = 0xc2000000;
    pcStack_48 = FUN_105e27940;
    puStack_40 = &UNK_1108ebdb0;
    lStack_38 = param_4;
    func_0x000100504554(param_3,&puStack_58);
  }
  _objc_release(param_4);
  _objc_release(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e27940; end: 105e27b2b;  */

void FUN_105e27940(long param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  
  _objc_retain(param_2);
  puVar1 = param_2;
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  puVar2 = puVar1;
  func_0x00010c08fa60();
  if (puVar2 != (undefined *)0x0) {
    uVar3 = *(undefined8 *)(param_1 + 0x20);
    func_0x00010c0e00e0();
    _objc_retainAutoreleasedReturnValue();
    uVar4 = uVar3;
    func_0x00010bf1f3c0();
    _objc_release(uVar3);
    if ((int)uVar4 != 0) {
      puVar2 = PTR_PTR_1126c50f0;
      _objc_alloc();
      puVar5 = param_2;
      func_0x00010bfceb20();
      _objc_retainAutoreleasedReturnValue();
      puVar6 = param_2;
      func_0x00010bfcef60(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar7 = param_2;
      func_0x00010c2711a0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar8 = param_2;
      func_0x00010c260dc0(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar9 = param_2;
      func_0x00010c089e20(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar10 = param_2;
      func_0x00010c0ecc20(param_2);
      _objc_retainAutoreleasedReturnValue();
      puVar11 = param_2;
      func_0x00010c0891c0();
      _objc_retainAutoreleasedReturnValue();
      puVar12 = param_2;
      func_0x00010bf5ab40();
      _objc_retainAutoreleasedReturnValue();
      func_0x00010c0dca60();
      func_0x00010c018d80(puVar2);
      _objc_release(puVar12);
      _objc_release(puVar11);
      _objc_release(puVar10);
      _objc_release(puVar9);
      _objc_release(puVar8);
      _objc_release(puVar7);
      _objc_release(puVar6);
      _objc_release(puVar5);
      goto LAB_105e27af8;
    }
  }
  _objc_retain(param_2);
  puVar2 = param_2;
LAB_105e27af8:
  _objc_release(puVar1);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 105e27b2c; end: 105e27cdf; -[SCSendToSectionDataSource _isRecentlyActiveAvailibleForSectionWithIdentifier:] */

undefined8 FUN_105e27b2c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  _objc_retain(param_3);
  uVar1 = param_3;
  func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f129f8);
  if ((uVar1 & 1) == 0) {
    uVar1 = param_3;
    func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12a38);
    if ((uVar1 & 1) == 0) {
      uVar1 = param_3;
      func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12a58);
      if (((uVar1 & 1) == 0) &&
         (uVar1 = param_3,
         func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12a78),
         (uVar1 & 1) == 0)) {
        uVar1 = param_3;
        func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12af8);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_3;
          func_0x00010bf4bb00(param_3,param_2,&PTR____CFConstantStringClassReference_110f12b18);
          if ((uVar1 & 1) == 0) {
            uVar1 = param_3;
            func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12b38);
            if ((uVar1 & 1) == 0) {
              uVar1 = param_3;
              func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12bb8);
              if ((uVar1 & 1) == 0) {
                uVar1 = param_3;
                func_0x00010c0720c0(param_3,param_2,&PTR____CFConstantStringClassReference_110f12c78
                                   );
                if ((uVar1 & 1) == 0) {
                  uVar1 = param_3;
                  func_0x00010c0720c0(param_3,param_2,
                                      &PTR____CFConstantStringClassReference_110f12c98);
                  if ((uVar1 & 1) == 0) {
                    uVar1 = param_3;
                    func_0x00010c0720c0(param_3,param_2,
                                        &PTR____CFConstantStringClassReference_110f12cb8);
                    if ((uVar1 & 1) == 0) {
                      uVar1 = param_3;
                      func_0x00010c0720c0(param_3,param_2,
                                          &PTR____CFConstantStringClassReference_110f12a98);
                      if ((uVar1 & 1) == 0) {
                        uVar1 = param_3;
                        func_0x00010c0720c0(param_3,param_2,
                                            &PTR____CFConstantStringClassReference_110f12e58);
                        if ((uVar1 & 1) == 0) {
                          uVar1 = param_3;
                          func_0x00010c0720c0(param_3,param_2,
                                              &PTR____CFConstantStringClassReference_110f12bd8);
                          if ((uVar1 & 1) == 0) {
                            uVar1 = param_3;
                            func_0x00010c0720c0(param_3,param_2,
                                                &PTR____CFConstantStringClassReference_110f12c58);
                            if ((int)uVar1 == 0) {
                              param_1 = 0;
                              goto LAB_105e27bb4;
                            }
                            uVar2 = 0x2000;
                          }
                          else {
                            uVar2 = 0x1000;
                          }
                        }
                        else {
                          uVar2 = 0x8000;
                        }
                      }
                      else {
                        uVar2 = 0x800;
                      }
                    }
                    else {
                      uVar2 = 4;
                    }
                  }
                  else {
                    uVar2 = 0x400;
                  }
                }
                else {
                  uVar2 = 0x200;
                }
              }
              else {
                uVar2 = 0x10;
              }
            }
            else {
              uVar2 = 0x80;
            }
          }
          else {
            uVar2 = 0x40;
          }
        }
        else {
          uVar2 = 0x20;
        }
      }
      else {
        uVar2 = 2;
      }
    }
    else {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 8;
  }
  func_0x00010be9cd80(param_1,param_2,uVar2);
LAB_105e27bb4:
  _objc_release(param_3);
  return param_1;
}



/* Entry: 105e27ce0; end: 105e27cef; -[SCSendToSectionDataSource _sectionEnabledWithCofKey:] */

bool FUN_105e27ce0(long param_1,undefined8 param_2,ulong param_3)

{
  return (param_3 & (*(ulong *)(param_1 + 200) ^ 0xffffffffffffffff)) == 0;
}



/* Entry: 105e27cf0; end: 105e27ee3; -[SCSendToSectionDataSource .cxx_destruct] */

void FUN_105e27cf0(long param_1)

{
  _objc_storeStrong(param_1 + 0x150,0);
  _objc_storeStrong(param_1 + 0x148,0);
  _objc_destroyWeak(param_1 + 0x140);
  _objc_storeStrong(param_1 + 0x138,0);
  _objc_storeStrong(param_1 + 0x130,0);
  _objc_storeStrong(param_1 + 0x128,0);
  _objc_storeStrong(param_1 + 0x120,0);
  _objc_storeStrong(param_1 + 0x118,0);
  _objc_storeStrong(param_1 + 0x110,0);
  _objc_storeStrong(param_1 + 0x108,0);
  _objc_storeStrong(param_1 + 0x100,0);
  _objc_storeStrong(param_1 + 0xf8,0);
  _objc_storeStrong(param_1 + 0xf0,0);
  _objc_storeStrong(param_1 + 0xe8,0);
  _objc_storeStrong(param_1 + 0xe0,0);
  _objc_storeStrong(param_1 + 0xd8,0);
  _objc_storeStrong(param_1 + 0xd0,0);
  _objc_storeStrong(param_1 + 0xb8,0);
  _objc_storeStrong(param_1 + 0xb0,0);
  _objc_storeStrong(param_1 + 0xa8,0);
  _objc_storeStrong(param_1 + 0xa0,0);
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



/* Entry: 105e27ee4; end: 105e27f03; -[SCSendToSectionDataSource prewarmRecentRecipientsObservable] */

void FUN_105e27ee4(long param_1)

{
  func_0x00010c269d40(*(undefined8 *)(param_1 + 0x128));
  _objc_retainAutoreleasedReturnValue();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 105e27f04; end: 105e27f0b;  */

void FUN_105e27f04(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfceb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_groupId_1125d1470);
  return;
}



/* Entry: 105e27f0c; end: 105e27ff3;  */

byte FUN_105e27f0c(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  undefined8 *puStack_38;
  undefined8 uStack_30;
  undefined1 uStack_28;
  
  _objc_retain(param_2);
  puStack_38 = &uStack_40;
  uStack_40 = 0;
  uStack_30 = 0x2020000000;
  uStack_28 = 0;
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  _objc_retain(uVar2);
  func_0x00010c0c0060(param_2);
  bVar1 = *(byte *)(puStack_38 + 3);
  _objc_release(uVar2);
  __Block_object_dispose(&uStack_40,8);
  _objc_release(param_2);
  return (bVar1 ^ 0xff) & 1;
}



/* Entry: 105e27ff4; end: 105e27ff7;  */

void FUN_105e27ff4(void)

{
  return;
}



/* Entry: 105e27ff8; end: 105e2804f;  */

void FUN_105e27ff8(long param_1,undefined8 param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*(undefined8 *)(param_1 + 0x20);
  func_0x00010bfceb20(param_2);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010bf4b900();
  *(undefined1 *)(*(long *)(*(long *)(param_1 + 0x28) + 8) + 0x18) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e28050; end: 105e28053;  */

void FUN_105e28050(void)

{
  return;
}



/* Entry: 105e28054; end: 105e2806f;  */

uint FUN_105e28054(undefined8 param_1,undefined8 param_2)

{
  func_0x00010901c73c(param_2);
  return (uint)param_2 ^ 1;
}



/* Entry: 105e28070; end: 105e280b7;  */

void FUN_105e28070(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x00010c244280(param_2);
  _objc_retainAutoreleasedReturnValue();
  uVar1 = param_2;
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e280b8; end: 105e280bf;  */

void FUN_105e280b8(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfceb30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_2,PTR_s_groupId_1125d1470);
  return;
}



/* Entry: 105e280c0; end: 105e281a3;  */

void FUN_105e280c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105e23144;
  uStack_30 = 0x105e23154;
  uStack_28 = 0;
  func_0x00010c0c0060(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e281a4; end: 105e281e3;  */

void FUN_105e281a4(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010c2923e0();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e281e4; end: 105e282c7;  */

void FUN_105e281e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uStack_50;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  _objc_retain(param_2);
  puStack_48 = &uStack_50;
  uStack_50 = 0;
  uStack_40 = 0x3032000000;
  pcStack_38 = FUN_105e23144;
  uStack_30 = 0x105e23154;
  uStack_28 = 0;
  func_0x00010c0c0060(param_2);
  uVar1 = puStack_48[5];
  _objc_retain(uVar1);
  __Block_object_dispose(&uStack_50,8);
  _objc_release(uStack_28);
  _objc_release(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 105e282c8; end: 105e28307;  */

void FUN_105e282c8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x00010bfceb20();
  _objc_retainAutoreleasedReturnValue();
  lVar2 = *(long *)(*(long *)(param_1 + 0x20) + 8);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x28) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 105e28308; end: 105e28593; -[SCSendToSuggestionsBarProvider initWithValdiRuntimeProvider:selectionTracker:composerPeopleBridgeFriendServices:composerPeopleBridgeGroupServices:composerNetworkingBridgeServices:userInitiatedPerformer:alertPresenter:cofStore:selectionRecipientObservableRepository:selectionGroupObservableRepository:] */

undefined8 *
FUN_105e28308(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_70;
  undefined *puStack_68;
  
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
  puStack_68 = PTR_PTR_1126ed3b0;
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
    _objc_retain(param_8);
    uVar2 = puVar1[6];
    puVar1[6] = param_8;
    _objc_release(uVar2);
    _objc_retain(param_9);
    uVar2 = puVar1[7];
    puVar1[7] = param_9;
    _objc_release(uVar2);
    _objc_retain(param_10);
    uVar2 = puVar1[8];
    puVar1[8] = param_10;
    _objc_release(uVar2);
    _objc_retain(param_11);
    uVar2 = puVar1[9];
    puVar1[9] = param_11;
    _objc_release(uVar2);
    _objc_retain(param_12);
    uVar2 = puVar1[10];
    puVar1[10] = param_12;
    _objc_release(uVar2);
    *(undefined1 *)(puVar1 + 0xb) = 0;
    puVar3 = PTR_PTR_1126ae568;
    _objc_opt_new();
    uVar2 = puVar1[0xc];
    puVar1[0xc] = puVar3;
    _objc_release(uVar2);
    puVar3 = PTR_PTR_1126ae810;
    _objc_opt_new();
    uVar2 = puVar1[0xd];
    puVar1[0xd] = puVar3;
    _objc_release(uVar2);
    func_0x00010bec7940(puVar1);
    func_0x00010beb1160(puVar1);
  }
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



/* Entry: 105e28594; end: 105e28953; -[SCSendToSuggestionsBarProvider _setupView] */

void FUN_105e28594(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined1 auStack_a8 [8];
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  
  puVar1 = PTR_PTR_1126b0c98;
  _objc_alloc(PTR_PTR_1126b0c98);
  func_0x00010c0368e0();
  lVar2 = *(long *)(param_1 + 0x18);
  func_0x00010bfb8b80();
  _objc_retainAutoreleasedReturnValue();
  lVar3 = lVar2;
  (**(code **)(lVar2 + 0x10))();
  _objc_retainAutoreleasedReturnValue();
  lVar4 = lVar3;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  _objc_release(lVar3);
  _objc_release(lVar2);
  puVar5 = PTR_PTR_1126c50f8;
  _objc_alloc(PTR_PTR_1126c50f8);
  uVar6 = *(undefined8 *)(param_1 + 0x40);
  func_0x00010c269d40(uVar6);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c015b40(puVar5);
  _objc_release(uVar6);
  uVar7 = *(undefined8 *)(param_1 + 0x20);
  func_0x00010bfcf320(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4aa0(puVar5);
  _objc_release(uVar6);
  _objc_release(uVar7);
  func_0x00010c166b20(puVar5);
  puVar8 = PTR_PTR_1126ae728;
  func_0x00010bf24820(PTR_PTR_1126ae728);
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c196320();
  _objc_unsafeClaimAutoreleasedReturnValue();
  func_0x00010c17ca40(puVar8);
  _objc_unsafeClaimAutoreleasedReturnValue();
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  func_0x00010bfcfa80(uVar9);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar9;
  func_0x00010c269d40();
  _objc_retainAutoreleasedReturnValue();
  uVar7 = uVar6;
  func_0x00010c0b7020();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c1a4c80(puVar5);
  _objc_release(uVar7);
  _objc_release(uVar6);
  _objc_release(uVar9);
  puVar10 = PTR_PTR_1126c5100;
  _objc_alloc_init(PTR_PTR_1126c5100);
  _objc_initWeak(auStack_78,param_1);
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0xc2000000;
  pcStack_90 = FUN_105e28954;
  puStack_88 = &UNK_1108ebf80;
  _objc_copyWeak(auStack_80,auStack_78);
  func_0x00010c1d3900(puVar10);
  _objc_copyWeak(auStack_a8,auStack_78);
  func_0x00010c1d2040(puVar10);
  puVar11 = PTR_PTR_1126c5108;
  _objc_alloc(PTR_PTR_1126c5108);
  lVar3 = param_1;
  func_0x00010be9e020(param_1);
  _objc_retainAutoreleasedReturnValue();
  lVar2 = lVar3;
  func_0x00010c272120();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c044520(puVar11);
  _objc_release(lVar2);
  _objc_release(lVar3);
  puVar12 = PTR_PTR_1126c5110;
  _objc_alloc();
  uVar7 = *(undefined8 *)(param_1 + 8);
  func_0x00010c269d40(uVar7);
  _objc_retainAutoreleasedReturnValue();
  uVar6 = uVar7;
  func_0x00010c142e00();
  _objc_retainAutoreleasedReturnValue();
  func_0x00010c061d40();
  uVar9 = *(undefined8 *)(param_1 + 0x70);
  *(undefined **)(param_1 + 0x70) = puVar12;
  _objc_release(uVar9);
  _objc_release(uVar6);
  _objc_release(uVar7);
  _objc_release(puVar11);
  _objc_destroyWeak(auStack_a8);
  _objc_destroyWeak(auStack_80);
  _objc_destroyWeak(auStack_78);
  _objc_release(puVar10);
  _objc_release(puVar8);
  _objc_release(puVar5);
  _objc_release(lVar4);
  _objc_release(puVar1);
  return;
}



/* Entry: 105e28954; end: 105e289b3;  */

void FUN_105e28954(long param_1,undefined8 param_2)

{
  _objc_retain(param_2);
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be6bc20(param_1);
  }
  _objc_release(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 105e289b4; end: 105e289e7;  */

void FUN_105e289b4(long param_1)

{
  param_1 = param_1 + 0x20;
  _objc_loadWeakRetained();
  if (param_1 != 0) {
    func_0x00010be68e20(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 105e289e8; end: 105e28a5b; -[SCSendToSuggestionsBarProvider _onDismiss] */

void FUN_105e289e8(long param_1)

{
  undefined8 uVar1;
  undefined *puStack_48;
  undefined8 uStack_40;
  code *pcStack_38;
  undefined *puStack_30;
  undefined8 uStack_28;
  
  uVar1 = *(undefined8 *)(param_1 + 0x70);
  puStack_48 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_40 = 0xc2000000;
  pcStack_38 = FUN_105e28a5c;
  puStack_30 = &UNK_110842e18;
  uStack_28 = uVar1;
  _objc_retain(uVar1);
  func_0x0001000d76cc("APPSTORE",&puStack_48);
  _objc_release(uVar1);
  return;
}


